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
 * @file S32R45_VSPA_IPPU_control_and_status.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA_IPPU_control_and_status
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
#if !defined(S32R45_VSPA_IPPU_control_and_status_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_IPPU_control_and_status_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA_IPPU_control_and_status Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_IPPU_control_and_status_Peripheral_Access_Layer VSPA_IPPU_control_and_status Peripheral Access Layer
 * @{
 */

/** VSPA_IPPU_control_and_status - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[1792];
  __IO uint32_t IPPUCONTROL;                       /**< IPPU Control register, offset: 0x700 */
  __I  uint32_t IPPUSTATUS;                        /**< IPPU Status register, offset: 0x704 */
  __O  uint32_t IPPURC;                            /**< IPPU Run Control register, offset: 0x708 */
  __IO uint32_t IPPUARGBASEADDR;                   /**< IPPU Arg Base Address register, offset: 0x70C */
  __I  uint32_t IPPUHWVER;                         /**< IPPU Hardware Version, offset: 0x710 */
  __IO uint32_t IPPUSWVER;                         /**< IPPU Software Version, offset: 0x714 */
} VSPA_IPPU_control_and_status_Type, *VSPA_IPPU_control_and_status_MemMapPtr;

/** Number of instances of the VSPA_IPPU_control_and_status module. */
#define VSPA_IPPU_control_and_status_INSTANCE_COUNT (2u)

/* VSPA_IPPU_control_and_status - Peripheral instance base addresses */
/** Peripheral LAX_0_IPPU_control_and_status base address */
#define LAX_0_IPPU_control_and_status_BASE       (0x44028000u)
/** Peripheral LAX_0_IPPU_control_and_status base pointer */
#define LAX_0_IPPU_control_and_status            ((VSPA_IPPU_control_and_status_Type *)LAX_0_IPPU_control_and_status_BASE)
/** Peripheral LAX_1_IPPU_control_and_status base address */
#define LAX_1_IPPU_control_and_status_BASE       (0x44029000u)
/** Peripheral LAX_1_IPPU_control_and_status base pointer */
#define LAX_1_IPPU_control_and_status            ((VSPA_IPPU_control_and_status_Type *)LAX_1_IPPU_control_and_status_BASE)
/** Array initializer of VSPA_IPPU_control_and_status peripheral base addresses
 * */
#define VSPA_IPPU_control_and_status_BASE_ADDRS  { LAX_0_IPPU_control_and_status_BASE, LAX_1_IPPU_control_and_status_BASE }
/** Array initializer of VSPA_IPPU_control_and_status peripheral base pointers */
#define VSPA_IPPU_control_and_status_BASE_PTRS   { LAX_0_IPPU_control_and_status, LAX_1_IPPU_control_and_status }

/* ----------------------------------------------------------------------------
   -- VSPA_IPPU_control_and_status Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_IPPU_control_and_status_Register_Masks VSPA_IPPU_control_and_status Register Masks
 * @{
 */

/*! @name IPPUCONTROL - IPPU Control register */
/*! @{ */
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_start_address_MASK (0xFFFFU)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_start_address_SHIFT (0U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_start_address_WIDTH (16U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_start_address(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_start_address_SHIFT)) & VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_start_address_MASK)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_irq_en_MASK (0x400000U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_irq_en_SHIFT (22U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_irq_en_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_irq_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_irq_en_SHIFT)) & VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_irq_en_MASK)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_vcpu_go_en_MASK (0x800000U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_vcpu_go_en_SHIFT (23U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_vcpu_go_en_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_vcpu_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUCONTROL_vcpu_go_en_SHIFT)) & VSPA_IPPU_control_and_status_IPPUCONTROL_vcpu_go_en_MASK)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_legacy_mem_addr_MASK (0x1000000U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_legacy_mem_addr_SHIFT (24U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_legacy_mem_addr_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_legacy_mem_addr(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_legacy_mem_addr_SHIFT)) & VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_legacy_mem_addr_MASK)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl25_MASK (0x2000000U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl25_SHIFT (25U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl25_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl25(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl25_SHIFT)) & VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl25_MASK)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_fecu_trigger_MASK (0x4000000U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_fecu_trigger_SHIFT (26U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_fecu_trigger_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_fecu_trigger(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_fecu_trigger_SHIFT)) & VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_fecu_trigger_MASK)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_dma_trigger_MASK (0x8000000U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_dma_trigger_SHIFT (27U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_dma_trigger_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_dma_trigger(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_dma_trigger_SHIFT)) & VSPA_IPPU_control_and_status_IPPUCONTROL_ippu_dma_trigger_MASK)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl28_MASK (0x10000000U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl28_SHIFT (28U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl28_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl28(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl28_SHIFT)) & VSPA_IPPU_control_and_status_IPPUCONTROL_ructrl28_MASK)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_start_type_MASK (0xE0000000U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_start_type_SHIFT (29U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_start_type_WIDTH (3U)
#define VSPA_IPPU_control_and_status_IPPUCONTROL_start_type(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUCONTROL_start_type_SHIFT)) & VSPA_IPPU_control_and_status_IPPUCONTROL_start_type_MASK)
/*! @} */

/*! @name IPPUSTATUS - IPPU Status register */
/*! @{ */
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_pc_MASK (0xFFFFU)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_pc_SHIFT (0U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_pc_WIDTH (16U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_pc(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_pc_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_pc_MASK)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_fifo_full_MASK (0x100000U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_fifo_full_SHIFT (20U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_fifo_full_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_fifo_full(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_fifo_full_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_fifo_full_MASK)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ru_ip_busy_MASK (0x200000U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ru_ip_busy_SHIFT (21U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ru_ip_busy_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ru_ip_busy(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_ru_ip_busy_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_ru_ip_busy_MASK)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_command_fifo_depth_MASK (0xC00000U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_command_fifo_depth_SHIFT (22U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_command_fifo_depth_WIDTH (2U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_command_fifo_depth(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_command_fifo_depth_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_command_fifo_depth_MASK)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_last_MASK (0x6000000U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_last_SHIFT (25U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_last_WIDTH (2U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_last(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_last_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_last_MASK)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_error_MASK (0x8000000U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_error_SHIFT (27U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_error_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_error(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_error_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_cmd_error_MASK)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_done_MASK (0x10000000U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_done_SHIFT (28U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_done_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_done(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_done_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_done_MASK)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_aborted_MASK (0x20000000U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_aborted_SHIFT (29U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_aborted_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_aborted(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_aborted_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_aborted_MASK)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_suspended_MASK (0x40000000U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_suspended_SHIFT (30U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_suspended_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_suspended(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_suspended_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_suspended_MASK)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_active_MASK (0x80000000U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_active_SHIFT (31U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_active_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_active(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_active_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSTATUS_ippu_active_MASK)
/*! @} */

/*! @name IPPURC - IPPU Run Control register */
/*! @{ */
#define VSPA_IPPU_control_and_status_IPPURC_ippu_abort_MASK (0x20000000U)
#define VSPA_IPPU_control_and_status_IPPURC_ippu_abort_SHIFT (29U)
#define VSPA_IPPU_control_and_status_IPPURC_ippu_abort_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPURC_ippu_abort(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPURC_ippu_abort_SHIFT)) & VSPA_IPPU_control_and_status_IPPURC_ippu_abort_MASK)
#define VSPA_IPPU_control_and_status_IPPURC_ippu_suspend_MASK (0x40000000U)
#define VSPA_IPPU_control_and_status_IPPURC_ippu_suspend_SHIFT (30U)
#define VSPA_IPPU_control_and_status_IPPURC_ippu_suspend_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPURC_ippu_suspend(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPURC_ippu_suspend_SHIFT)) & VSPA_IPPU_control_and_status_IPPURC_ippu_suspend_MASK)
#define VSPA_IPPU_control_and_status_IPPURC_clear_cmd_fifo_error_MASK (0x80000000U)
#define VSPA_IPPU_control_and_status_IPPURC_clear_cmd_fifo_error_SHIFT (31U)
#define VSPA_IPPU_control_and_status_IPPURC_clear_cmd_fifo_error_WIDTH (1U)
#define VSPA_IPPU_control_and_status_IPPURC_clear_cmd_fifo_error(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPURC_clear_cmd_fifo_error_SHIFT)) & VSPA_IPPU_control_and_status_IPPURC_clear_cmd_fifo_error_MASK)
/*! @} */

/*! @name IPPUARGBASEADDR - IPPU Arg Base Address register */
/*! @{ */
#define VSPA_IPPU_control_and_status_IPPUARGBASEADDR_ippu_arg_base_addr_MASK (0x7FFFFU)
#define VSPA_IPPU_control_and_status_IPPUARGBASEADDR_ippu_arg_base_addr_SHIFT (0U)
#define VSPA_IPPU_control_and_status_IPPUARGBASEADDR_ippu_arg_base_addr_WIDTH (19U)
#define VSPA_IPPU_control_and_status_IPPUARGBASEADDR_ippu_arg_base_addr(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUARGBASEADDR_ippu_arg_base_addr_SHIFT)) & VSPA_IPPU_control_and_status_IPPUARGBASEADDR_ippu_arg_base_addr_MASK)
/*! @} */

/*! @name IPPUHWVER - IPPU Hardware Version */
/*! @{ */
#define VSPA_IPPU_control_and_status_IPPUHWVER_ippu_hw_version_MASK (0xFFFFFFFFU)
#define VSPA_IPPU_control_and_status_IPPUHWVER_ippu_hw_version_SHIFT (0U)
#define VSPA_IPPU_control_and_status_IPPUHWVER_ippu_hw_version_WIDTH (32U)
#define VSPA_IPPU_control_and_status_IPPUHWVER_ippu_hw_version(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUHWVER_ippu_hw_version_SHIFT)) & VSPA_IPPU_control_and_status_IPPUHWVER_ippu_hw_version_MASK)
/*! @} */

/*! @name IPPUSWVER - IPPU Software Version */
/*! @{ */
#define VSPA_IPPU_control_and_status_IPPUSWVER_ippu_code_version_MASK (0xFFFFFFFFU)
#define VSPA_IPPU_control_and_status_IPPUSWVER_ippu_code_version_SHIFT (0U)
#define VSPA_IPPU_control_and_status_IPPUSWVER_ippu_code_version_WIDTH (32U)
#define VSPA_IPPU_control_and_status_IPPUSWVER_ippu_code_version(x) (((uint32_t)(((uint32_t)(x)) << VSPA_IPPU_control_and_status_IPPUSWVER_ippu_code_version_SHIFT)) & VSPA_IPPU_control_and_status_IPPUSWVER_ippu_code_version_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_IPPU_control_and_status_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_IPPU_control_and_status_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_IPPU_control_and_status_H_) */
