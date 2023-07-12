/**
*   @file    autosar_intram.ld
*
*   @brief   This file contains linker configuration.
*
*/
/*==================================================================================================
*
*   Copyright 2019-2020 NXP
*
*   This software is owned or controlled by NXP and may only be used strictly in accordance with
*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
*   activating and/or otherwise using the software, you are agreeing that you have read, and that
*   you agree to comply with and are bound by, such license terms. If you do not agree to
*   be bound by the applicable license terms, then you may not retain, install, activate or
*   otherwise use the software.
==================================================================================================*/

MEMORY {
    qspi_flash              : org = 0x00000000, len = 0x200000  /* 2 MB */
    hse_shared_memory		: org = 0x22C00000, len = 0x4000    /* 16 KB */
    int_sram                : org = 0x34080000, len = 0xC0000   /* 768 kB */
}


SECTIONS
{
    ._ram_code_start                                       : > int_sram
    .intc_vector                                ALIGN(4)   : > .
    .startup                                    ALIGN(4)   : > . /* Reset code in thumb */
    .systeminit                                 ALIGN(4)   : > . /* SystemInit */
    .text.startup                                          : > .
    .text                                                  : > .
    .rodata                                                : > .
    .data                                       ALIGN(16)  : > .
    ._ram_code_end                              ALIGN(512) : > .

    ._ram_start                                 ALIGN(32)  : > .
    .bss                                        ALIGN(16)  : > .
    .sbss                                                  : > .
    .intercall                                             : > .
    .sys_img                                               : > .
    .hse_blue_img                                          : > .
    .stack                                      ALIGN(16)  : > .
    ._ram_end                                   ALIGN(512) : > .

    _Stack_end          = ADDR(.stack);
    _Stack_start        = ADDR(.stack)+sizeof(.stack);

    __RAM_START_ADDR    = ADDR(._ram_start);
    __RAM_END_ADDR      = ADDR(._ram_end);

    BOOT_APP_CORE       = ADDR(._ram_code_start);

}
