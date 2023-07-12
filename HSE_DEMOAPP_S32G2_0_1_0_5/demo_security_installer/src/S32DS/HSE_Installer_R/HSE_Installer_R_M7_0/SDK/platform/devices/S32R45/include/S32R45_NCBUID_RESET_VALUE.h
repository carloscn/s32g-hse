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
 * @file S32R45_NCBUID_reset_value.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_NCBUID_reset_value
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
#if !defined(S32R45_NCBUID_reset_value_H_)  /* Check if memory map has not been already included */
#define S32R45_NCBUID_reset_value_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- NCBUID_reset_value Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NCBUID_reset_value_Peripheral_Access_Layer NCBUID_reset_value Peripheral Access Layer
 * @{
 */

/** NCBUID_reset_value - Register Layout Typedef */
typedef struct {
  __IO uint32_t NCBUTC;                            /**< NCBU Transaction Control, offset: 0x0 */
  __I  uint32_t NCBUTA;                            /**< NCBU Transaction Activity, offset: 0x4 */
  uint8_t RESERVED_0[248];
  __IO uint32_t NCBUCEC;                           /**< NCBU Correctable Error Control, offset: 0x100 */
  __IO uint32_t NCBUCES;                           /**< NCBU Correctable Error Status, offset: 0x104 */
  __IO uint32_t NCBUCELR0;                         /**< NCBU Correctable Error Location Register 0, offset: 0x108 */
  __IO uint32_t NCBUCELR1;                         /**< NCBU Correctable Error Location Register 1, offset: 0x10C */
  uint8_t RESERVED_1[20];
  __IO uint32_t NCBUCESA;                          /**< NCBU Correctable Error Status Alias, offset: 0x124 */
  uint8_t RESERVED_2[24];
  __IO uint32_t NCBUUEC;                           /**< NCBU Uncorrectable Error Control, offset: 0x140 */
  __IO uint32_t NCBUUES;                           /**< NCBU Uncorrectable Error Status, offset: 0x144 */
  __IO uint32_t NCBUUELR0;                         /**< NCBU Uncorrectable Error Location Register 0, offset: 0x148 */
  __IO uint32_t NCBUUELR1;                         /**< NCBU Uncorrectable Error Location Register 1, offset: 0x14C */
  uint8_t RESERVED_3[20];
  __IO uint32_t NCBUUESA;                          /**< NCBU Uncorrectable Error Status Alias, offset: 0x164 */
  uint8_t RESERVED_4[3732];
  __I  uint32_t NCBUID;                            /**< NCBU Identification Register, offset: 0xFFC */
} NCBUID_reset_value_Type, *NCBUID_reset_value_MemMapPtr;

/** Number of instances of the NCBUID_reset_value module. */
#define NCBUID_reset_value_INSTANCE_COUNT        (2u)

/* NCBUID_reset_value - Peripheral instance base addresses */
/** Peripheral NCBU0 base address */
#define NCBU0_BASE                               (0x50460000u)
/** Peripheral NCBU0 base pointer */
#define NCBU0                                    ((NCBUID_reset_value_Type *)NCBU0_BASE)
/** Peripheral NCBU1 base address */
#define NCBU1_BASE                               (0x50461000u)
/** Peripheral NCBU1 base pointer */
#define NCBU1                                    ((NCBUID_reset_value_Type *)NCBU1_BASE)
/** Array initializer of NCBUID_reset_value peripheral base addresses */
#define NCBUID_reset_value_BASE_ADDRS            { NCBU0_BASE, NCBU1_BASE }
/** Array initializer of NCBUID_reset_value peripheral base pointers */
#define NCBUID_reset_value_BASE_PTRS             { NCBU0, NCBU1 }

/* ----------------------------------------------------------------------------
   -- NCBUID_reset_value Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NCBUID_reset_value_Register_Masks NCBUID_reset_value Register Masks
 * @{
 */

/*! @name NCBUTC - NCBU Transaction Control */
/*! @{ */
#define NCBUID_reset_value_NCBUTC_TRANSEN_MASK   (0x1U)
#define NCBUID_reset_value_NCBUTC_TRANSEN_SHIFT  (0U)
#define NCBUID_reset_value_NCBUTC_TRANSEN_WIDTH  (1U)
#define NCBUID_reset_value_NCBUTC_TRANSEN(x)     (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUTC_TRANSEN_SHIFT)) & NCBUID_reset_value_NCBUTC_TRANSEN_MASK)
/*! @} */

/*! @name NCBUTA - NCBU Transaction Activity */
/*! @{ */
#define NCBUID_reset_value_NCBUTA_TRANSACTV_MASK (0x1U)
#define NCBUID_reset_value_NCBUTA_TRANSACTV_SHIFT (0U)
#define NCBUID_reset_value_NCBUTA_TRANSACTV_WIDTH (1U)
#define NCBUID_reset_value_NCBUTA_TRANSACTV(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUTA_TRANSACTV_SHIFT)) & NCBUID_reset_value_NCBUTA_TRANSACTV_MASK)
#define NCBUID_reset_value_NCBUTA_SNPACTV_MASK   (0x2U)
#define NCBUID_reset_value_NCBUTA_SNPACTV_SHIFT  (1U)
#define NCBUID_reset_value_NCBUTA_SNPACTV_WIDTH  (1U)
#define NCBUID_reset_value_NCBUTA_SNPACTV(x)     (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUTA_SNPACTV_SHIFT)) & NCBUID_reset_value_NCBUTA_SNPACTV_MASK)
#define NCBUID_reset_value_NCBUTA_COHACTV_MASK   (0x4U)
#define NCBUID_reset_value_NCBUTA_COHACTV_SHIFT  (2U)
#define NCBUID_reset_value_NCBUTA_COHACTV_WIDTH  (1U)
#define NCBUID_reset_value_NCBUTA_COHACTV(x)     (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUTA_COHACTV_SHIFT)) & NCBUID_reset_value_NCBUTA_COHACTV_MASK)
/*! @} */

/*! @name NCBUCEC - NCBU Correctable Error Control */
/*! @{ */
#define NCBUID_reset_value_NCBUCEC_ERRDETEN_MASK (0x1U)
#define NCBUID_reset_value_NCBUCEC_ERRDETEN_SHIFT (0U)
#define NCBUID_reset_value_NCBUCEC_ERRDETEN_WIDTH (1U)
#define NCBUID_reset_value_NCBUCEC_ERRDETEN(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCEC_ERRDETEN_SHIFT)) & NCBUID_reset_value_NCBUCEC_ERRDETEN_MASK)
#define NCBUID_reset_value_NCBUCEC_ERRINTEN_MASK (0x2U)
#define NCBUID_reset_value_NCBUCEC_ERRINTEN_SHIFT (1U)
#define NCBUID_reset_value_NCBUCEC_ERRINTEN_WIDTH (1U)
#define NCBUID_reset_value_NCBUCEC_ERRINTEN(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCEC_ERRINTEN_SHIFT)) & NCBUID_reset_value_NCBUCEC_ERRINTEN_MASK)
#define NCBUID_reset_value_NCBUCEC_ERRTHRESHOLD_MASK (0xFF0U)
#define NCBUID_reset_value_NCBUCEC_ERRTHRESHOLD_SHIFT (4U)
#define NCBUID_reset_value_NCBUCEC_ERRTHRESHOLD_WIDTH (8U)
#define NCBUID_reset_value_NCBUCEC_ERRTHRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCEC_ERRTHRESHOLD_SHIFT)) & NCBUID_reset_value_NCBUCEC_ERRTHRESHOLD_MASK)
/*! @} */

/*! @name NCBUCES - NCBU Correctable Error Status */
/*! @{ */
#define NCBUID_reset_value_NCBUCES_ERRVLD_MASK   (0x1U)
#define NCBUID_reset_value_NCBUCES_ERRVLD_SHIFT  (0U)
#define NCBUID_reset_value_NCBUCES_ERRVLD_WIDTH  (1U)
#define NCBUID_reset_value_NCBUCES_ERRVLD(x)     (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCES_ERRVLD_SHIFT)) & NCBUID_reset_value_NCBUCES_ERRVLD_MASK)
#define NCBUID_reset_value_NCBUCES_ERROVF_MASK   (0x2U)
#define NCBUID_reset_value_NCBUCES_ERROVF_SHIFT  (1U)
#define NCBUID_reset_value_NCBUCES_ERROVF_WIDTH  (1U)
#define NCBUID_reset_value_NCBUCES_ERROVF(x)     (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCES_ERROVF_SHIFT)) & NCBUID_reset_value_NCBUCES_ERROVF_MASK)
#define NCBUID_reset_value_NCBUCES_ERRCOUNT_MASK (0xFF0U)
#define NCBUID_reset_value_NCBUCES_ERRCOUNT_SHIFT (4U)
#define NCBUID_reset_value_NCBUCES_ERRCOUNT_WIDTH (8U)
#define NCBUID_reset_value_NCBUCES_ERRCOUNT(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCES_ERRCOUNT_SHIFT)) & NCBUID_reset_value_NCBUCES_ERRCOUNT_MASK)
#define NCBUID_reset_value_NCBUCES_ERRTYPE_MASK  (0xF000U)
#define NCBUID_reset_value_NCBUCES_ERRTYPE_SHIFT (12U)
#define NCBUID_reset_value_NCBUCES_ERRTYPE_WIDTH (4U)
#define NCBUID_reset_value_NCBUCES_ERRTYPE(x)    (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCES_ERRTYPE_SHIFT)) & NCBUID_reset_value_NCBUCES_ERRTYPE_MASK)
#define NCBUID_reset_value_NCBUCES_ERRINFO_MASK  (0xFF0000U)
#define NCBUID_reset_value_NCBUCES_ERRINFO_SHIFT (16U)
#define NCBUID_reset_value_NCBUCES_ERRINFO_WIDTH (8U)
#define NCBUID_reset_value_NCBUCES_ERRINFO(x)    (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCES_ERRINFO_SHIFT)) & NCBUID_reset_value_NCBUCES_ERRINFO_MASK)
/*! @} */

/*! @name NCBUCELR0 - NCBU Correctable Error Location Register 0 */
/*! @{ */
#define NCBUID_reset_value_NCBUCELR0_ERRENTRY_MASK (0xFFFFFU)
#define NCBUID_reset_value_NCBUCELR0_ERRENTRY_SHIFT (0U)
#define NCBUID_reset_value_NCBUCELR0_ERRENTRY_WIDTH (20U)
#define NCBUID_reset_value_NCBUCELR0_ERRENTRY(x) (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCELR0_ERRENTRY_SHIFT)) & NCBUID_reset_value_NCBUCELR0_ERRENTRY_MASK)
#define NCBUID_reset_value_NCBUCELR0_ERRWAY_MASK (0x3F00000U)
#define NCBUID_reset_value_NCBUCELR0_ERRWAY_SHIFT (20U)
#define NCBUID_reset_value_NCBUCELR0_ERRWAY_WIDTH (6U)
#define NCBUID_reset_value_NCBUCELR0_ERRWAY(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCELR0_ERRWAY_SHIFT)) & NCBUID_reset_value_NCBUCELR0_ERRWAY_MASK)
#define NCBUID_reset_value_NCBUCELR0_ERRWORD_MASK (0xFC000000U)
#define NCBUID_reset_value_NCBUCELR0_ERRWORD_SHIFT (26U)
#define NCBUID_reset_value_NCBUCELR0_ERRWORD_WIDTH (6U)
#define NCBUID_reset_value_NCBUCELR0_ERRWORD(x)  (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCELR0_ERRWORD_SHIFT)) & NCBUID_reset_value_NCBUCELR0_ERRWORD_MASK)
/*! @} */

/*! @name NCBUCELR1 - NCBU Correctable Error Location Register 1 */
/*! @{ */
#define NCBUID_reset_value_NCBUCELR1_ERRADDR_MASK (0xFFFU)
#define NCBUID_reset_value_NCBUCELR1_ERRADDR_SHIFT (0U)
#define NCBUID_reset_value_NCBUCELR1_ERRADDR_WIDTH (12U)
#define NCBUID_reset_value_NCBUCELR1_ERRADDR(x)  (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCELR1_ERRADDR_SHIFT)) & NCBUID_reset_value_NCBUCELR1_ERRADDR_MASK)
/*! @} */

/*! @name NCBUCESA - NCBU Correctable Error Status Alias */
/*! @{ */
#define NCBUID_reset_value_NCBUCESA_ERRVLD_MASK  (0x1U)
#define NCBUID_reset_value_NCBUCESA_ERRVLD_SHIFT (0U)
#define NCBUID_reset_value_NCBUCESA_ERRVLD_WIDTH (1U)
#define NCBUID_reset_value_NCBUCESA_ERRVLD(x)    (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCESA_ERRVLD_SHIFT)) & NCBUID_reset_value_NCBUCESA_ERRVLD_MASK)
#define NCBUID_reset_value_NCBUCESA_ERROVF_MASK  (0x2U)
#define NCBUID_reset_value_NCBUCESA_ERROVF_SHIFT (1U)
#define NCBUID_reset_value_NCBUCESA_ERROVF_WIDTH (1U)
#define NCBUID_reset_value_NCBUCESA_ERROVF(x)    (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCESA_ERROVF_SHIFT)) & NCBUID_reset_value_NCBUCESA_ERROVF_MASK)
#define NCBUID_reset_value_NCBUCESA_ERRCOUNT_MASK (0xFF0U)
#define NCBUID_reset_value_NCBUCESA_ERRCOUNT_SHIFT (4U)
#define NCBUID_reset_value_NCBUCESA_ERRCOUNT_WIDTH (8U)
#define NCBUID_reset_value_NCBUCESA_ERRCOUNT(x)  (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCESA_ERRCOUNT_SHIFT)) & NCBUID_reset_value_NCBUCESA_ERRCOUNT_MASK)
#define NCBUID_reset_value_NCBUCESA_ERRTYPE_MASK (0xF000U)
#define NCBUID_reset_value_NCBUCESA_ERRTYPE_SHIFT (12U)
#define NCBUID_reset_value_NCBUCESA_ERRTYPE_WIDTH (4U)
#define NCBUID_reset_value_NCBUCESA_ERRTYPE(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCESA_ERRTYPE_SHIFT)) & NCBUID_reset_value_NCBUCESA_ERRTYPE_MASK)
#define NCBUID_reset_value_NCBUCESA_ERRINFO_MASK (0xFF0000U)
#define NCBUID_reset_value_NCBUCESA_ERRINFO_SHIFT (16U)
#define NCBUID_reset_value_NCBUCESA_ERRINFO_WIDTH (8U)
#define NCBUID_reset_value_NCBUCESA_ERRINFO(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUCESA_ERRINFO_SHIFT)) & NCBUID_reset_value_NCBUCESA_ERRINFO_MASK)
/*! @} */

/*! @name NCBUUEC - NCBU Uncorrectable Error Control */
/*! @{ */
#define NCBUID_reset_value_NCBUUEC_ERRDETEN_MASK (0x1U)
#define NCBUID_reset_value_NCBUUEC_ERRDETEN_SHIFT (0U)
#define NCBUID_reset_value_NCBUUEC_ERRDETEN_WIDTH (1U)
#define NCBUID_reset_value_NCBUUEC_ERRDETEN(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUEC_ERRDETEN_SHIFT)) & NCBUID_reset_value_NCBUUEC_ERRDETEN_MASK)
#define NCBUID_reset_value_NCBUUEC_ERRINTEN_MASK (0x2U)
#define NCBUID_reset_value_NCBUUEC_ERRINTEN_SHIFT (1U)
#define NCBUID_reset_value_NCBUUEC_ERRINTEN_WIDTH (1U)
#define NCBUID_reset_value_NCBUUEC_ERRINTEN(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUEC_ERRINTEN_SHIFT)) & NCBUID_reset_value_NCBUUEC_ERRINTEN_MASK)
#define NCBUID_reset_value_NCBUUEC_ERRTHRESHOLD_MASK (0xFF0U)
#define NCBUID_reset_value_NCBUUEC_ERRTHRESHOLD_SHIFT (4U)
#define NCBUID_reset_value_NCBUUEC_ERRTHRESHOLD_WIDTH (8U)
#define NCBUID_reset_value_NCBUUEC_ERRTHRESHOLD(x) (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUEC_ERRTHRESHOLD_SHIFT)) & NCBUID_reset_value_NCBUUEC_ERRTHRESHOLD_MASK)
/*! @} */

/*! @name NCBUUES - NCBU Uncorrectable Error Status */
/*! @{ */
#define NCBUID_reset_value_NCBUUES_ERRVLD_MASK   (0x1U)
#define NCBUID_reset_value_NCBUUES_ERRVLD_SHIFT  (0U)
#define NCBUID_reset_value_NCBUUES_ERRVLD_WIDTH  (1U)
#define NCBUID_reset_value_NCBUUES_ERRVLD(x)     (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUES_ERRVLD_SHIFT)) & NCBUID_reset_value_NCBUUES_ERRVLD_MASK)
#define NCBUID_reset_value_NCBUUES_ERROVF_MASK   (0x2U)
#define NCBUID_reset_value_NCBUUES_ERROVF_SHIFT  (1U)
#define NCBUID_reset_value_NCBUUES_ERROVF_WIDTH  (1U)
#define NCBUID_reset_value_NCBUUES_ERROVF(x)     (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUES_ERROVF_SHIFT)) & NCBUID_reset_value_NCBUUES_ERROVF_MASK)
#define NCBUID_reset_value_NCBUUES_ERRCOUNT_MASK (0xFF0U)
#define NCBUID_reset_value_NCBUUES_ERRCOUNT_SHIFT (4U)
#define NCBUID_reset_value_NCBUUES_ERRCOUNT_WIDTH (8U)
#define NCBUID_reset_value_NCBUUES_ERRCOUNT(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUES_ERRCOUNT_SHIFT)) & NCBUID_reset_value_NCBUUES_ERRCOUNT_MASK)
#define NCBUID_reset_value_NCBUUES_ERRTYPE_MASK  (0xF000U)
#define NCBUID_reset_value_NCBUUES_ERRTYPE_SHIFT (12U)
#define NCBUID_reset_value_NCBUUES_ERRTYPE_WIDTH (4U)
#define NCBUID_reset_value_NCBUUES_ERRTYPE(x)    (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUES_ERRTYPE_SHIFT)) & NCBUID_reset_value_NCBUUES_ERRTYPE_MASK)
#define NCBUID_reset_value_NCBUUES_ERRINFO_MASK  (0xFF0000U)
#define NCBUID_reset_value_NCBUUES_ERRINFO_SHIFT (16U)
#define NCBUID_reset_value_NCBUUES_ERRINFO_WIDTH (8U)
#define NCBUID_reset_value_NCBUUES_ERRINFO(x)    (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUES_ERRINFO_SHIFT)) & NCBUID_reset_value_NCBUUES_ERRINFO_MASK)
/*! @} */

/*! @name NCBUUELR0 - NCBU Uncorrectable Error Location Register 0 */
/*! @{ */
#define NCBUID_reset_value_NCBUUELR0_ERRENTRY_MASK (0xFFFFFU)
#define NCBUID_reset_value_NCBUUELR0_ERRENTRY_SHIFT (0U)
#define NCBUID_reset_value_NCBUUELR0_ERRENTRY_WIDTH (20U)
#define NCBUID_reset_value_NCBUUELR0_ERRENTRY(x) (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUELR0_ERRENTRY_SHIFT)) & NCBUID_reset_value_NCBUUELR0_ERRENTRY_MASK)
#define NCBUID_reset_value_NCBUUELR0_ERRWAY_MASK (0x3F00000U)
#define NCBUID_reset_value_NCBUUELR0_ERRWAY_SHIFT (20U)
#define NCBUID_reset_value_NCBUUELR0_ERRWAY_WIDTH (6U)
#define NCBUID_reset_value_NCBUUELR0_ERRWAY(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUELR0_ERRWAY_SHIFT)) & NCBUID_reset_value_NCBUUELR0_ERRWAY_MASK)
#define NCBUID_reset_value_NCBUUELR0_ERRWORD_MASK (0xFC000000U)
#define NCBUID_reset_value_NCBUUELR0_ERRWORD_SHIFT (26U)
#define NCBUID_reset_value_NCBUUELR0_ERRWORD_WIDTH (6U)
#define NCBUID_reset_value_NCBUUELR0_ERRWORD(x)  (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUELR0_ERRWORD_SHIFT)) & NCBUID_reset_value_NCBUUELR0_ERRWORD_MASK)
/*! @} */

/*! @name NCBUUELR1 - NCBU Uncorrectable Error Location Register 1 */
/*! @{ */
#define NCBUID_reset_value_NCBUUELR1_ERRADDR_MASK (0xFFFU)
#define NCBUID_reset_value_NCBUUELR1_ERRADDR_SHIFT (0U)
#define NCBUID_reset_value_NCBUUELR1_ERRADDR_WIDTH (12U)
#define NCBUID_reset_value_NCBUUELR1_ERRADDR(x)  (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUELR1_ERRADDR_SHIFT)) & NCBUID_reset_value_NCBUUELR1_ERRADDR_MASK)
/*! @} */

/*! @name NCBUUESA - NCBU Uncorrectable Error Status Alias */
/*! @{ */
#define NCBUID_reset_value_NCBUUESA_ERRVLD_MASK  (0x1U)
#define NCBUID_reset_value_NCBUUESA_ERRVLD_SHIFT (0U)
#define NCBUID_reset_value_NCBUUESA_ERRVLD_WIDTH (1U)
#define NCBUID_reset_value_NCBUUESA_ERRVLD(x)    (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUESA_ERRVLD_SHIFT)) & NCBUID_reset_value_NCBUUESA_ERRVLD_MASK)
#define NCBUID_reset_value_NCBUUESA_ERROVF_MASK  (0x2U)
#define NCBUID_reset_value_NCBUUESA_ERROVF_SHIFT (1U)
#define NCBUID_reset_value_NCBUUESA_ERROVF_WIDTH (1U)
#define NCBUID_reset_value_NCBUUESA_ERROVF(x)    (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUESA_ERROVF_SHIFT)) & NCBUID_reset_value_NCBUUESA_ERROVF_MASK)
#define NCBUID_reset_value_NCBUUESA_ERRCOUNT_MASK (0xFF0U)
#define NCBUID_reset_value_NCBUUESA_ERRCOUNT_SHIFT (4U)
#define NCBUID_reset_value_NCBUUESA_ERRCOUNT_WIDTH (8U)
#define NCBUID_reset_value_NCBUUESA_ERRCOUNT(x)  (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUESA_ERRCOUNT_SHIFT)) & NCBUID_reset_value_NCBUUESA_ERRCOUNT_MASK)
#define NCBUID_reset_value_NCBUUESA_ERRTYPE_MASK (0xF000U)
#define NCBUID_reset_value_NCBUUESA_ERRTYPE_SHIFT (12U)
#define NCBUID_reset_value_NCBUUESA_ERRTYPE_WIDTH (4U)
#define NCBUID_reset_value_NCBUUESA_ERRTYPE(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUESA_ERRTYPE_SHIFT)) & NCBUID_reset_value_NCBUUESA_ERRTYPE_MASK)
#define NCBUID_reset_value_NCBUUESA_ERRINFO_MASK (0xFF0000U)
#define NCBUID_reset_value_NCBUUESA_ERRINFO_SHIFT (16U)
#define NCBUID_reset_value_NCBUUESA_ERRINFO_WIDTH (8U)
#define NCBUID_reset_value_NCBUUESA_ERRINFO(x)   (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUUESA_ERRINFO_SHIFT)) & NCBUID_reset_value_NCBUUESA_ERRINFO_MASK)
/*! @} */

/*! @name NCBUID - NCBU Identification Register */
/*! @{ */
#define NCBUID_reset_value_NCBUID_IMPLVER_MASK   (0xFFU)
#define NCBUID_reset_value_NCBUID_IMPLVER_SHIFT  (0U)
#define NCBUID_reset_value_NCBUID_IMPLVER_WIDTH  (8U)
#define NCBUID_reset_value_NCBUID_IMPLVER(x)     (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUID_IMPLVER_SHIFT)) & NCBUID_reset_value_NCBUID_IMPLVER_MASK)
#define NCBUID_reset_value_NCBUID_NCBID_MASK     (0x7F00U)
#define NCBUID_reset_value_NCBUID_NCBID_SHIFT    (8U)
#define NCBUID_reset_value_NCBUID_NCBID_WIDTH    (7U)
#define NCBUID_reset_value_NCBUID_NCBID(x)       (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUID_NCBID_SHIFT)) & NCBUID_reset_value_NCBUID_NCBID_MASK)
#define NCBUID_reset_value_NCBUID_CA_MASK        (0x8000U)
#define NCBUID_reset_value_NCBUID_CA_SHIFT       (15U)
#define NCBUID_reset_value_NCBUID_CA_WIDTH       (1U)
#define NCBUID_reset_value_NCBUID_CA(x)          (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUID_CA_SHIFT)) & NCBUID_reset_value_NCBUID_CA_MASK)
#define NCBUID_reset_value_NCBUID_TYPE_MASK      (0xF0000U)
#define NCBUID_reset_value_NCBUID_TYPE_SHIFT     (16U)
#define NCBUID_reset_value_NCBUID_TYPE_WIDTH     (4U)
#define NCBUID_reset_value_NCBUID_TYPE(x)        (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUID_TYPE_SHIFT)) & NCBUID_reset_value_NCBUID_TYPE_MASK)
#define NCBUID_reset_value_NCBUID_SFID_MASK      (0x1F00000U)
#define NCBUID_reset_value_NCBUID_SFID_SHIFT     (20U)
#define NCBUID_reset_value_NCBUID_SFID_WIDTH     (5U)
#define NCBUID_reset_value_NCBUID_SFID(x)        (((uint32_t)(((uint32_t)(x)) << NCBUID_reset_value_NCBUID_SFID_SHIFT)) & NCBUID_reset_value_NCBUID_SFID_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group NCBUID_reset_value_Register_Masks */

/*!
 * @}
 */ /* end of group NCBUID_reset_value_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_NCBUID_reset_value_H_) */
