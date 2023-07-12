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
 * @file S32R45_PMC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_PMC
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
#if !defined(S32R45_PMC_H_)  /* Check if memory map has not been already included */
#define S32R45_PMC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- PMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMC_Peripheral_Access_Layer PMC Peripheral Access Layer
 * @{
 */

/** PMC - Size of Registers Arrays */
#define PMC_POR_WDOG_EVENT_CAPTURE_COUNT          3u

/** PMC - Register Layout Typedef */
typedef struct {
  __IO uint32_t SSR;                               /**< Source of System Reset, offset: 0x0 */
  __IO uint32_t NCSPD_CTL;                         /**< Non-Critical Supply Presence Detector Control, offset: 0x4 */
  uint8_t RESERVED_0[4];
  __I  uint32_t NCSPD_STAT;                        /**< NCSPD Status Register, offset: 0xC */
  __IO uint32_t CSPD_EVENT_CAPTURE;                /**< CSPD Event Capture (CSPDEF), offset: 0x10 */
  __IO uint32_t NCSPD_EVENT_CAPTURE;               /**< NCSPD Event Flag (NCSPDEF), offset: 0x14 */
  uint8_t RESERVED_1[4];
  __IO uint32_t POR_WDOG_EVENT_CAPTURE[PMC_POR_WDOG_EVENT_CAPTURE_COUNT]; /**< Device Status Flag (DSF0)..Device Status Flag (DSF2), array offset: 0x1C, array step: 0x4 */
} PMC_Type, *PMC_MemMapPtr;

/** Number of instances of the PMC module. */
#define PMC_INSTANCE_COUNT                       (1u)

/* PMC - Peripheral instance base addresses */
/** Peripheral PMC base address */
#define PMC_BASE                                 (0x4008C000u)
/** Peripheral PMC base pointer */
#define PMC                                      ((PMC_Type *)PMC_BASE)
/** Array initializer of PMC peripheral base addresses */
#define PMC_BASE_ADDRS                           { PMC_BASE }
/** Array initializer of PMC peripheral base pointers */
#define PMC_BASE_PTRS                            { PMC }

/* ----------------------------------------------------------------------------
   -- PMC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMC_Register_Masks PMC Register Masks
 * @{
 */

/*! @name SSR - Source of System Reset */
/*! @{ */
#define PMC_SSR_POR_SUP_MASK                     (0x1U)
#define PMC_SSR_POR_SUP_SHIFT                    (0U)
#define PMC_SSR_POR_SUP_WIDTH                    (1U)
#define PMC_SSR_POR_SUP(x)                       (((uint32_t)(((uint32_t)(x)) << PMC_SSR_POR_SUP_SHIFT)) & PMC_SSR_POR_SUP_MASK)
#define PMC_SSR_CSPD_EVENT_MASK                  (0x2U)
#define PMC_SSR_CSPD_EVENT_SHIFT                 (1U)
#define PMC_SSR_CSPD_EVENT_WIDTH                 (1U)
#define PMC_SSR_CSPD_EVENT(x)                    (((uint32_t)(((uint32_t)(x)) << PMC_SSR_CSPD_EVENT_SHIFT)) & PMC_SSR_CSPD_EVENT_MASK)
#define PMC_SSR_POR_WDOG_EVENT_MASK              (0x4U)
#define PMC_SSR_POR_WDOG_EVENT_SHIFT             (2U)
#define PMC_SSR_POR_WDOG_EVENT_WIDTH             (1U)
#define PMC_SSR_POR_WDOG_EVENT(x)                (((uint32_t)(((uint32_t)(x)) << PMC_SSR_POR_WDOG_EVENT_SHIFT)) & PMC_SSR_POR_WDOG_EVENT_MASK)
/*! @} */

/*! @name NCSPD_CTL - Non-Critical Supply Presence Detector Control */
/*! @{ */
#define PMC_NCSPD_CTL_NCSPD_CTL0_MASK            (0x1U)
#define PMC_NCSPD_CTL_NCSPD_CTL0_SHIFT           (0U)
#define PMC_NCSPD_CTL_NCSPD_CTL0_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL0(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL0_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL0_MASK)
#define PMC_NCSPD_CTL_NCSPD_CTL1_MASK            (0x2U)
#define PMC_NCSPD_CTL_NCSPD_CTL1_SHIFT           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL1_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL1(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL1_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL1_MASK)
#define PMC_NCSPD_CTL_NCSPD_CTL2_MASK            (0x4U)
#define PMC_NCSPD_CTL_NCSPD_CTL2_SHIFT           (2U)
#define PMC_NCSPD_CTL_NCSPD_CTL2_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL2(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL2_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL2_MASK)
#define PMC_NCSPD_CTL_NCSPD_CTL3_MASK            (0x8U)
#define PMC_NCSPD_CTL_NCSPD_CTL3_SHIFT           (3U)
#define PMC_NCSPD_CTL_NCSPD_CTL3_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL3(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL3_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL3_MASK)
#define PMC_NCSPD_CTL_NCSPD_CTL4_MASK            (0x10U)
#define PMC_NCSPD_CTL_NCSPD_CTL4_SHIFT           (4U)
#define PMC_NCSPD_CTL_NCSPD_CTL4_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL4(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL4_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL4_MASK)
#define PMC_NCSPD_CTL_NCSPD_CTL5_MASK            (0x20U)
#define PMC_NCSPD_CTL_NCSPD_CTL5_SHIFT           (5U)
#define PMC_NCSPD_CTL_NCSPD_CTL5_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL5(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL5_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL5_MASK)
#define PMC_NCSPD_CTL_NCSPD_CTL6_MASK            (0x40U)
#define PMC_NCSPD_CTL_NCSPD_CTL6_SHIFT           (6U)
#define PMC_NCSPD_CTL_NCSPD_CTL6_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL6(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL6_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL6_MASK)
#define PMC_NCSPD_CTL_NCSPD_CTL7_MASK            (0x80U)
#define PMC_NCSPD_CTL_NCSPD_CTL7_SHIFT           (7U)
#define PMC_NCSPD_CTL_NCSPD_CTL7_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL7(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL7_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL7_MASK)
#define PMC_NCSPD_CTL_NCSPD_CTL8_MASK            (0x100U)
#define PMC_NCSPD_CTL_NCSPD_CTL8_SHIFT           (8U)
#define PMC_NCSPD_CTL_NCSPD_CTL8_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL8(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL8_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL8_MASK)
#define PMC_NCSPD_CTL_NCSPD_CTL9_MASK            (0x200U)
#define PMC_NCSPD_CTL_NCSPD_CTL9_SHIFT           (9U)
#define PMC_NCSPD_CTL_NCSPD_CTL9_WIDTH           (1U)
#define PMC_NCSPD_CTL_NCSPD_CTL9(x)              (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_CTL_NCSPD_CTL9_SHIFT)) & PMC_NCSPD_CTL_NCSPD_CTL9_MASK)
/*! @} */

/*! @name NCSPD_STAT - NCSPD Status Register */
/*! @{ */
#define PMC_NCSPD_STAT_NCSPD_STAT0_MASK          (0x1U)
#define PMC_NCSPD_STAT_NCSPD_STAT0_SHIFT         (0U)
#define PMC_NCSPD_STAT_NCSPD_STAT0_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT0(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT0_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT0_MASK)
#define PMC_NCSPD_STAT_NCSPD_STAT1_MASK          (0x2U)
#define PMC_NCSPD_STAT_NCSPD_STAT1_SHIFT         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT1_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT1(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT1_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT1_MASK)
#define PMC_NCSPD_STAT_NCSPD_STAT2_MASK          (0x4U)
#define PMC_NCSPD_STAT_NCSPD_STAT2_SHIFT         (2U)
#define PMC_NCSPD_STAT_NCSPD_STAT2_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT2(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT2_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT2_MASK)
#define PMC_NCSPD_STAT_NCSPD_STAT3_MASK          (0x8U)
#define PMC_NCSPD_STAT_NCSPD_STAT3_SHIFT         (3U)
#define PMC_NCSPD_STAT_NCSPD_STAT3_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT3(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT3_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT3_MASK)
#define PMC_NCSPD_STAT_NCSPD_STAT4_MASK          (0x10U)
#define PMC_NCSPD_STAT_NCSPD_STAT4_SHIFT         (4U)
#define PMC_NCSPD_STAT_NCSPD_STAT4_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT4(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT4_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT4_MASK)
#define PMC_NCSPD_STAT_NCSPD_STAT5_MASK          (0x20U)
#define PMC_NCSPD_STAT_NCSPD_STAT5_SHIFT         (5U)
#define PMC_NCSPD_STAT_NCSPD_STAT5_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT5(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT5_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT5_MASK)
#define PMC_NCSPD_STAT_NCSPD_STAT6_MASK          (0x40U)
#define PMC_NCSPD_STAT_NCSPD_STAT6_SHIFT         (6U)
#define PMC_NCSPD_STAT_NCSPD_STAT6_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT6(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT6_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT6_MASK)
#define PMC_NCSPD_STAT_NCSPD_STAT7_MASK          (0x80U)
#define PMC_NCSPD_STAT_NCSPD_STAT7_SHIFT         (7U)
#define PMC_NCSPD_STAT_NCSPD_STAT7_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT7(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT7_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT7_MASK)
#define PMC_NCSPD_STAT_NCSPD_STAT8_MASK          (0x100U)
#define PMC_NCSPD_STAT_NCSPD_STAT8_SHIFT         (8U)
#define PMC_NCSPD_STAT_NCSPD_STAT8_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT8(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT8_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT8_MASK)
#define PMC_NCSPD_STAT_NCSPD_STAT9_MASK          (0x200U)
#define PMC_NCSPD_STAT_NCSPD_STAT9_SHIFT         (9U)
#define PMC_NCSPD_STAT_NCSPD_STAT9_WIDTH         (1U)
#define PMC_NCSPD_STAT_NCSPD_STAT9(x)            (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_STAT_NCSPD_STAT9_SHIFT)) & PMC_NCSPD_STAT_NCSPD_STAT9_MASK)
/*! @} */

/*! @name CSPD_EVENT_CAPTURE - CSPD Event Capture (CSPDEF) */
/*! @{ */
#define PMC_CSPD_EVENT_CAPTURE_HVCPOREF_MASK     (0x1U)
#define PMC_CSPD_EVENT_CAPTURE_HVCPOREF_SHIFT    (0U)
#define PMC_CSPD_EVENT_CAPTURE_HVCPOREF_WIDTH    (1U)
#define PMC_CSPD_EVENT_CAPTURE_HVCPOREF(x)       (((uint32_t)(((uint32_t)(x)) << PMC_CSPD_EVENT_CAPTURE_HVCPOREF_SHIFT)) & PMC_CSPD_EVENT_CAPTURE_HVCPOREF_MASK)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_MASK (0x2U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_SHIFT (1U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_WIDTH (1U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0(x) (((uint32_t)(((uint32_t)(x)) << PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_SHIFT)) & PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE0_MASK)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_MASK (0x4U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_SHIFT (2U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_WIDTH (1U)
#define PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1(x) (((uint32_t)(((uint32_t)(x)) << PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_SHIFT)) & PMC_CSPD_EVENT_CAPTURE_CSPD_EVENT_CAPTURE1_MASK)
/*! @} */

/*! @name NCSPD_EVENT_CAPTURE - NCSPD Event Flag (NCSPDEF) */
/*! @{ */
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_MASK (0x1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_SHIFT (0U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE0_MASK)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_MASK (0x2U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_SHIFT (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE1_MASK)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_MASK (0x4U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_SHIFT (2U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE2_MASK)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_MASK (0x8U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_SHIFT (3U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE3_MASK)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_MASK (0x10U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_SHIFT (4U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE4_MASK)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_MASK (0x20U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_SHIFT (5U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE5_MASK)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_MASK (0x40U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_SHIFT (6U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE6_MASK)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_MASK (0x80U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_SHIFT (7U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE7_MASK)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_MASK (0x100U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_SHIFT (8U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE8_MASK)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_MASK (0x200U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_SHIFT (9U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_WIDTH (1U)
#define PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9(x) (((uint32_t)(((uint32_t)(x)) << PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_SHIFT)) & PMC_NCSPD_EVENT_CAPTURE_NCSPD_EVENT_CAPTURE9_MASK)
/*! @} */

/*! @name POR_WDOG_EVENT_CAPTURE - Device Status Flag (DSF0)..Device Status Flag (DSF2) */
/*! @{ */
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_MASK  (0xFFFFFFFFU)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_SHIFT (0U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_WIDTH (32U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0(x)    (((uint32_t)(((uint32_t)(x)) << PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_SHIFT)) & PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT0_MASK)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_MASK  (0xFFFFFFFFU)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_SHIFT (0U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_WIDTH (32U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1(x)    (((uint32_t)(((uint32_t)(x)) << PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_SHIFT)) & PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT1_MASK)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_MASK  (0xFFFFFFFFU)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_SHIFT (0U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_WIDTH (32U)
#define PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2(x)    (((uint32_t)(((uint32_t)(x)) << PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_SHIFT)) & PMC_POR_WDOG_EVENT_CAPTURE_DSFBIT2_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group PMC_Register_Masks */

/*!
 * @}
 */ /* end of group PMC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_PMC_H_) */
