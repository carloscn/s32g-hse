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
 * @file S32R45_MC_CGM_2.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_MC_CGM_2
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
#if !defined(S32R45_MC_CGM_2_H_)  /* Check if memory map has not been already included */
#define S32R45_MC_CGM_2_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- MC_CGM_2 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_CGM_2_Peripheral_Access_Layer MC_CGM_2 Peripheral Access Layer
 * @{
 */

/** MC_CGM_2 - Register Layout Typedef */
typedef struct {
  __IO uint32_t PCFS_SDUR;                         /**< PCFS Step Duration, offset: 0x0 */
  uint8_t RESERVED_0[732];
  __IO uint32_t PCFS_DIVC62;                       /**< PCFS Divider Change 62 Register, offset: 0x2E0 */
  __IO uint32_t PCFS_DIVE62;                       /**< PCFS Divider End 62 Register, offset: 0x2E4 */
  __IO uint32_t PCFS_DIVS62;                       /**< PCFS Divider Start 62 Register, offset: 0x2E8 */
  __IO uint32_t PCFS_DIVC63;                       /**< PCFS Divider Change 63 Register, offset: 0x2EC */
  __IO uint32_t PCFS_DIVE63;                       /**< PCFS Divider End 63 Register, offset: 0x2F0 */
  __IO uint32_t PCFS_DIVS63;                       /**< PCFS Divider Start 63 Register, offset: 0x2F4 */
  uint8_t RESERVED_1[8];
  __IO uint32_t MUX_0_CSC;                         /**< Clock Mux 0 Select Control Register, offset: 0x300 */
  __I  uint32_t MUX_0_CSS;                         /**< Clock Mux 0 Select Status Register, offset: 0x304 */
  __IO uint32_t MUX_0_DC_0;                        /**< Clock Mux 0 Divider 0 Control Register, offset: 0x308 */
  uint8_t RESERVED_2[48];
  __I  uint32_t MUX_0_DIV_UPD_STAT;                /**< CGM Mux 0 Divider Update Status Register, offset: 0x33C */
  __IO uint32_t MUX_1_CSC;                         /**< Clock Mux 1 Select Control Register, offset: 0x340 */
  __I  uint32_t MUX_1_CSS;                         /**< Clock Mux 1 Select Status Register, offset: 0x344 */
  __IO uint32_t MUX_1_DC_0;                        /**< Clock Mux 1 Divider 0 Control Register, offset: 0x348 */
  uint8_t RESERVED_3[48];
  __I  uint32_t MUX_1_DIV_UPD_STAT;                /**< CGM Mux 1 Divider Update Status Register, offset: 0x37C */
  __IO uint32_t MUX_2_CSC;                         /**< Clock Mux 2 Select Control Register, offset: 0x380 */
  __I  uint32_t MUX_2_CSS;                         /**< Clock Mux 2 Select Status Register, offset: 0x384 */
  __IO uint32_t MUX_2_DC_0;                        /**< Clock Mux 2 Divider 0 Control Register, offset: 0x388 */
  uint8_t RESERVED_4[48];
  __I  uint32_t MUX_2_DIV_UPD_STAT;                /**< CGM Mux 2 Divider Update Status Register, offset: 0x3BC */
  __IO uint32_t MUX_3_CSC;                         /**< Clock Mux 3 Select Control Register, offset: 0x3C0 */
  __I  uint32_t MUX_3_CSS;                         /**< Clock Mux 3 Select Status Register, offset: 0x3C4 */
  __IO uint32_t MUX_3_DC_0;                        /**< Clock Mux 3 Divider 0 Control Register, offset: 0x3C8 */
  uint8_t RESERVED_5[48];
  __I  uint32_t MUX_3_DIV_UPD_STAT;                /**< CGM Mux 3 Divider Update Status Register, offset: 0x3FC */
  __IO uint32_t MUX_4_CSC;                         /**< Clock Mux 4 Select Control Register, offset: 0x400 */
  __I  uint32_t MUX_4_CSS;                         /**< Clock Mux 4 Select Status Register, offset: 0x404 */
} MC_CGM_2_Type, *MC_CGM_2_MemMapPtr;

/** Number of instances of the MC_CGM_2 module. */
#define MC_CGM_2_INSTANCE_COUNT                  (1u)

/* MC_CGM_2 - Peripheral instance base addresses */
/** Peripheral MC_CGM_2 base address */
#define MC_CGM_2_BASE                            (0x440C0000u)
/** Peripheral MC_CGM_2 base pointer */
#define MC_CGM_2                                 ((MC_CGM_2_Type *)MC_CGM_2_BASE)
/** Array initializer of MC_CGM_2 peripheral base addresses */
#define MC_CGM_2_BASE_ADDRS                      { MC_CGM_2_BASE }
/** Array initializer of MC_CGM_2 peripheral base pointers */
#define MC_CGM_2_BASE_PTRS                       { MC_CGM_2 }

/* ----------------------------------------------------------------------------
   -- MC_CGM_2 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MC_CGM_2_Register_Masks MC_CGM_2 Register Masks
 * @{
 */

/*! @name PCFS_SDUR - PCFS Step Duration */
/*! @{ */
#define MC_CGM_2_PCFS_SDUR_SDUR_MASK             (0xFFFFU)
#define MC_CGM_2_PCFS_SDUR_SDUR_SHIFT            (0U)
#define MC_CGM_2_PCFS_SDUR_SDUR_WIDTH            (16U)
#define MC_CGM_2_PCFS_SDUR_SDUR(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_SDUR_SDUR_SHIFT)) & MC_CGM_2_PCFS_SDUR_SDUR_MASK)
/*! @} */

/*! @name PCFS_DIVC62 - PCFS Divider Change 62 Register */
/*! @{ */
#define MC_CGM_2_PCFS_DIVC62_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC62_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC62_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC62_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC62_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC62_RATE_MASK)
#define MC_CGM_2_PCFS_DIVC62_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC62_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC62_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC62_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC62_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC62_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE62 - PCFS Divider End 62 Register */
/*! @{ */
#define MC_CGM_2_PCFS_DIVE62_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE62_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE62_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE62_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE62_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE62_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS62 - PCFS Divider Start 62 Register */
/*! @{ */
#define MC_CGM_2_PCFS_DIVS62_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS62_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS62_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS62_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS62_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS62_DIVS_MASK)
/*! @} */

/*! @name PCFS_DIVC63 - PCFS Divider Change 63 Register */
/*! @{ */
#define MC_CGM_2_PCFS_DIVC63_RATE_MASK           (0xFFU)
#define MC_CGM_2_PCFS_DIVC63_RATE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVC63_RATE_WIDTH          (8U)
#define MC_CGM_2_PCFS_DIVC63_RATE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC63_RATE_SHIFT)) & MC_CGM_2_PCFS_DIVC63_RATE_MASK)
#define MC_CGM_2_PCFS_DIVC63_INIT_MASK           (0xFFFF0000U)
#define MC_CGM_2_PCFS_DIVC63_INIT_SHIFT          (16U)
#define MC_CGM_2_PCFS_DIVC63_INIT_WIDTH          (16U)
#define MC_CGM_2_PCFS_DIVC63_INIT(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVC63_INIT_SHIFT)) & MC_CGM_2_PCFS_DIVC63_INIT_MASK)
/*! @} */

/*! @name PCFS_DIVE63 - PCFS Divider End 63 Register */
/*! @{ */
#define MC_CGM_2_PCFS_DIVE63_DIVE_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVE63_DIVE_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVE63_DIVE_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVE63_DIVE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVE63_DIVE_SHIFT)) & MC_CGM_2_PCFS_DIVE63_DIVE_MASK)
/*! @} */

/*! @name PCFS_DIVS63 - PCFS Divider Start 63 Register */
/*! @{ */
#define MC_CGM_2_PCFS_DIVS63_DIVS_MASK           (0xFFFFFU)
#define MC_CGM_2_PCFS_DIVS63_DIVS_SHIFT          (0U)
#define MC_CGM_2_PCFS_DIVS63_DIVS_WIDTH          (20U)
#define MC_CGM_2_PCFS_DIVS63_DIVS(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_PCFS_DIVS63_DIVS_SHIFT)) & MC_CGM_2_PCFS_DIVS63_DIVS_MASK)
/*! @} */

/*! @name MUX_0_CSC - Clock Mux 0 Select Control Register */
/*! @{ */
#define MC_CGM_2_MUX_0_CSC_RAMPUP_MASK           (0x1U)
#define MC_CGM_2_MUX_0_CSC_RAMPUP_SHIFT          (0U)
#define MC_CGM_2_MUX_0_CSC_RAMPUP_WIDTH          (1U)
#define MC_CGM_2_MUX_0_CSC_RAMPUP(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_RAMPUP_SHIFT)) & MC_CGM_2_MUX_0_CSC_RAMPUP_MASK)
#define MC_CGM_2_MUX_0_CSC_RAMPDOWN_MASK         (0x2U)
#define MC_CGM_2_MUX_0_CSC_RAMPDOWN_SHIFT        (1U)
#define MC_CGM_2_MUX_0_CSC_RAMPDOWN_WIDTH        (1U)
#define MC_CGM_2_MUX_0_CSC_RAMPDOWN(x)           (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_RAMPDOWN_SHIFT)) & MC_CGM_2_MUX_0_CSC_RAMPDOWN_MASK)
#define MC_CGM_2_MUX_0_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_0_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_0_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_0_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_0_CSC_CLK_SW_MASK)
#define MC_CGM_2_MUX_0_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_0_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_0_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_0_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_0_CSC_SAFE_SW_MASK)
#define MC_CGM_2_MUX_0_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_0_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_0_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_0_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_0_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_0_CSS - Clock Mux 0 Select Status Register */
/*! @{ */
#define MC_CGM_2_MUX_0_CSS_RAMPUP_MASK           (0x1U)
#define MC_CGM_2_MUX_0_CSS_RAMPUP_SHIFT          (0U)
#define MC_CGM_2_MUX_0_CSS_RAMPUP_WIDTH          (1U)
#define MC_CGM_2_MUX_0_CSS_RAMPUP(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_RAMPUP_SHIFT)) & MC_CGM_2_MUX_0_CSS_RAMPUP_MASK)
#define MC_CGM_2_MUX_0_CSS_RAMPDOWN_MASK         (0x2U)
#define MC_CGM_2_MUX_0_CSS_RAMPDOWN_SHIFT        (1U)
#define MC_CGM_2_MUX_0_CSS_RAMPDOWN_WIDTH        (1U)
#define MC_CGM_2_MUX_0_CSS_RAMPDOWN(x)           (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_RAMPDOWN_SHIFT)) & MC_CGM_2_MUX_0_CSS_RAMPDOWN_MASK)
#define MC_CGM_2_MUX_0_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_0_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_0_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_0_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_0_CSS_CLK_SW_MASK)
#define MC_CGM_2_MUX_0_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_0_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_0_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_0_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_0_CSS_SAFE_SW_MASK)
#define MC_CGM_2_MUX_0_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_0_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_0_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_0_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_0_CSS_SWIP_MASK)
#define MC_CGM_2_MUX_0_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_0_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_0_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_0_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_0_CSS_SWTRG_MASK)
#define MC_CGM_2_MUX_0_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_0_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_0_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_0_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_0_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_0_DC_0 - Clock Mux 0 Divider 0 Control Register */
/*! @{ */
#define MC_CGM_2_MUX_0_DC_0_DIV_MASK             (0x10000U)
#define MC_CGM_2_MUX_0_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_0_DC_0_DIV_WIDTH            (1U)
#define MC_CGM_2_MUX_0_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_0_DC_0_DIV_MASK)
#define MC_CGM_2_MUX_0_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_0_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_0_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_0_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_0_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_0_DIV_UPD_STAT - CGM Mux 0 Divider Update Status Register */
/*! @{ */
#define MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_0_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_1_CSC - Clock Mux 1 Select Control Register */
/*! @{ */
#define MC_CGM_2_MUX_1_CSC_RAMPUP_MASK           (0x1U)
#define MC_CGM_2_MUX_1_CSC_RAMPUP_SHIFT          (0U)
#define MC_CGM_2_MUX_1_CSC_RAMPUP_WIDTH          (1U)
#define MC_CGM_2_MUX_1_CSC_RAMPUP(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSC_RAMPUP_SHIFT)) & MC_CGM_2_MUX_1_CSC_RAMPUP_MASK)
#define MC_CGM_2_MUX_1_CSC_RAMPDOWN_MASK         (0x2U)
#define MC_CGM_2_MUX_1_CSC_RAMPDOWN_SHIFT        (1U)
#define MC_CGM_2_MUX_1_CSC_RAMPDOWN_WIDTH        (1U)
#define MC_CGM_2_MUX_1_CSC_RAMPDOWN(x)           (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSC_RAMPDOWN_SHIFT)) & MC_CGM_2_MUX_1_CSC_RAMPDOWN_MASK)
#define MC_CGM_2_MUX_1_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_1_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_1_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_1_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_1_CSC_CLK_SW_MASK)
#define MC_CGM_2_MUX_1_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_1_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_1_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_1_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_1_CSC_SAFE_SW_MASK)
#define MC_CGM_2_MUX_1_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_1_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_1_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_1_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_1_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_1_CSS - Clock Mux 1 Select Status Register */
/*! @{ */
#define MC_CGM_2_MUX_1_CSS_RAMPUP_MASK           (0x1U)
#define MC_CGM_2_MUX_1_CSS_RAMPUP_SHIFT          (0U)
#define MC_CGM_2_MUX_1_CSS_RAMPUP_WIDTH          (1U)
#define MC_CGM_2_MUX_1_CSS_RAMPUP(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_RAMPUP_SHIFT)) & MC_CGM_2_MUX_1_CSS_RAMPUP_MASK)
#define MC_CGM_2_MUX_1_CSS_RAMPDOWN_MASK         (0x2U)
#define MC_CGM_2_MUX_1_CSS_RAMPDOWN_SHIFT        (1U)
#define MC_CGM_2_MUX_1_CSS_RAMPDOWN_WIDTH        (1U)
#define MC_CGM_2_MUX_1_CSS_RAMPDOWN(x)           (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_RAMPDOWN_SHIFT)) & MC_CGM_2_MUX_1_CSS_RAMPDOWN_MASK)
#define MC_CGM_2_MUX_1_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_1_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_1_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_1_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_1_CSS_CLK_SW_MASK)
#define MC_CGM_2_MUX_1_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_1_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_1_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_1_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_1_CSS_SAFE_SW_MASK)
#define MC_CGM_2_MUX_1_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_1_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_1_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_1_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_1_CSS_SWIP_MASK)
#define MC_CGM_2_MUX_1_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_1_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_1_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_1_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_1_CSS_SWTRG_MASK)
#define MC_CGM_2_MUX_1_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_1_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_1_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_1_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_1_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_1_DC_0 - Clock Mux 1 Divider 0 Control Register */
/*! @{ */
#define MC_CGM_2_MUX_1_DC_0_DIV_MASK             (0x10000U)
#define MC_CGM_2_MUX_1_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_1_DC_0_DIV_WIDTH            (1U)
#define MC_CGM_2_MUX_1_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_1_DC_0_DIV_MASK)
#define MC_CGM_2_MUX_1_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_1_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_1_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_1_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_1_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_1_DIV_UPD_STAT - CGM Mux 1 Divider Update Status Register */
/*! @{ */
#define MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_1_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_2_CSC - Clock Mux 2 Select Control Register */
/*! @{ */
#define MC_CGM_2_MUX_2_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_2_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_2_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_2_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_2_CSC_CLK_SW_MASK)
#define MC_CGM_2_MUX_2_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_2_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_2_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_2_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_2_CSC_SAFE_SW_MASK)
#define MC_CGM_2_MUX_2_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_2_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_2_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_2_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_2_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_2_CSS - Clock Mux 2 Select Status Register */
/*! @{ */
#define MC_CGM_2_MUX_2_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_2_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_2_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_2_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_2_CSS_CLK_SW_MASK)
#define MC_CGM_2_MUX_2_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_2_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_2_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_2_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_2_CSS_SAFE_SW_MASK)
#define MC_CGM_2_MUX_2_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_2_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_2_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_2_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_2_CSS_SWIP_MASK)
#define MC_CGM_2_MUX_2_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_2_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_2_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_2_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_2_CSS_SWTRG_MASK)
#define MC_CGM_2_MUX_2_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_2_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_2_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_2_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_2_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_2_DC_0 - Clock Mux 2 Divider 0 Control Register */
/*! @{ */
#define MC_CGM_2_MUX_2_DC_0_PHASE_MASK           (0xFFU)
#define MC_CGM_2_MUX_2_DC_0_PHASE_SHIFT          (0U)
#define MC_CGM_2_MUX_2_DC_0_PHASE_WIDTH          (8U)
#define MC_CGM_2_MUX_2_DC_0_PHASE(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DC_0_PHASE_SHIFT)) & MC_CGM_2_MUX_2_DC_0_PHASE_MASK)
#define MC_CGM_2_MUX_2_DC_0_DIV_MASK             (0xFF0000U)
#define MC_CGM_2_MUX_2_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_2_DC_0_DIV_WIDTH            (8U)
#define MC_CGM_2_MUX_2_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_2_DC_0_DIV_MASK)
#define MC_CGM_2_MUX_2_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_2_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_2_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_2_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_2_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_2_DIV_UPD_STAT - CGM Mux 2 Divider Update Status Register */
/*! @{ */
#define MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_2_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_3_CSC - Clock Mux 3 Select Control Register */
/*! @{ */
#define MC_CGM_2_MUX_3_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_3_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_3_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_3_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_3_CSC_CLK_SW_MASK)
#define MC_CGM_2_MUX_3_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_3_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_3_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_3_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_3_CSC_SAFE_SW_MASK)
#define MC_CGM_2_MUX_3_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_3_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_3_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_3_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_3_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_3_CSS - Clock Mux 3 Select Status Register */
/*! @{ */
#define MC_CGM_2_MUX_3_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_3_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_3_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_3_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_3_CSS_CLK_SW_MASK)
#define MC_CGM_2_MUX_3_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_3_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_3_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_3_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_3_CSS_SAFE_SW_MASK)
#define MC_CGM_2_MUX_3_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_3_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_3_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_3_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_3_CSS_SWIP_MASK)
#define MC_CGM_2_MUX_3_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_3_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_3_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_3_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_3_CSS_SWTRG_MASK)
#define MC_CGM_2_MUX_3_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_3_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_3_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_3_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_3_CSS_SELSTAT_MASK)
/*! @} */

/*! @name MUX_3_DC_0 - Clock Mux 3 Divider 0 Control Register */
/*! @{ */
#define MC_CGM_2_MUX_3_DC_0_DIV_MASK             (0x3F0000U)
#define MC_CGM_2_MUX_3_DC_0_DIV_SHIFT            (16U)
#define MC_CGM_2_MUX_3_DC_0_DIV_WIDTH            (6U)
#define MC_CGM_2_MUX_3_DC_0_DIV(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DC_0_DIV_SHIFT)) & MC_CGM_2_MUX_3_DC_0_DIV_MASK)
#define MC_CGM_2_MUX_3_DC_0_DE_MASK              (0x80000000U)
#define MC_CGM_2_MUX_3_DC_0_DE_SHIFT             (31U)
#define MC_CGM_2_MUX_3_DC_0_DE_WIDTH             (1U)
#define MC_CGM_2_MUX_3_DC_0_DE(x)                (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DC_0_DE_SHIFT)) & MC_CGM_2_MUX_3_DC_0_DE_MASK)
/*! @} */

/*! @name MUX_3_DIV_UPD_STAT - CGM Mux 3 Divider Update Status Register */
/*! @{ */
#define MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_MASK (0x1U)
#define MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_SHIFT (0U)
#define MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_WIDTH (1U)
#define MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT(x)  (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_SHIFT)) & MC_CGM_2_MUX_3_DIV_UPD_STAT_DIV_STAT_MASK)
/*! @} */

/*! @name MUX_4_CSC - Clock Mux 4 Select Control Register */
/*! @{ */
#define MC_CGM_2_MUX_4_CSC_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_4_CSC_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_4_CSC_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_4_CSC_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSC_CLK_SW_SHIFT)) & MC_CGM_2_MUX_4_CSC_CLK_SW_MASK)
#define MC_CGM_2_MUX_4_CSC_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_4_CSC_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_4_CSC_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_4_CSC_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSC_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_4_CSC_SAFE_SW_MASK)
#define MC_CGM_2_MUX_4_CSC_SELCTL_MASK           (0x3F000000U)
#define MC_CGM_2_MUX_4_CSC_SELCTL_SHIFT          (24U)
#define MC_CGM_2_MUX_4_CSC_SELCTL_WIDTH          (6U)
#define MC_CGM_2_MUX_4_CSC_SELCTL(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSC_SELCTL_SHIFT)) & MC_CGM_2_MUX_4_CSC_SELCTL_MASK)
/*! @} */

/*! @name MUX_4_CSS - Clock Mux 4 Select Status Register */
/*! @{ */
#define MC_CGM_2_MUX_4_CSS_CLK_SW_MASK           (0x4U)
#define MC_CGM_2_MUX_4_CSS_CLK_SW_SHIFT          (2U)
#define MC_CGM_2_MUX_4_CSS_CLK_SW_WIDTH          (1U)
#define MC_CGM_2_MUX_4_CSS_CLK_SW(x)             (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_CLK_SW_SHIFT)) & MC_CGM_2_MUX_4_CSS_CLK_SW_MASK)
#define MC_CGM_2_MUX_4_CSS_SAFE_SW_MASK          (0x8U)
#define MC_CGM_2_MUX_4_CSS_SAFE_SW_SHIFT         (3U)
#define MC_CGM_2_MUX_4_CSS_SAFE_SW_WIDTH         (1U)
#define MC_CGM_2_MUX_4_CSS_SAFE_SW(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_SAFE_SW_SHIFT)) & MC_CGM_2_MUX_4_CSS_SAFE_SW_MASK)
#define MC_CGM_2_MUX_4_CSS_SWIP_MASK             (0x10000U)
#define MC_CGM_2_MUX_4_CSS_SWIP_SHIFT            (16U)
#define MC_CGM_2_MUX_4_CSS_SWIP_WIDTH            (1U)
#define MC_CGM_2_MUX_4_CSS_SWIP(x)               (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_SWIP_SHIFT)) & MC_CGM_2_MUX_4_CSS_SWIP_MASK)
#define MC_CGM_2_MUX_4_CSS_SWTRG_MASK            (0xE0000U)
#define MC_CGM_2_MUX_4_CSS_SWTRG_SHIFT           (17U)
#define MC_CGM_2_MUX_4_CSS_SWTRG_WIDTH           (3U)
#define MC_CGM_2_MUX_4_CSS_SWTRG(x)              (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_SWTRG_SHIFT)) & MC_CGM_2_MUX_4_CSS_SWTRG_MASK)
#define MC_CGM_2_MUX_4_CSS_SELSTAT_MASK          (0x3F000000U)
#define MC_CGM_2_MUX_4_CSS_SELSTAT_SHIFT         (24U)
#define MC_CGM_2_MUX_4_CSS_SELSTAT_WIDTH         (6U)
#define MC_CGM_2_MUX_4_CSS_SELSTAT(x)            (((uint32_t)(((uint32_t)(x)) << MC_CGM_2_MUX_4_CSS_SELSTAT_SHIFT)) & MC_CGM_2_MUX_4_CSS_SELSTAT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MC_CGM_2_Register_Masks */

/*!
 * @}
 */ /* end of group MC_CGM_2_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_MC_CGM_2_H_) */
