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
 * @file S32R45_CAIU.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_CAIU
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
#if !defined(S32R45_CAIU_H_)  /* Check if memory map has not been already included */
#define S32R45_CAIU_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CAIU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAIU_Peripheral_Access_Layer CAIU Peripheral Access Layer
 * @{
 */

/** CAIU - Register Layout Typedef */
typedef struct {
  __IO uint32_t CAIUTC;                            /**< CAIU Transaction Control, offset: 0x0 */
  __I  uint32_t CAIUTA;                            /**< CAIU Transaction Activity, offset: 0x4 */
  uint8_t RESERVED_0[248];
  __IO uint32_t CAIUCEC;                           /**< CAIU Correctable Error Control, offset: 0x100 */
  __IO uint32_t CAIUCES;                           /**< CAIU Correctable Error Status, offset: 0x104 */
  __IO uint32_t CAIUCELR0;                         /**< CAIU Correctable Error Location Register 0, offset: 0x108 */
  __IO uint32_t CAIUCELR1;                         /**< CAIU Correctable Error Location Register 1, offset: 0x10C */
  uint8_t RESERVED_1[20];
  __IO uint32_t CAIUCESA;                          /**< CAIU Correctable Error Status Alias, offset: 0x124 */
  uint8_t RESERVED_2[24];
  __IO uint32_t CAIUUEC;                           /**< CAIU Uncorrectable Error Control, offset: 0x140 */
  __IO uint32_t CAIUUES;                           /**< CAIU Uncorrectable Error Status, offset: 0x144 */
  __IO uint32_t CAIUUELR0;                         /**< CAIU Uncorrectable Error Location Register 0, offset: 0x148 */
  __IO uint32_t CAIUUELR1;                         /**< CAIU Uncorrectable Error Location Register 1, offset: 0x14C */
  uint8_t RESERVED_3[20];
  __IO uint32_t CAIUUESA;                          /**< CAIU Uncorrectable Error Status Alias, offset: 0x164 */
  uint8_t RESERVED_4[3732];
  __I  uint32_t CAIUID;                            /**< CAIU Identification, offset: 0xFFC */
} CAIU_Type, *CAIU_MemMapPtr;

/** Number of instances of the CAIU module. */
#define CAIU_INSTANCE_COUNT                      (2u)

/* CAIU - Peripheral instance base addresses */
/** Peripheral CAIU0 base address */
#define CAIU0_BASE                               (0x50400000u)
/** Peripheral CAIU0 base pointer */
#define CAIU0                                    ((CAIU_Type *)CAIU0_BASE)
/** Peripheral CAIU1 base address */
#define CAIU1_BASE                               (0x50401000u)
/** Peripheral CAIU1 base pointer */
#define CAIU1                                    ((CAIU_Type *)CAIU1_BASE)
/** Array initializer of CAIU peripheral base addresses */
#define CAIU_BASE_ADDRS                          { CAIU0_BASE, CAIU1_BASE }
/** Array initializer of CAIU peripheral base pointers */
#define CAIU_BASE_PTRS                           { CAIU0, CAIU1 }

/* ----------------------------------------------------------------------------
   -- CAIU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CAIU_Register_Masks CAIU Register Masks
 * @{
 */

/*! @name CAIUTC - CAIU Transaction Control */
/*! @{ */
#define CAIU_CAIUTC_TRANSEN_MASK                 (0x1U)
#define CAIU_CAIUTC_TRANSEN_SHIFT                (0U)
#define CAIU_CAIUTC_TRANSEN_WIDTH                (1U)
#define CAIU_CAIUTC_TRANSEN(x)                   (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUTC_TRANSEN_SHIFT)) & CAIU_CAIUTC_TRANSEN_MASK)
#define CAIU_CAIUTC_ISOLEN_MASK                  (0x2U)
#define CAIU_CAIUTC_ISOLEN_SHIFT                 (1U)
#define CAIU_CAIUTC_ISOLEN_WIDTH                 (1U)
#define CAIU_CAIUTC_ISOLEN(x)                    (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUTC_ISOLEN_SHIFT)) & CAIU_CAIUTC_ISOLEN_MASK)
/*! @} */

/*! @name CAIUTA - CAIU Transaction Activity */
/*! @{ */
#define CAIU_CAIUTA_TRANSACTV_MASK               (0x1U)
#define CAIU_CAIUTA_TRANSACTV_SHIFT              (0U)
#define CAIU_CAIUTA_TRANSACTV_WIDTH              (1U)
#define CAIU_CAIUTA_TRANSACTV(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUTA_TRANSACTV_SHIFT)) & CAIU_CAIUTA_TRANSACTV_MASK)
#define CAIU_CAIUTA_SNPACTV_MASK                 (0x2U)
#define CAIU_CAIUTA_SNPACTV_SHIFT                (1U)
#define CAIU_CAIUTA_SNPACTV_WIDTH                (1U)
#define CAIU_CAIUTA_SNPACTV(x)                   (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUTA_SNPACTV_SHIFT)) & CAIU_CAIUTA_SNPACTV_MASK)
#define CAIU_CAIUTA_COHACTV_MASK                 (0x4U)
#define CAIU_CAIUTA_COHACTV_SHIFT                (2U)
#define CAIU_CAIUTA_COHACTV_WIDTH                (1U)
#define CAIU_CAIUTA_COHACTV(x)                   (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUTA_COHACTV_SHIFT)) & CAIU_CAIUTA_COHACTV_MASK)
/*! @} */

/*! @name CAIUCEC - CAIU Correctable Error Control */
/*! @{ */
#define CAIU_CAIUCEC_ERRDETEN_MASK               (0x1U)
#define CAIU_CAIUCEC_ERRDETEN_SHIFT              (0U)
#define CAIU_CAIUCEC_ERRDETEN_WIDTH              (1U)
#define CAIU_CAIUCEC_ERRDETEN(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCEC_ERRDETEN_SHIFT)) & CAIU_CAIUCEC_ERRDETEN_MASK)
#define CAIU_CAIUCEC_ERRINTEN_MASK               (0x2U)
#define CAIU_CAIUCEC_ERRINTEN_SHIFT              (1U)
#define CAIU_CAIUCEC_ERRINTEN_WIDTH              (1U)
#define CAIU_CAIUCEC_ERRINTEN(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCEC_ERRINTEN_SHIFT)) & CAIU_CAIUCEC_ERRINTEN_MASK)
#define CAIU_CAIUCEC_ERRTHRESHOLD_MASK           (0xFF0U)
#define CAIU_CAIUCEC_ERRTHRESHOLD_SHIFT          (4U)
#define CAIU_CAIUCEC_ERRTHRESHOLD_WIDTH          (8U)
#define CAIU_CAIUCEC_ERRTHRESHOLD(x)             (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCEC_ERRTHRESHOLD_SHIFT)) & CAIU_CAIUCEC_ERRTHRESHOLD_MASK)
/*! @} */

/*! @name CAIUCES - CAIU Correctable Error Status */
/*! @{ */
#define CAIU_CAIUCES_ERRVLD_MASK                 (0x1U)
#define CAIU_CAIUCES_ERRVLD_SHIFT                (0U)
#define CAIU_CAIUCES_ERRVLD_WIDTH                (1U)
#define CAIU_CAIUCES_ERRVLD(x)                   (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCES_ERRVLD_SHIFT)) & CAIU_CAIUCES_ERRVLD_MASK)
#define CAIU_CAIUCES_ERROVF_MASK                 (0x2U)
#define CAIU_CAIUCES_ERROVF_SHIFT                (1U)
#define CAIU_CAIUCES_ERROVF_WIDTH                (1U)
#define CAIU_CAIUCES_ERROVF(x)                   (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCES_ERROVF_SHIFT)) & CAIU_CAIUCES_ERROVF_MASK)
#define CAIU_CAIUCES_ERRCOUNT_MASK               (0xFF0U)
#define CAIU_CAIUCES_ERRCOUNT_SHIFT              (4U)
#define CAIU_CAIUCES_ERRCOUNT_WIDTH              (8U)
#define CAIU_CAIUCES_ERRCOUNT(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCES_ERRCOUNT_SHIFT)) & CAIU_CAIUCES_ERRCOUNT_MASK)
#define CAIU_CAIUCES_ERRTYPE_MASK                (0xF000U)
#define CAIU_CAIUCES_ERRTYPE_SHIFT               (12U)
#define CAIU_CAIUCES_ERRTYPE_WIDTH               (4U)
#define CAIU_CAIUCES_ERRTYPE(x)                  (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCES_ERRTYPE_SHIFT)) & CAIU_CAIUCES_ERRTYPE_MASK)
#define CAIU_CAIUCES_ERRINFO_MASK                (0xFF0000U)
#define CAIU_CAIUCES_ERRINFO_SHIFT               (16U)
#define CAIU_CAIUCES_ERRINFO_WIDTH               (8U)
#define CAIU_CAIUCES_ERRINFO(x)                  (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCES_ERRINFO_SHIFT)) & CAIU_CAIUCES_ERRINFO_MASK)
/*! @} */

/*! @name CAIUCELR0 - CAIU Correctable Error Location Register 0 */
/*! @{ */
#define CAIU_CAIUCELR0_ERRENTRY_MASK             (0xFFFFFU)
#define CAIU_CAIUCELR0_ERRENTRY_SHIFT            (0U)
#define CAIU_CAIUCELR0_ERRENTRY_WIDTH            (20U)
#define CAIU_CAIUCELR0_ERRENTRY(x)               (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCELR0_ERRENTRY_SHIFT)) & CAIU_CAIUCELR0_ERRENTRY_MASK)
#define CAIU_CAIUCELR0_ERRWAY_MASK               (0x3F00000U)
#define CAIU_CAIUCELR0_ERRWAY_SHIFT              (20U)
#define CAIU_CAIUCELR0_ERRWAY_WIDTH              (6U)
#define CAIU_CAIUCELR0_ERRWAY(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCELR0_ERRWAY_SHIFT)) & CAIU_CAIUCELR0_ERRWAY_MASK)
#define CAIU_CAIUCELR0_ERRWORD_MASK              (0xFC000000U)
#define CAIU_CAIUCELR0_ERRWORD_SHIFT             (26U)
#define CAIU_CAIUCELR0_ERRWORD_WIDTH             (6U)
#define CAIU_CAIUCELR0_ERRWORD(x)                (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCELR0_ERRWORD_SHIFT)) & CAIU_CAIUCELR0_ERRWORD_MASK)
/*! @} */

/*! @name CAIUCELR1 - CAIU Correctable Error Location Register 1 */
/*! @{ */
#define CAIU_CAIUCELR1_ERRADDR_MASK              (0xFFFU)
#define CAIU_CAIUCELR1_ERRADDR_SHIFT             (0U)
#define CAIU_CAIUCELR1_ERRADDR_WIDTH             (12U)
#define CAIU_CAIUCELR1_ERRADDR(x)                (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCELR1_ERRADDR_SHIFT)) & CAIU_CAIUCELR1_ERRADDR_MASK)
/*! @} */

/*! @name CAIUCESA - CAIU Correctable Error Status Alias */
/*! @{ */
#define CAIU_CAIUCESA_ERRVLD_MASK                (0x1U)
#define CAIU_CAIUCESA_ERRVLD_SHIFT               (0U)
#define CAIU_CAIUCESA_ERRVLD_WIDTH               (1U)
#define CAIU_CAIUCESA_ERRVLD(x)                  (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCESA_ERRVLD_SHIFT)) & CAIU_CAIUCESA_ERRVLD_MASK)
#define CAIU_CAIUCESA_ERROVF_MASK                (0x2U)
#define CAIU_CAIUCESA_ERROVF_SHIFT               (1U)
#define CAIU_CAIUCESA_ERROVF_WIDTH               (1U)
#define CAIU_CAIUCESA_ERROVF(x)                  (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCESA_ERROVF_SHIFT)) & CAIU_CAIUCESA_ERROVF_MASK)
#define CAIU_CAIUCESA_ERRCOUNT_MASK              (0xFF0U)
#define CAIU_CAIUCESA_ERRCOUNT_SHIFT             (4U)
#define CAIU_CAIUCESA_ERRCOUNT_WIDTH             (8U)
#define CAIU_CAIUCESA_ERRCOUNT(x)                (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCESA_ERRCOUNT_SHIFT)) & CAIU_CAIUCESA_ERRCOUNT_MASK)
#define CAIU_CAIUCESA_ERRTYPE_MASK               (0xF000U)
#define CAIU_CAIUCESA_ERRTYPE_SHIFT              (12U)
#define CAIU_CAIUCESA_ERRTYPE_WIDTH              (4U)
#define CAIU_CAIUCESA_ERRTYPE(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCESA_ERRTYPE_SHIFT)) & CAIU_CAIUCESA_ERRTYPE_MASK)
#define CAIU_CAIUCESA_ERRINFO_MASK               (0xFF0000U)
#define CAIU_CAIUCESA_ERRINFO_SHIFT              (16U)
#define CAIU_CAIUCESA_ERRINFO_WIDTH              (8U)
#define CAIU_CAIUCESA_ERRINFO(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUCESA_ERRINFO_SHIFT)) & CAIU_CAIUCESA_ERRINFO_MASK)
/*! @} */

/*! @name CAIUUEC - CAIU Uncorrectable Error Control */
/*! @{ */
#define CAIU_CAIUUEC_ERRDETEN_MASK               (0x1U)
#define CAIU_CAIUUEC_ERRDETEN_SHIFT              (0U)
#define CAIU_CAIUUEC_ERRDETEN_WIDTH              (1U)
#define CAIU_CAIUUEC_ERRDETEN(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUEC_ERRDETEN_SHIFT)) & CAIU_CAIUUEC_ERRDETEN_MASK)
#define CAIU_CAIUUEC_ERRINTEN_MASK               (0x2U)
#define CAIU_CAIUUEC_ERRINTEN_SHIFT              (1U)
#define CAIU_CAIUUEC_ERRINTEN_WIDTH              (1U)
#define CAIU_CAIUUEC_ERRINTEN(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUEC_ERRINTEN_SHIFT)) & CAIU_CAIUUEC_ERRINTEN_MASK)
#define CAIU_CAIUUEC_ERRTHRESHOLD_MASK           (0xFF0U)
#define CAIU_CAIUUEC_ERRTHRESHOLD_SHIFT          (4U)
#define CAIU_CAIUUEC_ERRTHRESHOLD_WIDTH          (8U)
#define CAIU_CAIUUEC_ERRTHRESHOLD(x)             (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUEC_ERRTHRESHOLD_SHIFT)) & CAIU_CAIUUEC_ERRTHRESHOLD_MASK)
/*! @} */

/*! @name CAIUUES - CAIU Uncorrectable Error Status */
/*! @{ */
#define CAIU_CAIUUES_ERRVLD_MASK                 (0x1U)
#define CAIU_CAIUUES_ERRVLD_SHIFT                (0U)
#define CAIU_CAIUUES_ERRVLD_WIDTH                (1U)
#define CAIU_CAIUUES_ERRVLD(x)                   (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUES_ERRVLD_SHIFT)) & CAIU_CAIUUES_ERRVLD_MASK)
#define CAIU_CAIUUES_ERROVF_MASK                 (0x2U)
#define CAIU_CAIUUES_ERROVF_SHIFT                (1U)
#define CAIU_CAIUUES_ERROVF_WIDTH                (1U)
#define CAIU_CAIUUES_ERROVF(x)                   (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUES_ERROVF_SHIFT)) & CAIU_CAIUUES_ERROVF_MASK)
#define CAIU_CAIUUES_ERRCOUNT_MASK               (0xFF0U)
#define CAIU_CAIUUES_ERRCOUNT_SHIFT              (4U)
#define CAIU_CAIUUES_ERRCOUNT_WIDTH              (8U)
#define CAIU_CAIUUES_ERRCOUNT(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUES_ERRCOUNT_SHIFT)) & CAIU_CAIUUES_ERRCOUNT_MASK)
#define CAIU_CAIUUES_ERRTYPE_MASK                (0xF000U)
#define CAIU_CAIUUES_ERRTYPE_SHIFT               (12U)
#define CAIU_CAIUUES_ERRTYPE_WIDTH               (4U)
#define CAIU_CAIUUES_ERRTYPE(x)                  (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUES_ERRTYPE_SHIFT)) & CAIU_CAIUUES_ERRTYPE_MASK)
#define CAIU_CAIUUES_ERRINFO_MASK                (0xFF0000U)
#define CAIU_CAIUUES_ERRINFO_SHIFT               (16U)
#define CAIU_CAIUUES_ERRINFO_WIDTH               (8U)
#define CAIU_CAIUUES_ERRINFO(x)                  (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUES_ERRINFO_SHIFT)) & CAIU_CAIUUES_ERRINFO_MASK)
/*! @} */

/*! @name CAIUUELR0 - CAIU Uncorrectable Error Location Register 0 */
/*! @{ */
#define CAIU_CAIUUELR0_ERRENTRY_MASK             (0xFFFFFU)
#define CAIU_CAIUUELR0_ERRENTRY_SHIFT            (0U)
#define CAIU_CAIUUELR0_ERRENTRY_WIDTH            (20U)
#define CAIU_CAIUUELR0_ERRENTRY(x)               (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUELR0_ERRENTRY_SHIFT)) & CAIU_CAIUUELR0_ERRENTRY_MASK)
#define CAIU_CAIUUELR0_ERRWAY_MASK               (0x3F00000U)
#define CAIU_CAIUUELR0_ERRWAY_SHIFT              (20U)
#define CAIU_CAIUUELR0_ERRWAY_WIDTH              (6U)
#define CAIU_CAIUUELR0_ERRWAY(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUELR0_ERRWAY_SHIFT)) & CAIU_CAIUUELR0_ERRWAY_MASK)
#define CAIU_CAIUUELR0_ERRWORD_MASK              (0xFC000000U)
#define CAIU_CAIUUELR0_ERRWORD_SHIFT             (26U)
#define CAIU_CAIUUELR0_ERRWORD_WIDTH             (6U)
#define CAIU_CAIUUELR0_ERRWORD(x)                (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUELR0_ERRWORD_SHIFT)) & CAIU_CAIUUELR0_ERRWORD_MASK)
/*! @} */

/*! @name CAIUUELR1 - CAIU Uncorrectable Error Location Register 1 */
/*! @{ */
#define CAIU_CAIUUELR1_ERRADDR_MASK              (0xFFFU)
#define CAIU_CAIUUELR1_ERRADDR_SHIFT             (0U)
#define CAIU_CAIUUELR1_ERRADDR_WIDTH             (12U)
#define CAIU_CAIUUELR1_ERRADDR(x)                (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUELR1_ERRADDR_SHIFT)) & CAIU_CAIUUELR1_ERRADDR_MASK)
/*! @} */

/*! @name CAIUUESA - CAIU Uncorrectable Error Status Alias */
/*! @{ */
#define CAIU_CAIUUESA_ERRVLD_MASK                (0x1U)
#define CAIU_CAIUUESA_ERRVLD_SHIFT               (0U)
#define CAIU_CAIUUESA_ERRVLD_WIDTH               (1U)
#define CAIU_CAIUUESA_ERRVLD(x)                  (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUESA_ERRVLD_SHIFT)) & CAIU_CAIUUESA_ERRVLD_MASK)
#define CAIU_CAIUUESA_ERROVF_MASK                (0x2U)
#define CAIU_CAIUUESA_ERROVF_SHIFT               (1U)
#define CAIU_CAIUUESA_ERROVF_WIDTH               (1U)
#define CAIU_CAIUUESA_ERROVF(x)                  (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUESA_ERROVF_SHIFT)) & CAIU_CAIUUESA_ERROVF_MASK)
#define CAIU_CAIUUESA_ERRCOUNT_MASK              (0xFF0U)
#define CAIU_CAIUUESA_ERRCOUNT_SHIFT             (4U)
#define CAIU_CAIUUESA_ERRCOUNT_WIDTH             (8U)
#define CAIU_CAIUUESA_ERRCOUNT(x)                (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUESA_ERRCOUNT_SHIFT)) & CAIU_CAIUUESA_ERRCOUNT_MASK)
#define CAIU_CAIUUESA_ERRTYPE_MASK               (0xF000U)
#define CAIU_CAIUUESA_ERRTYPE_SHIFT              (12U)
#define CAIU_CAIUUESA_ERRTYPE_WIDTH              (4U)
#define CAIU_CAIUUESA_ERRTYPE(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUESA_ERRTYPE_SHIFT)) & CAIU_CAIUUESA_ERRTYPE_MASK)
#define CAIU_CAIUUESA_ERRINFO_MASK               (0xFF0000U)
#define CAIU_CAIUUESA_ERRINFO_SHIFT              (16U)
#define CAIU_CAIUUESA_ERRINFO_WIDTH              (8U)
#define CAIU_CAIUUESA_ERRINFO(x)                 (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUUESA_ERRINFO_SHIFT)) & CAIU_CAIUUESA_ERRINFO_MASK)
/*! @} */

/*! @name CAIUID - CAIU Identification */
/*! @{ */
#define CAIU_CAIUID_IMPLVER_MASK                 (0xFFU)
#define CAIU_CAIUID_IMPLVER_SHIFT                (0U)
#define CAIU_CAIUID_IMPLVER_WIDTH                (8U)
#define CAIU_CAIUID_IMPLVER(x)                   (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUID_IMPLVER_SHIFT)) & CAIU_CAIUID_IMPLVER_MASK)
#define CAIU_CAIUID_CAIID_MASK                   (0x7F00U)
#define CAIU_CAIUID_CAIID_SHIFT                  (8U)
#define CAIU_CAIUID_CAIID_WIDTH                  (7U)
#define CAIU_CAIUID_CAIID(x)                     (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUID_CAIID_SHIFT)) & CAIU_CAIUID_CAIID_MASK)
#define CAIU_CAIUID_CA_MASK                      (0x8000U)
#define CAIU_CAIUID_CA_SHIFT                     (15U)
#define CAIU_CAIUID_CA_WIDTH                     (1U)
#define CAIU_CAIUID_CA(x)                        (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUID_CA_SHIFT)) & CAIU_CAIUID_CA_MASK)
#define CAIU_CAIUID_TYPE_MASK                    (0xF0000U)
#define CAIU_CAIUID_TYPE_SHIFT                   (16U)
#define CAIU_CAIUID_TYPE_WIDTH                   (4U)
#define CAIU_CAIUID_TYPE(x)                      (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUID_TYPE_SHIFT)) & CAIU_CAIUID_TYPE_MASK)
#define CAIU_CAIUID_SFID_MASK                    (0x1F00000U)
#define CAIU_CAIUID_SFID_SHIFT                   (20U)
#define CAIU_CAIUID_SFID_WIDTH                   (5U)
#define CAIU_CAIUID_SFID(x)                      (((uint32_t)(((uint32_t)(x)) << CAIU_CAIUID_SFID_SHIFT)) & CAIU_CAIUID_SFID_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CAIU_Register_Masks */

/*!
 * @}
 */ /* end of group CAIU_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_CAIU_H_) */
