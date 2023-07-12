/*
** ###################################################################
**     Processor:           S32G274A with 8 MB SRAM
**     Compiler:            GNU C Compiler
**     Reference manual:    S32G274ARM
**     Version:             Rev. 1 Draft M, 03/2019
**
**     Abstract:
**         Linker file for the GNU C Compiler
**
**     Copyright 2019 NXP
**     All rights reserved.
**
**     NXP Confidential. This software is owned or controlled by NXP and may only be
**     used strictly in accordance with the applicable license terms. By expressly
**     accepting such terms or by downloading, installing, activating and/or otherwise
**     using the software, you are agreeing that you have read, and that you agree to
**     comply with and are bound by, such license terms. If you do not agree to be
**     bound by the applicable license terms, then you may not retain, install,
**     activate or otherwise use the software. The production use license in
**     Section 2.3 is expressly granted for this software.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** ###################################################################
*/
/* Implements : Linker_file_Class */
/* Specify the memory areas */
MEMORY
{
    /* SRAM - allocate 8M out of 20M available*/
    m_vcram_c0   (rx)       : ORIGIN = 0x38080000, LENGTH = 2688K
    m_ram_c0     (rw)       : ORIGIN = 0x34080000, LENGTH = 2688K
    m_vcram_c1   (rx)       : ORIGIN = 0x38320000, LENGTH = 2688K
    m_ram_c1     (rw)       : ORIGIN = 0x34320000, LENGTH = 2688K
    m_vcram_c2   (rx)       : ORIGIN = 0x385C0000, LENGTH = 2688K
    m_ram_c2     (rw)       : ORIGIN = 0x345C0000, LENGTH = 2688K

    /* TCM */
    m_dtcm          (rw)         : ORIGIN = 0x20000000, LENGTH = 64K
    m_llce_boot_end (rw)         : ORIGIN = 0x43840000, LENGTH = 0x50    
    m_llce_can_sharedmemory (rw) : ORIGIN = 0x43800000, LENGTH = 0x3D000    
}
