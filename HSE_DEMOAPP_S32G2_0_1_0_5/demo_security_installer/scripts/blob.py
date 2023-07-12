#!/usr/bin/env python

#/*==================================================================================================
#*
#*   Copyright 2019-2020 NXP
#*
#*   This software is owned or controlled by NXP and may only be used strictly in accordance with
#*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
#*   activating and/or otherwise using the software, you are agreeing that you have read, and that
#*   you agree to comply with and are bound by, such license terms. If you do not agree to
#*   be bound by the applicable license terms, then you may not retain, install, activate or
#*   otherwise use the software.
#==================================================================================================*/

import argparse
import logging
import os
import json

from utils import *

NEW = "new"
UPDATE = "update"
QSPI = "qspi"
SD = "sd"

options = [NEW, UPDATE]
default_option = NEW
default_json = "blob_new.json"
default_blob = "blob.bin"
boot_options = [QSPI, SD]
default_boot_if = QSPI


# Data type modification functions
mod_func = {
    'b':  modify_byte_at_offset,
    'w':  modify_word_at_offset,
    'dw': modify_double_word_at_offset,
    'dq': not_supported
}
# Data type get functions
get_func = {
    'b':  get_byte_from_offset,
    'w':  get_word_from_offset,
    'dw': get_double_word_from_offset,
    'dq': not_supported
}
# Image size from contents
get_img_size = {
    "pHSE": lambda contents: get_double_word_from_offset(contents, 0x0C),
    "pHSE_bck": lambda contents: get_double_word_from_offset(contents, 0x0C),
    "pApp": lambda contents: get_double_word_from_offset(contents, 0x0C),
    "pApp_bck": lambda contents: get_double_word_from_offset(contents, 0x0C),
    "pDCD": lambda contents: get_word_from_offset(contents, 0x01),
    "pDCD_bck": lambda contents: get_word_from_offset(contents, 0x01),
    "pSelfTest": lambda contents: get_word_from_offset(contents, 0x01),
    "pSelfTest_bck": lambda contents: get_word_from_offset(contents, 0x01)
}

# Padding to be added in the blob
padd = {
    'qspi': 'F',
    'sd':   '0'
}

def parse_cli_arguments():
    ''' Parses the command line arguments.
    '''
    parser = argparse.ArgumentParser(description='Create a new blob image or update an existing one based on json coniguration file.')
    parser.add_argument('-o', '--option', default=default_option, choices=options,
                        help='Option for blob creation: \n\tnew - Create blob from scratch\n\tupdate - Update an existing blob')
    parser.add_argument('-j', '--json', default=default_json,
                        help='JSON file containing blob configuration')
    parser.add_argument('-b', '--blob', default=default_blob,
                        help='Name of the blob: \n\tnew - Output blob name\n\tupdate - Input blob name. Output will have .modified added to this name')
    parser.add_argument('-i', '--interface', default=default_boot_if, choices=boot_options,
                        help='The boot interface: QSPI (default) or SD')
    return parser.parse_args()

def update_ivt(ivt_contents, ivt_dict):
    '''
        Updates IVT according to JSON file.
        It considers only the fields whose value is set (not "")
    '''
    # Modify according to JSON configuration
    logging.info('Updating IVT according to IVT.content field:\n{0}'.format(ivt_dict["content"]))
    for v in filter(lambda v: v['value'], ivt_dict['content'].values()):
        mod_func[v['type']](ivt_contents, toHexInt(v['offset']), toHexInt(v['value']))

    # Sanity check for LC configuration word
    if get_double_word_from_offset(ivt_contents, toHexInt(ivt_dict['content']['LCCfgWord']['offset'])):
        logging.error('LCCfgWord cause irreversible changes by advancing the LC.\n \
            We advise to leave it on 0 and program LC via HSE services')
        exit(1)

def update_header_app(app_contents, img, bin_size):
    '''
        Updates Application header (primary or backup) according to JSON file.
        Sets the 'codeLength' according to binary file size
        If 'pBSBTag' field is not set or value is "end" -> adds it to the end of the image
        Otherwise considers only the fields whose value is set (not "")
    '''
    name, img_dict, img_addr = img

    # Set code length in header according to bin size
    img_dict['header']['codeLength']['value'] = toHexStr(bin_size)
    logging.debug(img_dict['header']['codeLength']['value'])

    # Set BSB address tag to the end of image if value is not specified or "end"
    if (not img_dict['header']['pBSBTag']['value']) or img_dict['header']['pBSBTag']['value'].lower() == 'end':
        img_dict['header']['pBSBTag']['value'] = toHexStr(toHexInt(img_addr) + header_size[name] + bin_size)
    logging.debug(img_dict['header']['pBSBTag']['value'])

    # Update other fields which have a specified value
    for v in filter(lambda v: 'value' in v.keys() and v['value'], img_dict['header'].values()):
        mod_func[v['type']](app_contents, toHexInt(v['offset']), toHexInt(v['value']))

def update_header_dcd_selftest(app_contents, img, bin_size):
    '''
        Updates DCD/SelfTest header (primary or backup) according to JSON file.
        Sets the 'len' according to binary file size
    '''
    _, img_dict, _ = img

    img_dict['header']['len']['value'] = toHexStr(bin_size)
    logging.debug(img_dict['header']['len']['value'])

    # Update other fields which have a specified value
    for v in filter(lambda v: v['value'], img_dict['header'].values()):
        mod_func[v['type']](app_contents, toHexInt(v['offset']), toHexInt(v['value']))


# Header construction functions
update_header_func = {
    "pApp":          update_header_app,
    "pApp_bck":      update_header_app,
    "pDCD":          update_header_dcd_selftest,
    "pDCD_bck":      update_header_dcd_selftest,
    "pSelfTest":     update_header_dcd_selftest,
    "pSelfTest_bck": update_header_dcd_selftest
}

def get_enabled_images_sorted(img_list, ivt_dict):
    '''
        Filter images specified in IVT, appends their address to JSON entry
        and sort from lowest to highest addresses determining the order in blob image.
    '''
    img_addr_in_ivt = lambda name: ivt_dict['content'][name]['value']

    img_list = list(filter(lambda entry: entry[0] in ivt_dict['content'].keys(), img_list))
    logging.debug(list(map(lambda entry: (entry[0]), img_list)))
    img_list = list(map(lambda entry: (entry[0], entry[1], img_addr_in_ivt(entry[0])), img_list))
    logging.debug(list(map(lambda entry: (entry[0], entry[2]), (img_list))))
    img_list = list(filter(lambda entry: entry[2], img_list))
    logging.debug(list(map(lambda entry: (entry[0], entry[2]), img_list)))
    img_list = list(filter(lambda entry: toHexInt(entry[2]), img_list))
    logging.debug(list(map(lambda entry: (entry[0], entry[2]), img_list)))

    # Sort images according to address specified in IVT
    img_list.sort(key=lambda entry: toHexInt(entry[2]))
    logging.debug(list(map(lambda entry: (entry[0], entry[2]), img_list)))

    return img_list

def validate_image(name, img_header_tag, bin_size):
    '''
        Validates the image by verifying the header tag (first byte)
        and binary size to not exceed maximum.
    '''
    # Verify header tag of image
    if img_header_tag not in header_tag[name]:
        logging.error('Invalid header tag {0} for image \'{1}\'. Should be one of {2} values.'\
            .format(toHexStr(img_header_tag), name, list(map(toHexStr, header_tag[name]))))
        exit(1)
    # Verify image size is less than maximum
    if name in img_max_size.keys() and bin_size > img_max_size[name]:
        logging.error('Invalid image size for \'{0}\'. Exceeded maximum \'{1}\'.'
            .format(name, toHexStr(img_max_size[name])))
        exit(1)


def update_blob(contents, blob_dict):
    '''
        Update the existing blob (in contents list) based on blob configuration json
    '''
    # Get IVT information from the input blob
    ivt_dict = default_ivt_dict
    for v in ivt_dict['content'].values():
        v['value'] = toHexStr(get_double_word_from_offset(contents, toHexInt(v['offset'])))

    # Updated IVT if enabled in JSON configuration file
    if 'IVT' in blob_dict.keys():
        # Update the IVT with the specified values
        for k, v in filter(lambda entry: entry[1]['value'], blob_dict['IVT']['content'].items()):
            ivt_dict['content'][k] = v
        # Update contents
        update_ivt(contents, ivt_dict)

    # Link the image addresses specified in IVT with configuration in JSON
    img_list = list(map(lambda entry: ("p"+entry[0], entry[1]), blob_dict.items()))
    logging.debug(list(map(lambda entry: (entry[0]), img_list)))

    # Filter and sort the list of images which are specified in IVT (and address is not 0)
    img_list = get_enabled_images_sorted(img_list, ivt_dict)

    # Check whether QSPI config params were provided
    if 'QSPI' in blob_dict.keys():
        # Add to the beggining of the list
        img_list = [('pQSPI', blob_dict['QSPI'], "0x200")] + img_list

    # Blob to be updated size
    blob_size = size_in_bytes(contents)

    # Write enabled binaries
    for entry in img_list:
        name, img_dict, img_addr = entry
        next_addr = toHexInt(img_addr)

        is_header_enabled = 'header' in img_dict.keys() and img_dict['header']['config']['option'].lower() == 'y'

        # Verify if bin file is valid
        if not os.path.isfile(img_dict['config']['path']):
            # Verify if app header update is requested
            if not is_header_enabled:
                logging.error('Update - Enabled image, {0}, does not have a valid binary \'path\' specified. Only app header update without new bin file supported'.format(name))
                exit(1)

            # Update header only (bin not specified)
            current_header = contents[2 * next_addr:2 * (next_addr+header_size[name])]
            bin_size = get_img_size[name](current_header)
            update_header_func[name](current_header, entry, bin_size)
            contents = contents[:2 * next_addr] + current_header + contents[2 * (next_addr+header_size[name]):]
            continue

        # Read image
        with open(img_dict['config']['path'], 'rb') as f:
            hex_contents = f.read().hex()
            hex_contents = [ch for ch in hex_contents]
            bin_size = size_in_bytes(hex_contents)

        # Verify if padding it's needed
        end_of_img = next_addr + bin_size
        if end_of_img > blob_size:
            contents += clean_padd((end_of_img - blob_size))
            blob_size = end_of_img

        # Verify if header must be added
        header_tag_content = get_byte_from_offset(hex_contents, 0x0)
        if is_header_enabled:
            if header_tag_content not in header_tag[name]:
                # Add new header
                hex_contents = clean_padd(header_size[name]) + hex_contents
                # Update header with the fields specified in JSON
                update_header_func[name](hex_contents, entry, bin_size)
                bin_size += header_size[name]
            else:
                # Update existing header of new image
                update_header_func[name](hex_contents, entry, bin_size)

        # Verify image
        validate_image(name, header_tag_content, bin_size)

        # Replace current image with new image
        contents = contents[:2 * next_addr] + hex_contents + contents[2 * end_of_img:]

    return contents


def new_blob(contents, blob_dict):
    '''
        Create a new blob based on configuration file
    '''
    # Verify if IVT enabled
    if not 'IVT' in blob_dict.keys():
        logging.error('New - IVT field must be enabled in JSON configuration file \
            (by setting option to \"y\"). See \'s32G2X_blob_new_secure_boot.json\' file as an example.')
        exit(1)

    # Verify if IVT bin file provided
    ivt_dict = blob_dict['IVT']
    if (not ivt_dict['config']['path']) or (not os.path.isfile(ivt_dict['config']['path'])):
        print("Creating IVT from scratch (path not specified or not a file)") #info
        ivt_contents = clean_padd(IVT_SIZE) # * 2 * ['F']
    else:
        with open(args.blob, 'rb') as fd:
            ivt_contents = fd.read().hex()
            ivt_contents = [ch for ch in ivt_contents]

    # Update IVT and blob contents
    update_ivt(ivt_contents, ivt_dict)
    contents += ivt_contents[:(2 * IVT_SIZE)]
    offset = IVT_SIZE #IVT

    # Link the image addresses specified in IVT with configuration in JSON
    img_list = list(map(lambda entry: ("p"+entry[0], entry[1]), blob_dict.items()))
    logging.debug(list(map(lambda entry: (entry[0]), img_list)))

    # Filter and sort the list of images which are specified in IVT (and address is not 0)
    img_list = get_enabled_images_sorted(img_list, ivt_dict)
    logging.debug(img_list)

    # Check whether QSPI config params were provided
    if 'QSPI' in blob_dict.keys():
        # Add to the beggining of the list
        img_list = [('pQSPI', blob_dict['QSPI'], "0x200")] + img_list

    # Write enabled binaries
    for entry in img_list:
        name, img_dict, img_addr = entry
        next_addr = toHexInt(img_addr)

        # Check if current image does not overlapp with previous
        if next_addr < offset:
            logging.error('Cannot write image \'{0}\' at address {1}. Overlapping with previous image. Update IVT'.format(name, img_addr))
            exit(1)

        # Add padding
        contents += clean_padd((next_addr - offset))

        # Verify if bin file is valid
        if not os.path.isfile(img_dict['config']['path']):
            logging.error('New - Enabled image, {0}, does not have a valid binary \'path\' specified.'.format(name))
            exit(1)

        # Read image
        with open(img_dict['config']['path'], 'rb') as f:
            hex_contents = f.read().hex()
            hex_contents = [ch for ch in hex_contents]
            bin_size = size_in_bytes(hex_contents)

        # Verify if header must be added
        if 'header' in img_dict.keys() and img_dict['header']['config']['option'].lower() == 'y':
            # Add header
            hex_contents = clean_padd(header_size[name]) + hex_contents
            # Update header with the fields specified in JSON
            update_header_func[name](hex_contents, entry, bin_size)
            bin_size += header_size[name]

        # Verify image
        header_tag_content = get_byte_from_offset(hex_contents, 0x0)
        validate_image(name, header_tag_content, bin_size)

        # Add the image to blob
        contents += hex_contents
        offset = next_addr + bin_size
    # End


if __name__ == '__main__':
    args = parse_cli_arguments()

    # Configure logging
    logging.basicConfig(format='%(levelname)s: %(message)s')

    # Verify the json path to file is a valid file
    if not os.path.isfile(args.json):
        logging.error('JSON configuration file \'{0}\' does not exist.'.format(args.json))
        exit(1)

    # Init padd function for the requested boot interface
    global clean_padd
    clean_padd = lambda size: 2 * size * [padd[args.interface]]

    # Parse json file
    with open(args.json, 'r') as f:
        blob_dict = json.load(f)['BLOB']

    # Verify if JSON is well formed (each image have a config which has and option field)
    if list(filter(lambda v: (not v["config"]) or (not "option" in v["config"].keys()), blob_dict.values())):
        logging.error('JSON malformed. Each element inside the BLOB should have a \"config: { option: ..}\" field specifying whether that module is included in blob creation or not (set to "y" or "").')
        exit(1)

    # Discard elements that are not selected
    blob_dict = dict(filter(lambda entry: entry[1]["config"]["option"].lower() == 'y', blob_dict.items()))

    # Define the output file name
    outFileName = args.blob

    # Update option
    if args.option == UPDATE:
        # Verify the input path to file is a valid file
        if not os.path.isfile(args.blob):
            logging.error('Update option - Input blob file \'{0}\' does not exist.'.format(args.blob))
            exit(1)
        # Open file and read contents
        with open(args.blob, 'rb') as fd:
            hex_contents = fd.read().hex()
            hex_contents = [ch for ch in hex_contents]
        # Update blob
        hex_contents = update_blob(hex_contents, blob_dict)
        outFileName += '.modified'
    else:
        # Create new blob
        hex_contents = []
        new_blob(hex_contents, blob_dict)

    # Write output blob to file
    with open(outFileName, "wb") as fd:
        fd.write(bytes.fromhex(''.join(hex_contents)))
        print('Created file: {0}'.format(fd.name))
