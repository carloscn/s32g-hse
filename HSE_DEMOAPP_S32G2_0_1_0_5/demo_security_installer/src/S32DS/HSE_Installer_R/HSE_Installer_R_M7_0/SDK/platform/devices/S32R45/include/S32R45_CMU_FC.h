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
**                                     2)Following name changes has 
**                                     been done in offCC_CMU
**                                     -CMU_38 to CMU_FC_38
**                                     -CMU_39 to CMU_FC_39
**                                     -CMU_40 to CMU_FC_40
**                                     -CMU_46 to CMU_FC_46
**                                     -CMU_51 to CMU_FC_51
**                                     -CMU_52 to CMU_FC_52
**                                     -CMU_53 to CMU_FC_53
**                                     -CMU_54 to CMU_FC_54
**
** ###################################################################
*/

/*!
 * @file S32R45_CMU_FC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_CMU_FC
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
#if !defined(S32R45_CMU_FC_H_)  /* Check if memory map has not been already included */
#define S32R45_CMU_FC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CMU_FC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMU_FC_Peripheral_Access_Layer CMU_FC Peripheral Access Layer
 * @{
 */

/** CMU_FC - Register Layout Typedef */
typedef struct {
  __IO uint32_t GCR;                               /**< Global Configuration Register, offset: 0x0 */
  __IO uint32_t RCCR;                              /**< Reference Count Configuration Register, offset: 0x4 */
  __IO uint32_t HTCR;                              /**< High Threshold Configuration Register, offset: 0x8 */
  __IO uint32_t LTCR;                              /**< Low Threshold Configuration Register, offset: 0xC */
  __IO uint32_t SR;                                /**< Status Register, offset: 0x10 */
  __IO uint32_t IER;                               /**< Interrupt Enable Register, offset: 0x14 */
} CMU_FC_Type, *CMU_FC_MemMapPtr;

/** Number of instances of the CMU_FC module. */
#define CMU_FC_INSTANCE_COUNT                    (28u)

/* CMU_FC - Peripheral instance base addresses */
/** Peripheral CMU_FC_0 base address */
#define CMU_FC_0_BASE                            (0x4005C000u)
/** Peripheral CMU_FC_0 base pointer */
#define CMU_FC_0                                 ((CMU_FC_Type *)CMU_FC_0_BASE)
/** Peripheral CMU_FC_5 base address */
#define CMU_FC_5_BASE                            (0x4005C0A0u)
/** Peripheral CMU_FC_5 base pointer */
#define CMU_FC_5                                 ((CMU_FC_Type *)CMU_FC_5_BASE)
/** Peripheral CMU_FC_6 base address */
#define CMU_FC_6_BASE                            (0x4005C0C0u)
/** Peripheral CMU_FC_6 base pointer */
#define CMU_FC_6                                 ((CMU_FC_Type *)CMU_FC_6_BASE)
/** Peripheral CMU_FC_7 base address */
#define CMU_FC_7_BASE                            (0x4005C0E0u)
/** Peripheral CMU_FC_7 base pointer */
#define CMU_FC_7                                 ((CMU_FC_Type *)CMU_FC_7_BASE)
/** Peripheral CMU_FC_8 base address */
#define CMU_FC_8_BASE                            (0x4005C100u)
/** Peripheral CMU_FC_8 base pointer */
#define CMU_FC_8                                 ((CMU_FC_Type *)CMU_FC_8_BASE)
/** Peripheral CMU_FC_9 base address */
#define CMU_FC_9_BASE                            (0x4005C120u)
/** Peripheral CMU_FC_9 base pointer */
#define CMU_FC_9                                 ((CMU_FC_Type *)CMU_FC_9_BASE)
/** Peripheral CMU_FC_10 base address */
#define CMU_FC_10_BASE                           (0x4005C140u)
/** Peripheral CMU_FC_10 base pointer */
#define CMU_FC_10                                ((CMU_FC_Type *)CMU_FC_10_BASE)
/** Peripheral CMU_FC_11 base address */
#define CMU_FC_11_BASE                           (0x4005C160u)
/** Peripheral CMU_FC_11 base pointer */
#define CMU_FC_11                                ((CMU_FC_Type *)CMU_FC_11_BASE)
/** Peripheral CMU_FC_12 base address */
#define CMU_FC_12_BASE                           (0x4005C180u)
/** Peripheral CMU_FC_12 base pointer */
#define CMU_FC_12                                ((CMU_FC_Type *)CMU_FC_12_BASE)
/** Peripheral CMU_FC_13 base address */
#define CMU_FC_13_BASE                           (0x4005C1A0u)
/** Peripheral CMU_FC_13 base pointer */
#define CMU_FC_13                                ((CMU_FC_Type *)CMU_FC_13_BASE)
/** Peripheral CMU_FC_14 base address */
#define CMU_FC_14_BASE                           (0x4005C1C0u)
/** Peripheral CMU_FC_14 base pointer */
#define CMU_FC_14                                ((CMU_FC_Type *)CMU_FC_14_BASE)
/** Peripheral CMU_FC_15 base address */
#define CMU_FC_15_BASE                           (0x4005C1E0u)
/** Peripheral CMU_FC_15 base pointer */
#define CMU_FC_15                                ((CMU_FC_Type *)CMU_FC_15_BASE)
/** Peripheral CMU_FC_16 base address */
#define CMU_FC_16_BASE                           (0x4005C200u)
/** Peripheral CMU_FC_16 base pointer */
#define CMU_FC_16                                ((CMU_FC_Type *)CMU_FC_16_BASE)
/** Peripheral CMU_FC_17 base address */
#define CMU_FC_17_BASE                           (0x4005C220u)
/** Peripheral CMU_FC_17 base pointer */
#define CMU_FC_17                                ((CMU_FC_Type *)CMU_FC_17_BASE)
/** Peripheral CMU_FC_18 base address */
#define CMU_FC_18_BASE                           (0x4005C240u)
/** Peripheral CMU_FC_18 base pointer */
#define CMU_FC_18                                ((CMU_FC_Type *)CMU_FC_18_BASE)
/** Peripheral CMU_FC_20 base address */
#define CMU_FC_20_BASE                           (0x4005C280u)
/** Peripheral CMU_FC_20 base pointer */
#define CMU_FC_20                                ((CMU_FC_Type *)CMU_FC_20_BASE)
/** Peripheral CMU_FC_21 base address */
#define CMU_FC_21_BASE                           (0x4005C2A0u)
/** Peripheral CMU_FC_21 base pointer */
#define CMU_FC_21                                ((CMU_FC_Type *)CMU_FC_21_BASE)
/** Peripheral CMU_FC_22 base address */
#define CMU_FC_22_BASE                           (0x4005C2C0u)
/** Peripheral CMU_FC_22 base pointer */
#define CMU_FC_22                                ((CMU_FC_Type *)CMU_FC_22_BASE)
/** Peripheral CMU_FC_27 base address */
#define CMU_FC_27_BASE                           (0x4005C360u)
/** Peripheral CMU_FC_27 base pointer */
#define CMU_FC_27                                ((CMU_FC_Type *)CMU_FC_27_BASE)
/** Peripheral CMU_FC_28 base address */
#define CMU_FC_28_BASE                           (0x4005C380u)
/** Peripheral CMU_FC_28 base pointer */
#define CMU_FC_28                                ((CMU_FC_Type *)CMU_FC_28_BASE)
/** Peripheral CMU_FC_38 base address */
#define CMU_FC_38_BASE                           (0x4005C4C0u)
/** Peripheral CMU_FC_38 base pointer */
#define CMU_FC_38                                ((CMU_FC_Type *)CMU_FC_38_BASE)
/** Peripheral CMU_FC_39 base address */
#define CMU_FC_39_BASE                           (0x4005C4E0u)
/** Peripheral CMU_FC_39 base pointer */
#define CMU_FC_39                                ((CMU_FC_Type *)CMU_FC_39_BASE)
/** Peripheral CMU_FC_40 base address */
#define CMU_FC_40_BASE                           (0x4005C500u)
/** Peripheral CMU_FC_40 base pointer */
#define CMU_FC_40                                ((CMU_FC_Type *)CMU_FC_40_BASE)
/** Peripheral CMU_FC_46 base address */
#define CMU_FC_46_BASE                           (0x4005C5C0u)
/** Peripheral CMU_FC_46 base pointer */
#define CMU_FC_46                                ((CMU_FC_Type *)CMU_FC_46_BASE)
/** Peripheral CMU_FC_51 base address */
#define CMU_FC_51_BASE                           (0x4005C660u)
/** Peripheral CMU_FC_51 base pointer */
#define CMU_FC_51                                ((CMU_FC_Type *)CMU_FC_51_BASE)
/** Peripheral CMU_FC_52 base address */
#define CMU_FC_52_BASE                           (0x4005C680u)
/** Peripheral CMU_FC_52 base pointer */
#define CMU_FC_52                                ((CMU_FC_Type *)CMU_FC_52_BASE)
/** Peripheral CMU_FC_53 base address */
#define CMU_FC_53_BASE                           (0x4005C6A0u)
/** Peripheral CMU_FC_53 base pointer */
#define CMU_FC_53                                ((CMU_FC_Type *)CMU_FC_53_BASE)
/** Peripheral CMU_FC_54 base address */
#define CMU_FC_54_BASE                           (0x4005C6C0u)
/** Peripheral CMU_FC_54 base pointer */
#define CMU_FC_54                                ((CMU_FC_Type *)CMU_FC_54_BASE)
/** Array initializer of CMU_FC peripheral base addresses */
#define CMU_FC_BASE_ADDRS                        { CMU_FC_0_BASE, CMU_FC_5_BASE, CMU_FC_6_BASE, CMU_FC_7_BASE, CMU_FC_8_BASE, CMU_FC_9_BASE, CMU_FC_10_BASE, CMU_FC_11_BASE, CMU_FC_12_BASE, CMU_FC_13_BASE, CMU_FC_14_BASE, CMU_FC_15_BASE, CMU_FC_16_BASE, CMU_FC_17_BASE, CMU_FC_18_BASE, CMU_FC_20_BASE, CMU_FC_21_BASE, CMU_FC_22_BASE, CMU_FC_27_BASE, CMU_FC_28_BASE, CMU_FC_38_BASE, CMU_FC_39_BASE, CMU_FC_40_BASE, CMU_FC_46_BASE, CMU_FC_51_BASE, CMU_FC_52_BASE, CMU_FC_53_BASE, CMU_FC_54_BASE }
/** Array initializer of CMU_FC peripheral base pointers */
#define CMU_FC_BASE_PTRS                         { CMU_FC_0, CMU_FC_5, CMU_FC_6, CMU_FC_7, CMU_FC_8, CMU_FC_9, CMU_FC_10, CMU_FC_11, CMU_FC_12, CMU_FC_13, CMU_FC_14, CMU_FC_15, CMU_FC_16, CMU_FC_17, CMU_FC_18, CMU_FC_20, CMU_FC_21, CMU_FC_22, CMU_FC_27, CMU_FC_28, CMU_FC_38, CMU_FC_39, CMU_FC_40, CMU_FC_46, CMU_FC_51, CMU_FC_52, CMU_FC_53, CMU_FC_54 }

/* ----------------------------------------------------------------------------
   -- CMU_FC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMU_FC_Register_Masks CMU_FC Register Masks
 * @{
 */

/*! @name GCR - Global Configuration Register */
/*! @{ */
#define CMU_FC_GCR_FCE_MASK                      (0x1U)
#define CMU_FC_GCR_FCE_SHIFT                     (0U)
#define CMU_FC_GCR_FCE_WIDTH                     (1U)
#define CMU_FC_GCR_FCE(x)                        (((uint32_t)(((uint32_t)(x)) << CMU_FC_GCR_FCE_SHIFT)) & CMU_FC_GCR_FCE_MASK)
/*! @} */

/*! @name RCCR - Reference Count Configuration Register */
/*! @{ */
#define CMU_FC_RCCR_REF_CNT_MASK                 (0xFFFFU)
#define CMU_FC_RCCR_REF_CNT_SHIFT                (0U)
#define CMU_FC_RCCR_REF_CNT_WIDTH                (16U)
#define CMU_FC_RCCR_REF_CNT(x)                   (((uint32_t)(((uint32_t)(x)) << CMU_FC_RCCR_REF_CNT_SHIFT)) & CMU_FC_RCCR_REF_CNT_MASK)
/*! @} */

/*! @name HTCR - High Threshold Configuration Register */
/*! @{ */
#define CMU_FC_HTCR_HFREF_MASK                   (0xFFFFFFU)
#define CMU_FC_HTCR_HFREF_SHIFT                  (0U)
#define CMU_FC_HTCR_HFREF_WIDTH                  (24U)
#define CMU_FC_HTCR_HFREF(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FC_HTCR_HFREF_SHIFT)) & CMU_FC_HTCR_HFREF_MASK)
/*! @} */

/*! @name LTCR - Low Threshold Configuration Register */
/*! @{ */
#define CMU_FC_LTCR_LFREF_MASK                   (0xFFFFFFU)
#define CMU_FC_LTCR_LFREF_SHIFT                  (0U)
#define CMU_FC_LTCR_LFREF_WIDTH                  (24U)
#define CMU_FC_LTCR_LFREF(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FC_LTCR_LFREF_SHIFT)) & CMU_FC_LTCR_LFREF_MASK)
/*! @} */

/*! @name SR - Status Register */
/*! @{ */
#define CMU_FC_SR_FLL_MASK                       (0x1U)
#define CMU_FC_SR_FLL_SHIFT                      (0U)
#define CMU_FC_SR_FLL_WIDTH                      (1U)
#define CMU_FC_SR_FLL(x)                         (((uint32_t)(((uint32_t)(x)) << CMU_FC_SR_FLL_SHIFT)) & CMU_FC_SR_FLL_MASK)
#define CMU_FC_SR_FHH_MASK                       (0x2U)
#define CMU_FC_SR_FHH_SHIFT                      (1U)
#define CMU_FC_SR_FHH_WIDTH                      (1U)
#define CMU_FC_SR_FHH(x)                         (((uint32_t)(((uint32_t)(x)) << CMU_FC_SR_FHH_SHIFT)) & CMU_FC_SR_FHH_MASK)
#define CMU_FC_SR_STATE_MASK                     (0xCU)
#define CMU_FC_SR_STATE_SHIFT                    (2U)
#define CMU_FC_SR_STATE_WIDTH                    (2U)
#define CMU_FC_SR_STATE(x)                       (((uint32_t)(((uint32_t)(x)) << CMU_FC_SR_STATE_SHIFT)) & CMU_FC_SR_STATE_MASK)
#define CMU_FC_SR_RS_MASK                        (0x10U)
#define CMU_FC_SR_RS_SHIFT                       (4U)
#define CMU_FC_SR_RS_WIDTH                       (1U)
#define CMU_FC_SR_RS(x)                          (((uint32_t)(((uint32_t)(x)) << CMU_FC_SR_RS_SHIFT)) & CMU_FC_SR_RS_MASK)
/*! @} */

/*! @name IER - Interrupt Enable Register */
/*! @{ */
#define CMU_FC_IER_FLLIE_MASK                    (0x1U)
#define CMU_FC_IER_FLLIE_SHIFT                   (0U)
#define CMU_FC_IER_FLLIE_WIDTH                   (1U)
#define CMU_FC_IER_FLLIE(x)                      (((uint32_t)(((uint32_t)(x)) << CMU_FC_IER_FLLIE_SHIFT)) & CMU_FC_IER_FLLIE_MASK)
#define CMU_FC_IER_FHHIE_MASK                    (0x2U)
#define CMU_FC_IER_FHHIE_SHIFT                   (1U)
#define CMU_FC_IER_FHHIE_WIDTH                   (1U)
#define CMU_FC_IER_FHHIE(x)                      (((uint32_t)(((uint32_t)(x)) << CMU_FC_IER_FHHIE_SHIFT)) & CMU_FC_IER_FHHIE_MASK)
#define CMU_FC_IER_FLLAIE_MASK                   (0x4U)
#define CMU_FC_IER_FLLAIE_SHIFT                  (2U)
#define CMU_FC_IER_FLLAIE_WIDTH                  (1U)
#define CMU_FC_IER_FLLAIE(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FC_IER_FLLAIE_SHIFT)) & CMU_FC_IER_FLLAIE_MASK)
#define CMU_FC_IER_FHHAIE_MASK                   (0x8U)
#define CMU_FC_IER_FHHAIE_SHIFT                  (3U)
#define CMU_FC_IER_FHHAIE_WIDTH                  (1U)
#define CMU_FC_IER_FHHAIE(x)                     (((uint32_t)(((uint32_t)(x)) << CMU_FC_IER_FHHAIE_SHIFT)) & CMU_FC_IER_FHHAIE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CMU_FC_Register_Masks */

/*!
 * @}
 */ /* end of group CMU_FC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_CMU_FC_H_) */
