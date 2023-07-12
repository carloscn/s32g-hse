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
**                                     2)Register names are changed          
**                                     -from RSTGT_R to R.                   
**                                     -from RSTGT_W to W.
**
** ###################################################################
*/

/*!
 * @file S32R45_SEMA42.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_SEMA42
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
#if !defined(S32R45_SEMA42_H_)  /* Check if memory map has not been already included */
#define S32R45_SEMA42_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SEMA42 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SEMA42_Peripheral_Access_Layer SEMA42 Peripheral Access Layer
 * @{
 */

/** SEMA42 - Size of Registers Arrays */
#define SEMA42_GATE_COUNT                         16u

/** SEMA42 - Register Layout Typedef */
typedef struct {
  __IO uint8_t GATE[SEMA42_GATE_COUNT];            /**< Gate Register, array offset: 0x0, array step: 0x1 */
  uint8_t RESERVED_0[50];
  union {                                          /* offset: 0x42 */
    __I  uint16_t R;                                 /**< Reset Gate Read, offset: 0x42 */
    __O  uint16_t W;                                 /**< Reset Gate Write, offset: 0x42 */
  } RSTGT;
} SEMA42_Type, *SEMA42_MemMapPtr;

/** Number of instances of the SEMA42 module. */
#define SEMA42_INSTANCE_COUNT                    (1u)

/* SEMA42 - Peripheral instance base addresses */
/** Peripheral SEMA42 base address */
#define SEMA42_BASE                              (0x40298000u)
/** Peripheral SEMA42 base pointer */
#define SEMA42                                   ((SEMA42_Type *)SEMA42_BASE)
/** Array initializer of SEMA42 peripheral base addresses */
#define SEMA42_BASE_ADDRS                        { SEMA42_BASE }
/** Array initializer of SEMA42 peripheral base pointers */
#define SEMA42_BASE_PTRS                         { SEMA42 }

/* ----------------------------------------------------------------------------
   -- SEMA42 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SEMA42_Register_Masks SEMA42 Register Masks
 * @{
 */

/*! @name GATE - Gate Register */
/*! @{ */
#define SEMA42_GATE_GTFSM_MASK                   (0xFU)
#define SEMA42_GATE_GTFSM_SHIFT                  (0U)
#define SEMA42_GATE_GTFSM_WIDTH                  (4U)
#define SEMA42_GATE_GTFSM(x)                     (((uint8_t)(((uint8_t)(x)) << SEMA42_GATE_GTFSM_SHIFT)) & SEMA42_GATE_GTFSM_MASK)
/*! @} */

/*! @name RSTGT_R - Reset Gate Read */
/*! @{ */
#define SEMA42_RSTGT_R_RSTGTN_MASK               (0xFFU)
#define SEMA42_RSTGT_R_RSTGTN_SHIFT              (0U)
#define SEMA42_RSTGT_R_RSTGTN_WIDTH              (8U)
#define SEMA42_RSTGT_R_RSTGTN(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_R_RSTGTN_SHIFT)) & SEMA42_RSTGT_R_RSTGTN_MASK)
#define SEMA42_RSTGT_R_RSTGMS_MASK               (0xF00U)
#define SEMA42_RSTGT_R_RSTGMS_SHIFT              (8U)
#define SEMA42_RSTGT_R_RSTGMS_WIDTH              (4U)
#define SEMA42_RSTGT_R_RSTGMS(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_R_RSTGMS_SHIFT)) & SEMA42_RSTGT_R_RSTGMS_MASK)
#define SEMA42_RSTGT_R_RSTGSM_MASK               (0x3000U)
#define SEMA42_RSTGT_R_RSTGSM_SHIFT              (12U)
#define SEMA42_RSTGT_R_RSTGSM_WIDTH              (2U)
#define SEMA42_RSTGT_R_RSTGSM(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_R_RSTGSM_SHIFT)) & SEMA42_RSTGT_R_RSTGSM_MASK)
#define SEMA42_RSTGT_R_ROZ_MASK                  (0xC000U)
#define SEMA42_RSTGT_R_ROZ_SHIFT                 (14U)
#define SEMA42_RSTGT_R_ROZ_WIDTH                 (2U)
#define SEMA42_RSTGT_R_ROZ(x)                    (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_R_ROZ_SHIFT)) & SEMA42_RSTGT_R_ROZ_MASK)
/*! @} */

/*! @name RSTGT_W - Reset Gate Write */
/*! @{ */
#define SEMA42_RSTGT_W_RSTGTN_MASK               (0xFFU)
#define SEMA42_RSTGT_W_RSTGTN_SHIFT              (0U)
#define SEMA42_RSTGT_W_RSTGTN_WIDTH              (8U)
#define SEMA42_RSTGT_W_RSTGTN(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_W_RSTGTN_SHIFT)) & SEMA42_RSTGT_W_RSTGTN_MASK)
#define SEMA42_RSTGT_W_RSTGDP_MASK               (0xFF00U)
#define SEMA42_RSTGT_W_RSTGDP_SHIFT              (8U)
#define SEMA42_RSTGT_W_RSTGDP_WIDTH              (8U)
#define SEMA42_RSTGT_W_RSTGDP(x)                 (((uint16_t)(((uint16_t)(x)) << SEMA42_RSTGT_W_RSTGDP_SHIFT)) & SEMA42_RSTGT_W_RSTGDP_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SEMA42_Register_Masks */

/*!
 * @}
 */ /* end of group SEMA42_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_SEMA42_H_) */
