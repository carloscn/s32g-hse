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
 * @file S32R45_XRDC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_XRDC
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
#if !defined(S32R45_XRDC_H_)  /* Check if memory map has not been already included */
#define S32R45_XRDC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- XRDC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XRDC_Peripheral_Access_Layer XRDC Peripheral Access Layer
 * @{
 */

/** XRDC - Size of Registers Arrays */
#define XRDC_MDACFG_COUNT                         44u
#define XRDC_MRCFG_COUNT                          14u
#define XRDC_DERRLOC_COUNT                        8u
#define XRDC_DERR_COUNT                           20u
#define XRDC_PID_COUNT                            19u
#define XRDC_MDA_Wm_COUNT                         44u
#define XRDC_PDAC_COUNT                           512u
#define XRDC_MRGD_COUNT                           256u

/** XRDC - Register Layout Typedef */
typedef struct {
  __IO uint32_t CR;                                /**< Control Register, offset: 0x0 */
  __IO uint8_t RESERVED_0[236];
  __I  uint32_t HWCFG0;                            /**< Hardware Configuration Register 0, offset: 0xF0 */
  __I  uint32_t HWCFG1;                            /**< Hardware Configuration Register 1, offset: 0xF4 */
  __I  uint32_t HWCFG2;                            /**< Hardware Configuration Register 2, offset: 0xF8 */
  __IO uint8_t RESERVED_1[4];
  __I  uint8_t MDACFG[XRDC_MDACFG_COUNT];          /**< Master Domain Assignment Configuration Register, array offset: 0x100, array step: 0x1 */
  __IO uint8_t RESERVED_2[20];
  __I  uint8_t MRCFG[XRDC_MRCFG_COUNT];            /**< Memory Region Configuration Register, array offset: 0x140, array step: 0x1 */
  __IO uint8_t RESERVED_3[178];
  __I  uint32_t DERRLOC[XRDC_DERRLOC_COUNT];       /**< Domain Error Location Register, array offset: 0x200, array step: 0x4 */
  __IO uint8_t RESERVED_4[480];
  struct {                                         /* offset: 0x400, array step: 0x10 */
    __I  uint32_t W0;                              /**< Domain Error Word0 Register, array offset: 0x400, array step: 0x10 */
    __I  uint32_t W1;                              /**< Domain Error Word1 Register, array offset: 0x404, array step: 0x10 */
    __I  uint32_t W2;                              /**< Domain Error Word2 Register, array offset: 0x408, array step: 0x10 */
    __IO uint32_t W3;                              /**< Domain Error Word3 Register, array offset: 0x40C, array step: 0x10 */
  } DERR[XRDC_DERR_COUNT];
  __IO uint8_t RESERVED_5[448];
  __IO uint32_t PID[XRDC_PID_COUNT];               /**< Process Identifier, array offset: 0x700, array step: 0x4 */
  __IO uint8_t RESERVED_6[180];
  struct {                                         /* offset: 0x800, array step: 0x20 */
    __IO uint32_t MDA_Wm;                          /**< Master Domain Assignment Wm,n (DFMT=0), array offset: 0x800, array step: 0x20 */
    __IO uint8_t RESERVED_0[28];
  } MDA_Wm[XRDC_MDA_Wm_COUNT];
  __IO uint8_t RESERVED_7[640];
  struct {                                         /* offset: 0x1000, array step: 0x8 */
    __IO uint32_t W0;                              /**< Peripheral Domain Access Control W0, array offset: 0x1000, array step: 0x8 */
    __IO uint32_t W1;                              /**< Peripheral Domain Access Control W1, array offset: 0x1004, array step: 0x8 */
  } PDAC[XRDC_PDAC_COUNT];
  struct {                                         /* offset: 0x2000, array step: 0x20 */
    __IO uint32_t W0;                              /**< Memory Region Descriptor W0, array offset: 0x2000, array step: 0x20 */
    __IO uint32_t W1;                              /**< Memory Region Descriptor W1, array offset: 0x2004, array step: 0x20 */
    __IO uint32_t W2;                              /**< Memory Region Descriptor W2, array offset: 0x2008, array step: 0x20 */
    __IO uint32_t W3;                              /**< Memory Region Descriptor W3, array offset: 0x200C, array step: 0x20 */
    __IO uint8_t RESERVED_0[16];
  } MRGD[XRDC_MRGD_COUNT];
} XRDC_Type, *XRDC_MemMapPtr;

/** Number of instances of the XRDC module. */
#define XRDC_INSTANCE_COUNT                      (2u)

/* XRDC - Peripheral instance base addresses */
/** Peripheral XRDC_0 base address */
#define XRDC_0_BASE                              (0x401A4000u)
/** Peripheral XRDC_1 base address */
#define XRDC_1_BASE                              (0x4402C000u)
/** Peripheral XRDC_0 base pointer */
#define XRDC_0                                   ((XRDC_Type *)XRDC_0_BASE)
/** Peripheral XRDC_1 base pointer */
#define XRDC_1                                   ((XRDC_Type *)XRDC_1_BASE)
/** Array initializer of XRDC peripheral base addresses */
#define XRDC_BASE_ADDRS                          { XRDC_0_BASE, XRDC_1_BASE }
/** Array initializer of XRDC peripheral base pointers */
#define XRDC_BASE_PTRS                           { XRDC_0, XRDC_1 }

/* ----------------------------------------------------------------------------
   -- XRDC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup XRDC_Register_Masks XRDC Register Masks
 * @{
 */

/* CR Bit Fields */
#define XRDC_CR_GVLD_MASK                        0x1u
#define XRDC_CR_GVLD_SHIFT                       0u
#define XRDC_CR_GVLD_WIDTH                       1u
#define XRDC_CR_GVLD(x)                          (((uint32_t)(((uint32_t)(x))<<XRDC_CR_GVLD_SHIFT))&XRDC_CR_GVLD_MASK)
#define XRDC_CR_HRL_MASK                         0x1Eu
#define XRDC_CR_HRL_SHIFT                        1u
#define XRDC_CR_HRL_WIDTH                        4u
#define XRDC_CR_HRL(x)                           (((uint32_t)(((uint32_t)(x))<<XRDC_CR_HRL_SHIFT))&XRDC_CR_HRL_MASK)
#define XRDC_CR_MRF_MASK                         0x80u
#define XRDC_CR_MRF_SHIFT                        7u
#define XRDC_CR_MRF_WIDTH                        1u
#define XRDC_CR_MRF(x)                           (((uint32_t)(((uint32_t)(x))<<XRDC_CR_MRF_SHIFT))&XRDC_CR_MRF_MASK)
#define XRDC_CR_VAW_MASK                         0x100u
#define XRDC_CR_VAW_SHIFT                        8u
#define XRDC_CR_VAW_WIDTH                        1u
#define XRDC_CR_VAW(x)                           (((uint32_t)(((uint32_t)(x))<<XRDC_CR_VAW_SHIFT))&XRDC_CR_VAW_MASK)
#define XRDC_CR_LK1_MASK                         0x40000000u
#define XRDC_CR_LK1_SHIFT                        30u
#define XRDC_CR_LK1_WIDTH                        1u
#define XRDC_CR_LK1(x)                           (((uint32_t)(((uint32_t)(x))<<XRDC_CR_LK1_SHIFT))&XRDC_CR_LK1_MASK)
/* HWCFG0 Bit Fields */
#define XRDC_HWCFG0_NDID_MASK                    0xFFu
#define XRDC_HWCFG0_NDID_SHIFT                   0u
#define XRDC_HWCFG0_NDID_WIDTH                   8u
#define XRDC_HWCFG0_NDID(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG0_NDID_SHIFT))&XRDC_HWCFG0_NDID_MASK)
#define XRDC_HWCFG0_NMSTR_MASK                   0xFF00u
#define XRDC_HWCFG0_NMSTR_SHIFT                  8u
#define XRDC_HWCFG0_NMSTR_WIDTH                  8u
#define XRDC_HWCFG0_NMSTR(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG0_NMSTR_SHIFT))&XRDC_HWCFG0_NMSTR_MASK)
#define XRDC_HWCFG0_NMRC_MASK                    0xFF0000u
#define XRDC_HWCFG0_NMRC_SHIFT                   16u
#define XRDC_HWCFG0_NMRC_WIDTH                   8u
#define XRDC_HWCFG0_NMRC(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG0_NMRC_SHIFT))&XRDC_HWCFG0_NMRC_MASK)
#define XRDC_HWCFG0_NPAC_MASK                    0xF000000u
#define XRDC_HWCFG0_NPAC_SHIFT                   24u
#define XRDC_HWCFG0_NPAC_WIDTH                   4u
#define XRDC_HWCFG0_NPAC(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG0_NPAC_SHIFT))&XRDC_HWCFG0_NPAC_MASK)
#define XRDC_HWCFG0_MID_MASK                     0xF0000000u
#define XRDC_HWCFG0_MID_SHIFT                    28u
#define XRDC_HWCFG0_MID_WIDTH                    4u
#define XRDC_HWCFG0_MID(x)                       (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG0_MID_SHIFT))&XRDC_HWCFG0_MID_MASK)
/* HWCFG1 Bit Fields */
#define XRDC_HWCFG1_DID_MASK                     0xFu
#define XRDC_HWCFG1_DID_SHIFT                    0u
#define XRDC_HWCFG1_DID_WIDTH                    4u
#define XRDC_HWCFG1_DID(x)                       (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG1_DID_SHIFT))&XRDC_HWCFG1_DID_MASK)
/* HWCFG2 Bit Fields */
#define XRDC_HWCFG2_PIDP0_MASK                   0x1u
#define XRDC_HWCFG2_PIDP0_SHIFT                  0u
#define XRDC_HWCFG2_PIDP0_WIDTH                  1u
#define XRDC_HWCFG2_PIDP0(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP0_SHIFT))&XRDC_HWCFG2_PIDP0_MASK)
#define XRDC_HWCFG2_PIDP1_MASK                   0x2u
#define XRDC_HWCFG2_PIDP1_SHIFT                  1u
#define XRDC_HWCFG2_PIDP1_WIDTH                  1u
#define XRDC_HWCFG2_PIDP1(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP1_SHIFT))&XRDC_HWCFG2_PIDP1_MASK)
#define XRDC_HWCFG2_PIDP2_MASK                   0x4u
#define XRDC_HWCFG2_PIDP2_SHIFT                  2u
#define XRDC_HWCFG2_PIDP2_WIDTH                  1u
#define XRDC_HWCFG2_PIDP2(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP2_SHIFT))&XRDC_HWCFG2_PIDP2_MASK)
#define XRDC_HWCFG2_PIDP3_MASK                   0x8u
#define XRDC_HWCFG2_PIDP3_SHIFT                  3u
#define XRDC_HWCFG2_PIDP3_WIDTH                  1u
#define XRDC_HWCFG2_PIDP3(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP3_SHIFT))&XRDC_HWCFG2_PIDP3_MASK)
#define XRDC_HWCFG2_PIDP4_MASK                   0x10u
#define XRDC_HWCFG2_PIDP4_SHIFT                  4u
#define XRDC_HWCFG2_PIDP4_WIDTH                  1u
#define XRDC_HWCFG2_PIDP4(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP4_SHIFT))&XRDC_HWCFG2_PIDP4_MASK)
#define XRDC_HWCFG2_PIDP5_MASK                   0x20u
#define XRDC_HWCFG2_PIDP5_SHIFT                  5u
#define XRDC_HWCFG2_PIDP5_WIDTH                  1u
#define XRDC_HWCFG2_PIDP5(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP5_SHIFT))&XRDC_HWCFG2_PIDP5_MASK)
#define XRDC_HWCFG2_PIDP6_MASK                   0x40u
#define XRDC_HWCFG2_PIDP6_SHIFT                  6u
#define XRDC_HWCFG2_PIDP6_WIDTH                  1u
#define XRDC_HWCFG2_PIDP6(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP6_SHIFT))&XRDC_HWCFG2_PIDP6_MASK)
#define XRDC_HWCFG2_PIDP7_MASK                   0x80u
#define XRDC_HWCFG2_PIDP7_SHIFT                  7u
#define XRDC_HWCFG2_PIDP7_WIDTH                  1u
#define XRDC_HWCFG2_PIDP7(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP7_SHIFT))&XRDC_HWCFG2_PIDP7_MASK)
#define XRDC_HWCFG2_PIDP8_MASK                   0x100u
#define XRDC_HWCFG2_PIDP8_SHIFT                  8u
#define XRDC_HWCFG2_PIDP8_WIDTH                  1u
#define XRDC_HWCFG2_PIDP8(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP8_SHIFT))&XRDC_HWCFG2_PIDP8_MASK)
#define XRDC_HWCFG2_PIDP9_MASK                   0x200u
#define XRDC_HWCFG2_PIDP9_SHIFT                  9u
#define XRDC_HWCFG2_PIDP9_WIDTH                  1u
#define XRDC_HWCFG2_PIDP9(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP9_SHIFT))&XRDC_HWCFG2_PIDP9_MASK)
#define XRDC_HWCFG2_PIDP10_MASK                  0x400u
#define XRDC_HWCFG2_PIDP10_SHIFT                 10u
#define XRDC_HWCFG2_PIDP10_WIDTH                 1u
#define XRDC_HWCFG2_PIDP10(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP10_SHIFT))&XRDC_HWCFG2_PIDP10_MASK)
#define XRDC_HWCFG2_PIDP11_MASK                  0x800u
#define XRDC_HWCFG2_PIDP11_SHIFT                 11u
#define XRDC_HWCFG2_PIDP11_WIDTH                 1u
#define XRDC_HWCFG2_PIDP11(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP11_SHIFT))&XRDC_HWCFG2_PIDP11_MASK)
#define XRDC_HWCFG2_PIDP12_MASK                  0x1000u
#define XRDC_HWCFG2_PIDP12_SHIFT                 12u
#define XRDC_HWCFG2_PIDP12_WIDTH                 1u
#define XRDC_HWCFG2_PIDP12(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP12_SHIFT))&XRDC_HWCFG2_PIDP12_MASK)
#define XRDC_HWCFG2_PIDP13_MASK                  0x2000u
#define XRDC_HWCFG2_PIDP13_SHIFT                 13u
#define XRDC_HWCFG2_PIDP13_WIDTH                 1u
#define XRDC_HWCFG2_PIDP13(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP13_SHIFT))&XRDC_HWCFG2_PIDP13_MASK)
#define XRDC_HWCFG2_PIDP14_MASK                  0x4000u
#define XRDC_HWCFG2_PIDP14_SHIFT                 14u
#define XRDC_HWCFG2_PIDP14_WIDTH                 1u
#define XRDC_HWCFG2_PIDP14(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP14_SHIFT))&XRDC_HWCFG2_PIDP14_MASK)
#define XRDC_HWCFG2_PIDP15_MASK                  0x8000u
#define XRDC_HWCFG2_PIDP15_SHIFT                 15u
#define XRDC_HWCFG2_PIDP15_WIDTH                 1u
#define XRDC_HWCFG2_PIDP15(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP15_SHIFT))&XRDC_HWCFG2_PIDP15_MASK)
#define XRDC_HWCFG2_PIDP16_MASK                  0x10000u
#define XRDC_HWCFG2_PIDP16_SHIFT                 16u
#define XRDC_HWCFG2_PIDP16_WIDTH                 1u
#define XRDC_HWCFG2_PIDP16(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP16_SHIFT))&XRDC_HWCFG2_PIDP16_MASK)
#define XRDC_HWCFG2_PIDP17_MASK                  0x20000u
#define XRDC_HWCFG2_PIDP17_SHIFT                 17u
#define XRDC_HWCFG2_PIDP17_WIDTH                 1u
#define XRDC_HWCFG2_PIDP17(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP17_SHIFT))&XRDC_HWCFG2_PIDP17_MASK)
#define XRDC_HWCFG2_PIDP18_MASK                  0x40000u
#define XRDC_HWCFG2_PIDP18_SHIFT                 18u
#define XRDC_HWCFG2_PIDP18_WIDTH                 1u
#define XRDC_HWCFG2_PIDP18(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP18_SHIFT))&XRDC_HWCFG2_PIDP18_MASK)
#define XRDC_HWCFG2_PIDP19_MASK                  0x80000u
#define XRDC_HWCFG2_PIDP19_SHIFT                 19u
#define XRDC_HWCFG2_PIDP19_WIDTH                 1u
#define XRDC_HWCFG2_PIDP19(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP19_SHIFT))&XRDC_HWCFG2_PIDP19_MASK)
#define XRDC_HWCFG2_PIDP20_MASK                  0x100000u
#define XRDC_HWCFG2_PIDP20_SHIFT                 20u
#define XRDC_HWCFG2_PIDP20_WIDTH                 1u
#define XRDC_HWCFG2_PIDP20(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP20_SHIFT))&XRDC_HWCFG2_PIDP20_MASK)
#define XRDC_HWCFG2_PIDP21_MASK                  0x200000u
#define XRDC_HWCFG2_PIDP21_SHIFT                 21u
#define XRDC_HWCFG2_PIDP21_WIDTH                 1u
#define XRDC_HWCFG2_PIDP21(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP21_SHIFT))&XRDC_HWCFG2_PIDP21_MASK)
#define XRDC_HWCFG2_PIDP22_MASK                  0x400000u
#define XRDC_HWCFG2_PIDP22_SHIFT                 22u
#define XRDC_HWCFG2_PIDP22_WIDTH                 1u
#define XRDC_HWCFG2_PIDP22(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP22_SHIFT))&XRDC_HWCFG2_PIDP22_MASK)
#define XRDC_HWCFG2_PIDP23_MASK                  0x800000u
#define XRDC_HWCFG2_PIDP23_SHIFT                 23u
#define XRDC_HWCFG2_PIDP23_WIDTH                 1u
#define XRDC_HWCFG2_PIDP23(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP23_SHIFT))&XRDC_HWCFG2_PIDP23_MASK)
#define XRDC_HWCFG2_PIDP24_MASK                  0x1000000u
#define XRDC_HWCFG2_PIDP24_SHIFT                 24u
#define XRDC_HWCFG2_PIDP24_WIDTH                 1u
#define XRDC_HWCFG2_PIDP24(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP24_SHIFT))&XRDC_HWCFG2_PIDP24_MASK)
#define XRDC_HWCFG2_PIDP25_MASK                  0x2000000u
#define XRDC_HWCFG2_PIDP25_SHIFT                 25u
#define XRDC_HWCFG2_PIDP25_WIDTH                 1u
#define XRDC_HWCFG2_PIDP25(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP25_SHIFT))&XRDC_HWCFG2_PIDP25_MASK)
#define XRDC_HWCFG2_PIDP26_MASK                  0x4000000u
#define XRDC_HWCFG2_PIDP26_SHIFT                 26u
#define XRDC_HWCFG2_PIDP26_WIDTH                 1u
#define XRDC_HWCFG2_PIDP26(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP26_SHIFT))&XRDC_HWCFG2_PIDP26_MASK)
#define XRDC_HWCFG2_PIDP27_MASK                  0x8000000u
#define XRDC_HWCFG2_PIDP27_SHIFT                 27u
#define XRDC_HWCFG2_PIDP27_WIDTH                 1u
#define XRDC_HWCFG2_PIDP27(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP27_SHIFT))&XRDC_HWCFG2_PIDP27_MASK)
#define XRDC_HWCFG2_PIDP28_MASK                  0x10000000u
#define XRDC_HWCFG2_PIDP28_SHIFT                 28u
#define XRDC_HWCFG2_PIDP28_WIDTH                 1u
#define XRDC_HWCFG2_PIDP28(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP28_SHIFT))&XRDC_HWCFG2_PIDP28_MASK)
#define XRDC_HWCFG2_PIDP29_MASK                  0x20000000u
#define XRDC_HWCFG2_PIDP29_SHIFT                 29u
#define XRDC_HWCFG2_PIDP29_WIDTH                 1u
#define XRDC_HWCFG2_PIDP29(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP29_SHIFT))&XRDC_HWCFG2_PIDP29_MASK)
#define XRDC_HWCFG2_PIDP30_MASK                  0x40000000u
#define XRDC_HWCFG2_PIDP30_SHIFT                 30u
#define XRDC_HWCFG2_PIDP30_WIDTH                 1u
#define XRDC_HWCFG2_PIDP30(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP30_SHIFT))&XRDC_HWCFG2_PIDP30_MASK)
#define XRDC_HWCFG2_PIDP31_MASK                  0x80000000u
#define XRDC_HWCFG2_PIDP31_SHIFT                 31u
#define XRDC_HWCFG2_PIDP31_WIDTH                 1u
#define XRDC_HWCFG2_PIDP31(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_HWCFG2_PIDP31_SHIFT))&XRDC_HWCFG2_PIDP31_MASK)
/* MDACFG Bit Fields */
#define XRDC_MDACFG_NMDAR_MASK                   0xFu
#define XRDC_MDACFG_NMDAR_SHIFT                  0u
#define XRDC_MDACFG_NMDAR_WIDTH                  4u
#define XRDC_MDACFG_NMDAR(x)                     (((uint8_t)(((uint8_t)(x))<<XRDC_MDACFG_NMDAR_SHIFT))&XRDC_MDACFG_NMDAR_MASK)
#define XRDC_MDACFG_NCM_MASK                     0x80u
#define XRDC_MDACFG_NCM_SHIFT                    7u
#define XRDC_MDACFG_NCM_WIDTH                    1u
#define XRDC_MDACFG_NCM(x)                       (((uint8_t)(((uint8_t)(x))<<XRDC_MDACFG_NCM_SHIFT))&XRDC_MDACFG_NCM_MASK)
/* MRCFG Bit Fields */
#define XRDC_MRCFG_NMGD_MASK                     0x1Fu
#define XRDC_MRCFG_NMGD_SHIFT                    0u
#define XRDC_MRCFG_NMGD_WIDTH                    5u
#define XRDC_MRCFG_NMGD(x)                       (((uint8_t)(((uint8_t)(x))<<XRDC_MRCFG_NMGD_SHIFT))&XRDC_MRCFG_NMGD_MASK)
/* DERRLOC Bit Fields */
#define XRDC_DERRLOC_MRCINST_MASK                0xFFFFu
#define XRDC_DERRLOC_MRCINST_SHIFT               0u
#define XRDC_DERRLOC_MRCINST_WIDTH               16u
#define XRDC_DERRLOC_MRCINST(x)                  (((uint32_t)(((uint32_t)(x))<<XRDC_DERRLOC_MRCINST_SHIFT))&XRDC_DERRLOC_MRCINST_MASK)
#define XRDC_DERRLOC_PACINST_MASK                0xF0000u
#define XRDC_DERRLOC_PACINST_SHIFT               16u
#define XRDC_DERRLOC_PACINST_WIDTH               4u
#define XRDC_DERRLOC_PACINST(x)                  (((uint32_t)(((uint32_t)(x))<<XRDC_DERRLOC_PACINST_SHIFT))&XRDC_DERRLOC_PACINST_MASK)
/* DERR_W0 Bit Fields */
#define XRDC_DERR_W0_EADDR_MASK                  0xFFFFFFFFu
#define XRDC_DERR_W0_EADDR_SHIFT                 0u
#define XRDC_DERR_W0_EADDR_WIDTH                 32u
#define XRDC_DERR_W0_EADDR(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_DERR_W0_EADDR_SHIFT))&XRDC_DERR_W0_EADDR_MASK)
/* DERR_W1 Bit Fields */
#define XRDC_DERR_W1_EDID_MASK                   0xFu
#define XRDC_DERR_W1_EDID_SHIFT                  0u
#define XRDC_DERR_W1_EDID_WIDTH                  4u
#define XRDC_DERR_W1_EDID(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_DERR_W1_EDID_SHIFT))&XRDC_DERR_W1_EDID_MASK)
#define XRDC_DERR_W1_EATR_MASK                   0x700u
#define XRDC_DERR_W1_EATR_SHIFT                  8u
#define XRDC_DERR_W1_EATR_WIDTH                  3u
#define XRDC_DERR_W1_EATR(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_DERR_W1_EATR_SHIFT))&XRDC_DERR_W1_EATR_MASK)
#define XRDC_DERR_W1_ERW_MASK                    0x800u
#define XRDC_DERR_W1_ERW_SHIFT                   11u
#define XRDC_DERR_W1_ERW_WIDTH                   1u
#define XRDC_DERR_W1_ERW(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_DERR_W1_ERW_SHIFT))&XRDC_DERR_W1_ERW_MASK)
#define XRDC_DERR_W1_EA40FMT_MASK                0x10000u
#define XRDC_DERR_W1_EA40FMT_SHIFT               16u
#define XRDC_DERR_W1_EA40FMT_WIDTH               1u
#define XRDC_DERR_W1_EA40FMT(x)                  (((uint32_t)(((uint32_t)(x))<<XRDC_DERR_W1_EA40FMT_SHIFT))&XRDC_DERR_W1_EA40FMT_MASK)
#define XRDC_DERR_W1_EPORT_MASK                  0x7000000u
#define XRDC_DERR_W1_EPORT_SHIFT                 24u
#define XRDC_DERR_W1_EPORT_WIDTH                 3u
#define XRDC_DERR_W1_EPORT(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_DERR_W1_EPORT_SHIFT))&XRDC_DERR_W1_EPORT_MASK)
#define XRDC_DERR_W1_EST_MASK                    0xC0000000u
#define XRDC_DERR_W1_EST_SHIFT                   30u
#define XRDC_DERR_W1_EST_WIDTH                   2u
#define XRDC_DERR_W1_EST(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_DERR_W1_EST_SHIFT))&XRDC_DERR_W1_EST_MASK)
/* DERR_W2 Bit Fields */
#define XRDC_DERR_W2_EADDR39_32_MASK             0xFFu
#define XRDC_DERR_W2_EADDR39_32_SHIFT            0u
#define XRDC_DERR_W2_EADDR39_32_WIDTH            8u
#define XRDC_DERR_W2_EADDR39_32(x)               (((uint32_t)(((uint32_t)(x))<<XRDC_DERR_W3_EADDR39_32_SHIFT))&XRDC_DERR_W3_EADDR39_32_MASK)
/* DERR_W3 Bit Fields */
#define XRDC_DERR_W3_RECR_MASK                   0xC0000000u
#define XRDC_DERR_W3_RECR_SHIFT                  30u
#define XRDC_DERR_W3_RECR_WIDTH                  2u
#define XRDC_DERR_W3_RECR(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_DERR_W3_RECR_SHIFT))&XRDC_DERR_W3_RECR_MASK)
/* PID Bit Fields */
#define XRDC_PID_PID_MASK                        0x3Fu
#define XRDC_PID_PID_SHIFT                       0u
#define XRDC_PID_PID_WIDTH                       6u
#define XRDC_PID_PID(x)                          (((uint32_t)(((uint32_t)(x))<<XRDC_PID_PID_SHIFT))&XRDC_PID_PID_MASK)
#define XRDC_PID_LMNUM_MASK                      0x3F0000u
#define XRDC_PID_LMNUM_SHIFT                     16u
#define XRDC_PID_LMNUM_WIDTH                     6u
#define XRDC_PID_LMNUM(x)                        (((uint32_t)(((uint32_t)(x))<<XRDC_PID_LMNUM_SHIFT))&XRDC_PID_LMNUM_MASK)
#define XRDC_PID_ELK22H_MASK                     0x1000000u
#define XRDC_PID_ELK22H_SHIFT                    24u
#define XRDC_PID_ELK22H_WIDTH                    1u
#define XRDC_PID_ELK22H(x)                       (((uint32_t)(((uint32_t)(x))<<XRDC_PID_ELK22H_SHIFT))&XRDC_PID_ELK22H_MASK)
#define XRDC_PID_TSM_MASK                        0x10000000u
#define XRDC_PID_TSM_SHIFT                       28u
#define XRDC_PID_TSM_WIDTH                       1u
#define XRDC_PID_TSM(x)                          (((uint32_t)(((uint32_t)(x))<<XRDC_PID_TSM_SHIFT))&XRDC_PID_TSM_MASK)
#define XRDC_PID_LK2_MASK                        0x60000000u
#define XRDC_PID_LK2_SHIFT                       29u
#define XRDC_PID_LK2_WIDTH                       2u
#define XRDC_PID_LK2(x)                          (((uint32_t)(((uint32_t)(x))<<XRDC_PID_LK2_SHIFT))&XRDC_PID_LK2_MASK)
/* MDA_Wm Bit Fields */
#define XRDC_MDA_Wm_DID_MASK                     0x7u
#define XRDC_MDA_Wm_DID_SHIFT                    0u
#define XRDC_MDA_Wm_DID_WIDTH                    3u
#define XRDC_MDA_Wm_DID(x)                       (((uint32_t)(((uint32_t)(x))<<XRDC_MDA_Wm_DID_SHIFT))&XRDC_MDA_Wm_DID_MASK)
#define XRDC_MDA_Wm_DIDS_MASK                    0x30u
#define XRDC_MDA_Wm_DIDS_SHIFT                   4u
#define XRDC_MDA_Wm_DIDS_WIDTH                   2u
#define XRDC_MDA_Wm_DIDS(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_MDA_Wm_DIDS_SHIFT))&XRDC_MDA_Wm_DIDS_MASK)
#define XRDC_MDA_Wm_PE_MASK                      0xC0u
#define XRDC_MDA_Wm_PE_SHIFT                     6u
#define XRDC_MDA_Wm_PE_WIDTH                     2u
#define XRDC_MDA_Wm_PE(x)                        (((uint32_t)(((uint32_t)(x))<<XRDC_MDA_Wm_PE_SHIFT))&XRDC_MDA_Wm_PE_MASK)
#define XRDC_MDA_Wm_PIDM_MASK                    0x3F00u
#define XRDC_MDA_Wm_PIDM_SHIFT                   8u
#define XRDC_MDA_Wm_PIDM_WIDTH                   6u
#define XRDC_MDA_Wm_PIDM(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_MDA_Wm_PIDM_SHIFT))&XRDC_MDA_Wm_PIDM_MASK)
#define XRDC_MDA_Wm_PID_MASK                     0x3F0000u
#define XRDC_MDA_Wm_PID_SHIFT                    16u
#define XRDC_MDA_Wm_PID_WIDTH                    6u
#define XRDC_MDA_Wm_PID(x)                       (((uint32_t)(((uint32_t)(x))<<XRDC_MDA_Wm_PID_SHIFT))&XRDC_MDA_Wm_PID_MASK)
#define XRDC_MDA_Wm_LPID_MASK                    0xF000000u
#define XRDC_MDA_Wm_LPID_SHIFT                   24u
#define XRDC_MDA_Wm_LPID_WIDTH                   4u
#define XRDC_MDA_Wm_LPID(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_MDA_Wm_LPID_SHIFT))&XRDC_MDA_Wm_LPID_MASK)
#define XRDC_MDA_Wm_DFMT_MASK                    0x20000000u
#define XRDC_MDA_Wm_DFMT_SHIFT                   29u
#define XRDC_MDA_Wm_DFMT_WIDTH                   1u
#define XRDC_MDA_Wm_DFMT(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_MDA_Wm_DFMT_SHIFT))&XRDC_MDA_Wm_DFMT_MASK)
#define XRDC_MDA_Wm_LK1_MASK                     0x40000000u
#define XRDC_MDA_Wm_LK1_SHIFT                    30u
#define XRDC_MDA_Wm_LK1_WIDTH                    1u
#define XRDC_MDA_Wm_LK1(x)                       (((uint32_t)(((uint32_t)(x))<<XRDC_MDA_Wm_LK1_SHIFT))&XRDC_MDA_Wm_LK1_MASK)
#define XRDC_MDA_Wm_VLD_MASK                     0x80000000u
#define XRDC_MDA_Wm_VLD_SHIFT                    31u
#define XRDC_MDA_Wm_VLD_WIDTH                    1u
#define XRDC_MDA_Wm_VLD(x)                       (((uint32_t)(((uint32_t)(x))<<XRDC_MDA_Wm_VLD_SHIFT))&XRDC_MDA_Wm_VLD_MASK)
/* PDAC_W0 Bit Fields */
#define XRDC_PDAC_W0_D0ACP_MASK                  0x7u
#define XRDC_PDAC_W0_D0ACP_SHIFT                 0u
#define XRDC_PDAC_W0_D0ACP_WIDTH                 3u
#define XRDC_PDAC_W0_D0ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_D0ACP_SHIFT))&XRDC_PDAC_W0_D0ACP_MASK)
#define XRDC_PDAC_W0_D1ACP_MASK                  0x38u
#define XRDC_PDAC_W0_D1ACP_SHIFT                 3u
#define XRDC_PDAC_W0_D1ACP_WIDTH                 3u
#define XRDC_PDAC_W0_D1ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_D1ACP_SHIFT))&XRDC_PDAC_W0_D1ACP_MASK)
#define XRDC_PDAC_W0_D2ACP_MASK                  0x1C0u
#define XRDC_PDAC_W0_D2ACP_SHIFT                 6u
#define XRDC_PDAC_W0_D2ACP_WIDTH                 3u
#define XRDC_PDAC_W0_D2ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_D2ACP_SHIFT))&XRDC_PDAC_W0_D2ACP_MASK)
#define XRDC_PDAC_W0_D3ACP_MASK                  0xE00u
#define XRDC_PDAC_W0_D3ACP_SHIFT                 9u
#define XRDC_PDAC_W0_D3ACP_WIDTH                 3u
#define XRDC_PDAC_W0_D3ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_D3ACP_SHIFT))&XRDC_PDAC_W0_D3ACP_MASK)
#define XRDC_PDAC_W0_D4ACP_MASK                  0x7000u
#define XRDC_PDAC_W0_D4ACP_SHIFT                 12u
#define XRDC_PDAC_W0_D4ACP_WIDTH                 3u
#define XRDC_PDAC_W0_D4ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_D4ACP_SHIFT))&XRDC_PDAC_W0_D4ACP_MASK)
#define XRDC_PDAC_W0_D5ACP_MASK                  0x38000u
#define XRDC_PDAC_W0_D5ACP_SHIFT                 15u
#define XRDC_PDAC_W0_D5ACP_WIDTH                 3u
#define XRDC_PDAC_W0_D5ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_D5ACP_SHIFT))&XRDC_PDAC_W0_D5ACP_MASK)
#define XRDC_PDAC_W0_D6ACP_MASK                  0x1C0000u
#define XRDC_PDAC_W0_D6ACP_SHIFT                 18u
#define XRDC_PDAC_W0_D6ACP_WIDTH                 3u
#define XRDC_PDAC_W0_D6ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_D6ACP_SHIFT))&XRDC_PDAC_W0_D6ACP_MASK)
#define XRDC_PDAC_W0_D7ACP_MASK                  0xE00000u
#define XRDC_PDAC_W0_D7ACP_SHIFT                 21u
#define XRDC_PDAC_W0_D7ACP_WIDTH                 3u
#define XRDC_PDAC_W0_D7ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_D7ACP_SHIFT))&XRDC_PDAC_W0_D7ACP_MASK)
#define XRDC_PDAC_W0_SNUM_MASK                   0xF000000u
#define XRDC_PDAC_W0_SNUM_SHIFT                  24u
#define XRDC_PDAC_W0_SNUM_WIDTH                  4u
#define XRDC_PDAC_W0_SNUM(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_SNUM_SHIFT))&XRDC_PDAC_W0_SNUM_MASK)
#define XRDC_PDAC_W0_SE_MASK                     0x40000000u
#define XRDC_PDAC_W0_SE_SHIFT                    30u
#define XRDC_PDAC_W0_SE_WIDTH                    1u
#define XRDC_PDAC_W0_SE(x)                       (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W0_SE_SHIFT))&XRDC_PDAC_W0_SE_MASK)
/* PDAC_W1 Bit Fields */
#define XRDC_PDAC_W1_LK2_MASK                    0x60000000u
#define XRDC_PDAC_W1_LK2_SHIFT                   29u
#define XRDC_PDAC_W1_LK2_WIDTH                   2u
#define XRDC_PDAC_W1_LK2(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W1_LK2_SHIFT))&XRDC_PDAC_W1_LK2_MASK)
#define XRDC_PDAC_W1_VLD_MASK                    0x80000000u
#define XRDC_PDAC_W1_VLD_SHIFT                   31u
#define XRDC_PDAC_W1_VLD_WIDTH                   1u
#define XRDC_PDAC_W1_VLD(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_PDAC_W1_VLD_SHIFT))&XRDC_PDAC_W1_VLD_MASK)
/* MRGD_W0 Bit Fields */
#define XRDC_MRGD_W0_SRTADDR_MASK                0xFFFFFFFEu
#define XRDC_MRGD_W0_SRTADDR_SHIFT               1u
#define XRDC_MRGD_W0_SRTADDR_WIDTH               31u
#define XRDC_MRGD_W0_SRTADDR(x)                  (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W0_SRTADDR_SHIFT))&XRDC_MRGD_W0_SRTADDR_MASK)
/* MRGD_W1 Bit Fields */
#define XRDC_MRGD_W1_ENDADDR_MASK                0xFFFFFFFEu
#define XRDC_MRGD_W1_ENDADDR_SHIFT               1u
#define XRDC_MRGD_W1_ENDADDR_WIDTH               31u
#define XRDC_MRGD_W1_ENDADDR(x)                  (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W1_ENDADDR_SHIFT))&XRDC_MRGD_W1_ENDADDR_MASK)
/* MRGD_W2 Bit Fields */
#define XRDC_MRGD_W2_D0ACP_MASK                  0x7u
#define XRDC_MRGD_W2_D0ACP_SHIFT                 0u
#define XRDC_MRGD_W2_D0ACP_WIDTH                 3u
#define XRDC_MRGD_W2_D0ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_D0ACP_SHIFT))&XRDC_MRGD_W2_D0ACP_MASK)
#define XRDC_MRGD_W2_D1ACP_MASK                  0x38u
#define XRDC_MRGD_W2_D1ACP_SHIFT                 3u
#define XRDC_MRGD_W2_D1ACP_WIDTH                 3u
#define XRDC_MRGD_W2_D1ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_D1ACP_SHIFT))&XRDC_MRGD_W2_D1ACP_MASK)
#define XRDC_MRGD_W2_D2ACP_MASK                  0x1C0u
#define XRDC_MRGD_W2_D2ACP_SHIFT                 6u
#define XRDC_MRGD_W2_D2ACP_WIDTH                 3u
#define XRDC_MRGD_W2_D2ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_D2ACP_SHIFT))&XRDC_MRGD_W2_D2ACP_MASK)
#define XRDC_MRGD_W2_D3ACP_MASK                  0xE00u
#define XRDC_MRGD_W2_D3ACP_SHIFT                 9u
#define XRDC_MRGD_W2_D3ACP_WIDTH                 3u
#define XRDC_MRGD_W2_D3ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_D3ACP_SHIFT))&XRDC_MRGD_W2_D3ACP_MASK)
#define XRDC_MRGD_W2_D4ACP_MASK                  0x7000u
#define XRDC_MRGD_W2_D4ACP_SHIFT                 12u
#define XRDC_MRGD_W2_D4ACP_WIDTH                 3u
#define XRDC_MRGD_W2_D4ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_D4ACP_SHIFT))&XRDC_MRGD_W2_D4ACP_MASK)
#define XRDC_MRGD_W2_D5ACP_MASK                  0x38000u
#define XRDC_MRGD_W2_D5ACP_SHIFT                 15u
#define XRDC_MRGD_W2_D5ACP_WIDTH                 3u
#define XRDC_MRGD_W2_D5ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_D5ACP_SHIFT))&XRDC_MRGD_W2_D5ACP_MASK)
#define XRDC_MRGD_W2_D6ACP_MASK                  0x1C0000u
#define XRDC_MRGD_W2_D6ACP_SHIFT                 18u
#define XRDC_MRGD_W2_D6ACP_WIDTH                 3u
#define XRDC_MRGD_W2_D6ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_D6ACP_SHIFT))&XRDC_MRGD_W2_D6ACP_MASK)
#define XRDC_MRGD_W2_D7ACP_MASK                  0xE00000u
#define XRDC_MRGD_W2_D7ACP_SHIFT                 21u
#define XRDC_MRGD_W2_D7ACP_WIDTH                 3u
#define XRDC_MRGD_W2_D7ACP(x)                    (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_D7ACP_SHIFT))&XRDC_MRGD_W2_D7ACP_MASK)
#define XRDC_MRGD_W2_SNUM_MASK                   0xF000000u
#define XRDC_MRGD_W2_SNUM_SHIFT                  24u
#define XRDC_MRGD_W2_SNUM_WIDTH                  4u
#define XRDC_MRGD_W2_SNUM(x)                     (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_SNUM_SHIFT))&XRDC_MRGD_W2_SNUM_MASK)
#define XRDC_MRGD_W2_SE_MASK                     0x40000000u
#define XRDC_MRGD_W2_SE_SHIFT                    30u
#define XRDC_MRGD_W2_SE_WIDTH                    1u
#define XRDC_MRGD_W2_SE(x)                       (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W2_SE_SHIFT))&XRDC_MRGD_W2_SE_MASK)
/* MRGD_W3 Bit Fields */
#define XRDC_MRGD_W3_LK2_MASK                    0x60000000u
#define XRDC_MRGD_W3_LK2_SHIFT                   29u
#define XRDC_MRGD_W3_LK2_WIDTH                   2u
#define XRDC_MRGD_W3_LK2(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W3_LK2_SHIFT))&XRDC_MRGD_W3_LK2_MASK)
#define XRDC_MRGD_W3_VLD_MASK                    0x80000000u
#define XRDC_MRGD_W3_VLD_SHIFT                   31u
#define XRDC_MRGD_W3_VLD_WIDTH                   1u
#define XRDC_MRGD_W3_VLD(x)                      (((uint32_t)(((uint32_t)(x))<<XRDC_MRGD_W3_VLD_SHIFT))&XRDC_MRGD_W3_VLD_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group XRDC_Register_Masks */

/*!
 * @}
 */ /* end of group XRDC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_XRDC_H_) */
