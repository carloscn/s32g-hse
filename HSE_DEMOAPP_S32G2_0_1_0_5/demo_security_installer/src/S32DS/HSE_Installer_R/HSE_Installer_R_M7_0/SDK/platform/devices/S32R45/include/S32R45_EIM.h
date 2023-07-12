/*
** ###################################################################
**     Processor:           S32R45_M7
**     Reference manual:    S32R45 RM Rev.1 RC
**     Version:             1.3
**     Build:               b191210
**
**     Abstract:
**         Peripheral Access Layer for S32R45_M7
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2019 NXP
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
**     Revisions:
**    - rev. 1.3 Taru Shree 10-DEC-19  Initial release based on 
**                                     RM Rev.1 RC.
**
** ###################################################################
*/

/*!
 * @file S32R45_EIM.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_EIM
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.3, local typedef not referenced
* The SoC header defines typedef for all modules.
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
* @section [global]
* Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
* These are generated macros used for accessing the bit-fields from registers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, identifier clash
* The supported compilers use more than 31 significant characters for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 21.1, defined macro '__I' is reserved to the compiler
* This type qualifier is needed to ensure correct I/O access and addressing.
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32R45_EIM_H_)  /* Check if memory map has not been already included */
#define S32R45_EIM_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- EIM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EIM_Peripheral_Access_Layer EIM Peripheral Access Layer
 * @{
 */

/** EIM - Register Layout Typedef */
typedef struct {
  __IO uint32_t EIMCR;                             /**< Error Injection Module Configuration Register, offset: 0x0 */
  __IO uint32_t EICHEN;                            /**< Error Injection Channel Enable register, offset: 0x4 */
  uint8_t RESERVED_0[248];
  __IO uint32_t EICHD0_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x100 */
  __IO uint32_t EICHD0_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x104 */
  __IO uint32_t EICHD0_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x108 */
  __IO uint32_t EICHD0_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x10C */
  __IO uint32_t EICHD0_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x110 */
  __IO uint32_t EICHD0_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x114 */
  __IO uint32_t EICHD0_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x118 */
  __IO uint32_t EICHD0_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x11C */
  __IO uint32_t EICHD0_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x120 */
  uint8_t RESERVED_1[28];
  __IO uint32_t EICHD1_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x140 */
  __IO uint32_t EICHD1_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x144 */
  __IO uint32_t EICHD1_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x148 */
  __IO uint32_t EICHD1_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x14C */
  __IO uint32_t EICHD1_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x150 */
  __IO uint32_t EICHD1_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x154 */
  __IO uint32_t EICHD1_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x158 */
  __IO uint32_t EICHD1_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x15C */
  __IO uint32_t EICHD1_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x160 */
  uint8_t RESERVED_2[28];
  __IO uint32_t EICHD2_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x180 */
  __IO uint32_t EICHD2_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x184 */
  __IO uint32_t EICHD2_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x188 */
  __IO uint32_t EICHD2_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x18C */
  __IO uint32_t EICHD2_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x190 */
  __IO uint32_t EICHD2_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x194 */
  __IO uint32_t EICHD2_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x198 */
  __IO uint32_t EICHD2_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x19C */
  __IO uint32_t EICHD2_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x1A0 */
  uint8_t RESERVED_3[28];
  __IO uint32_t EICHD3_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x1C0 */
  __IO uint32_t EICHD3_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x1C4 */
  __IO uint32_t EICHD3_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x1C8 */
  __IO uint32_t EICHD3_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x1CC */
  __IO uint32_t EICHD3_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x1D0 */
  __IO uint32_t EICHD3_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x1D4 */
  __IO uint32_t EICHD3_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x1D8 */
  __IO uint32_t EICHD3_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x1DC */
  __IO uint32_t EICHD3_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x1E0 */
  uint8_t RESERVED_4[28];
  __IO uint32_t EICHD4_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x200 */
  __IO uint32_t EICHD4_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x204 */
  __IO uint32_t EICHD4_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x208 */
  __IO uint32_t EICHD4_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x20C */
  __IO uint32_t EICHD4_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x210 */
  __IO uint32_t EICHD4_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x214 */
  __IO uint32_t EICHD4_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x218 */
  __IO uint32_t EICHD4_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x21C */
  __IO uint32_t EICHD4_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x220 */
  uint8_t RESERVED_5[28];
  __IO uint32_t EICHD5_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x240 */
  __IO uint32_t EICHD5_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x244 */
  __IO uint32_t EICHD5_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x248 */
  __IO uint32_t EICHD5_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x24C */
  __IO uint32_t EICHD5_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x250 */
  __IO uint32_t EICHD5_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x254 */
  __IO uint32_t EICHD5_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x258 */
  __IO uint32_t EICHD5_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x25C */
  __IO uint32_t EICHD5_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x260 */
  uint8_t RESERVED_6[28];
  __IO uint32_t EICHD6_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x280 */
  __IO uint32_t EICHD6_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x284 */
  __IO uint32_t EICHD6_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x288 */
  __IO uint32_t EICHD6_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x28C */
  __IO uint32_t EICHD6_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x290 */
  __IO uint32_t EICHD6_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x294 */
  __IO uint32_t EICHD6_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x298 */
  __IO uint32_t EICHD6_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x29C */
  __IO uint32_t EICHD6_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x2A0 */
  uint8_t RESERVED_7[28];
  __IO uint32_t EICHD7_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x2C0 */
  __IO uint32_t EICHD7_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x2C4 */
  __IO uint32_t EICHD7_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x2C8 */
  __IO uint32_t EICHD7_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x2CC */
  __IO uint32_t EICHD7_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x2D0 */
  __IO uint32_t EICHD7_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x2D4 */
  __IO uint32_t EICHD7_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x2D8 */
  __IO uint32_t EICHD7_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x2DC */
  __IO uint32_t EICHD7_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x2E0 */
  uint8_t RESERVED_8[28];
  __IO uint32_t EICHD8_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x300 */
  __IO uint32_t EICHD8_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x304 */
  __IO uint32_t EICHD8_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x308 */
  __IO uint32_t EICHD8_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x30C */
  __IO uint32_t EICHD8_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x310 */
  __IO uint32_t EICHD8_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x314 */
  __IO uint32_t EICHD8_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x318 */
  __IO uint32_t EICHD8_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x31C */
  __IO uint32_t EICHD8_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x320 */
  uint8_t RESERVED_9[28];
  __IO uint32_t EICHD9_WORD0;                      /**< Error Injection Channel Descriptor n, Word0, offset: 0x340 */
  __IO uint32_t EICHD9_WORD1;                      /**< Error Injection Channel Descriptor n, Word1, offset: 0x344 */
  __IO uint32_t EICHD9_WORD2;                      /**< Error Injection Channel Descriptor n, Word2, offset: 0x348 */
  __IO uint32_t EICHD9_WORD3;                      /**< Error Injection Channel Descriptor n, Word3, offset: 0x34C */
  __IO uint32_t EICHD9_WORD4;                      /**< Error Injection Channel Descriptor n, Word4, offset: 0x350 */
  __IO uint32_t EICHD9_WORD5;                      /**< Error Injection Channel Descriptor n, Word5, offset: 0x354 */
  __IO uint32_t EICHD9_WORD6;                      /**< Error Injection Channel Descriptor n, Word6, offset: 0x358 */
  __IO uint32_t EICHD9_WORD7;                      /**< Error Injection Channel Descriptor n, Word7, offset: 0x35C */
  __IO uint32_t EICHD9_WORD8;                      /**< Error Injection Channel Descriptor n, Word8, offset: 0x360 */
  uint8_t RESERVED_10[28];
  __IO uint32_t EICHD10_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x380 */
  __IO uint32_t EICHD10_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x384 */
  __IO uint32_t EICHD10_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x388 */
  __IO uint32_t EICHD10_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x38C */
  __IO uint32_t EICHD10_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x390 */
  __IO uint32_t EICHD10_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x394 */
  __IO uint32_t EICHD10_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x398 */
  __IO uint32_t EICHD10_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x39C */
  __IO uint32_t EICHD10_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x3A0 */
  uint8_t RESERVED_11[28];
  __IO uint32_t EICHD11_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x3C0 */
  __IO uint32_t EICHD11_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x3C4 */
  __IO uint32_t EICHD11_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x3C8 */
  __IO uint32_t EICHD11_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x3CC */
  __IO uint32_t EICHD11_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x3D0 */
  __IO uint32_t EICHD11_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x3D4 */
  __IO uint32_t EICHD11_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x3D8 */
  __IO uint32_t EICHD11_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x3DC */
  __IO uint32_t EICHD11_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x3E0 */
  uint8_t RESERVED_12[28];
  __IO uint32_t EICHD12_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x400 */
  __IO uint32_t EICHD12_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x404 */
  __IO uint32_t EICHD12_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x408 */
  __IO uint32_t EICHD12_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x40C */
  __IO uint32_t EICHD12_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x410 */
  __IO uint32_t EICHD12_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x414 */
  __IO uint32_t EICHD12_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x418 */
  __IO uint32_t EICHD12_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x41C */
  __IO uint32_t EICHD12_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x420 */
  uint8_t RESERVED_13[28];
  __IO uint32_t EICHD13_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x440 */
  __IO uint32_t EICHD13_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x444 */
  __IO uint32_t EICHD13_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x448 */
  __IO uint32_t EICHD13_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x44C */
  __IO uint32_t EICHD13_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x450 */
  __IO uint32_t EICHD13_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x454 */
  __IO uint32_t EICHD13_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x458 */
  __IO uint32_t EICHD13_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x45C */
  __IO uint32_t EICHD13_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x460 */
  uint8_t RESERVED_14[28];
  __IO uint32_t EICHD14_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x480 */
  __IO uint32_t EICHD14_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x484 */
  __IO uint32_t EICHD14_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x488 */
  __IO uint32_t EICHD14_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x48C */
  __IO uint32_t EICHD14_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x490 */
  __IO uint32_t EICHD14_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x494 */
  __IO uint32_t EICHD14_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x498 */
  __IO uint32_t EICHD14_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x49C */
  __IO uint32_t EICHD14_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x4A0 */
  uint8_t RESERVED_15[28];
  __IO uint32_t EICHD15_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x4C0 */
  __IO uint32_t EICHD15_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x4C4 */
  __IO uint32_t EICHD15_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x4C8 */
  __IO uint32_t EICHD15_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x4CC */
  __IO uint32_t EICHD15_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x4D0 */
  __IO uint32_t EICHD15_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x4D4 */
  __IO uint32_t EICHD15_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x4D8 */
  __IO uint32_t EICHD15_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x4DC */
  __IO uint32_t EICHD15_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x4E0 */
  uint8_t RESERVED_16[28];
  __IO uint32_t EICHD16_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x500 */
  __IO uint32_t EICHD16_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x504 */
  __IO uint32_t EICHD16_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x508 */
  __IO uint32_t EICHD16_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x50C */
  __IO uint32_t EICHD16_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x510 */
  __IO uint32_t EICHD16_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x514 */
  __IO uint32_t EICHD16_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x518 */
  __IO uint32_t EICHD16_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x51C */
  __IO uint32_t EICHD16_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x520 */
  uint8_t RESERVED_17[28];
  __IO uint32_t EICHD17_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x540 */
  __IO uint32_t EICHD17_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x544 */
  __IO uint32_t EICHD17_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x548 */
  __IO uint32_t EICHD17_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x54C */
  __IO uint32_t EICHD17_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x550 */
  __IO uint32_t EICHD17_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x554 */
  __IO uint32_t EICHD17_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x558 */
  __IO uint32_t EICHD17_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x55C */
  __IO uint32_t EICHD17_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x560 */
  uint8_t RESERVED_18[28];
  __IO uint32_t EICHD18_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x580 */
  __IO uint32_t EICHD18_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x584 */
  __IO uint32_t EICHD18_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x588 */
  __IO uint32_t EICHD18_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x58C */
  __IO uint32_t EICHD18_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x590 */
  __IO uint32_t EICHD18_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x594 */
  __IO uint32_t EICHD18_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x598 */
  __IO uint32_t EICHD18_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x59C */
  __IO uint32_t EICHD18_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x5A0 */
  uint8_t RESERVED_19[28];
  __IO uint32_t EICHD19_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x5C0 */
  __IO uint32_t EICHD19_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x5C4 */
  __IO uint32_t EICHD19_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x5C8 */
  __IO uint32_t EICHD19_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x5CC */
  __IO uint32_t EICHD19_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x5D0 */
  __IO uint32_t EICHD19_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x5D4 */
  __IO uint32_t EICHD19_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x5D8 */
  __IO uint32_t EICHD19_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x5DC */
  __IO uint32_t EICHD19_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x5E0 */
  uint8_t RESERVED_20[28];
  __IO uint32_t EICHD20_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x600 */
  __IO uint32_t EICHD20_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x604 */
  __IO uint32_t EICHD20_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x608 */
  __IO uint32_t EICHD20_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x60C */
  __IO uint32_t EICHD20_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x610 */
  __IO uint32_t EICHD20_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x614 */
  __IO uint32_t EICHD20_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x618 */
  __IO uint32_t EICHD20_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x61C */
  __IO uint32_t EICHD20_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x620 */
  uint8_t RESERVED_21[28];
  __IO uint32_t EICHD21_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x640 */
  __IO uint32_t EICHD21_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x644 */
  __IO uint32_t EICHD21_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x648 */
  __IO uint32_t EICHD21_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x64C */
  __IO uint32_t EICHD21_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x650 */
  __IO uint32_t EICHD21_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x654 */
  __IO uint32_t EICHD21_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x658 */
  __IO uint32_t EICHD21_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x65C */
  __IO uint32_t EICHD21_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x660 */
  uint8_t RESERVED_22[28];
  __IO uint32_t EICHD22_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x680 */
  __IO uint32_t EICHD22_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x684 */
  __IO uint32_t EICHD22_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x688 */
  __IO uint32_t EICHD22_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x68C */
  __IO uint32_t EICHD22_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x690 */
  __IO uint32_t EICHD22_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x694 */
  __IO uint32_t EICHD22_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x698 */
  __IO uint32_t EICHD22_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x69C */
  __IO uint32_t EICHD22_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x6A0 */
  uint8_t RESERVED_23[28];
  __IO uint32_t EICHD23_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x6C0 */
  __IO uint32_t EICHD23_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x6C4 */
  __IO uint32_t EICHD23_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x6C8 */
  __IO uint32_t EICHD23_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x6CC */
  __IO uint32_t EICHD23_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x6D0 */
  __IO uint32_t EICHD23_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x6D4 */
  __IO uint32_t EICHD23_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x6D8 */
  __IO uint32_t EICHD23_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x6DC */
  __IO uint32_t EICHD23_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x6E0 */
  uint8_t RESERVED_24[28];
  __IO uint32_t EICHD24_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x700 */
  __IO uint32_t EICHD24_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x704 */
  __IO uint32_t EICHD24_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x708 */
  __IO uint32_t EICHD24_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x70C */
  __IO uint32_t EICHD24_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x710 */
  __IO uint32_t EICHD24_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x714 */
  __IO uint32_t EICHD24_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x718 */
  __IO uint32_t EICHD24_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x71C */
  __IO uint32_t EICHD24_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x720 */
  uint8_t RESERVED_25[28];
  __IO uint32_t EICHD25_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x740 */
  __IO uint32_t EICHD25_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x744 */
  __IO uint32_t EICHD25_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x748 */
  __IO uint32_t EICHD25_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x74C */
  __IO uint32_t EICHD25_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x750 */
  __IO uint32_t EICHD25_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x754 */
  __IO uint32_t EICHD25_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x758 */
  __IO uint32_t EICHD25_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x75C */
  __IO uint32_t EICHD25_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x760 */
  uint8_t RESERVED_26[28];
  __IO uint32_t EICHD26_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x780 */
  __IO uint32_t EICHD26_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x784 */
  __IO uint32_t EICHD26_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x788 */
  __IO uint32_t EICHD26_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x78C */
  __IO uint32_t EICHD26_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x790 */
  __IO uint32_t EICHD26_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x794 */
  __IO uint32_t EICHD26_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x798 */
  __IO uint32_t EICHD26_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x79C */
  __IO uint32_t EICHD26_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x7A0 */
  uint8_t RESERVED_27[28];
  __IO uint32_t EICHD27_WORD0;                     /**< Error Injection Channel Descriptor n, Word0, offset: 0x7C0 */
  __IO uint32_t EICHD27_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x7C4 */
  __IO uint32_t EICHD27_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x7C8 */
  __IO uint32_t EICHD27_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x7CC */
  __IO uint32_t EICHD27_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x7D0 */
  __IO uint32_t EICHD27_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x7D4 */
  __IO uint32_t EICHD27_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x7D8 */
  __IO uint32_t EICHD27_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x7DC */
  __IO uint32_t EICHD27_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x7E0 */
  uint8_t RESERVED_28[32];
  __IO uint32_t EICHD28_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x804 */
  __IO uint32_t EICHD28_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x808 */
  __IO uint32_t EICHD28_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x80C */
  __IO uint32_t EICHD28_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x810 */
  __IO uint32_t EICHD28_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x814 */
  __IO uint32_t EICHD28_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x818 */
  __IO uint32_t EICHD28_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x81C */
  __IO uint32_t EICHD28_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x820 */
  uint8_t RESERVED_29[32];
  __IO uint32_t EICHD29_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x844 */
  __IO uint32_t EICHD29_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x848 */
  __IO uint32_t EICHD29_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x84C */
  __IO uint32_t EICHD29_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x850 */
  __IO uint32_t EICHD29_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x854 */
  __IO uint32_t EICHD29_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x858 */
  __IO uint32_t EICHD29_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x85C */
  __IO uint32_t EICHD29_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x860 */
  uint8_t RESERVED_30[32];
  __IO uint32_t EICHD30_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x884 */
  __IO uint32_t EICHD30_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x888 */
  __IO uint32_t EICHD30_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x88C */
  __IO uint32_t EICHD30_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x890 */
  __IO uint32_t EICHD30_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x894 */
  __IO uint32_t EICHD30_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x898 */
  __IO uint32_t EICHD30_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x89C */
  __IO uint32_t EICHD30_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x8A0 */
  uint8_t RESERVED_31[32];
  __IO uint32_t EICHD31_WORD1;                     /**< Error Injection Channel Descriptor n, Word1, offset: 0x8C4 */
  __IO uint32_t EICHD31_WORD2;                     /**< Error Injection Channel Descriptor n, Word2, offset: 0x8C8 */
  __IO uint32_t EICHD31_WORD3;                     /**< Error Injection Channel Descriptor n, Word3, offset: 0x8CC */
  __IO uint32_t EICHD31_WORD4;                     /**< Error Injection Channel Descriptor n, Word4, offset: 0x8D0 */
  __IO uint32_t EICHD31_WORD5;                     /**< Error Injection Channel Descriptor n, Word5, offset: 0x8D4 */
  __IO uint32_t EICHD31_WORD6;                     /**< Error Injection Channel Descriptor n, Word6, offset: 0x8D8 */
  __IO uint32_t EICHD31_WORD7;                     /**< Error Injection Channel Descriptor n, Word7, offset: 0x8DC */
  __IO uint32_t EICHD31_WORD8;                     /**< Error Injection Channel Descriptor n, Word8, offset: 0x8E0 */
} EIM_Type, *EIM_MemMapPtr;

/** Number of instances of the EIM module. */
#define EIM_INSTANCE_COUNT                       (9u)

/* EIM - Peripheral instance base addresses */
/** Peripheral EIM base address */
#define EIM_BASE                                 (0x40308000u)
/** Peripheral EIM base pointer */
#define EIM                                      ((EIM_Type *)EIM_BASE)
/** Peripheral EIM_0 base address */
#define EIM_0_BASE                               (0x40330000u)
/** Peripheral EIM_0 base pointer */
#define EIM_0                                    ((EIM_Type *)EIM_0_BASE)
/** Peripheral EIM_1 base address */
#define EIM_1_BASE                               (0x40331000u)
/** Peripheral EIM_1 base pointer */
#define EIM_1                                    ((EIM_Type *)EIM_1_BASE)
/** Peripheral EIM_2 base address */
#define EIM_2_BASE                               (0x40332000u)
/** Peripheral EIM_2 base pointer */
#define EIM_2                                    ((EIM_Type *)EIM_2_BASE)
/** Peripheral EIM_3 base address */
#define EIM_3_BASE                               (0x40333000u)
/** Peripheral EIM_3 base pointer */
#define EIM_3                                    ((EIM_Type *)EIM_3_BASE)
/** Peripheral EIM_BBE32_DSP base address */
#define EIM_BBE32_DSP_BASE                       (0x44027000u)
/** Peripheral EIM_BBE32_DSP base pointer */
#define EIM_BBE32_DSP                            ((EIM_Type *)EIM_BBE32_DSP_BASE)
/** Peripheral EIM_LAX_0 base address */
#define EIM_LAX_0_BASE                           (0x440CC000u)
/** Peripheral EIM_LAX_0 base pointer */
#define EIM_LAX_0                                ((EIM_Type *)EIM_LAX_0_BASE)
/** Peripheral EIM_LAX_1 base address */
#define EIM_LAX_1_BASE                           (0x440CE000u)
/** Peripheral EIM_LAX_1 base pointer */
#define EIM_LAX_1                                ((EIM_Type *)EIM_LAX_1_BASE)
/** Peripheral EIM_PER_1 base address */
#define EIM_PER_1_BASE                           (0x440C5000u)
/** Peripheral EIM_PER_1 base pointer */
#define EIM_PER_1                                ((EIM_Type *)EIM_PER_1_BASE)
/** Array initializer of EIM peripheral base addresses */
#define EIM_BASE_ADDRS                           { EIM_BASE, EIM_0_BASE, EIM_1_BASE, EIM_2_BASE, EIM_3_BASE, EIM_BBE32_DSP_BASE, EIM_LAX_0_BASE, EIM_LAX_1_BASE, EIM_PER_1_BASE }
/** Array initializer of EIM peripheral base pointers */
#define EIM_BASE_PTRS                            { EIM, EIM_0, EIM_1, EIM_2, EIM_3, EIM_BBE32_DSP, EIM_LAX_0, EIM_LAX_1, EIM_PER_1 }

/* ----------------------------------------------------------------------------
   -- EIM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup EIM_Register_Masks EIM Register Masks
 * @{
 */

/*! @name EIMCR - Error Injection Module Configuration Register */
/*! @{ */
#define EIM_EIMCR_GEIEN_MASK                     (0x1U)
#define EIM_EIMCR_GEIEN_SHIFT                    (0U)
#define EIM_EIMCR_GEIEN_WIDTH                    (1U)
#define EIM_EIMCR_GEIEN(x)                       (((uint32_t)(((uint32_t)(x)) << EIM_EIMCR_GEIEN_SHIFT)) & EIM_EIMCR_GEIEN_MASK)
/*! @} */

/*! @name EICHEN - Error Injection Channel Enable register */
/*! @{ */
#define EIM_EICHEN_EICH31EN_MASK                 (0x1U)
#define EIM_EICHEN_EICH31EN_SHIFT                (0U)
#define EIM_EICHEN_EICH31EN_WIDTH                (1U)
#define EIM_EICHEN_EICH31EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH31EN_SHIFT)) & EIM_EICHEN_EICH31EN_MASK)
#define EIM_EICHEN_EICH30EN_MASK                 (0x2U)
#define EIM_EICHEN_EICH30EN_SHIFT                (1U)
#define EIM_EICHEN_EICH30EN_WIDTH                (1U)
#define EIM_EICHEN_EICH30EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH30EN_SHIFT)) & EIM_EICHEN_EICH30EN_MASK)
#define EIM_EICHEN_EICH29EN_MASK                 (0x4U)
#define EIM_EICHEN_EICH29EN_SHIFT                (2U)
#define EIM_EICHEN_EICH29EN_WIDTH                (1U)
#define EIM_EICHEN_EICH29EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH29EN_SHIFT)) & EIM_EICHEN_EICH29EN_MASK)
#define EIM_EICHEN_EICH28EN_MASK                 (0x8U)
#define EIM_EICHEN_EICH28EN_SHIFT                (3U)
#define EIM_EICHEN_EICH28EN_WIDTH                (1U)
#define EIM_EICHEN_EICH28EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH28EN_SHIFT)) & EIM_EICHEN_EICH28EN_MASK)
#define EIM_EICHEN_EICH27EN_MASK                 (0x10U)
#define EIM_EICHEN_EICH27EN_SHIFT                (4U)
#define EIM_EICHEN_EICH27EN_WIDTH                (1U)
#define EIM_EICHEN_EICH27EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH27EN_SHIFT)) & EIM_EICHEN_EICH27EN_MASK)
#define EIM_EICHEN_EICH26EN_MASK                 (0x20U)
#define EIM_EICHEN_EICH26EN_SHIFT                (5U)
#define EIM_EICHEN_EICH26EN_WIDTH                (1U)
#define EIM_EICHEN_EICH26EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH26EN_SHIFT)) & EIM_EICHEN_EICH26EN_MASK)
#define EIM_EICHEN_EICH25EN_MASK                 (0x40U)
#define EIM_EICHEN_EICH25EN_SHIFT                (6U)
#define EIM_EICHEN_EICH25EN_WIDTH                (1U)
#define EIM_EICHEN_EICH25EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH25EN_SHIFT)) & EIM_EICHEN_EICH25EN_MASK)
#define EIM_EICHEN_EICH24EN_MASK                 (0x80U)
#define EIM_EICHEN_EICH24EN_SHIFT                (7U)
#define EIM_EICHEN_EICH24EN_WIDTH                (1U)
#define EIM_EICHEN_EICH24EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH24EN_SHIFT)) & EIM_EICHEN_EICH24EN_MASK)
#define EIM_EICHEN_EICH23EN_MASK                 (0x100U)
#define EIM_EICHEN_EICH23EN_SHIFT                (8U)
#define EIM_EICHEN_EICH23EN_WIDTH                (1U)
#define EIM_EICHEN_EICH23EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH23EN_SHIFT)) & EIM_EICHEN_EICH23EN_MASK)
#define EIM_EICHEN_EICH22EN_MASK                 (0x200U)
#define EIM_EICHEN_EICH22EN_SHIFT                (9U)
#define EIM_EICHEN_EICH22EN_WIDTH                (1U)
#define EIM_EICHEN_EICH22EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH22EN_SHIFT)) & EIM_EICHEN_EICH22EN_MASK)
#define EIM_EICHEN_EICH21EN_MASK                 (0x400U)
#define EIM_EICHEN_EICH21EN_SHIFT                (10U)
#define EIM_EICHEN_EICH21EN_WIDTH                (1U)
#define EIM_EICHEN_EICH21EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH21EN_SHIFT)) & EIM_EICHEN_EICH21EN_MASK)
#define EIM_EICHEN_EICH20EN_MASK                 (0x800U)
#define EIM_EICHEN_EICH20EN_SHIFT                (11U)
#define EIM_EICHEN_EICH20EN_WIDTH                (1U)
#define EIM_EICHEN_EICH20EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH20EN_SHIFT)) & EIM_EICHEN_EICH20EN_MASK)
#define EIM_EICHEN_EICH19EN_MASK                 (0x1000U)
#define EIM_EICHEN_EICH19EN_SHIFT                (12U)
#define EIM_EICHEN_EICH19EN_WIDTH                (1U)
#define EIM_EICHEN_EICH19EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH19EN_SHIFT)) & EIM_EICHEN_EICH19EN_MASK)
#define EIM_EICHEN_EICH18EN_MASK                 (0x2000U)
#define EIM_EICHEN_EICH18EN_SHIFT                (13U)
#define EIM_EICHEN_EICH18EN_WIDTH                (1U)
#define EIM_EICHEN_EICH18EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH18EN_SHIFT)) & EIM_EICHEN_EICH18EN_MASK)
#define EIM_EICHEN_EICH17EN_MASK                 (0x4000U)
#define EIM_EICHEN_EICH17EN_SHIFT                (14U)
#define EIM_EICHEN_EICH17EN_WIDTH                (1U)
#define EIM_EICHEN_EICH17EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH17EN_SHIFT)) & EIM_EICHEN_EICH17EN_MASK)
#define EIM_EICHEN_EICH16EN_MASK                 (0x8000U)
#define EIM_EICHEN_EICH16EN_SHIFT                (15U)
#define EIM_EICHEN_EICH16EN_WIDTH                (1U)
#define EIM_EICHEN_EICH16EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH16EN_SHIFT)) & EIM_EICHEN_EICH16EN_MASK)
#define EIM_EICHEN_EICH15EN_MASK                 (0x10000U)
#define EIM_EICHEN_EICH15EN_SHIFT                (16U)
#define EIM_EICHEN_EICH15EN_WIDTH                (1U)
#define EIM_EICHEN_EICH15EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH15EN_SHIFT)) & EIM_EICHEN_EICH15EN_MASK)
#define EIM_EICHEN_EICH14EN_MASK                 (0x20000U)
#define EIM_EICHEN_EICH14EN_SHIFT                (17U)
#define EIM_EICHEN_EICH14EN_WIDTH                (1U)
#define EIM_EICHEN_EICH14EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH14EN_SHIFT)) & EIM_EICHEN_EICH14EN_MASK)
#define EIM_EICHEN_EICH13EN_MASK                 (0x40000U)
#define EIM_EICHEN_EICH13EN_SHIFT                (18U)
#define EIM_EICHEN_EICH13EN_WIDTH                (1U)
#define EIM_EICHEN_EICH13EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH13EN_SHIFT)) & EIM_EICHEN_EICH13EN_MASK)
#define EIM_EICHEN_EICH12EN_MASK                 (0x80000U)
#define EIM_EICHEN_EICH12EN_SHIFT                (19U)
#define EIM_EICHEN_EICH12EN_WIDTH                (1U)
#define EIM_EICHEN_EICH12EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH12EN_SHIFT)) & EIM_EICHEN_EICH12EN_MASK)
#define EIM_EICHEN_EICH11EN_MASK                 (0x100000U)
#define EIM_EICHEN_EICH11EN_SHIFT                (20U)
#define EIM_EICHEN_EICH11EN_WIDTH                (1U)
#define EIM_EICHEN_EICH11EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH11EN_SHIFT)) & EIM_EICHEN_EICH11EN_MASK)
#define EIM_EICHEN_EICH10EN_MASK                 (0x200000U)
#define EIM_EICHEN_EICH10EN_SHIFT                (21U)
#define EIM_EICHEN_EICH10EN_WIDTH                (1U)
#define EIM_EICHEN_EICH10EN(x)                   (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH10EN_SHIFT)) & EIM_EICHEN_EICH10EN_MASK)
#define EIM_EICHEN_EICH9EN_MASK                  (0x400000U)
#define EIM_EICHEN_EICH9EN_SHIFT                 (22U)
#define EIM_EICHEN_EICH9EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH9EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH9EN_SHIFT)) & EIM_EICHEN_EICH9EN_MASK)
#define EIM_EICHEN_EICH8EN_MASK                  (0x800000U)
#define EIM_EICHEN_EICH8EN_SHIFT                 (23U)
#define EIM_EICHEN_EICH8EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH8EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH8EN_SHIFT)) & EIM_EICHEN_EICH8EN_MASK)
#define EIM_EICHEN_EICH7EN_MASK                  (0x1000000U)
#define EIM_EICHEN_EICH7EN_SHIFT                 (24U)
#define EIM_EICHEN_EICH7EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH7EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH7EN_SHIFT)) & EIM_EICHEN_EICH7EN_MASK)
#define EIM_EICHEN_EICH6EN_MASK                  (0x2000000U)
#define EIM_EICHEN_EICH6EN_SHIFT                 (25U)
#define EIM_EICHEN_EICH6EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH6EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH6EN_SHIFT)) & EIM_EICHEN_EICH6EN_MASK)
#define EIM_EICHEN_EICH5EN_MASK                  (0x4000000U)
#define EIM_EICHEN_EICH5EN_SHIFT                 (26U)
#define EIM_EICHEN_EICH5EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH5EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH5EN_SHIFT)) & EIM_EICHEN_EICH5EN_MASK)
#define EIM_EICHEN_EICH4EN_MASK                  (0x8000000U)
#define EIM_EICHEN_EICH4EN_SHIFT                 (27U)
#define EIM_EICHEN_EICH4EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH4EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH4EN_SHIFT)) & EIM_EICHEN_EICH4EN_MASK)
#define EIM_EICHEN_EICH3EN_MASK                  (0x10000000U)
#define EIM_EICHEN_EICH3EN_SHIFT                 (28U)
#define EIM_EICHEN_EICH3EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH3EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH3EN_SHIFT)) & EIM_EICHEN_EICH3EN_MASK)
#define EIM_EICHEN_EICH2EN_MASK                  (0x20000000U)
#define EIM_EICHEN_EICH2EN_SHIFT                 (29U)
#define EIM_EICHEN_EICH2EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH2EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH2EN_SHIFT)) & EIM_EICHEN_EICH2EN_MASK)
#define EIM_EICHEN_EICH1EN_MASK                  (0x40000000U)
#define EIM_EICHEN_EICH1EN_SHIFT                 (30U)
#define EIM_EICHEN_EICH1EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH1EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH1EN_SHIFT)) & EIM_EICHEN_EICH1EN_MASK)
#define EIM_EICHEN_EICH0EN_MASK                  (0x80000000U)
#define EIM_EICHEN_EICH0EN_SHIFT                 (31U)
#define EIM_EICHEN_EICH0EN_WIDTH                 (1U)
#define EIM_EICHEN_EICH0EN(x)                    (((uint32_t)(((uint32_t)(x)) << EIM_EICHEN_EICH0EN_SHIFT)) & EIM_EICHEN_EICH0EN_MASK)
/*! @} */

/*! @name EICHD0_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD0_WORD0_CHKBIT_MASK_MASK        (0xFFFFFFFFU)
#define EIM_EICHD0_WORD0_CHKBIT_MASK_SHIFT       (0U)
#define EIM_EICHD0_WORD0_CHKBIT_MASK_WIDTH       (32U)
#define EIM_EICHD0_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD0_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD0_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD0_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD0_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD0_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD0_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD0_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD0_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD0_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD0_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD0_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD0_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD0_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD0_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD0_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD0_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD0_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD0_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD0_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD0_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD0_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD0_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD0_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD0_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD0_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD0_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD0_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD0_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD0_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD0_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD0_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD0_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD0_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD0_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD0_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD0_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD0_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD0_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD0_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD0_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD0_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD0_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD0_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD0_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD0_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD0_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD0_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD0_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD0_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD0_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD0_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD0_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD0_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD0_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD0_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD0_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD0_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD0_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD1_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD1_WORD0_CHKBIT_MASK_MASK        (0xFFFFFFFFU)
#define EIM_EICHD1_WORD0_CHKBIT_MASK_SHIFT       (0U)
#define EIM_EICHD1_WORD0_CHKBIT_MASK_WIDTH       (32U)
#define EIM_EICHD1_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD1_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD1_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD1_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD1_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD1_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD1_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD1_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD1_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD1_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD1_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD1_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD1_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD1_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD1_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD1_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD1_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD1_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD1_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD1_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD1_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD1_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD1_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD1_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD1_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD1_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD1_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD1_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD1_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD1_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD1_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD1_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD1_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD1_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD1_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD1_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD1_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD1_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD1_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD1_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD1_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD1_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD1_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD1_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD1_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD1_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD1_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD1_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD1_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD1_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD1_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD1_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD1_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD1_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD1_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD1_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD1_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD1_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD1_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD2_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD2_WORD0_CHKBIT_MASK_MASK        (0xFFFFFFFFU)
#define EIM_EICHD2_WORD0_CHKBIT_MASK_SHIFT       (0U)
#define EIM_EICHD2_WORD0_CHKBIT_MASK_WIDTH       (32U)
#define EIM_EICHD2_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD2_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD2_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD2_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD2_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD2_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD2_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD2_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD2_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD2_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD2_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD2_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD2_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD2_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD2_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD2_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD2_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD2_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD2_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD2_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD2_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD2_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD2_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD2_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD2_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD2_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD2_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD2_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD2_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD2_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD2_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD2_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD2_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD2_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD2_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD2_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD2_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD2_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD2_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD2_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD2_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD2_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD2_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD2_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD2_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD2_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD2_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD2_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD2_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD2_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD2_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD2_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD2_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD2_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD2_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD2_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD2_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD2_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD2_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD3_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD3_WORD0_CHKBIT_MASK_MASK        (0xFFFFFFFFU)
#define EIM_EICHD3_WORD0_CHKBIT_MASK_SHIFT       (0U)
#define EIM_EICHD3_WORD0_CHKBIT_MASK_WIDTH       (32U)
#define EIM_EICHD3_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD3_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD3_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD3_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD3_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD3_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD3_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD3_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD3_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD3_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD3_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD3_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD3_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD3_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD3_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD3_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD3_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD3_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD3_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD3_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD3_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD3_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD3_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD3_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD3_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD3_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD3_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD3_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD3_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD3_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD3_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD3_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD3_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD3_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD3_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD3_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD3_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD3_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD3_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD3_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD3_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD3_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD3_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD3_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD3_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD3_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD3_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD3_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD3_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD3_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD3_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD3_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD3_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD3_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD3_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD3_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD3_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD3_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD3_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD4_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD4_WORD0_CHKBIT_MASK_MASK        (0xFFFFFFFFU)
#define EIM_EICHD4_WORD0_CHKBIT_MASK_SHIFT       (0U)
#define EIM_EICHD4_WORD0_CHKBIT_MASK_WIDTH       (32U)
#define EIM_EICHD4_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD4_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD4_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD4_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD4_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD4_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD4_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD4_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD4_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD4_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD4_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD4_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD4_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD4_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD4_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD4_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD4_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD4_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD4_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD4_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD4_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD4_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD4_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD4_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD4_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD4_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD4_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD4_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD4_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD4_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD4_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD4_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD4_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD4_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD4_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD4_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD4_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD4_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD4_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD4_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD4_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD4_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD4_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD4_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD4_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD4_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD4_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD4_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD4_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD4_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD4_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD4_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD4_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD4_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD4_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD4_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD4_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD4_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD4_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD5_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD5_WORD0_CHKBIT_MASK_MASK        (0xFFFFFFFFU)
#define EIM_EICHD5_WORD0_CHKBIT_MASK_SHIFT       (0U)
#define EIM_EICHD5_WORD0_CHKBIT_MASK_WIDTH       (32U)
#define EIM_EICHD5_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD5_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD5_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD5_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD5_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD5_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD5_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD5_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD5_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD5_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD5_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD5_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD5_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD5_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD5_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD5_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD5_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD5_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD5_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD5_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD5_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD5_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD5_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD5_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD5_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD5_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD5_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD5_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD5_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD5_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD5_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD5_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD5_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD5_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD5_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD5_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD5_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD5_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD5_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD5_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD5_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD5_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD5_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD5_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD5_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD5_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD5_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD5_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD5_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD5_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD5_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD5_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD5_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD5_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD5_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD5_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD5_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD5_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD5_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD6_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD6_WORD0_CHKBIT_MASK_MASK        (0xFFFFFFFFU)
#define EIM_EICHD6_WORD0_CHKBIT_MASK_SHIFT       (0U)
#define EIM_EICHD6_WORD0_CHKBIT_MASK_WIDTH       (32U)
#define EIM_EICHD6_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD6_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD6_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD6_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD6_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD6_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD6_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD6_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD6_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD6_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD6_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD6_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD6_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD6_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD6_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD6_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD6_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD6_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD6_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD6_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD6_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD6_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD6_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD6_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD6_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD6_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD6_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD6_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD6_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD6_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD6_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD6_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD6_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD6_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD6_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD6_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD6_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD6_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD6_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD6_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD6_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD6_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD6_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD6_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD6_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD6_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD6_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD6_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD6_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD6_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD6_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD6_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD6_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD6_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD6_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD6_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD6_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD6_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD6_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD7_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD7_WORD0_CHKBIT_MASK_MASK        (0xFFFFFFFFU)
#define EIM_EICHD7_WORD0_CHKBIT_MASK_SHIFT       (0U)
#define EIM_EICHD7_WORD0_CHKBIT_MASK_WIDTH       (32U)
#define EIM_EICHD7_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD7_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD7_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD7_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD7_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD7_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD7_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD7_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD7_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD7_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD7_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD7_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD7_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD7_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD7_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD7_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD7_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD7_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD7_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD7_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD7_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD7_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD7_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD7_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD7_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD7_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD7_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD7_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD7_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD7_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD7_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD7_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD7_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD7_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD7_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD7_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD7_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD7_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD7_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD7_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD7_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD7_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD7_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD7_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD7_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD7_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD7_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD7_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD7_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD7_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD7_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD7_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD7_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD7_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD7_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD7_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD7_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD7_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD7_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD8_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD8_WORD0_CHKBIT_MASK_MASK        (0xFF000000U)
#define EIM_EICHD8_WORD0_CHKBIT_MASK_SHIFT       (24U)
#define EIM_EICHD8_WORD0_CHKBIT_MASK_WIDTH       (8U)
#define EIM_EICHD8_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD8_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD8_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD8_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD8_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD8_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD8_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD8_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD8_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD8_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD8_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD8_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD8_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD8_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD8_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD8_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD8_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD8_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD8_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD8_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD8_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD8_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD8_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD8_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD8_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD8_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD8_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD8_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD8_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD8_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD8_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD8_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD8_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD8_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD8_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD8_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD8_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD8_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD8_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD8_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD8_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD8_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD8_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD8_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD8_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD8_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD8_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD8_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD8_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD8_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD8_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD8_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD8_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD8_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD8_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD8_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD8_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD8_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD8_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD9_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD9_WORD0_CHKBIT_MASK_MASK        (0xFF000000U)
#define EIM_EICHD9_WORD0_CHKBIT_MASK_SHIFT       (24U)
#define EIM_EICHD9_WORD0_CHKBIT_MASK_WIDTH       (8U)
#define EIM_EICHD9_WORD0_CHKBIT_MASK(x)          (((uint32_t)(((uint32_t)(x)) << EIM_EICHD9_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD9_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD9_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD9_WORD1_B0_3DATA_MASK_MASK      (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD9_WORD1_B0_3DATA_MASK_SHIFT     (0U)
#define EIM_EICHD9_WORD1_B0_3DATA_MASK_WIDTH     (32U)
#define EIM_EICHD9_WORD1_B0_3DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD9_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD9_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD9_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD9_WORD2_B4_7DATA_MASK_MASK      (0xFFFFFFFFU)
#define EIM_EICHD9_WORD2_B4_7DATA_MASK_SHIFT     (0U)
#define EIM_EICHD9_WORD2_B4_7DATA_MASK_WIDTH     (32U)
#define EIM_EICHD9_WORD2_B4_7DATA_MASK(x)        (((uint32_t)(((uint32_t)(x)) << EIM_EICHD9_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD9_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD9_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD9_WORD3_B8_11DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD9_WORD3_B8_11DATA_MASK_SHIFT    (0U)
#define EIM_EICHD9_WORD3_B8_11DATA_MASK_WIDTH    (32U)
#define EIM_EICHD9_WORD3_B8_11DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD9_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD9_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD9_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD9_WORD4_B12_15DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD9_WORD4_B12_15DATA_MASK_SHIFT   (0U)
#define EIM_EICHD9_WORD4_B12_15DATA_MASK_WIDTH   (32U)
#define EIM_EICHD9_WORD4_B12_15DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD9_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD9_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD9_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD9_WORD5_B16_19DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD9_WORD5_B16_19DATA_MASK_SHIFT   (0U)
#define EIM_EICHD9_WORD5_B16_19DATA_MASK_WIDTH   (32U)
#define EIM_EICHD9_WORD5_B16_19DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD9_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD9_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD9_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD9_WORD6_B20_23DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD9_WORD6_B20_23DATA_MASK_SHIFT   (0U)
#define EIM_EICHD9_WORD6_B20_23DATA_MASK_WIDTH   (32U)
#define EIM_EICHD9_WORD6_B20_23DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD9_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD9_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD9_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD9_WORD7_B24_27DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD9_WORD7_B24_27DATA_MASK_SHIFT   (0U)
#define EIM_EICHD9_WORD7_B24_27DATA_MASK_WIDTH   (32U)
#define EIM_EICHD9_WORD7_B24_27DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD9_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD9_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD9_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD9_WORD8_B28_31DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD9_WORD8_B28_31DATA_MASK_SHIFT   (0U)
#define EIM_EICHD9_WORD8_B28_31DATA_MASK_WIDTH   (32U)
#define EIM_EICHD9_WORD8_B28_31DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD9_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD9_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD10_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD10_WORD0_CHKBIT_MASK_MASK       (0xFFFF0000U)
#define EIM_EICHD10_WORD0_CHKBIT_MASK_SHIFT      (16U)
#define EIM_EICHD10_WORD0_CHKBIT_MASK_WIDTH      (16U)
#define EIM_EICHD10_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD10_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD10_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD10_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD10_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD10_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD10_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD10_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD10_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD10_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD10_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD10_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD10_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD10_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD10_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD10_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD10_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD10_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD10_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD10_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD10_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD10_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD10_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD10_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD10_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD10_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD10_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD10_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD10_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD10_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD10_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD10_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD10_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD10_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD10_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD10_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD10_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD10_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD10_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD10_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD10_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD10_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD10_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD10_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD10_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD10_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD10_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD10_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD10_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD10_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD10_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD10_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD10_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD10_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD10_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD10_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD10_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD10_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD10_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD11_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD11_WORD0_CHKBIT_MASK_MASK       (0xFFFC0000U)
#define EIM_EICHD11_WORD0_CHKBIT_MASK_SHIFT      (18U)
#define EIM_EICHD11_WORD0_CHKBIT_MASK_WIDTH      (14U)
#define EIM_EICHD11_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD11_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD11_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD11_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD11_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (12, 28, 32), largest definition used */
#define EIM_EICHD11_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD11_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD11_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD11_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD11_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (12, 28, 32), largest definition used */
/*! @} */

/*! @name EICHD11_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD11_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD11_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD11_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD11_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD11_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD11_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD11_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD11_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD11_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD11_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD11_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD11_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD11_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD11_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD11_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD11_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD11_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD11_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD11_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD11_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD11_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD11_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD11_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD11_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD11_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD11_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD11_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD11_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD11_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD11_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD11_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD11_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD11_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD11_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD11_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD11_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD11_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD11_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD11_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD11_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD11_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD11_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD11_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD11_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD11_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD11_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD11_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD11_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD12_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD12_WORD0_CHKBIT_MASK_MASK       (0xFFFF0000U)
#define EIM_EICHD12_WORD0_CHKBIT_MASK_SHIFT      (16U)
#define EIM_EICHD12_WORD0_CHKBIT_MASK_WIDTH      (16U)
#define EIM_EICHD12_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD12_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD12_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD12_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD12_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD12_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD12_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD12_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD12_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD12_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD12_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD12_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD12_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD12_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD12_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD12_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD12_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD12_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD12_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD12_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD12_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD12_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD12_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD12_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD12_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD12_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD12_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD12_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD12_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD12_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD12_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD12_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD12_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD12_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD12_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD12_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD12_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD12_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD12_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD12_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD12_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD12_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD12_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD12_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD12_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD12_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD12_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD12_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD12_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD12_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD12_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD12_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD12_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD12_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD12_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD12_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD12_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD12_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD12_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD13_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD13_WORD0_CHKBIT_MASK_MASK       (0xFFFFFFF0U)
#define EIM_EICHD13_WORD0_CHKBIT_MASK_SHIFT      (4U)
#define EIM_EICHD13_WORD0_CHKBIT_MASK_WIDTH      (28U)
#define EIM_EICHD13_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD13_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD13_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD13_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD13_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (8, 28, 32), largest definition used */
#define EIM_EICHD13_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD13_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD13_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD13_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD13_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (8, 28, 32), largest definition used */
/*! @} */

/*! @name EICHD13_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD13_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD13_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD13_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD13_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD13_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD13_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD13_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD13_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD13_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD13_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD13_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD13_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD13_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD13_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD13_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD13_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD13_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD13_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD13_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD13_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD13_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD13_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD13_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD13_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD13_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD13_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD13_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD13_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD13_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD13_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD13_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD13_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD13_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD13_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD13_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD13_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD13_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD13_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD13_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD13_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD13_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD13_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD13_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD13_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD13_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD13_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD13_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD13_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD14_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD14_WORD0_CHKBIT_MASK_MASK       (0xFFFFFFF0U)
#define EIM_EICHD14_WORD0_CHKBIT_MASK_SHIFT      (4U)
#define EIM_EICHD14_WORD0_CHKBIT_MASK_WIDTH      (28U)
#define EIM_EICHD14_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD14_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD14_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD14_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD14_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD14_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD14_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD14_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD14_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD14_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD14_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD14_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD14_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD14_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD14_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD14_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD14_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD14_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD14_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD14_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD14_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD14_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD14_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD14_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD14_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD14_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD14_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD14_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD14_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD14_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD14_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD14_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD14_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD14_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD14_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD14_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD14_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD14_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD14_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD14_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD14_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD14_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD14_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD14_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD14_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD14_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD14_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD14_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD14_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD14_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD14_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD14_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD14_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD14_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD14_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD14_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD14_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD14_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD14_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD15_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD15_WORD0_CHKBIT_MASK_MASK       (0xFFFFFFF0U)
#define EIM_EICHD15_WORD0_CHKBIT_MASK_SHIFT      (4U)
#define EIM_EICHD15_WORD0_CHKBIT_MASK_WIDTH      (28U)
#define EIM_EICHD15_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD15_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD15_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD15_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD15_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD15_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD15_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD15_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD15_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD15_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD15_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD15_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD15_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD15_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD15_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD15_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD15_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD15_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD15_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD15_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD15_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD15_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD15_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD15_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD15_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD15_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD15_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD15_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD15_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD15_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD15_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD15_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD15_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD15_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD15_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD15_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD15_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD15_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD15_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD15_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD15_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD15_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD15_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD15_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD15_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD15_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD15_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD15_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD15_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD15_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD15_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD15_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD15_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD15_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD15_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD15_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD15_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD15_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD15_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD16_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD16_WORD0_CHKBIT_MASK_MASK       (0xFFFF0000U)
#define EIM_EICHD16_WORD0_CHKBIT_MASK_SHIFT      (16U)
#define EIM_EICHD16_WORD0_CHKBIT_MASK_WIDTH      (16U)
#define EIM_EICHD16_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD16_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD16_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD16_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD16_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD16_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD16_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD16_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD16_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD16_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD16_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD16_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD16_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD16_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD16_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD16_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD16_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD16_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD16_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD16_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD16_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD16_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD16_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD16_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD16_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD16_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD16_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD16_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD16_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD16_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD16_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD16_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD16_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD16_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD16_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD16_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD16_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD16_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD16_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD16_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD16_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD16_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD16_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD16_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD16_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD16_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD16_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD16_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD16_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD16_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD16_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD16_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD16_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD16_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD16_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD16_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD16_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD16_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD16_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD17_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD17_WORD0_CHKBIT_MASK_MASK       (0xFFFC0000U)
#define EIM_EICHD17_WORD0_CHKBIT_MASK_SHIFT      (18U)
#define EIM_EICHD17_WORD0_CHKBIT_MASK_WIDTH      (14U)
#define EIM_EICHD17_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD17_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD17_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD17_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD17_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (12, 28, 32), largest definition used */
#define EIM_EICHD17_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD17_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD17_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD17_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD17_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (12, 28, 32), largest definition used */
/*! @} */

/*! @name EICHD17_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD17_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD17_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD17_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD17_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD17_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD17_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD17_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD17_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD17_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD17_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD17_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD17_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD17_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD17_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD17_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD17_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD17_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD17_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD17_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD17_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD17_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD17_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD17_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD17_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD17_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD17_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD17_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD17_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD17_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD17_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD17_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD17_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD17_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD17_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD17_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD17_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD17_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD17_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD17_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD17_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD17_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD17_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD17_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD17_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD17_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD17_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD17_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD17_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD18_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD18_WORD0_CHKBIT_MASK_MASK       (0xFFFF0000U)
#define EIM_EICHD18_WORD0_CHKBIT_MASK_SHIFT      (16U)
#define EIM_EICHD18_WORD0_CHKBIT_MASK_WIDTH      (16U)
#define EIM_EICHD18_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD18_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD18_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD18_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD18_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
#define EIM_EICHD18_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD18_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD18_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD18_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD18_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (28, 32), largest definition used */
/*! @} */

/*! @name EICHD18_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD18_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD18_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD18_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD18_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD18_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD18_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD18_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD18_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD18_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD18_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD18_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD18_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD18_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD18_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD18_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD18_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD18_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD18_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD18_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD18_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD18_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD18_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD18_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD18_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD18_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD18_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD18_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD18_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD18_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD18_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD18_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD18_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD18_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD18_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD18_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD18_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD18_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD18_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD18_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD18_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD18_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD18_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD18_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD18_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD18_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD18_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD18_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD18_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD19_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD19_WORD0_CHKBIT_MASK_MASK       (0xFFFFFFF0U)
#define EIM_EICHD19_WORD0_CHKBIT_MASK_SHIFT      (4U)
#define EIM_EICHD19_WORD0_CHKBIT_MASK_WIDTH      (28U)
#define EIM_EICHD19_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD19_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD19_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD19_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD19_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (8, 27, 32), largest definition used */
#define EIM_EICHD19_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD19_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD19_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD19_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD19_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (8, 27, 32), largest definition used */
/*! @} */

/*! @name EICHD19_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD19_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD19_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD19_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD19_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD19_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD19_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD19_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD19_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD19_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD19_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD19_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD19_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD19_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD19_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD19_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD19_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD19_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD19_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD19_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD19_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD19_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD19_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD19_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD19_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD19_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD19_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD19_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD19_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD19_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD19_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD19_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD19_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD19_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD19_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD19_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD19_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD19_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD19_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD19_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD19_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD19_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD19_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD19_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD19_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD19_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD19_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD19_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD19_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD20_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD20_WORD0_CHKBIT_MASK_MASK       (0xFFFFFFF0U)
#define EIM_EICHD20_WORD0_CHKBIT_MASK_SHIFT      (4U)
#define EIM_EICHD20_WORD0_CHKBIT_MASK_WIDTH      (28U)
#define EIM_EICHD20_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD20_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD20_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD20_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD20_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (27, 32), largest definition used */
#define EIM_EICHD20_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD20_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD20_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD20_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD20_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (27, 32), largest definition used */
/*! @} */

/*! @name EICHD20_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD20_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD20_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD20_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD20_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD20_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD20_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD20_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD20_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD20_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD20_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD20_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD20_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD20_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD20_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD20_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD20_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD20_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD20_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD20_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD20_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD20_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD20_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD20_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD20_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD20_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD20_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD20_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD20_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD20_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD20_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD20_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD20_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD20_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD20_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD20_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD20_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD20_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD20_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD20_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD20_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD20_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD20_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD20_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD20_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD20_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD20_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD20_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD20_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD21_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD21_WORD0_CHKBIT_MASK_MASK       (0xFFFFFFF0U)
#define EIM_EICHD21_WORD0_CHKBIT_MASK_SHIFT      (4U)
#define EIM_EICHD21_WORD0_CHKBIT_MASK_WIDTH      (28U)
#define EIM_EICHD21_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD21_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD21_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD21_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD21_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD21_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD21_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD21_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD21_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD21_WORD1_B0_3DATA_MASK_MASK)
/*! @} */

/*! @name EICHD21_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD21_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD21_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD21_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD21_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD21_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD21_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD21_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD21_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD21_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD21_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD21_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD21_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD21_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD21_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD21_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD21_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD21_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD21_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD21_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD21_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD21_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD21_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD21_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD21_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD21_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD21_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD21_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD21_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD21_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD21_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD21_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD21_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD21_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD21_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD21_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD21_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD21_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD21_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD21_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD21_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD21_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD21_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD21_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD21_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD21_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD21_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD21_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD21_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD22_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD22_WORD0_CHKBIT_MASK_MASK       (0xFFFF0000U)
#define EIM_EICHD22_WORD0_CHKBIT_MASK_SHIFT      (16U)
#define EIM_EICHD22_WORD0_CHKBIT_MASK_WIDTH      (16U)
#define EIM_EICHD22_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD22_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD22_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD22_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD22_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD22_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD22_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD22_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD22_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD22_WORD1_B0_3DATA_MASK_MASK)
/*! @} */

/*! @name EICHD22_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD22_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD22_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD22_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD22_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD22_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD22_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD22_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD22_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD22_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD22_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD22_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD22_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD22_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD22_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD22_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD22_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD22_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD22_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD22_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD22_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD22_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD22_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD22_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD22_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD22_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD22_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD22_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD22_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD22_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD22_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD22_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD22_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD22_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD22_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD22_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD22_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD22_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD22_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD22_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD22_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD22_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD22_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD22_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD22_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD22_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD22_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD22_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD22_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD23_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD23_WORD0_CHKBIT_MASK_MASK       (0xFFFC0000U)
#define EIM_EICHD23_WORD0_CHKBIT_MASK_SHIFT      (18U)
#define EIM_EICHD23_WORD0_CHKBIT_MASK_WIDTH      (14U)
#define EIM_EICHD23_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD23_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD23_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD23_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD23_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (12, 32), largest definition used */
#define EIM_EICHD23_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD23_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD23_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD23_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD23_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (12, 32), largest definition used */
/*! @} */

/*! @name EICHD23_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD23_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD23_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD23_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD23_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD23_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD23_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD23_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD23_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD23_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD23_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD23_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD23_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD23_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD23_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD23_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD23_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD23_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD23_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD23_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD23_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD23_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD23_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD23_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD23_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD23_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD23_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD23_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD23_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD23_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD23_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD23_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD23_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD23_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD23_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD23_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD23_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD23_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD23_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD23_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD23_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD23_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD23_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD23_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD23_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD23_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD23_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD23_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD23_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD24_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD24_WORD0_CHKBIT_MASK_MASK       (0xFFFF0000U)
#define EIM_EICHD24_WORD0_CHKBIT_MASK_SHIFT      (16U)
#define EIM_EICHD24_WORD0_CHKBIT_MASK_WIDTH      (16U)
#define EIM_EICHD24_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD24_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD24_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD24_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD24_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD24_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD24_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD24_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD24_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD24_WORD1_B0_3DATA_MASK_MASK)
/*! @} */

/*! @name EICHD24_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD24_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD24_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD24_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD24_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD24_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD24_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD24_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD24_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD24_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD24_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD24_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD24_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD24_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD24_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD24_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD24_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD24_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD24_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD24_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD24_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD24_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD24_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD24_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD24_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD24_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD24_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD24_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD24_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD24_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD24_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD24_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD24_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD24_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD24_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD24_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD24_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD24_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD24_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD24_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD24_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD24_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD24_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD24_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD24_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD24_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD24_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD24_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD24_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD25_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD25_WORD0_CHKBIT_MASK_MASK       (0xFFFFFFF0U)
#define EIM_EICHD25_WORD0_CHKBIT_MASK_SHIFT      (4U)
#define EIM_EICHD25_WORD0_CHKBIT_MASK_WIDTH      (28U)
#define EIM_EICHD25_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD25_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD25_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD25_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD25_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (8, 32), largest definition used */
#define EIM_EICHD25_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD25_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD25_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD25_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD25_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (8, 32), largest definition used */
/*! @} */

/*! @name EICHD25_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD25_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD25_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD25_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD25_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD25_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD25_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD25_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD25_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD25_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD25_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD25_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD25_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD25_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD25_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD25_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD25_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD25_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD25_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD25_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD25_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD25_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD25_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD25_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD25_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD25_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD25_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD25_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD25_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD25_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD25_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD25_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD25_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD25_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD25_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD25_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD25_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD25_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD25_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD25_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD25_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD25_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD25_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD25_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD25_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD25_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD25_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD25_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD25_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD26_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD26_WORD0_CHKBIT_MASK_MASK       (0xFFFFFFF0U)
#define EIM_EICHD26_WORD0_CHKBIT_MASK_SHIFT      (4U)
#define EIM_EICHD26_WORD0_CHKBIT_MASK_WIDTH      (28U)
#define EIM_EICHD26_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD26_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD26_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD26_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD26_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD26_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD26_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD26_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD26_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD26_WORD1_B0_3DATA_MASK_MASK)
/*! @} */

/*! @name EICHD26_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD26_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD26_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD26_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD26_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD26_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD26_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD26_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD26_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD26_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD26_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD26_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD26_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD26_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD26_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD26_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD26_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD26_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD26_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD26_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD26_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD26_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD26_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD26_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD26_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD26_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD26_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD26_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD26_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD26_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD26_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD26_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD26_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD26_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD26_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD26_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD26_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD26_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD26_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD26_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD26_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD26_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD26_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD26_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD26_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD26_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD26_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD26_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD26_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD27_WORD0 - Error Injection Channel Descriptor n, Word0 */
/*! @{ */
#define EIM_EICHD27_WORD0_CHKBIT_MASK_MASK       (0xFFFFFFF0U)
#define EIM_EICHD27_WORD0_CHKBIT_MASK_SHIFT      (4U)
#define EIM_EICHD27_WORD0_CHKBIT_MASK_WIDTH      (28U)
#define EIM_EICHD27_WORD0_CHKBIT_MASK(x)         (((uint32_t)(((uint32_t)(x)) << EIM_EICHD27_WORD0_CHKBIT_MASK_SHIFT)) & EIM_EICHD27_WORD0_CHKBIT_MASK_MASK)
/*! @} */

/*! @name EICHD27_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD27_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD27_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD27_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD27_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD27_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD27_WORD1_B0_3DATA_MASK_MASK)
/*! @} */

/*! @name EICHD27_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD27_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD27_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD27_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD27_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD27_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD27_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD27_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD27_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD27_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD27_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD27_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD27_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD27_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD27_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD27_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD27_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD27_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD27_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD27_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD27_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD27_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD27_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD27_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD27_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD27_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD27_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD27_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD27_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD27_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD27_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD27_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD27_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD27_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD27_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD27_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD27_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD27_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD27_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD27_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD27_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD27_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD27_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD27_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD27_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD27_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD27_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD27_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD27_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD28_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD28_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (26, 32), largest definition used */
#define EIM_EICHD28_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD28_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD28_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD28_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD28_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (26, 32), largest definition used */
/*! @} */

/*! @name EICHD28_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD28_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD28_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD28_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD28_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD28_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD28_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD28_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD28_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD28_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD28_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD28_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD28_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD28_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD28_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD28_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD28_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD28_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD28_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD28_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD28_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD28_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD28_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD28_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD28_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD28_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD28_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD28_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD28_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD28_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD28_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD28_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD28_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD28_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD28_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD28_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD28_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD28_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD28_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD28_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD28_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD28_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD28_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD28_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD28_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD28_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD28_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD28_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD28_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD29_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD29_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (20, 32), largest definition used */
#define EIM_EICHD29_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD29_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD29_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD29_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD29_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (20, 32), largest definition used */
/*! @} */

/*! @name EICHD29_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD29_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD29_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD29_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD29_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD29_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD29_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD29_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD29_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD29_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD29_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD29_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD29_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD29_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD29_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD29_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD29_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD29_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD29_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD29_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD29_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD29_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD29_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD29_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD29_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD29_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD29_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD29_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD29_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD29_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD29_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD29_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD29_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD29_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD29_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD29_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD29_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD29_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD29_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD29_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD29_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD29_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD29_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD29_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD29_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD29_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD29_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD29_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD29_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD30_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD30_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)  /* Merged from fields with different position or width, of widths (18, 32), largest definition used */
#define EIM_EICHD30_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD30_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD30_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD30_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD30_WORD1_B0_3DATA_MASK_MASK)  /* Merged from fields with different position or width, of widths (18, 32), largest definition used */
/*! @} */

/*! @name EICHD30_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD30_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD30_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD30_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD30_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD30_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD30_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD30_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD30_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD30_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD30_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD30_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD30_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD30_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD30_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD30_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD30_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD30_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD30_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD30_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD30_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD30_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD30_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD30_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD30_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD30_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD30_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD30_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD30_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD30_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD30_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD30_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD30_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD30_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD30_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD30_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD30_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD30_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD30_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD30_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD30_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD30_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD30_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD30_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD30_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD30_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD30_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD30_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD30_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*! @name EICHD31_WORD1 - Error Injection Channel Descriptor n, Word1 */
/*! @{ */
#define EIM_EICHD31_WORD1_B0_3DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD31_WORD1_B0_3DATA_MASK_SHIFT    (0U)
#define EIM_EICHD31_WORD1_B0_3DATA_MASK_WIDTH    (32U)
#define EIM_EICHD31_WORD1_B0_3DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD31_WORD1_B0_3DATA_MASK_SHIFT)) & EIM_EICHD31_WORD1_B0_3DATA_MASK_MASK)
/*! @} */

/*! @name EICHD31_WORD2 - Error Injection Channel Descriptor n, Word2 */
/*! @{ */
#define EIM_EICHD31_WORD2_B4_7DATA_MASK_MASK     (0xFFFFFFFFU)
#define EIM_EICHD31_WORD2_B4_7DATA_MASK_SHIFT    (0U)
#define EIM_EICHD31_WORD2_B4_7DATA_MASK_WIDTH    (32U)
#define EIM_EICHD31_WORD2_B4_7DATA_MASK(x)       (((uint32_t)(((uint32_t)(x)) << EIM_EICHD31_WORD2_B4_7DATA_MASK_SHIFT)) & EIM_EICHD31_WORD2_B4_7DATA_MASK_MASK)
/*! @} */

/*! @name EICHD31_WORD3 - Error Injection Channel Descriptor n, Word3 */
/*! @{ */
#define EIM_EICHD31_WORD3_B8_11DATA_MASK_MASK    (0xFFFFFFFFU)
#define EIM_EICHD31_WORD3_B8_11DATA_MASK_SHIFT   (0U)
#define EIM_EICHD31_WORD3_B8_11DATA_MASK_WIDTH   (32U)
#define EIM_EICHD31_WORD3_B8_11DATA_MASK(x)      (((uint32_t)(((uint32_t)(x)) << EIM_EICHD31_WORD3_B8_11DATA_MASK_SHIFT)) & EIM_EICHD31_WORD3_B8_11DATA_MASK_MASK)
/*! @} */

/*! @name EICHD31_WORD4 - Error Injection Channel Descriptor n, Word4 */
/*! @{ */
#define EIM_EICHD31_WORD4_B12_15DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD31_WORD4_B12_15DATA_MASK_SHIFT  (0U)
#define EIM_EICHD31_WORD4_B12_15DATA_MASK_WIDTH  (32U)
#define EIM_EICHD31_WORD4_B12_15DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD31_WORD4_B12_15DATA_MASK_SHIFT)) & EIM_EICHD31_WORD4_B12_15DATA_MASK_MASK)
/*! @} */

/*! @name EICHD31_WORD5 - Error Injection Channel Descriptor n, Word5 */
/*! @{ */
#define EIM_EICHD31_WORD5_B16_19DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD31_WORD5_B16_19DATA_MASK_SHIFT  (0U)
#define EIM_EICHD31_WORD5_B16_19DATA_MASK_WIDTH  (32U)
#define EIM_EICHD31_WORD5_B16_19DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD31_WORD5_B16_19DATA_MASK_SHIFT)) & EIM_EICHD31_WORD5_B16_19DATA_MASK_MASK)
/*! @} */

/*! @name EICHD31_WORD6 - Error Injection Channel Descriptor n, Word6 */
/*! @{ */
#define EIM_EICHD31_WORD6_B20_23DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD31_WORD6_B20_23DATA_MASK_SHIFT  (0U)
#define EIM_EICHD31_WORD6_B20_23DATA_MASK_WIDTH  (32U)
#define EIM_EICHD31_WORD6_B20_23DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD31_WORD6_B20_23DATA_MASK_SHIFT)) & EIM_EICHD31_WORD6_B20_23DATA_MASK_MASK)
/*! @} */

/*! @name EICHD31_WORD7 - Error Injection Channel Descriptor n, Word7 */
/*! @{ */
#define EIM_EICHD31_WORD7_B24_27DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD31_WORD7_B24_27DATA_MASK_SHIFT  (0U)
#define EIM_EICHD31_WORD7_B24_27DATA_MASK_WIDTH  (32U)
#define EIM_EICHD31_WORD7_B24_27DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD31_WORD7_B24_27DATA_MASK_SHIFT)) & EIM_EICHD31_WORD7_B24_27DATA_MASK_MASK)
/*! @} */

/*! @name EICHD31_WORD8 - Error Injection Channel Descriptor n, Word8 */
/*! @{ */
#define EIM_EICHD31_WORD8_B28_31DATA_MASK_MASK   (0xFFFFFFFFU)
#define EIM_EICHD31_WORD8_B28_31DATA_MASK_SHIFT  (0U)
#define EIM_EICHD31_WORD8_B28_31DATA_MASK_WIDTH  (32U)
#define EIM_EICHD31_WORD8_B28_31DATA_MASK(x)     (((uint32_t)(((uint32_t)(x)) << EIM_EICHD31_WORD8_B28_31DATA_MASK_SHIFT)) & EIM_EICHD31_WORD8_B28_31DATA_MASK_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group EIM_Register_Masks */

/*!
 * @}
 */ /* end of group EIM_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_EIM_H_) */
