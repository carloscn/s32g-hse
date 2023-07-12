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
 * @file S32R45_SELFTEST_GPR.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_SELFTEST_GPR
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
#if !defined(S32R45_SELFTEST_GPR_H_)  /* Check if memory map has not been already included */
#define S32R45_SELFTEST_GPR_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SELFTEST_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SELFTEST_GPR_Peripheral_Access_Layer SELFTEST_GPR Peripheral Access Layer
 * @{
 */

/** SELFTEST_GPR - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[4];
  __IO uint32_t GENERIC_REG1;                      /**< Generic 1, offset: 0x4 */
  uint8_t RESERVED_1[12];
  __IO uint32_t LBIST_PROG_REG;                    /**< LBIST Program, offset: 0x14 */
} SELFTEST_GPR_Type, *SELFTEST_GPR_MemMapPtr;

/** Number of instances of the SELFTEST_GPR module. */
#define SELFTEST_GPR_INSTANCE_COUNT              (1u)

/* SELFTEST_GPR - Peripheral instance base addresses */
/** Peripheral SELFTEST_GPR base address */
#define SELFTEST_GPR_BASE                        (0x4001C000u)
/** Peripheral SELFTEST_GPR base pointer */
#define SELFTEST_GPR                             ((SELFTEST_GPR_Type *)SELFTEST_GPR_BASE)
/** Array initializer of SELFTEST_GPR peripheral base addresses */
#define SELFTEST_GPR_BASE_ADDRS                  { SELFTEST_GPR_BASE }
/** Array initializer of SELFTEST_GPR peripheral base pointers */
#define SELFTEST_GPR_BASE_PTRS                   { SELFTEST_GPR }

/* ----------------------------------------------------------------------------
   -- SELFTEST_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SELFTEST_GPR_Register_Masks SELFTEST_GPR Register Masks
 * @{
 */

/*! @name GENERIC_REG1 - Generic 1 */
/*! @{ */
#define SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_MASK (0xFFFFFFFFU)
#define SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_SHIFT (0U)
#define SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_WIDTH (32U)
#define SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_SHIFT)) & SELFTEST_GPR_GENERIC_REG1_hard_macro_bypass_MASK)
/*! @} */

/*! @name LBIST_PROG_REG - LBIST Program */
/*! @{ */
#define SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_MASK (0xFFU)
#define SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_SHIFT (0U)
#define SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_WIDTH (8U)
#define SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count(x) (((uint32_t)(((uint32_t)(x)) << SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_SHIFT)) & SELFTEST_GPR_LBIST_PROG_REG_LBIST_shift_count_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SELFTEST_GPR_Register_Masks */

/*!
 * @}
 */ /* end of group SELFTEST_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_SELFTEST_GPR_H_) */
