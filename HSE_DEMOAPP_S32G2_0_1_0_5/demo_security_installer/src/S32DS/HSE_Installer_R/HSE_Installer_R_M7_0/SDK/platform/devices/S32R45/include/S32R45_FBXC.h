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
 * @file S32R45_FBXC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_FBXC
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
#if !defined(S32R45_FBXC_H_)  /* Check if memory map has not been already included */
#define S32R45_FBXC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- FBXC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FBXC_Peripheral_Access_Layer FBXC Peripheral Access Layer
 * @{
 */

/** FBXC - Register Layout Typedef */
typedef struct {
  __I  uint32_t STR;                               /**< Status Register, offset: 0x0 */
  uint8_t RESERVED_0[8];
  __IO uint32_t CTL;                               /**< Control Register, offset: 0xC */
} FBXC_Type, *FBXC_MemMapPtr;

/** Number of instances of the FBXC module. */
#define FBXC_INSTANCE_COUNT                      (1u)

/* FBXC - Peripheral instance base addresses */
/** Peripheral FBXC base address */
#define FBXC_BASE                                (0x400A4100u)
/** Peripheral FBXC base pointer */
#define FBXC                                     ((FBXC_Type *)FBXC_BASE)
/** Array initializer of FBXC peripheral base addresses */
#define FBXC_BASE_ADDRS                          { FBXC_BASE }
/** Array initializer of FBXC peripheral base pointers */
#define FBXC_BASE_PTRS                           { FBXC }

/* ----------------------------------------------------------------------------
   -- FBXC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FBXC_Register_Masks FBXC Register Masks
 * @{
 */

/*! @name STR - Status Register */
/*! @{ */
#define FBXC_STR_REP_ERR_MASK                    (0x1U)
#define FBXC_STR_REP_ERR_SHIFT                   (0U)
#define FBXC_STR_REP_ERR_WIDTH                   (1U)
#define FBXC_STR_REP_ERR(x)                      (((uint32_t)(((uint32_t)(x)) << FBXC_STR_REP_ERR_SHIFT)) & FBXC_STR_REP_ERR_MASK)
#define FBXC_STR_DRW_MASK                        (0x2U)
#define FBXC_STR_DRW_SHIFT                       (1U)
#define FBXC_STR_DRW_WIDTH                       (1U)
#define FBXC_STR_DRW(x)                          (((uint32_t)(((uint32_t)(x)) << FBXC_STR_DRW_SHIFT)) & FBXC_STR_DRW_MASK)
/*! @} */

/*! @name CTL - Control Register */
/*! @{ */
#define FBXC_CTL_MR_MASK                         (0x1U)
#define FBXC_CTL_MR_SHIFT                        (0U)
#define FBXC_CTL_MR_WIDTH                        (1U)
#define FBXC_CTL_MR(x)                           (((uint32_t)(((uint32_t)(x)) << FBXC_CTL_MR_SHIFT)) & FBXC_CTL_MR_MASK)
#define FBXC_CTL_RSB_MASK                        (0x2U)
#define FBXC_CTL_RSB_SHIFT                       (1U)
#define FBXC_CTL_RSB_WIDTH                       (1U)
#define FBXC_CTL_RSB(x)                          (((uint32_t)(((uint32_t)(x)) << FBXC_CTL_RSB_SHIFT)) & FBXC_CTL_RSB_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group FBXC_Register_Masks */

/*!
 * @}
 */ /* end of group FBXC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_FBXC_H_) */
