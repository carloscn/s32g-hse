
@REM GHS_DIR must be set to GHS compiler directory
@REM IF NOT DEFINED GHS_DIR (set GHS_DIR=_path_to_ghs_compiler_)

%GHS_DIR%\gbuild.exe -top ..\src\GHS\demo_security_installer.gpj -cfg=Debug
cp ..\src\GHS\output\bin\debug\security_installer.elf ..\images\fw_installer.elf
%GHS_DIR%\gmemfile.exe ..\images\fw_installer.elf -o ..\images\fw_installer.bin -start ._ram_code_start -end ._ram_code_end
python blob.py -o new -j json\s32r45x_new_blob.json -b ..\images\blob.bin

@REM (Optional) - Flash to target using S32FlashTool from S32DS
@REM            - As an alternative for flashing the blob image to target 'flash_blob_image.cmm' can be used (with T32)

@REM IF NOT DEFINED ft (set ft=C:\NXP\S32DS.3.4\S32DS\tools\S32FlashTool)
@REM set ft=C:\NXP\S32DS.3.4\S32DS\tools\S32FlashTool
@REM %ft%\bin\S32FlashTool.exe -t %ft%\targets\S32G2xxx.bin -a %ft%\flash\MX25UW51245G.bin -i uart -p COM8 -fprogram -f ..\images\blob.bin -addr 0
