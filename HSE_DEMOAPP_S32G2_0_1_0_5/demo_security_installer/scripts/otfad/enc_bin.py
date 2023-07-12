#/*==================================================================================================
#*
#*   Copyright 2021 NXP
#*
#*   This software is owned or controlled by NXP and may only be used strictly in accordance with
#*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
#*   activating and/or otherwise using the software, you are agreeing that you have read, and that
#*   you agree to comply with and are bound by, such license terms. If you do not agree to
#*   be bound by the applicable license terms, then you may not retain, install, activate or
#*   otherwise use the software.
#==================================================================================================*/

import os
import base64
import sys
import json

# Setup
try:
    from cryptography.hazmat.backends import default_backend
    from cryptography.hazmat.primitives.ciphers import (
        Cipher, algorithms, modes
    )
except:
    import sys
    import subprocess
    print("Required modules not installed. Installing reqs...")
    out = subprocess.check_output([sys.executable, '-m', 'pip', 'install', '-r', 'requirements.txt'])
    print(out.decode())
    print("Running the script again...")
    out = subprocess.check_output([sys.executable] + sys.argv)
    print(out.decode())
    exit()


def bin2hex(file):
    hex_data = ""
    hex_data_length = 0
    file = open(file, "rb")
    contents = file.readlines()
    file.close()

    for k in range(0, len(contents)):
        hex_data_length = hex_data_length + len(contents[k])
        for bytes in range(0, len(contents[k])):
            hex_data = hex_data + hex(ord(contents[k][bytes]))[2:].zfill(2)

    #return str(hex_data.upper()), len(contents[0])
    return str(hex_data.upper()), hex_data_length

def ctr_encrypt(key, plaintext,iv):

    # Construct an AES-GCM Cipher object with the given key and a
    # randomly generated IV.
    encryptor = Cipher(
        algorithms.AES(key),
        modes.CTR(iv),
        backend=default_backend()
    ).encryptor()

    # Encrypt the plaintext and get the associated ciphertext.
    ciphertext = encryptor.update(plaintext) + encryptor.finalize()

    #print ("IV: ", base64.b16encode(iv))
    #print ("KEY: ", base64.b16encode(key))
    #print ("Plaintext: ", base64.b16encode(plaintext))
    #print ("Ciphertext: ", base64.b16encode(ciphertext))
    return (ciphertext)

def ctr_decrypt(key,ciphertext,iv):
    # Construct a Cipher object, with the key, iv, and additionally the
    # GCM tag used for authenticating the message.
    decryptor = Cipher(
        algorithms.AES(key),
        modes.CTR(iv),
        backend=default_backend()
    ).decryptor()

    # Decryption gets us the authenticated plaintext.
    return decryptor.update(ciphertext) + decryptor.finalize()

def process_input_data_in_otfad_format(data):
    # OTFAD process the data in 64bits chunk, BE

    # Make the list of bytes
    bytes_list = [x for x in data]

    # Padd till next boundary 1KB aligned
    padding_len = (((len(bytes_list) // 1024) + 1) * 1024 - len(bytes_list))
    bytes_list += [0xFF] * padding_len

    # Group the bytes into words
    words_list = [bytes_list[x:min(x+4, len(bytes_list))] for x in range(0, len(bytes_list), 4)]

    # Group the consecutive words in pairs
    paired_words_list = list(zip(words_list[:-1:2], words_list[1::2]))

    # Change words order (in pairs). Reverse bytes order within each word
    data_final = [(p[1][::-1], p[0][::-1]) for p in paired_words_list]

    # Strip the pair/list and merge all bytes
    data_final = [j for i in data_final for j in i]
    data_final = [j for i in data_final for j in i]
    data_final = bytes(data_final)

    return data_final

def get_data_from_file(filename):
  try:
      with open(filename, 'rb') as f:
          data = f.read()
          data = process_input_data_in_otfad_format(data)
      return data
  except Exception as err:
      print (err)
      return -1

#Write data to file
def write_data_to_file(filename,data):
  try:
      with open(filename, 'wb') as f:
          f.write(data)
      return 0
  except:
      return -1

def change_real_endiness(value):
    mod_value = value[14:16]+value[12:14]+value[10:12]+value[8:10]+value[6:8]+value[4:6]+value[2:4]+value[:2]
    #print ("Encrypted daata block", mod_value)
    return mod_value

def change_endiness_otfad(data):
    ba = bytearray.fromhex(data)
    ba.reverse()

    s = ''.join(format(x, '02x') for x in ba)
    return s

def write_data_to_file_into_otfad_format(filename,data):
  try:
      length_of_data = len(data)
      i = 0
      data_final = bytearray()

      while (i < length_of_data):
          data_final = data_final+base64.b16decode(change_real_endiness(base64.b16encode(data[i:(i+8)])))
          i = i+8
      with open(filename, 'wb') as f:
          f.write(data_final)

      return 0
  except Exception as err:
      print (err)
      return -1

def new_addr(sys_addr, curr_length):
    new_addr = hex(int(base64.b16encode(sys_addr),16) + curr_length).replace("0x","").upper()
    while len(new_addr)<8:
        new_addr = '0'+new_addr

    return base64.b16decode(new_addr)

def otfad_EncDec(key,plaintext,iv,sys_addr,operation_type):

    loop = len(plaintext)
    cyphertext = bytearray()
    curr_length = 0
    if operation_type:
        while(curr_length < loop):
            # Generate a the 96-bit IV.
            new_iv = iv + new_addr(sys_addr,curr_length)
            # Encrypt the next 16 bytes of plaintext with the same key and a new IV that depends
            # on the current block address
            cyphertext = cyphertext + ctr_encrypt(key,plaintext[curr_length:curr_length+16],new_iv)
            curr_length = curr_length + 16
    else:
        while(curr_length < loop):
            # Generate a the 96-bit IV.
            new_iv = iv + new_addr(sys_addr,curr_length)
            # Decrypt the next 16 bytes of plaintext with the same key and a new IV that depends
            # on the current block address
            cyphertext = cyphertext + ctr_decrypt(key,plaintext[curr_length:curr_length+16],new_iv)
            curr_length = curr_length + 16
    return cyphertext

if __name__ == "__main__":

    # Get config file name and input image name
    _ , json_config_file_path = os.path.split(sys.argv[1])
    _ , input_image_path = os.path.split(sys.argv[2])

    # Read json config file
    json_config_file = open(json_config_file_path)
    json_config_data = json.load(json_config_file)
    json_config_file.close()

    # Get key, IV and start address
    key = base64.b16decode(json_config_data['key'])
    iv = base64.b16decode(json_config_data['iv'])
    sys_addr = base64.b16decode(json_config_data['start_address'])

    output_file_name = os.path.splitext(input_image_path)[0] + '.enc'

    if(int(json_config_data['start_address'], 16) % 1024):
        raise Exception("The starting address should be a multiple of 1KB.")

    # Read and store image binary content
    plain_text = get_data_from_file(input_image_path)

    # Get end address
    end_address = int(json_config_data['start_address'], 16) + len(plain_text)

    # Encrypt image binary content
    cyphertext = otfad_EncDec(key,plain_text,iv,sys_addr,1)

    # Decrypt image binary content
    decrypted_content = otfad_EncDec(key,cyphertext,iv,sys_addr,0)

    if(decrypted_content!=plain_text):
        raise Exception("Decrypted content and plain text are not the same!")

    # Write encrypted image binary content to file according to OTFAD format
    write_data_to_file_into_otfad_format(output_file_name, cyphertext)

    # Print user parameters and operation status
    print("\nSuccessful operation! The input image file {} has been encrypted and stored into OTFD format as {}".format(input_image_path,output_file_name))
    print ("KEY: ", str(base64.b16encode(key),"utf-8"))
    print ("IV: ", str(base64.b16encode(iv),"utf-8"))
    print ("Context region start: ", str(base64.b16encode(sys_addr),"utf-8"))
    print ("Context region end:    {:08x}".format(end_address))
    print ("\n")
