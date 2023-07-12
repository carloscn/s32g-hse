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
 * @file S32R45_RESET.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_RESET
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
#if !defined(S32R45_RESET_H_)  /* Check if memory map has not been already included */
#define S32R45_RESET_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- RESET Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RESET_Peripheral_Access_Layer RESET Peripheral Access Layer
 * @{
 */

/** RESET - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[4];
  __IO uint32_t RD1_CTRL_REG;                      /**< Software Reset Domain 1 Control, offset: 0x4 */
  __IO uint32_t RD2_CTRL_REG;                      /**< Software Reset Domain 2 Control, offset: 0x8 */
  __IO uint32_t RD3_CTRL_REG;                      /**< Software Reset Domain 3 Control, offset: 0xC */
  uint8_t RESERVED_1[116];
  __I  uint32_t RD1_STAT_REG;                      /**< Software Reset Domain 1 Status, offset: 0x84 */
  __I  uint32_t RD2_STAT_REG;                      /**< Software Reset Domain 2 Status, offset: 0x88 */
  __I  uint32_t RD3_STAT_REG;                      /**< Software Reset Domain 3 Status, offset: 0x8C */
} RESET_Type, *RESET_MemMapPtr;

/** Number of instances of the RESET module. */
#define RESET_INSTANCE_COUNT                     (1u)

/* RESET - Peripheral instance base addresses */
/** Peripheral RDC base address */
#define RDC_BASE                                 (0x40080000u)
/** Peripheral RDC base pointer */
#define RDC                                      ((RESET_Type *)RDC_BASE)
/** Array initializer of RESET peripheral base addresses */
#define RESET_BASE_ADDRS                         { RDC_BASE }
/** Array initializer of RESET peripheral base pointers */
#define RESET_BASE_PTRS                          { RDC }

/* ----------------------------------------------------------------------------
   -- RESET Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup RESET_Register_Masks RESET Register Masks
 * @{
 */

/*! @name RD1_CTRL_REG - Software Reset Domain 1 Control */
/*! @{ */
#define RESET_RD1_CTRL_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_MASK (0x8U)
#define RESET_RD1_CTRL_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_SHIFT (3U)
#define RESET_RD1_CTRL_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_WIDTH (1U)
#define RESET_RD1_CTRL_REG_RD1_INTERCONNECT_INTERFACE_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << RESET_RD1_CTRL_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_SHIFT)) & RESET_RD1_CTRL_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_MASK)
#define RESET_RD1_CTRL_REG_RD1_CTRL_UNLOCK_MASK  (0x80000000U)
#define RESET_RD1_CTRL_REG_RD1_CTRL_UNLOCK_SHIFT (31U)
#define RESET_RD1_CTRL_REG_RD1_CTRL_UNLOCK_WIDTH (1U)
#define RESET_RD1_CTRL_REG_RD1_CTRL_UNLOCK(x)    (((uint32_t)(((uint32_t)(x)) << RESET_RD1_CTRL_REG_RD1_CTRL_UNLOCK_SHIFT)) & RESET_RD1_CTRL_REG_RD1_CTRL_UNLOCK_MASK)
/*! @} */

/*! @name RD2_CTRL_REG - Software Reset Domain 2 Control */
/*! @{ */
#define RESET_RD2_CTRL_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_MASK (0x8U)
#define RESET_RD2_CTRL_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_SHIFT (3U)
#define RESET_RD2_CTRL_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_WIDTH (1U)
#define RESET_RD2_CTRL_REG_RD2_INTERCONNECT_INTERFACE_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << RESET_RD2_CTRL_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_SHIFT)) & RESET_RD2_CTRL_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_MASK)
#define RESET_RD2_CTRL_REG_RD2_CTRL_UNLOCK_MASK  (0x80000000U)
#define RESET_RD2_CTRL_REG_RD2_CTRL_UNLOCK_SHIFT (31U)
#define RESET_RD2_CTRL_REG_RD2_CTRL_UNLOCK_WIDTH (1U)
#define RESET_RD2_CTRL_REG_RD2_CTRL_UNLOCK(x)    (((uint32_t)(((uint32_t)(x)) << RESET_RD2_CTRL_REG_RD2_CTRL_UNLOCK_SHIFT)) & RESET_RD2_CTRL_REG_RD2_CTRL_UNLOCK_MASK)
/*! @} */

/*! @name RD3_CTRL_REG - Software Reset Domain 3 Control */
/*! @{ */
#define RESET_RD3_CTRL_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_MASK (0x8U)
#define RESET_RD3_CTRL_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_SHIFT (3U)
#define RESET_RD3_CTRL_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_WIDTH (1U)
#define RESET_RD3_CTRL_REG_RD3_INTERCONNECT_INTERFACE_DISABLE(x) (((uint32_t)(((uint32_t)(x)) << RESET_RD3_CTRL_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_SHIFT)) & RESET_RD3_CTRL_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_MASK)
#define RESET_RD3_CTRL_REG_RD3_CTRL_UNLOCK_MASK  (0x80000000U)
#define RESET_RD3_CTRL_REG_RD3_CTRL_UNLOCK_SHIFT (31U)
#define RESET_RD3_CTRL_REG_RD3_CTRL_UNLOCK_WIDTH (1U)
#define RESET_RD3_CTRL_REG_RD3_CTRL_UNLOCK(x)    (((uint32_t)(((uint32_t)(x)) << RESET_RD3_CTRL_REG_RD3_CTRL_UNLOCK_SHIFT)) & RESET_RD3_CTRL_REG_RD3_CTRL_UNLOCK_MASK)
/*! @} */

/*! @name RD1_STAT_REG - Software Reset Domain 1 Status */
/*! @{ */
#define RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_MASK (0x8U)
#define RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_SHIFT (3U)
#define RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_WIDTH (1U)
#define RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT(x) (((uint32_t)(((uint32_t)(x)) << RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_SHIFT)) & RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_MASK)
#define RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_STAT_MASK (0x10U)
#define RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_STAT_SHIFT (4U)
#define RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_STAT_WIDTH (1U)
#define RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_STAT(x) (((uint32_t)(((uint32_t)(x)) << RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_STAT_SHIFT)) & RESET_RD1_STAT_REG_RD1_INTERCONNECT_INTERFACE_DISABLE_STAT_MASK)
/*! @} */

/*! @name RD2_STAT_REG - Software Reset Domain 2 Status */
/*! @{ */
#define RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_MASK (0x8U)
#define RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_SHIFT (3U)
#define RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_WIDTH (1U)
#define RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT(x) (((uint32_t)(((uint32_t)(x)) << RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_SHIFT)) & RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_MASK)
#define RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_STAT_MASK (0x10U)
#define RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_STAT_SHIFT (4U)
#define RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_STAT_WIDTH (1U)
#define RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_STAT(x) (((uint32_t)(((uint32_t)(x)) << RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_STAT_SHIFT)) & RESET_RD2_STAT_REG_RD2_INTERCONNECT_INTERFACE_DISABLE_STAT_MASK)
/*! @} */

/*! @name RD3_STAT_REG - Software Reset Domain 3 Status */
/*! @{ */
#define RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_MASK (0x8U)
#define RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_SHIFT (3U)
#define RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_WIDTH (1U)
#define RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT(x) (((uint32_t)(((uint32_t)(x)) << RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_SHIFT)) & RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT_MASK)
#define RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_STAT_MASK (0x10U)
#define RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_STAT_SHIFT (4U)
#define RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_STAT_WIDTH (1U)
#define RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_STAT(x) (((uint32_t)(((uint32_t)(x)) << RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_STAT_SHIFT)) & RESET_RD3_STAT_REG_RD3_INTERCONNECT_INTERFACE_DISABLE_STAT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group RESET_Register_Masks */

/*!
 * @}
 */ /* end of group RESET_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_RESET_H_) */
