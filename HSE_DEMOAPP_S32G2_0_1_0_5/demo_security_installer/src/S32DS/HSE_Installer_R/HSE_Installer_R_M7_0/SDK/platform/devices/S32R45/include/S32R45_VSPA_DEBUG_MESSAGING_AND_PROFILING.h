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
 * @file S32R45_VSPA_Debug_messaging_and_profiling.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA_Debug_messaging_and_profiling
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
#if !defined(S32R45_VSPA_Debug_messaging_and_profiling_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_Debug_messaging_and_profiling_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA_Debug_messaging_and_profiling Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Debug_messaging_and_profiling_Peripheral_Access_Layer VSPA_Debug_messaging_and_profiling Peripheral Access Layer
 * @{
 */

/** VSPA_Debug_messaging_and_profiling - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[152];
  __IO uint32_t CYC_COUNTER_MSB;                   /**< Cycle counter MSB register, offset: 0x98 */
  __IO uint32_t CYC_COUNTER_LSB;                   /**< Cycle Counter LSB Register, offset: 0x9C */
  uint8_t RESERVED_1[1376];
  __O  uint32_t DQM_SMALL;                         /**< VCPU to DQM Trace Small Outbox register, offset: 0x600 */
  __O  uint32_t DQM_LARGE_MSB;                     /**< VCPU to DQM Trace Large MSB Outbox register, offset: 0x604 */
  __O  uint32_t DQM_LARGE_LSB;                     /**< VCPU to DQM Trace Large LSB Outbox register, offset: 0x608 */
  uint8_t RESERVED_2[20];
  __O  uint32_t VCPU_DBG_OUT_32;                   /**< VCPU to Debugger 32-bit Outbox register, offset: 0x620 */
  __O  uint32_t VCPU_DBG_OUT_64_MSB;               /**< VCPU to Debugger 64-bit MSB Outbox register, offset: 0x624 */
  __O  uint32_t VCPU_DBG_OUT_64_LSB;               /**< VCPU to Debugger 64-bit LSB Outbox register, offset: 0x628 */
  __I  uint32_t VCPU_DBG_IN_32;                    /**< Debugger to VCPU 32-bit Inbox register, offset: 0x62C */
  __I  uint32_t VCPU_DBG_IN_64_MSB;                /**< Debugger to VCPU 64-bit MSB Inbox register, offset: 0x630 */
  __I  uint32_t VCPU_DBG_IN_64_LSB;                /**< Debugger to VCPU 64-bit LSB Inbox register, offset: 0x634 */
  __I  uint32_t VCPU_DBG_MBOX_STATUS;              /**< VCPU to Debugger Mailbox Status register, offset: 0x638 */
} VSPA_Debug_messaging_and_profiling_Type, *VSPA_Debug_messaging_and_profiling_MemMapPtr;

/** Number of instances of the VSPA_Debug_messaging_and_profiling module. */
#define VSPA_Debug_messaging_and_profiling_INSTANCE_COUNT (2u)

/* VSPA_Debug_messaging_and_profiling - Peripheral instance base addresses */
/** Peripheral LAX_0_Debug_messaging_and_profiling base address */
#define LAX_0_Debug_messaging_and_profiling_BASE (0x44028000u)
/** Peripheral LAX_0_Debug_messaging_and_profiling base pointer */
#define LAX_0_Debug_messaging_and_profiling      ((VSPA_Debug_messaging_and_profiling_Type *)LAX_0_Debug_messaging_and_profiling_BASE)
/** Peripheral LAX_1_Debug_messaging_and_profiling base address */
#define LAX_1_Debug_messaging_and_profiling_BASE (0x44029000u)
/** Peripheral LAX_1_Debug_messaging_and_profiling base pointer */
#define LAX_1_Debug_messaging_and_profiling      ((VSPA_Debug_messaging_and_profiling_Type *)LAX_1_Debug_messaging_and_profiling_BASE)
/** Array initializer of VSPA_Debug_messaging_and_profiling peripheral base
 * addresses */
#define VSPA_Debug_messaging_and_profiling_BASE_ADDRS { LAX_0_Debug_messaging_and_profiling_BASE, LAX_1_Debug_messaging_and_profiling_BASE }
/** Array initializer of VSPA_Debug_messaging_and_profiling peripheral base
 * pointers */
#define VSPA_Debug_messaging_and_profiling_BASE_PTRS { LAX_0_Debug_messaging_and_profiling, LAX_1_Debug_messaging_and_profiling }

/* ----------------------------------------------------------------------------
   -- VSPA_Debug_messaging_and_profiling Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Debug_messaging_and_profiling_Register_Masks VSPA_Debug_messaging_and_profiling Register Masks
 * @{
 */

/*! @name CYC_COUNTER_MSB - Cycle counter MSB register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyc_cnt_msb_MASK (0xFFFFU)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyc_cnt_msb_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyc_cnt_msb_WIDTH (16U)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyc_cnt_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyc_cnt_msb_SHIFT)) & VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyc_cnt_msb_MASK)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyn_cnt_en_MASK (0x80000000U)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyn_cnt_en_SHIFT (31U)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyn_cnt_en_WIDTH (1U)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyn_cnt_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyn_cnt_en_SHIFT)) & VSPA_Debug_messaging_and_profiling_CYC_COUNTER_MSB_cyn_cnt_en_MASK)
/*! @} */

/*! @name CYC_COUNTER_LSB - Cycle Counter LSB Register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_LSB_cyc_cnt_lsb_MASK (0xFFFFFFFFU)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_LSB_cyc_cnt_lsb_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_LSB_cyc_cnt_lsb_WIDTH (32U)
#define VSPA_Debug_messaging_and_profiling_CYC_COUNTER_LSB_cyc_cnt_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_CYC_COUNTER_LSB_cyc_cnt_lsb_SHIFT)) & VSPA_Debug_messaging_and_profiling_CYC_COUNTER_LSB_cyc_cnt_lsb_MASK)
/*! @} */

/*! @name DQM_SMALL - VCPU to DQM Trace Small Outbox register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_DQM_SMALL_vcpu_dqm_out_small_MASK (0x1FFFFFFU)
#define VSPA_Debug_messaging_and_profiling_DQM_SMALL_vcpu_dqm_out_small_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_DQM_SMALL_vcpu_dqm_out_small_WIDTH (25U)
#define VSPA_Debug_messaging_and_profiling_DQM_SMALL_vcpu_dqm_out_small(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_DQM_SMALL_vcpu_dqm_out_small_SHIFT)) & VSPA_Debug_messaging_and_profiling_DQM_SMALL_vcpu_dqm_out_small_MASK)
/*! @} */

/*! @name DQM_LARGE_MSB - VCPU to DQM Trace Large MSB Outbox register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_MASK (0x1FFFFFFU)
#define VSPA_Debug_messaging_and_profiling_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_WIDTH (25U)
#define VSPA_Debug_messaging_and_profiling_DQM_LARGE_MSB_vcpu_dqm_out_large_msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_SHIFT)) & VSPA_Debug_messaging_and_profiling_DQM_LARGE_MSB_vcpu_dqm_out_large_msb_MASK)
/*! @} */

/*! @name DQM_LARGE_LSB - VCPU to DQM Trace Large LSB Outbox register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_MASK (0xFFFFFFFFU)
#define VSPA_Debug_messaging_and_profiling_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_WIDTH (32U)
#define VSPA_Debug_messaging_and_profiling_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_SHIFT)) & VSPA_Debug_messaging_and_profiling_DQM_LARGE_LSB_vcpu_dqm_out_large_lsb_MASK)
/*! @} */

/*! @name VCPU_DBG_OUT_32 - VCPU to Debugger 32-bit Outbox register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_32_vcpu_outbox32_MASK (0xFFFFFFFFU)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_32_vcpu_outbox32_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_32_vcpu_outbox32_WIDTH (32U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_32_vcpu_outbox32(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_32_vcpu_outbox32_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_32_vcpu_outbox32_MASK)
/*! @} */

/*! @name VCPU_DBG_OUT_64_MSB - VCPU to Debugger 64-bit MSB Outbox register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_MASK (0xFFFFFFFFU)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_WIDTH (32U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_MSB_vcpu_outbox64msb_MASK)
/*! @} */

/*! @name VCPU_DBG_OUT_64_LSB - VCPU to Debugger 64-bit LSB Outbox register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_MASK (0xFFFFFFFFU)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_WIDTH (32U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_OUT_64_LSB_vcpu_outbox64lsb_MASK)
/*! @} */

/*! @name VCPU_DBG_IN_32 - Debugger to VCPU 32-bit Inbox register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_32_vcpu_inbox32_MASK (0xFFFFFFFFU)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_32_vcpu_inbox32_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_32_vcpu_inbox32_WIDTH (32U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_32_vcpu_inbox32(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_32_vcpu_inbox32_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_32_vcpu_inbox32_MASK)
/*! @} */

/*! @name VCPU_DBG_IN_64_MSB - Debugger to VCPU 64-bit MSB Inbox register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_MASK (0xFFFFFFFFU)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_WIDTH (32U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_MSB_vcpu_inbox64msb_MASK)
/*! @} */

/*! @name VCPU_DBG_IN_64_LSB - Debugger to VCPU 64-bit LSB Inbox register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_MASK (0xFFFFFFFFU)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_WIDTH (32U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_IN_64_LSB_vcpu_inbox64lsb_MASK)
/*! @} */

/*! @name VCPU_DBG_MBOX_STATUS - VCPU to Debugger Mailbox Status register */
/*! @{ */
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_MASK (0x1U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_SHIFT (0U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_WIDTH (1U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_32bit_MASK)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_MASK (0x2U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_SHIFT (1U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_WIDTH (1U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_out_valid_64bit_MASK)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_MASK (0x4U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_SHIFT (2U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_WIDTH (1U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_32bit_MASK)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_MASK (0x8U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_SHIFT (3U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_WIDTH (1U)
#define VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_SHIFT)) & VSPA_Debug_messaging_and_profiling_VCPU_DBG_MBOX_STATUS_msg_in_valid_64bit_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_Debug_messaging_and_profiling_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_Debug_messaging_and_profiling_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_Debug_messaging_and_profiling_H_) */
