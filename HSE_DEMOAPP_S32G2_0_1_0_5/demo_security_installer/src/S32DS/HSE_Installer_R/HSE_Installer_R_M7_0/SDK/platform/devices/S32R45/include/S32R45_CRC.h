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
**                                     2)Module name is changed 
**                                     from CRC_0 to CRC.
**
** ###################################################################
*/

/*!
 * @file S32R45_CRC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_CRC
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
#if !defined(S32R45_CRC_H_)  /* Check if memory map has not been already included */
#define S32R45_CRC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CRC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRC_Peripheral_Access_Layer CRC Peripheral Access Layer
 * @{
 */

/** CRC - Size of Registers Arrays */
#define CRC_CHANNEL_COUNT                         3u

/** CRC - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x10 */
    __IO uint32_t CFG;                               /**< Configuration Register, array offset: 0x0, array step: 0x10 */
    __IO uint32_t INP;                               /**< Input Register, array offset: 0x4, array step: 0x10 */
    __IO uint32_t CSTAT;                             /**< Current Status Register, array offset: 0x8, array step: 0x10 */
    __I  uint32_t OUTP;                              /**< Output Register, array offset: 0xC, array step: 0x10 */
  } CHANNEL[CRC_CHANNEL_COUNT];
} CRC_Type, *CRC_MemMapPtr;

/** Number of instances of the CRC module. */
#define CRC_INSTANCE_COUNT                       (1u)

/* CRC - Peripheral instance base addresses */
/** Peripheral CRC base address */
#define CRC_BASE                                 (0x40190000u)
/** Peripheral CRC base pointer */
#define CRC                                      ((CRC_Type *)CRC_BASE)
/** Array initializer of CRC peripheral base addresses */
#define CRC_BASE_ADDRS                           { CRC_BASE }
/** Array initializer of CRC peripheral base pointers */
#define CRC_BASE_PTRS                            { CRC }

/* ----------------------------------------------------------------------------
   -- CRC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRC_Register_Masks CRC Register Masks
 * @{
 */

/*! @name CFG - Configuration Register */
/*! @{ */
#define CRC_CFG_INV_MASK                         (0x1U)
#define CRC_CFG_INV_SHIFT                        (0U)
#define CRC_CFG_INV_WIDTH                        (1U)
#define CRC_CFG_INV(x)                           (((uint32_t)(((uint32_t)(x)) << CRC_CFG_INV_SHIFT)) & CRC_CFG_INV_MASK)
#define CRC_CFG_SWAP_MASK                        (0x2U)
#define CRC_CFG_SWAP_SHIFT                       (1U)
#define CRC_CFG_SWAP_WIDTH                       (1U)
#define CRC_CFG_SWAP(x)                          (((uint32_t)(((uint32_t)(x)) << CRC_CFG_SWAP_SHIFT)) & CRC_CFG_SWAP_MASK)
#define CRC_CFG_POLYG_MASK                       (0xCU)
#define CRC_CFG_POLYG_SHIFT                      (2U)
#define CRC_CFG_POLYG_WIDTH                      (2U)
#define CRC_CFG_POLYG(x)                         (((uint32_t)(((uint32_t)(x)) << CRC_CFG_POLYG_SHIFT)) & CRC_CFG_POLYG_MASK)
#define CRC_CFG_SWAP_BITWISE_MASK                (0x10U)
#define CRC_CFG_SWAP_BITWISE_SHIFT               (4U)
#define CRC_CFG_SWAP_BITWISE_WIDTH               (1U)
#define CRC_CFG_SWAP_BITWISE(x)                  (((uint32_t)(((uint32_t)(x)) << CRC_CFG_SWAP_BITWISE_SHIFT)) & CRC_CFG_SWAP_BITWISE_MASK)
#define CRC_CFG_SWAP_BYTEWISE_MASK               (0x20U)
#define CRC_CFG_SWAP_BYTEWISE_SHIFT              (5U)
#define CRC_CFG_SWAP_BYTEWISE_WIDTH              (1U)
#define CRC_CFG_SWAP_BYTEWISE(x)                 (((uint32_t)(((uint32_t)(x)) << CRC_CFG_SWAP_BYTEWISE_SHIFT)) & CRC_CFG_SWAP_BYTEWISE_MASK)
/*! @} */

/*! @name INP - Input Register */
/*! @{ */
#define CRC_INP_INP_MASK                         (0xFFFFFFFFU)
#define CRC_INP_INP_SHIFT                        (0U)
#define CRC_INP_INP_WIDTH                        (32U)
#define CRC_INP_INP(x)                           (((uint32_t)(((uint32_t)(x)) << CRC_INP_INP_SHIFT)) & CRC_INP_INP_MASK)
/*! @} */

/*! @name CSTAT - Current Status Register */
/*! @{ */
#define CRC_CSTAT_CSTAT_MASK                     (0xFFFFFFFFU)
#define CRC_CSTAT_CSTAT_SHIFT                    (0U)
#define CRC_CSTAT_CSTAT_WIDTH                    (32U)
#define CRC_CSTAT_CSTAT(x)                       (((uint32_t)(((uint32_t)(x)) << CRC_CSTAT_CSTAT_SHIFT)) & CRC_CSTAT_CSTAT_MASK)
/*! @} */

/*! @name OUTP - Output Register */
/*! @{ */
#define CRC_OUTP_OUTP_MASK                       (0xFFFFFFFFU)
#define CRC_OUTP_OUTP_SHIFT                      (0U)
#define CRC_OUTP_OUTP_WIDTH                      (32U)
#define CRC_OUTP_OUTP(x)                         (((uint32_t)(((uint32_t)(x)) << CRC_OUTP_OUTP_SHIFT)) & CRC_OUTP_OUTP_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CRC_Register_Masks */

/*!
 * @}
 */ /* end of group CRC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_CRC_H_) */
