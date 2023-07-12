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
 * @file S32R45_PMUEVENTOBSERVER.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_PMUEVENTOBSERVER
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
#if !defined(S32R45_PMUEVENTOBSERVER_H_)  /* Check if memory map has not been already included */
#define S32R45_PMUEVENTOBSERVER_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- PMUEVENTOBSERVER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMUEVENTOBSERVER_Peripheral_Access_Layer PMUEVENTOBSERVER Peripheral Access Layer
 * @{
 */

/** PMUEVENTOBSERVER - Size of Registers Arrays */
#define PMUEVENTOBSERVER_CTL_COUNT                30u
#define PMUEVENTOBSERVER_STAT_COUNT               30u

/** PMUEVENTOBSERVER - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTL[PMUEVENTOBSERVER_CTL_COUNT];   /**< PMUEVENT Observer Control Register, array offset: 0x0, array step: 0x4 */
  uint8_t RESERVED_0[8];
  __IO uint32_t STAT[PMUEVENTOBSERVER_STAT_COUNT]; /**< PMUEVENT Observer Status Register, array offset: 0x80, array step: 0x4 */
} PMUEVENTOBSERVER_Type, *PMUEVENTOBSERVER_MemMapPtr;

/** Number of instances of the PMUEVENTOBSERVER module. */
#define PMUEVENTOBSERVER_INSTANCE_COUNT          (1u)

/* PMUEVENTOBSERVER - Peripheral instance base addresses */
/** Peripheral PMUEVENTOBSERVER base address */
#define PMUEVENTOBSERVER_BASE                    (0u)
/** Peripheral PMUEVENTOBSERVER base pointer */
#define PMUEVENTOBSERVER                         ((PMUEVENTOBSERVER_Type *)PMUEVENTOBSERVER_BASE)
/** Array initializer of PMUEVENTOBSERVER peripheral base addresses */
#define PMUEVENTOBSERVER_BASE_ADDRS              { PMUEVENTOBSERVER_BASE }
/** Array initializer of PMUEVENTOBSERVER peripheral base pointers */
#define PMUEVENTOBSERVER_BASE_PTRS               { PMUEVENTOBSERVER }

/* ----------------------------------------------------------------------------
   -- PMUEVENTOBSERVER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PMUEVENTOBSERVER_Register_Masks PMUEVENTOBSERVER Register Masks
 * @{
 */

/*! @name CTL - PMUEVENT Observer Control Register */
/*! @{ */
#define PMUEVENTOBSERVER_CTL_REVTINPSEL_MASK     (0x3U)
#define PMUEVENTOBSERVER_CTL_REVTINPSEL_SHIFT    (0U)
#define PMUEVENTOBSERVER_CTL_REVTINPSEL_WIDTH    (2U)
#define PMUEVENTOBSERVER_CTL_REVTINPSEL(x)       (((uint32_t)(((uint32_t)(x)) << PMUEVENTOBSERVER_CTL_REVTINPSEL_SHIFT)) & PMUEVENTOBSERVER_CTL_REVTINPSEL_MASK)
#define PMUEVENTOBSERVER_CTL_CTRSTRTSEL_MASK     (0x30U)
#define PMUEVENTOBSERVER_CTL_CTRSTRTSEL_SHIFT    (4U)
#define PMUEVENTOBSERVER_CTL_CTRSTRTSEL_WIDTH    (2U)
#define PMUEVENTOBSERVER_CTL_CTRSTRTSEL(x)       (((uint32_t)(((uint32_t)(x)) << PMUEVENTOBSERVER_CTL_CTRSTRTSEL_SHIFT)) & PMUEVENTOBSERVER_CTL_CTRSTRTSEL_MASK)
#define PMUEVENTOBSERVER_CTL_CTRSTPSEL_MASK      (0xC0U)
#define PMUEVENTOBSERVER_CTL_CTRSTPSEL_SHIFT     (6U)
#define PMUEVENTOBSERVER_CTL_CTRSTPSEL_WIDTH     (2U)
#define PMUEVENTOBSERVER_CTL_CTRSTPSEL(x)        (((uint32_t)(((uint32_t)(x)) << PMUEVENTOBSERVER_CTL_CTRSTPSEL_SHIFT)) & PMUEVENTOBSERVER_CTL_CTRSTPSEL_MASK)
#define PMUEVENTOBSERVER_CTL_CPYCOUNT_MASK       (0x100U)
#define PMUEVENTOBSERVER_CTL_CPYCOUNT_SHIFT      (8U)
#define PMUEVENTOBSERVER_CTL_CPYCOUNT_WIDTH      (1U)
#define PMUEVENTOBSERVER_CTL_CPYCOUNT(x)         (((uint32_t)(((uint32_t)(x)) << PMUEVENTOBSERVER_CTL_CPYCOUNT_SHIFT)) & PMUEVENTOBSERVER_CTL_CPYCOUNT_MASK)
#define PMUEVENTOBSERVER_CTL_CLRCNTR_MASK        (0x200U)
#define PMUEVENTOBSERVER_CTL_CLRCNTR_SHIFT       (9U)
#define PMUEVENTOBSERVER_CTL_CLRCNTR_WIDTH       (1U)
#define PMUEVENTOBSERVER_CTL_CLRCNTR(x)          (((uint32_t)(((uint32_t)(x)) << PMUEVENTOBSERVER_CTL_CLRCNTR_SHIFT)) & PMUEVENTOBSERVER_CTL_CLRCNTR_MASK)
/*! @} */

/*! @name STAT - PMUEVENT Observer Status Register */
/*! @{ */
#define PMUEVENTOBSERVER_STAT_COUNT_VAL_MASK     (0xFFFFFFFFU)
#define PMUEVENTOBSERVER_STAT_COUNT_VAL_SHIFT    (0U)
#define PMUEVENTOBSERVER_STAT_COUNT_VAL_WIDTH    (32U)
#define PMUEVENTOBSERVER_STAT_COUNT_VAL(x)       (((uint32_t)(((uint32_t)(x)) << PMUEVENTOBSERVER_STAT_COUNT_VAL_SHIFT)) & PMUEVENTOBSERVER_STAT_COUNT_VAL_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group PMUEVENTOBSERVER_Register_Masks */

/*!
 * @}
 */ /* end of group PMUEVENTOBSERVER_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_PMUEVENTOBSERVER_H_) */
