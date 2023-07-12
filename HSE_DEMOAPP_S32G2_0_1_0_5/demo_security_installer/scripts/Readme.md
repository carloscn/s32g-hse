
# HSE application development setup with Python and LTB scripts

## blob.py

* Create a new Blob image (or update an existing one) based on a JSON configuration file (see `json\s32g2xx_new_blob.json` for an example)
    ** Configuration
        *** Set "option": "y" to enable an image - i.e. adding/updating it in the new blob
            *** "option": "y" for headers (e.g. App) will add a new header/update the existing one
        *** Set "path": "{path_to_bin_file}" to add/update the blob with bin file contents for the specified image
        *** Set "value": "hex_number" to provide the desired value (in hex) for the specified field
        *** Should contain "offset" and "type" fields for IVT and application header (however left unmodified)

    ** Special cases
        *** IVT:
            "LCCfgWord"      - only "value": "0" allowed using this script (LC advancement by BootRom)
        *** App header:
            *** "codeLength" - will be automatically computed based on binary file size (specified in "path" field)
            *** "pBSBTag"    - left blank ("") or set to "end" will be computed based on te binary size - first address after App image (usual case)
                                - can have any other value in flash (e.g. 0xFB00)
        *** DCD/SelfTest header:
            *** "len"        - will be automatically computed based on binary file size (specified in "path" field)

* Command line:
    python blob.py -o <[new, update]> -j <path_to_json.json> -b <path_to_blob.bin>

* Examples:
    ** Create a new blob named `s32G2XX_blob.bin` using the configuration in `json\s32g2xx_new_blob.json`:
        python blob.py -o new -j json\s32g2xx_new_blob.json -b s32G2XX_blob.bin

    ** Update an existing blob `blob.bin` based on `json\update_blob_app_header.json.json`:
        python blob.py -o update -j json\update_blob_app_header.json.json -b blob.bin
            - updated blob will be written to `blob.bin.modified`

## up_blob.bat

* Create automated blob image by compiling GHS project(`Debug` default), copy and generating the fw_installer.bin file than creating the blob image(`blob.bin`)
    ** Blob image creation is done based on a JSON configuration file (see `json\s32g2xx_new_blob.json` for an example)
    ** Output location is located in `images` folder

* Optional, can directly upload blob image using S32FlashTool
    ** Update communication port inside script(default `COM8`)
    ** Update DS32 path if necessary

## LTB scripts

### flash_blob_image.cmm
* Writes a binary images () to QSPI flash at address 0x0
    ** binary file name can be given as parameter, hardcoded in cmm script or loaded in a pop-up window
    ** the scripts erases first 2 MB of flash
    ** can be updated to write any binary at any address (e.g. HSE FW image)
    ** to avoid the pop-up window, the path to binary file can be given as parameter or hardcoded in the script (`&binary=<path_to_bin>`)
    ** uses LTB script to connect to CM7_0 core (`~~/demo/arm64/hardware/s32g2/scripts/s32g2_connect_m7_0.cmm`), assuming core is in reset (no valid IVT, not booted)
        *** NOTE: if CM7_0 already booted an error saying "CM7_0 core doesn't stop" might pop-up and stop script execution; to overcome this issue just press `Continue`
        to resume script execution or call directly this script in the format `flash_blob_image.cmm <path_to_bin> "yes"`. This will attach to the core after boot,
        than will perform the flashing operations

### CM7_0_load_symbols_after_boot.cmm
* Attaches to CM7_0 core after it was booted by BootRom (HSE available if configured) and loads symbols (parameter/hardcoded/pop-up window)
* To avoid the pop-up window, the path to elf file can be given as parameter or hardcoded in the script (`&elf=<path_to_elf>`)

### CM7_0_load_elf_after_boot.cmm
* Attaches to CM7_0 core after it was booted by BootRom (HSE available if configured) and loads an elf image (parameter/hardcoded/pop-up window)
* To avoid the pop-up window, the path to elf file can be given as parameter or hardcoded in the script (`&elf=<path_to_elf>`)

### menu.cmm
* Creates a menu called `User` in the toolbar that allows easier access for the usual scripts:
    ** `Load elf` - CM7_0_load_elf_after_boot.cmm
    ** `Load symbols` - CM7_0_load_symbols_after_boot.cmm
    ** `Flash blob` - flash_blob_image.cmm

### init_sram.cmm
* Initialize entire SRAM (mandatory step before its coherent usage) using PRAMC Register from SRAM Controller

### CM7_0_ungate.cmm
* Exits the CM7_0 core from reset (HSE not available) and loads an elf (pop-up)
