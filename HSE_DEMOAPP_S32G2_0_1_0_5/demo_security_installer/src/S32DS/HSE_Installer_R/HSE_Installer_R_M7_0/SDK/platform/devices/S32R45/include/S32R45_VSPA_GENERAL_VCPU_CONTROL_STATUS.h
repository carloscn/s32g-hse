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
 * @file S32R45_VSPA_General_VCPU_control_status.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA_General_VCPU_control_status
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
#if !defined(S32R45_VSPA_General_VCPU_control_status_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_General_VCPU_control_status_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA_General_VCPU_control_status Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_General_VCPU_control_status_Peripheral_Access_Layer VSPA_General_VCPU_control_status Peripheral Access Layer
 * @{
 */

/** VSPA_General_VCPU_control_status - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[8];
  __IO uint32_t CONTROL;                           /**< VCPU System Control register, offset: 0x8 */
  __IO uint32_t IRQEN;                             /**< VSPA Interrupt Enable register, offset: 0xC */
  __IO uint32_t STATUS;                            /**< VSPA Source 1 Info, offset: 0x10 */
  uint8_t RESERVED_1[28];
  __I  uint32_t ILLOP_STATUS;                      /**< VSPA VCPU Illegal Opcode Address, offset: 0x30 */
  uint8_t RESERVED_2[204];
  __IO uint32_t LD_RF_CONTROL;                     /**< Load Register File Control register (Slow read register), offset: 0x100 */
  __IO uint32_t LD_RF_TB_REAL_0;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x104 */
  __IO uint32_t LD_RF_TB_IMAG_0;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x108 */
  __IO uint32_t LD_RF_TB_REAL_1;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x10C */
  __IO uint32_t LD_RF_TB_IMAG_1;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x110 */
  __IO uint32_t LD_RF_TB_REAL_2;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x114 */
  __IO uint32_t LD_RF_TB_IMAG_2;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x118 */
  __IO uint32_t LD_RF_TB_REAL_3;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x11C */
  __IO uint32_t LD_RF_TB_IMAG_3;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x120 */
  __IO uint32_t LD_RF_TB_REAL_4;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x124 */
  __IO uint32_t LD_RF_TB_IMAG_4;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x128 */
  __IO uint32_t LD_RF_TB_REAL_5;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x12C */
  __IO uint32_t LD_RF_TB_IMAG_5;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x130 */
  __IO uint32_t LD_RF_TB_REAL_6;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x134 */
  __IO uint32_t LD_RF_TB_IMAG_6;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x138 */
  __IO uint32_t LD_RF_TB_REAL_7;                   /**< Load Register File Real Coefficient Table register (Slow read register), offset: 0x13C */
  __IO uint32_t LD_RF_TB_IMAG_7;                   /**< Load Register File Imaginary Coefficient Table register (Slow read register), offset: 0x140 */
  uint8_t RESERVED_3[700];
  __I  uint32_t VCPU_MODE0;                        /**< VCPU Mode 0, offset: 0x400 */
  __I  uint32_t VCPU_MODE1;                        /**< VCPU Mode 1, offset: 0x404 */
  __I  uint32_t VCPU_CREG0;                        /**< VCPU CREG 0, offset: 0x408 */
  __I  uint32_t VCPU_CREG1;                        /**< VCPU CREG 1, offset: 0x40C */
  __I  uint32_t ST_UL_VEC_LEN;                     /**< Store Unalign Vector Length, offset: 0x410 */
  __I  uint32_t VP_CONTROL;                        /**< Vector Predicate Control, offset: 0x414 */
  __I  uint32_t XC_CONTROL;                        /**< Extended Condition Control, offset: 0x418 */
} VSPA_General_VCPU_control_status_Type, *VSPA_General_VCPU_control_status_MemMapPtr;

/** Number of instances of the VSPA_General_VCPU_control_status module. */
#define VSPA_General_VCPU_control_status_INSTANCE_COUNT (2u)

/* VSPA_General_VCPU_control_status - Peripheral instance base addresses */
/** Peripheral LAX_0_General_VCPU_control_status base address */
#define LAX_0_General_VCPU_control_status_BASE   (0x44028000u)
/** Peripheral LAX_0_General_VCPU_control_status base pointer */
#define LAX_0_General_VCPU_control_status        ((VSPA_General_VCPU_control_status_Type *)LAX_0_General_VCPU_control_status_BASE)
/** Peripheral LAX_1_General_VCPU_control_status base address */
#define LAX_1_General_VCPU_control_status_BASE   (0x44029000u)
/** Peripheral LAX_1_General_VCPU_control_status base pointer */
#define LAX_1_General_VCPU_control_status        ((VSPA_General_VCPU_control_status_Type *)LAX_1_General_VCPU_control_status_BASE)
/** Array initializer of VSPA_General_VCPU_control_status peripheral base
 * addresses */
#define VSPA_General_VCPU_control_status_BASE_ADDRS { LAX_0_General_VCPU_control_status_BASE, LAX_1_General_VCPU_control_status_BASE }
/** Array initializer of VSPA_General_VCPU_control_status peripheral base
 * pointers */
#define VSPA_General_VCPU_control_status_BASE_PTRS { LAX_0_General_VCPU_control_status, LAX_1_General_VCPU_control_status }

/* ----------------------------------------------------------------------------
   -- VSPA_General_VCPU_control_status Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_General_VCPU_control_status_Register_Masks VSPA_General_VCPU_control_status Register Masks
 * @{
 */

/*! @name CONTROL - VCPU System Control register */
/*! @{ */
#define VSPA_General_VCPU_control_status_CONTROL_host_go_MASK (0x1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_go_SHIFT (0U)
#define VSPA_General_VCPU_control_status_CONTROL_host_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_ippu_go_MASK (0x2U)
#define VSPA_General_VCPU_control_status_CONTROL_ippu_go_SHIFT (1U)
#define VSPA_General_VCPU_control_status_CONTROL_ippu_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_ippu_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_ippu_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_ippu_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_dma_go_MASK (0x4U)
#define VSPA_General_VCPU_control_status_CONTROL_dma_go_SHIFT (2U)
#define VSPA_General_VCPU_control_status_CONTROL_dma_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_dma_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_dma_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_dma_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_ext_go_MASK (0x8U)
#define VSPA_General_VCPU_control_status_CONTROL_ext_go_SHIFT (3U)
#define VSPA_General_VCPU_control_status_CONTROL_ext_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_ext_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_ext_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_ext_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_vcpu_go_MASK (0x10U)
#define VSPA_General_VCPU_control_status_CONTROL_vcpu_go_SHIFT (4U)
#define VSPA_General_VCPU_control_status_CONTROL_vcpu_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_vcpu_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_vcpu_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_vcpu_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_MASK (0x20U)
#define VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_SHIFT (5U)
#define VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_debug_msg_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags_go_MASK (0x40U)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags_go_SHIFT (6U)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_axislv_go_MASK (0x100U)
#define VSPA_General_VCPU_control_status_CONTROL_axislv_go_SHIFT (8U)
#define VSPA_General_VCPU_control_status_CONTROL_axislv_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_axislv_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_axislv_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_axislv_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_en_MASK (0x200U)
#define VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_en_SHIFT (9U)
#define VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_en_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_en_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_debug_msg_go_en_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags0_go_en_MASK (0x800U)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags0_go_en_SHIFT (11U)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags0_go_en_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags0_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags0_go_en_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags0_go_en_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags1_go_en_MASK (0x1000U)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags1_go_en_SHIFT (12U)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags1_go_en_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags1_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags1_go_en_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_vsp_flags1_go_en_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_core_reset_MASK (0x10000U)
#define VSPA_General_VCPU_control_status_CONTROL_core_reset_SHIFT (16U)
#define VSPA_General_VCPU_control_status_CONTROL_core_reset_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_core_reset(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_core_reset_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_core_reset_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_dma_halt_req_MASK (0x20000U)
#define VSPA_General_VCPU_control_status_CONTROL_dma_halt_req_SHIFT (17U)
#define VSPA_General_VCPU_control_status_CONTROL_dma_halt_req_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_dma_halt_req(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_dma_halt_req_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_dma_halt_req_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_vspa_soft_rst_req_MASK (0x40000U)
#define VSPA_General_VCPU_control_status_CONTROL_vspa_soft_rst_req_SHIFT (18U)
#define VSPA_General_VCPU_control_status_CONTROL_vspa_soft_rst_req_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_vspa_soft_rst_req(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_vspa_soft_rst_req_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_vspa_soft_rst_req_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_sent_msg0_go_MASK (0x100000U)
#define VSPA_General_VCPU_control_status_CONTROL_host_sent_msg0_go_SHIFT (20U)
#define VSPA_General_VCPU_control_status_CONTROL_host_sent_msg0_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_sent_msg0_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_sent_msg0_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_sent_msg0_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_sent_msg1_go_MASK (0x200000U)
#define VSPA_General_VCPU_control_status_CONTROL_host_sent_msg1_go_SHIFT (21U)
#define VSPA_General_VCPU_control_status_CONTROL_host_sent_msg1_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_sent_msg1_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_sent_msg1_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_sent_msg1_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_MASK (0x400000U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_SHIFT (22U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_MASK (0x800000U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_SHIFT (23U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_msg0_go_en_MASK (0x1000000U)
#define VSPA_General_VCPU_control_status_CONTROL_host_msg0_go_en_SHIFT (24U)
#define VSPA_General_VCPU_control_status_CONTROL_host_msg0_go_en_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_msg0_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_msg0_go_en_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_msg0_go_en_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_msg1_go_en_MASK (0x2000000U)
#define VSPA_General_VCPU_control_status_CONTROL_host_msg1_go_en_SHIFT (25U)
#define VSPA_General_VCPU_control_status_CONTROL_host_msg1_go_en_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_msg1_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_msg1_go_en_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_msg1_go_en_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_en_MASK (0x4000000U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_en_SHIFT (26U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_en_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_en_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_read_msg0_go_en_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_en_MASK (0x8000000U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_en_SHIFT (27U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_en_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_en_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_host_read_msg1_go_en_MASK)
#define VSPA_General_VCPU_control_status_CONTROL_pdn_en_MASK (0x80000000U)
#define VSPA_General_VCPU_control_status_CONTROL_pdn_en_SHIFT (31U)
#define VSPA_General_VCPU_control_status_CONTROL_pdn_en_WIDTH (1U)
#define VSPA_General_VCPU_control_status_CONTROL_pdn_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_CONTROL_pdn_en_SHIFT)) & VSPA_General_VCPU_control_status_CONTROL_pdn_en_MASK)
/*! @} */

/*! @name IRQEN - VSPA Interrupt Enable register */
/*! @{ */
#define VSPA_General_VCPU_control_status_IRQEN_irqen_done_MASK (0x1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_done_SHIFT (0U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_done_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_done(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_done_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_done_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_ippu_done_MASK (0x2U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_ippu_done_SHIFT (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_ippu_done_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_ippu_done(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_ippu_done_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_ippu_done_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_flags0_MASK (0x4U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_flags0_SHIFT (2U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_flags0_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_flags0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_flags0_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_flags0_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_flags1_MASK (0x8U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_flags1_SHIFT (3U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_flags1_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_flags1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_flags1_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_flags1_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_dma_cmp_MASK (0x10U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_dma_cmp_SHIFT (4U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_dma_cmp_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_dma_cmp(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_dma_cmp_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_dma_cmp_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_dma_error_MASK (0x20U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_dma_error_SHIFT (5U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_dma_error_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_dma_error(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_dma_error_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_dma_error_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_fecu_done_MASK (0x40U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_fecu_done_SHIFT (6U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_fecu_done_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_fecu_done(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_fecu_done_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_fecu_done_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_iit_MASK (0x80U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_iit_SHIFT (7U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_iit_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_iit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_iit_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_iit_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg0_MASK (0x1000U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg0_SHIFT (12U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg0_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg0_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg0_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg1_MASK (0x2000U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg1_SHIFT (13U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg1_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg1_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_sent_msg1_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg0_MASK (0x4000U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg0_SHIFT (14U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg0_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg0_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg0_MASK)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg1_MASK (0x8000U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg1_SHIFT (15U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg1_WIDTH (1U)
#define VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg1_SHIFT)) & VSPA_General_VCPU_control_status_IRQEN_irqen_vcpu_read_msg1_MASK)
/*! @} */

/*! @name STATUS - VSPA Source 1 Info */
/*! @{ */
#define VSPA_General_VCPU_control_status_STATUS_done_MASK (0x1U)
#define VSPA_General_VCPU_control_status_STATUS_done_SHIFT (0U)
#define VSPA_General_VCPU_control_status_STATUS_done_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_done(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_done_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_done_MASK)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_ippu_done_MASK (0x2U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_ippu_done_SHIFT (1U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_ippu_done_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_ippu_done(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_irq_pend_ippu_done_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_irq_pend_ippu_done_MASK)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_flags0_MASK (0x4U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_flags0_SHIFT (2U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_flags0_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_flags0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_irq_pend_flags0_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_irq_pend_flags0_MASK)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_flags1_MASK (0x8U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_flags1_SHIFT (3U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_flags1_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_flags1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_irq_pend_flags1_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_irq_pend_flags1_MASK)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_comp_MASK (0x10U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_comp_SHIFT (4U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_comp_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_comp(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_comp_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_comp_MASK)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_error_MASK (0x20U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_error_SHIFT (5U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_error_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_error(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_error_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_irq_pend_dma_error_MASK)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_fecu_done_MASK (0x40U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_fecu_done_SHIFT (6U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_fecu_done_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_irq_pend_fecu_done(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_irq_pend_fecu_done_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_irq_pend_fecu_done_MASK)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_iit_MASK (0x80U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_iit_SHIFT (7U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_iit_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_iit(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_vcpu_iit_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_vcpu_iit_MASK)
#define VSPA_General_VCPU_control_status_STATUS_busy_MASK (0x100U)
#define VSPA_General_VCPU_control_status_STATUS_busy_SHIFT (8U)
#define VSPA_General_VCPU_control_status_STATUS_busy_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_busy(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_busy_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_busy_MASK)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg0_MASK (0x1000U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg0_SHIFT (12U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg0_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg0_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg0_MASK)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg1_MASK (0x2000U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg1_SHIFT (13U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg1_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg1_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_vcpu_sent_msg1_MASK)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg0_MASK (0x4000U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg0_SHIFT (14U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg0_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg0_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg0_MASK)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg1_MASK (0x8000U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg1_SHIFT (15U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg1_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg1_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_vcpu_read_msg1_MASK)
#define VSPA_General_VCPU_control_status_STATUS_dma_halt_ack_MASK (0x20000U)
#define VSPA_General_VCPU_control_status_STATUS_dma_halt_ack_SHIFT (17U)
#define VSPA_General_VCPU_control_status_STATUS_dma_halt_ack_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_dma_halt_ack(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_dma_halt_ack_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_dma_halt_ack_MASK)
#define VSPA_General_VCPU_control_status_STATUS_pdn_done_MASK (0x40000000U)
#define VSPA_General_VCPU_control_status_STATUS_pdn_done_SHIFT (30U)
#define VSPA_General_VCPU_control_status_STATUS_pdn_done_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_pdn_done(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_pdn_done_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_pdn_done_MASK)
#define VSPA_General_VCPU_control_status_STATUS_pdn_active_MASK (0x80000000U)
#define VSPA_General_VCPU_control_status_STATUS_pdn_active_SHIFT (31U)
#define VSPA_General_VCPU_control_status_STATUS_pdn_active_WIDTH (1U)
#define VSPA_General_VCPU_control_status_STATUS_pdn_active(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_STATUS_pdn_active_SHIFT)) & VSPA_General_VCPU_control_status_STATUS_pdn_active_MASK)
/*! @} */

/*! @name ILLOP_STATUS - VSPA VCPU Illegal Opcode Address */
/*! @{ */
#define VSPA_General_VCPU_control_status_ILLOP_STATUS_vcpu_illop_addr_MASK (0x1FFFFFFU)
#define VSPA_General_VCPU_control_status_ILLOP_STATUS_vcpu_illop_addr_SHIFT (0U)
#define VSPA_General_VCPU_control_status_ILLOP_STATUS_vcpu_illop_addr_WIDTH (25U)
#define VSPA_General_VCPU_control_status_ILLOP_STATUS_vcpu_illop_addr(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_ILLOP_STATUS_vcpu_illop_addr_SHIFT)) & VSPA_General_VCPU_control_status_ILLOP_STATUS_vcpu_illop_addr_MASK)
/*! @} */

/*! @name LD_RF_CONTROL - Load Register File Control register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_mode_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_mode_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_mode_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_mode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_mode_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_mode_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_imag_MASK (0x10U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_imag_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_imag_WIDTH (1U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_imag(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_imag_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_imag_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Cplx_MASK (0x20U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Cplx_SHIFT (5U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Cplx_WIDTH (1U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Cplx(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_Cplx_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_Cplx_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_SignPol_MASK (0xC0U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_SignPol_SHIFT (6U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_SignPol_WIDTH (2U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_SignPol(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_SignPol_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_SignPol_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Size2sComp_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Size2sComp_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Size2sComp_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Size2sComp(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_Size2sComp_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_Size2sComp_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_bitRevs_MASK (0x1000U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_bitRevs_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_bitRevs_WIDTH (1U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_bitRevs(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_bitRevs_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_bitRevs_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_tblWriteEn_b_MASK (0x8000U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_tblWriteEn_b_SHIFT (15U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_tblWriteEn_b_WIDTH (1U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_tblWriteEn_b(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_tblWriteEn_b_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_tblWriteEn_b_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Ilsb_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Ilsb_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Ilsb_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Ilsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_Ilsb_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_Ilsb_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Isign_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Isign_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Isign_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Isign(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_Isign_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_Isign_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qlsb_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qlsb_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qlsb_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qlsb(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qlsb_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qlsb_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qsign_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qsign_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qsign_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qsign(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qsign_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_CONTROL_Qsign_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_0 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp0_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp0_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp0_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp0_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp0_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp1_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp1_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp1_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp1_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp1_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp2_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp2_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp2_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp2(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp2_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp2_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp3_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp3_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp3_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp3(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp3_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp3_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp4_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp4_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp4_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp4(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp4_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp4_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp5_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp5_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp5_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp5(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp5_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp5_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp6_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp6_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp6_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp6(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp6_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp6_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp7_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp7_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp7_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp7(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp7_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_0_cp7_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_0 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp0_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp0_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp0_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp0_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp0_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp1_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp1_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp1_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp1_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp1_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp2_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp2_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp2_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp2(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp2_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp2_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp3_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp3_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp3_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp3(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp3_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp3_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp4_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp4_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp4_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp4(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp4_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp4_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp5_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp5_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp5_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp5(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp5_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp5_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp6_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp6_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp6_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp6(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp6_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp6_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp7_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp7_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp7_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp7(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp7_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_0_cp7_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_1 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp8_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp8_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp8_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp8(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp8_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp8_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp9_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp9_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp9_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp9(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp9_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp9_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp10_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp10_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp10_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp10(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp10_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp10_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp11_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp11_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp11_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp11(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp11_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp11_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp12_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp12_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp12_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp12(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp12_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp12_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp13_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp13_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp13_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp13(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp13_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp13_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp14_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp14_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp14_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp14(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp14_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp14_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp15_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp15_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp15_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp15(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp15_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_1_cp15_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_1 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp8_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp8_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp8_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp8(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp8_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp8_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp9_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp9_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp9_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp9(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp9_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp9_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp10_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp10_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp10_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp10(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp10_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp10_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp11_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp11_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp11_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp11(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp11_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp11_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp12_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp12_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp12_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp12(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp12_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp12_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp13_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp13_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp13_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp13(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp13_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp13_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp14_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp14_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp14_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp14(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp14_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp14_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp15_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp15_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp15_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp15(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp15_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_1_cp15_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_2 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp16_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp16_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp16_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp16(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp16_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp16_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp17_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp17_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp17_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp17(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp17_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp17_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp18_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp18_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp18_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp18(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp18_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp18_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp19_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp19_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp19_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp19(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp19_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp19_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp20_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp20_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp20_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp20(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp20_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp20_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp21_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp21_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp21_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp21(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp21_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp21_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp22_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp22_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp22_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp22(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp22_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp22_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp23_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp23_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp23_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp23(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp23_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_2_cp23_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_2 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp16_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp16_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp16_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp16(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp16_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp16_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp17_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp17_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp17_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp17(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp17_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp17_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp18_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp18_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp18_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp18(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp18_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp18_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp19_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp19_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp19_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp19(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp19_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp19_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp20_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp20_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp20_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp20(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp20_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp20_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp21_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp21_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp21_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp21(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp21_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp21_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp22_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp22_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp22_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp22(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp22_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp22_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp23_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp23_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp23_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp23(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp23_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_2_cp23_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_3 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp24_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp24_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp24_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp24(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp24_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp24_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp25_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp25_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp25_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp25(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp25_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp25_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp26_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp26_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp26_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp26(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp26_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp26_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp27_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp27_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp27_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp27(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp27_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp27_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp28_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp28_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp28_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp28(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp28_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp28_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp29_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp29_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp29_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp29(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp29_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp29_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp30_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp30_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp30_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp30(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp30_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp30_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp31_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp31_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp31_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp31(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp31_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_3_cp31_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_3 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp24_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp24_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp24_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp24(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp24_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp24_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp25_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp25_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp25_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp25(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp25_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp25_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp26_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp26_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp26_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp26(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp26_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp26_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp27_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp27_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp27_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp27(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp27_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp27_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp28_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp28_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp28_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp28(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp28_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp28_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp29_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp29_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp29_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp29(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp29_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp29_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp30_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp30_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp30_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp30(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp30_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp30_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp31_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp31_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp31_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp31(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp31_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_3_cp31_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_4 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp32_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp32_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp32_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp32(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp32_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp32_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp33_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp33_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp33_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp33(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp33_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp33_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp34_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp34_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp34_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp34(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp34_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp34_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp35_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp35_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp35_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp35(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp35_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp35_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp36_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp36_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp36_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp36(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp36_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp36_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp37_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp37_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp37_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp37(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp37_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp37_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp38_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp38_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp38_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp38(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp38_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp38_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp39_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp39_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp39_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp39(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp39_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_4_cp39_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_4 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp32_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp32_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp32_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp32(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp32_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp32_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp33_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp33_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp33_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp33(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp33_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp33_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp34_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp34_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp34_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp34(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp34_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp34_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp35_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp35_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp35_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp35(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp35_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp35_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp36_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp36_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp36_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp36(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp36_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp36_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp37_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp37_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp37_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp37(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp37_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp37_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp38_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp38_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp38_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp38(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp38_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp38_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp39_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp39_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp39_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp39(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp39_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_4_cp39_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_5 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp40_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp40_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp40_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp40(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp40_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp40_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp41_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp41_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp41_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp41(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp41_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp41_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp42_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp42_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp42_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp42(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp42_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp42_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp43_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp43_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp43_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp43(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp43_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp43_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp44_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp44_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp44_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp44(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp44_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp44_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp45_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp45_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp45_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp45(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp45_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp45_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp46_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp46_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp46_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp46(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp46_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp46_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp47_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp47_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp47_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp47(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp47_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_5_cp47_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_5 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp40_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp40_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp40_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp40(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp40_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp40_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp41_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp41_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp41_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp41(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp41_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp41_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp42_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp42_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp42_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp42(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp42_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp42_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp43_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp43_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp43_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp43(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp43_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp43_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp44_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp44_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp44_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp44(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp44_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp44_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp45_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp45_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp45_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp45(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp45_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp45_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp46_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp46_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp46_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp46(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp46_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp46_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp47_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp47_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp47_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp47(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp47_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_5_cp47_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_6 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp48_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp48_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp48_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp48(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp48_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp48_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp49_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp49_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp49_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp49(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp49_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp49_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp50_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp50_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp50_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp50(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp50_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp50_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp51_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp51_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp51_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp51(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp51_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp51_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp52_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp52_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp52_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp52(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp52_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp52_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp53_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp53_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp53_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp53(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp53_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp53_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp54_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp54_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp54_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp54(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp54_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp54_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp55_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp55_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp55_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp55(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp55_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_6_cp55_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_6 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp48_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp48_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp48_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp48(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp48_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp48_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp49_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp49_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp49_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp49(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp49_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp49_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp50_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp50_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp50_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp50(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp50_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp50_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp51_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp51_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp51_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp51(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp51_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp51_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp52_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp52_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp52_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp52(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp52_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp52_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp53_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp53_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp53_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp53(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp53_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp53_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp54_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp54_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp54_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp54(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp54_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp54_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp55_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp55_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp55_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp55(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp55_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_6_cp55_MASK)
/*! @} */

/*! @name LD_RF_TB_REAL_7 - Load Register File Real Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp56_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp56_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp56_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp56(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp56_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp56_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp57_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp57_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp57_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp57(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp57_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp57_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp58_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp58_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp58_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp58(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp58_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp58_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp59_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp59_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp59_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp59(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp59_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp59_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp60_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp60_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp60_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp60(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp60_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp60_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp61_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp61_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp61_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp61(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp61_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp61_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp62_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp62_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp62_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp62(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp62_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp62_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp63_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp63_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp63_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp63(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp63_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_REAL_7_cp63_MASK)
/*! @} */

/*! @name LD_RF_TB_IMAG_7 - Load Register File Imaginary Coefficient Table register (Slow read register) */
/*! @{ */
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp56_MASK (0xFU)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp56_SHIFT (0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp56_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp56(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp56_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp56_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp57_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp57_SHIFT (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp57_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp57(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp57_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp57_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp58_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp58_SHIFT (8U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp58_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp58(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp58_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp58_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp59_MASK (0xF000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp59_SHIFT (12U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp59_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp59(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp59_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp59_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp60_MASK (0xF0000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp60_SHIFT (16U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp60_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp60(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp60_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp60_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp61_MASK (0xF00000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp61_SHIFT (20U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp61_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp61(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp61_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp61_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp62_MASK (0xF000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp62_SHIFT (24U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp62_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp62(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp62_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp62_MASK)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp63_MASK (0xF0000000U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp63_SHIFT (28U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp63_WIDTH (4U)
#define VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp63(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp63_SHIFT)) & VSPA_General_VCPU_control_status_LD_RF_TB_IMAG_7_cp63_MASK)
/*! @} */

/*! @name VCPU_MODE0 - VCPU Mode 0 */
/*! @{ */
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0Mode_MASK (0xFU)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0Mode_SHIFT (0U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0Mode_WIDTH (4U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0Mode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE0_s0Mode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE0_s0Mode_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0Conj_MASK (0x40U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0Conj_SHIFT (6U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0Conj_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0Conj(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE0_s0Conj_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE0_s0Conj_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0chs_MASK (0x80U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0chs_SHIFT (7U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0chs_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s0chs(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE0_s0chs_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE0_s0chs_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s1Mode_MASK (0x1F00U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s1Mode_SHIFT (8U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s1Mode_WIDTH (5U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s1Mode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE0_s1Mode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE0_s1Mode_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s2Mode_MASK (0x7000000U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s2Mode_SHIFT (24U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s2Mode_WIDTH (3U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_s2Mode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE0_s2Mode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE0_s2Mode_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_fftSmode_MASK (0x20000000U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_fftSmode_SHIFT (29U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_fftSmode_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_fftSmode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE0_fftSmode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE0_fftSmode_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_fftVmode_MASK (0x80000000U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_fftVmode_SHIFT (31U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_fftVmode_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_MODE0_fftVmode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE0_fftVmode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE0_fftVmode_MASK)
/*! @} */

/*! @name VCPU_MODE1 - VCPU Mode 1 */
/*! @{ */
#define VSPA_General_VCPU_control_status_VCPU_MODE1_rorMode_MASK (0x3FU)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_rorMode_SHIFT (0U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_rorMode_WIDTH (6U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_rorMode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE1_rorMode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE1_rorMode_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_rolMode_MASK (0x1F00U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_rolMode_SHIFT (8U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_rolMode_WIDTH (5U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_rolMode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE1_rolMode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE1_rolMode_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_AUprec_MASK (0x30000U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_AUprec_SHIFT (16U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_AUprec_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_AUprec(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE1_AUprec_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE1_AUprec_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S0prec_MASK (0xC0000U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S0prec_SHIFT (18U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S0prec_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S0prec(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE1_S0prec_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE1_S0prec_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S1prec_MASK (0x300000U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S1prec_SHIFT (20U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S1prec_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S1prec(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE1_S1prec_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE1_S1prec_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S2prec_MASK (0xC00000U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S2prec_SHIFT (22U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S2prec_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_S2prec(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE1_S2prec_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE1_S2prec_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_Vprec_MASK (0x3000000U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_Vprec_SHIFT (24U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_Vprec_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_Vprec(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE1_Vprec_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE1_Vprec_MASK)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_paddEna_MASK (0x4000000U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_paddEna_SHIFT (26U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_paddEna_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_MODE1_paddEna(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_MODE1_paddEna_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_MODE1_paddEna_MASK)
/*! @} */

/*! @name VCPU_CREG0 - VCPU CREG 0 */
/*! @{ */
#define VSPA_General_VCPU_control_status_VCPU_CREG0_ALLAU_MASK (0x2U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_ALLAU_SHIFT (1U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_ALLAU_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_ALLAU(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_ALLAU_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_ALLAU_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_AUOM_MASK (0xCU)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_AUOM_SHIFT (2U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_AUOM_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_AUOM(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_AUOM_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_AUOM_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale_MASK (0x10U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale_SHIFT (4U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale1_MASK (0x20U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale1_SHIFT (5U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale1_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale1_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_halfScale1_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_auOutSel_MASK (0xC0U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_auOutSel_SHIFT (6U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_auOutSel_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_auOutSel(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_auOutSel_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_auOutSel_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_angle_MASK (0x100U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_angle_SHIFT (8U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_angle_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_angle(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_angle_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_angle_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_angle1_MASK (0x200U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_angle1_SHIFT (9U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_angle1_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_angle1(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_angle1_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_angle1_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_H_index_MASK (0x3C00U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_H_index_SHIFT (10U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_H_index_WIDTH (4U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_H_index(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_H_index_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_H_index_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_signMode_MASK (0x1C000U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_signMode_SHIFT (14U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_signMode_WIDTH (3U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_signMode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_signMode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_signMode_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_ccUpdate_MASK (0x40000U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_ccUpdate_SHIFT (18U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_ccUpdate_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_ccUpdate(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_ccUpdate_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_ccUpdate_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_vspa_mode_MASK (0x180000U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_vspa_mode_SHIFT (19U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_vspa_mode_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_vspa_mode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_vspa_mode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_vspa_mode_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_rotate3_en_MASK (0xC00000U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_rotate3_en_SHIFT (22U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_rotate3_en_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_rotate3_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_rotate3_en_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_rotate3_en_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_sau_mode_MASK (0x3000000U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_sau_mode_SHIFT (24U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_sau_mode_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_sau_mode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_sau_mode_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_sau_mode_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_elRev_MASK (0xC000000U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_elRev_SHIFT (26U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_elRev_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VCPU_CREG0_elRev(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG0_elRev_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG0_elRev_MASK)
/*! @} */

/*! @name VCPU_CREG1 - VCPU CREG 1 */
/*! @{ */
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpP_MASK (0xFU)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpP_SHIFT (0U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpP_WIDTH (4U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpP(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG1_interpP_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG1_interpP_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpD_MASK (0xF0U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpD_SHIFT (4U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpD_WIDTH (4U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpD(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG1_interpD_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG1_interpD_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpN_MASK (0xF00U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpN_SHIFT (8U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpN_WIDTH (4U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_interpN(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG1_interpN_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG1_interpN_MASK)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_readIndex_MASK (0xFF000U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_readIndex_SHIFT (12U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_readIndex_WIDTH (8U)
#define VSPA_General_VCPU_control_status_VCPU_CREG1_readIndex(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VCPU_CREG1_readIndex_SHIFT)) & VSPA_General_VCPU_control_status_VCPU_CREG1_readIndex_MASK)
/*! @} */

/*! @name ST_UL_VEC_LEN - Store Unalign Vector Length */
/*! @{ */
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_VEC_LEN_MASK (0x7FFFFU)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_VEC_LEN_SHIFT (0U)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_VEC_LEN_WIDTH (19U)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_VEC_LEN(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_VEC_LEN_SHIFT)) & VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_VEC_LEN_MASK)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_ROT_COUNT_MASK (0x3F00000U)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_ROT_COUNT_SHIFT (20U)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_ROT_COUNT_WIDTH (6U)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_ROT_COUNT(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_ROT_COUNT_SHIFT)) & VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_ST_ROT_COUNT_MASK)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_State_MASK (0xC0000000U)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_State_SHIFT (30U)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_State_WIDTH (2U)
#define VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_State(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_State_SHIFT)) & VSPA_General_VCPU_control_status_ST_UL_VEC_LEN_State_MASK)
/*! @} */

/*! @name VP_CONTROL - Vector Predicate Control */
/*! @{ */
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_MODE_MASK (0xFU)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_MODE_SHIFT (0U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_MODE_WIDTH (4U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_MODE(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VP_CONTROL_ACT_MODE_SHIFT)) & VSPA_General_VCPU_control_status_VP_CONTROL_ACT_MODE_MASK)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_PTR_MASK (0x30U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_PTR_SHIFT (4U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_PTR_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_PTR(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VP_CONTROL_ACT_PTR_SHIFT)) & VSPA_General_VCPU_control_status_VP_CONTROL_ACT_PTR_MASK)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_INCR_MASK (0x40U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_INCR_SHIFT (6U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_INCR_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_ACT_INCR(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VP_CONTROL_ACT_INCR_SHIFT)) & VSPA_General_VCPU_control_status_VP_CONTROL_ACT_INCR_MASK)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_MODE_MASK (0x300U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_MODE_SHIFT (8U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_MODE_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_MODE(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VP_CONTROL_CAP_MODE_SHIFT)) & VSPA_General_VCPU_control_status_VP_CONTROL_CAP_MODE_MASK)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_PTR_MASK (0xC00U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_PTR_SHIFT (10U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_PTR_WIDTH (2U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_PTR(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VP_CONTROL_CAP_PTR_SHIFT)) & VSPA_General_VCPU_control_status_VP_CONTROL_CAP_PTR_MASK)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_INCR_MASK (0x1000U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_INCR_SHIFT (12U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_INCR_WIDTH (1U)
#define VSPA_General_VCPU_control_status_VP_CONTROL_CAP_INCR(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_VP_CONTROL_CAP_INCR_SHIFT)) & VSPA_General_VCPU_control_status_VP_CONTROL_CAP_INCR_MASK)
/*! @} */

/*! @name XC_CONTROL - Extended Condition Control */
/*! @{ */
#define VSPA_General_VCPU_control_status_XC_CONTROL_BR_XC_MODE_MASK (0xFU)
#define VSPA_General_VCPU_control_status_XC_CONTROL_BR_XC_MODE_SHIFT (0U)
#define VSPA_General_VCPU_control_status_XC_CONTROL_BR_XC_MODE_WIDTH (4U)
#define VSPA_General_VCPU_control_status_XC_CONTROL_BR_XC_MODE(x) (((uint32_t)(((uint32_t)(x)) << VSPA_General_VCPU_control_status_XC_CONTROL_BR_XC_MODE_SHIFT)) & VSPA_General_VCPU_control_status_XC_CONTROL_BR_XC_MODE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_General_VCPU_control_status_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_General_VCPU_control_status_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_General_VCPU_control_status_H_) */
