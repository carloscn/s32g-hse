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
**                                     2)Register name is changed 
**                                     from  CSR to CSRr inside structure.   
**
** ###################################################################
*/

/*!
 * @file S32R45_DMA.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_DMA
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
#if !defined(S32R45_DMA_H_)  /* Check if memory map has not been already included */
#define S32R45_DMA_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- DMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Peripheral_Access_Layer DMA Peripheral Access Layer
 * @{
 */

/** DMA_MP - Size of Registers Arrays */
#define DMA_MP_GRPRI_COUNT                      32u

/** DMA_MP - Register Layout Typedef */
typedef struct {
  __IO uint32_t CSR;                                    /**< Management Page Control Register, offset: 0x0 */
  __I  uint32_t ES;                                     /**< Management Page Error Status Register, offset: 0x4 */
  __I  uint32_t INT;                                    /**< Management Page Interrupt Request Status Register, offset: 0x8 */
  __I  uint32_t HRS;                                    /**< Management Page Hardware Request Status Register, offset: 0xC */
  uint8_t RESERVED_0[240];
  __IO uint32_t CH_GRPRI[DMA_MP_GRPRI_COUNT];           /**< Channel Arbitration Group Register, array offset: 0x100, array step: 0x4 */
} DMA_MP_Type, *DMA_MP_MemMapPtr;

/** Number of instances of the DMA module. */
#define DMA_INSTANCE_COUNT                       (2u)

/* DMA - Peripheral instance base addresses */
/** Peripheral DMA_0_MP base address */
#define DMA_0_MP_BASE                           (0x40144000u)
/** Peripheral DMA_0_MP base pointer */
#define DMA_0_MP                                ((DMA_MP_Type *)DMA_0_MP_BASE)
/** Peripheral DMA_1_MP base address */
#define DMA_1_MP_BASE                           (0x40244000u)
/** Peripheral DMA_1_MP base pointer */
#define DMA_1_MP                                ((DMA_MP_Type *)DMA_1_MP_BASE)
/** Array initializer of DMA_MP peripheral base addresses */
#define DMA_MP_BASE_ADDRS                       { DMA_0_MP_BASE, DMA_1_MP_BASE }
/** Array initializer of DMA_MP peripheral base pointers */
#define DMA_MP_BASE_PTRS                        { DMA_0_MP, DMA_1_MP }
/** Interrupt vectors for the DMA peripheral type */
#define DMA_CHN_IRQS                            { DMA0_0_15_IRQn, DMA0_16_31_IRQn, DMA1_0_15_IRQn, DMA1_16_31_IRQn }
#define DMA_ERROR_IRQS                          { DMA0_ERR0_31_IRQn, DMA1_ERR0_31_IRQn }

/* ----------------------------------------------------------------------------
   -- DMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Register_Masks DMA Register Masks
 * @{
 */

/*! @name CSR - Management Page Control Register */
/*! @{ */
#define DMA_MP_CSR_EDBG_MASK                  (0x2U)
#define DMA_MP_CSR_EDBG_SHIFT                 (1U)
#define DMA_MP_CSR_EDBG_WIDTH                 (1U)
#define DMA_MP_CSR_EDBG(x)                    (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_EDBG_SHIFT)) & DMA_MP_CSR_EDBG_MASK)
#define DMA_MP_CSR_ERCA_MASK                  (0x4U)
#define DMA_MP_CSR_ERCA_SHIFT                 (2U)
#define DMA_MP_CSR_ERCA_WIDTH                 (1U)
#define DMA_MP_CSR_ERCA(x)                    (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_ERCA_SHIFT)) & DMA_MP_CSR_ERCA_MASK)
#define DMA_MP_CSR_HAE_MASK                   (0x10U)
#define DMA_MP_CSR_HAE_SHIFT                  (4U)
#define DMA_MP_CSR_HAE_WIDTH                  (1U)
#define DMA_MP_CSR_HAE(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_HAE_SHIFT)) & DMA_MP_CSR_HAE_MASK)
#define DMA_MP_CSR_HALT_MASK                  (0x20U)
#define DMA_MP_CSR_HALT_SHIFT                 (5U)
#define DMA_MP_CSR_HALT_WIDTH                 (1U)
#define DMA_MP_CSR_HALT(x)                    (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_HALT_SHIFT)) & DMA_MP_CSR_HALT_MASK)
#define DMA_MP_CSR_GCLC_MASK                  (0x40U)
#define DMA_MP_CSR_GCLC_SHIFT                 (6U)
#define DMA_MP_CSR_GCLC_WIDTH                 (1U)
#define DMA_MP_CSR_GCLC(x)                    (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_GCLC_SHIFT)) & DMA_MP_CSR_GCLC_MASK)
#define DMA_MP_CSR_GMRC_MASK                  (0x80U)
#define DMA_MP_CSR_GMRC_SHIFT                 (7U)
#define DMA_MP_CSR_GMRC_WIDTH                 (1U)
#define DMA_MP_CSR_GMRC(x)                    (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_GMRC_SHIFT)) & DMA_MP_CSR_GMRC_MASK)
#define DMA_MP_CSR_ECX_MASK                   (0x100U)
#define DMA_MP_CSR_ECX_SHIFT                  (8U)
#define DMA_MP_CSR_ECX_WIDTH                  (1U)
#define DMA_MP_CSR_ECX(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_ECX_SHIFT)) & DMA_MP_CSR_ECX_MASK)
#define DMA_MP_CSR_CX_MASK                    (0x200U)
#define DMA_MP_CSR_CX_SHIFT                   (9U)
#define DMA_MP_CSR_CX_WIDTH                   (1U)
#define DMA_MP_CSR_CX(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_CX_SHIFT)) & DMA_MP_CSR_CX_MASK)
#define DMA_MP_CSR_ACTIVE_ID_MASK             (0x1F000000U)
#define DMA_MP_CSR_ACTIVE_ID_SHIFT            (24U)
#define DMA_MP_CSR_ACTIVE_ID_WIDTH            (5U)
#define DMA_MP_CSR_ACTIVE_ID(x)               (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_ACTIVE_ID_SHIFT)) & DMA_MP_CSR_ACTIVE_ID_MASK)
#define DMA_MP_CSR_ACTIVE_MASK                (0x80000000U)
#define DMA_MP_CSR_ACTIVE_SHIFT               (31U)
#define DMA_MP_CSR_ACTIVE_WIDTH               (1U)
#define DMA_MP_CSR_ACTIVE(x)                  (((uint32_t)(((uint32_t)(x)) << DMA_MP_CSR_ACTIVE_SHIFT)) & DMA_MP_CSR_ACTIVE_MASK)
/*! @} */

/*! @name ES - Management Page Error Status Register */
/*! @{ */
#define DMA_MP_ES_DBE_MASK                    (0x1U)
#define DMA_MP_ES_DBE_SHIFT                   (0U)
#define DMA_MP_ES_DBE_WIDTH                   (1U)
#define DMA_MP_ES_DBE(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_DBE_SHIFT)) & DMA_MP_ES_DBE_MASK)
#define DMA_MP_ES_SBE_MASK                    (0x2U)
#define DMA_MP_ES_SBE_SHIFT                   (1U)
#define DMA_MP_ES_SBE_WIDTH                   (1U)
#define DMA_MP_ES_SBE(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_SBE_SHIFT)) & DMA_MP_ES_SBE_MASK)
#define DMA_MP_ES_SGE_MASK                    (0x4U)
#define DMA_MP_ES_SGE_SHIFT                   (2U)
#define DMA_MP_ES_SGE_WIDTH                   (1U)
#define DMA_MP_ES_SGE(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_SGE_SHIFT)) & DMA_MP_ES_SGE_MASK)
#define DMA_MP_ES_NCE_MASK                    (0x8U)
#define DMA_MP_ES_NCE_SHIFT                   (3U)
#define DMA_MP_ES_NCE_WIDTH                   (1U)
#define DMA_MP_ES_NCE(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_NCE_SHIFT)) & DMA_MP_ES_NCE_MASK)
#define DMA_MP_ES_DOE_MASK                    (0x10U)
#define DMA_MP_ES_DOE_SHIFT                   (4U)
#define DMA_MP_ES_DOE_WIDTH                   (1U)
#define DMA_MP_ES_DOE(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_DOE_SHIFT)) & DMA_MP_ES_DOE_MASK)
#define DMA_MP_ES_DAE_MASK                    (0x20U)
#define DMA_MP_ES_DAE_SHIFT                   (5U)
#define DMA_MP_ES_DAE_WIDTH                   (1U)
#define DMA_MP_ES_DAE(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_DAE_SHIFT)) & DMA_MP_ES_DAE_MASK)
#define DMA_MP_ES_SOE_MASK                    (0x40U)
#define DMA_MP_ES_SOE_SHIFT                   (6U)
#define DMA_MP_ES_SOE_WIDTH                   (1U)
#define DMA_MP_ES_SOE(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_SOE_SHIFT)) & DMA_MP_ES_SOE_MASK)
#define DMA_MP_ES_SAE_MASK                    (0x80U)
#define DMA_MP_ES_SAE_SHIFT                   (7U)
#define DMA_MP_ES_SAE_WIDTH                   (1U)
#define DMA_MP_ES_SAE(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_SAE_SHIFT)) & DMA_MP_ES_SAE_MASK)
#define DMA_MP_ES_ECX_MASK                    (0x100U)
#define DMA_MP_ES_ECX_SHIFT                   (8U)
#define DMA_MP_ES_ECX_WIDTH                   (1U)
#define DMA_MP_ES_ECX(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_ECX_SHIFT)) & DMA_MP_ES_ECX_MASK)
#define DMA_MP_ES_UCE_MASK                    (0x200U)
#define DMA_MP_ES_UCE_SHIFT                   (9U)
#define DMA_MP_ES_UCE_WIDTH                   (1U)
#define DMA_MP_ES_UCE(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_UCE_SHIFT)) & DMA_MP_ES_UCE_MASK)
#define DMA_MP_ES_ERRCHN_MASK                 (0x1F000000U)
#define DMA_MP_ES_ERRCHN_SHIFT                (24U)
#define DMA_MP_ES_ERRCHN_WIDTH                (5U)
#define DMA_MP_ES_ERRCHN(x)                   (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_ERRCHN_SHIFT)) & DMA_MP_ES_ERRCHN_MASK)
#define DMA_MP_ES_VLD_MASK                    (0x80000000U)
#define DMA_MP_ES_VLD_SHIFT                   (31U)
#define DMA_MP_ES_VLD_WIDTH                   (1U)
#define DMA_MP_ES_VLD(x)                      (((uint32_t)(((uint32_t)(x)) << DMA_MP_ES_VLD_SHIFT)) & DMA_MP_ES_VLD_MASK)
/*! @} */

/*! @name INT - Management Page Interrupt Request Status Register */
/*! @{ */
#define DMA_MP_INT_INT_MASK                   (0xFFFFFFFFU)
#define DMA_MP_INT_INT_SHIFT                  (0U)
#define DMA_MP_INT_INT_WIDTH                  (32U)
#define DMA_MP_INT_INT(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_MP_INT_INT_SHIFT)) & DMA_MP_INT_INT_MASK)
/*! @} */

/*! @name HRS - Management Page Hardware Request Status Register */
/*! @{ */
#define DMA_MP_HRS_HRS_MASK                   (0xFFFFFFFFU)
#define DMA_MP_HRS_HRS_SHIFT                  (0U)
#define DMA_MP_HRS_HRS_WIDTH                  (32U)
#define DMA_MP_HRS_HRS(x)                     (((uint32_t)(((uint32_t)(x)) << DMA_MP_HRS_HRS_SHIFT)) & DMA_MP_HRS_HRS_MASK)
/*! @} */

/*! @name CH_GRPRI - Channel Arbitration Group Register */
/*! @{ */
#define DMA_CH_GRPRI_GRPRI_MASK                  (0x1FU)
#define DMA_CH_GRPRI_GRPRI_SHIFT                 (0U)
#define DMA_CH_GRPRI_GRPRI_WIDTH                 (5U)
#define DMA_CH_GRPRI_GRPRI(x)                    (((uint32_t)(((uint32_t)(x)) << DMA_CH_GRPRI_GRPRI_SHIFT)) & DMA_CH_GRPRI_GRPRI_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group DMA_Register_Masks */

/*!
 * @}
 */ /* end of group DMA_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_DMA_H_) */
