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
 * @file S32R45_REG_PROT.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_REG_PROT
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
#if !defined(S32R45_REG_PROT_H_)  /* Check if memory map has not been already included */
#define S32R45_REG_PROT_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- REGISTER_PROTECTION Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup REGISTER_PROTECTION_Peripheral_Access_Layer REGISTER_PROTECTION Peripheral Access Layer
 * @{
 */

/** REGISTER_PROTECTION - Register Layout Typedef */
typedef struct {
  __IO uint8_t SLBRN;                              /**< Soft Lock Bit Register, offset: 0x0 */
  uint8_t RESERVED_0[2303];
  __IO uint32_t GCR;                               /**< Global Configuration Register, offset: 0x900 */
} REGISTER_PROTECTION_Type, *REGISTER_PROTECTION_MemMapPtr;

/** Number of instances of the REGISTER_PROTECTION module. */
#define REGISTER_PROTECTION_INSTANCE_COUNT       (1u)

/* REGISTER_PROTECTION - Peripheral instance base addresses */
/** Peripheral REG_PROT base address */
#define REG_PROT_BASE                            (0u)
/** Peripheral REG_PROT base pointer */
#define REG_PROT                                 ((REGISTER_PROTECTION_Type *)REG_PROT_BASE)
/** Array initializer of REGISTER_PROTECTION peripheral base addresses */
#define REGISTER_PROTECTION_BASE_ADDRS           { REG_PROT_BASE }
/** Array initializer of REGISTER_PROTECTION peripheral base pointers */
#define REGISTER_PROTECTION_BASE_PTRS            { REG_PROT }

/* ----------------------------------------------------------------------------
   -- REGISTER_PROTECTION Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup REGISTER_PROTECTION_Register_Masks REGISTER_PROTECTION Register Masks
 * @{
 */

/*! @name SLBRN - Soft Lock Bit Register */
/*! @{ */
#define REGISTER_PROTECTION_SLBRN_SLB3_MASK      (0x1U)
#define REGISTER_PROTECTION_SLBRN_SLB3_SHIFT     (0U)
#define REGISTER_PROTECTION_SLBRN_SLB3_WIDTH     (1U)
#define REGISTER_PROTECTION_SLBRN_SLB3(x)        (((uint8_t)(((uint8_t)(x)) << REGISTER_PROTECTION_SLBRN_SLB3_SHIFT)) & REGISTER_PROTECTION_SLBRN_SLB3_MASK)
#define REGISTER_PROTECTION_SLBRN_SLB2_MASK      (0x2U)
#define REGISTER_PROTECTION_SLBRN_SLB2_SHIFT     (1U)
#define REGISTER_PROTECTION_SLBRN_SLB2_WIDTH     (1U)
#define REGISTER_PROTECTION_SLBRN_SLB2(x)        (((uint8_t)(((uint8_t)(x)) << REGISTER_PROTECTION_SLBRN_SLB2_SHIFT)) & REGISTER_PROTECTION_SLBRN_SLB2_MASK)
#define REGISTER_PROTECTION_SLBRN_SLB1_MASK      (0x4U)
#define REGISTER_PROTECTION_SLBRN_SLB1_SHIFT     (2U)
#define REGISTER_PROTECTION_SLBRN_SLB1_WIDTH     (1U)
#define REGISTER_PROTECTION_SLBRN_SLB1(x)        (((uint8_t)(((uint8_t)(x)) << REGISTER_PROTECTION_SLBRN_SLB1_SHIFT)) & REGISTER_PROTECTION_SLBRN_SLB1_MASK)
#define REGISTER_PROTECTION_SLBRN_SLB0_MASK      (0x8U)
#define REGISTER_PROTECTION_SLBRN_SLB0_SHIFT     (3U)
#define REGISTER_PROTECTION_SLBRN_SLB0_WIDTH     (1U)
#define REGISTER_PROTECTION_SLBRN_SLB0(x)        (((uint8_t)(((uint8_t)(x)) << REGISTER_PROTECTION_SLBRN_SLB0_SHIFT)) & REGISTER_PROTECTION_SLBRN_SLB0_MASK)
#define REGISTER_PROTECTION_SLBRN_WE3_MASK       (0x10U)
#define REGISTER_PROTECTION_SLBRN_WE3_SHIFT      (4U)
#define REGISTER_PROTECTION_SLBRN_WE3_WIDTH      (1U)
#define REGISTER_PROTECTION_SLBRN_WE3(x)         (((uint8_t)(((uint8_t)(x)) << REGISTER_PROTECTION_SLBRN_WE3_SHIFT)) & REGISTER_PROTECTION_SLBRN_WE3_MASK)
#define REGISTER_PROTECTION_SLBRN_WE2_MASK       (0x20U)
#define REGISTER_PROTECTION_SLBRN_WE2_SHIFT      (5U)
#define REGISTER_PROTECTION_SLBRN_WE2_WIDTH      (1U)
#define REGISTER_PROTECTION_SLBRN_WE2(x)         (((uint8_t)(((uint8_t)(x)) << REGISTER_PROTECTION_SLBRN_WE2_SHIFT)) & REGISTER_PROTECTION_SLBRN_WE2_MASK)
#define REGISTER_PROTECTION_SLBRN_WE1_MASK       (0x40U)
#define REGISTER_PROTECTION_SLBRN_WE1_SHIFT      (6U)
#define REGISTER_PROTECTION_SLBRN_WE1_WIDTH      (1U)
#define REGISTER_PROTECTION_SLBRN_WE1(x)         (((uint8_t)(((uint8_t)(x)) << REGISTER_PROTECTION_SLBRN_WE1_SHIFT)) & REGISTER_PROTECTION_SLBRN_WE1_MASK)
#define REGISTER_PROTECTION_SLBRN_WE0_MASK       (0x80U)
#define REGISTER_PROTECTION_SLBRN_WE0_SHIFT      (7U)
#define REGISTER_PROTECTION_SLBRN_WE0_WIDTH      (1U)
#define REGISTER_PROTECTION_SLBRN_WE0(x)         (((uint8_t)(((uint8_t)(x)) << REGISTER_PROTECTION_SLBRN_WE0_SHIFT)) & REGISTER_PROTECTION_SLBRN_WE0_MASK)
/*! @} */

/*! @name GCR - Global Configuration Register */
/*! @{ */
#define REGISTER_PROTECTION_GCR_UAA_MASK         (0x800000U)
#define REGISTER_PROTECTION_GCR_UAA_SHIFT        (23U)
#define REGISTER_PROTECTION_GCR_UAA_WIDTH        (1U)
#define REGISTER_PROTECTION_GCR_UAA(x)           (((uint32_t)(((uint32_t)(x)) << REGISTER_PROTECTION_GCR_UAA_SHIFT)) & REGISTER_PROTECTION_GCR_UAA_MASK)
#define REGISTER_PROTECTION_GCR_HLB_MASK         (0x80000000U)
#define REGISTER_PROTECTION_GCR_HLB_SHIFT        (31U)
#define REGISTER_PROTECTION_GCR_HLB_WIDTH        (1U)
#define REGISTER_PROTECTION_GCR_HLB(x)           (((uint32_t)(((uint32_t)(x)) << REGISTER_PROTECTION_GCR_HLB_SHIFT)) & REGISTER_PROTECTION_GCR_HLB_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group REGISTER_PROTECTION_Register_Masks */

/*!
 * @}
 */ /* end of group REGISTER_PROTECTION_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_REG_PROT_H_) */
