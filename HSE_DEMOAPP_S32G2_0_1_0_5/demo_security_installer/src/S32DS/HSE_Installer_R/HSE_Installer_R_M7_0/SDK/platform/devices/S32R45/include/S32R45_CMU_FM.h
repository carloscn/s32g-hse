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
 * @file S32R45_CMU_FM.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_CMU_FM
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
#if !defined(S32R45_CMU_FM_H_)  /* Check if memory map has not been already included */
#define S32R45_CMU_FM_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CMU_FM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMU_FM_Peripheral_Access_Layer CMU_FM Peripheral Access Layer
 * @{
 */

/** CMU_FM - Register Layout Typedef */
typedef struct {
  __IO uint32_t GCR;                               /**< Global Configuration Register, offset: 0x0 */
  __IO uint32_t RCCR;                              /**< Reference Count Configuration Register, offset: 0x4 */
  __IO uint32_t SR;                                /**< Status Register, offset: 0x8 */
} CMU_FM_Type, *CMU_FM_MemMapPtr;

/** Number of instances of the CMU_FM module. */
#define CMU_FM_INSTANCE_COUNT                    (4u)

/* CMU_FM - Peripheral instance base addresses */
/** Peripheral CMU_FM_1 base address */
#define CMU_FM_1_BASE                            (0x4005C020u)
/** Peripheral CMU_FM_1 base pointer */
#define CMU_FM_1                                 ((CMU_FM_Type *)CMU_FM_1_BASE)
/** Peripheral CMU_FM_2 base address */
#define CMU_FM_2_BASE                            (0x4005C040u)
/** Peripheral CMU_FM_2 base pointer */
#define CMU_FM_2                                 ((CMU_FM_Type *)CMU_FM_2_BASE)
/** Peripheral CMU_FM_3 base address */
#define CMU_FM_3_BASE                            (0x4005C060u)
/** Peripheral CMU_FM_3 base pointer */
#define CMU_FM_3                                 ((CMU_FM_Type *)CMU_FM_3_BASE)
/** Peripheral CMU_FM_4 base address */
#define CMU_FM_4_BASE                            (0x4005C080u)
/** Peripheral CMU_FM_4 base pointer */
#define CMU_FM_4                                 ((CMU_FM_Type *)CMU_FM_4_BASE)
/** Array initializer of CMU_FM peripheral base addresses */
#define CMU_FM_BASE_ADDRS                        { CMU_FM_1_BASE, CMU_FM_2_BASE, CMU_FM_3_BASE, CMU_FM_4_BASE }
/** Array initializer of CMU_FM peripheral base pointers */
#define CMU_FM_BASE_PTRS                         { CMU_FM_1, CMU_FM_2, CMU_FM_3, CMU_FM_4 }

/* ----------------------------------------------------------------------------
   -- CMU_FM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMU_FM_Register_Masks CMU_FM Register Masks
 * @{
 */

/*! @name GCR - Global Configuration Register */
/*! @{ */
#define CMU_FM_GCR_FME_MASK                      (0x1U)
#define CMU_FM_GCR_FME_SHIFT                     (0U)
#define CMU_FM_GCR_FME_WIDTH                     (1U)
#define CMU_FM_GCR_FME(x)                        (((uint32_t)(((uint32_t)(x)) << CMU_FM_GCR_FME_SHIFT)) & CMU_FM_GCR_FME_MASK)
/*! @} */

/*! @name RCCR - Reference Count Configuration Register */
/*! @{ */
#define CMU_FM_RCCR_REF_CNT_MASK                 (0xFFFFU)
#define CMU_FM_RCCR_REF_CNT_SHIFT                (0U)
#define CMU_FM_RCCR_REF_CNT_WIDTH                (16U)
#define CMU_FM_RCCR_REF_CNT(x)                   (((uint32_t)(((uint32_t)(x)) << CMU_FM_RCCR_REF_CNT_SHIFT)) & CMU_FM_RCCR_REF_CNT_MASK)
/*! @} */

/*! @name SR - Status Register */
/*! @{ */
#define CMU_FM_SR_FMC_MASK                       (0x1U)
#define CMU_FM_SR_FMC_SHIFT                      (0U)
#define CMU_FM_SR_FMC_WIDTH                      (1U)
#define CMU_FM_SR_FMC(x)                         (((uint32_t)(((uint32_t)(x)) << CMU_FM_SR_FMC_SHIFT)) & CMU_FM_SR_FMC_MASK)
#define CMU_FM_SR_FMTO_MASK                      (0x2U)
#define CMU_FM_SR_FMTO_SHIFT                     (1U)
#define CMU_FM_SR_FMTO_WIDTH                     (1U)
#define CMU_FM_SR_FMTO(x)                        (((uint32_t)(((uint32_t)(x)) << CMU_FM_SR_FMTO_SHIFT)) & CMU_FM_SR_FMTO_MASK)
#define CMU_FM_SR_STATE_MASK                     (0xCU)
#define CMU_FM_SR_STATE_SHIFT                    (2U)
#define CMU_FM_SR_STATE_WIDTH                    (2U)
#define CMU_FM_SR_STATE(x)                       (((uint32_t)(((uint32_t)(x)) << CMU_FM_SR_STATE_SHIFT)) & CMU_FM_SR_STATE_MASK)
#define CMU_FM_SR_RS_MASK                        (0x10U)
#define CMU_FM_SR_RS_SHIFT                       (4U)
#define CMU_FM_SR_RS_WIDTH                       (1U)
#define CMU_FM_SR_RS(x)                          (((uint32_t)(((uint32_t)(x)) << CMU_FM_SR_RS_SHIFT)) & CMU_FM_SR_RS_MASK)
#define CMU_FM_SR_MET_CNT_MASK                   (0xFFFFFF00U)
#define CMU_FM_SR_MET_CNT_SHIFT                  (8U)
#define CMU_FM_SR_MET_CNT_WIDTH                  (24U)
#define CMU_FM_SR_MET_CNT(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FM_SR_MET_CNT_SHIFT)) & CMU_FM_SR_MET_CNT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CMU_FM_Register_Masks */

/*!
 * @}
 */ /* end of group CMU_FM_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_CMU_FM_H_) */
