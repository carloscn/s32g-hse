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
 * @file S32R45_MC_CGM_1.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_MC_CGM_1
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
#if !defined(S32R45_MC_CGM_1_H_)  /* Check if memory map has not been already included */
#define S32R45_MC_CGM_1_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- MC_CGM_1 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_CGM_1_Peripheral_Access_Layer MC_CGM_1 Peripheral Access Layer
 * @{
 */

/** MC_CGM_1 - Register Layout Typedef */
typedef struct {
  __IO uint32_t PCFS_SDUR;                         /**< PCFS Step Duration, offset: 0x0 */
  uint8_t RESERVED_0[36];
  __IO uint32_t PCFS_DIVC4;                        /**< PCFS Divider Change 4 Register, offset: 0x28 */
  __IO uint32_t PCFS_DIVE4;                        /**< PCFS Divider End 4 Register, offset: 0x2C */
  __IO uint32_t PCFS_DIVS4;                        /**< PCFS Divider Start 4 Register, offset: 0x30 */
  uint8_t RESERVED_1[96];
  __IO uint32_t PCFS_DIVC13;                       /**< PCFS Divider Change 13 Register, offset: 0x94 */
  __IO uint32_t PCFS_DIVE13;                       /**< PCFS Divider End 13 Register, offset: 0x98 */
  __IO uint32_t PCFS_DIVS13;                       /**< PCFS Divider Start 13 Register, offset: 0x9C */
  uint8_t RESERVED_2[608];
  __IO uint32_t MUX_0_CSC;                         /**< Clock Mux 0 Select Control Register, offset: 0x300 */
  __I  uint32_t MUX_0_CSS;                         /**< Clock Mux 0 Select Status Register, offset: 0x304 */
} MC_CGM_1_Type, *MC_CGM_1_MemMapPtr;

/** Number of instances of the MC_CGM_1 module. */
#define MC_CGM_1_INSTANCE_COUNT                  (1u)

/* MC_CGM_1 - Peripheral instance base addresses */
/** Peripheral MC_CGM_1 base address */
#define MC_CGM_1_BASE                            (0x40034000u)
/** Peripheral MC_CGM_1 base pointer */
#define MC_CGM_1                                 ((MC_CGM_1_Type *)MC_CGM_1_BASE)
/** Array initializer of MC_CGM_1 peripheral base addresses */
#define MC_CGM_1_BASE_ADDRS                      { MC_CGM_1_BASE }
/** Array initializer of MC_CGM_1 peripheral base pointers */
#define MC_CGM_1_BASE_PTRS                       { MC_CGM_1 }

/* ----------------------------------------------------------------------------
   -- MC_CGM_1 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_CGM_1_Register_Masks MC_CGM_1 Register Masks
 * @{
 */

/*! @name PCFS_SDUR - PCFS Step Duration */
/*! @{ */
#define MC_CGM_1_PCFS_SDUR_SDUR_MASK             (0xFFFFU)
#define MC_CGM_1_PCFS_SDUR_SDUR_SHIFT            (0U)
#define MC_CGM_1_PCFS_SDUR_SDUR_WIDTH            (16U)
#define MC_CGM_1_PCFS_SDUR_SDUR(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_PCFS_SDUR_SDUR_SHIFT)) & MC_CGM_1_PCFS_SDUR_SDUR_MASK)
/*! @} */

/*! @name PCFS_DIVC4 - PCFS Divider Change 4 Register */
/*! @{ */
#define MC_CGM_1_PCFS_DIVC4_RATE_MASK            (0xFFU)
#define MC_CGM_1_PCFS_DIVC4_RATE_SHIFT           (0U)
#define MC_CGM_1_PCFS_DIVC4_RATE_WIDTH           (8U)
#define MC_CGM_1_PCFS_DIVC4_RATE(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_PCFS_DIVC4_RATE_SHIFT)) & MC_CGM_1_PCFS_DIVC4_RATE_MASK)
#define MC_CGM_1_PCFS_DIVC4_INIT_MASK            (0xFFFF0000U)
#define MC_CGM_1_PCFS_DIVC4_INIT_SHIFT           (16U)
#define MC_CGM_1_PCFS_DIVC4_INIT_WIDTH           (16U)
#define MC_CGM_1_PCFS_DIVC4_INIT(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_PCFS_DIVC4_INIT_SHIFT)) & MC_CGM_1_PCFS_DIVC4_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE4 - PCFS Divider End 4 Register */
/*! @{ */
#define MC_CGM_1_PCFS_DIVE4_DIVE_MASK            (0xFFFFFU)
#define MC_CGM_1_PCFS_DIVE4_DIVE_SHIFT           (0U)
#define MC_CGM_1_PCFS_DIVE4_DIVE_WIDTH           (20U)
#define MC_CGM_1_PCFS_DIVE4_DIVE(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_PCFS_DIVE4_DIVE_SHIFT)) & MC_CGM_1_PCFS_DIVE4_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS4 - PCFS Divider Start 4 Register */
/*! @{ */
#define MC_CGM_1_PCFS_DIVS4_DIVS_MASK            (0xFFFFFU)
#define MC_CGM_1_PCFS_DIVS4_DIVS_SHIFT           (0U)
#define MC_CGM_1_PCFS_DIVS4_DIVS_WIDTH           (20U)
#define MC_CGM_1_PCFS_DIVS4_DIVS(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_PCFS_DIVS4_DIVS_SHIFT)) & MC_CGM_1_PCFS_DIVS4_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC13 - PCFS Divider Change 13 Register */
/*! @{ */
#define MC_CGM_1_PCFS_DIVC13_RATE_MASK           (0xFFU)
#define MC_CGM_1_PCFS_DIVC13_RATE_SHIFT          (0U)
#define MC_CGM_1_PCFS_DIVC13_RATE_WIDTH          (8U)
#define MC_CGM_1_PCFS_DIVC13_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_PCFS_DIVC13_RATE_SHIFT)) & MC_CGM_1_PCFS_DIVC13_RATE_MASK)
#define MC_CGM_1_PCFS_DIVC13_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_1_PCFS_DIVC13_INIT_SHIFT          (16U)
#define MC_CGM_1_PCFS_DIVC13_INIT_WIDTH          (16U)
#define MC_CGM_1_PCFS_DIVC13_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_PCFS_DIVC13_INIT_SHIFT)) & MC_CGM_1_PCFS_DIVC13_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE13 - PCFS Divider End 13 Register */
/*! @{ */
#define MC_CGM_1_PCFS_DIVE13_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_1_PCFS_DIVE13_DIVE_SHIFT          (0U)
#define MC_CGM_1_PCFS_DIVE13_DIVE_WIDTH          (20U)
#define MC_CGM_1_PCFS_DIVE13_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_PCFS_DIVE13_DIVE_SHIFT)) & MC_CGM_1_PCFS_DIVE13_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS13 - PCFS Divider Start 13 Register */
/*! @{ */
#define MC_CGM_1_PCFS_DIVS13_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_1_PCFS_DIVS13_DIVS_SHIFT          (0U)
#define MC_CGM_1_PCFS_DIVS13_DIVS_WIDTH          (20U)
#define MC_CGM_1_PCFS_DIVS13_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_PCFS_DIVS13_DIVS_SHIFT)) & MC_CGM_1_PCFS_DIVS13_DIVS_MASK)
/*! @} */

/*! @name MUX_0_CSC - Clock Mux 0 Select Control Register */
/*! @{ */
#define MC_CGM_1_MUX_0_CSC_RAMPUP_MASK           (0x1U)
#define MC_CGM_1_MUX_0_CSC_RAMPUP_SHIFT          (0U)
#define MC_CGM_1_MUX_0_CSC_RAMPUP_WIDTH          (1U)
#define MC_CGM_1_MUX_0_CSC_RAMPUP(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSC_RAMPUP_SHIFT)) & MC_CGM_1_MUX_0_CSC_RAMPUP_MASK)
#define MC_CGM_1_MUX_0_CSC_RAMPDOWN_MASK         (0x2U)
#define MC_CGM_1_MUX_0_CSC_RAMPDOWN_SHIFT        (1U)
#define MC_CGM_1_MUX_0_CSC_RAMPDOWN_WIDTH        (1U)
#define MC_CGM_1_MUX_0_CSC_RAMPDOWN(x)           (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSC_RAMPDOWN_SHIFT)) & MC_CGM_1_MUX_0_CSC_RAMPDOWN_MASK)
#define MC_CGM_1_MUX_0_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_1_MUX_0_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_1_MUX_0_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_1_MUX_0_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSC_CLK_SW_SHIFT)) & MC_CGM_1_MUX_0_CSC_CLK_SW_MASK)
#define MC_CGM_1_MUX_0_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_1_MUX_0_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_1_MUX_0_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_1_MUX_0_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSC_SAFE_SW_SHIFT)) & MC_CGM_1_MUX_0_CSC_SAFE_SW_MASK)
#define MC_CGM_1_MUX_0_CSC_SELCTL_MASK           (0xF000000U)
#define MC_CGM_1_MUX_0_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_1_MUX_0_CSC_SELCTL_WIDTH          (4U)
#define MC_CGM_1_MUX_0_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSC_SELCTL_SHIFT)) & MC_CGM_1_MUX_0_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_0_CSS - Clock Mux 0 Select Status Register */
/*! @{ */
#define MC_CGM_1_MUX_0_CSS_RAMPUP_MASK           (0x1U)
#define MC_CGM_1_MUX_0_CSS_RAMPUP_SHIFT          (0U)
#define MC_CGM_1_MUX_0_CSS_RAMPUP_WIDTH          (1U)
#define MC_CGM_1_MUX_0_CSS_RAMPUP(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSS_RAMPUP_SHIFT)) & MC_CGM_1_MUX_0_CSS_RAMPUP_MASK)
#define MC_CGM_1_MUX_0_CSS_RAMPDOWN_MASK         (0x2U)
#define MC_CGM_1_MUX_0_CSS_RAMPDOWN_SHIFT        (1U)
#define MC_CGM_1_MUX_0_CSS_RAMPDOWN_WIDTH        (1U)
#define MC_CGM_1_MUX_0_CSS_RAMPDOWN(x)           (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSS_RAMPDOWN_SHIFT)) & MC_CGM_1_MUX_0_CSS_RAMPDOWN_MASK)
#define MC_CGM_1_MUX_0_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_1_MUX_0_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_1_MUX_0_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_1_MUX_0_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSS_CLK_SW_SHIFT)) & MC_CGM_1_MUX_0_CSS_CLK_SW_MASK)
#define MC_CGM_1_MUX_0_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_1_MUX_0_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_1_MUX_0_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_1_MUX_0_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSS_SAFE_SW_SHIFT)) & MC_CGM_1_MUX_0_CSS_SAFE_SW_MASK)
#define MC_CGM_1_MUX_0_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_1_MUX_0_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_1_MUX_0_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_1_MUX_0_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSS_SWIP_SHIFT)) & MC_CGM_1_MUX_0_CSS_SWIP_MASK)
#define MC_CGM_1_MUX_0_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_1_MUX_0_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_1_MUX_0_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_1_MUX_0_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSS_SWTRG_SHIFT)) & MC_CGM_1_MUX_0_CSS_SWTRG_MASK)
#define MC_CGM_1_MUX_0_CSS_SELSTAT_MASK          (0xF000000U)
#define MC_CGM_1_MUX_0_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_1_MUX_0_CSS_SELSTAT_WIDTH         (4U)
#define MC_CGM_1_MUX_0_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_1_MUX_0_CSS_SELSTAT_SHIFT)) & MC_CGM_1_MUX_0_CSS_SELSTAT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MC_CGM_1_Register_Masks */

/*!
 * @}
 */ /* end of group MC_CGM_1_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_MC_CGM_1_H_) */
