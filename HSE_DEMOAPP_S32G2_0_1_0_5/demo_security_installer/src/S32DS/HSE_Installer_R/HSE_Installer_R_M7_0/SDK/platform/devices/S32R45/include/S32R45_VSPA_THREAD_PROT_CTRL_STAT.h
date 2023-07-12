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
 * @file S32R45_VSPA_Thread_prot_ctrl_stat.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA_Thread_prot_ctrl_stat
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
#if !defined(S32R45_VSPA_Thread_prot_ctrl_stat_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_Thread_prot_ctrl_stat_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA_Thread_prot_ctrl_stat Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Thread_prot_ctrl_stat_Peripheral_Access_Layer VSPA_Thread_prot_ctrl_stat Peripheral Access Layer
 * @{
 */

/** VSPA_Thread_prot_ctrl_stat - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[80];
  __IO uint32_t THREAD_CTRL_STAT;                  /**< Thread Control and Status, offset: 0x50 */
  __IO uint32_t PROT_FAULT_STAT;                   /**< Protection Fault Status, offset: 0x54 */
  __I  uint32_t EXCEPTION_CTRL;                    /**< VCPU Exception Control, offset: 0x58 */
  __IO uint32_t EXCEPTION_STAT;                    /**< VCPU Exception Status, offset: 0x5C */
} VSPA_Thread_prot_ctrl_stat_Type, *VSPA_Thread_prot_ctrl_stat_MemMapPtr;

/** Number of instances of the VSPA_Thread_prot_ctrl_stat module. */
#define VSPA_Thread_prot_ctrl_stat_INSTANCE_COUNT (2u)

/* VSPA_Thread_prot_ctrl_stat - Peripheral instance base addresses */
/** Peripheral LAX_0_Thread_prot_ctrl_stat base address */
#define LAX_0_Thread_prot_ctrl_stat_BASE         (0x44028000u)
/** Peripheral LAX_0_Thread_prot_ctrl_stat base pointer */
#define LAX_0_Thread_prot_ctrl_stat              ((VSPA_Thread_prot_ctrl_stat_Type *)LAX_0_Thread_prot_ctrl_stat_BASE)
/** Peripheral LAX_1_Thread_prot_ctrl_stat base address */
#define LAX_1_Thread_prot_ctrl_stat_BASE         (0x44029000u)
/** Peripheral LAX_1_Thread_prot_ctrl_stat base pointer */
#define LAX_1_Thread_prot_ctrl_stat              ((VSPA_Thread_prot_ctrl_stat_Type *)LAX_1_Thread_prot_ctrl_stat_BASE)
/** Array initializer of VSPA_Thread_prot_ctrl_stat peripheral base addresses */
#define VSPA_Thread_prot_ctrl_stat_BASE_ADDRS    { LAX_0_Thread_prot_ctrl_stat_BASE, LAX_1_Thread_prot_ctrl_stat_BASE }
/** Array initializer of VSPA_Thread_prot_ctrl_stat peripheral base pointers */
#define VSPA_Thread_prot_ctrl_stat_BASE_PTRS     { LAX_0_Thread_prot_ctrl_stat, LAX_1_Thread_prot_ctrl_stat }

/* ----------------------------------------------------------------------------
   -- VSPA_Thread_prot_ctrl_stat Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Thread_prot_ctrl_stat_Register_Masks VSPA_Thread_prot_ctrl_stat Register Masks
 * @{
 */

/*! @name THREAD_CTRL_STAT - Thread Control and Status */
/*! @{ */
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_active_thread_id_MASK (0xFU)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_active_thread_id_SHIFT (0U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_active_thread_id_WIDTH (4U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_active_thread_id(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_active_thread_id_SHIFT)) & VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_active_thread_id_MASK)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_ack_MASK (0x80U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_ack_SHIFT (7U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_ack_WIDTH (1U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_ack(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_ack_SHIFT)) & VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_ack_MASK)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_req_thread_id_MASK (0xF00U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_req_thread_id_SHIFT (8U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_req_thread_id_WIDTH (4U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_req_thread_id(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_req_thread_id_SHIFT)) & VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_req_thread_id_MASK)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_flag_MASK (0x8000U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_flag_SHIFT (15U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_flag_WIDTH (1U)
#define VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_flag(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_flag_SHIFT)) & VSPA_Thread_prot_ctrl_stat_THREAD_CTRL_STAT_thread_change_flag_MASK)
/*! @} */

/*! @name PROT_FAULT_STAT - Protection Fault Status */
/*! @{ */
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_addr_MASK (0xFFFFFU)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_addr_SHIFT (0U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_addr_WIDTH (20U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_addr(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_addr_SHIFT)) & VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_addr_MASK)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_thread_MASK (0xF00000U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_thread_SHIFT (20U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_thread_WIDTH (4U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_thread(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_thread_SHIFT)) & VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_thread_MASK)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_type_MASK (0x7000000U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_type_SHIFT (24U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_type_WIDTH (3U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_type(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_type_SHIFT)) & VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_type_MASK)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_mstr_MASK (0x30000000U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_mstr_SHIFT (28U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_mstr_WIDTH (2U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_mstr(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_mstr_SHIFT)) & VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_flt_mstr_MASK)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_fault_MASK (0x80000000U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_fault_SHIFT (31U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_fault_WIDTH (1U)
#define VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_fault(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_fault_SHIFT)) & VSPA_Thread_prot_ctrl_stat_PROT_FAULT_STAT_fault_MASK)
/*! @} */

/*! @name EXCEPTION_CTRL - VCPU Exception Control */
/*! @{ */
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vec_base_MASK (0xFFFFEU)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vec_base_SHIFT (1U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vec_base_WIDTH (19U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vec_base(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vec_base_SHIFT)) & VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vec_base_MASK)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_supv_MASK (0x10000000U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_supv_SHIFT (28U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_supv_WIDTH (1U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_supv(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_supv_SHIFT)) & VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_supv_MASK)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vcpu_irq_en_MASK (0x20000000U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vcpu_irq_en_SHIFT (29U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vcpu_irq_en_WIDTH (1U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vcpu_irq_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vcpu_irq_en_SHIFT)) & VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_vcpu_irq_en_MASK)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_restore_prev_vcpu_irqen_MASK (0x80000000U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_restore_prev_vcpu_irqen_SHIFT (31U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_restore_prev_vcpu_irqen_WIDTH (1U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_restore_prev_vcpu_irqen(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_restore_prev_vcpu_irqen_SHIFT)) & VSPA_Thread_prot_ctrl_stat_EXCEPTION_CTRL_restore_prev_vcpu_irqen_MASK)
/*! @} */

/*! @name EXCEPTION_STAT - VCPU Exception Status */
/*! @{ */
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_swi_arg_irq_pc_MASK (0xFFFFFU)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_swi_arg_irq_pc_SHIFT (0U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_swi_arg_irq_pc_WIDTH (20U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_swi_arg_irq_pc(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_swi_arg_irq_pc_SHIFT)) & VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_swi_arg_irq_pc_MASK)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_state_MASK (0x20000000U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_state_SHIFT (29U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_state_WIDTH (1U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_state(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_state_SHIFT)) & VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_state_MASK)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_go_MASK (0x40000000U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_go_SHIFT (30U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_go_WIDTH (1U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_go_SHIFT)) & VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_vcpu_irq_go_MASK)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_prev_vcpu_irqen_MASK (0x80000000U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_prev_vcpu_irqen_SHIFT (31U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_prev_vcpu_irqen_WIDTH (1U)
#define VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_prev_vcpu_irqen(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_prev_vcpu_irqen_SHIFT)) & VSPA_Thread_prot_ctrl_stat_EXCEPTION_STAT_prev_vcpu_irqen_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_Thread_prot_ctrl_stat_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_Thread_prot_ctrl_stat_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_Thread_prot_ctrl_stat_H_) */
