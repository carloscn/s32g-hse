#!/usr/bin/env python

#/*==================================================================================================
#*
#*   Copyright 2019-2021 NXP
#*
#*   This software is owned or controlled by NXP and may only be used strictly in accordance with
#*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
#*   activating and/or otherwise using the software, you are agreeing that you have read, and that
#*   you agree to comply with and are bound by, such license terms. If you do not agree to
#*   be bound by the applicable license terms, then you may not retain, install, activate or
#*   otherwise use the software.
#==================================================================================================*/

import logging

# Default IVT dictionary
default_ivt_dict = {
    'content': {
        'pSelfTest':          {"offset": "0x08", 'type': 'dw'},
        'pSelfTest_bck':      {"offset": "0x0C", 'type': 'dw'},
        'pDCD':               {"offset": "0x10", 'type': 'dw'},
        'pDCD_bck':           {"offset": "0x14", 'type': 'dw'},
        'pHSE':               {"offset": "0x18", 'type': 'dw'},
        'pHSE_bck':           {"offset": "0x1C", 'type': 'dw'},
        'pApp':               {"offset": "0x20", 'type': 'dw'},
        'pApp_bck':           {"offset": "0x24", 'type': 'dw'},
        'LCCfgWord':          {"offset": "0x2C", 'type': 'dw'}
    }
}

# Image header tag (first byte)
header_tag = {
    "IVT":           [0xD1],
    "pQSPI":         [0x5A],
    "pHSE":          [0xD4, 0xD6],
    "pHSE_bck":      [0xD4, 0xD6],
    "pApp":          [0xD5],
    "pApp_bck":      [0xD5],
    "pDCD":          [0xD2],
    "pDCD_bck":      [0xD2],
    "pSelfTest":     [0xD4],
    "pSelfTest_bck": [0xD4]
}

# Image header size
header_size = {
    "pApp":          0x40,
    "pApp_bck":      0x40,
    "pDCD":          0x04,
    "pDCD_bck":      0x04,
    "pSelfTest":     0x04,
    "pSelfTest_bck": 0x04
}

# Image maximum size
img_max_size = {
    "pHSE":          0x51160,
    "pHSE_bck":      0x51160,
    "pDCD":          0x2000,
    "pDCD_bck":      0x2000,
    "pSelfTest":     0x2000,
    "pSelfTest_bck": 0x2000
}

IVT_SIZE = 256

toHexInt = lambda s: int(s, 16)
toHexStr = lambda n: str(hex(n))

size_in_bytes = lambda hex_list: len(hex_list) // 2

def get_byte_from_offset(hex_contents, offset):
    ''' Returns the byte integer value from an offset in a hex list

    Parameters:
    hex_contents (list): A list consisting of little endian hex values.
    offset (int): The offset from where the byte is taken.

    Returns:
    int: The integer value for the corresponding byte in hex_contents

    '''

    # Verify input
    if (type(hex_contents) is not list) or (type(offset) is not int) or (len(hex_contents) <= offset * 2) or (offset < 0):
        return None

    byte = ''
    byte += hex_contents[offset * 2] + hex_contents[offset * 2 + 1]
    return int(byte, 16)

def get_word_from_offset(hex_contents, offset):
    ''' Returns a word integer value from an offset in a hex list

    Parameters:
    hex_contents (list): A list consisting of little endian hex values.
    offset (int): The offset from where the word is taken.

    Returns:
    int: The integer value for the corresponding word in hex_contents

    '''

    # Verify input
    if (type(hex_contents) is not list) or (type(offset) is not int) or (len(hex_contents) <= (offset + 3) * 2) or (offset < 0):
        return None

    word = 0
    for i in range(2):
        word += get_byte_from_offset(hex_contents, offset + 1-i) << (i * 8)
    return word

def get_double_word_from_offset(hex_contents, offset):
    ''' Returns a double word integer value from an offset in a hex list

    Parameters:
    hex_contents (list): A list consisting of little endian hex values.
    offset (int): The offset from where the word is taken.

    Returns:
    int: The integer value for the corresponding word in hex_contents

    '''

    # Verify input
    if (type(hex_contents) is not list) or (type(offset) is not int) or (len(hex_contents) <= (offset + 3) * 2) or (offset < 0):
        return None

    word = 0
    for i in range(4):
        word += get_byte_from_offset(hex_contents, offset + i) << (i * 8)
    return word

def modify_byte_at_offset(hex_contents, offset, new_val):
    ''' Modifies two nibbles(1 byte) in the hex list with the new values.

    Parameters:
    hex_contents (list): A list consisting of little endian hex values.
    offset (int): The offset where the byte is modified.
    new_val (int): The new byte value

    '''

    # Verify input
    if (type(hex_contents) is not list) or (type(new_val) is not int) or (type(offset) is not int):
        return False

    if (len(hex_contents) <= offset * 2) or (offset < 0) or new_val < 0 or new_val > 255:
        return False

    hex_byte = '{:02x}'.format(new_val)
    hex_contents[offset * 2] = hex_byte[0]
    hex_contents[offset * 2 + 1] = hex_byte[1]
    logging.debug('Modified byte {:x}. '.format(offset * 2))

    return True

def modify_word_at_offset(hex_contents, offset, new_val):
    ''' Modifies a word in the hex list with the new values.

    Parameters:
    hex_contents (list): A list consisting of little endian hex values.
    offset (int): The offset where the word is modified.
    new_val (int): The new word value

    '''

    # Verify input
    if (type(hex_contents) is not list) or (type(new_val) is not int) or (type(offset) is not int):
        return False

    if (len(hex_contents) <= (offset + 3) * 2) or (offset < 0) or new_val < 0 or new_val > 0xFFFF:
        return False

    for i in range(2):
        byte_value = (new_val >> (8 * i)) & 0xFF
        modify_byte_at_offset(hex_contents, offset + 1-i, byte_value)

    return True

def modify_double_word_at_offset(hex_contents, offset, new_val):
    ''' Modifies a word in the hex list with the new values.

    Parameters:
    hex_contents (list): A list consisting of little endian hex values.
    offset (int): The offset where the word is modified.
    new_val (int): The new word value

    '''

    # Verify input
    if (type(hex_contents) is not list) or (type(new_val) is not int) or (type(offset) is not int):
        return False

    if (len(hex_contents) <= (offset + 3) * 2) or (offset < 0) or new_val < 0 or new_val > 0xFFFFFFFF:
        return False

    for i in range(4):
        byte_value = (new_val >> (8 * i)) & 0xFF
        modify_byte_at_offset(hex_contents, offset + i, byte_value)

    return True

def not_supported(a, b, c):
    logging.error('Modifying dq not supported')
    exit(1)
