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
 * @file S32R45_FSC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_FSC
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
#if !defined(S32R45_FSC_H_)  /* Check if memory map has not been already included */
#define S32R45_FSC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- FSC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FSC_Peripheral_Access_Layer FSC Peripheral Access Layer
 * @{
 */

/** FSC - Register Layout Typedef */
typedef struct {
  __O  uint32_t SCBISTC;                           /**< FSC BIST Control, offset: 0x0 */
  __I  uint32_t SCBISTA;                           /**< FSC BIST Activity, offset: 0x4 */
  __IO uint32_t SCCETH;                            /**< FSC Correctable Errors Threshold, offset: 0x8 */
  uint8_t RESERVED_0[4];
  __I  uint32_t SCLF0;                             /**< FSC Latent Fault, offset: 0x10 */
  uint8_t RESERVED_1[12];
  __I  uint32_t SCMF0;                             /**< FSC Mission Fault, offset: 0x20 */
  uint8_t RESERVED_2[12];
  __I  uint32_t SCCETHF0;                          /**< FSC Correctble Error Threshold Fault, offset: 0x30 */
} FSC_Type, *FSC_MemMapPtr;

/** Number of instances of the FSC module. */
#define FSC_INSTANCE_COUNT                       (1u)

/* FSC - Peripheral instance base addresses */
/** Peripheral FSC base address */
#define FSC_BASE                                 (0x50600000u)
/** Peripheral FSC base pointer */
#define FSC                                      ((FSC_Type *)FSC_BASE)
/** Array initializer of FSC peripheral base addresses */
#define FSC_BASE_ADDRS                           { FSC_BASE }
/** Array initializer of FSC peripheral base pointers */
#define FSC_BASE_PTRS                            { FSC }

/* ----------------------------------------------------------------------------
   -- FSC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FSC_Register_Masks FSC Register Masks
 * @{
 */

/*! @name SCBISTC - FSC BIST Control */
/*! @{ */
#define FSC_SCBISTC_BISTSTART_MASK               (0x1U)
#define FSC_SCBISTC_BISTSTART_SHIFT              (0U)
#define FSC_SCBISTC_BISTSTART_WIDTH              (1U)
#define FSC_SCBISTC_BISTSTART(x)                 (((uint32_t)(((uint32_t)(x)) << FSC_SCBISTC_BISTSTART_SHIFT)) & FSC_SCBISTC_BISTSTART_MASK)
#define FSC_SCBISTC_BISTSTEP_MASK                (0x2U)
#define FSC_SCBISTC_BISTSTEP_SHIFT               (1U)
#define FSC_SCBISTC_BISTSTEP_WIDTH               (1U)
#define FSC_SCBISTC_BISTSTEP(x)                  (((uint32_t)(((uint32_t)(x)) << FSC_SCBISTC_BISTSTEP_SHIFT)) & FSC_SCBISTC_BISTSTEP_MASK)
/*! @} */

/*! @name SCBISTA - FSC BIST Activity */
/*! @{ */
#define FSC_SCBISTA_BISTDONE_MASK                (0x1FU)
#define FSC_SCBISTA_BISTDONE_SHIFT               (0U)
#define FSC_SCBISTA_BISTDONE_WIDTH               (5U)
#define FSC_SCBISTA_BISTDONE(x)                  (((uint32_t)(((uint32_t)(x)) << FSC_SCBISTA_BISTDONE_SHIFT)) & FSC_SCBISTA_BISTDONE_MASK)
#define FSC_SCBISTA_BISTERR_MASK                 (0x3E0U)
#define FSC_SCBISTA_BISTERR_SHIFT                (5U)
#define FSC_SCBISTA_BISTERR_WIDTH                (5U)
#define FSC_SCBISTA_BISTERR(x)                   (((uint32_t)(((uint32_t)(x)) << FSC_SCBISTA_BISTERR_SHIFT)) & FSC_SCBISTA_BISTERR_MASK)
/*! @} */

/*! @name SCCETH - FSC Correctable Errors Threshold */
/*! @{ */
#define FSC_SCCETH_CERRTHRES_MASK                (0xFFU)
#define FSC_SCCETH_CERRTHRES_SHIFT               (0U)
#define FSC_SCCETH_CERRTHRES_WIDTH               (8U)
#define FSC_SCCETH_CERRTHRES(x)                  (((uint32_t)(((uint32_t)(x)) << FSC_SCCETH_CERRTHRES_SHIFT)) & FSC_SCCETH_CERRTHRES_MASK)
/*! @} */

/*! @name SCLF0 - FSC Latent Fault */
/*! @{ */
#define FSC_SCLF0_LATENTFAULT_MASK               (0x3FU)
#define FSC_SCLF0_LATENTFAULT_SHIFT              (0U)
#define FSC_SCLF0_LATENTFAULT_WIDTH              (6U)
#define FSC_SCLF0_LATENTFAULT(x)                 (((uint32_t)(((uint32_t)(x)) << FSC_SCLF0_LATENTFAULT_SHIFT)) & FSC_SCLF0_LATENTFAULT_MASK)
/*! @} */

/*! @name SCMF0 - FSC Mission Fault */
/*! @{ */
#define FSC_SCMF0_MISSIONFAULT_MASK              (0x3FU)
#define FSC_SCMF0_MISSIONFAULT_SHIFT             (0U)
#define FSC_SCMF0_MISSIONFAULT_WIDTH             (6U)
#define FSC_SCMF0_MISSIONFAULT(x)                (((uint32_t)(((uint32_t)(x)) << FSC_SCMF0_MISSIONFAULT_SHIFT)) & FSC_SCMF0_MISSIONFAULT_MASK)
/*! @} */

/*! @name SCCETHF0 - FSC Correctble Error Threshold Fault */
/*! @{ */
#define FSC_SCCETHF0_CERRTHFAULT_MASK            (0x3FU)
#define FSC_SCCETHF0_CERRTHFAULT_SHIFT           (0U)
#define FSC_SCCETHF0_CERRTHFAULT_WIDTH           (6U)
#define FSC_SCCETHF0_CERRTHFAULT(x)              (((uint32_t)(((uint32_t)(x)) << FSC_SCCETHF0_CERRTHFAULT_SHIFT)) & FSC_SCCETHF0_CERRTHFAULT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group FSC_Register_Masks */

/*!
 * @}
 */ /* end of group FSC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_FSC_H_) */
