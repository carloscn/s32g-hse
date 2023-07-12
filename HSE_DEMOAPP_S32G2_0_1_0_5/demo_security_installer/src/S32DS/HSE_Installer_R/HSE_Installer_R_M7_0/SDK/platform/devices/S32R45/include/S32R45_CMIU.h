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
 * @file S32R45_CMIU.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_CMIU
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
#if !defined(S32R45_CMIU_H_)  /* Check if memory map has not been already included */
#define S32R45_CMIU_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CMIU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMIU_Peripheral_Access_Layer CMIU Peripheral Access Layer
 * @{
 */

/** CMIU - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[4];
  __I  uint32_t CMIUTA;                            /**< CMIU Transaction Activity, offset: 0x4 */
  uint8_t RESERVED_1[248];
  __IO uint32_t CMIUCEC;                           /**< CMIU Correctable Error Control, offset: 0x100 */
  __IO uint32_t CMIUCES;                           /**< CMIU Correctable Error Status, offset: 0x104 */
  __IO uint32_t CMIUCELR0;                         /**< CMIU Correctable Error Location Register 0, offset: 0x108 */
  __IO uint32_t CMIUCELR1;                         /**< CMIU Correctable Error Location Register 1, offset: 0x10C */
  uint8_t RESERVED_2[20];
  __IO uint32_t CMIUCESA;                          /**< CMIU Correctable Error Status Alias, offset: 0x124 */
  uint8_t RESERVED_3[24];
  __IO uint32_t CMIUUEC;                           /**< CMIU Uncorrectable Error Control, offset: 0x140 */
  __IO uint32_t CMIUUES;                           /**< CMIU Uncorrectable Error Status, offset: 0x144 */
  __IO uint32_t CMIUUELR0;                         /**< CMIU Uncorrectable Error Location Register 0, offset: 0x148 */
  __IO uint32_t CMIUUELR1;                         /**< CMIU Uncorrectable Error Location Register 1, offset: 0x14C */
  uint8_t RESERVED_4[20];
  __IO uint32_t CMIUUESA;                          /**< CMIU Uncorrectable Error Status Alias, offset: 0x164 */
  uint8_t RESERVED_5[3732];
  __I  uint32_t CMIUID;                            /**< CMIU Identification Register, offset: 0xFFC */
} CMIU_Type, *CMIU_MemMapPtr;

/** Number of instances of the CMIU module. */
#define CMIU_INSTANCE_COUNT                      (1u)

/* CMIU - Peripheral instance base addresses */
/** Peripheral CMIU base address */
#define CMIU_BASE                                (0x504C0000u)
/** Peripheral CMIU base pointer */
#define CMIU                                     ((CMIU_Type *)CMIU_BASE)
/** Array initializer of CMIU peripheral base addresses */
#define CMIU_BASE_ADDRS                          { CMIU_BASE }
/** Array initializer of CMIU peripheral base pointers */
#define CMIU_BASE_PTRS                           { CMIU }

/* ----------------------------------------------------------------------------
   -- CMIU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CMIU_Register_Masks CMIU Register Masks
 * @{
 */

/*! @name CMIUTA - CMIU Transaction Activity */
/*! @{ */
#define CMIU_CMIUTA_TRANSACTV_MASK               (0x1U)
#define CMIU_CMIUTA_TRANSACTV_SHIFT              (0U)
#define CMIU_CMIUTA_TRANSACTV_WIDTH              (1U)
#define CMIU_CMIUTA_TRANSACTV(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUTA_TRANSACTV_SHIFT)) & CMIU_CMIUTA_TRANSACTV_MASK)
/*! @} */

/*! @name CMIUCEC - CMIU Correctable Error Control */
/*! @{ */
#define CMIU_CMIUCEC_ERRDETEN_MASK               (0x1U)
#define CMIU_CMIUCEC_ERRDETEN_SHIFT              (0U)
#define CMIU_CMIUCEC_ERRDETEN_WIDTH              (1U)
#define CMIU_CMIUCEC_ERRDETEN(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCEC_ERRDETEN_SHIFT)) & CMIU_CMIUCEC_ERRDETEN_MASK)
#define CMIU_CMIUCEC_ERRINTEN_MASK               (0x2U)
#define CMIU_CMIUCEC_ERRINTEN_SHIFT              (1U)
#define CMIU_CMIUCEC_ERRINTEN_WIDTH              (1U)
#define CMIU_CMIUCEC_ERRINTEN(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCEC_ERRINTEN_SHIFT)) & CMIU_CMIUCEC_ERRINTEN_MASK)
#define CMIU_CMIUCEC_ERRTHRESHOLD_MASK           (0xFF0U)
#define CMIU_CMIUCEC_ERRTHRESHOLD_SHIFT          (4U)
#define CMIU_CMIUCEC_ERRTHRESHOLD_WIDTH          (8U)
#define CMIU_CMIUCEC_ERRTHRESHOLD(x)             (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCEC_ERRTHRESHOLD_SHIFT)) & CMIU_CMIUCEC_ERRTHRESHOLD_MASK)
/*! @} */

/*! @name CMIUCES - CMIU Correctable Error Status */
/*! @{ */
#define CMIU_CMIUCES_ERRVLD_MASK                 (0x1U)
#define CMIU_CMIUCES_ERRVLD_SHIFT                (0U)
#define CMIU_CMIUCES_ERRVLD_WIDTH                (1U)
#define CMIU_CMIUCES_ERRVLD(x)                   (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCES_ERRVLD_SHIFT)) & CMIU_CMIUCES_ERRVLD_MASK)
#define CMIU_CMIUCES_ERROVF_MASK                 (0x2U)
#define CMIU_CMIUCES_ERROVF_SHIFT                (1U)
#define CMIU_CMIUCES_ERROVF_WIDTH                (1U)
#define CMIU_CMIUCES_ERROVF(x)                   (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCES_ERROVF_SHIFT)) & CMIU_CMIUCES_ERROVF_MASK)
#define CMIU_CMIUCES_ERRCOUNT_MASK               (0xFF0U)
#define CMIU_CMIUCES_ERRCOUNT_SHIFT              (4U)
#define CMIU_CMIUCES_ERRCOUNT_WIDTH              (8U)
#define CMIU_CMIUCES_ERRCOUNT(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCES_ERRCOUNT_SHIFT)) & CMIU_CMIUCES_ERRCOUNT_MASK)
#define CMIU_CMIUCES_ERRTYPE_MASK                (0xF000U)
#define CMIU_CMIUCES_ERRTYPE_SHIFT               (12U)
#define CMIU_CMIUCES_ERRTYPE_WIDTH               (4U)
#define CMIU_CMIUCES_ERRTYPE(x)                  (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCES_ERRTYPE_SHIFT)) & CMIU_CMIUCES_ERRTYPE_MASK)
#define CMIU_CMIUCES_ERRINFO_MASK                (0xFF0000U)
#define CMIU_CMIUCES_ERRINFO_SHIFT               (16U)
#define CMIU_CMIUCES_ERRINFO_WIDTH               (8U)
#define CMIU_CMIUCES_ERRINFO(x)                  (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCES_ERRINFO_SHIFT)) & CMIU_CMIUCES_ERRINFO_MASK)
/*! @} */

/*! @name CMIUCELR0 - CMIU Correctable Error Location Register 0 */
/*! @{ */
#define CMIU_CMIUCELR0_ERRENTRY_MASK             (0xFFFFFU)
#define CMIU_CMIUCELR0_ERRENTRY_SHIFT            (0U)
#define CMIU_CMIUCELR0_ERRENTRY_WIDTH            (20U)
#define CMIU_CMIUCELR0_ERRENTRY(x)               (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCELR0_ERRENTRY_SHIFT)) & CMIU_CMIUCELR0_ERRENTRY_MASK)
#define CMIU_CMIUCELR0_ERRWAY_MASK               (0x3F00000U)
#define CMIU_CMIUCELR0_ERRWAY_SHIFT              (20U)
#define CMIU_CMIUCELR0_ERRWAY_WIDTH              (6U)
#define CMIU_CMIUCELR0_ERRWAY(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCELR0_ERRWAY_SHIFT)) & CMIU_CMIUCELR0_ERRWAY_MASK)
#define CMIU_CMIUCELR0_ERRWORD_MASK              (0xFC000000U)
#define CMIU_CMIUCELR0_ERRWORD_SHIFT             (26U)
#define CMIU_CMIUCELR0_ERRWORD_WIDTH             (6U)
#define CMIU_CMIUCELR0_ERRWORD(x)                (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCELR0_ERRWORD_SHIFT)) & CMIU_CMIUCELR0_ERRWORD_MASK)
/*! @} */

/*! @name CMIUCELR1 - CMIU Correctable Error Location Register 1 */
/*! @{ */
#define CMIU_CMIUCELR1_ERRADDR_MASK              (0xFFFU)
#define CMIU_CMIUCELR1_ERRADDR_SHIFT             (0U)
#define CMIU_CMIUCELR1_ERRADDR_WIDTH             (12U)
#define CMIU_CMIUCELR1_ERRADDR(x)                (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCELR1_ERRADDR_SHIFT)) & CMIU_CMIUCELR1_ERRADDR_MASK)
/*! @} */

/*! @name CMIUCESA - CMIU Correctable Error Status Alias */
/*! @{ */
#define CMIU_CMIUCESA_ERRVLD_MASK                (0x1U)
#define CMIU_CMIUCESA_ERRVLD_SHIFT               (0U)
#define CMIU_CMIUCESA_ERRVLD_WIDTH               (1U)
#define CMIU_CMIUCESA_ERRVLD(x)                  (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCESA_ERRVLD_SHIFT)) & CMIU_CMIUCESA_ERRVLD_MASK)
#define CMIU_CMIUCESA_ERROVF_MASK                (0x2U)
#define CMIU_CMIUCESA_ERROVF_SHIFT               (1U)
#define CMIU_CMIUCESA_ERROVF_WIDTH               (1U)
#define CMIU_CMIUCESA_ERROVF(x)                  (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCESA_ERROVF_SHIFT)) & CMIU_CMIUCESA_ERROVF_MASK)
#define CMIU_CMIUCESA_ERRCOUNT_MASK              (0xFF0U)
#define CMIU_CMIUCESA_ERRCOUNT_SHIFT             (4U)
#define CMIU_CMIUCESA_ERRCOUNT_WIDTH             (8U)
#define CMIU_CMIUCESA_ERRCOUNT(x)                (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCESA_ERRCOUNT_SHIFT)) & CMIU_CMIUCESA_ERRCOUNT_MASK)
#define CMIU_CMIUCESA_ERRTYPE_MASK               (0xF000U)
#define CMIU_CMIUCESA_ERRTYPE_SHIFT              (12U)
#define CMIU_CMIUCESA_ERRTYPE_WIDTH              (4U)
#define CMIU_CMIUCESA_ERRTYPE(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCESA_ERRTYPE_SHIFT)) & CMIU_CMIUCESA_ERRTYPE_MASK)
#define CMIU_CMIUCESA_ERRINFO_MASK               (0xFF0000U)
#define CMIU_CMIUCESA_ERRINFO_SHIFT              (16U)
#define CMIU_CMIUCESA_ERRINFO_WIDTH              (8U)
#define CMIU_CMIUCESA_ERRINFO(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUCESA_ERRINFO_SHIFT)) & CMIU_CMIUCESA_ERRINFO_MASK)
/*! @} */

/*! @name CMIUUEC - CMIU Uncorrectable Error Control */
/*! @{ */
#define CMIU_CMIUUEC_ERRDETEN_MASK               (0x1U)
#define CMIU_CMIUUEC_ERRDETEN_SHIFT              (0U)
#define CMIU_CMIUUEC_ERRDETEN_WIDTH              (1U)
#define CMIU_CMIUUEC_ERRDETEN(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUEC_ERRDETEN_SHIFT)) & CMIU_CMIUUEC_ERRDETEN_MASK)
#define CMIU_CMIUUEC_ERRINTEN_MASK               (0x2U)
#define CMIU_CMIUUEC_ERRINTEN_SHIFT              (1U)
#define CMIU_CMIUUEC_ERRINTEN_WIDTH              (1U)
#define CMIU_CMIUUEC_ERRINTEN(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUEC_ERRINTEN_SHIFT)) & CMIU_CMIUUEC_ERRINTEN_MASK)
#define CMIU_CMIUUEC_ERRTHRESHOLD_MASK           (0xFF0U)
#define CMIU_CMIUUEC_ERRTHRESHOLD_SHIFT          (4U)
#define CMIU_CMIUUEC_ERRTHRESHOLD_WIDTH          (8U)
#define CMIU_CMIUUEC_ERRTHRESHOLD(x)             (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUEC_ERRTHRESHOLD_SHIFT)) & CMIU_CMIUUEC_ERRTHRESHOLD_MASK)
/*! @} */

/*! @name CMIUUES - CMIU Uncorrectable Error Status */
/*! @{ */
#define CMIU_CMIUUES_ERRVLD_MASK                 (0x1U)
#define CMIU_CMIUUES_ERRVLD_SHIFT                (0U)
#define CMIU_CMIUUES_ERRVLD_WIDTH                (1U)
#define CMIU_CMIUUES_ERRVLD(x)                   (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUES_ERRVLD_SHIFT)) & CMIU_CMIUUES_ERRVLD_MASK)
#define CMIU_CMIUUES_ERROVF_MASK                 (0x2U)
#define CMIU_CMIUUES_ERROVF_SHIFT                (1U)
#define CMIU_CMIUUES_ERROVF_WIDTH                (1U)
#define CMIU_CMIUUES_ERROVF(x)                   (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUES_ERROVF_SHIFT)) & CMIU_CMIUUES_ERROVF_MASK)
#define CMIU_CMIUUES_ERRCOUNT_MASK               (0xFF0U)
#define CMIU_CMIUUES_ERRCOUNT_SHIFT              (4U)
#define CMIU_CMIUUES_ERRCOUNT_WIDTH              (8U)
#define CMIU_CMIUUES_ERRCOUNT(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUES_ERRCOUNT_SHIFT)) & CMIU_CMIUUES_ERRCOUNT_MASK)
#define CMIU_CMIUUES_ERRTYPE_MASK                (0xF000U)
#define CMIU_CMIUUES_ERRTYPE_SHIFT               (12U)
#define CMIU_CMIUUES_ERRTYPE_WIDTH               (4U)
#define CMIU_CMIUUES_ERRTYPE(x)                  (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUES_ERRTYPE_SHIFT)) & CMIU_CMIUUES_ERRTYPE_MASK)
#define CMIU_CMIUUES_ERRINFO_MASK                (0xFF0000U)
#define CMIU_CMIUUES_ERRINFO_SHIFT               (16U)
#define CMIU_CMIUUES_ERRINFO_WIDTH               (8U)
#define CMIU_CMIUUES_ERRINFO(x)                  (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUES_ERRINFO_SHIFT)) & CMIU_CMIUUES_ERRINFO_MASK)
/*! @} */

/*! @name CMIUUELR0 - CMIU Uncorrectable Error Location Register 0 */
/*! @{ */
#define CMIU_CMIUUELR0_ERRENTRY_MASK             (0xFFFFFU)
#define CMIU_CMIUUELR0_ERRENTRY_SHIFT            (0U)
#define CMIU_CMIUUELR0_ERRENTRY_WIDTH            (20U)
#define CMIU_CMIUUELR0_ERRENTRY(x)               (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUELR0_ERRENTRY_SHIFT)) & CMIU_CMIUUELR0_ERRENTRY_MASK)
#define CMIU_CMIUUELR0_ERRWAY_MASK               (0x3F00000U)
#define CMIU_CMIUUELR0_ERRWAY_SHIFT              (20U)
#define CMIU_CMIUUELR0_ERRWAY_WIDTH              (6U)
#define CMIU_CMIUUELR0_ERRWAY(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUELR0_ERRWAY_SHIFT)) & CMIU_CMIUUELR0_ERRWAY_MASK)
#define CMIU_CMIUUELR0_ERRWORD_MASK              (0xFC000000U)
#define CMIU_CMIUUELR0_ERRWORD_SHIFT             (26U)
#define CMIU_CMIUUELR0_ERRWORD_WIDTH             (6U)
#define CMIU_CMIUUELR0_ERRWORD(x)                (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUELR0_ERRWORD_SHIFT)) & CMIU_CMIUUELR0_ERRWORD_MASK)
/*! @} */

/*! @name CMIUUELR1 - CMIU Uncorrectable Error Location Register 1 */
/*! @{ */
#define CMIU_CMIUUELR1_ERRADDR_MASK              (0xFFFU)
#define CMIU_CMIUUELR1_ERRADDR_SHIFT             (0U)
#define CMIU_CMIUUELR1_ERRADDR_WIDTH             (12U)
#define CMIU_CMIUUELR1_ERRADDR(x)                (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUELR1_ERRADDR_SHIFT)) & CMIU_CMIUUELR1_ERRADDR_MASK)
/*! @} */

/*! @name CMIUUESA - CMIU Uncorrectable Error Status Alias */
/*! @{ */
#define CMIU_CMIUUESA_ERRVLD_MASK                (0x1U)
#define CMIU_CMIUUESA_ERRVLD_SHIFT               (0U)
#define CMIU_CMIUUESA_ERRVLD_WIDTH               (1U)
#define CMIU_CMIUUESA_ERRVLD(x)                  (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUESA_ERRVLD_SHIFT)) & CMIU_CMIUUESA_ERRVLD_MASK)
#define CMIU_CMIUUESA_ERROVF_MASK                (0x2U)
#define CMIU_CMIUUESA_ERROVF_SHIFT               (1U)
#define CMIU_CMIUUESA_ERROVF_WIDTH               (1U)
#define CMIU_CMIUUESA_ERROVF(x)                  (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUESA_ERROVF_SHIFT)) & CMIU_CMIUUESA_ERROVF_MASK)
#define CMIU_CMIUUESA_ERRCOUNT_MASK              (0xFF0U)
#define CMIU_CMIUUESA_ERRCOUNT_SHIFT             (4U)
#define CMIU_CMIUUESA_ERRCOUNT_WIDTH             (8U)
#define CMIU_CMIUUESA_ERRCOUNT(x)                (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUESA_ERRCOUNT_SHIFT)) & CMIU_CMIUUESA_ERRCOUNT_MASK)
#define CMIU_CMIUUESA_ERRTYPE_MASK               (0xF000U)
#define CMIU_CMIUUESA_ERRTYPE_SHIFT              (12U)
#define CMIU_CMIUUESA_ERRTYPE_WIDTH              (4U)
#define CMIU_CMIUUESA_ERRTYPE(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUESA_ERRTYPE_SHIFT)) & CMIU_CMIUUESA_ERRTYPE_MASK)
#define CMIU_CMIUUESA_ERRINFO_MASK               (0xFF0000U)
#define CMIU_CMIUUESA_ERRINFO_SHIFT              (16U)
#define CMIU_CMIUUESA_ERRINFO_WIDTH              (8U)
#define CMIU_CMIUUESA_ERRINFO(x)                 (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUUESA_ERRINFO_SHIFT)) & CMIU_CMIUUESA_ERRINFO_MASK)
/*! @} */

/*! @name CMIUID - CMIU Identification Register */
/*! @{ */
#define CMIU_CMIUID_IMPLVER_MASK                 (0xFFU)
#define CMIU_CMIUID_IMPLVER_SHIFT                (0U)
#define CMIU_CMIUID_IMPLVER_WIDTH                (8U)
#define CMIU_CMIUID_IMPLVER(x)                   (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUID_IMPLVER_SHIFT)) & CMIU_CMIUID_IMPLVER_MASK)
#define CMIU_CMIUID_CMIID_MASK                   (0x1F00U)
#define CMIU_CMIUID_CMIID_SHIFT                  (8U)
#define CMIU_CMIUID_CMIID_WIDTH                  (5U)
#define CMIU_CMIUID_CMIID(x)                     (((uint32_t)(((uint32_t)(x)) << CMIU_CMIUID_CMIID_SHIFT)) & CMIU_CMIUID_CMIID_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CMIU_Register_Masks */

/*!
 * @}
 */ /* end of group CMIU_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_CMIU_H_) */
