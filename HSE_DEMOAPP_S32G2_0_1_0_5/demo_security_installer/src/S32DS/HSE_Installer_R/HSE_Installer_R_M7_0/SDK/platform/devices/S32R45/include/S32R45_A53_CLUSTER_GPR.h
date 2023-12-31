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
**    - rev. 1.3 Taru Shree 10-DEC-19  1)Initial release based on 
**                                     RM Rev.1 RC.
**                                     2)Module name is changed from
**                                     A53_GPR to a53_cluster_gpr.
**
** ###################################################################
*/

/*!
 * @file S32R45_a53_cluster_gpr.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_a53_cluster_gpr
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
#if !defined(S32R45_a53_cluster_gpr_H_)  /* Check if memory map has not been already included */
#define S32R45_a53_cluster_gpr_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- A53_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup A53_GPR_Peripheral_Access_Layer A53_GPR Peripheral Access Layer
 * @{
 */

/** A53_GPR - Register Layout Typedef */
typedef struct {
  __IO uint32_t GPR00;                             /**< GPR00 Register, offset: 0x0 */
  __IO uint32_t GPR01;                             /**< GPR01 Register, offset: 0x4 */
  uint8_t RESERVED_0[16];
  __IO uint32_t GPR06;                             /**< GPR06 Register, offset: 0x18 */
  __IO uint32_t GPR07;                             /**< GPR07 Register, offset: 0x1C */
  __I  uint32_t GPR08;                             /**< GPR08 Register, offset: 0x20 */
  __IO uint32_t GPR09;                             /**< GPR09 Register, offset: 0x24 */
  __I  uint32_t GPR10;                             /**< GPR10 Register, offset: 0x28 */
  __I  uint32_t GPR11;                             /**< GPR11 Register, offset: 0x2C */
  __I  uint32_t GPR12;                             /**< GPR12 Register, offset: 0x30 */
  __I  uint32_t GPR13;                             /**< GPR13 Register, offset: 0x34 */
  __I  uint32_t GPR14;                             /**< GPR14 register, offset: 0x38 */
  __I  uint32_t GPR15;                             /**< GPR15 Register, offset: 0x3C */
  __I  uint32_t GPR16;                             /**< GPR16 Register, offset: 0x40 */
  __I  uint32_t GPR17;                             /**< GPR17 Register, offset: 0x44 */
  __I  uint32_t GPR18;                             /**< GPR18 Register, offset: 0x48 */
  __I  uint32_t GPR19;                             /**< GPR19 Register, offset: 0x4C */
  __I  uint32_t GPR20;                             /**< GPR20 Register, offset: 0x50 */
  __I  uint32_t GPR21;                             /**< GPR21 Register, offset: 0x54 */
} A53_GPR_Type, *A53_GPR_MemMapPtr;

/** Number of instances of the A53_GPR module. */
#define A53_GPR_INSTANCE_COUNT                   (1u)

/* A53_GPR - Peripheral instance base addresses */
/** Peripheral A53_GPR base address */
#define A53_GPR_BASE                             (0x4007C400u)
/** Peripheral A53_GPR base pointer */
#define A53_GPR                                  ((A53_GPR_Type *)A53_GPR_BASE)
/** Array initializer of A53_GPR peripheral base addresses */
#define A53_GPR_BASE_ADDRS                       { A53_GPR_BASE }
/** Array initializer of A53_GPR peripheral base pointers */
#define A53_GPR_BASE_PTRS                        { A53_GPR }

/* ----------------------------------------------------------------------------
   -- A53_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup A53_GPR_Register_Masks A53_GPR Register Masks
 * @{
 */

/*! @name GPR00 - GPR00 Register */
/*! @{ */
#define A53_GPR_GPR00_CA53_0_CORE0_AA64nAA32_MASK (0x1U)
#define A53_GPR_GPR00_CA53_0_CORE0_AA64nAA32_SHIFT (0U)
#define A53_GPR_GPR00_CA53_0_CORE0_AA64nAA32_WIDTH (1U)
#define A53_GPR_GPR00_CA53_0_CORE0_AA64nAA32(x)  (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_CORE0_AA64nAA32_SHIFT)) & A53_GPR_GPR00_CA53_0_CORE0_AA64nAA32_MASK)
#define A53_GPR_GPR00_CA53_0_CORE1_AA64nAA32_MASK (0x2U)
#define A53_GPR_GPR00_CA53_0_CORE1_AA64nAA32_SHIFT (1U)
#define A53_GPR_GPR00_CA53_0_CORE1_AA64nAA32_WIDTH (1U)
#define A53_GPR_GPR00_CA53_0_CORE1_AA64nAA32(x)  (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_CORE1_AA64nAA32_SHIFT)) & A53_GPR_GPR00_CA53_0_CORE1_AA64nAA32_MASK)
#define A53_GPR_GPR00_CA53_1_CORE0_AA64nAA32_MASK (0x4U)
#define A53_GPR_GPR00_CA53_1_CORE0_AA64nAA32_SHIFT (2U)
#define A53_GPR_GPR00_CA53_1_CORE0_AA64nAA32_WIDTH (1U)
#define A53_GPR_GPR00_CA53_1_CORE0_AA64nAA32(x)  (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_CORE0_AA64nAA32_SHIFT)) & A53_GPR_GPR00_CA53_1_CORE0_AA64nAA32_MASK)
#define A53_GPR_GPR00_CA53_1_CORE1_AA64nAA32_MASK (0x8U)
#define A53_GPR_GPR00_CA53_1_CORE1_AA64nAA32_SHIFT (3U)
#define A53_GPR_GPR00_CA53_1_CORE1_AA64nAA32_WIDTH (1U)
#define A53_GPR_GPR00_CA53_1_CORE1_AA64nAA32(x)  (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_CORE1_AA64nAA32_SHIFT)) & A53_GPR_GPR00_CA53_1_CORE1_AA64nAA32_MASK)
#define A53_GPR_GPR00_CA53_0_BROADCASTCACHEMAINT_MASK (0x10U)
#define A53_GPR_GPR00_CA53_0_BROADCASTCACHEMAINT_SHIFT (4U)
#define A53_GPR_GPR00_CA53_0_BROADCASTCACHEMAINT_WIDTH (1U)
#define A53_GPR_GPR00_CA53_0_BROADCASTCACHEMAINT(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_BROADCASTCACHEMAINT_SHIFT)) & A53_GPR_GPR00_CA53_0_BROADCASTCACHEMAINT_MASK)
#define A53_GPR_GPR00_CA53_0_BROADCASTINNER_MASK (0x20U)
#define A53_GPR_GPR00_CA53_0_BROADCASTINNER_SHIFT (5U)
#define A53_GPR_GPR00_CA53_0_BROADCASTINNER_WIDTH (1U)
#define A53_GPR_GPR00_CA53_0_BROADCASTINNER(x)   (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_BROADCASTINNER_SHIFT)) & A53_GPR_GPR00_CA53_0_BROADCASTINNER_MASK)
#define A53_GPR_GPR00_CA53_0_BROADCASTOUTER_MASK (0x40U)
#define A53_GPR_GPR00_CA53_0_BROADCASTOUTER_SHIFT (6U)
#define A53_GPR_GPR00_CA53_0_BROADCASTOUTER_WIDTH (1U)
#define A53_GPR_GPR00_CA53_0_BROADCASTOUTER(x)   (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_BROADCASTOUTER_SHIFT)) & A53_GPR_GPR00_CA53_0_BROADCASTOUTER_MASK)
#define A53_GPR_GPR00_CA53_1_BROADCASTCACHEMAINT_MASK (0x80U)
#define A53_GPR_GPR00_CA53_1_BROADCASTCACHEMAINT_SHIFT (7U)
#define A53_GPR_GPR00_CA53_1_BROADCASTCACHEMAINT_WIDTH (1U)
#define A53_GPR_GPR00_CA53_1_BROADCASTCACHEMAINT(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_BROADCASTCACHEMAINT_SHIFT)) & A53_GPR_GPR00_CA53_1_BROADCASTCACHEMAINT_MASK)
#define A53_GPR_GPR00_CA53_1_BROADCASTINNER_MASK (0x100U)
#define A53_GPR_GPR00_CA53_1_BROADCASTINNER_SHIFT (8U)
#define A53_GPR_GPR00_CA53_1_BROADCASTINNER_WIDTH (1U)
#define A53_GPR_GPR00_CA53_1_BROADCASTINNER(x)   (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_BROADCASTINNER_SHIFT)) & A53_GPR_GPR00_CA53_1_BROADCASTINNER_MASK)
#define A53_GPR_GPR00_CA53_1_BROADCASTOUTER_MASK (0x200U)
#define A53_GPR_GPR00_CA53_1_BROADCASTOUTER_SHIFT (9U)
#define A53_GPR_GPR00_CA53_1_BROADCASTOUTER_WIDTH (1U)
#define A53_GPR_GPR00_CA53_1_BROADCASTOUTER(x)   (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_BROADCASTOUTER_SHIFT)) & A53_GPR_GPR00_CA53_1_BROADCASTOUTER_MASK)
#define A53_GPR_GPR00_CA53_0_CORE0_CFGEND_MASK   (0x400U)
#define A53_GPR_GPR00_CA53_0_CORE0_CFGEND_SHIFT  (10U)
#define A53_GPR_GPR00_CA53_0_CORE0_CFGEND_WIDTH  (1U)
#define A53_GPR_GPR00_CA53_0_CORE0_CFGEND(x)     (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_CORE0_CFGEND_SHIFT)) & A53_GPR_GPR00_CA53_0_CORE0_CFGEND_MASK)
#define A53_GPR_GPR00_CA53_0_CORE1_CFGEND_MASK   (0x800U)
#define A53_GPR_GPR00_CA53_0_CORE1_CFGEND_SHIFT  (11U)
#define A53_GPR_GPR00_CA53_0_CORE1_CFGEND_WIDTH  (1U)
#define A53_GPR_GPR00_CA53_0_CORE1_CFGEND(x)     (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_CORE1_CFGEND_SHIFT)) & A53_GPR_GPR00_CA53_0_CORE1_CFGEND_MASK)
#define A53_GPR_GPR00_CA53_0_CORE0_CFGTE_MASK    (0x1000U)
#define A53_GPR_GPR00_CA53_0_CORE0_CFGTE_SHIFT   (12U)
#define A53_GPR_GPR00_CA53_0_CORE0_CFGTE_WIDTH   (1U)
#define A53_GPR_GPR00_CA53_0_CORE0_CFGTE(x)      (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_CORE0_CFGTE_SHIFT)) & A53_GPR_GPR00_CA53_0_CORE0_CFGTE_MASK)
#define A53_GPR_GPR00_CA53_0_CORE1_CFGTE_MASK    (0x2000U)
#define A53_GPR_GPR00_CA53_0_CORE1_CFGTE_SHIFT   (13U)
#define A53_GPR_GPR00_CA53_0_CORE1_CFGTE_WIDTH   (1U)
#define A53_GPR_GPR00_CA53_0_CORE1_CFGTE(x)      (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_CORE1_CFGTE_SHIFT)) & A53_GPR_GPR00_CA53_0_CORE1_CFGTE_MASK)
#define A53_GPR_GPR00_CA53_1_CORE0_CFGEND_MASK   (0x4000U)
#define A53_GPR_GPR00_CA53_1_CORE0_CFGEND_SHIFT  (14U)
#define A53_GPR_GPR00_CA53_1_CORE0_CFGEND_WIDTH  (1U)
#define A53_GPR_GPR00_CA53_1_CORE0_CFGEND(x)     (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_CORE0_CFGEND_SHIFT)) & A53_GPR_GPR00_CA53_1_CORE0_CFGEND_MASK)
#define A53_GPR_GPR00_CA53_1_CORE1_CFGEND_MASK   (0x8000U)
#define A53_GPR_GPR00_CA53_1_CORE1_CFGEND_SHIFT  (15U)
#define A53_GPR_GPR00_CA53_1_CORE1_CFGEND_WIDTH  (1U)
#define A53_GPR_GPR00_CA53_1_CORE1_CFGEND(x)     (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_CORE1_CFGEND_SHIFT)) & A53_GPR_GPR00_CA53_1_CORE1_CFGEND_MASK)
#define A53_GPR_GPR00_CA53_1_CORE0_CFGTE_MASK    (0x10000U)
#define A53_GPR_GPR00_CA53_1_CORE0_CFGTE_SHIFT   (16U)
#define A53_GPR_GPR00_CA53_1_CORE0_CFGTE_WIDTH   (1U)
#define A53_GPR_GPR00_CA53_1_CORE0_CFGTE(x)      (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_CORE0_CFGTE_SHIFT)) & A53_GPR_GPR00_CA53_1_CORE0_CFGTE_MASK)
#define A53_GPR_GPR00_CA53_1_CORE1_CFGTE_MASK    (0x20000U)
#define A53_GPR_GPR00_CA53_1_CORE1_CFGTE_SHIFT   (17U)
#define A53_GPR_GPR00_CA53_1_CORE1_CFGTE_WIDTH   (1U)
#define A53_GPR_GPR00_CA53_1_CORE1_CFGTE(x)      (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_CORE1_CFGTE_SHIFT)) & A53_GPR_GPR00_CA53_1_CORE1_CFGTE_MASK)
#define A53_GPR_GPR00_CA53_0_CORE0_VINITHI_MASK  (0x40000U)
#define A53_GPR_GPR00_CA53_0_CORE0_VINITHI_SHIFT (18U)
#define A53_GPR_GPR00_CA53_0_CORE0_VINITHI_WIDTH (1U)
#define A53_GPR_GPR00_CA53_0_CORE0_VINITHI(x)    (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_CORE0_VINITHI_SHIFT)) & A53_GPR_GPR00_CA53_0_CORE0_VINITHI_MASK)
#define A53_GPR_GPR00_CA53_0_CORE1_VINITHI_MASK  (0x80000U)
#define A53_GPR_GPR00_CA53_0_CORE1_VINITHI_SHIFT (19U)
#define A53_GPR_GPR00_CA53_0_CORE1_VINITHI_WIDTH (1U)
#define A53_GPR_GPR00_CA53_0_CORE1_VINITHI(x)    (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_0_CORE1_VINITHI_SHIFT)) & A53_GPR_GPR00_CA53_0_CORE1_VINITHI_MASK)
#define A53_GPR_GPR00_CA53_1_CORE0_VINITHI_MASK  (0x100000U)
#define A53_GPR_GPR00_CA53_1_CORE0_VINITHI_SHIFT (20U)
#define A53_GPR_GPR00_CA53_1_CORE0_VINITHI_WIDTH (1U)
#define A53_GPR_GPR00_CA53_1_CORE0_VINITHI(x)    (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_CORE0_VINITHI_SHIFT)) & A53_GPR_GPR00_CA53_1_CORE0_VINITHI_MASK)
#define A53_GPR_GPR00_CA53_1_CORE1_VINITHI_MASK  (0x200000U)
#define A53_GPR_GPR00_CA53_1_CORE1_VINITHI_SHIFT (21U)
#define A53_GPR_GPR00_CA53_1_CORE1_VINITHI_WIDTH (1U)
#define A53_GPR_GPR00_CA53_1_CORE1_VINITHI(x)    (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_1_CORE1_VINITHI_SHIFT)) & A53_GPR_GPR00_CA53_1_CORE1_VINITHI_MASK)
#define A53_GPR_GPR00_CA53_COUNTER_CLK_DIV_VAL_MASK (0x7000000U)
#define A53_GPR_GPR00_CA53_COUNTER_CLK_DIV_VAL_SHIFT (24U)
#define A53_GPR_GPR00_CA53_COUNTER_CLK_DIV_VAL_WIDTH (3U)
#define A53_GPR_GPR00_CA53_COUNTER_CLK_DIV_VAL(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR00_CA53_COUNTER_CLK_DIV_VAL_SHIFT)) & A53_GPR_GPR00_CA53_COUNTER_CLK_DIV_VAL_MASK)
/*! @} */

/*! @name GPR01 - GPR01 Register */
/*! @{ */
#define A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER0_MASK (0x1U)
#define A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER0_SHIFT (0U)
#define A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER0_WIDTH (1U)
#define A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER0(x)   (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER0_SHIFT)) & A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER0_MASK)
#define A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER1_MASK (0x2U)
#define A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER1_SHIFT (1U)
#define A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER1_WIDTH (1U)
#define A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER1(x)   (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER1_SHIFT)) & A53_GPR_GPR01_WFE_EVT_CA53_CLUSTER1_MASK)
#define A53_GPR_GPR01_CLUSTER0_CG_EN_MASK        (0x100U)
#define A53_GPR_GPR01_CLUSTER0_CG_EN_SHIFT       (8U)
#define A53_GPR_GPR01_CLUSTER0_CG_EN_WIDTH       (1U)
#define A53_GPR_GPR01_CLUSTER0_CG_EN(x)          (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR01_CLUSTER0_CG_EN_SHIFT)) & A53_GPR_GPR01_CLUSTER0_CG_EN_MASK)
#define A53_GPR_GPR01_CLUSTER1_CG_EN_MASK        (0x200U)
#define A53_GPR_GPR01_CLUSTER1_CG_EN_SHIFT       (9U)
#define A53_GPR_GPR01_CLUSTER1_CG_EN_WIDTH       (1U)
#define A53_GPR_GPR01_CLUSTER1_CG_EN(x)          (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR01_CLUSTER1_CG_EN_SHIFT)) & A53_GPR_GPR01_CLUSTER1_CG_EN_MASK)
#define A53_GPR_GPR01_CA53_0_CORE0_CP15SDISABLE_MASK (0x1000000U)
#define A53_GPR_GPR01_CA53_0_CORE0_CP15SDISABLE_SHIFT (24U)
#define A53_GPR_GPR01_CA53_0_CORE0_CP15SDISABLE_WIDTH (1U)
#define A53_GPR_GPR01_CA53_0_CORE0_CP15SDISABLE(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR01_CA53_0_CORE0_CP15SDISABLE_SHIFT)) & A53_GPR_GPR01_CA53_0_CORE0_CP15SDISABLE_MASK)
#define A53_GPR_GPR01_CA53_0_CORE1_CP15SDISABLE_MASK (0x2000000U)
#define A53_GPR_GPR01_CA53_0_CORE1_CP15SDISABLE_SHIFT (25U)
#define A53_GPR_GPR01_CA53_0_CORE1_CP15SDISABLE_WIDTH (1U)
#define A53_GPR_GPR01_CA53_0_CORE1_CP15SDISABLE(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR01_CA53_0_CORE1_CP15SDISABLE_SHIFT)) & A53_GPR_GPR01_CA53_0_CORE1_CP15SDISABLE_MASK)
#define A53_GPR_GPR01_CA53_1_CORE0_CP15SDISABLE_MASK (0x4000000U)
#define A53_GPR_GPR01_CA53_1_CORE0_CP15SDISABLE_SHIFT (26U)
#define A53_GPR_GPR01_CA53_1_CORE0_CP15SDISABLE_WIDTH (1U)
#define A53_GPR_GPR01_CA53_1_CORE0_CP15SDISABLE(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR01_CA53_1_CORE0_CP15SDISABLE_SHIFT)) & A53_GPR_GPR01_CA53_1_CORE0_CP15SDISABLE_MASK)
#define A53_GPR_GPR01_CA53_1_CORE1_CP15SDISABLE_MASK (0x8000000U)
#define A53_GPR_GPR01_CA53_1_CORE1_CP15SDISABLE_SHIFT (27U)
#define A53_GPR_GPR01_CA53_1_CORE1_CP15SDISABLE_WIDTH (1U)
#define A53_GPR_GPR01_CA53_1_CORE1_CP15SDISABLE(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR01_CA53_1_CORE1_CP15SDISABLE_SHIFT)) & A53_GPR_GPR01_CA53_1_CORE1_CP15SDISABLE_MASK)
/*! @} */

/*! @name GPR06 - GPR06 Register */
/*! @{ */
#define A53_GPR_GPR06_CA53_LOCKSTEP_EN_MASK      (0x1U)
#define A53_GPR_GPR06_CA53_LOCKSTEP_EN_SHIFT     (0U)
#define A53_GPR_GPR06_CA53_LOCKSTEP_EN_WIDTH     (1U)
#define A53_GPR_GPR06_CA53_LOCKSTEP_EN(x)        (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR06_CA53_LOCKSTEP_EN_SHIFT)) & A53_GPR_GPR06_CA53_LOCKSTEP_EN_MASK)
#define A53_GPR_GPR06_GIC500_LOCKSTEP_EN_MASK    (0x6U)
#define A53_GPR_GPR06_GIC500_LOCKSTEP_EN_SHIFT   (1U)
#define A53_GPR_GPR06_GIC500_LOCKSTEP_EN_WIDTH   (2U)
#define A53_GPR_GPR06_GIC500_LOCKSTEP_EN(x)      (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR06_GIC500_LOCKSTEP_EN_SHIFT)) & A53_GPR_GPR06_GIC500_LOCKSTEP_EN_MASK)
/*! @} */

/*! @name GPR07 - GPR07 Register */
/*! @{ */
#define A53_GPR_GPR07_CA53_0_CLUSTERIDAFF1_MASK  (0xFFU)
#define A53_GPR_GPR07_CA53_0_CLUSTERIDAFF1_SHIFT (0U)
#define A53_GPR_GPR07_CA53_0_CLUSTERIDAFF1_WIDTH (8U)
#define A53_GPR_GPR07_CA53_0_CLUSTERIDAFF1(x)    (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR07_CA53_0_CLUSTERIDAFF1_SHIFT)) & A53_GPR_GPR07_CA53_0_CLUSTERIDAFF1_MASK)
#define A53_GPR_GPR07_CA53_0_CLUSTERIDAFF2_MASK  (0xFF00U)
#define A53_GPR_GPR07_CA53_0_CLUSTERIDAFF2_SHIFT (8U)
#define A53_GPR_GPR07_CA53_0_CLUSTERIDAFF2_WIDTH (8U)
#define A53_GPR_GPR07_CA53_0_CLUSTERIDAFF2(x)    (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR07_CA53_0_CLUSTERIDAFF2_SHIFT)) & A53_GPR_GPR07_CA53_0_CLUSTERIDAFF2_MASK)
#define A53_GPR_GPR07_CA53_1_CLUSTERIDAFF1_MASK  (0xFF0000U)
#define A53_GPR_GPR07_CA53_1_CLUSTERIDAFF1_SHIFT (16U)
#define A53_GPR_GPR07_CA53_1_CLUSTERIDAFF1_WIDTH (8U)
#define A53_GPR_GPR07_CA53_1_CLUSTERIDAFF1(x)    (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR07_CA53_1_CLUSTERIDAFF1_SHIFT)) & A53_GPR_GPR07_CA53_1_CLUSTERIDAFF1_MASK)
#define A53_GPR_GPR07_CA53_1_CLUSTERIDAFF2_MASK  (0xFF000000U)
#define A53_GPR_GPR07_CA53_1_CLUSTERIDAFF2_SHIFT (24U)
#define A53_GPR_GPR07_CA53_1_CLUSTERIDAFF2_WIDTH (8U)
#define A53_GPR_GPR07_CA53_1_CLUSTERIDAFF2(x)    (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR07_CA53_1_CLUSTERIDAFF2_SHIFT)) & A53_GPR_GPR07_CA53_1_CLUSTERIDAFF2_MASK)
/*! @} */

/*! @name GPR08 - GPR08 Register */
/*! @{ */
#define A53_GPR_GPR08_CA53_0_CORE0_WARM_RESET_STATUS_MASK (0x1U)
#define A53_GPR_GPR08_CA53_0_CORE0_WARM_RESET_STATUS_SHIFT (0U)
#define A53_GPR_GPR08_CA53_0_CORE0_WARM_RESET_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_0_CORE0_WARM_RESET_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_0_CORE0_WARM_RESET_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_0_CORE0_WARM_RESET_STATUS_MASK)
#define A53_GPR_GPR08_CA53_0_CORE1_WARM_RESET_STATUS_MASK (0x2U)
#define A53_GPR_GPR08_CA53_0_CORE1_WARM_RESET_STATUS_SHIFT (1U)
#define A53_GPR_GPR08_CA53_0_CORE1_WARM_RESET_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_0_CORE1_WARM_RESET_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_0_CORE1_WARM_RESET_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_0_CORE1_WARM_RESET_STATUS_MASK)
#define A53_GPR_GPR08_CA53_1_CORE0_WARM_RESET_STATUS_MASK (0x4U)
#define A53_GPR_GPR08_CA53_1_CORE0_WARM_RESET_STATUS_SHIFT (2U)
#define A53_GPR_GPR08_CA53_1_CORE0_WARM_RESET_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_1_CORE0_WARM_RESET_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_1_CORE0_WARM_RESET_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_1_CORE0_WARM_RESET_STATUS_MASK)
#define A53_GPR_GPR08_CA53_1_CORE1_WARM_RESET_STATUS_MASK (0x8U)
#define A53_GPR_GPR08_CA53_1_CORE1_WARM_RESET_STATUS_SHIFT (3U)
#define A53_GPR_GPR08_CA53_1_CORE1_WARM_RESET_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_1_CORE1_WARM_RESET_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_1_CORE1_WARM_RESET_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_1_CORE1_WARM_RESET_STATUS_MASK)
#define A53_GPR_GPR08_CLUSTER0_STANDBYWFIL2_STATUS_MASK (0x100U)
#define A53_GPR_GPR08_CLUSTER0_STANDBYWFIL2_STATUS_SHIFT (8U)
#define A53_GPR_GPR08_CLUSTER0_STANDBYWFIL2_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CLUSTER0_STANDBYWFIL2_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CLUSTER0_STANDBYWFIL2_STATUS_SHIFT)) & A53_GPR_GPR08_CLUSTER0_STANDBYWFIL2_STATUS_MASK)
#define A53_GPR_GPR08_CLUSTER1_STANDBYWFIL2_STATUS_MASK (0x200U)
#define A53_GPR_GPR08_CLUSTER1_STANDBYWFIL2_STATUS_SHIFT (9U)
#define A53_GPR_GPR08_CLUSTER1_STANDBYWFIL2_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CLUSTER1_STANDBYWFIL2_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CLUSTER1_STANDBYWFIL2_STATUS_SHIFT)) & A53_GPR_GPR08_CLUSTER1_STANDBYWFIL2_STATUS_MASK)
#define A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFE_STATUS_MASK (0x10000U)
#define A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFE_STATUS_SHIFT (16U)
#define A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFE_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFE_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFE_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFE_STATUS_MASK)
#define A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFE_STATUS_MASK (0x20000U)
#define A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFE_STATUS_SHIFT (17U)
#define A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFE_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFE_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFE_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFE_STATUS_MASK)
#define A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFE_STATUS_MASK (0x40000U)
#define A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFE_STATUS_SHIFT (18U)
#define A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFE_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFE_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFE_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFE_STATUS_MASK)
#define A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFE_STATUS_MASK (0x80000U)
#define A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFE_STATUS_SHIFT (19U)
#define A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFE_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFE_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFE_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFE_STATUS_MASK)
#define A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFI_STATUS_MASK (0x1000000U)
#define A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFI_STATUS_SHIFT (24U)
#define A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFI_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFI_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFI_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_0_CORE0_STANDBYWFI_STATUS_MASK)
#define A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFI_STATUS_MASK (0x2000000U)
#define A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFI_STATUS_SHIFT (25U)
#define A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFI_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFI_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFI_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_0_CORE1_STANDBYWFI_STATUS_MASK)
#define A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFI_STATUS_MASK (0x4000000U)
#define A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFI_STATUS_SHIFT (26U)
#define A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFI_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFI_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFI_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_1_CORE0_STANDBYWFI_STATUS_MASK)
#define A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFI_STATUS_MASK (0x8000000U)
#define A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFI_STATUS_SHIFT (27U)
#define A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFI_STATUS_WIDTH (1U)
#define A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFI_STATUS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFI_STATUS_SHIFT)) & A53_GPR_GPR08_CA53_1_CORE1_STANDBYWFI_STATUS_MASK)
/*! @} */

/*! @name GPR09 - GPR09 Register */
/*! @{ */
#define A53_GPR_GPR09_CA53_0_CORE0_RVBARADDR_39_32_MASK (0xFFU)
#define A53_GPR_GPR09_CA53_0_CORE0_RVBARADDR_39_32_SHIFT (0U)
#define A53_GPR_GPR09_CA53_0_CORE0_RVBARADDR_39_32_WIDTH (8U)
#define A53_GPR_GPR09_CA53_0_CORE0_RVBARADDR_39_32(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR09_CA53_0_CORE0_RVBARADDR_39_32_SHIFT)) & A53_GPR_GPR09_CA53_0_CORE0_RVBARADDR_39_32_MASK)
#define A53_GPR_GPR09_CA53_0_CORE1_RVBARADDR_39_32_MASK (0xFF00U)
#define A53_GPR_GPR09_CA53_0_CORE1_RVBARADDR_39_32_SHIFT (8U)
#define A53_GPR_GPR09_CA53_0_CORE1_RVBARADDR_39_32_WIDTH (8U)
#define A53_GPR_GPR09_CA53_0_CORE1_RVBARADDR_39_32(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR09_CA53_0_CORE1_RVBARADDR_39_32_SHIFT)) & A53_GPR_GPR09_CA53_0_CORE1_RVBARADDR_39_32_MASK)
#define A53_GPR_GPR09_CA53_1_CORE0_RVBARADDR_39_32_MASK (0xFF0000U)
#define A53_GPR_GPR09_CA53_1_CORE0_RVBARADDR_39_32_SHIFT (16U)
#define A53_GPR_GPR09_CA53_1_CORE0_RVBARADDR_39_32_WIDTH (8U)
#define A53_GPR_GPR09_CA53_1_CORE0_RVBARADDR_39_32(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR09_CA53_1_CORE0_RVBARADDR_39_32_SHIFT)) & A53_GPR_GPR09_CA53_1_CORE0_RVBARADDR_39_32_MASK)
#define A53_GPR_GPR09_CA53_1_CORE1_RVBARADDR_39_32_MASK (0xFF000000U)
#define A53_GPR_GPR09_CA53_1_CORE1_RVBARADDR_39_32_SHIFT (24U)
#define A53_GPR_GPR09_CA53_1_CORE1_RVBARADDR_39_32_WIDTH (8U)
#define A53_GPR_GPR09_CA53_1_CORE1_RVBARADDR_39_32(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR09_CA53_1_CORE1_RVBARADDR_39_32_SHIFT)) & A53_GPR_GPR09_CA53_1_CORE1_RVBARADDR_39_32_MASK)
/*! @} */

/*! @name GPR10 - GPR10 Register */
/*! @{ */
#define A53_GPR_GPR10_CA53_0_CORE0_CPUMERRSR_HIGH_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR10_CA53_0_CORE0_CPUMERRSR_HIGH_BITS_SHIFT (0U)
#define A53_GPR_GPR10_CA53_0_CORE0_CPUMERRSR_HIGH_BITS_WIDTH (32U)
#define A53_GPR_GPR10_CA53_0_CORE0_CPUMERRSR_HIGH_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR10_CA53_0_CORE0_CPUMERRSR_HIGH_BITS_SHIFT)) & A53_GPR_GPR10_CA53_0_CORE0_CPUMERRSR_HIGH_BITS_MASK)
/*! @} */

/*! @name GPR11 - GPR11 Register */
/*! @{ */
#define A53_GPR_GPR11_CA53_0_CORE0_CPUMERRSR_LOW_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR11_CA53_0_CORE0_CPUMERRSR_LOW_BITS_SHIFT (0U)
#define A53_GPR_GPR11_CA53_0_CORE0_CPUMERRSR_LOW_BITS_WIDTH (32U)
#define A53_GPR_GPR11_CA53_0_CORE0_CPUMERRSR_LOW_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR11_CA53_0_CORE0_CPUMERRSR_LOW_BITS_SHIFT)) & A53_GPR_GPR11_CA53_0_CORE0_CPUMERRSR_LOW_BITS_MASK)
/*! @} */

/*! @name GPR12 - GPR12 Register */
/*! @{ */
#define A53_GPR_GPR12_CA53_0_CORE1_CPUMERRSR_HIGH_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR12_CA53_0_CORE1_CPUMERRSR_HIGH_BITS_SHIFT (0U)
#define A53_GPR_GPR12_CA53_0_CORE1_CPUMERRSR_HIGH_BITS_WIDTH (32U)
#define A53_GPR_GPR12_CA53_0_CORE1_CPUMERRSR_HIGH_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR12_CA53_0_CORE1_CPUMERRSR_HIGH_BITS_SHIFT)) & A53_GPR_GPR12_CA53_0_CORE1_CPUMERRSR_HIGH_BITS_MASK)
/*! @} */

/*! @name GPR13 - GPR13 Register */
/*! @{ */
#define A53_GPR_GPR13_CA53_0_CORE1_CPUMERRSR_LOW_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR13_CA53_0_CORE1_CPUMERRSR_LOW_BITS_SHIFT (0U)
#define A53_GPR_GPR13_CA53_0_CORE1_CPUMERRSR_LOW_BITS_WIDTH (32U)
#define A53_GPR_GPR13_CA53_0_CORE1_CPUMERRSR_LOW_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR13_CA53_0_CORE1_CPUMERRSR_LOW_BITS_SHIFT)) & A53_GPR_GPR13_CA53_0_CORE1_CPUMERRSR_LOW_BITS_MASK)
/*! @} */

/*! @name GPR14 - GPR14 register */
/*! @{ */
#define A53_GPR_GPR14_CA53_1_CORE0_CPUMERRSR_HIGH_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR14_CA53_1_CORE0_CPUMERRSR_HIGH_BITS_SHIFT (0U)
#define A53_GPR_GPR14_CA53_1_CORE0_CPUMERRSR_HIGH_BITS_WIDTH (32U)
#define A53_GPR_GPR14_CA53_1_CORE0_CPUMERRSR_HIGH_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR14_CA53_1_CORE0_CPUMERRSR_HIGH_BITS_SHIFT)) & A53_GPR_GPR14_CA53_1_CORE0_CPUMERRSR_HIGH_BITS_MASK)
/*! @} */

/*! @name GPR15 - GPR15 Register */
/*! @{ */
#define A53_GPR_GPR15_CA53_1_CORE0_CPUMERRSR_LOW_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR15_CA53_1_CORE0_CPUMERRSR_LOW_BITS_SHIFT (0U)
#define A53_GPR_GPR15_CA53_1_CORE0_CPUMERRSR_LOW_BITS_WIDTH (32U)
#define A53_GPR_GPR15_CA53_1_CORE0_CPUMERRSR_LOW_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR15_CA53_1_CORE0_CPUMERRSR_LOW_BITS_SHIFT)) & A53_GPR_GPR15_CA53_1_CORE0_CPUMERRSR_LOW_BITS_MASK)
/*! @} */

/*! @name GPR16 - GPR16 Register */
/*! @{ */
#define A53_GPR_GPR16_CA53_1_CORE1_CPUMERRSR_HIGH_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR16_CA53_1_CORE1_CPUMERRSR_HIGH_BITS_SHIFT (0U)
#define A53_GPR_GPR16_CA53_1_CORE1_CPUMERRSR_HIGH_BITS_WIDTH (32U)
#define A53_GPR_GPR16_CA53_1_CORE1_CPUMERRSR_HIGH_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR16_CA53_1_CORE1_CPUMERRSR_HIGH_BITS_SHIFT)) & A53_GPR_GPR16_CA53_1_CORE1_CPUMERRSR_HIGH_BITS_MASK)
/*! @} */

/*! @name GPR17 - GPR17 Register */
/*! @{ */
#define A53_GPR_GPR17_CA53_1_CORE1_CPUMERRSR_LOW_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR17_CA53_1_CORE1_CPUMERRSR_LOW_BITS_SHIFT (0U)
#define A53_GPR_GPR17_CA53_1_CORE1_CPUMERRSR_LOW_BITS_WIDTH (32U)
#define A53_GPR_GPR17_CA53_1_CORE1_CPUMERRSR_LOW_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR17_CA53_1_CORE1_CPUMERRSR_LOW_BITS_SHIFT)) & A53_GPR_GPR17_CA53_1_CORE1_CPUMERRSR_LOW_BITS_MASK)
/*! @} */

/*! @name GPR18 - GPR18 Register */
/*! @{ */
#define A53_GPR_GPR18_CA53_0_L2MERRSR_HIGH_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR18_CA53_0_L2MERRSR_HIGH_BITS_SHIFT (0U)
#define A53_GPR_GPR18_CA53_0_L2MERRSR_HIGH_BITS_WIDTH (32U)
#define A53_GPR_GPR18_CA53_0_L2MERRSR_HIGH_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR18_CA53_0_L2MERRSR_HIGH_BITS_SHIFT)) & A53_GPR_GPR18_CA53_0_L2MERRSR_HIGH_BITS_MASK)
/*! @} */

/*! @name GPR19 - GPR19 Register */
/*! @{ */
#define A53_GPR_GPR19_CA53_0_L2MERRSR_LOW_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR19_CA53_0_L2MERRSR_LOW_BITS_SHIFT (0U)
#define A53_GPR_GPR19_CA53_0_L2MERRSR_LOW_BITS_WIDTH (32U)
#define A53_GPR_GPR19_CA53_0_L2MERRSR_LOW_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR19_CA53_0_L2MERRSR_LOW_BITS_SHIFT)) & A53_GPR_GPR19_CA53_0_L2MERRSR_LOW_BITS_MASK)
/*! @} */

/*! @name GPR20 - GPR20 Register */
/*! @{ */
#define A53_GPR_GPR20_CA53_1_L2MERRSR_HIGH_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR20_CA53_1_L2MERRSR_HIGH_BITS_SHIFT (0U)
#define A53_GPR_GPR20_CA53_1_L2MERRSR_HIGH_BITS_WIDTH (32U)
#define A53_GPR_GPR20_CA53_1_L2MERRSR_HIGH_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR20_CA53_1_L2MERRSR_HIGH_BITS_SHIFT)) & A53_GPR_GPR20_CA53_1_L2MERRSR_HIGH_BITS_MASK)
/*! @} */

/*! @name GPR21 - GPR21 Register */
/*! @{ */
#define A53_GPR_GPR21_CA53_1_L2MERRSR_LOW_BITS_MASK (0xFFFFFFFFU)
#define A53_GPR_GPR21_CA53_1_L2MERRSR_LOW_BITS_SHIFT (0U)
#define A53_GPR_GPR21_CA53_1_L2MERRSR_LOW_BITS_WIDTH (32U)
#define A53_GPR_GPR21_CA53_1_L2MERRSR_LOW_BITS(x) (((uint32_t)(((uint32_t)(x)) << A53_GPR_GPR21_CA53_1_L2MERRSR_LOW_BITS_SHIFT)) & A53_GPR_GPR21_CA53_1_L2MERRSR_LOW_BITS_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group A53_GPR_Register_Masks */


/*!
 * @}
 */ /* end of group A53_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_a53_cluster_gpr_H_) */
