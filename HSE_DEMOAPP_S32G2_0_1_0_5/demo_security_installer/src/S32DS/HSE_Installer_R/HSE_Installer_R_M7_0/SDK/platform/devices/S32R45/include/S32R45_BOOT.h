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
 * @file S32R45_BOOT.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_BOOT
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
#if !defined(S32R45_BOOT_H_)  /* Check if memory map has not been already included */
#define S32R45_BOOT_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- BOOT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BOOT_Peripheral_Access_Layer BOOT Peripheral Access Layer
 * @{
 */

/** BOOT - Register Layout Typedef */
typedef struct {
  __I  uint32_t BOOT_GPR_BMR1;                     /**< Boot Configuration 1, offset: 0x0 */
  __I  uint32_t BOOT_GPR_BMR2;                     /**< Boot Configuration 2, offset: 0x4 */
  uint8_t RESERVED_0[48];
  __IO uint32_t SRC_POR_CTRL_REG;                  /**< SRC POR Control, offset: 0x38 */
} BOOT_Type, *BOOT_MemMapPtr;

/** Number of instances of the BOOT module. */
#define BOOT_INSTANCE_COUNT                      (1u)

/* BOOT - Peripheral instance base addresses */
/** Peripheral BOOT_CC base address */
#define BOOT_CC_BASE                             (0x4007C900u)
/** Peripheral BOOT_CC base pointer */
#define BOOT_CC                                  ((BOOT_Type *)BOOT_CC_BASE)
/** Array initializer of BOOT peripheral base addresses */
#define BOOT_BASE_ADDRS                          { BOOT_CC_BASE }
/** Array initializer of BOOT peripheral base pointers */
#define BOOT_BASE_PTRS                           { BOOT_CC }

/* ----------------------------------------------------------------------------
   -- BOOT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup BOOT_Register_Masks BOOT Register Masks
 * @{
 */

/*! @name BOOT_GPR_BMR1 - Boot Configuration 1 */
/*! @{ */
#define BOOT_BOOT_GPR_BMR1_BOOT_CFG_MASK         (0xFFFFFFFFU)
#define BOOT_BOOT_GPR_BMR1_BOOT_CFG_SHIFT        (0U)
#define BOOT_BOOT_GPR_BMR1_BOOT_CFG_WIDTH        (32U)
#define BOOT_BOOT_GPR_BMR1_BOOT_CFG(x)           (((uint32_t)(((uint32_t)(x)) << BOOT_BOOT_GPR_BMR1_BOOT_CFG_SHIFT)) & BOOT_BOOT_GPR_BMR1_BOOT_CFG_MASK)
/*! @} */

/*! @name BOOT_GPR_BMR2 - Boot Configuration 2 */
/*! @{ */
#define BOOT_BOOT_GPR_BMR2_FUSE_SEL_MASK         (0x10U)
#define BOOT_BOOT_GPR_BMR2_FUSE_SEL_SHIFT        (4U)
#define BOOT_BOOT_GPR_BMR2_FUSE_SEL_WIDTH        (1U)
#define BOOT_BOOT_GPR_BMR2_FUSE_SEL(x)           (((uint32_t)(((uint32_t)(x)) << BOOT_BOOT_GPR_BMR2_FUSE_SEL_SHIFT)) & BOOT_BOOT_GPR_BMR2_FUSE_SEL_MASK)
#define BOOT_BOOT_GPR_BMR2_BMODE2_MASK           (0x1000000U)
#define BOOT_BOOT_GPR_BMR2_BMODE2_SHIFT          (24U)
#define BOOT_BOOT_GPR_BMR2_BMODE2_WIDTH          (1U)
#define BOOT_BOOT_GPR_BMR2_BMODE2(x)             (((uint32_t)(((uint32_t)(x)) << BOOT_BOOT_GPR_BMR2_BMODE2_SHIFT)) & BOOT_BOOT_GPR_BMR2_BMODE2_MASK)
#define BOOT_BOOT_GPR_BMR2_BMODE1_MASK           (0x2000000U)
#define BOOT_BOOT_GPR_BMR2_BMODE1_SHIFT          (25U)
#define BOOT_BOOT_GPR_BMR2_BMODE1_WIDTH          (1U)
#define BOOT_BOOT_GPR_BMR2_BMODE1(x)             (((uint32_t)(((uint32_t)(x)) << BOOT_BOOT_GPR_BMR2_BMODE1_SHIFT)) & BOOT_BOOT_GPR_BMR2_BMODE1_MASK)
/*! @} */

/*! @name SRC_POR_CTRL_REG - SRC POR Control */
/*! @{ */
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_MASK (0xFFU)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_SHIFT (0U)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_WIDTH (8U)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A(x) (((uint32_t)(((uint32_t)(x)) << BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_SHIFT)) & BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_A_MASK)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_MASK (0xFF00U)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_SHIFT (8U)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_WIDTH (8U)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B(x) (((uint32_t)(((uint32_t)(x)) << BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_SHIFT)) & BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_COUNT_B_MASK)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_MASK (0xFFFF0000U)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_SHIFT (16U)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_WIDTH (16U)
#define BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER(x) (((uint32_t)(((uint32_t)(x)) << BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_SHIFT)) & BOOT_SRC_POR_CTRL_REG_HSE_FW_ROLLBACK_MARKER_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group BOOT_Register_Masks */

/*!
 * @}
 */ /* end of group BOOT_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_BOOT_H_) */
