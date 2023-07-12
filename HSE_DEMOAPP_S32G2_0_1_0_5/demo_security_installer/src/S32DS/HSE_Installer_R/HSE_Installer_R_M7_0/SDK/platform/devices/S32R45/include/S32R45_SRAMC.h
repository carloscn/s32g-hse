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
 * @file S32R45_SRAMC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_SRAMC
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
#if !defined(S32R45_SRAMC_H_)  /* Check if memory map has not been already included */
#define S32R45_SRAMC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SRAMC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SRAMC_Peripheral_Access_Layer SRAMC Peripheral Access Layer
 * @{
 */

/** SRAMC - Register Layout Typedef */
typedef struct {
  __IO uint32_t PRAMCR;                            /**< Platform RAM Control Register, offset: 0x0 */
  __IO uint32_t PRAMIAS;                           /**< Platform RAM Initialization Address Register Start, offset: 0x4 */
  __IO uint32_t PRAMIAE;                           /**< Platform RAM Initialization Address Register End, offset: 0x8 */
  __IO uint32_t PRAMSR;                            /**< Platform RAM Status Register, offset: 0xC */
  __I  uint32_t PRAMECCA;                          /**< Platform RAM ECC Address, offset: 0x10 */
} SRAMC_Type, *SRAMC_MemMapPtr;

/** Number of instances of the SRAMC module. */
#define SRAMC_INSTANCE_COUNT                     (4u)

/* SRAMC - Peripheral instance base addresses */
/** Peripheral CHIRPBUFFER_RAM base address */
#define CHIRPBUFFER_RAM_BASE                     (0x44048000u)
/** Peripheral CHIRPBUFFER_RAM base pointer */
#define CHIRPBUFFER_RAM                          ((SRAMC_Type *)CHIRPBUFFER_RAM_BASE)
/** Peripheral RETENTION_RAM base address */
#define RETENTION_RAM_BASE                       (0x44044000u)
/** Peripheral RETENTION_RAM base pointer */
#define RETENTION_RAM                            ((SRAMC_Type *)RETENTION_RAM_BASE)
/** Peripheral SRAMC base address */
#define SRAMC_BASE                               (0x4019C000u)
/** Peripheral SRAMC base pointer */
#define SRAMC                                    ((SRAMC_Type *)SRAMC_BASE)
/** Peripheral SRAMC_1 base address */
#define SRAMC_1_BASE                             (0x401A0000u)
/** Peripheral SRAMC_1 base pointer */
#define SRAMC_1                                  ((SRAMC_Type *)SRAMC_1_BASE)
/** Array initializer of SRAMC peripheral base addresses */
#define SRAMC_BASE_ADDRS                         { CHIRPBUFFER_RAM_BASE, RETENTION_RAM_BASE, SRAMC_BASE, SRAMC_1_BASE }
/** Array initializer of SRAMC peripheral base pointers */
#define SRAMC_BASE_PTRS                          { CHIRPBUFFER_RAM, RETENTION_RAM, SRAMC, SRAMC_1 }

/* ----------------------------------------------------------------------------
   -- SRAMC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SRAMC_Register_Masks SRAMC Register Masks
 * @{
 */

/*! @name PRAMCR - Platform RAM Control Register */
/*! @{ */
#define SRAMC_PRAMCR_INITREQ_MASK                (0x1U)
#define SRAMC_PRAMCR_INITREQ_SHIFT               (0U)
#define SRAMC_PRAMCR_INITREQ_WIDTH               (1U)
#define SRAMC_PRAMCR_INITREQ(x)                  (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMCR_INITREQ_SHIFT)) & SRAMC_PRAMCR_INITREQ_MASK)
#define SRAMC_PRAMCR_IWS_MASK                    (0x6U)
#define SRAMC_PRAMCR_IWS_SHIFT                   (1U)
#define SRAMC_PRAMCR_IWS_WIDTH                   (2U)
#define SRAMC_PRAMCR_IWS(x)                      (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMCR_IWS_SHIFT)) & SRAMC_PRAMCR_IWS_MASK)
/*! @} */

/*! @name PRAMIAS - Platform RAM Initialization Address Register Start */
/*! @{ */
#define SRAMC_PRAMIAS_IAS_MASK                   (0x1FFFFU)
#define SRAMC_PRAMIAS_IAS_SHIFT                  (0U)
#define SRAMC_PRAMIAS_IAS_WIDTH                  (17U)
#define SRAMC_PRAMIAS_IAS(x)                     (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMIAS_IAS_SHIFT)) & SRAMC_PRAMIAS_IAS_MASK)
/*! @} */

/*! @name PRAMIAE - Platform RAM Initialization Address Register End */
/*! @{ */
#define SRAMC_PRAMIAE_IAE_MASK                   (0x1FFFFU)
#define SRAMC_PRAMIAE_IAE_SHIFT                  (0U)
#define SRAMC_PRAMIAE_IAE_WIDTH                  (17U)
#define SRAMC_PRAMIAE_IAE(x)                     (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMIAE_IAE_SHIFT)) & SRAMC_PRAMIAE_IAE_MASK)
/*! @} */

/*! @name PRAMSR - Platform RAM Status Register */
/*! @{ */
#define SRAMC_PRAMSR_IDONE_MASK                  (0x1U)
#define SRAMC_PRAMSR_IDONE_SHIFT                 (0U)
#define SRAMC_PRAMSR_IDONE_WIDTH                 (1U)
#define SRAMC_PRAMSR_IDONE(x)                    (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMSR_IDONE_SHIFT)) & SRAMC_PRAMSR_IDONE_MASK)
#define SRAMC_PRAMSR_IERR_MASK                   (0x2U)
#define SRAMC_PRAMSR_IERR_SHIFT                  (1U)
#define SRAMC_PRAMSR_IERR_WIDTH                  (1U)
#define SRAMC_PRAMSR_IERR(x)                     (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMSR_IERR_SHIFT)) & SRAMC_PRAMSR_IERR_MASK)
#define SRAMC_PRAMSR_IPEND_MASK                  (0x4U)
#define SRAMC_PRAMSR_IPEND_SHIFT                 (2U)
#define SRAMC_PRAMSR_IPEND_WIDTH                 (1U)
#define SRAMC_PRAMSR_IPEND(x)                    (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMSR_IPEND_SHIFT)) & SRAMC_PRAMSR_IPEND_MASK)
#define SRAMC_PRAMSR_AEXT_MASK                   (0x10U)
#define SRAMC_PRAMSR_AEXT_SHIFT                  (4U)
#define SRAMC_PRAMSR_AEXT_WIDTH                  (1U)
#define SRAMC_PRAMSR_AEXT(x)                     (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMSR_AEXT_SHIFT)) & SRAMC_PRAMSR_AEXT_MASK)
#define SRAMC_PRAMSR_AERR_MASK                   (0x20U)
#define SRAMC_PRAMSR_AERR_SHIFT                  (5U)
#define SRAMC_PRAMSR_AERR_WIDTH                  (1U)
#define SRAMC_PRAMSR_AERR(x)                     (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMSR_AERR_SHIFT)) & SRAMC_PRAMSR_AERR_MASK)
#define SRAMC_PRAMSR_MLTERR_MASK                 (0x40U)
#define SRAMC_PRAMSR_MLTERR_SHIFT                (6U)
#define SRAMC_PRAMSR_MLTERR_WIDTH                (1U)
#define SRAMC_PRAMSR_MLTERR(x)                   (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMSR_MLTERR_SHIFT)) & SRAMC_PRAMSR_MLTERR_MASK)
#define SRAMC_PRAMSR_SGLERR_MASK                 (0x80U)
#define SRAMC_PRAMSR_SGLERR_SHIFT                (7U)
#define SRAMC_PRAMSR_SGLERR_WIDTH                (1U)
#define SRAMC_PRAMSR_SGLERR(x)                   (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMSR_SGLERR_SHIFT)) & SRAMC_PRAMSR_SGLERR_MASK)
#define SRAMC_PRAMSR_SYND_MASK                   (0xFF00U)
#define SRAMC_PRAMSR_SYND_SHIFT                  (8U)
#define SRAMC_PRAMSR_SYND_WIDTH                  (8U)
#define SRAMC_PRAMSR_SYND(x)                     (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMSR_SYND_SHIFT)) & SRAMC_PRAMSR_SYND_MASK)
/*! @} */

/*! @name PRAMECCA - Platform RAM ECC Address */
/*! @{ */
#define SRAMC_PRAMECCA_EADR_MASK                 (0x1FFFFU)
#define SRAMC_PRAMECCA_EADR_SHIFT                (0U)
#define SRAMC_PRAMECCA_EADR_WIDTH                (17U)
#define SRAMC_PRAMECCA_EADR(x)                   (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMECCA_EADR_SHIFT)) & SRAMC_PRAMECCA_EADR_MASK)
#define SRAMC_PRAMECCA_EBNK_MASK                 (0x100000U)
#define SRAMC_PRAMECCA_EBNK_SHIFT                (20U)
#define SRAMC_PRAMECCA_EBNK_WIDTH                (1U)
#define SRAMC_PRAMECCA_EBNK(x)                   (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMECCA_EBNK_SHIFT)) & SRAMC_PRAMECCA_EBNK_MASK)
#define SRAMC_PRAMECCA_CTRLID_MASK               (0x1E00000U)
#define SRAMC_PRAMECCA_CTRLID_SHIFT              (21U)
#define SRAMC_PRAMECCA_CTRLID_WIDTH              (4U)
#define SRAMC_PRAMECCA_CTRLID(x)                 (((uint32_t)(((uint32_t)(x)) << SRAMC_PRAMECCA_CTRLID_SHIFT)) & SRAMC_PRAMECCA_CTRLID_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SRAMC_Register_Masks */

/*!
 * @}
 */ /* end of group SRAMC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_SRAMC_H_) */
