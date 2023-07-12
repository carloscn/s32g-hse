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
 * @file S32R45_VSPA_VCPU_Host_Messaging.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA_VCPU_Host_Messaging
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
#if !defined(S32R45_VSPA_VCPU_Host_Messaging_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_VCPU_Host_Messaging_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA_VCPU_Host_Messaging Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_VCPU_Host_Messaging_Peripheral_Access_Layer VSPA_VCPU_Host_Messaging Peripheral Access Layer
 * @{
 */

/** VSPA_VCPU_Host_Messaging - Size of Registers Arrays */
#define VSPA_VCPU_Host_Messaging_VCPU_HOST_FLAGS_COUNT 2u
#define VSPA_VCPU_Host_Messaging_HOST_VCPU_FLAGS_COUNT 2u

/** VSPA_VCPU_Host_Messaging - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[20];
  __IO uint32_t VCPU_HOST_FLAGS[VSPA_VCPU_Host_Messaging_VCPU_HOST_FLAGS_COUNT]; /**< VCPU to Host flags register a, array offset: 0x14, array step: 0x4 */
  __IO uint32_t HOST_VCPU_FLAGS[VSPA_VCPU_Host_Messaging_HOST_VCPU_FLAGS_COUNT]; /**< Host to VCPU Flags register a, array offset: 0x1C, array step: 0x4 */
  uint8_t RESERVED_1[1564];
  __O  uint32_t VCPU_OUT_0_MSB;                    /**< VCPU to host outbox message n MSB register, offset: 0x640 */
  __O  uint32_t VCPU_OUT_0_LSB;                    /**< VCPU to host outbox message n LSB register, offset: 0x644 */
  __O  uint32_t VCPU_OUT_1_MSB;                    /**< VCPU to host outbox message n MSB register, offset: 0x648 */
  __O  uint32_t VCPU_OUT_1_LSB;                    /**< VCPU to host outbox message n LSB register, offset: 0x64C */
  __I  uint32_t VCPU_IN_0_MSB;                     /**< VCPU from Host Inbox Message n MSB, offset: 0x650 */
  __I  uint32_t VCPU_IN_0_LSB;                     /**< VCPU from host inbox message n LSB register, offset: 0x654 */
  __I  uint32_t VCPU_IN_1_MSB;                     /**< VCPU from Host Inbox Message n MSB, offset: 0x658 */
  __I  uint32_t VCPU_IN_1_LSB;                     /**< VCPU from host inbox message n LSB register, offset: 0x65C */
  __I  uint32_t VCPU_MBOX_STATUS;                  /**< VCPU to Host Mailbox Status register, offset: 0x660 */
  uint8_t RESERVED_2[28];
  __O  uint32_t HOST_OUT_0_MSB;                    /**< Host to VCPU Outbox Message n MSB register, offset: 0x680 */
  __O  uint32_t HOST_OUT_0_LSB;                    /**< Host to VCPU Outbox Message n LSB register, offset: 0x684 */
  __O  uint32_t HOST_OUT_1_MSB;                    /**< Host to VCPU Outbox Message n MSB register, offset: 0x688 */
  __O  uint32_t HOST_OUT_1_LSB;                    /**< Host to VCPU Outbox Message n LSB register, offset: 0x68C */
  __I  uint32_t HOST_IN_0_MSB;                     /**< Host from VCPU Inbox Message n MSB, offset: 0x690 */
  __I  uint32_t HOST_IN_0_LSB;                     /**< Host from VCPU Inbox Message n LSB Register, offset: 0x694 */
  __I  uint32_t HOST_IN_1_MSB;                     /**< Host from VCPU Inbox Message n MSB, offset: 0x698 */
  __I  uint32_t HOST_IN_1_LSB;                     /**< Host from VCPU Inbox Message n LSB Register, offset: 0x69C */
  __I  uint32_t HOST_MBOX_STATUS;                  /**< Host Mailbox Status Register, offset: 0x6A0 */
} VSPA_VCPU_Host_Messaging_Type, *VSPA_VCPU_Host_Messaging_MemMapPtr;

/** Number of instances of the VSPA_VCPU_Host_Messaging module. */
#define VSPA_VCPU_Host_Messaging_INSTANCE_COUNT  (2u)

/* VSPA_VCPU_Host_Messaging - Peripheral instance base addresses */
/** Peripheral LAX_0_VCPU_Host_Messaging base address */
#define LAX_0_VCPU_Host_Messaging_BASE           (0x44028000u)
/** Peripheral LAX_0_VCPU_Host_Messaging base pointer */
#define LAX_0_VCPU_Host_Messaging                ((VSPA_VCPU_Host_Messaging_Type *)LAX_0_VCPU_Host_Messaging_BASE)
/** Peripheral LAX_1_VCPU_Host_Messaging base address */
#define LAX_1_VCPU_Host_Messaging_BASE           (0x44029000u)
/** Peripheral LAX_1_VCPU_Host_Messaging base pointer */
#define LAX_1_VCPU_Host_Messaging                ((VSPA_VCPU_Host_Messaging_Type *)LAX_1_VCPU_Host_Messaging_BASE)
/** Array initializer of VSPA_VCPU_Host_Messaging peripheral base addresses */
#define VSPA_VCPU_Host_Messaging_BASE_ADDRS      { LAX_0_VCPU_Host_Messaging_BASE, LAX_1_VCPU_Host_Messaging_BASE }
/** Array initializer of VSPA_VCPU_Host_Messaging peripheral base pointers */
#define VSPA_VCPU_Host_Messaging_BASE_PTRS       { LAX_0_VCPU_Host_Messaging, LAX_1_VCPU_Host_Messaging }

/* ----------------------------------------------------------------------------
   -- VSPA_VCPU_Host_Messaging Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_VCPU_Host_Messaging_Register_Masks VSPA_VCPU_Host_Messaging Register Masks
 * @{
 */

/*! @name VCPU_HOST_FLAGS - VCPU to Host flags register a */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_HOST_FLAGS_flagn_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_VCPU_HOST_FLAGS_flagn_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_HOST_FLAGS_flagn_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_VCPU_HOST_FLAGS_flagn(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_HOST_FLAGS_flagn_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_HOST_FLAGS_flagn_MASK)
/*! @} */

/*! @name HOST_VCPU_FLAGS - Host to VCPU Flags register a */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_VCPU_FLAGS_flagn_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_HOST_VCPU_FLAGS_flagn_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_VCPU_FLAGS_flagn_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_HOST_VCPU_FLAGS_flagn(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_VCPU_FLAGS_flagn_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_VCPU_FLAGS_flagn_MASK)
/*! @} */

/*! @name VCPU_OUT_0_MSB - VCPU to host outbox message n MSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_0_MSB_vcpu_out_n_msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_0_MSB_vcpu_out_n_msb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_0_MSB_vcpu_out_n_msb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_0_MSB_vcpu_out_n_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_OUT_0_MSB_vcpu_out_n_msb_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_OUT_0_MSB_vcpu_out_n_msb_MASK)
/*! @} */

/*! @name VCPU_OUT_0_LSB - VCPU to host outbox message n LSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_0_LSB_vcpu_out_n_lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_0_LSB_vcpu_out_n_lsb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_0_LSB_vcpu_out_n_lsb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_0_LSB_vcpu_out_n_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_OUT_0_LSB_vcpu_out_n_lsb_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_OUT_0_LSB_vcpu_out_n_lsb_MASK)
/*! @} */

/*! @name VCPU_OUT_1_MSB - VCPU to host outbox message n MSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_1_MSB_vcpu_out_n_msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_1_MSB_vcpu_out_n_msb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_1_MSB_vcpu_out_n_msb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_1_MSB_vcpu_out_n_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_OUT_1_MSB_vcpu_out_n_msb_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_OUT_1_MSB_vcpu_out_n_msb_MASK)
/*! @} */

/*! @name VCPU_OUT_1_LSB - VCPU to host outbox message n LSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_1_LSB_vcpu_out_n_lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_1_LSB_vcpu_out_n_lsb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_1_LSB_vcpu_out_n_lsb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_VCPU_OUT_1_LSB_vcpu_out_n_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_OUT_1_LSB_vcpu_out_n_lsb_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_OUT_1_LSB_vcpu_out_n_lsb_MASK)
/*! @} */

/*! @name VCPU_IN_0_MSB - VCPU from Host Inbox Message n MSB */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_IN_0_MSB_vcpu_in_n_msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_0_MSB_vcpu_in_n_msb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_0_MSB_vcpu_in_n_msb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_0_MSB_vcpu_in_n_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_IN_0_MSB_vcpu_in_n_msb_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_IN_0_MSB_vcpu_in_n_msb_MASK)
/*! @} */

/*! @name VCPU_IN_0_LSB - VCPU from host inbox message n LSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_IN_0_LSB_vcpu_in_n_lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_0_LSB_vcpu_in_n_lsb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_0_LSB_vcpu_in_n_lsb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_0_LSB_vcpu_in_n_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_IN_0_LSB_vcpu_in_n_lsb_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_IN_0_LSB_vcpu_in_n_lsb_MASK)
/*! @} */

/*! @name VCPU_IN_1_MSB - VCPU from Host Inbox Message n MSB */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_IN_1_MSB_vcpu_in_n_msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_1_MSB_vcpu_in_n_msb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_1_MSB_vcpu_in_n_msb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_1_MSB_vcpu_in_n_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_IN_1_MSB_vcpu_in_n_msb_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_IN_1_MSB_vcpu_in_n_msb_MASK)
/*! @} */

/*! @name VCPU_IN_1_LSB - VCPU from host inbox message n LSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_IN_1_LSB_vcpu_in_n_lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_1_LSB_vcpu_in_n_lsb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_1_LSB_vcpu_in_n_lsb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_VCPU_IN_1_LSB_vcpu_in_n_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_IN_1_LSB_vcpu_in_n_lsb_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_IN_1_LSB_vcpu_in_n_lsb_MASK)
/*! @} */

/*! @name VCPU_MBOX_STATUS - VCPU to Host Mailbox Status register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_0_valid_MASK (0x1U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_0_valid_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_0_valid_WIDTH (1U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_0_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_0_valid_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_0_valid_MASK)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_1_valid_MASK (0x2U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_1_valid_SHIFT (1U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_1_valid_WIDTH (1U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_1_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_1_valid_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_out_1_valid_MASK)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_0_valid_MASK (0x4U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_0_valid_SHIFT (2U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_0_valid_WIDTH (1U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_0_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_0_valid_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_0_valid_MASK)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_1_valid_MASK (0x8U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_1_valid_SHIFT (3U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_1_valid_WIDTH (1U)
#define VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_1_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_1_valid_SHIFT)) & VSPA_VCPU_Host_Messaging_VCPU_MBOX_STATUS_msg_in_1_valid_MASK)
/*! @} */

/*! @name HOST_OUT_0_MSB - Host to VCPU Outbox Message n MSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_OUT_0_MSB_host_out_n_msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_0_MSB_host_out_n_msb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_0_MSB_host_out_n_msb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_0_MSB_host_out_n_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_OUT_0_MSB_host_out_n_msb_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_OUT_0_MSB_host_out_n_msb_MASK)
/*! @} */

/*! @name HOST_OUT_0_LSB - Host to VCPU Outbox Message n LSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_OUT_0_LSB_host_out_n_lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_0_LSB_host_out_n_lsb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_0_LSB_host_out_n_lsb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_0_LSB_host_out_n_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_OUT_0_LSB_host_out_n_lsb_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_OUT_0_LSB_host_out_n_lsb_MASK)
/*! @} */

/*! @name HOST_OUT_1_MSB - Host to VCPU Outbox Message n MSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_OUT_1_MSB_host_out_n_msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_1_MSB_host_out_n_msb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_1_MSB_host_out_n_msb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_1_MSB_host_out_n_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_OUT_1_MSB_host_out_n_msb_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_OUT_1_MSB_host_out_n_msb_MASK)
/*! @} */

/*! @name HOST_OUT_1_LSB - Host to VCPU Outbox Message n LSB register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_OUT_1_LSB_host_out_n_lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_1_LSB_host_out_n_lsb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_1_LSB_host_out_n_lsb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_HOST_OUT_1_LSB_host_out_n_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_OUT_1_LSB_host_out_n_lsb_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_OUT_1_LSB_host_out_n_lsb_MASK)
/*! @} */

/*! @name HOST_IN_0_MSB - Host from VCPU Inbox Message n MSB */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_IN_0_MSB_host_in_n_msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_HOST_IN_0_MSB_host_in_n_msb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_IN_0_MSB_host_in_n_msb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_HOST_IN_0_MSB_host_in_n_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_IN_0_MSB_host_in_n_msb_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_IN_0_MSB_host_in_n_msb_MASK)
/*! @} */

/*! @name HOST_IN_0_LSB - Host from VCPU Inbox Message n LSB Register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_IN_0_LSB_host_in_n_lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_HOST_IN_0_LSB_host_in_n_lsb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_IN_0_LSB_host_in_n_lsb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_HOST_IN_0_LSB_host_in_n_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_IN_0_LSB_host_in_n_lsb_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_IN_0_LSB_host_in_n_lsb_MASK)
/*! @} */

/*! @name HOST_IN_1_MSB - Host from VCPU Inbox Message n MSB */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_IN_1_MSB_host_in_n_msb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_HOST_IN_1_MSB_host_in_n_msb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_IN_1_MSB_host_in_n_msb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_HOST_IN_1_MSB_host_in_n_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_IN_1_MSB_host_in_n_msb_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_IN_1_MSB_host_in_n_msb_MASK)
/*! @} */

/*! @name HOST_IN_1_LSB - Host from VCPU Inbox Message n LSB Register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_IN_1_LSB_host_in_n_lsb_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Host_Messaging_HOST_IN_1_LSB_host_in_n_lsb_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_IN_1_LSB_host_in_n_lsb_WIDTH (32U)
#define VSPA_VCPU_Host_Messaging_HOST_IN_1_LSB_host_in_n_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_IN_1_LSB_host_in_n_lsb_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_IN_1_LSB_host_in_n_lsb_MASK)
/*! @} */

/*! @name HOST_MBOX_STATUS - Host Mailbox Status Register */
/*! @{ */
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_0_valid_MASK (0x1U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_0_valid_SHIFT (0U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_0_valid_WIDTH (1U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_0_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_0_valid_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_0_valid_MASK)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_1_valid_MASK (0x2U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_1_valid_SHIFT (1U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_1_valid_WIDTH (1U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_1_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_1_valid_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_out_1_valid_MASK)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_0_valid_MASK (0x4U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_0_valid_SHIFT (2U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_0_valid_WIDTH (1U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_0_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_0_valid_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_0_valid_MASK)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_1_valid_MASK (0x8U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_1_valid_SHIFT (3U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_1_valid_WIDTH (1U)
#define VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_1_valid(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_1_valid_SHIFT)) & VSPA_VCPU_Host_Messaging_HOST_MBOX_STATUS_msg_in_1_valid_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_VCPU_Host_Messaging_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_VCPU_Host_Messaging_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_VCPU_Host_Messaging_H_) */
