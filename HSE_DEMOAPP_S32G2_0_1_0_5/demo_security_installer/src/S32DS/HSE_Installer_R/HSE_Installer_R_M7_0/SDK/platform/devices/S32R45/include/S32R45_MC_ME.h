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
 * @file S32R45_MC_ME.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_MC_ME
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
#if !defined(S32R45_MC_ME_H_)  /* Check if memory map has not been already included */
#define S32R45_MC_ME_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- MC_ME Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_ME_Peripheral_Access_Layer MC_ME Peripheral Access Layer
 * @{
 */

/** MC_ME - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTL_KEY;                           /**< Control Key Register, offset: 0x0 */
  __IO uint32_t MODE_CONF;                         /**< Mode Configuration Register, offset: 0x4 */
  __IO uint32_t MODE_UPD;                          /**< Mode Update Register, offset: 0x8 */
  uint8_t RESERVED_0[244];
  __IO uint32_t PRTN0_PCONF;                       /**< Partition 0 Process Configuration Register, offset: 0x100 */
  __IO uint32_t PRTN0_PUPD;                        /**< Partition 0 Process Update Register, offset: 0x104 */
  __I  uint32_t PRTN0_STAT;                        /**< Partition 0 Status Register, offset: 0x108 */
  uint8_t RESERVED_1[4];
  __I  uint32_t PRTN0_COFB0_STAT;                  /**< Partition 0 COFB Set 0 Clock Status Register, offset: 0x110 */
  uint8_t RESERVED_2[28];
  __IO uint32_t PRTN0_COFB0_CLKEN;                 /**< Partition 0 COFB Set 0 Clock Enable Register, offset: 0x130 */
  uint8_t RESERVED_3[12];
  __IO uint32_t PRTN0_CORE0_PCONF;                 /**< Partition 0 Core 0 Process Configuration Register, offset: 0x140 */
  __IO uint32_t PRTN0_CORE0_PUPD;                  /**< Partition 0 Core 0 Process Update Register, offset: 0x144 */
  __I  uint32_t PRTN0_CORE0_STAT;                  /**< Partition 0 Core 0 Status Register, offset: 0x148 */
  __IO uint32_t PRTN0_CORE0_ADDR;                  /**< Partition 0 Core 0 Address Register, offset: 0x14C */
  uint8_t RESERVED_4[16];
  __IO uint32_t PRTN0_CORE1_PCONF;                 /**< Partition 0 Core 1 Process Configuration Register, offset: 0x160 */
  __IO uint32_t PRTN0_CORE1_PUPD;                  /**< Partition 0 Core 1 Process Update Register, offset: 0x164 */
  __I  uint32_t PRTN0_CORE1_STAT;                  /**< Partition 0 Core 1 Status Register, offset: 0x168 */
  __IO uint32_t PRTN0_CORE1_ADDR;                  /**< Partition 0 Core 1 Address Register, offset: 0x16C */
  uint8_t RESERVED_5[16];
  __IO uint32_t PRTN0_CORE2_PCONF;                 /**< Partition 0 Core 2 Process Configuration Register, offset: 0x180 */
  __IO uint32_t PRTN0_CORE2_PUPD;                  /**< Partition 0 Core 2 Process Update Register, offset: 0x184 */
  __I  uint32_t PRTN0_CORE2_STAT;                  /**< Partition 0 Core 2 Status Register, offset: 0x188 */
  __IO uint32_t PRTN0_CORE2_ADDR;                  /**< Partition 0 Core 2 Address Register, offset: 0x18C */
  uint8_t RESERVED_6[16];
  __IO uint32_t PRTN0_CORE3_PCONF;                 /**< Partition 0 Core 3 Process Configuration Register, offset: 0x1A0 */
  __IO uint32_t PRTN0_CORE3_PUPD;                  /**< Partition 0 Core 3 Process Update Register, offset: 0x1A4 */
  __I  uint32_t PRTN0_CORE3_STAT;                  /**< Partition 0 Core 3 Status Register, offset: 0x1A8 */
  __IO uint32_t PRTN0_CORE3_ADDR;                  /**< Partition 0 Core 3 Address Register, offset: 0x1AC */
  uint8_t RESERVED_7[336];
  __IO uint32_t PRTN1_PCONF;                       /**< Partition 1 Process Configuration Register, offset: 0x300 */
  __IO uint32_t PRTN1_PUPD;                        /**< Partition 1 Process Update Register, offset: 0x304 */
  __I  uint32_t PRTN1_STAT;                        /**< Partition 1 Status Register, offset: 0x308 */
  uint8_t RESERVED_8[52];
  __IO uint32_t PRTN1_CORE0_PCONF;                 /**< Partition 1 Core 0 Process Configuration Register, offset: 0x340 */
  __IO uint32_t PRTN1_CORE0_PUPD;                  /**< Partition 1 Core 0 Process Update Register, offset: 0x344 */
  __I  uint32_t PRTN1_CORE0_STAT;                  /**< Partition 1 Core 0 Status Register, offset: 0x348 */
  __IO uint32_t PRTN1_CORE0_ADDR;                  /**< Partition 1 Core 0 Address Register, offset: 0x34C */
  uint8_t RESERVED_9[16];
  __IO uint32_t PRTN1_CORE1_PCONF;                 /**< Partition 1 Core 1 Process Configuration Register, offset: 0x360 */
  __IO uint32_t PRTN1_CORE1_PUPD;                  /**< Partition 1 Core 1 Process Update Register, offset: 0x364 */
  __I  uint32_t PRTN1_CORE1_STAT;                  /**< Partition 1 Core 1 Status Register, offset: 0x368 */
  __IO uint32_t PRTN1_CORE1_ADDR;                  /**< Partition 1 Core 1 Address Register, offset: 0x36C */
  uint8_t RESERVED_10[16];
  __IO uint32_t PRTN1_CORE2_PCONF;                 /**< Partition 1 Core 2 Process Configuration Register, offset: 0x380 */
  __IO uint32_t PRTN1_CORE2_PUPD;                  /**< Partition 1 Core 2 Process Update Register, offset: 0x384 */
  __I  uint32_t PRTN1_CORE2_STAT;                  /**< Partition 1 Core 2 Status Register, offset: 0x388 */
  __IO uint32_t PRTN1_CORE2_ADDR;                  /**< Partition 1 Core 2 Address Register, offset: 0x38C */
  uint8_t RESERVED_11[16];
  __IO uint32_t PRTN1_CORE3_PCONF;                 /**< Partition 1 Core 3 Process Configuration Register, offset: 0x3A0 */
  __IO uint32_t PRTN1_CORE3_PUPD;                  /**< Partition 1 Core 3 Process Update Register, offset: 0x3A4 */
  __I  uint32_t PRTN1_CORE3_STAT;                  /**< Partition 1 Core 3 Status Register, offset: 0x3A8 */
  __IO uint32_t PRTN1_CORE3_ADDR;                  /**< Partition 1 Core 3 Address Register, offset: 0x3AC */
  uint8_t RESERVED_12[336];
  __IO uint32_t PRTN2_PCONF;                       /**< Partition 2 Process Configuration Register, offset: 0x500 */
  __IO uint32_t PRTN2_PUPD;                        /**< Partition 2 Process Update Register, offset: 0x504 */
  __I  uint32_t PRTN2_STAT;                        /**< Partition 2 Status Register, offset: 0x508 */
  uint8_t RESERVED_13[4];
  __I  uint32_t PRTN2_COFB0_STAT;                  /**< Partition 2 COFB Set 0 Clock Status Register, offset: 0x510 */
  uint8_t RESERVED_14[28];
  __IO uint32_t PRTN2_COFB0_CLKEN;                 /**< Partition 2 COFB Set 0 Clock Enable Register, offset: 0x530 */
  uint8_t RESERVED_15[460];
  __IO uint32_t PRTN3_PCONF;                       /**< Partition 3 Process Configuration Register, offset: 0x700 */
  __IO uint32_t PRTN3_PUPD;                        /**< Partition 3 Process Update Register, offset: 0x704 */
  __I  uint32_t PRTN3_STAT;                        /**< Partition 3 Status Register, offset: 0x708 */
  uint8_t RESERVED_16[4];
  __I  uint32_t PRTN3_COFB0_STAT;                  /**< Partition 3 COFB Set 0 Clock Status Register, offset: 0x710 */
  uint8_t RESERVED_17[28];
  __IO uint32_t PRTN3_COFB0_CLKEN;                 /**< Partition 3 COFB Set 0 Clock Enable Register, offset: 0x730 */
} MC_ME_Type, *MC_ME_MemMapPtr;

/** Number of instances of the MC_ME module. */
#define MC_ME_INSTANCE_COUNT                     (1u)

/* MC_ME - Peripheral instance base addresses */
/** Peripheral MC_ME base address */
#define MC_ME_BASE                               (0x40088000u)
/** Peripheral MC_ME base pointer */
#define MC_ME                                    ((MC_ME_Type *)MC_ME_BASE)
/** Array initializer of MC_ME peripheral base addresses */
#define MC_ME_BASE_ADDRS                         { MC_ME_BASE }
/** Array initializer of MC_ME peripheral base pointers */
#define MC_ME_BASE_PTRS                          { MC_ME }

/* ----------------------------------------------------------------------------
   -- MC_ME Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_ME_Register_Masks MC_ME Register Masks
 * @{
 */

/*! @name CTL_KEY - Control Key Register */
/*! @{ */
#define MC_ME_CTL_KEY_KEY_MASK                   (0xFFFFU)
#define MC_ME_CTL_KEY_KEY_SHIFT                  (0U)
#define MC_ME_CTL_KEY_KEY_WIDTH                  (16U)
#define MC_ME_CTL_KEY_KEY(x)                     (((uint32_t)(((uint32_t)(x)) << MC_ME_CTL_KEY_KEY_SHIFT)) & MC_ME_CTL_KEY_KEY_MASK)
/*! @} */

/*! @name MODE_CONF - Mode Configuration Register */
/*! @{ */
#define MC_ME_MODE_CONF_DEST_RST_MASK            (0x1U)
#define MC_ME_MODE_CONF_DEST_RST_SHIFT           (0U)
#define MC_ME_MODE_CONF_DEST_RST_WIDTH           (1U)
#define MC_ME_MODE_CONF_DEST_RST(x)              (((uint32_t)(((uint32_t)(x)) << MC_ME_MODE_CONF_DEST_RST_SHIFT)) & MC_ME_MODE_CONF_DEST_RST_MASK)
#define MC_ME_MODE_CONF_FUNC_RST_MASK            (0x2U)
#define MC_ME_MODE_CONF_FUNC_RST_SHIFT           (1U)
#define MC_ME_MODE_CONF_FUNC_RST_WIDTH           (1U)
#define MC_ME_MODE_CONF_FUNC_RST(x)              (((uint32_t)(((uint32_t)(x)) << MC_ME_MODE_CONF_FUNC_RST_SHIFT)) & MC_ME_MODE_CONF_FUNC_RST_MASK)
/*! @} */

/*! @name MODE_UPD - Mode Update Register */
/*! @{ */
#define MC_ME_MODE_UPD_MODE_UPD_MASK             (0x1U)
#define MC_ME_MODE_UPD_MODE_UPD_SHIFT            (0U)
#define MC_ME_MODE_UPD_MODE_UPD_WIDTH            (1U)
#define MC_ME_MODE_UPD_MODE_UPD(x)               (((uint32_t)(((uint32_t)(x)) << MC_ME_MODE_UPD_MODE_UPD_SHIFT)) & MC_ME_MODE_UPD_MODE_UPD_MASK)
/*! @} */

/*! @name PRTN0_PCONF - Partition 0 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN0_PCONF_PCE_MASK               (0x1U)
#define MC_ME_PRTN0_PCONF_PCE_SHIFT              (0U)
#define MC_ME_PRTN0_PCONF_PCE_WIDTH              (1U)
#define MC_ME_PRTN0_PCONF_PCE(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_PCONF_PCE_SHIFT)) & MC_ME_PRTN0_PCONF_PCE_MASK)
/*! @} */

/*! @name PRTN0_PUPD - Partition 0 Process Update Register */
/*! @{ */
#define MC_ME_PRTN0_PUPD_PCUD_MASK               (0x1U)
#define MC_ME_PRTN0_PUPD_PCUD_SHIFT              (0U)
#define MC_ME_PRTN0_PUPD_PCUD_WIDTH              (1U)
#define MC_ME_PRTN0_PUPD_PCUD(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_PUPD_PCUD_SHIFT)) & MC_ME_PRTN0_PUPD_PCUD_MASK)
/*! @} */

/*! @name PRTN0_STAT - Partition 0 Status Register */
/*! @{ */
#define MC_ME_PRTN0_STAT_PCS_MASK                (0x1U)
#define MC_ME_PRTN0_STAT_PCS_SHIFT               (0U)
#define MC_ME_PRTN0_STAT_PCS_WIDTH               (1U)
#define MC_ME_PRTN0_STAT_PCS(x)                  (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_STAT_PCS_SHIFT)) & MC_ME_PRTN0_STAT_PCS_MASK)
/*! @} */

/*! @name PRTN0_COFB0_STAT - Partition 0 COFB Set 0 Clock Status Register */
/*! @{ */
#define MC_ME_PRTN0_COFB0_STAT_BLOCK0_MASK       (0x1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK0_SHIFT      (0U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK0_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK0(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK0_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK0_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK1_MASK       (0x2U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK1_SHIFT      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK1_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK1(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK1_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK1_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK2_MASK       (0x4U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK2_SHIFT      (2U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK2_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK2(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK2_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK2_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK3_MASK       (0x8U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK3_SHIFT      (3U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK3_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK3(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK3_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK3_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK4_MASK       (0x10U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK4_SHIFT      (4U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK4_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK4(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK4_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK4_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK5_MASK       (0x20U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK5_SHIFT      (5U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK5_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK5(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK5_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK5_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK6_MASK       (0x40U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK6_SHIFT      (6U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK6_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK6(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK6_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK6_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK7_MASK       (0x80U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK7_SHIFT      (7U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK7_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK7(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK7_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK7_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK8_MASK       (0x100U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK8_SHIFT      (8U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK8_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK8(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK8_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK8_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK9_MASK       (0x200U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK9_SHIFT      (9U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK9_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK9(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK9_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK9_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK10_MASK      (0x400U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK10_SHIFT     (10U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK10_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK10(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK10_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK10_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK11_MASK      (0x800U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK11_SHIFT     (11U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK11_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK11(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK11_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK11_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK12_MASK      (0x1000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK12_SHIFT     (12U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK12_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK12(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK12_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK12_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK13_MASK      (0x2000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK13_SHIFT     (13U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK13_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK13(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK13_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK13_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK14_MASK      (0x4000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK14_SHIFT     (14U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK14_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK14(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK14_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK14_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK15_MASK      (0x8000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK15_SHIFT     (15U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK15_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK15(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK15_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK15_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK16_MASK      (0x10000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK16_SHIFT     (16U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK16_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK16(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK16_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK16_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK17_MASK      (0x20000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK17_SHIFT     (17U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK17_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK17(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK17_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK17_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK18_MASK      (0x40000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK18_SHIFT     (18U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK18_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK18(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK18_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK18_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK19_MASK      (0x80000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK19_SHIFT     (19U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK19_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK19(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK19_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK19_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK20_MASK      (0x100000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK20_SHIFT     (20U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK20_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK20(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK20_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK20_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK21_MASK      (0x200000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK21_SHIFT     (21U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK21_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK21(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK21_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK21_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK22_MASK      (0x400000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK22_SHIFT     (22U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK22_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK22(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK22_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK22_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK23_MASK      (0x800000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK23_SHIFT     (23U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK23_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK23(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK23_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK23_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK24_MASK      (0x1000000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK24_SHIFT     (24U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK24_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK24(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK24_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK24_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK25_MASK      (0x2000000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK25_SHIFT     (25U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK25_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK25(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK25_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK25_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK26_MASK      (0x4000000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK26_SHIFT     (26U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK26_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK26(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK26_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK26_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK27_MASK      (0x8000000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK27_SHIFT     (27U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK27_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK27(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK27_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK27_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK28_MASK      (0x10000000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK28_SHIFT     (28U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK28_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK28(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK28_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK28_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK29_MASK      (0x20000000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK29_SHIFT     (29U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK29_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK29(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK29_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK29_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK30_MASK      (0x40000000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK30_SHIFT     (30U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK30_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK30(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK30_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK30_MASK)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK31_MASK      (0x80000000U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK31_SHIFT     (31U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK31_WIDTH     (1U)
#define MC_ME_PRTN0_COFB0_STAT_BLOCK31(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_STAT_BLOCK31_SHIFT)) & MC_ME_PRTN0_COFB0_STAT_BLOCK31_MASK)
/*! @} */

/*! @name PRTN0_COFB0_CLKEN - Partition 0 COFB Set 0 Clock Enable Register */
/*! @{ */
#define MC_ME_PRTN0_COFB0_CLKEN_REQ0_MASK        (0x1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ0_SHIFT       (0U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ0_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ0(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ0_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ0_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ1_MASK        (0x2U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ1_SHIFT       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ1_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ1(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ1_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ1_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ2_MASK        (0x4U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ2_SHIFT       (2U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ2_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ2(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ2_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ2_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ3_MASK        (0x8U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ3_SHIFT       (3U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ3_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ3(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ3_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ3_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ4_MASK        (0x10U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ4_SHIFT       (4U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ4_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ4(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ4_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ4_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ5_MASK        (0x20U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ5_SHIFT       (5U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ5_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ5(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ5_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ5_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ6_MASK        (0x40U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ6_SHIFT       (6U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ6_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ6(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ6_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ6_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ7_MASK        (0x80U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ7_SHIFT       (7U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ7_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ7(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ7_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ7_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ8_MASK        (0x100U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ8_SHIFT       (8U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ8_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ8(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ8_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ8_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ9_MASK        (0x200U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ9_SHIFT       (9U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ9_WIDTH       (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ9(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ9_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ9_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ10_MASK       (0x400U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ10_SHIFT      (10U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ10_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ10(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ10_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ10_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ11_MASK       (0x800U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ11_SHIFT      (11U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ11_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ11(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ11_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ11_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ12_MASK       (0x1000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ12_SHIFT      (12U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ12_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ12(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ12_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ12_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ13_MASK       (0x2000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ13_SHIFT      (13U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ13_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ13(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ13_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ13_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ14_MASK       (0x4000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ14_SHIFT      (14U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ14_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ14(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ14_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ14_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ15_MASK       (0x8000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ15_SHIFT      (15U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ15_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ15(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ15_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ15_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ16_MASK       (0x10000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ16_SHIFT      (16U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ16_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ16(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ16_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ16_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ17_MASK       (0x20000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ17_SHIFT      (17U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ17_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ17(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ17_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ17_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ18_MASK       (0x40000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ18_SHIFT      (18U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ18_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ18(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ18_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ18_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ19_MASK       (0x80000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ19_SHIFT      (19U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ19_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ19(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ19_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ19_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ20_MASK       (0x100000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ20_SHIFT      (20U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ20_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ20(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ20_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ20_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ21_MASK       (0x200000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ21_SHIFT      (21U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ21_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ21(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ21_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ21_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ22_MASK       (0x400000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ22_SHIFT      (22U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ22_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ22(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ22_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ22_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ23_MASK       (0x800000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ23_SHIFT      (23U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ23_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ23(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ23_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ23_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ24_MASK       (0x1000000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ24_SHIFT      (24U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ24_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ24(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ24_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ24_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ25_MASK       (0x2000000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ25_SHIFT      (25U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ25_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ25(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ25_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ25_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ26_MASK       (0x4000000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ26_SHIFT      (26U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ26_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ26(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ26_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ26_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ27_MASK       (0x8000000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ27_SHIFT      (27U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ27_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ27(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ27_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ27_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ28_MASK       (0x10000000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ28_SHIFT      (28U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ28_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ28(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ28_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ28_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ29_MASK       (0x20000000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ29_SHIFT      (29U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ29_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ29(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ29_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ29_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ30_MASK       (0x40000000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ30_SHIFT      (30U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ30_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ30(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ30_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ30_MASK)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ31_MASK       (0x80000000U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ31_SHIFT      (31U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ31_WIDTH      (1U)
#define MC_ME_PRTN0_COFB0_CLKEN_REQ31(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_COFB0_CLKEN_REQ31_SHIFT)) & MC_ME_PRTN0_COFB0_CLKEN_REQ31_MASK)
/*! @} */

/*! @name PRTN0_CORE0_PCONF - Partition 0 Core 0 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN0_CORE0_PCONF_CCE_MASK         (0x1U)
#define MC_ME_PRTN0_CORE0_PCONF_CCE_SHIFT        (0U)
#define MC_ME_PRTN0_CORE0_PCONF_CCE_WIDTH        (1U)
#define MC_ME_PRTN0_CORE0_PCONF_CCE(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE0_PCONF_CCE_SHIFT)) & MC_ME_PRTN0_CORE0_PCONF_CCE_MASK)
/*! @} */

/*! @name PRTN0_CORE0_PUPD - Partition 0 Core 0 Process Update Register */
/*! @{ */
#define MC_ME_PRTN0_CORE0_PUPD_CCUPD_MASK        (0x1U)
#define MC_ME_PRTN0_CORE0_PUPD_CCUPD_SHIFT       (0U)
#define MC_ME_PRTN0_CORE0_PUPD_CCUPD_WIDTH       (1U)
#define MC_ME_PRTN0_CORE0_PUPD_CCUPD(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE0_PUPD_CCUPD_SHIFT)) & MC_ME_PRTN0_CORE0_PUPD_CCUPD_MASK)
/*! @} */

/*! @name PRTN0_CORE0_STAT - Partition 0 Core 0 Status Register */
/*! @{ */
#define MC_ME_PRTN0_CORE0_STAT_CCS_MASK          (0x1U)
#define MC_ME_PRTN0_CORE0_STAT_CCS_SHIFT         (0U)
#define MC_ME_PRTN0_CORE0_STAT_CCS_WIDTH         (1U)
#define MC_ME_PRTN0_CORE0_STAT_CCS(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE0_STAT_CCS_SHIFT)) & MC_ME_PRTN0_CORE0_STAT_CCS_MASK)
#define MC_ME_PRTN0_CORE0_STAT_WFI_MASK          (0x80000000U)
#define MC_ME_PRTN0_CORE0_STAT_WFI_SHIFT         (31U)
#define MC_ME_PRTN0_CORE0_STAT_WFI_WIDTH         (1U)
#define MC_ME_PRTN0_CORE0_STAT_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE0_STAT_WFI_SHIFT)) & MC_ME_PRTN0_CORE0_STAT_WFI_MASK)
/*! @} */

/*! @name PRTN0_CORE0_ADDR - Partition 0 Core 0 Address Register */
/*! @{ */
#define MC_ME_PRTN0_CORE0_ADDR_ADDR_MASK         (0xFFFFFFFCU)
#define MC_ME_PRTN0_CORE0_ADDR_ADDR_SHIFT        (2U)
#define MC_ME_PRTN0_CORE0_ADDR_ADDR_WIDTH        (30U)
#define MC_ME_PRTN0_CORE0_ADDR_ADDR(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE0_ADDR_ADDR_SHIFT)) & MC_ME_PRTN0_CORE0_ADDR_ADDR_MASK)
/*! @} */

/*! @name PRTN0_CORE1_PCONF - Partition 0 Core 1 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN0_CORE1_PCONF_CCE_MASK         (0x1U)
#define MC_ME_PRTN0_CORE1_PCONF_CCE_SHIFT        (0U)
#define MC_ME_PRTN0_CORE1_PCONF_CCE_WIDTH        (1U)
#define MC_ME_PRTN0_CORE1_PCONF_CCE(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE1_PCONF_CCE_SHIFT)) & MC_ME_PRTN0_CORE1_PCONF_CCE_MASK)
/*! @} */

/*! @name PRTN0_CORE1_PUPD - Partition 0 Core 1 Process Update Register */
/*! @{ */
#define MC_ME_PRTN0_CORE1_PUPD_CCUPD_MASK        (0x1U)
#define MC_ME_PRTN0_CORE1_PUPD_CCUPD_SHIFT       (0U)
#define MC_ME_PRTN0_CORE1_PUPD_CCUPD_WIDTH       (1U)
#define MC_ME_PRTN0_CORE1_PUPD_CCUPD(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE1_PUPD_CCUPD_SHIFT)) & MC_ME_PRTN0_CORE1_PUPD_CCUPD_MASK)
/*! @} */

/*! @name PRTN0_CORE1_STAT - Partition 0 Core 1 Status Register */
/*! @{ */
#define MC_ME_PRTN0_CORE1_STAT_CCS_MASK          (0x1U)
#define MC_ME_PRTN0_CORE1_STAT_CCS_SHIFT         (0U)
#define MC_ME_PRTN0_CORE1_STAT_CCS_WIDTH         (1U)
#define MC_ME_PRTN0_CORE1_STAT_CCS(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE1_STAT_CCS_SHIFT)) & MC_ME_PRTN0_CORE1_STAT_CCS_MASK)
#define MC_ME_PRTN0_CORE1_STAT_WFI_MASK          (0x80000000U)
#define MC_ME_PRTN0_CORE1_STAT_WFI_SHIFT         (31U)
#define MC_ME_PRTN0_CORE1_STAT_WFI_WIDTH         (1U)
#define MC_ME_PRTN0_CORE1_STAT_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE1_STAT_WFI_SHIFT)) & MC_ME_PRTN0_CORE1_STAT_WFI_MASK)
/*! @} */

/*! @name PRTN0_CORE1_ADDR - Partition 0 Core 1 Address Register */
/*! @{ */
#define MC_ME_PRTN0_CORE1_ADDR_ADDR_MASK         (0xFFFFFFFCU)
#define MC_ME_PRTN0_CORE1_ADDR_ADDR_SHIFT        (2U)
#define MC_ME_PRTN0_CORE1_ADDR_ADDR_WIDTH        (30U)
#define MC_ME_PRTN0_CORE1_ADDR_ADDR(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE1_ADDR_ADDR_SHIFT)) & MC_ME_PRTN0_CORE1_ADDR_ADDR_MASK)
/*! @} */

/*! @name PRTN0_CORE2_PCONF - Partition 0 Core 2 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN0_CORE2_PCONF_CCE_MASK         (0x1U)
#define MC_ME_PRTN0_CORE2_PCONF_CCE_SHIFT        (0U)
#define MC_ME_PRTN0_CORE2_PCONF_CCE_WIDTH        (1U)
#define MC_ME_PRTN0_CORE2_PCONF_CCE(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE2_PCONF_CCE_SHIFT)) & MC_ME_PRTN0_CORE2_PCONF_CCE_MASK)
/*! @} */

/*! @name PRTN0_CORE2_PUPD - Partition 0 Core 2 Process Update Register */
/*! @{ */
#define MC_ME_PRTN0_CORE2_PUPD_CCUPD_MASK        (0x1U)
#define MC_ME_PRTN0_CORE2_PUPD_CCUPD_SHIFT       (0U)
#define MC_ME_PRTN0_CORE2_PUPD_CCUPD_WIDTH       (1U)
#define MC_ME_PRTN0_CORE2_PUPD_CCUPD(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE2_PUPD_CCUPD_SHIFT)) & MC_ME_PRTN0_CORE2_PUPD_CCUPD_MASK)
/*! @} */

/*! @name PRTN0_CORE2_STAT - Partition 0 Core 2 Status Register */
/*! @{ */
#define MC_ME_PRTN0_CORE2_STAT_CCS_MASK          (0x1U)
#define MC_ME_PRTN0_CORE2_STAT_CCS_SHIFT         (0U)
#define MC_ME_PRTN0_CORE2_STAT_CCS_WIDTH         (1U)
#define MC_ME_PRTN0_CORE2_STAT_CCS(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE2_STAT_CCS_SHIFT)) & MC_ME_PRTN0_CORE2_STAT_CCS_MASK)
#define MC_ME_PRTN0_CORE2_STAT_WFI_MASK          (0x80000000U)
#define MC_ME_PRTN0_CORE2_STAT_WFI_SHIFT         (31U)
#define MC_ME_PRTN0_CORE2_STAT_WFI_WIDTH         (1U)
#define MC_ME_PRTN0_CORE2_STAT_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE2_STAT_WFI_SHIFT)) & MC_ME_PRTN0_CORE2_STAT_WFI_MASK)
/*! @} */

/*! @name PRTN0_CORE2_ADDR - Partition 0 Core 2 Address Register */
/*! @{ */
#define MC_ME_PRTN0_CORE2_ADDR_ADDR_MASK         (0xFFFFFFFCU)
#define MC_ME_PRTN0_CORE2_ADDR_ADDR_SHIFT        (2U)
#define MC_ME_PRTN0_CORE2_ADDR_ADDR_WIDTH        (30U)
#define MC_ME_PRTN0_CORE2_ADDR_ADDR(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE2_ADDR_ADDR_SHIFT)) & MC_ME_PRTN0_CORE2_ADDR_ADDR_MASK)
/*! @} */

/*! @name PRTN0_CORE3_PCONF - Partition 0 Core 3 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN0_CORE3_PCONF_CCE_MASK         (0x1U)
#define MC_ME_PRTN0_CORE3_PCONF_CCE_SHIFT        (0U)
#define MC_ME_PRTN0_CORE3_PCONF_CCE_WIDTH        (1U)
#define MC_ME_PRTN0_CORE3_PCONF_CCE(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE3_PCONF_CCE_SHIFT)) & MC_ME_PRTN0_CORE3_PCONF_CCE_MASK)
/*! @} */

/*! @name PRTN0_CORE3_PUPD - Partition 0 Core 3 Process Update Register */
/*! @{ */
#define MC_ME_PRTN0_CORE3_PUPD_CCUPD_MASK        (0x1U)
#define MC_ME_PRTN0_CORE3_PUPD_CCUPD_SHIFT       (0U)
#define MC_ME_PRTN0_CORE3_PUPD_CCUPD_WIDTH       (1U)
#define MC_ME_PRTN0_CORE3_PUPD_CCUPD(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE3_PUPD_CCUPD_SHIFT)) & MC_ME_PRTN0_CORE3_PUPD_CCUPD_MASK)
/*! @} */

/*! @name PRTN0_CORE3_STAT - Partition 0 Core 3 Status Register */
/*! @{ */
#define MC_ME_PRTN0_CORE3_STAT_CCS_MASK          (0x1U)
#define MC_ME_PRTN0_CORE3_STAT_CCS_SHIFT         (0U)
#define MC_ME_PRTN0_CORE3_STAT_CCS_WIDTH         (1U)
#define MC_ME_PRTN0_CORE3_STAT_CCS(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE3_STAT_CCS_SHIFT)) & MC_ME_PRTN0_CORE3_STAT_CCS_MASK)
#define MC_ME_PRTN0_CORE3_STAT_WFI_MASK          (0x80000000U)
#define MC_ME_PRTN0_CORE3_STAT_WFI_SHIFT         (31U)
#define MC_ME_PRTN0_CORE3_STAT_WFI_WIDTH         (1U)
#define MC_ME_PRTN0_CORE3_STAT_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE3_STAT_WFI_SHIFT)) & MC_ME_PRTN0_CORE3_STAT_WFI_MASK)
/*! @} */

/*! @name PRTN0_CORE3_ADDR - Partition 0 Core 3 Address Register */
/*! @{ */
#define MC_ME_PRTN0_CORE3_ADDR_ADDR_MASK         (0xFFFFFFFCU)
#define MC_ME_PRTN0_CORE3_ADDR_ADDR_SHIFT        (2U)
#define MC_ME_PRTN0_CORE3_ADDR_ADDR_WIDTH        (30U)
#define MC_ME_PRTN0_CORE3_ADDR_ADDR(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN0_CORE3_ADDR_ADDR_SHIFT)) & MC_ME_PRTN0_CORE3_ADDR_ADDR_MASK)
/*! @} */

/*! @name PRTN1_PCONF - Partition 1 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN1_PCONF_PCE_MASK               (0x1U)
#define MC_ME_PRTN1_PCONF_PCE_SHIFT              (0U)
#define MC_ME_PRTN1_PCONF_PCE_WIDTH              (1U)
#define MC_ME_PRTN1_PCONF_PCE(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_PCONF_PCE_SHIFT)) & MC_ME_PRTN1_PCONF_PCE_MASK)
#define MC_ME_PRTN1_PCONF_OSSE_MASK              (0x4U)
#define MC_ME_PRTN1_PCONF_OSSE_SHIFT             (2U)
#define MC_ME_PRTN1_PCONF_OSSE_WIDTH             (1U)
#define MC_ME_PRTN1_PCONF_OSSE(x)                (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_PCONF_OSSE_SHIFT)) & MC_ME_PRTN1_PCONF_OSSE_MASK)
/*! @} */

/*! @name PRTN1_PUPD - Partition 1 Process Update Register */
/*! @{ */
#define MC_ME_PRTN1_PUPD_PCUD_MASK               (0x1U)
#define MC_ME_PRTN1_PUPD_PCUD_SHIFT              (0U)
#define MC_ME_PRTN1_PUPD_PCUD_WIDTH              (1U)
#define MC_ME_PRTN1_PUPD_PCUD(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_PUPD_PCUD_SHIFT)) & MC_ME_PRTN1_PUPD_PCUD_MASK)
#define MC_ME_PRTN1_PUPD_OSSUD_MASK              (0x4U)
#define MC_ME_PRTN1_PUPD_OSSUD_SHIFT             (2U)
#define MC_ME_PRTN1_PUPD_OSSUD_WIDTH             (1U)
#define MC_ME_PRTN1_PUPD_OSSUD(x)                (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_PUPD_OSSUD_SHIFT)) & MC_ME_PRTN1_PUPD_OSSUD_MASK)
/*! @} */

/*! @name PRTN1_STAT - Partition 1 Status Register */
/*! @{ */
#define MC_ME_PRTN1_STAT_PCS_MASK                (0x1U)
#define MC_ME_PRTN1_STAT_PCS_SHIFT               (0U)
#define MC_ME_PRTN1_STAT_PCS_WIDTH               (1U)
#define MC_ME_PRTN1_STAT_PCS(x)                  (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_STAT_PCS_SHIFT)) & MC_ME_PRTN1_STAT_PCS_MASK)
#define MC_ME_PRTN1_STAT_OSSS_MASK               (0x4U)
#define MC_ME_PRTN1_STAT_OSSS_SHIFT              (2U)
#define MC_ME_PRTN1_STAT_OSSS_WIDTH              (1U)
#define MC_ME_PRTN1_STAT_OSSS(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_STAT_OSSS_SHIFT)) & MC_ME_PRTN1_STAT_OSSS_MASK)
/*! @} */

/*! @name PRTN1_CORE0_PCONF - Partition 1 Core 0 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN1_CORE0_PCONF_CCE_MASK         (0x1U)
#define MC_ME_PRTN1_CORE0_PCONF_CCE_SHIFT        (0U)
#define MC_ME_PRTN1_CORE0_PCONF_CCE_WIDTH        (1U)
#define MC_ME_PRTN1_CORE0_PCONF_CCE(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE0_PCONF_CCE_SHIFT)) & MC_ME_PRTN1_CORE0_PCONF_CCE_MASK)
/*! @} */

/*! @name PRTN1_CORE0_PUPD - Partition 1 Core 0 Process Update Register */
/*! @{ */
#define MC_ME_PRTN1_CORE0_PUPD_CCUPD_MASK        (0x1U)
#define MC_ME_PRTN1_CORE0_PUPD_CCUPD_SHIFT       (0U)
#define MC_ME_PRTN1_CORE0_PUPD_CCUPD_WIDTH       (1U)
#define MC_ME_PRTN1_CORE0_PUPD_CCUPD(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE0_PUPD_CCUPD_SHIFT)) & MC_ME_PRTN1_CORE0_PUPD_CCUPD_MASK)
/*! @} */

/*! @name PRTN1_CORE0_STAT - Partition 1 Core 0 Status Register */
/*! @{ */
#define MC_ME_PRTN1_CORE0_STAT_CCS_MASK          (0x1U)
#define MC_ME_PRTN1_CORE0_STAT_CCS_SHIFT         (0U)
#define MC_ME_PRTN1_CORE0_STAT_CCS_WIDTH         (1U)
#define MC_ME_PRTN1_CORE0_STAT_CCS(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE0_STAT_CCS_SHIFT)) & MC_ME_PRTN1_CORE0_STAT_CCS_MASK)
#define MC_ME_PRTN1_CORE0_STAT_WFI_MASK          (0x80000000U)
#define MC_ME_PRTN1_CORE0_STAT_WFI_SHIFT         (31U)
#define MC_ME_PRTN1_CORE0_STAT_WFI_WIDTH         (1U)
#define MC_ME_PRTN1_CORE0_STAT_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE0_STAT_WFI_SHIFT)) & MC_ME_PRTN1_CORE0_STAT_WFI_MASK)
/*! @} */

/*! @name PRTN1_CORE0_ADDR - Partition 1 Core 0 Address Register */
/*! @{ */
#define MC_ME_PRTN1_CORE0_ADDR_ADDR_MASK         (0xFFFFFFFCU)
#define MC_ME_PRTN1_CORE0_ADDR_ADDR_SHIFT        (2U)
#define MC_ME_PRTN1_CORE0_ADDR_ADDR_WIDTH        (30U)
#define MC_ME_PRTN1_CORE0_ADDR_ADDR(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE0_ADDR_ADDR_SHIFT)) & MC_ME_PRTN1_CORE0_ADDR_ADDR_MASK)
/*! @} */

/*! @name PRTN1_CORE1_PCONF - Partition 1 Core 1 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN1_CORE1_PCONF_CCE_MASK         (0x1U)
#define MC_ME_PRTN1_CORE1_PCONF_CCE_SHIFT        (0U)
#define MC_ME_PRTN1_CORE1_PCONF_CCE_WIDTH        (1U)
#define MC_ME_PRTN1_CORE1_PCONF_CCE(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE1_PCONF_CCE_SHIFT)) & MC_ME_PRTN1_CORE1_PCONF_CCE_MASK)
/*! @} */

/*! @name PRTN1_CORE1_PUPD - Partition 1 Core 1 Process Update Register */
/*! @{ */
#define MC_ME_PRTN1_CORE1_PUPD_CCUPD_MASK        (0x1U)
#define MC_ME_PRTN1_CORE1_PUPD_CCUPD_SHIFT       (0U)
#define MC_ME_PRTN1_CORE1_PUPD_CCUPD_WIDTH       (1U)
#define MC_ME_PRTN1_CORE1_PUPD_CCUPD(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE1_PUPD_CCUPD_SHIFT)) & MC_ME_PRTN1_CORE1_PUPD_CCUPD_MASK)
/*! @} */

/*! @name PRTN1_CORE1_STAT - Partition 1 Core 1 Status Register */
/*! @{ */
#define MC_ME_PRTN1_CORE1_STAT_CCS_MASK          (0x1U)
#define MC_ME_PRTN1_CORE1_STAT_CCS_SHIFT         (0U)
#define MC_ME_PRTN1_CORE1_STAT_CCS_WIDTH         (1U)
#define MC_ME_PRTN1_CORE1_STAT_CCS(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE1_STAT_CCS_SHIFT)) & MC_ME_PRTN1_CORE1_STAT_CCS_MASK)
#define MC_ME_PRTN1_CORE1_STAT_WFI_MASK          (0x80000000U)
#define MC_ME_PRTN1_CORE1_STAT_WFI_SHIFT         (31U)
#define MC_ME_PRTN1_CORE1_STAT_WFI_WIDTH         (1U)
#define MC_ME_PRTN1_CORE1_STAT_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE1_STAT_WFI_SHIFT)) & MC_ME_PRTN1_CORE1_STAT_WFI_MASK)
/*! @} */

/*! @name PRTN1_CORE1_ADDR - Partition 1 Core 1 Address Register */
/*! @{ */
#define MC_ME_PRTN1_CORE1_ADDR_ADDR_MASK         (0xFFFFFFFCU)
#define MC_ME_PRTN1_CORE1_ADDR_ADDR_SHIFT        (2U)
#define MC_ME_PRTN1_CORE1_ADDR_ADDR_WIDTH        (30U)
#define MC_ME_PRTN1_CORE1_ADDR_ADDR(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE1_ADDR_ADDR_SHIFT)) & MC_ME_PRTN1_CORE1_ADDR_ADDR_MASK)
/*! @} */

/*! @name PRTN1_CORE2_PCONF - Partition 1 Core 2 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN1_CORE2_PCONF_CCE_MASK         (0x1U)
#define MC_ME_PRTN1_CORE2_PCONF_CCE_SHIFT        (0U)
#define MC_ME_PRTN1_CORE2_PCONF_CCE_WIDTH        (1U)
#define MC_ME_PRTN1_CORE2_PCONF_CCE(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE2_PCONF_CCE_SHIFT)) & MC_ME_PRTN1_CORE2_PCONF_CCE_MASK)
/*! @} */

/*! @name PRTN1_CORE2_PUPD - Partition 1 Core 2 Process Update Register */
/*! @{ */
#define MC_ME_PRTN1_CORE2_PUPD_CCUPD_MASK        (0x1U)
#define MC_ME_PRTN1_CORE2_PUPD_CCUPD_SHIFT       (0U)
#define MC_ME_PRTN1_CORE2_PUPD_CCUPD_WIDTH       (1U)
#define MC_ME_PRTN1_CORE2_PUPD_CCUPD(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE2_PUPD_CCUPD_SHIFT)) & MC_ME_PRTN1_CORE2_PUPD_CCUPD_MASK)
/*! @} */

/*! @name PRTN1_CORE2_STAT - Partition 1 Core 2 Status Register */
/*! @{ */
#define MC_ME_PRTN1_CORE2_STAT_CCS_MASK          (0x1U)
#define MC_ME_PRTN1_CORE2_STAT_CCS_SHIFT         (0U)
#define MC_ME_PRTN1_CORE2_STAT_CCS_WIDTH         (1U)
#define MC_ME_PRTN1_CORE2_STAT_CCS(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE2_STAT_CCS_SHIFT)) & MC_ME_PRTN1_CORE2_STAT_CCS_MASK)
#define MC_ME_PRTN1_CORE2_STAT_WFI_MASK          (0x80000000U)
#define MC_ME_PRTN1_CORE2_STAT_WFI_SHIFT         (31U)
#define MC_ME_PRTN1_CORE2_STAT_WFI_WIDTH         (1U)
#define MC_ME_PRTN1_CORE2_STAT_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE2_STAT_WFI_SHIFT)) & MC_ME_PRTN1_CORE2_STAT_WFI_MASK)
/*! @} */

/*! @name PRTN1_CORE2_ADDR - Partition 1 Core 2 Address Register */
/*! @{ */
#define MC_ME_PRTN1_CORE2_ADDR_ADDR_MASK         (0xFFFFFFFCU)
#define MC_ME_PRTN1_CORE2_ADDR_ADDR_SHIFT        (2U)
#define MC_ME_PRTN1_CORE2_ADDR_ADDR_WIDTH        (30U)
#define MC_ME_PRTN1_CORE2_ADDR_ADDR(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE2_ADDR_ADDR_SHIFT)) & MC_ME_PRTN1_CORE2_ADDR_ADDR_MASK)
/*! @} */

/*! @name PRTN1_CORE3_PCONF - Partition 1 Core 3 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN1_CORE3_PCONF_CCE_MASK         (0x1U)
#define MC_ME_PRTN1_CORE3_PCONF_CCE_SHIFT        (0U)
#define MC_ME_PRTN1_CORE3_PCONF_CCE_WIDTH        (1U)
#define MC_ME_PRTN1_CORE3_PCONF_CCE(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE3_PCONF_CCE_SHIFT)) & MC_ME_PRTN1_CORE3_PCONF_CCE_MASK)
/*! @} */

/*! @name PRTN1_CORE3_PUPD - Partition 1 Core 3 Process Update Register */
/*! @{ */
#define MC_ME_PRTN1_CORE3_PUPD_CCUPD_MASK        (0x1U)
#define MC_ME_PRTN1_CORE3_PUPD_CCUPD_SHIFT       (0U)
#define MC_ME_PRTN1_CORE3_PUPD_CCUPD_WIDTH       (1U)
#define MC_ME_PRTN1_CORE3_PUPD_CCUPD(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE3_PUPD_CCUPD_SHIFT)) & MC_ME_PRTN1_CORE3_PUPD_CCUPD_MASK)
/*! @} */

/*! @name PRTN1_CORE3_STAT - Partition 1 Core 3 Status Register */
/*! @{ */
#define MC_ME_PRTN1_CORE3_STAT_CCS_MASK          (0x1U)
#define MC_ME_PRTN1_CORE3_STAT_CCS_SHIFT         (0U)
#define MC_ME_PRTN1_CORE3_STAT_CCS_WIDTH         (1U)
#define MC_ME_PRTN1_CORE3_STAT_CCS(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE3_STAT_CCS_SHIFT)) & MC_ME_PRTN1_CORE3_STAT_CCS_MASK)
#define MC_ME_PRTN1_CORE3_STAT_WFI_MASK          (0x80000000U)
#define MC_ME_PRTN1_CORE3_STAT_WFI_SHIFT         (31U)
#define MC_ME_PRTN1_CORE3_STAT_WFI_WIDTH         (1U)
#define MC_ME_PRTN1_CORE3_STAT_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE3_STAT_WFI_SHIFT)) & MC_ME_PRTN1_CORE3_STAT_WFI_MASK)
/*! @} */

/*! @name PRTN1_CORE3_ADDR - Partition 1 Core 3 Address Register */
/*! @{ */
#define MC_ME_PRTN1_CORE3_ADDR_ADDR_MASK         (0xFFFFFFFCU)
#define MC_ME_PRTN1_CORE3_ADDR_ADDR_SHIFT        (2U)
#define MC_ME_PRTN1_CORE3_ADDR_ADDR_WIDTH        (30U)
#define MC_ME_PRTN1_CORE3_ADDR_ADDR(x)           (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN1_CORE3_ADDR_ADDR_SHIFT)) & MC_ME_PRTN1_CORE3_ADDR_ADDR_MASK)
/*! @} */

/*! @name PRTN2_PCONF - Partition 2 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN2_PCONF_PCE_MASK               (0x1U)
#define MC_ME_PRTN2_PCONF_PCE_SHIFT              (0U)
#define MC_ME_PRTN2_PCONF_PCE_WIDTH              (1U)
#define MC_ME_PRTN2_PCONF_PCE(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_PCONF_PCE_SHIFT)) & MC_ME_PRTN2_PCONF_PCE_MASK)
#define MC_ME_PRTN2_PCONF_OSSE_MASK              (0x4U)
#define MC_ME_PRTN2_PCONF_OSSE_SHIFT             (2U)
#define MC_ME_PRTN2_PCONF_OSSE_WIDTH             (1U)
#define MC_ME_PRTN2_PCONF_OSSE(x)                (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_PCONF_OSSE_SHIFT)) & MC_ME_PRTN2_PCONF_OSSE_MASK)
/*! @} */

/*! @name PRTN2_PUPD - Partition 2 Process Update Register */
/*! @{ */
#define MC_ME_PRTN2_PUPD_PCUD_MASK               (0x1U)
#define MC_ME_PRTN2_PUPD_PCUD_SHIFT              (0U)
#define MC_ME_PRTN2_PUPD_PCUD_WIDTH              (1U)
#define MC_ME_PRTN2_PUPD_PCUD(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_PUPD_PCUD_SHIFT)) & MC_ME_PRTN2_PUPD_PCUD_MASK)
#define MC_ME_PRTN2_PUPD_OSSUD_MASK              (0x4U)
#define MC_ME_PRTN2_PUPD_OSSUD_SHIFT             (2U)
#define MC_ME_PRTN2_PUPD_OSSUD_WIDTH             (1U)
#define MC_ME_PRTN2_PUPD_OSSUD(x)                (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_PUPD_OSSUD_SHIFT)) & MC_ME_PRTN2_PUPD_OSSUD_MASK)
/*! @} */

/*! @name PRTN2_STAT - Partition 2 Status Register */
/*! @{ */
#define MC_ME_PRTN2_STAT_PCS_MASK                (0x1U)
#define MC_ME_PRTN2_STAT_PCS_SHIFT               (0U)
#define MC_ME_PRTN2_STAT_PCS_WIDTH               (1U)
#define MC_ME_PRTN2_STAT_PCS(x)                  (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_STAT_PCS_SHIFT)) & MC_ME_PRTN2_STAT_PCS_MASK)
#define MC_ME_PRTN2_STAT_OSSS_MASK               (0x4U)
#define MC_ME_PRTN2_STAT_OSSS_SHIFT              (2U)
#define MC_ME_PRTN2_STAT_OSSS_WIDTH              (1U)
#define MC_ME_PRTN2_STAT_OSSS(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_STAT_OSSS_SHIFT)) & MC_ME_PRTN2_STAT_OSSS_MASK)
/*! @} */

/*! @name PRTN2_COFB0_STAT - Partition 2 COFB Set 0 Clock Status Register */
/*! @{ */
#define MC_ME_PRTN2_COFB0_STAT_BLOCK0_MASK       (0x1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK0_SHIFT      (0U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK0_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK0(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK0_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK0_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK1_MASK       (0x2U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK1_SHIFT      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK1_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK1(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK1_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK1_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK2_MASK       (0x4U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK2_SHIFT      (2U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK2_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK2(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK2_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK2_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK3_MASK       (0x8U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK3_SHIFT      (3U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK3_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK3(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK3_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK3_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK4_MASK       (0x10U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK4_SHIFT      (4U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK4_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK4(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK4_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK4_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK5_MASK       (0x20U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK5_SHIFT      (5U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK5_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK5(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK5_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK5_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK6_MASK       (0x40U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK6_SHIFT      (6U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK6_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK6(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK6_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK6_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK7_MASK       (0x80U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK7_SHIFT      (7U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK7_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK7(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK7_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK7_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK8_MASK       (0x100U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK8_SHIFT      (8U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK8_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK8(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK8_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK8_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK9_MASK       (0x200U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK9_SHIFT      (9U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK9_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK9(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK9_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK9_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK10_MASK      (0x400U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK10_SHIFT     (10U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK10_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK10(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK10_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK10_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK11_MASK      (0x800U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK11_SHIFT     (11U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK11_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK11(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK11_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK11_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK12_MASK      (0x1000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK12_SHIFT     (12U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK12_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK12(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK12_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK12_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK13_MASK      (0x2000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK13_SHIFT     (13U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK13_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK13(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK13_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK13_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK14_MASK      (0x4000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK14_SHIFT     (14U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK14_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK14(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK14_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK14_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK15_MASK      (0x8000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK15_SHIFT     (15U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK15_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK15(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK15_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK15_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK16_MASK      (0x10000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK16_SHIFT     (16U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK16_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK16(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK16_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK16_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK17_MASK      (0x20000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK17_SHIFT     (17U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK17_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK17(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK17_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK17_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK18_MASK      (0x40000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK18_SHIFT     (18U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK18_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK18(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK18_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK18_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK19_MASK      (0x80000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK19_SHIFT     (19U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK19_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK19(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK19_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK19_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK20_MASK      (0x100000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK20_SHIFT     (20U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK20_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK20(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK20_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK20_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK21_MASK      (0x200000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK21_SHIFT     (21U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK21_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK21(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK21_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK21_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK22_MASK      (0x400000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK22_SHIFT     (22U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK22_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK22(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK22_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK22_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK23_MASK      (0x800000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK23_SHIFT     (23U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK23_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK23(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK23_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK23_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK24_MASK      (0x1000000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK24_SHIFT     (24U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK24_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK24(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK24_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK24_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK25_MASK      (0x2000000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK25_SHIFT     (25U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK25_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK25(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK25_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK25_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK26_MASK      (0x4000000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK26_SHIFT     (26U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK26_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK26(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK26_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK26_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK27_MASK      (0x8000000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK27_SHIFT     (27U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK27_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK27(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK27_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK27_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK28_MASK      (0x10000000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK28_SHIFT     (28U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK28_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK28(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK28_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK28_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK29_MASK      (0x20000000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK29_SHIFT     (29U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK29_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK29(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK29_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK29_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK30_MASK      (0x40000000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK30_SHIFT     (30U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK30_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK30(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK30_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK30_MASK)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK31_MASK      (0x80000000U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK31_SHIFT     (31U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK31_WIDTH     (1U)
#define MC_ME_PRTN2_COFB0_STAT_BLOCK31(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_STAT_BLOCK31_SHIFT)) & MC_ME_PRTN2_COFB0_STAT_BLOCK31_MASK)
/*! @} */

/*! @name PRTN2_COFB0_CLKEN - Partition 2 COFB Set 0 Clock Enable Register */
/*! @{ */
#define MC_ME_PRTN2_COFB0_CLKEN_REQ0_MASK        (0x1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ0_SHIFT       (0U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ0_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ0(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ0_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ0_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ1_MASK        (0x2U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ1_SHIFT       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ1_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ1(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ1_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ1_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ2_MASK        (0x4U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ2_SHIFT       (2U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ2_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ2(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ2_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ2_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ3_MASK        (0x8U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ3_SHIFT       (3U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ3_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ3(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ3_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ3_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ4_MASK        (0x10U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ4_SHIFT       (4U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ4_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ4(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ4_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ4_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ5_MASK        (0x20U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ5_SHIFT       (5U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ5_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ5(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ5_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ5_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ6_MASK        (0x40U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ6_SHIFT       (6U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ6_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ6(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ6_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ6_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ7_MASK        (0x80U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ7_SHIFT       (7U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ7_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ7(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ7_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ7_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ8_MASK        (0x100U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ8_SHIFT       (8U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ8_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ8(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ8_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ8_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ9_MASK        (0x200U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ9_SHIFT       (9U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ9_WIDTH       (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ9(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ9_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ9_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ10_MASK       (0x400U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ10_SHIFT      (10U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ10_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ10(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ10_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ10_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ11_MASK       (0x800U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ11_SHIFT      (11U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ11_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ11(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ11_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ11_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ12_MASK       (0x1000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ12_SHIFT      (12U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ12_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ12(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ12_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ12_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ13_MASK       (0x2000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ13_SHIFT      (13U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ13_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ13(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ13_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ13_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ14_MASK       (0x4000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ14_SHIFT      (14U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ14_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ14(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ14_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ14_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ15_MASK       (0x8000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ15_SHIFT      (15U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ15_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ15(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ15_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ15_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ16_MASK       (0x10000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ16_SHIFT      (16U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ16_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ16(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ16_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ16_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ17_MASK       (0x20000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ17_SHIFT      (17U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ17_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ17(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ17_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ17_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ18_MASK       (0x40000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ18_SHIFT      (18U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ18_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ18(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ18_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ18_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ19_MASK       (0x80000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ19_SHIFT      (19U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ19_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ19(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ19_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ19_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ20_MASK       (0x100000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ20_SHIFT      (20U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ20_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ20(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ20_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ20_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ21_MASK       (0x200000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ21_SHIFT      (21U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ21_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ21(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ21_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ21_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ22_MASK       (0x400000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ22_SHIFT      (22U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ22_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ22(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ22_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ22_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ23_MASK       (0x800000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ23_SHIFT      (23U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ23_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ23(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ23_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ23_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ24_MASK       (0x1000000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ24_SHIFT      (24U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ24_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ24(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ24_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ24_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ25_MASK       (0x2000000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ25_SHIFT      (25U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ25_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ25(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ25_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ25_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ26_MASK       (0x4000000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ26_SHIFT      (26U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ26_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ26(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ26_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ26_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ27_MASK       (0x8000000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ27_SHIFT      (27U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ27_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ27(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ27_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ27_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ28_MASK       (0x10000000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ28_SHIFT      (28U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ28_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ28(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ28_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ28_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ29_MASK       (0x20000000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ29_SHIFT      (29U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ29_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ29(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ29_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ29_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ30_MASK       (0x40000000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ30_SHIFT      (30U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ30_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ30(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ30_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ30_MASK)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ31_MASK       (0x80000000U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ31_SHIFT      (31U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ31_WIDTH      (1U)
#define MC_ME_PRTN2_COFB0_CLKEN_REQ31(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN2_COFB0_CLKEN_REQ31_SHIFT)) & MC_ME_PRTN2_COFB0_CLKEN_REQ31_MASK)
/*! @} */

/*! @name PRTN3_PCONF - Partition 3 Process Configuration Register */
/*! @{ */
#define MC_ME_PRTN3_PCONF_PCE_MASK               (0x1U)
#define MC_ME_PRTN3_PCONF_PCE_SHIFT              (0U)
#define MC_ME_PRTN3_PCONF_PCE_WIDTH              (1U)
#define MC_ME_PRTN3_PCONF_PCE(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_PCONF_PCE_SHIFT)) & MC_ME_PRTN3_PCONF_PCE_MASK)
#define MC_ME_PRTN3_PCONF_OSSE_MASK              (0x4U)
#define MC_ME_PRTN3_PCONF_OSSE_SHIFT             (2U)
#define MC_ME_PRTN3_PCONF_OSSE_WIDTH             (1U)
#define MC_ME_PRTN3_PCONF_OSSE(x)                (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_PCONF_OSSE_SHIFT)) & MC_ME_PRTN3_PCONF_OSSE_MASK)
/*! @} */

/*! @name PRTN3_PUPD - Partition 3 Process Update Register */
/*! @{ */
#define MC_ME_PRTN3_PUPD_PCUD_MASK               (0x1U)
#define MC_ME_PRTN3_PUPD_PCUD_SHIFT              (0U)
#define MC_ME_PRTN3_PUPD_PCUD_WIDTH              (1U)
#define MC_ME_PRTN3_PUPD_PCUD(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_PUPD_PCUD_SHIFT)) & MC_ME_PRTN3_PUPD_PCUD_MASK)
#define MC_ME_PRTN3_PUPD_OSSUD_MASK              (0x4U)
#define MC_ME_PRTN3_PUPD_OSSUD_SHIFT             (2U)
#define MC_ME_PRTN3_PUPD_OSSUD_WIDTH             (1U)
#define MC_ME_PRTN3_PUPD_OSSUD(x)                (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_PUPD_OSSUD_SHIFT)) & MC_ME_PRTN3_PUPD_OSSUD_MASK)
/*! @} */

/*! @name PRTN3_STAT - Partition 3 Status Register */
/*! @{ */
#define MC_ME_PRTN3_STAT_PCS_MASK                (0x1U)
#define MC_ME_PRTN3_STAT_PCS_SHIFT               (0U)
#define MC_ME_PRTN3_STAT_PCS_WIDTH               (1U)
#define MC_ME_PRTN3_STAT_PCS(x)                  (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_STAT_PCS_SHIFT)) & MC_ME_PRTN3_STAT_PCS_MASK)
#define MC_ME_PRTN3_STAT_OSSS_MASK               (0x4U)
#define MC_ME_PRTN3_STAT_OSSS_SHIFT              (2U)
#define MC_ME_PRTN3_STAT_OSSS_WIDTH              (1U)
#define MC_ME_PRTN3_STAT_OSSS(x)                 (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_STAT_OSSS_SHIFT)) & MC_ME_PRTN3_STAT_OSSS_MASK)
/*! @} */

/*! @name PRTN3_COFB0_STAT - Partition 3 COFB Set 0 Clock Status Register */
/*! @{ */
#define MC_ME_PRTN3_COFB0_STAT_BLOCK0_MASK       (0x1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK0_SHIFT      (0U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK0_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK0(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK0_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK0_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK1_MASK       (0x2U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK1_SHIFT      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK1_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK1(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK1_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK1_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK2_MASK       (0x4U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK2_SHIFT      (2U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK2_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK2(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK2_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK2_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK3_MASK       (0x8U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK3_SHIFT      (3U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK3_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK3(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK3_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK3_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK4_MASK       (0x10U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK4_SHIFT      (4U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK4_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK4(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK4_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK4_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK5_MASK       (0x20U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK5_SHIFT      (5U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK5_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK5(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK5_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK5_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK6_MASK       (0x40U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK6_SHIFT      (6U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK6_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK6(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK6_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK6_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK7_MASK       (0x80U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK7_SHIFT      (7U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK7_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK7(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK7_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK7_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK8_MASK       (0x100U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK8_SHIFT      (8U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK8_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK8(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK8_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK8_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK9_MASK       (0x200U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK9_SHIFT      (9U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK9_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK9(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK9_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK9_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK10_MASK      (0x400U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK10_SHIFT     (10U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK10_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK10(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK10_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK10_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK11_MASK      (0x800U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK11_SHIFT     (11U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK11_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK11(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK11_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK11_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK12_MASK      (0x1000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK12_SHIFT     (12U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK12_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK12(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK12_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK12_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK13_MASK      (0x2000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK13_SHIFT     (13U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK13_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK13(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK13_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK13_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK14_MASK      (0x4000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK14_SHIFT     (14U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK14_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK14(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK14_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK14_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK15_MASK      (0x8000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK15_SHIFT     (15U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK15_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK15(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK15_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK15_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK16_MASK      (0x10000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK16_SHIFT     (16U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK16_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK16(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK16_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK16_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK17_MASK      (0x20000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK17_SHIFT     (17U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK17_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK17(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK17_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK17_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK18_MASK      (0x40000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK18_SHIFT     (18U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK18_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK18(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK18_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK18_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK19_MASK      (0x80000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK19_SHIFT     (19U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK19_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK19(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK19_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK19_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK20_MASK      (0x100000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK20_SHIFT     (20U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK20_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK20(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK20_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK20_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK21_MASK      (0x200000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK21_SHIFT     (21U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK21_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK21(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK21_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK21_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK22_MASK      (0x400000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK22_SHIFT     (22U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK22_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK22(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK22_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK22_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK23_MASK      (0x800000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK23_SHIFT     (23U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK23_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK23(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK23_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK23_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK24_MASK      (0x1000000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK24_SHIFT     (24U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK24_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK24(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK24_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK24_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK25_MASK      (0x2000000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK25_SHIFT     (25U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK25_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK25(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK25_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK25_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK26_MASK      (0x4000000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK26_SHIFT     (26U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK26_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK26(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK26_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK26_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK27_MASK      (0x8000000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK27_SHIFT     (27U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK27_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK27(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK27_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK27_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK28_MASK      (0x10000000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK28_SHIFT     (28U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK28_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK28(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK28_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK28_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK29_MASK      (0x20000000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK29_SHIFT     (29U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK29_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK29(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK29_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK29_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK30_MASK      (0x40000000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK30_SHIFT     (30U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK30_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK30(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK30_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK30_MASK)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK31_MASK      (0x80000000U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK31_SHIFT     (31U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK31_WIDTH     (1U)
#define MC_ME_PRTN3_COFB0_STAT_BLOCK31(x)        (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_STAT_BLOCK31_SHIFT)) & MC_ME_PRTN3_COFB0_STAT_BLOCK31_MASK)
/*! @} */

/*! @name PRTN3_COFB0_CLKEN - Partition 3 COFB Set 0 Clock Enable Register */
/*! @{ */
#define MC_ME_PRTN3_COFB0_CLKEN_REQ0_MASK        (0x1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ0_SHIFT       (0U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ0_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ0(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ0_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ0_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ1_MASK        (0x2U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ1_SHIFT       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ1_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ1(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ1_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ1_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ2_MASK        (0x4U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ2_SHIFT       (2U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ2_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ2(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ2_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ2_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ3_MASK        (0x8U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ3_SHIFT       (3U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ3_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ3(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ3_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ3_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ4_MASK        (0x10U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ4_SHIFT       (4U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ4_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ4(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ4_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ4_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ5_MASK        (0x20U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ5_SHIFT       (5U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ5_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ5(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ5_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ5_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ6_MASK        (0x40U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ6_SHIFT       (6U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ6_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ6(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ6_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ6_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ7_MASK        (0x80U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ7_SHIFT       (7U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ7_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ7(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ7_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ7_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ8_MASK        (0x100U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ8_SHIFT       (8U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ8_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ8(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ8_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ8_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ9_MASK        (0x200U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ9_SHIFT       (9U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ9_WIDTH       (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ9(x)          (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ9_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ9_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ10_MASK       (0x400U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ10_SHIFT      (10U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ10_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ10(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ10_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ10_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ11_MASK       (0x800U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ11_SHIFT      (11U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ11_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ11(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ11_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ11_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ12_MASK       (0x1000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ12_SHIFT      (12U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ12_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ12(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ12_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ12_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ13_MASK       (0x2000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ13_SHIFT      (13U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ13_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ13(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ13_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ13_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ14_MASK       (0x4000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ14_SHIFT      (14U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ14_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ14(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ14_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ14_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ15_MASK       (0x8000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ15_SHIFT      (15U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ15_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ15(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ15_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ15_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ16_MASK       (0x10000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ16_SHIFT      (16U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ16_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ16(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ16_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ16_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ17_MASK       (0x20000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ17_SHIFT      (17U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ17_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ17(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ17_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ17_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ18_MASK       (0x40000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ18_SHIFT      (18U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ18_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ18(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ18_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ18_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ19_MASK       (0x80000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ19_SHIFT      (19U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ19_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ19(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ19_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ19_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ20_MASK       (0x100000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ20_SHIFT      (20U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ20_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ20(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ20_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ20_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ21_MASK       (0x200000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ21_SHIFT      (21U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ21_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ21(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ21_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ21_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ22_MASK       (0x400000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ22_SHIFT      (22U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ22_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ22(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ22_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ22_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ23_MASK       (0x800000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ23_SHIFT      (23U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ23_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ23(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ23_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ23_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ24_MASK       (0x1000000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ24_SHIFT      (24U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ24_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ24(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ24_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ24_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ25_MASK       (0x2000000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ25_SHIFT      (25U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ25_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ25(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ25_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ25_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ26_MASK       (0x4000000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ26_SHIFT      (26U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ26_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ26(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ26_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ26_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ27_MASK       (0x8000000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ27_SHIFT      (27U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ27_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ27(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ27_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ27_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ28_MASK       (0x10000000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ28_SHIFT      (28U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ28_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ28(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ28_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ28_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ29_MASK       (0x20000000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ29_SHIFT      (29U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ29_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ29(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ29_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ29_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ30_MASK       (0x40000000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ30_SHIFT      (30U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ30_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ30(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ30_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ30_MASK)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ31_MASK       (0x80000000U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ31_SHIFT      (31U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ31_WIDTH      (1U)
#define MC_ME_PRTN3_COFB0_CLKEN_REQ31(x)         (((uint32_t)(((uint32_t)(x)) << MC_ME_PRTN3_COFB0_CLKEN_REQ31_SHIFT)) & MC_ME_PRTN3_COFB0_CLKEN_REQ31_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MC_ME_Register_Masks */

/*!
 * @}
 */ /* end of group MC_ME_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_MC_ME_H_) */
