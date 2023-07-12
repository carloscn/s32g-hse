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
 * @file S32R45_VSPA.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA
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
#if !defined(S32R45_VSPA_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Peripheral_Access_Layer VSPA Peripheral Access Layer
 * @{
 */

/** VSPA - Size of Registers Arrays */
#define VSPA_CTOACR_COUNT                         4u

/** VSPA - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[2048];
  __IO uint32_t GDBEN;                             /**< Global Debug Enable register, offset: 0x800 */
  __IO uint32_t RCR;                               /**< Debug Run Control register, offset: 0x804 */
  __I  uint32_t RCSTATUS;                          /**< Debug Run Control Status register, offset: 0x808 */
  __IO uint32_t TC1;                               /**< Trace Control register 1, offset: 0x80C */
  uint8_t RESERVED_1[44];
  __IO uint32_t HACR;                              /**< Debug Halt Action Control register, offset: 0x83C */
  __IO uint32_t RACR;                              /**< Debug Resume Action Control register, offset: 0x840 */
  __IO uint32_t PTSACR;                            /**< Debug Program Trace Sync Action Control register, offset: 0x844 */
  __IO uint32_t PSTACR;                            /**< Debug Program Trace Start Action Control register, offset: 0x848 */
  __IO uint32_t PSPACR;                            /**< Debug Program Trace Stop Action Control register, offset: 0x84C */
  __IO uint32_t DSTACR;                            /**< Debug Data Trace Start Action Control register, offset: 0x850 */
  __IO uint32_t DSPACR;                            /**< Debug Data Trace Stop Action Control register, offset: 0x854 */
  __IO uint32_t DTMACR;                            /**< Debug Data Trace Message Generation Action Control register, offset: 0x858 */
  __IO uint32_t WPMACR;                            /**< Debug WPM Generation Action Control register, offset: 0x85C */
  __IO uint32_t TSMCR;                             /**< Debug TSM Control register, offset: 0x860 */
  __I  uint32_t TSMCNT_U;                          /**< Debug VSPA Timestamp Counter (Upper) register, offset: 0x864 */
  __I  uint32_t TSMCNT_L;                          /**< Debug VSPA Timestamp Counter (Lower) register, offset: 0x868 */
  uint8_t RESERVED_2[4];
  __IO uint32_t RAVAP;                             /**< Debug VSP Architecture Visibility Address Pointer register, offset: 0x870 */
  __IO uint32_t RAVFD;                             /**< Debug VSP Architecture Visibility Fixed Data register, offset: 0x874 */
  __IO uint32_t RAVID;                             /**< Debug VSP Architecture Visibility Incrementing Data register, offset: 0x878 */
  __I  uint32_t DVR;                               /**< Debug Verification register, offset: 0x87C */
  __IO uint32_t CTOACR[VSPA_CTOACR_COUNT];         /**< Debug Cross Trigger Out a Action Control registers, array offset: 0x880, array step: 0x4 */
  uint8_t RESERVED_3[112];
  __IO uint32_t DC0CS;                             /**< Debug Comparator Control and Status register, offset: 0x900 */
  __IO uint32_t DC0D;                              /**< Debug Comparator a Data register, offset: 0x904 */
  __IO uint32_t C0AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x908 */
  __IO uint32_t C0DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x90C */
  __IO uint32_t C0TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x910 */
  __IO uint32_t DC1CS;                             /**< Debug Comparator Control and Status register, offset: 0x914 */
  __IO uint32_t DC1D;                              /**< Debug Comparator a Data register, offset: 0x918 */
  __IO uint32_t C1AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x91C */
  __IO uint32_t C1DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x920 */
  __IO uint32_t C1TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x924 */
  __IO uint32_t DC2CS;                             /**< Debug Comparator Control and Status register, offset: 0x928 */
  __IO uint32_t DC2D;                              /**< Debug Comparator a Data register, offset: 0x92C */
  __IO uint32_t C2AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x930 */
  __IO uint32_t C2DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x934 */
  __IO uint32_t C2TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x938 */
  __IO uint32_t DC3CS;                             /**< Debug Comparator Control and Status register, offset: 0x93C */
  __IO uint32_t DC3D;                              /**< Debug Comparator a Data register, offset: 0x940 */
  __IO uint32_t C3AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x944 */
  __IO uint32_t C3DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x948 */
  __IO uint32_t C3TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x94C */
  __IO uint32_t DC4CS;                             /**< Debug Comparator Control and Status register, offset: 0x950 */
  __IO uint32_t DC4D;                              /**< Debug Comparator a Data register, offset: 0x954 */
  __IO uint32_t C4AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x958 */
  __IO uint32_t C4DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x95C */
  __IO uint32_t C4TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x960 */
  __IO uint32_t DC5CS;                             /**< Debug Comparator Control and Status register, offset: 0x964 */
  __IO uint32_t DC5D;                              /**< Debug Comparator a Data register, offset: 0x968 */
  __IO uint32_t C5AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x96C */
  __IO uint32_t C5DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x970 */
  __IO uint32_t C5TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x974 */
  __IO uint32_t DC6CS;                             /**< Debug Comparator Control and Status register, offset: 0x978 */
  __IO uint32_t DC6D;                              /**< Debug Comparator a Data register, offset: 0x97C */
  __IO uint32_t C6AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x980 */
  __IO uint32_t C6DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x984 */
  __IO uint32_t C6TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x988 */
  __IO uint32_t DC7CS;                             /**< Debug Comparator Control and Status register, offset: 0x98C */
  __IO uint32_t DC7D;                              /**< Debug Comparator a Data register, offset: 0x990 */
  __IO uint32_t C7AACR;                            /**< Debug Comparator a Arm Action Control registers, offset: 0x994 */
  __IO uint32_t C7DACR;                            /**< Debug Comparator a Disarm Action Control registers, offset: 0x998 */
  __IO uint32_t C7TACR;                            /**< Debug Comparator a Trigger Action Control registers, offset: 0x99C */
  uint8_t RESERVED_4[1152];
  __O  uint32_t OUT_32;                            /**< Debug to VSP 32-bit Outbox register, offset: 0xE20 */
  __O  uint32_t OUT_64_MSB;                        /**< Debug to VSP 64-bit MSB Outbox register, offset: 0xE24 */
  __O  uint32_t OUT_64_LSB;                        /**< Debug to VSP 64-bit LSB Outbox register, offset: 0xE28 */
  __I  uint32_t IN_32;                             /**< VSP to Debugger 32-bit Inbox register, offset: 0xE2C */
  __I  uint32_t IN_64_MSB;                         /**< VSP to Debugger 64-bit MSB Inbox register, offset: 0xE30 */
  __I  uint32_t IN_64_LSB;                         /**< VSP to Debugger 64-bit LSB Inbox register, offset: 0xE34 */
  __I  uint32_t MBOX_STATUS;                       /**< Debugger to VSP Mailbox Status register, offset: 0xE38 */
  uint8_t RESERVED_5[196];
  __I  uint32_t PARAM_0;                           /**< Debug Parameter 0 Register, offset: 0xF00 */
  uint8_t RESERVED_6[204];
  __I  uint32_t PIDR4;                             /**< Peripheral ID4 register, offset: 0xFD0 */
  __I  uint32_t PIDR5;                             /**< Peripheral ID5 register, offset: 0xFD4 */
  __I  uint32_t PIDR6;                             /**< Peripheral ID6 register, offset: 0xFD8 */
  __I  uint32_t PIDR7;                             /**< Peripheral ID7 register, offset: 0xFDC */
  __I  uint32_t PIDR0;                             /**< Peripheral ID0 register, offset: 0xFE0 */
  __I  uint32_t PIDR1;                             /**< Peripheral ID1 register, offset: 0xFE4 */
  __I  uint32_t PIDR2;                             /**< Peripheral ID2 register, offset: 0xFE8 */
  __I  uint32_t PIDR3;                             /**< Peripheral ID3 register, offset: 0xFEC */
  __I  uint32_t CIDR0;                             /**< Component ID0 register, offset: 0xFF0 */
  __I  uint32_t CIDR1;                             /**< Component ID1 register, offset: 0xFF4 */
  __I  uint32_t CIDR2;                             /**< Component ID2 register, offset: 0xFF8 */
  __I  uint32_t CIDR3;                             /**< Component ID3 register, offset: 0xFFC */
} VSPA_Type, *VSPA_MemMapPtr;

/** Number of instances of the VSPA module. */
#define VSPA_INSTANCE_COUNT                      (2u)

/* VSPA - Peripheral instance base addresses */
/** Peripheral LAX_0_DBG base address */
#define LAX_0_DBG_BASE                           (0x51139000u)
/** Peripheral LAX_0_DBG base pointer */
#define LAX_0_DBG                                ((VSPA_Type *)LAX_0_DBG_BASE)
/** Peripheral LAX_1_DBG base address */
#define LAX_1_DBG_BASE                           (0x5113A000u)
/** Peripheral LAX_1_DBG base pointer */
#define LAX_1_DBG                                ((VSPA_Type *)LAX_1_DBG_BASE)
/** Array initializer of VSPA peripheral base addresses */
#define VSPA_BASE_ADDRS                          { LAX_0_DBG_BASE, LAX_1_DBG_BASE }
/** Array initializer of VSPA peripheral base pointers */
#define VSPA_BASE_PTRS                           { LAX_0_DBG, LAX_1_DBG }

/* ----------------------------------------------------------------------------
   -- VSPA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Register_Masks VSPA Register Masks
 * @{
 */

/*! @name GDBEN - Global Debug Enable register */
/*! @{ */
#define VSPA_GDBEN_idbg_en_MASK                  (0x1U)
#define VSPA_GDBEN_idbg_en_SHIFT                 (0U)
#define VSPA_GDBEN_idbg_en_WIDTH                 (1U)
#define VSPA_GDBEN_idbg_en(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_GDBEN_idbg_en_SHIFT)) & VSPA_GDBEN_idbg_en_MASK)
#define VSPA_GDBEN_nidbg_en_MASK                 (0x2U)
#define VSPA_GDBEN_nidbg_en_SHIFT                (1U)
#define VSPA_GDBEN_nidbg_en_WIDTH                (1U)
#define VSPA_GDBEN_nidbg_en(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_GDBEN_nidbg_en_SHIFT)) & VSPA_GDBEN_nidbg_en_MASK)
/*! @} */

/*! @name RCR - Debug Run Control register */
/*! @{ */
#define VSPA_RCR_single_step_MASK                (0x1U)
#define VSPA_RCR_single_step_SHIFT               (0U)
#define VSPA_RCR_single_step_WIDTH               (1U)
#define VSPA_RCR_single_step(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_RCR_single_step_SHIFT)) & VSPA_RCR_single_step_MASK)
#define VSPA_RCR_resume_MASK                     (0x2U)
#define VSPA_RCR_resume_SHIFT                    (1U)
#define VSPA_RCR_resume_WIDTH                    (1U)
#define VSPA_RCR_resume(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_RCR_resume_SHIFT)) & VSPA_RCR_resume_MASK)
#define VSPA_RCR_force_halt_MASK                 (0x4U)
#define VSPA_RCR_force_halt_SHIFT                (2U)
#define VSPA_RCR_force_halt_WIDTH                (1U)
#define VSPA_RCR_force_halt(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_RCR_force_halt_SHIFT)) & VSPA_RCR_force_halt_MASK)
#define VSPA_RCR_halt_cyc_counter_MASK           (0x100U)
#define VSPA_RCR_halt_cyc_counter_SHIFT          (8U)
#define VSPA_RCR_halt_cyc_counter_WIDTH          (1U)
#define VSPA_RCR_halt_cyc_counter(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_RCR_halt_cyc_counter_SHIFT)) & VSPA_RCR_halt_cyc_counter_MASK)
/*! @} */

/*! @name RCSTATUS - Debug Run Control Status register */
/*! @{ */
#define VSPA_RCSTATUS_cmpn_MASK                  (0xFFU)
#define VSPA_RCSTATUS_cmpn_SHIFT                 (0U)
#define VSPA_RCSTATUS_cmpn_WIDTH                 (8U)
#define VSPA_RCSTATUS_cmpn(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_cmpn_SHIFT)) & VSPA_RCSTATUS_cmpn_MASK)
#define VSPA_RCSTATUS_halted_MASK                (0x2000U)
#define VSPA_RCSTATUS_halted_SHIFT               (13U)
#define VSPA_RCSTATUS_halted_WIDTH               (1U)
#define VSPA_RCSTATUS_halted(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_halted_SHIFT)) & VSPA_RCSTATUS_halted_MASK)
#define VSPA_RCSTATUS_forced_halt_MASK           (0x4000U)
#define VSPA_RCSTATUS_forced_halt_SHIFT          (14U)
#define VSPA_RCSTATUS_forced_halt_WIDTH          (1U)
#define VSPA_RCSTATUS_forced_halt(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_forced_halt_SHIFT)) & VSPA_RCSTATUS_forced_halt_MASK)
#define VSPA_RCSTATUS_dbg_halt_req_MASK          (0x8000U)
#define VSPA_RCSTATUS_dbg_halt_req_SHIFT         (15U)
#define VSPA_RCSTATUS_dbg_halt_req_WIDTH         (1U)
#define VSPA_RCSTATUS_dbg_halt_req(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_dbg_halt_req_SHIFT)) & VSPA_RCSTATUS_dbg_halt_req_MASK)
#define VSPA_RCSTATUS_ctinn_MASK                 (0xFF0000U)
#define VSPA_RCSTATUS_ctinn_SHIFT                (16U)
#define VSPA_RCSTATUS_ctinn_WIDTH                (8U)
#define VSPA_RCSTATUS_ctinn(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_ctinn_SHIFT)) & VSPA_RCSTATUS_ctinn_MASK)
#define VSPA_RCSTATUS_irq_input_MASK             (0x4000000U)
#define VSPA_RCSTATUS_irq_input_SHIFT            (26U)
#define VSPA_RCSTATUS_irq_input_WIDTH            (1U)
#define VSPA_RCSTATUS_irq_input(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_irq_input_SHIFT)) & VSPA_RCSTATUS_irq_input_MASK)
#define VSPA_RCSTATUS_prot_fault_MASK            (0x8000000U)
#define VSPA_RCSTATUS_prot_fault_SHIFT           (27U)
#define VSPA_RCSTATUS_prot_fault_WIDTH           (1U)
#define VSPA_RCSTATUS_prot_fault(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_prot_fault_SHIFT)) & VSPA_RCSTATUS_prot_fault_MASK)
#define VSPA_RCSTATUS_iit_MASK                   (0x10000000U)
#define VSPA_RCSTATUS_iit_SHIFT                  (28U)
#define VSPA_RCSTATUS_iit_WIDTH                  (1U)
#define VSPA_RCSTATUS_iit(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_iit_SHIFT)) & VSPA_RCSTATUS_iit_MASK)
#define VSPA_RCSTATUS_swb_MASK                   (0x20000000U)
#define VSPA_RCSTATUS_swb_SHIFT                  (29U)
#define VSPA_RCSTATUS_swb_WIDTH                  (1U)
#define VSPA_RCSTATUS_swb(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_swb_SHIFT)) & VSPA_RCSTATUS_swb_MASK)
#define VSPA_RCSTATUS_vcpu_done_MASK             (0x40000000U)
#define VSPA_RCSTATUS_vcpu_done_SHIFT            (30U)
#define VSPA_RCSTATUS_vcpu_done_WIDTH            (1U)
#define VSPA_RCSTATUS_vcpu_done(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_vcpu_done_SHIFT)) & VSPA_RCSTATUS_vcpu_done_MASK)
#define VSPA_RCSTATUS_vcpu_go_MASK               (0x80000000U)
#define VSPA_RCSTATUS_vcpu_go_SHIFT              (31U)
#define VSPA_RCSTATUS_vcpu_go_WIDTH              (1U)
#define VSPA_RCSTATUS_vcpu_go(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_RCSTATUS_vcpu_go_SHIFT)) & VSPA_RCSTATUS_vcpu_go_MASK)
/*! @} */

/*! @name TC1 - Trace Control register 1 */
/*! @{ */
#define VSPA_TC1_dqm_en_MASK                     (0x1U)
#define VSPA_TC1_dqm_en_SHIFT                    (0U)
#define VSPA_TC1_dqm_en_WIDTH                    (1U)
#define VSPA_TC1_dqm_en(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dqm_en_SHIFT)) & VSPA_TC1_dqm_en_MASK)
#define VSPA_TC1_wpt_en_MASK                     (0x2U)
#define VSPA_TC1_wpt_en_SHIFT                    (1U)
#define VSPA_TC1_wpt_en_WIDTH                    (1U)
#define VSPA_TC1_wpt_en(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_wpt_en_SHIFT)) & VSPA_TC1_wpt_en_MASK)
#define VSPA_TC1_dtm_tr_start_MASK               (0x4U)
#define VSPA_TC1_dtm_tr_start_SHIFT              (2U)
#define VSPA_TC1_dtm_tr_start_WIDTH              (1U)
#define VSPA_TC1_dtm_tr_start(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dtm_tr_start_SHIFT)) & VSPA_TC1_dtm_tr_start_MASK)
#define VSPA_TC1_dtm_tr_stop_MASK                (0x8U)
#define VSPA_TC1_dtm_tr_stop_SHIFT               (3U)
#define VSPA_TC1_dtm_tr_stop_WIDTH               (1U)
#define VSPA_TC1_dtm_tr_stop(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dtm_tr_stop_SHIFT)) & VSPA_TC1_dtm_tr_stop_MASK)
#define VSPA_TC1_dtm_trig_en_MASK                (0x10U)
#define VSPA_TC1_dtm_trig_en_SHIFT               (4U)
#define VSPA_TC1_dtm_trig_en_WIDTH               (1U)
#define VSPA_TC1_dtm_trig_en(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dtm_trig_en_SHIFT)) & VSPA_TC1_dtm_trig_en_MASK)
#define VSPA_TC1_ptm_tr_start_MASK               (0x20U)
#define VSPA_TC1_ptm_tr_start_SHIFT              (5U)
#define VSPA_TC1_ptm_tr_start_WIDTH              (1U)
#define VSPA_TC1_ptm_tr_start(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_ptm_tr_start_SHIFT)) & VSPA_TC1_ptm_tr_start_MASK)
#define VSPA_TC1_ptm_tr_stop_MASK                (0x40U)
#define VSPA_TC1_ptm_tr_stop_SHIFT               (6U)
#define VSPA_TC1_ptm_tr_stop_WIDTH               (1U)
#define VSPA_TC1_ptm_tr_stop(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_ptm_tr_stop_SHIFT)) & VSPA_TC1_ptm_tr_stop_MASK)
#define VSPA_TC1_ptm_trig_en_MASK                (0x80U)
#define VSPA_TC1_ptm_trig_en_SHIFT               (7U)
#define VSPA_TC1_ptm_trig_en_WIDTH               (1U)
#define VSPA_TC1_ptm_trig_en(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_ptm_trig_en_SHIFT)) & VSPA_TC1_ptm_trig_en_MASK)
#define VSPA_TC1_dt_status_MASK                  (0x1000U)
#define VSPA_TC1_dt_status_SHIFT                 (12U)
#define VSPA_TC1_dt_status_WIDTH                 (1U)
#define VSPA_TC1_dt_status(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dt_status_SHIFT)) & VSPA_TC1_dt_status_MASK)
#define VSPA_TC1_pt_status_MASK                  (0x2000U)
#define VSPA_TC1_pt_status_SHIFT                 (13U)
#define VSPA_TC1_pt_status_WIDTH                 (1U)
#define VSPA_TC1_pt_status(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_pt_status_SHIFT)) & VSPA_TC1_pt_status_MASK)
#define VSPA_TC1_dbg_fifo_empty_MASK             (0x4000U)
#define VSPA_TC1_dbg_fifo_empty_SHIFT            (14U)
#define VSPA_TC1_dbg_fifo_empty_WIDTH            (1U)
#define VSPA_TC1_dbg_fifo_empty(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dbg_fifo_empty_SHIFT)) & VSPA_TC1_dbg_fifo_empty_MASK)
#define VSPA_TC1_tam_period_MASK                 (0x70000U)
#define VSPA_TC1_tam_period_SHIFT                (16U)
#define VSPA_TC1_tam_period_WIDTH                (3U)
#define VSPA_TC1_tam_period(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_tam_period_SHIFT)) & VSPA_TC1_tam_period_MASK)
#define VSPA_TC1_hwlte_MASK                      (0x2000000U)
#define VSPA_TC1_hwlte_SHIFT                     (25U)
#define VSPA_TC1_hwlte_WIDTH                     (1U)
#define VSPA_TC1_hwlte(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_hwlte_SHIFT)) & VSPA_TC1_hwlte_MASK)
#define VSPA_TC1_rse_MASK                        (0x4000000U)
#define VSPA_TC1_rse_SHIFT                       (26U)
#define VSPA_TC1_rse_WIDTH                       (1U)
#define VSPA_TC1_rse(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_rse_SHIFT)) & VSPA_TC1_rse_MASK)
#define VSPA_TC1_dbsue_MASK                      (0x8000000U)
#define VSPA_TC1_dbsue_SHIFT                     (27U)
#define VSPA_TC1_dbsue_WIDTH                     (1U)
#define VSPA_TC1_dbsue(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_TC1_dbsue_SHIFT)) & VSPA_TC1_dbsue_MASK)
/*! @} */

/*! @name HACR - Debug Halt Action Control register */
/*! @{ */
#define VSPA_HACR_cmpn_MASK                      (0xFFU)
#define VSPA_HACR_cmpn_SHIFT                     (0U)
#define VSPA_HACR_cmpn_WIDTH                     (8U)
#define VSPA_HACR_cmpn(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_cmpn_SHIFT)) & VSPA_HACR_cmpn_MASK)
#define VSPA_HACR_ctinn_MASK                     (0xF0000U)
#define VSPA_HACR_ctinn_SHIFT                    (16U)
#define VSPA_HACR_ctinn_WIDTH                    (4U)
#define VSPA_HACR_ctinn(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_ctinn_SHIFT)) & VSPA_HACR_ctinn_MASK)
#define VSPA_HACR_vcpu_illop_MASK                (0x10000000U)
#define VSPA_HACR_vcpu_illop_SHIFT               (28U)
#define VSPA_HACR_vcpu_illop_WIDTH               (1U)
#define VSPA_HACR_vcpu_illop(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_vcpu_illop_SHIFT)) & VSPA_HACR_vcpu_illop_MASK)
#define VSPA_HACR_swb_MASK                       (0x20000000U)
#define VSPA_HACR_swb_SHIFT                      (29U)
#define VSPA_HACR_swb_WIDTH                      (1U)
#define VSPA_HACR_swb(x)                         (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_swb_SHIFT)) & VSPA_HACR_swb_MASK)
#define VSPA_HACR_vcpu_done_MASK                 (0x40000000U)
#define VSPA_HACR_vcpu_done_SHIFT                (30U)
#define VSPA_HACR_vcpu_done_WIDTH                (1U)
#define VSPA_HACR_vcpu_done(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_vcpu_done_SHIFT)) & VSPA_HACR_vcpu_done_MASK)
#define VSPA_HACR_vcpu_go_MASK                   (0x80000000U)
#define VSPA_HACR_vcpu_go_SHIFT                  (31U)
#define VSPA_HACR_vcpu_go_WIDTH                  (1U)
#define VSPA_HACR_vcpu_go(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_HACR_vcpu_go_SHIFT)) & VSPA_HACR_vcpu_go_MASK)
/*! @} */

/*! @name RACR - Debug Resume Action Control register */
/*! @{ */
#define VSPA_RACR_cmpn_MASK                      (0xFFU)
#define VSPA_RACR_cmpn_SHIFT                     (0U)
#define VSPA_RACR_cmpn_WIDTH                     (8U)
#define VSPA_RACR_cmpn(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_cmpn_SHIFT)) & VSPA_RACR_cmpn_MASK)
#define VSPA_RACR_ctinn_MASK                     (0xF0000U)
#define VSPA_RACR_ctinn_SHIFT                    (16U)
#define VSPA_RACR_ctinn_WIDTH                    (4U)
#define VSPA_RACR_ctinn(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_ctinn_SHIFT)) & VSPA_RACR_ctinn_MASK)
#define VSPA_RACR_swb_MASK                       (0x20000000U)
#define VSPA_RACR_swb_SHIFT                      (29U)
#define VSPA_RACR_swb_WIDTH                      (1U)
#define VSPA_RACR_swb(x)                         (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_swb_SHIFT)) & VSPA_RACR_swb_MASK)
#define VSPA_RACR_vcpu_done_MASK                 (0x40000000U)
#define VSPA_RACR_vcpu_done_SHIFT                (30U)
#define VSPA_RACR_vcpu_done_WIDTH                (1U)
#define VSPA_RACR_vcpu_done(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_vcpu_done_SHIFT)) & VSPA_RACR_vcpu_done_MASK)
#define VSPA_RACR_vcpu_go_MASK                   (0x80000000U)
#define VSPA_RACR_vcpu_go_SHIFT                  (31U)
#define VSPA_RACR_vcpu_go_WIDTH                  (1U)
#define VSPA_RACR_vcpu_go(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RACR_vcpu_go_SHIFT)) & VSPA_RACR_vcpu_go_MASK)
/*! @} */

/*! @name PTSACR - Debug Program Trace Sync Action Control register */
/*! @{ */
#define VSPA_PTSACR_cmpn_MASK                    (0xFFU)
#define VSPA_PTSACR_cmpn_SHIFT                   (0U)
#define VSPA_PTSACR_cmpn_WIDTH                   (8U)
#define VSPA_PTSACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PTSACR_cmpn_SHIFT)) & VSPA_PTSACR_cmpn_MASK)
#define VSPA_PTSACR_ctinn_MASK                   (0xF0000U)
#define VSPA_PTSACR_ctinn_SHIFT                  (16U)
#define VSPA_PTSACR_ctinn_WIDTH                  (4U)
#define VSPA_PTSACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PTSACR_ctinn_SHIFT)) & VSPA_PTSACR_ctinn_MASK)
#define VSPA_PTSACR_swb_MASK                     (0x20000000U)
#define VSPA_PTSACR_swb_SHIFT                    (29U)
#define VSPA_PTSACR_swb_WIDTH                    (1U)
#define VSPA_PTSACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PTSACR_swb_SHIFT)) & VSPA_PTSACR_swb_MASK)
/*! @} */

/*! @name PSTACR - Debug Program Trace Start Action Control register */
/*! @{ */
#define VSPA_PSTACR_cmpn_MASK                    (0xFFU)
#define VSPA_PSTACR_cmpn_SHIFT                   (0U)
#define VSPA_PSTACR_cmpn_WIDTH                   (8U)
#define VSPA_PSTACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_cmpn_SHIFT)) & VSPA_PSTACR_cmpn_MASK)
#define VSPA_PSTACR_ctinn_MASK                   (0xF0000U)
#define VSPA_PSTACR_ctinn_SHIFT                  (16U)
#define VSPA_PSTACR_ctinn_WIDTH                  (4U)
#define VSPA_PSTACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_ctinn_SHIFT)) & VSPA_PSTACR_ctinn_MASK)
#define VSPA_PSTACR_swb_MASK                     (0x20000000U)
#define VSPA_PSTACR_swb_SHIFT                    (29U)
#define VSPA_PSTACR_swb_WIDTH                    (1U)
#define VSPA_PSTACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_swb_SHIFT)) & VSPA_PSTACR_swb_MASK)
#define VSPA_PSTACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_PSTACR_vcpu_done_SHIFT              (30U)
#define VSPA_PSTACR_vcpu_done_WIDTH              (1U)
#define VSPA_PSTACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_vcpu_done_SHIFT)) & VSPA_PSTACR_vcpu_done_MASK)
#define VSPA_PSTACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_PSTACR_vcpu_go_SHIFT                (31U)
#define VSPA_PSTACR_vcpu_go_WIDTH                (1U)
#define VSPA_PSTACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PSTACR_vcpu_go_SHIFT)) & VSPA_PSTACR_vcpu_go_MASK)
/*! @} */

/*! @name PSPACR - Debug Program Trace Stop Action Control register */
/*! @{ */
#define VSPA_PSPACR_cmpn_MASK                    (0xFFU)
#define VSPA_PSPACR_cmpn_SHIFT                   (0U)
#define VSPA_PSPACR_cmpn_WIDTH                   (8U)
#define VSPA_PSPACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_cmpn_SHIFT)) & VSPA_PSPACR_cmpn_MASK)
#define VSPA_PSPACR_ctinn_MASK                   (0xF0000U)
#define VSPA_PSPACR_ctinn_SHIFT                  (16U)
#define VSPA_PSPACR_ctinn_WIDTH                  (4U)
#define VSPA_PSPACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_ctinn_SHIFT)) & VSPA_PSPACR_ctinn_MASK)
#define VSPA_PSPACR_swb_MASK                     (0x20000000U)
#define VSPA_PSPACR_swb_SHIFT                    (29U)
#define VSPA_PSPACR_swb_WIDTH                    (1U)
#define VSPA_PSPACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_swb_SHIFT)) & VSPA_PSPACR_swb_MASK)
#define VSPA_PSPACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_PSPACR_vcpu_done_SHIFT              (30U)
#define VSPA_PSPACR_vcpu_done_WIDTH              (1U)
#define VSPA_PSPACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_vcpu_done_SHIFT)) & VSPA_PSPACR_vcpu_done_MASK)
#define VSPA_PSPACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_PSPACR_vcpu_go_SHIFT                (31U)
#define VSPA_PSPACR_vcpu_go_WIDTH                (1U)
#define VSPA_PSPACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PSPACR_vcpu_go_SHIFT)) & VSPA_PSPACR_vcpu_go_MASK)
/*! @} */

/*! @name DSTACR - Debug Data Trace Start Action Control register */
/*! @{ */
#define VSPA_DSTACR_cmpn_MASK                    (0xFFU)
#define VSPA_DSTACR_cmpn_SHIFT                   (0U)
#define VSPA_DSTACR_cmpn_WIDTH                   (8U)
#define VSPA_DSTACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_cmpn_SHIFT)) & VSPA_DSTACR_cmpn_MASK)
#define VSPA_DSTACR_ctinn_MASK                   (0xF0000U)
#define VSPA_DSTACR_ctinn_SHIFT                  (16U)
#define VSPA_DSTACR_ctinn_WIDTH                  (4U)
#define VSPA_DSTACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_ctinn_SHIFT)) & VSPA_DSTACR_ctinn_MASK)
#define VSPA_DSTACR_swb_MASK                     (0x20000000U)
#define VSPA_DSTACR_swb_SHIFT                    (29U)
#define VSPA_DSTACR_swb_WIDTH                    (1U)
#define VSPA_DSTACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_swb_SHIFT)) & VSPA_DSTACR_swb_MASK)
#define VSPA_DSTACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_DSTACR_vcpu_done_SHIFT              (30U)
#define VSPA_DSTACR_vcpu_done_WIDTH              (1U)
#define VSPA_DSTACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_vcpu_done_SHIFT)) & VSPA_DSTACR_vcpu_done_MASK)
#define VSPA_DSTACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_DSTACR_vcpu_go_SHIFT                (31U)
#define VSPA_DSTACR_vcpu_go_WIDTH                (1U)
#define VSPA_DSTACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DSTACR_vcpu_go_SHIFT)) & VSPA_DSTACR_vcpu_go_MASK)
/*! @} */

/*! @name DSPACR - Debug Data Trace Stop Action Control register */
/*! @{ */
#define VSPA_DSPACR_cmpn_MASK                    (0xFFU)
#define VSPA_DSPACR_cmpn_SHIFT                   (0U)
#define VSPA_DSPACR_cmpn_WIDTH                   (8U)
#define VSPA_DSPACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_cmpn_SHIFT)) & VSPA_DSPACR_cmpn_MASK)
#define VSPA_DSPACR_ctinn_MASK                   (0xF0000U)
#define VSPA_DSPACR_ctinn_SHIFT                  (16U)
#define VSPA_DSPACR_ctinn_WIDTH                  (4U)
#define VSPA_DSPACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_ctinn_SHIFT)) & VSPA_DSPACR_ctinn_MASK)
#define VSPA_DSPACR_swb_MASK                     (0x20000000U)
#define VSPA_DSPACR_swb_SHIFT                    (29U)
#define VSPA_DSPACR_swb_WIDTH                    (1U)
#define VSPA_DSPACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_swb_SHIFT)) & VSPA_DSPACR_swb_MASK)
#define VSPA_DSPACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_DSPACR_vcpu_done_SHIFT              (30U)
#define VSPA_DSPACR_vcpu_done_WIDTH              (1U)
#define VSPA_DSPACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_vcpu_done_SHIFT)) & VSPA_DSPACR_vcpu_done_MASK)
#define VSPA_DSPACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_DSPACR_vcpu_go_SHIFT                (31U)
#define VSPA_DSPACR_vcpu_go_WIDTH                (1U)
#define VSPA_DSPACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DSPACR_vcpu_go_SHIFT)) & VSPA_DSPACR_vcpu_go_MASK)
/*! @} */

/*! @name DTMACR - Debug Data Trace Message Generation Action Control register */
/*! @{ */
#define VSPA_DTMACR_cmpn_MASK                    (0xFFU)
#define VSPA_DTMACR_cmpn_SHIFT                   (0U)
#define VSPA_DTMACR_cmpn_WIDTH                   (8U)
#define VSPA_DTMACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DTMACR_cmpn_SHIFT)) & VSPA_DTMACR_cmpn_MASK)
/*! @} */

/*! @name WPMACR - Debug WPM Generation Action Control register */
/*! @{ */
#define VSPA_WPMACR_cmpn_MASK                    (0xFFU)
#define VSPA_WPMACR_cmpn_SHIFT                   (0U)
#define VSPA_WPMACR_cmpn_WIDTH                   (8U)
#define VSPA_WPMACR_cmpn(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_cmpn_SHIFT)) & VSPA_WPMACR_cmpn_MASK)
#define VSPA_WPMACR_ctinn_MASK                   (0xF0000U)
#define VSPA_WPMACR_ctinn_SHIFT                  (16U)
#define VSPA_WPMACR_ctinn_WIDTH                  (4U)
#define VSPA_WPMACR_ctinn(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_ctinn_SHIFT)) & VSPA_WPMACR_ctinn_MASK)
#define VSPA_WPMACR_vcpu_illop_MASK              (0x10000000U)
#define VSPA_WPMACR_vcpu_illop_SHIFT             (28U)
#define VSPA_WPMACR_vcpu_illop_WIDTH             (1U)
#define VSPA_WPMACR_vcpu_illop(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_vcpu_illop_SHIFT)) & VSPA_WPMACR_vcpu_illop_MASK)
#define VSPA_WPMACR_swb_MASK                     (0x20000000U)
#define VSPA_WPMACR_swb_SHIFT                    (29U)
#define VSPA_WPMACR_swb_WIDTH                    (1U)
#define VSPA_WPMACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_swb_SHIFT)) & VSPA_WPMACR_swb_MASK)
#define VSPA_WPMACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_WPMACR_vcpu_done_SHIFT              (30U)
#define VSPA_WPMACR_vcpu_done_WIDTH              (1U)
#define VSPA_WPMACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_vcpu_done_SHIFT)) & VSPA_WPMACR_vcpu_done_MASK)
#define VSPA_WPMACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_WPMACR_vcpu_go_SHIFT                (31U)
#define VSPA_WPMACR_vcpu_go_WIDTH                (1U)
#define VSPA_WPMACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_WPMACR_vcpu_go_SHIFT)) & VSPA_WPMACR_vcpu_go_MASK)
/*! @} */

/*! @name TSMCR - Debug TSM Control register */
/*! @{ */
#define VSPA_TSMCR_tsm_en_MASK                   (0x1U)
#define VSPA_TSMCR_tsm_en_SHIFT                  (0U)
#define VSPA_TSMCR_tsm_en_WIDTH                  (1U)
#define VSPA_TSMCR_tsm_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_en_SHIFT)) & VSPA_TSMCR_tsm_en_MASK)
#define VSPA_TSMCR_tsm_dtm_en_MASK               (0x10U)
#define VSPA_TSMCR_tsm_dtm_en_SHIFT              (4U)
#define VSPA_TSMCR_tsm_dtm_en_WIDTH              (1U)
#define VSPA_TSMCR_tsm_dtm_en(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_dtm_en_SHIFT)) & VSPA_TSMCR_tsm_dtm_en_MASK)
#define VSPA_TSMCR_tsm_wpt_en_MASK               (0x20U)
#define VSPA_TSMCR_tsm_wpt_en_SHIFT              (5U)
#define VSPA_TSMCR_tsm_wpt_en_WIDTH              (1U)
#define VSPA_TSMCR_tsm_wpt_en(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_wpt_en_SHIFT)) & VSPA_TSMCR_tsm_wpt_en_MASK)
#define VSPA_TSMCR_tsm_dqm_en_MASK               (0x40U)
#define VSPA_TSMCR_tsm_dqm_en_SHIFT              (6U)
#define VSPA_TSMCR_tsm_dqm_en_WIDTH              (1U)
#define VSPA_TSMCR_tsm_dqm_en(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_dqm_en_SHIFT)) & VSPA_TSMCR_tsm_dqm_en_MASK)
#define VSPA_TSMCR_tsm_sync_en_MASK              (0x80U)
#define VSPA_TSMCR_tsm_sync_en_SHIFT             (7U)
#define VSPA_TSMCR_tsm_sync_en_WIDTH             (1U)
#define VSPA_TSMCR_tsm_sync_en(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_sync_en_SHIFT)) & VSPA_TSMCR_tsm_sync_en_MASK)
#define VSPA_TSMCR_tsm_jsr_en_MASK               (0x100U)
#define VSPA_TSMCR_tsm_jsr_en_SHIFT              (8U)
#define VSPA_TSMCR_tsm_jsr_en_WIDTH              (1U)
#define VSPA_TSMCR_tsm_jsr_en(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_jsr_en_SHIFT)) & VSPA_TSMCR_tsm_jsr_en_MASK)
#define VSPA_TSMCR_tsm_loop_en_MASK              (0x200U)
#define VSPA_TSMCR_tsm_loop_en_SHIFT             (9U)
#define VSPA_TSMCR_tsm_loop_en_WIDTH             (1U)
#define VSPA_TSMCR_tsm_loop_en(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_loop_en_SHIFT)) & VSPA_TSMCR_tsm_loop_en_MASK)
#define VSPA_TSMCR_tsm_tap_select_MASK           (0xF000U)
#define VSPA_TSMCR_tsm_tap_select_SHIFT          (12U)
#define VSPA_TSMCR_tsm_tap_select_WIDTH          (4U)
#define VSPA_TSMCR_tsm_tap_select(x)             (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCR_tsm_tap_select_SHIFT)) & VSPA_TSMCR_tsm_tap_select_MASK)
/*! @} */

/*! @name TSMCNT_U - Debug VSPA Timestamp Counter (Upper) register */
/*! @{ */
#define VSPA_TSMCNT_U_timestamp_counter_MASK     (0xFFFFU)
#define VSPA_TSMCNT_U_timestamp_counter_SHIFT    (0U)
#define VSPA_TSMCNT_U_timestamp_counter_WIDTH    (16U)
#define VSPA_TSMCNT_U_timestamp_counter(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCNT_U_timestamp_counter_SHIFT)) & VSPA_TSMCNT_U_timestamp_counter_MASK)
/*! @} */

/*! @name TSMCNT_L - Debug VSPA Timestamp Counter (Lower) register */
/*! @{ */
#define VSPA_TSMCNT_L_timestamp_counter_MASK     (0xFFFFFFFFU)
#define VSPA_TSMCNT_L_timestamp_counter_SHIFT    (0U)
#define VSPA_TSMCNT_L_timestamp_counter_WIDTH    (32U)
#define VSPA_TSMCNT_L_timestamp_counter(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_TSMCNT_L_timestamp_counter_SHIFT)) & VSPA_TSMCNT_L_timestamp_counter_MASK)
/*! @} */

/*! @name RAVAP - Debug VSP Architecture Visibility Address Pointer register */
/*! @{ */
#define VSPA_RAVAP_a_index_MASK                  (0x7FFFCU)
#define VSPA_RAVAP_a_index_SHIFT                 (2U)
#define VSPA_RAVAP_a_index_WIDTH                 (17U)
#define VSPA_RAVAP_a_index(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_RAVAP_a_index_SHIFT)) & VSPA_RAVAP_a_index_MASK)
#define VSPA_RAVAP_a_mode_MASK                   (0xF000000U)
#define VSPA_RAVAP_a_mode_SHIFT                  (24U)
#define VSPA_RAVAP_a_mode_WIDTH                  (4U)
#define VSPA_RAVAP_a_mode(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RAVAP_a_mode_SHIFT)) & VSPA_RAVAP_a_mode_MASK)
#define VSPA_RAVAP_ip_bat_MASK                   (0x80000000U)
#define VSPA_RAVAP_ip_bat_SHIFT                  (31U)
#define VSPA_RAVAP_ip_bat_WIDTH                  (1U)
#define VSPA_RAVAP_ip_bat(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_RAVAP_ip_bat_SHIFT)) & VSPA_RAVAP_ip_bat_MASK)
/*! @} */

/*! @name RAVFD - Debug VSP Architecture Visibility Fixed Data register */
/*! @{ */
#define VSPA_RAVFD_data_MASK                     (0xFFFFFFFFU)
#define VSPA_RAVFD_data_SHIFT                    (0U)
#define VSPA_RAVFD_data_WIDTH                    (32U)
#define VSPA_RAVFD_data(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_RAVFD_data_SHIFT)) & VSPA_RAVFD_data_MASK)
/*! @} */

/*! @name RAVID - Debug VSP Architecture Visibility Incrementing Data register */
/*! @{ */
#define VSPA_RAVID_data_MASK                     (0xFFFFFFFFU)
#define VSPA_RAVID_data_SHIFT                    (0U)
#define VSPA_RAVID_data_WIDTH                    (32U)
#define VSPA_RAVID_data(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_RAVID_data_SHIFT)) & VSPA_RAVID_data_MASK)
/*! @} */

/*! @name DVR - Debug Verification register */
/*! @{ */
#define VSPA_DVR_dbg_trig_out_ack_n_MASK         (0xFU)
#define VSPA_DVR_dbg_trig_out_ack_n_SHIFT        (0U)
#define VSPA_DVR_dbg_trig_out_ack_n_WIDTH        (4U)
#define VSPA_DVR_dbg_trig_out_ack_n(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_trig_out_ack_n_SHIFT)) & VSPA_DVR_dbg_trig_out_ack_n_MASK)
#define VSPA_DVR_dbg_niden_MASK                  (0x1000U)
#define VSPA_DVR_dbg_niden_SHIFT                 (12U)
#define VSPA_DVR_dbg_niden_WIDTH                 (1U)
#define VSPA_DVR_dbg_niden(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_niden_SHIFT)) & VSPA_DVR_dbg_niden_MASK)
#define VSPA_DVR_dbg_dbgen_MASK                  (0x2000U)
#define VSPA_DVR_dbg_dbgen_SHIFT                 (13U)
#define VSPA_DVR_dbg_dbgen_WIDTH                 (1U)
#define VSPA_DVR_dbg_dbgen(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_dbgen_SHIFT)) & VSPA_DVR_dbg_dbgen_MASK)
#define VSPA_DVR_dbg_resume_req_MASK             (0x4000U)
#define VSPA_DVR_dbg_resume_req_SHIFT            (14U)
#define VSPA_DVR_dbg_resume_req_WIDTH            (1U)
#define VSPA_DVR_dbg_resume_req(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_resume_req_SHIFT)) & VSPA_DVR_dbg_resume_req_MASK)
#define VSPA_DVR_dbg_halt_req_MASK               (0x8000U)
#define VSPA_DVR_dbg_halt_req_SHIFT              (15U)
#define VSPA_DVR_dbg_halt_req_WIDTH              (1U)
#define VSPA_DVR_dbg_halt_req(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_halt_req_SHIFT)) & VSPA_DVR_dbg_halt_req_MASK)
#define VSPA_DVR_ctinn_MASK                      (0xF0000U)
#define VSPA_DVR_ctinn_SHIFT                     (16U)
#define VSPA_DVR_ctinn_WIDTH                     (4U)
#define VSPA_DVR_ctinn(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_ctinn_SHIFT)) & VSPA_DVR_ctinn_MASK)
#define VSPA_DVR_dbg_sync_req_MASK               (0x80000000U)
#define VSPA_DVR_dbg_sync_req_SHIFT              (31U)
#define VSPA_DVR_dbg_sync_req_WIDTH              (1U)
#define VSPA_DVR_dbg_sync_req(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DVR_dbg_sync_req_SHIFT)) & VSPA_DVR_dbg_sync_req_MASK)
/*! @} */

/*! @name CTOACR - Debug Cross Trigger Out a Action Control registers */
/*! @{ */
#define VSPA_CTOACR_cmpm_MASK                    (0xFFU)
#define VSPA_CTOACR_cmpm_SHIFT                   (0U)
#define VSPA_CTOACR_cmpm_WIDTH                   (8U)
#define VSPA_CTOACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_cmpm_SHIFT)) & VSPA_CTOACR_cmpm_MASK)
#define VSPA_CTOACR_ctinm_MASK                   (0xF0000U)
#define VSPA_CTOACR_ctinm_SHIFT                  (16U)
#define VSPA_CTOACR_ctinm_WIDTH                  (4U)
#define VSPA_CTOACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_ctinm_SHIFT)) & VSPA_CTOACR_ctinm_MASK)
#define VSPA_CTOACR_swb_MASK                     (0x20000000U)
#define VSPA_CTOACR_swb_SHIFT                    (29U)
#define VSPA_CTOACR_swb_WIDTH                    (1U)
#define VSPA_CTOACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_swb_SHIFT)) & VSPA_CTOACR_swb_MASK)
#define VSPA_CTOACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_CTOACR_vcpu_done_SHIFT              (30U)
#define VSPA_CTOACR_vcpu_done_WIDTH              (1U)
#define VSPA_CTOACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_vcpu_done_SHIFT)) & VSPA_CTOACR_vcpu_done_MASK)
#define VSPA_CTOACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_CTOACR_vcpu_go_SHIFT                (31U)
#define VSPA_CTOACR_vcpu_go_WIDTH                (1U)
#define VSPA_CTOACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_CTOACR_vcpu_go_SHIFT)) & VSPA_CTOACR_vcpu_go_MASK)
/*! @} */

/*! @name DC0CS - Debug Comparator Control and Status register */
/*! @{ */
#define VSPA_DC0CS_evt_en_MASK                   (0x1U)
#define VSPA_DC0CS_evt_en_SHIFT                  (0U)
#define VSPA_DC0CS_evt_en_WIDTH                  (1U)
#define VSPA_DC0CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_evt_en_SHIFT)) & VSPA_DC0CS_evt_en_MASK)
#define VSPA_DC0CS_force_trig_MASK               (0x2U)
#define VSPA_DC0CS_force_trig_SHIFT              (1U)
#define VSPA_DC0CS_force_trig_WIDTH              (1U)
#define VSPA_DC0CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_force_trig_SHIFT)) & VSPA_DC0CS_force_trig_MASK)
#define VSPA_DC0CS_force_disarm_MASK             (0x4U)
#define VSPA_DC0CS_force_disarm_SHIFT            (2U)
#define VSPA_DC0CS_force_disarm_WIDTH            (1U)
#define VSPA_DC0CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_force_disarm_SHIFT)) & VSPA_DC0CS_force_disarm_MASK)
#define VSPA_DC0CS_force_arm_MASK                (0x8U)
#define VSPA_DC0CS_force_arm_SHIFT               (3U)
#define VSPA_DC0CS_force_arm_WIDTH               (1U)
#define VSPA_DC0CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_force_arm_SHIFT)) & VSPA_DC0CS_force_arm_MASK)
#define VSPA_DC0CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC0CS_cond_sel_SHIFT                (4U)
#define VSPA_DC0CS_cond_sel_WIDTH                (3U)
#define VSPA_DC0CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_cond_sel_SHIFT)) & VSPA_DC0CS_cond_sel_MASK)
#define VSPA_DC0CS_i_sel_MASK                    (0x700U)
#define VSPA_DC0CS_i_sel_SHIFT                   (8U)
#define VSPA_DC0CS_i_sel_WIDTH                   (3U)
#define VSPA_DC0CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_i_sel_SHIFT)) & VSPA_DC0CS_i_sel_MASK)
#define VSPA_DC0CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC0CS_pair_mode_SHIFT               (12U)
#define VSPA_DC0CS_pair_mode_WIDTH               (2U)
#define VSPA_DC0CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_pair_mode_SHIFT)) & VSPA_DC0CS_pair_mode_MASK)
#define VSPA_DC0CS_triggered_MASK                (0x10000U)
#define VSPA_DC0CS_triggered_SHIFT               (16U)
#define VSPA_DC0CS_triggered_WIDTH               (1U)
#define VSPA_DC0CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_triggered_SHIFT)) & VSPA_DC0CS_triggered_MASK)
#define VSPA_DC0CS_armed_MASK                    (0x20000U)
#define VSPA_DC0CS_armed_SHIFT                   (17U)
#define VSPA_DC0CS_armed_WIDTH                   (1U)
#define VSPA_DC0CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_armed_SHIFT)) & VSPA_DC0CS_armed_MASK)
#define VSPA_DC0CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC0CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC0CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC0CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_seq_evt_SHIFT)) & VSPA_DC0CS_seq_evt_MASK)
#define VSPA_DC0CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC0CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC0CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC0CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC0CS_cmp_evt_SHIFT)) & VSPA_DC0CS_cmp_evt_MASK)
/*! @} */

/*! @name DC0D - Debug Comparator a Data register */
/*! @{ */
#define VSPA_DC0D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC0D_comp_data_SHIFT                (2U)
#define VSPA_DC0D_comp_data_WIDTH                (18U)
#define VSPA_DC0D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_comp_data_SHIFT)) & VSPA_DC0D_comp_data_MASK)
#define VSPA_DC0D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC0D_dma_host_SHIFT                 (24U)
#define VSPA_DC0D_dma_host_WIDTH                 (1U)
#define VSPA_DC0D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_dma_host_SHIFT)) & VSPA_DC0D_dma_host_MASK)
#define VSPA_DC0D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC0D_vcpu_SHIFT                     (25U)
#define VSPA_DC0D_vcpu_WIDTH                     (1U)
#define VSPA_DC0D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_vcpu_SHIFT)) & VSPA_DC0D_vcpu_MASK)
#define VSPA_DC0D_ippu_MASK                      (0x4000000U)
#define VSPA_DC0D_ippu_SHIFT                     (26U)
#define VSPA_DC0D_ippu_WIDTH                     (1U)
#define VSPA_DC0D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_ippu_SHIFT)) & VSPA_DC0D_ippu_MASK)
#define VSPA_DC0D_rd_MASK                        (0x10000000U)
#define VSPA_DC0D_rd_SHIFT                       (28U)
#define VSPA_DC0D_rd_WIDTH                       (1U)
#define VSPA_DC0D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_rd_SHIFT)) & VSPA_DC0D_rd_MASK)
#define VSPA_DC0D_wr_MASK                        (0x20000000U)
#define VSPA_DC0D_wr_SHIFT                       (29U)
#define VSPA_DC0D_wr_WIDTH                       (1U)
#define VSPA_DC0D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC0D_wr_SHIFT)) & VSPA_DC0D_wr_MASK)
/*! @} */

/*! @name C0AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */
#define VSPA_C0AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C0AACR_cmpm_SHIFT                   (0U)
#define VSPA_C0AACR_cmpm_WIDTH                   (8U)
#define VSPA_C0AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_cmpm_SHIFT)) & VSPA_C0AACR_cmpm_MASK)
#define VSPA_C0AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C0AACR_ctinm_SHIFT                  (16U)
#define VSPA_C0AACR_ctinm_WIDTH                  (4U)
#define VSPA_C0AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_ctinm_SHIFT)) & VSPA_C0AACR_ctinm_MASK)
#define VSPA_C0AACR_swb_MASK                     (0x20000000U)
#define VSPA_C0AACR_swb_SHIFT                    (29U)
#define VSPA_C0AACR_swb_WIDTH                    (1U)
#define VSPA_C0AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_swb_SHIFT)) & VSPA_C0AACR_swb_MASK)
#define VSPA_C0AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C0AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C0AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C0AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_vcpu_done_SHIFT)) & VSPA_C0AACR_vcpu_done_MASK)
#define VSPA_C0AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C0AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C0AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C0AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C0AACR_vcpu_go_SHIFT)) & VSPA_C0AACR_vcpu_go_MASK)
/*! @} */

/*! @name C0DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */
#define VSPA_C0DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C0DACR_cmpm_SHIFT                   (0U)
#define VSPA_C0DACR_cmpm_WIDTH                   (8U)
#define VSPA_C0DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_cmpm_SHIFT)) & VSPA_C0DACR_cmpm_MASK)
#define VSPA_C0DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C0DACR_ctinm_SHIFT                  (16U)
#define VSPA_C0DACR_ctinm_WIDTH                  (4U)
#define VSPA_C0DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_ctinm_SHIFT)) & VSPA_C0DACR_ctinm_MASK)
#define VSPA_C0DACR_swb_MASK                     (0x20000000U)
#define VSPA_C0DACR_swb_SHIFT                    (29U)
#define VSPA_C0DACR_swb_WIDTH                    (1U)
#define VSPA_C0DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_swb_SHIFT)) & VSPA_C0DACR_swb_MASK)
#define VSPA_C0DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C0DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C0DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C0DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_vcpu_done_SHIFT)) & VSPA_C0DACR_vcpu_done_MASK)
#define VSPA_C0DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C0DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C0DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C0DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C0DACR_vcpu_go_SHIFT)) & VSPA_C0DACR_vcpu_go_MASK)
/*! @} */

/*! @name C0TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */
#define VSPA_C0TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C0TACR_cmpm_SHIFT                   (0U)
#define VSPA_C0TACR_cmpm_WIDTH                   (8U)
#define VSPA_C0TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_cmpm_SHIFT)) & VSPA_C0TACR_cmpm_MASK)
#define VSPA_C0TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C0TACR_ctinm_SHIFT                  (16U)
#define VSPA_C0TACR_ctinm_WIDTH                  (4U)
#define VSPA_C0TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_ctinm_SHIFT)) & VSPA_C0TACR_ctinm_MASK)
#define VSPA_C0TACR_swb_MASK                     (0x20000000U)
#define VSPA_C0TACR_swb_SHIFT                    (29U)
#define VSPA_C0TACR_swb_WIDTH                    (1U)
#define VSPA_C0TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_swb_SHIFT)) & VSPA_C0TACR_swb_MASK)
#define VSPA_C0TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C0TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C0TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C0TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_vcpu_done_SHIFT)) & VSPA_C0TACR_vcpu_done_MASK)
#define VSPA_C0TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C0TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C0TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C0TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C0TACR_vcpu_go_SHIFT)) & VSPA_C0TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC1CS - Debug Comparator Control and Status register */
/*! @{ */
#define VSPA_DC1CS_evt_en_MASK                   (0x1U)
#define VSPA_DC1CS_evt_en_SHIFT                  (0U)
#define VSPA_DC1CS_evt_en_WIDTH                  (1U)
#define VSPA_DC1CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_evt_en_SHIFT)) & VSPA_DC1CS_evt_en_MASK)
#define VSPA_DC1CS_force_trig_MASK               (0x2U)
#define VSPA_DC1CS_force_trig_SHIFT              (1U)
#define VSPA_DC1CS_force_trig_WIDTH              (1U)
#define VSPA_DC1CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_force_trig_SHIFT)) & VSPA_DC1CS_force_trig_MASK)
#define VSPA_DC1CS_force_disarm_MASK             (0x4U)
#define VSPA_DC1CS_force_disarm_SHIFT            (2U)
#define VSPA_DC1CS_force_disarm_WIDTH            (1U)
#define VSPA_DC1CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_force_disarm_SHIFT)) & VSPA_DC1CS_force_disarm_MASK)
#define VSPA_DC1CS_force_arm_MASK                (0x8U)
#define VSPA_DC1CS_force_arm_SHIFT               (3U)
#define VSPA_DC1CS_force_arm_WIDTH               (1U)
#define VSPA_DC1CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_force_arm_SHIFT)) & VSPA_DC1CS_force_arm_MASK)
#define VSPA_DC1CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC1CS_cond_sel_SHIFT                (4U)
#define VSPA_DC1CS_cond_sel_WIDTH                (3U)
#define VSPA_DC1CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_cond_sel_SHIFT)) & VSPA_DC1CS_cond_sel_MASK)
#define VSPA_DC1CS_i_sel_MASK                    (0x700U)
#define VSPA_DC1CS_i_sel_SHIFT                   (8U)
#define VSPA_DC1CS_i_sel_WIDTH                   (3U)
#define VSPA_DC1CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_i_sel_SHIFT)) & VSPA_DC1CS_i_sel_MASK)
#define VSPA_DC1CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC1CS_pair_mode_SHIFT               (12U)
#define VSPA_DC1CS_pair_mode_WIDTH               (2U)
#define VSPA_DC1CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_pair_mode_SHIFT)) & VSPA_DC1CS_pair_mode_MASK)
#define VSPA_DC1CS_triggered_MASK                (0x10000U)
#define VSPA_DC1CS_triggered_SHIFT               (16U)
#define VSPA_DC1CS_triggered_WIDTH               (1U)
#define VSPA_DC1CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_triggered_SHIFT)) & VSPA_DC1CS_triggered_MASK)
#define VSPA_DC1CS_armed_MASK                    (0x20000U)
#define VSPA_DC1CS_armed_SHIFT                   (17U)
#define VSPA_DC1CS_armed_WIDTH                   (1U)
#define VSPA_DC1CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_armed_SHIFT)) & VSPA_DC1CS_armed_MASK)
#define VSPA_DC1CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC1CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC1CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC1CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_seq_evt_SHIFT)) & VSPA_DC1CS_seq_evt_MASK)
#define VSPA_DC1CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC1CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC1CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC1CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC1CS_cmp_evt_SHIFT)) & VSPA_DC1CS_cmp_evt_MASK)
/*! @} */

/*! @name DC1D - Debug Comparator a Data register */
/*! @{ */
#define VSPA_DC1D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC1D_comp_data_SHIFT                (2U)
#define VSPA_DC1D_comp_data_WIDTH                (18U)
#define VSPA_DC1D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_comp_data_SHIFT)) & VSPA_DC1D_comp_data_MASK)
#define VSPA_DC1D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC1D_dma_host_SHIFT                 (24U)
#define VSPA_DC1D_dma_host_WIDTH                 (1U)
#define VSPA_DC1D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_dma_host_SHIFT)) & VSPA_DC1D_dma_host_MASK)
#define VSPA_DC1D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC1D_vcpu_SHIFT                     (25U)
#define VSPA_DC1D_vcpu_WIDTH                     (1U)
#define VSPA_DC1D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_vcpu_SHIFT)) & VSPA_DC1D_vcpu_MASK)
#define VSPA_DC1D_ippu_MASK                      (0x4000000U)
#define VSPA_DC1D_ippu_SHIFT                     (26U)
#define VSPA_DC1D_ippu_WIDTH                     (1U)
#define VSPA_DC1D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_ippu_SHIFT)) & VSPA_DC1D_ippu_MASK)
#define VSPA_DC1D_rd_MASK                        (0x10000000U)
#define VSPA_DC1D_rd_SHIFT                       (28U)
#define VSPA_DC1D_rd_WIDTH                       (1U)
#define VSPA_DC1D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_rd_SHIFT)) & VSPA_DC1D_rd_MASK)
#define VSPA_DC1D_wr_MASK                        (0x20000000U)
#define VSPA_DC1D_wr_SHIFT                       (29U)
#define VSPA_DC1D_wr_WIDTH                       (1U)
#define VSPA_DC1D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC1D_wr_SHIFT)) & VSPA_DC1D_wr_MASK)
/*! @} */

/*! @name C1AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */
#define VSPA_C1AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C1AACR_cmpm_SHIFT                   (0U)
#define VSPA_C1AACR_cmpm_WIDTH                   (8U)
#define VSPA_C1AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_cmpm_SHIFT)) & VSPA_C1AACR_cmpm_MASK)
#define VSPA_C1AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C1AACR_ctinm_SHIFT                  (16U)
#define VSPA_C1AACR_ctinm_WIDTH                  (4U)
#define VSPA_C1AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_ctinm_SHIFT)) & VSPA_C1AACR_ctinm_MASK)
#define VSPA_C1AACR_swb_MASK                     (0x20000000U)
#define VSPA_C1AACR_swb_SHIFT                    (29U)
#define VSPA_C1AACR_swb_WIDTH                    (1U)
#define VSPA_C1AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_swb_SHIFT)) & VSPA_C1AACR_swb_MASK)
#define VSPA_C1AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C1AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C1AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C1AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_vcpu_done_SHIFT)) & VSPA_C1AACR_vcpu_done_MASK)
#define VSPA_C1AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C1AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C1AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C1AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C1AACR_vcpu_go_SHIFT)) & VSPA_C1AACR_vcpu_go_MASK)
/*! @} */

/*! @name C1DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */
#define VSPA_C1DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C1DACR_cmpm_SHIFT                   (0U)
#define VSPA_C1DACR_cmpm_WIDTH                   (8U)
#define VSPA_C1DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_cmpm_SHIFT)) & VSPA_C1DACR_cmpm_MASK)
#define VSPA_C1DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C1DACR_ctinm_SHIFT                  (16U)
#define VSPA_C1DACR_ctinm_WIDTH                  (4U)
#define VSPA_C1DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_ctinm_SHIFT)) & VSPA_C1DACR_ctinm_MASK)
#define VSPA_C1DACR_swb_MASK                     (0x20000000U)
#define VSPA_C1DACR_swb_SHIFT                    (29U)
#define VSPA_C1DACR_swb_WIDTH                    (1U)
#define VSPA_C1DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_swb_SHIFT)) & VSPA_C1DACR_swb_MASK)
#define VSPA_C1DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C1DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C1DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C1DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_vcpu_done_SHIFT)) & VSPA_C1DACR_vcpu_done_MASK)
#define VSPA_C1DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C1DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C1DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C1DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C1DACR_vcpu_go_SHIFT)) & VSPA_C1DACR_vcpu_go_MASK)
/*! @} */

/*! @name C1TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */
#define VSPA_C1TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C1TACR_cmpm_SHIFT                   (0U)
#define VSPA_C1TACR_cmpm_WIDTH                   (8U)
#define VSPA_C1TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_cmpm_SHIFT)) & VSPA_C1TACR_cmpm_MASK)
#define VSPA_C1TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C1TACR_ctinm_SHIFT                  (16U)
#define VSPA_C1TACR_ctinm_WIDTH                  (4U)
#define VSPA_C1TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_ctinm_SHIFT)) & VSPA_C1TACR_ctinm_MASK)
#define VSPA_C1TACR_swb_MASK                     (0x20000000U)
#define VSPA_C1TACR_swb_SHIFT                    (29U)
#define VSPA_C1TACR_swb_WIDTH                    (1U)
#define VSPA_C1TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_swb_SHIFT)) & VSPA_C1TACR_swb_MASK)
#define VSPA_C1TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C1TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C1TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C1TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_vcpu_done_SHIFT)) & VSPA_C1TACR_vcpu_done_MASK)
#define VSPA_C1TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C1TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C1TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C1TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C1TACR_vcpu_go_SHIFT)) & VSPA_C1TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC2CS - Debug Comparator Control and Status register */
/*! @{ */
#define VSPA_DC2CS_evt_en_MASK                   (0x1U)
#define VSPA_DC2CS_evt_en_SHIFT                  (0U)
#define VSPA_DC2CS_evt_en_WIDTH                  (1U)
#define VSPA_DC2CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_evt_en_SHIFT)) & VSPA_DC2CS_evt_en_MASK)
#define VSPA_DC2CS_force_trig_MASK               (0x2U)
#define VSPA_DC2CS_force_trig_SHIFT              (1U)
#define VSPA_DC2CS_force_trig_WIDTH              (1U)
#define VSPA_DC2CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_force_trig_SHIFT)) & VSPA_DC2CS_force_trig_MASK)
#define VSPA_DC2CS_force_disarm_MASK             (0x4U)
#define VSPA_DC2CS_force_disarm_SHIFT            (2U)
#define VSPA_DC2CS_force_disarm_WIDTH            (1U)
#define VSPA_DC2CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_force_disarm_SHIFT)) & VSPA_DC2CS_force_disarm_MASK)
#define VSPA_DC2CS_force_arm_MASK                (0x8U)
#define VSPA_DC2CS_force_arm_SHIFT               (3U)
#define VSPA_DC2CS_force_arm_WIDTH               (1U)
#define VSPA_DC2CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_force_arm_SHIFT)) & VSPA_DC2CS_force_arm_MASK)
#define VSPA_DC2CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC2CS_cond_sel_SHIFT                (4U)
#define VSPA_DC2CS_cond_sel_WIDTH                (3U)
#define VSPA_DC2CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_cond_sel_SHIFT)) & VSPA_DC2CS_cond_sel_MASK)
#define VSPA_DC2CS_i_sel_MASK                    (0x700U)
#define VSPA_DC2CS_i_sel_SHIFT                   (8U)
#define VSPA_DC2CS_i_sel_WIDTH                   (3U)
#define VSPA_DC2CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_i_sel_SHIFT)) & VSPA_DC2CS_i_sel_MASK)
#define VSPA_DC2CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC2CS_pair_mode_SHIFT               (12U)
#define VSPA_DC2CS_pair_mode_WIDTH               (2U)
#define VSPA_DC2CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_pair_mode_SHIFT)) & VSPA_DC2CS_pair_mode_MASK)
#define VSPA_DC2CS_triggered_MASK                (0x10000U)
#define VSPA_DC2CS_triggered_SHIFT               (16U)
#define VSPA_DC2CS_triggered_WIDTH               (1U)
#define VSPA_DC2CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_triggered_SHIFT)) & VSPA_DC2CS_triggered_MASK)
#define VSPA_DC2CS_armed_MASK                    (0x20000U)
#define VSPA_DC2CS_armed_SHIFT                   (17U)
#define VSPA_DC2CS_armed_WIDTH                   (1U)
#define VSPA_DC2CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_armed_SHIFT)) & VSPA_DC2CS_armed_MASK)
#define VSPA_DC2CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC2CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC2CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC2CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_seq_evt_SHIFT)) & VSPA_DC2CS_seq_evt_MASK)
#define VSPA_DC2CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC2CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC2CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC2CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC2CS_cmp_evt_SHIFT)) & VSPA_DC2CS_cmp_evt_MASK)
/*! @} */

/*! @name DC2D - Debug Comparator a Data register */
/*! @{ */
#define VSPA_DC2D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC2D_comp_data_SHIFT                (2U)
#define VSPA_DC2D_comp_data_WIDTH                (18U)
#define VSPA_DC2D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_comp_data_SHIFT)) & VSPA_DC2D_comp_data_MASK)
#define VSPA_DC2D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC2D_dma_host_SHIFT                 (24U)
#define VSPA_DC2D_dma_host_WIDTH                 (1U)
#define VSPA_DC2D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_dma_host_SHIFT)) & VSPA_DC2D_dma_host_MASK)
#define VSPA_DC2D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC2D_vcpu_SHIFT                     (25U)
#define VSPA_DC2D_vcpu_WIDTH                     (1U)
#define VSPA_DC2D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_vcpu_SHIFT)) & VSPA_DC2D_vcpu_MASK)
#define VSPA_DC2D_ippu_MASK                      (0x4000000U)
#define VSPA_DC2D_ippu_SHIFT                     (26U)
#define VSPA_DC2D_ippu_WIDTH                     (1U)
#define VSPA_DC2D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_ippu_SHIFT)) & VSPA_DC2D_ippu_MASK)
#define VSPA_DC2D_rd_MASK                        (0x10000000U)
#define VSPA_DC2D_rd_SHIFT                       (28U)
#define VSPA_DC2D_rd_WIDTH                       (1U)
#define VSPA_DC2D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_rd_SHIFT)) & VSPA_DC2D_rd_MASK)
#define VSPA_DC2D_wr_MASK                        (0x20000000U)
#define VSPA_DC2D_wr_SHIFT                       (29U)
#define VSPA_DC2D_wr_WIDTH                       (1U)
#define VSPA_DC2D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC2D_wr_SHIFT)) & VSPA_DC2D_wr_MASK)
/*! @} */

/*! @name C2AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */
#define VSPA_C2AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C2AACR_cmpm_SHIFT                   (0U)
#define VSPA_C2AACR_cmpm_WIDTH                   (8U)
#define VSPA_C2AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_cmpm_SHIFT)) & VSPA_C2AACR_cmpm_MASK)
#define VSPA_C2AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C2AACR_ctinm_SHIFT                  (16U)
#define VSPA_C2AACR_ctinm_WIDTH                  (4U)
#define VSPA_C2AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_ctinm_SHIFT)) & VSPA_C2AACR_ctinm_MASK)
#define VSPA_C2AACR_swb_MASK                     (0x20000000U)
#define VSPA_C2AACR_swb_SHIFT                    (29U)
#define VSPA_C2AACR_swb_WIDTH                    (1U)
#define VSPA_C2AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_swb_SHIFT)) & VSPA_C2AACR_swb_MASK)
#define VSPA_C2AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C2AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C2AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C2AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_vcpu_done_SHIFT)) & VSPA_C2AACR_vcpu_done_MASK)
#define VSPA_C2AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C2AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C2AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C2AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C2AACR_vcpu_go_SHIFT)) & VSPA_C2AACR_vcpu_go_MASK)
/*! @} */

/*! @name C2DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */
#define VSPA_C2DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C2DACR_cmpm_SHIFT                   (0U)
#define VSPA_C2DACR_cmpm_WIDTH                   (8U)
#define VSPA_C2DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_cmpm_SHIFT)) & VSPA_C2DACR_cmpm_MASK)
#define VSPA_C2DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C2DACR_ctinm_SHIFT                  (16U)
#define VSPA_C2DACR_ctinm_WIDTH                  (4U)
#define VSPA_C2DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_ctinm_SHIFT)) & VSPA_C2DACR_ctinm_MASK)
#define VSPA_C2DACR_swb_MASK                     (0x20000000U)
#define VSPA_C2DACR_swb_SHIFT                    (29U)
#define VSPA_C2DACR_swb_WIDTH                    (1U)
#define VSPA_C2DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_swb_SHIFT)) & VSPA_C2DACR_swb_MASK)
#define VSPA_C2DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C2DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C2DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C2DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_vcpu_done_SHIFT)) & VSPA_C2DACR_vcpu_done_MASK)
#define VSPA_C2DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C2DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C2DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C2DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C2DACR_vcpu_go_SHIFT)) & VSPA_C2DACR_vcpu_go_MASK)
/*! @} */

/*! @name C2TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */
#define VSPA_C2TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C2TACR_cmpm_SHIFT                   (0U)
#define VSPA_C2TACR_cmpm_WIDTH                   (8U)
#define VSPA_C2TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_cmpm_SHIFT)) & VSPA_C2TACR_cmpm_MASK)
#define VSPA_C2TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C2TACR_ctinm_SHIFT                  (16U)
#define VSPA_C2TACR_ctinm_WIDTH                  (4U)
#define VSPA_C2TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_ctinm_SHIFT)) & VSPA_C2TACR_ctinm_MASK)
#define VSPA_C2TACR_swb_MASK                     (0x20000000U)
#define VSPA_C2TACR_swb_SHIFT                    (29U)
#define VSPA_C2TACR_swb_WIDTH                    (1U)
#define VSPA_C2TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_swb_SHIFT)) & VSPA_C2TACR_swb_MASK)
#define VSPA_C2TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C2TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C2TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C2TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_vcpu_done_SHIFT)) & VSPA_C2TACR_vcpu_done_MASK)
#define VSPA_C2TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C2TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C2TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C2TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C2TACR_vcpu_go_SHIFT)) & VSPA_C2TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC3CS - Debug Comparator Control and Status register */
/*! @{ */
#define VSPA_DC3CS_evt_en_MASK                   (0x1U)
#define VSPA_DC3CS_evt_en_SHIFT                  (0U)
#define VSPA_DC3CS_evt_en_WIDTH                  (1U)
#define VSPA_DC3CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_evt_en_SHIFT)) & VSPA_DC3CS_evt_en_MASK)
#define VSPA_DC3CS_force_trig_MASK               (0x2U)
#define VSPA_DC3CS_force_trig_SHIFT              (1U)
#define VSPA_DC3CS_force_trig_WIDTH              (1U)
#define VSPA_DC3CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_force_trig_SHIFT)) & VSPA_DC3CS_force_trig_MASK)
#define VSPA_DC3CS_force_disarm_MASK             (0x4U)
#define VSPA_DC3CS_force_disarm_SHIFT            (2U)
#define VSPA_DC3CS_force_disarm_WIDTH            (1U)
#define VSPA_DC3CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_force_disarm_SHIFT)) & VSPA_DC3CS_force_disarm_MASK)
#define VSPA_DC3CS_force_arm_MASK                (0x8U)
#define VSPA_DC3CS_force_arm_SHIFT               (3U)
#define VSPA_DC3CS_force_arm_WIDTH               (1U)
#define VSPA_DC3CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_force_arm_SHIFT)) & VSPA_DC3CS_force_arm_MASK)
#define VSPA_DC3CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC3CS_cond_sel_SHIFT                (4U)
#define VSPA_DC3CS_cond_sel_WIDTH                (3U)
#define VSPA_DC3CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_cond_sel_SHIFT)) & VSPA_DC3CS_cond_sel_MASK)
#define VSPA_DC3CS_i_sel_MASK                    (0x700U)
#define VSPA_DC3CS_i_sel_SHIFT                   (8U)
#define VSPA_DC3CS_i_sel_WIDTH                   (3U)
#define VSPA_DC3CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_i_sel_SHIFT)) & VSPA_DC3CS_i_sel_MASK)
#define VSPA_DC3CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC3CS_pair_mode_SHIFT               (12U)
#define VSPA_DC3CS_pair_mode_WIDTH               (2U)
#define VSPA_DC3CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_pair_mode_SHIFT)) & VSPA_DC3CS_pair_mode_MASK)
#define VSPA_DC3CS_triggered_MASK                (0x10000U)
#define VSPA_DC3CS_triggered_SHIFT               (16U)
#define VSPA_DC3CS_triggered_WIDTH               (1U)
#define VSPA_DC3CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_triggered_SHIFT)) & VSPA_DC3CS_triggered_MASK)
#define VSPA_DC3CS_armed_MASK                    (0x20000U)
#define VSPA_DC3CS_armed_SHIFT                   (17U)
#define VSPA_DC3CS_armed_WIDTH                   (1U)
#define VSPA_DC3CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_armed_SHIFT)) & VSPA_DC3CS_armed_MASK)
#define VSPA_DC3CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC3CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC3CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC3CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_seq_evt_SHIFT)) & VSPA_DC3CS_seq_evt_MASK)
#define VSPA_DC3CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC3CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC3CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC3CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC3CS_cmp_evt_SHIFT)) & VSPA_DC3CS_cmp_evt_MASK)
/*! @} */

/*! @name DC3D - Debug Comparator a Data register */
/*! @{ */
#define VSPA_DC3D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC3D_comp_data_SHIFT                (2U)
#define VSPA_DC3D_comp_data_WIDTH                (18U)
#define VSPA_DC3D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_comp_data_SHIFT)) & VSPA_DC3D_comp_data_MASK)
#define VSPA_DC3D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC3D_dma_host_SHIFT                 (24U)
#define VSPA_DC3D_dma_host_WIDTH                 (1U)
#define VSPA_DC3D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_dma_host_SHIFT)) & VSPA_DC3D_dma_host_MASK)
#define VSPA_DC3D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC3D_vcpu_SHIFT                     (25U)
#define VSPA_DC3D_vcpu_WIDTH                     (1U)
#define VSPA_DC3D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_vcpu_SHIFT)) & VSPA_DC3D_vcpu_MASK)
#define VSPA_DC3D_ippu_MASK                      (0x4000000U)
#define VSPA_DC3D_ippu_SHIFT                     (26U)
#define VSPA_DC3D_ippu_WIDTH                     (1U)
#define VSPA_DC3D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_ippu_SHIFT)) & VSPA_DC3D_ippu_MASK)
#define VSPA_DC3D_rd_MASK                        (0x10000000U)
#define VSPA_DC3D_rd_SHIFT                       (28U)
#define VSPA_DC3D_rd_WIDTH                       (1U)
#define VSPA_DC3D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_rd_SHIFT)) & VSPA_DC3D_rd_MASK)
#define VSPA_DC3D_wr_MASK                        (0x20000000U)
#define VSPA_DC3D_wr_SHIFT                       (29U)
#define VSPA_DC3D_wr_WIDTH                       (1U)
#define VSPA_DC3D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC3D_wr_SHIFT)) & VSPA_DC3D_wr_MASK)
/*! @} */

/*! @name C3AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */
#define VSPA_C3AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C3AACR_cmpm_SHIFT                   (0U)
#define VSPA_C3AACR_cmpm_WIDTH                   (8U)
#define VSPA_C3AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_cmpm_SHIFT)) & VSPA_C3AACR_cmpm_MASK)
#define VSPA_C3AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C3AACR_ctinm_SHIFT                  (16U)
#define VSPA_C3AACR_ctinm_WIDTH                  (4U)
#define VSPA_C3AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_ctinm_SHIFT)) & VSPA_C3AACR_ctinm_MASK)
#define VSPA_C3AACR_swb_MASK                     (0x20000000U)
#define VSPA_C3AACR_swb_SHIFT                    (29U)
#define VSPA_C3AACR_swb_WIDTH                    (1U)
#define VSPA_C3AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_swb_SHIFT)) & VSPA_C3AACR_swb_MASK)
#define VSPA_C3AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C3AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C3AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C3AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_vcpu_done_SHIFT)) & VSPA_C3AACR_vcpu_done_MASK)
#define VSPA_C3AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C3AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C3AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C3AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C3AACR_vcpu_go_SHIFT)) & VSPA_C3AACR_vcpu_go_MASK)
/*! @} */

/*! @name C3DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */
#define VSPA_C3DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C3DACR_cmpm_SHIFT                   (0U)
#define VSPA_C3DACR_cmpm_WIDTH                   (8U)
#define VSPA_C3DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_cmpm_SHIFT)) & VSPA_C3DACR_cmpm_MASK)
#define VSPA_C3DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C3DACR_ctinm_SHIFT                  (16U)
#define VSPA_C3DACR_ctinm_WIDTH                  (4U)
#define VSPA_C3DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_ctinm_SHIFT)) & VSPA_C3DACR_ctinm_MASK)
#define VSPA_C3DACR_swb_MASK                     (0x20000000U)
#define VSPA_C3DACR_swb_SHIFT                    (29U)
#define VSPA_C3DACR_swb_WIDTH                    (1U)
#define VSPA_C3DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_swb_SHIFT)) & VSPA_C3DACR_swb_MASK)
#define VSPA_C3DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C3DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C3DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C3DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_vcpu_done_SHIFT)) & VSPA_C3DACR_vcpu_done_MASK)
#define VSPA_C3DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C3DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C3DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C3DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C3DACR_vcpu_go_SHIFT)) & VSPA_C3DACR_vcpu_go_MASK)
/*! @} */

/*! @name C3TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */
#define VSPA_C3TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C3TACR_cmpm_SHIFT                   (0U)
#define VSPA_C3TACR_cmpm_WIDTH                   (8U)
#define VSPA_C3TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_cmpm_SHIFT)) & VSPA_C3TACR_cmpm_MASK)
#define VSPA_C3TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C3TACR_ctinm_SHIFT                  (16U)
#define VSPA_C3TACR_ctinm_WIDTH                  (4U)
#define VSPA_C3TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_ctinm_SHIFT)) & VSPA_C3TACR_ctinm_MASK)
#define VSPA_C3TACR_swb_MASK                     (0x20000000U)
#define VSPA_C3TACR_swb_SHIFT                    (29U)
#define VSPA_C3TACR_swb_WIDTH                    (1U)
#define VSPA_C3TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_swb_SHIFT)) & VSPA_C3TACR_swb_MASK)
#define VSPA_C3TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C3TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C3TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C3TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_vcpu_done_SHIFT)) & VSPA_C3TACR_vcpu_done_MASK)
#define VSPA_C3TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C3TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C3TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C3TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C3TACR_vcpu_go_SHIFT)) & VSPA_C3TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC4CS - Debug Comparator Control and Status register */
/*! @{ */
#define VSPA_DC4CS_evt_en_MASK                   (0x1U)
#define VSPA_DC4CS_evt_en_SHIFT                  (0U)
#define VSPA_DC4CS_evt_en_WIDTH                  (1U)
#define VSPA_DC4CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_evt_en_SHIFT)) & VSPA_DC4CS_evt_en_MASK)
#define VSPA_DC4CS_force_trig_MASK               (0x2U)
#define VSPA_DC4CS_force_trig_SHIFT              (1U)
#define VSPA_DC4CS_force_trig_WIDTH              (1U)
#define VSPA_DC4CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_force_trig_SHIFT)) & VSPA_DC4CS_force_trig_MASK)
#define VSPA_DC4CS_force_disarm_MASK             (0x4U)
#define VSPA_DC4CS_force_disarm_SHIFT            (2U)
#define VSPA_DC4CS_force_disarm_WIDTH            (1U)
#define VSPA_DC4CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_force_disarm_SHIFT)) & VSPA_DC4CS_force_disarm_MASK)
#define VSPA_DC4CS_force_arm_MASK                (0x8U)
#define VSPA_DC4CS_force_arm_SHIFT               (3U)
#define VSPA_DC4CS_force_arm_WIDTH               (1U)
#define VSPA_DC4CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_force_arm_SHIFT)) & VSPA_DC4CS_force_arm_MASK)
#define VSPA_DC4CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC4CS_cond_sel_SHIFT                (4U)
#define VSPA_DC4CS_cond_sel_WIDTH                (3U)
#define VSPA_DC4CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_cond_sel_SHIFT)) & VSPA_DC4CS_cond_sel_MASK)
#define VSPA_DC4CS_i_sel_MASK                    (0x700U)
#define VSPA_DC4CS_i_sel_SHIFT                   (8U)
#define VSPA_DC4CS_i_sel_WIDTH                   (3U)
#define VSPA_DC4CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_i_sel_SHIFT)) & VSPA_DC4CS_i_sel_MASK)
#define VSPA_DC4CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC4CS_pair_mode_SHIFT               (12U)
#define VSPA_DC4CS_pair_mode_WIDTH               (2U)
#define VSPA_DC4CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_pair_mode_SHIFT)) & VSPA_DC4CS_pair_mode_MASK)
#define VSPA_DC4CS_triggered_MASK                (0x10000U)
#define VSPA_DC4CS_triggered_SHIFT               (16U)
#define VSPA_DC4CS_triggered_WIDTH               (1U)
#define VSPA_DC4CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_triggered_SHIFT)) & VSPA_DC4CS_triggered_MASK)
#define VSPA_DC4CS_armed_MASK                    (0x20000U)
#define VSPA_DC4CS_armed_SHIFT                   (17U)
#define VSPA_DC4CS_armed_WIDTH                   (1U)
#define VSPA_DC4CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_armed_SHIFT)) & VSPA_DC4CS_armed_MASK)
#define VSPA_DC4CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC4CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC4CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC4CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_seq_evt_SHIFT)) & VSPA_DC4CS_seq_evt_MASK)
#define VSPA_DC4CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC4CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC4CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC4CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC4CS_cmp_evt_SHIFT)) & VSPA_DC4CS_cmp_evt_MASK)
/*! @} */

/*! @name DC4D - Debug Comparator a Data register */
/*! @{ */
#define VSPA_DC4D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC4D_comp_data_SHIFT                (2U)
#define VSPA_DC4D_comp_data_WIDTH                (18U)
#define VSPA_DC4D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_comp_data_SHIFT)) & VSPA_DC4D_comp_data_MASK)
#define VSPA_DC4D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC4D_dma_host_SHIFT                 (24U)
#define VSPA_DC4D_dma_host_WIDTH                 (1U)
#define VSPA_DC4D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_dma_host_SHIFT)) & VSPA_DC4D_dma_host_MASK)
#define VSPA_DC4D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC4D_vcpu_SHIFT                     (25U)
#define VSPA_DC4D_vcpu_WIDTH                     (1U)
#define VSPA_DC4D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_vcpu_SHIFT)) & VSPA_DC4D_vcpu_MASK)
#define VSPA_DC4D_ippu_MASK                      (0x4000000U)
#define VSPA_DC4D_ippu_SHIFT                     (26U)
#define VSPA_DC4D_ippu_WIDTH                     (1U)
#define VSPA_DC4D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_ippu_SHIFT)) & VSPA_DC4D_ippu_MASK)
#define VSPA_DC4D_rd_MASK                        (0x10000000U)
#define VSPA_DC4D_rd_SHIFT                       (28U)
#define VSPA_DC4D_rd_WIDTH                       (1U)
#define VSPA_DC4D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_rd_SHIFT)) & VSPA_DC4D_rd_MASK)
#define VSPA_DC4D_wr_MASK                        (0x20000000U)
#define VSPA_DC4D_wr_SHIFT                       (29U)
#define VSPA_DC4D_wr_WIDTH                       (1U)
#define VSPA_DC4D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC4D_wr_SHIFT)) & VSPA_DC4D_wr_MASK)
/*! @} */

/*! @name C4AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */
#define VSPA_C4AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C4AACR_cmpm_SHIFT                   (0U)
#define VSPA_C4AACR_cmpm_WIDTH                   (8U)
#define VSPA_C4AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_cmpm_SHIFT)) & VSPA_C4AACR_cmpm_MASK)
#define VSPA_C4AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C4AACR_ctinm_SHIFT                  (16U)
#define VSPA_C4AACR_ctinm_WIDTH                  (4U)
#define VSPA_C4AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_ctinm_SHIFT)) & VSPA_C4AACR_ctinm_MASK)
#define VSPA_C4AACR_swb_MASK                     (0x20000000U)
#define VSPA_C4AACR_swb_SHIFT                    (29U)
#define VSPA_C4AACR_swb_WIDTH                    (1U)
#define VSPA_C4AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_swb_SHIFT)) & VSPA_C4AACR_swb_MASK)
#define VSPA_C4AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C4AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C4AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C4AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_vcpu_done_SHIFT)) & VSPA_C4AACR_vcpu_done_MASK)
#define VSPA_C4AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C4AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C4AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C4AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C4AACR_vcpu_go_SHIFT)) & VSPA_C4AACR_vcpu_go_MASK)
/*! @} */

/*! @name C4DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */
#define VSPA_C4DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C4DACR_cmpm_SHIFT                   (0U)
#define VSPA_C4DACR_cmpm_WIDTH                   (8U)
#define VSPA_C4DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_cmpm_SHIFT)) & VSPA_C4DACR_cmpm_MASK)
#define VSPA_C4DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C4DACR_ctinm_SHIFT                  (16U)
#define VSPA_C4DACR_ctinm_WIDTH                  (4U)
#define VSPA_C4DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_ctinm_SHIFT)) & VSPA_C4DACR_ctinm_MASK)
#define VSPA_C4DACR_swb_MASK                     (0x20000000U)
#define VSPA_C4DACR_swb_SHIFT                    (29U)
#define VSPA_C4DACR_swb_WIDTH                    (1U)
#define VSPA_C4DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_swb_SHIFT)) & VSPA_C4DACR_swb_MASK)
#define VSPA_C4DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C4DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C4DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C4DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_vcpu_done_SHIFT)) & VSPA_C4DACR_vcpu_done_MASK)
#define VSPA_C4DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C4DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C4DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C4DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C4DACR_vcpu_go_SHIFT)) & VSPA_C4DACR_vcpu_go_MASK)
/*! @} */

/*! @name C4TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */
#define VSPA_C4TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C4TACR_cmpm_SHIFT                   (0U)
#define VSPA_C4TACR_cmpm_WIDTH                   (8U)
#define VSPA_C4TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_cmpm_SHIFT)) & VSPA_C4TACR_cmpm_MASK)
#define VSPA_C4TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C4TACR_ctinm_SHIFT                  (16U)
#define VSPA_C4TACR_ctinm_WIDTH                  (4U)
#define VSPA_C4TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_ctinm_SHIFT)) & VSPA_C4TACR_ctinm_MASK)
#define VSPA_C4TACR_swb_MASK                     (0x20000000U)
#define VSPA_C4TACR_swb_SHIFT                    (29U)
#define VSPA_C4TACR_swb_WIDTH                    (1U)
#define VSPA_C4TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_swb_SHIFT)) & VSPA_C4TACR_swb_MASK)
#define VSPA_C4TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C4TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C4TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C4TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_vcpu_done_SHIFT)) & VSPA_C4TACR_vcpu_done_MASK)
#define VSPA_C4TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C4TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C4TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C4TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C4TACR_vcpu_go_SHIFT)) & VSPA_C4TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC5CS - Debug Comparator Control and Status register */
/*! @{ */
#define VSPA_DC5CS_evt_en_MASK                   (0x1U)
#define VSPA_DC5CS_evt_en_SHIFT                  (0U)
#define VSPA_DC5CS_evt_en_WIDTH                  (1U)
#define VSPA_DC5CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_evt_en_SHIFT)) & VSPA_DC5CS_evt_en_MASK)
#define VSPA_DC5CS_force_trig_MASK               (0x2U)
#define VSPA_DC5CS_force_trig_SHIFT              (1U)
#define VSPA_DC5CS_force_trig_WIDTH              (1U)
#define VSPA_DC5CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_force_trig_SHIFT)) & VSPA_DC5CS_force_trig_MASK)
#define VSPA_DC5CS_force_disarm_MASK             (0x4U)
#define VSPA_DC5CS_force_disarm_SHIFT            (2U)
#define VSPA_DC5CS_force_disarm_WIDTH            (1U)
#define VSPA_DC5CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_force_disarm_SHIFT)) & VSPA_DC5CS_force_disarm_MASK)
#define VSPA_DC5CS_force_arm_MASK                (0x8U)
#define VSPA_DC5CS_force_arm_SHIFT               (3U)
#define VSPA_DC5CS_force_arm_WIDTH               (1U)
#define VSPA_DC5CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_force_arm_SHIFT)) & VSPA_DC5CS_force_arm_MASK)
#define VSPA_DC5CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC5CS_cond_sel_SHIFT                (4U)
#define VSPA_DC5CS_cond_sel_WIDTH                (3U)
#define VSPA_DC5CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_cond_sel_SHIFT)) & VSPA_DC5CS_cond_sel_MASK)
#define VSPA_DC5CS_i_sel_MASK                    (0x700U)
#define VSPA_DC5CS_i_sel_SHIFT                   (8U)
#define VSPA_DC5CS_i_sel_WIDTH                   (3U)
#define VSPA_DC5CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_i_sel_SHIFT)) & VSPA_DC5CS_i_sel_MASK)
#define VSPA_DC5CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC5CS_pair_mode_SHIFT               (12U)
#define VSPA_DC5CS_pair_mode_WIDTH               (2U)
#define VSPA_DC5CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_pair_mode_SHIFT)) & VSPA_DC5CS_pair_mode_MASK)
#define VSPA_DC5CS_triggered_MASK                (0x10000U)
#define VSPA_DC5CS_triggered_SHIFT               (16U)
#define VSPA_DC5CS_triggered_WIDTH               (1U)
#define VSPA_DC5CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_triggered_SHIFT)) & VSPA_DC5CS_triggered_MASK)
#define VSPA_DC5CS_armed_MASK                    (0x20000U)
#define VSPA_DC5CS_armed_SHIFT                   (17U)
#define VSPA_DC5CS_armed_WIDTH                   (1U)
#define VSPA_DC5CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_armed_SHIFT)) & VSPA_DC5CS_armed_MASK)
#define VSPA_DC5CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC5CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC5CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC5CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_seq_evt_SHIFT)) & VSPA_DC5CS_seq_evt_MASK)
#define VSPA_DC5CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC5CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC5CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC5CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC5CS_cmp_evt_SHIFT)) & VSPA_DC5CS_cmp_evt_MASK)
/*! @} */

/*! @name DC5D - Debug Comparator a Data register */
/*! @{ */
#define VSPA_DC5D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC5D_comp_data_SHIFT                (2U)
#define VSPA_DC5D_comp_data_WIDTH                (18U)
#define VSPA_DC5D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_comp_data_SHIFT)) & VSPA_DC5D_comp_data_MASK)
#define VSPA_DC5D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC5D_dma_host_SHIFT                 (24U)
#define VSPA_DC5D_dma_host_WIDTH                 (1U)
#define VSPA_DC5D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_dma_host_SHIFT)) & VSPA_DC5D_dma_host_MASK)
#define VSPA_DC5D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC5D_vcpu_SHIFT                     (25U)
#define VSPA_DC5D_vcpu_WIDTH                     (1U)
#define VSPA_DC5D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_vcpu_SHIFT)) & VSPA_DC5D_vcpu_MASK)
#define VSPA_DC5D_ippu_MASK                      (0x4000000U)
#define VSPA_DC5D_ippu_SHIFT                     (26U)
#define VSPA_DC5D_ippu_WIDTH                     (1U)
#define VSPA_DC5D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_ippu_SHIFT)) & VSPA_DC5D_ippu_MASK)
#define VSPA_DC5D_rd_MASK                        (0x10000000U)
#define VSPA_DC5D_rd_SHIFT                       (28U)
#define VSPA_DC5D_rd_WIDTH                       (1U)
#define VSPA_DC5D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_rd_SHIFT)) & VSPA_DC5D_rd_MASK)
#define VSPA_DC5D_wr_MASK                        (0x20000000U)
#define VSPA_DC5D_wr_SHIFT                       (29U)
#define VSPA_DC5D_wr_WIDTH                       (1U)
#define VSPA_DC5D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC5D_wr_SHIFT)) & VSPA_DC5D_wr_MASK)
/*! @} */

/*! @name C5AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */
#define VSPA_C5AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C5AACR_cmpm_SHIFT                   (0U)
#define VSPA_C5AACR_cmpm_WIDTH                   (8U)
#define VSPA_C5AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_cmpm_SHIFT)) & VSPA_C5AACR_cmpm_MASK)
#define VSPA_C5AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C5AACR_ctinm_SHIFT                  (16U)
#define VSPA_C5AACR_ctinm_WIDTH                  (4U)
#define VSPA_C5AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_ctinm_SHIFT)) & VSPA_C5AACR_ctinm_MASK)
#define VSPA_C5AACR_swb_MASK                     (0x20000000U)
#define VSPA_C5AACR_swb_SHIFT                    (29U)
#define VSPA_C5AACR_swb_WIDTH                    (1U)
#define VSPA_C5AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_swb_SHIFT)) & VSPA_C5AACR_swb_MASK)
#define VSPA_C5AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C5AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C5AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C5AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_vcpu_done_SHIFT)) & VSPA_C5AACR_vcpu_done_MASK)
#define VSPA_C5AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C5AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C5AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C5AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C5AACR_vcpu_go_SHIFT)) & VSPA_C5AACR_vcpu_go_MASK)
/*! @} */

/*! @name C5DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */
#define VSPA_C5DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C5DACR_cmpm_SHIFT                   (0U)
#define VSPA_C5DACR_cmpm_WIDTH                   (8U)
#define VSPA_C5DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_cmpm_SHIFT)) & VSPA_C5DACR_cmpm_MASK)
#define VSPA_C5DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C5DACR_ctinm_SHIFT                  (16U)
#define VSPA_C5DACR_ctinm_WIDTH                  (4U)
#define VSPA_C5DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_ctinm_SHIFT)) & VSPA_C5DACR_ctinm_MASK)
#define VSPA_C5DACR_swb_MASK                     (0x20000000U)
#define VSPA_C5DACR_swb_SHIFT                    (29U)
#define VSPA_C5DACR_swb_WIDTH                    (1U)
#define VSPA_C5DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_swb_SHIFT)) & VSPA_C5DACR_swb_MASK)
#define VSPA_C5DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C5DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C5DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C5DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_vcpu_done_SHIFT)) & VSPA_C5DACR_vcpu_done_MASK)
#define VSPA_C5DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C5DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C5DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C5DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C5DACR_vcpu_go_SHIFT)) & VSPA_C5DACR_vcpu_go_MASK)
/*! @} */

/*! @name C5TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */
#define VSPA_C5TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C5TACR_cmpm_SHIFT                   (0U)
#define VSPA_C5TACR_cmpm_WIDTH                   (8U)
#define VSPA_C5TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_cmpm_SHIFT)) & VSPA_C5TACR_cmpm_MASK)
#define VSPA_C5TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C5TACR_ctinm_SHIFT                  (16U)
#define VSPA_C5TACR_ctinm_WIDTH                  (4U)
#define VSPA_C5TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_ctinm_SHIFT)) & VSPA_C5TACR_ctinm_MASK)
#define VSPA_C5TACR_swb_MASK                     (0x20000000U)
#define VSPA_C5TACR_swb_SHIFT                    (29U)
#define VSPA_C5TACR_swb_WIDTH                    (1U)
#define VSPA_C5TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_swb_SHIFT)) & VSPA_C5TACR_swb_MASK)
#define VSPA_C5TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C5TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C5TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C5TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_vcpu_done_SHIFT)) & VSPA_C5TACR_vcpu_done_MASK)
#define VSPA_C5TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C5TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C5TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C5TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C5TACR_vcpu_go_SHIFT)) & VSPA_C5TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC6CS - Debug Comparator Control and Status register */
/*! @{ */
#define VSPA_DC6CS_evt_en_MASK                   (0x1U)
#define VSPA_DC6CS_evt_en_SHIFT                  (0U)
#define VSPA_DC6CS_evt_en_WIDTH                  (1U)
#define VSPA_DC6CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_evt_en_SHIFT)) & VSPA_DC6CS_evt_en_MASK)
#define VSPA_DC6CS_force_trig_MASK               (0x2U)
#define VSPA_DC6CS_force_trig_SHIFT              (1U)
#define VSPA_DC6CS_force_trig_WIDTH              (1U)
#define VSPA_DC6CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_force_trig_SHIFT)) & VSPA_DC6CS_force_trig_MASK)
#define VSPA_DC6CS_force_disarm_MASK             (0x4U)
#define VSPA_DC6CS_force_disarm_SHIFT            (2U)
#define VSPA_DC6CS_force_disarm_WIDTH            (1U)
#define VSPA_DC6CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_force_disarm_SHIFT)) & VSPA_DC6CS_force_disarm_MASK)
#define VSPA_DC6CS_force_arm_MASK                (0x8U)
#define VSPA_DC6CS_force_arm_SHIFT               (3U)
#define VSPA_DC6CS_force_arm_WIDTH               (1U)
#define VSPA_DC6CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_force_arm_SHIFT)) & VSPA_DC6CS_force_arm_MASK)
#define VSPA_DC6CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC6CS_cond_sel_SHIFT                (4U)
#define VSPA_DC6CS_cond_sel_WIDTH                (3U)
#define VSPA_DC6CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_cond_sel_SHIFT)) & VSPA_DC6CS_cond_sel_MASK)
#define VSPA_DC6CS_i_sel_MASK                    (0x700U)
#define VSPA_DC6CS_i_sel_SHIFT                   (8U)
#define VSPA_DC6CS_i_sel_WIDTH                   (3U)
#define VSPA_DC6CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_i_sel_SHIFT)) & VSPA_DC6CS_i_sel_MASK)
#define VSPA_DC6CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC6CS_pair_mode_SHIFT               (12U)
#define VSPA_DC6CS_pair_mode_WIDTH               (2U)
#define VSPA_DC6CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_pair_mode_SHIFT)) & VSPA_DC6CS_pair_mode_MASK)
#define VSPA_DC6CS_triggered_MASK                (0x10000U)
#define VSPA_DC6CS_triggered_SHIFT               (16U)
#define VSPA_DC6CS_triggered_WIDTH               (1U)
#define VSPA_DC6CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_triggered_SHIFT)) & VSPA_DC6CS_triggered_MASK)
#define VSPA_DC6CS_armed_MASK                    (0x20000U)
#define VSPA_DC6CS_armed_SHIFT                   (17U)
#define VSPA_DC6CS_armed_WIDTH                   (1U)
#define VSPA_DC6CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_armed_SHIFT)) & VSPA_DC6CS_armed_MASK)
#define VSPA_DC6CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC6CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC6CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC6CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_seq_evt_SHIFT)) & VSPA_DC6CS_seq_evt_MASK)
#define VSPA_DC6CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC6CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC6CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC6CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC6CS_cmp_evt_SHIFT)) & VSPA_DC6CS_cmp_evt_MASK)
/*! @} */

/*! @name DC6D - Debug Comparator a Data register */
/*! @{ */
#define VSPA_DC6D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC6D_comp_data_SHIFT                (2U)
#define VSPA_DC6D_comp_data_WIDTH                (18U)
#define VSPA_DC6D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_comp_data_SHIFT)) & VSPA_DC6D_comp_data_MASK)
#define VSPA_DC6D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC6D_dma_host_SHIFT                 (24U)
#define VSPA_DC6D_dma_host_WIDTH                 (1U)
#define VSPA_DC6D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_dma_host_SHIFT)) & VSPA_DC6D_dma_host_MASK)
#define VSPA_DC6D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC6D_vcpu_SHIFT                     (25U)
#define VSPA_DC6D_vcpu_WIDTH                     (1U)
#define VSPA_DC6D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_vcpu_SHIFT)) & VSPA_DC6D_vcpu_MASK)
#define VSPA_DC6D_ippu_MASK                      (0x4000000U)
#define VSPA_DC6D_ippu_SHIFT                     (26U)
#define VSPA_DC6D_ippu_WIDTH                     (1U)
#define VSPA_DC6D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_ippu_SHIFT)) & VSPA_DC6D_ippu_MASK)
#define VSPA_DC6D_rd_MASK                        (0x10000000U)
#define VSPA_DC6D_rd_SHIFT                       (28U)
#define VSPA_DC6D_rd_WIDTH                       (1U)
#define VSPA_DC6D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_rd_SHIFT)) & VSPA_DC6D_rd_MASK)
#define VSPA_DC6D_wr_MASK                        (0x20000000U)
#define VSPA_DC6D_wr_SHIFT                       (29U)
#define VSPA_DC6D_wr_WIDTH                       (1U)
#define VSPA_DC6D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC6D_wr_SHIFT)) & VSPA_DC6D_wr_MASK)
/*! @} */

/*! @name C6AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */
#define VSPA_C6AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C6AACR_cmpm_SHIFT                   (0U)
#define VSPA_C6AACR_cmpm_WIDTH                   (8U)
#define VSPA_C6AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_cmpm_SHIFT)) & VSPA_C6AACR_cmpm_MASK)
#define VSPA_C6AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C6AACR_ctinm_SHIFT                  (16U)
#define VSPA_C6AACR_ctinm_WIDTH                  (4U)
#define VSPA_C6AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_ctinm_SHIFT)) & VSPA_C6AACR_ctinm_MASK)
#define VSPA_C6AACR_swb_MASK                     (0x20000000U)
#define VSPA_C6AACR_swb_SHIFT                    (29U)
#define VSPA_C6AACR_swb_WIDTH                    (1U)
#define VSPA_C6AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_swb_SHIFT)) & VSPA_C6AACR_swb_MASK)
#define VSPA_C6AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C6AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C6AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C6AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_vcpu_done_SHIFT)) & VSPA_C6AACR_vcpu_done_MASK)
#define VSPA_C6AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C6AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C6AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C6AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C6AACR_vcpu_go_SHIFT)) & VSPA_C6AACR_vcpu_go_MASK)
/*! @} */

/*! @name C6DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */
#define VSPA_C6DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C6DACR_cmpm_SHIFT                   (0U)
#define VSPA_C6DACR_cmpm_WIDTH                   (8U)
#define VSPA_C6DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_cmpm_SHIFT)) & VSPA_C6DACR_cmpm_MASK)
#define VSPA_C6DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C6DACR_ctinm_SHIFT                  (16U)
#define VSPA_C6DACR_ctinm_WIDTH                  (4U)
#define VSPA_C6DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_ctinm_SHIFT)) & VSPA_C6DACR_ctinm_MASK)
#define VSPA_C6DACR_swb_MASK                     (0x20000000U)
#define VSPA_C6DACR_swb_SHIFT                    (29U)
#define VSPA_C6DACR_swb_WIDTH                    (1U)
#define VSPA_C6DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_swb_SHIFT)) & VSPA_C6DACR_swb_MASK)
#define VSPA_C6DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C6DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C6DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C6DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_vcpu_done_SHIFT)) & VSPA_C6DACR_vcpu_done_MASK)
#define VSPA_C6DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C6DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C6DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C6DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C6DACR_vcpu_go_SHIFT)) & VSPA_C6DACR_vcpu_go_MASK)
/*! @} */

/*! @name C6TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */
#define VSPA_C6TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C6TACR_cmpm_SHIFT                   (0U)
#define VSPA_C6TACR_cmpm_WIDTH                   (8U)
#define VSPA_C6TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_cmpm_SHIFT)) & VSPA_C6TACR_cmpm_MASK)
#define VSPA_C6TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C6TACR_ctinm_SHIFT                  (16U)
#define VSPA_C6TACR_ctinm_WIDTH                  (4U)
#define VSPA_C6TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_ctinm_SHIFT)) & VSPA_C6TACR_ctinm_MASK)
#define VSPA_C6TACR_swb_MASK                     (0x20000000U)
#define VSPA_C6TACR_swb_SHIFT                    (29U)
#define VSPA_C6TACR_swb_WIDTH                    (1U)
#define VSPA_C6TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_swb_SHIFT)) & VSPA_C6TACR_swb_MASK)
#define VSPA_C6TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C6TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C6TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C6TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_vcpu_done_SHIFT)) & VSPA_C6TACR_vcpu_done_MASK)
#define VSPA_C6TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C6TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C6TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C6TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C6TACR_vcpu_go_SHIFT)) & VSPA_C6TACR_vcpu_go_MASK)
/*! @} */

/*! @name DC7CS - Debug Comparator Control and Status register */
/*! @{ */
#define VSPA_DC7CS_evt_en_MASK                   (0x1U)
#define VSPA_DC7CS_evt_en_SHIFT                  (0U)
#define VSPA_DC7CS_evt_en_WIDTH                  (1U)
#define VSPA_DC7CS_evt_en(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_evt_en_SHIFT)) & VSPA_DC7CS_evt_en_MASK)
#define VSPA_DC7CS_force_trig_MASK               (0x2U)
#define VSPA_DC7CS_force_trig_SHIFT              (1U)
#define VSPA_DC7CS_force_trig_WIDTH              (1U)
#define VSPA_DC7CS_force_trig(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_force_trig_SHIFT)) & VSPA_DC7CS_force_trig_MASK)
#define VSPA_DC7CS_force_disarm_MASK             (0x4U)
#define VSPA_DC7CS_force_disarm_SHIFT            (2U)
#define VSPA_DC7CS_force_disarm_WIDTH            (1U)
#define VSPA_DC7CS_force_disarm(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_force_disarm_SHIFT)) & VSPA_DC7CS_force_disarm_MASK)
#define VSPA_DC7CS_force_arm_MASK                (0x8U)
#define VSPA_DC7CS_force_arm_SHIFT               (3U)
#define VSPA_DC7CS_force_arm_WIDTH               (1U)
#define VSPA_DC7CS_force_arm(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_force_arm_SHIFT)) & VSPA_DC7CS_force_arm_MASK)
#define VSPA_DC7CS_cond_sel_MASK                 (0x70U)
#define VSPA_DC7CS_cond_sel_SHIFT                (4U)
#define VSPA_DC7CS_cond_sel_WIDTH                (3U)
#define VSPA_DC7CS_cond_sel(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_cond_sel_SHIFT)) & VSPA_DC7CS_cond_sel_MASK)
#define VSPA_DC7CS_i_sel_MASK                    (0x700U)
#define VSPA_DC7CS_i_sel_SHIFT                   (8U)
#define VSPA_DC7CS_i_sel_WIDTH                   (3U)
#define VSPA_DC7CS_i_sel(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_i_sel_SHIFT)) & VSPA_DC7CS_i_sel_MASK)
#define VSPA_DC7CS_pair_mode_MASK                (0x3000U)
#define VSPA_DC7CS_pair_mode_SHIFT               (12U)
#define VSPA_DC7CS_pair_mode_WIDTH               (2U)
#define VSPA_DC7CS_pair_mode(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_pair_mode_SHIFT)) & VSPA_DC7CS_pair_mode_MASK)
#define VSPA_DC7CS_triggered_MASK                (0x10000U)
#define VSPA_DC7CS_triggered_SHIFT               (16U)
#define VSPA_DC7CS_triggered_WIDTH               (1U)
#define VSPA_DC7CS_triggered(x)                  (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_triggered_SHIFT)) & VSPA_DC7CS_triggered_MASK)
#define VSPA_DC7CS_armed_MASK                    (0x20000U)
#define VSPA_DC7CS_armed_SHIFT                   (17U)
#define VSPA_DC7CS_armed_WIDTH                   (1U)
#define VSPA_DC7CS_armed(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_armed_SHIFT)) & VSPA_DC7CS_armed_MASK)
#define VSPA_DC7CS_seq_evt_MASK                  (0x40000U)
#define VSPA_DC7CS_seq_evt_SHIFT                 (18U)
#define VSPA_DC7CS_seq_evt_WIDTH                 (1U)
#define VSPA_DC7CS_seq_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_seq_evt_SHIFT)) & VSPA_DC7CS_seq_evt_MASK)
#define VSPA_DC7CS_cmp_evt_MASK                  (0x100000U)
#define VSPA_DC7CS_cmp_evt_SHIFT                 (20U)
#define VSPA_DC7CS_cmp_evt_WIDTH                 (1U)
#define VSPA_DC7CS_cmp_evt(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC7CS_cmp_evt_SHIFT)) & VSPA_DC7CS_cmp_evt_MASK)
/*! @} */

/*! @name DC7D - Debug Comparator a Data register */
/*! @{ */
#define VSPA_DC7D_comp_data_MASK                 (0xFFFFCU)
#define VSPA_DC7D_comp_data_SHIFT                (2U)
#define VSPA_DC7D_comp_data_WIDTH                (18U)
#define VSPA_DC7D_comp_data(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_comp_data_SHIFT)) & VSPA_DC7D_comp_data_MASK)
#define VSPA_DC7D_dma_host_MASK                  (0x1000000U)
#define VSPA_DC7D_dma_host_SHIFT                 (24U)
#define VSPA_DC7D_dma_host_WIDTH                 (1U)
#define VSPA_DC7D_dma_host(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_dma_host_SHIFT)) & VSPA_DC7D_dma_host_MASK)
#define VSPA_DC7D_vcpu_MASK                      (0x2000000U)
#define VSPA_DC7D_vcpu_SHIFT                     (25U)
#define VSPA_DC7D_vcpu_WIDTH                     (1U)
#define VSPA_DC7D_vcpu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_vcpu_SHIFT)) & VSPA_DC7D_vcpu_MASK)
#define VSPA_DC7D_ippu_MASK                      (0x4000000U)
#define VSPA_DC7D_ippu_SHIFT                     (26U)
#define VSPA_DC7D_ippu_WIDTH                     (1U)
#define VSPA_DC7D_ippu(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_ippu_SHIFT)) & VSPA_DC7D_ippu_MASK)
#define VSPA_DC7D_rd_MASK                        (0x10000000U)
#define VSPA_DC7D_rd_SHIFT                       (28U)
#define VSPA_DC7D_rd_WIDTH                       (1U)
#define VSPA_DC7D_rd(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_rd_SHIFT)) & VSPA_DC7D_rd_MASK)
#define VSPA_DC7D_wr_MASK                        (0x20000000U)
#define VSPA_DC7D_wr_SHIFT                       (29U)
#define VSPA_DC7D_wr_WIDTH                       (1U)
#define VSPA_DC7D_wr(x)                          (((uint32_t)(((uint32_t)(x)) << VSPA_DC7D_wr_SHIFT)) & VSPA_DC7D_wr_MASK)
/*! @} */

/*! @name C7AACR - Debug Comparator a Arm Action Control registers */
/*! @{ */
#define VSPA_C7AACR_cmpm_MASK                    (0xFFU)
#define VSPA_C7AACR_cmpm_SHIFT                   (0U)
#define VSPA_C7AACR_cmpm_WIDTH                   (8U)
#define VSPA_C7AACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_cmpm_SHIFT)) & VSPA_C7AACR_cmpm_MASK)
#define VSPA_C7AACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C7AACR_ctinm_SHIFT                  (16U)
#define VSPA_C7AACR_ctinm_WIDTH                  (4U)
#define VSPA_C7AACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_ctinm_SHIFT)) & VSPA_C7AACR_ctinm_MASK)
#define VSPA_C7AACR_swb_MASK                     (0x20000000U)
#define VSPA_C7AACR_swb_SHIFT                    (29U)
#define VSPA_C7AACR_swb_WIDTH                    (1U)
#define VSPA_C7AACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_swb_SHIFT)) & VSPA_C7AACR_swb_MASK)
#define VSPA_C7AACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C7AACR_vcpu_done_SHIFT              (30U)
#define VSPA_C7AACR_vcpu_done_WIDTH              (1U)
#define VSPA_C7AACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_vcpu_done_SHIFT)) & VSPA_C7AACR_vcpu_done_MASK)
#define VSPA_C7AACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C7AACR_vcpu_go_SHIFT                (31U)
#define VSPA_C7AACR_vcpu_go_WIDTH                (1U)
#define VSPA_C7AACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C7AACR_vcpu_go_SHIFT)) & VSPA_C7AACR_vcpu_go_MASK)
/*! @} */

/*! @name C7DACR - Debug Comparator a Disarm Action Control registers */
/*! @{ */
#define VSPA_C7DACR_cmpm_MASK                    (0xFFU)
#define VSPA_C7DACR_cmpm_SHIFT                   (0U)
#define VSPA_C7DACR_cmpm_WIDTH                   (8U)
#define VSPA_C7DACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_cmpm_SHIFT)) & VSPA_C7DACR_cmpm_MASK)
#define VSPA_C7DACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C7DACR_ctinm_SHIFT                  (16U)
#define VSPA_C7DACR_ctinm_WIDTH                  (4U)
#define VSPA_C7DACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_ctinm_SHIFT)) & VSPA_C7DACR_ctinm_MASK)
#define VSPA_C7DACR_swb_MASK                     (0x20000000U)
#define VSPA_C7DACR_swb_SHIFT                    (29U)
#define VSPA_C7DACR_swb_WIDTH                    (1U)
#define VSPA_C7DACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_swb_SHIFT)) & VSPA_C7DACR_swb_MASK)
#define VSPA_C7DACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C7DACR_vcpu_done_SHIFT              (30U)
#define VSPA_C7DACR_vcpu_done_WIDTH              (1U)
#define VSPA_C7DACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_vcpu_done_SHIFT)) & VSPA_C7DACR_vcpu_done_MASK)
#define VSPA_C7DACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C7DACR_vcpu_go_SHIFT                (31U)
#define VSPA_C7DACR_vcpu_go_WIDTH                (1U)
#define VSPA_C7DACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C7DACR_vcpu_go_SHIFT)) & VSPA_C7DACR_vcpu_go_MASK)
/*! @} */

/*! @name C7TACR - Debug Comparator a Trigger Action Control registers */
/*! @{ */
#define VSPA_C7TACR_cmpm_MASK                    (0xFFU)
#define VSPA_C7TACR_cmpm_SHIFT                   (0U)
#define VSPA_C7TACR_cmpm_WIDTH                   (8U)
#define VSPA_C7TACR_cmpm(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_cmpm_SHIFT)) & VSPA_C7TACR_cmpm_MASK)
#define VSPA_C7TACR_ctinm_MASK                   (0xF0000U)
#define VSPA_C7TACR_ctinm_SHIFT                  (16U)
#define VSPA_C7TACR_ctinm_WIDTH                  (4U)
#define VSPA_C7TACR_ctinm(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_ctinm_SHIFT)) & VSPA_C7TACR_ctinm_MASK)
#define VSPA_C7TACR_swb_MASK                     (0x20000000U)
#define VSPA_C7TACR_swb_SHIFT                    (29U)
#define VSPA_C7TACR_swb_WIDTH                    (1U)
#define VSPA_C7TACR_swb(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_swb_SHIFT)) & VSPA_C7TACR_swb_MASK)
#define VSPA_C7TACR_vcpu_done_MASK               (0x40000000U)
#define VSPA_C7TACR_vcpu_done_SHIFT              (30U)
#define VSPA_C7TACR_vcpu_done_WIDTH              (1U)
#define VSPA_C7TACR_vcpu_done(x)                 (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_vcpu_done_SHIFT)) & VSPA_C7TACR_vcpu_done_MASK)
#define VSPA_C7TACR_vcpu_go_MASK                 (0x80000000U)
#define VSPA_C7TACR_vcpu_go_SHIFT                (31U)
#define VSPA_C7TACR_vcpu_go_WIDTH                (1U)
#define VSPA_C7TACR_vcpu_go(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_C7TACR_vcpu_go_SHIFT)) & VSPA_C7TACR_vcpu_go_MASK)
/*! @} */

/*! @name OUT_32 - Debug to VSP 32-bit Outbox register */
/*! @{ */
#define VSPA_OUT_32_debug_outbox32_MASK          (0xFFFFFFFFU)
#define VSPA_OUT_32_debug_outbox32_SHIFT         (0U)
#define VSPA_OUT_32_debug_outbox32_WIDTH         (32U)
#define VSPA_OUT_32_debug_outbox32(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_OUT_32_debug_outbox32_SHIFT)) & VSPA_OUT_32_debug_outbox32_MASK)
/*! @} */

/*! @name OUT_64_MSB - Debug to VSP 64-bit MSB Outbox register */
/*! @{ */
#define VSPA_OUT_64_MSB_debug_outbox64msb_MASK   (0xFFFFFFFFU)
#define VSPA_OUT_64_MSB_debug_outbox64msb_SHIFT  (0U)
#define VSPA_OUT_64_MSB_debug_outbox64msb_WIDTH  (32U)
#define VSPA_OUT_64_MSB_debug_outbox64msb(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_OUT_64_MSB_debug_outbox64msb_SHIFT)) & VSPA_OUT_64_MSB_debug_outbox64msb_MASK)
/*! @} */

/*! @name OUT_64_LSB - Debug to VSP 64-bit LSB Outbox register */
/*! @{ */
#define VSPA_OUT_64_LSB_debug_outbox64lsb_MASK   (0xFFFFFFFFU)
#define VSPA_OUT_64_LSB_debug_outbox64lsb_SHIFT  (0U)
#define VSPA_OUT_64_LSB_debug_outbox64lsb_WIDTH  (32U)
#define VSPA_OUT_64_LSB_debug_outbox64lsb(x)     (((uint32_t)(((uint32_t)(x)) << VSPA_OUT_64_LSB_debug_outbox64lsb_SHIFT)) & VSPA_OUT_64_LSB_debug_outbox64lsb_MASK)
/*! @} */

/*! @name IN_32 - VSP to Debugger 32-bit Inbox register */
/*! @{ */
#define VSPA_IN_32_debug_inbox32_MASK            (0xFFFFFFFFU)
#define VSPA_IN_32_debug_inbox32_SHIFT           (0U)
#define VSPA_IN_32_debug_inbox32_WIDTH           (32U)
#define VSPA_IN_32_debug_inbox32(x)              (((uint32_t)(((uint32_t)(x)) << VSPA_IN_32_debug_inbox32_SHIFT)) & VSPA_IN_32_debug_inbox32_MASK)
/*! @} */

/*! @name IN_64_MSB - VSP to Debugger 64-bit MSB Inbox register */
/*! @{ */
#define VSPA_IN_64_MSB_debug_inbox64msb_MASK     (0xFFFFFFFFU)
#define VSPA_IN_64_MSB_debug_inbox64msb_SHIFT    (0U)
#define VSPA_IN_64_MSB_debug_inbox64msb_WIDTH    (32U)
#define VSPA_IN_64_MSB_debug_inbox64msb(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_IN_64_MSB_debug_inbox64msb_SHIFT)) & VSPA_IN_64_MSB_debug_inbox64msb_MASK)
/*! @} */

/*! @name IN_64_LSB - VSP to Debugger 64-bit LSB Inbox register */
/*! @{ */
#define VSPA_IN_64_LSB_debug_inbox64lsb_MASK     (0xFFFFFFFFU)
#define VSPA_IN_64_LSB_debug_inbox64lsb_SHIFT    (0U)
#define VSPA_IN_64_LSB_debug_inbox64lsb_WIDTH    (32U)
#define VSPA_IN_64_LSB_debug_inbox64lsb(x)       (((uint32_t)(((uint32_t)(x)) << VSPA_IN_64_LSB_debug_inbox64lsb_SHIFT)) & VSPA_IN_64_LSB_debug_inbox64lsb_MASK)
/*! @} */

/*! @name MBOX_STATUS - Debugger to VSP Mailbox Status register */
/*! @{ */
#define VSPA_MBOX_STATUS_msg_out_valid_32bit_MASK (0x1U)
#define VSPA_MBOX_STATUS_msg_out_valid_32bit_SHIFT (0U)
#define VSPA_MBOX_STATUS_msg_out_valid_32bit_WIDTH (1U)
#define VSPA_MBOX_STATUS_msg_out_valid_32bit(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_MBOX_STATUS_msg_out_valid_32bit_SHIFT)) & VSPA_MBOX_STATUS_msg_out_valid_32bit_MASK)
#define VSPA_MBOX_STATUS_msg_out_valid_64bit_MASK (0x2U)
#define VSPA_MBOX_STATUS_msg_out_valid_64bit_SHIFT (1U)
#define VSPA_MBOX_STATUS_msg_out_valid_64bit_WIDTH (1U)
#define VSPA_MBOX_STATUS_msg_out_valid_64bit(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_MBOX_STATUS_msg_out_valid_64bit_SHIFT)) & VSPA_MBOX_STATUS_msg_out_valid_64bit_MASK)
#define VSPA_MBOX_STATUS_msg_in_valid_32bit_MASK (0x4U)
#define VSPA_MBOX_STATUS_msg_in_valid_32bit_SHIFT (2U)
#define VSPA_MBOX_STATUS_msg_in_valid_32bit_WIDTH (1U)
#define VSPA_MBOX_STATUS_msg_in_valid_32bit(x)   (((uint32_t)(((uint32_t)(x)) << VSPA_MBOX_STATUS_msg_in_valid_32bit_SHIFT)) & VSPA_MBOX_STATUS_msg_in_valid_32bit_MASK)
#define VSPA_MBOX_STATUS_msg_in_valid_64bit_MASK (0x8U)
#define VSPA_MBOX_STATUS_msg_in_valid_64bit_SHIFT (3U)
#define VSPA_MBOX_STATUS_msg_in_valid_64bit_WIDTH (1U)
#define VSPA_MBOX_STATUS_msg_in_valid_64bit(x)   (((uint32_t)(((uint32_t)(x)) << VSPA_MBOX_STATUS_msg_in_valid_64bit_SHIFT)) & VSPA_MBOX_STATUS_msg_in_valid_64bit_MASK)
/*! @} */

/*! @name PARAM_0 - Debug Parameter 0 Register */
/*! @{ */
#define VSPA_PARAM_0_ATID_VALUE_MASK             (0x7FU)
#define VSPA_PARAM_0_ATID_VALUE_SHIFT            (0U)
#define VSPA_PARAM_0_ATID_VALUE_WIDTH            (7U)
#define VSPA_PARAM_0_ATID_VALUE(x)               (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_ATID_VALUE_SHIFT)) & VSPA_PARAM_0_ATID_VALUE_MASK)
#define VSPA_PARAM_0_DBG_FIFO_SIZE_MASK          (0xFF00U)
#define VSPA_PARAM_0_DBG_FIFO_SIZE_SHIFT         (8U)
#define VSPA_PARAM_0_DBG_FIFO_SIZE_WIDTH         (8U)
#define VSPA_PARAM_0_DBG_FIFO_SIZE(x)            (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_DBG_FIFO_SIZE_SHIFT)) & VSPA_PARAM_0_DBG_FIFO_SIZE_MASK)
#define VSPA_PARAM_0_num_comps_MASK              (0xF0000U)
#define VSPA_PARAM_0_num_comps_SHIFT             (16U)
#define VSPA_PARAM_0_num_comps_WIDTH             (4U)
#define VSPA_PARAM_0_num_comps(x)                (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_num_comps_SHIFT)) & VSPA_PARAM_0_num_comps_MASK)
#define VSPA_PARAM_0_xtrig_in_count_MASK         (0xF00000U)
#define VSPA_PARAM_0_xtrig_in_count_SHIFT        (20U)
#define VSPA_PARAM_0_xtrig_in_count_WIDTH        (4U)
#define VSPA_PARAM_0_xtrig_in_count(x)           (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_xtrig_in_count_SHIFT)) & VSPA_PARAM_0_xtrig_in_count_MASK)
#define VSPA_PARAM_0_xtrig_out_count_MASK        (0xF000000U)
#define VSPA_PARAM_0_xtrig_out_count_SHIFT       (24U)
#define VSPA_PARAM_0_xtrig_out_count_WIDTH       (4U)
#define VSPA_PARAM_0_xtrig_out_count(x)          (((uint32_t)(((uint32_t)(x)) << VSPA_PARAM_0_xtrig_out_count_SHIFT)) & VSPA_PARAM_0_xtrig_out_count_MASK)
/*! @} */

/*! @name PIDR4 - Peripheral ID4 register */
/*! @{ */
#define VSPA_PIDR4_des_2_MASK                    (0xFU)
#define VSPA_PIDR4_des_2_SHIFT                   (0U)
#define VSPA_PIDR4_des_2_WIDTH                   (4U)
#define VSPA_PIDR4_des_2(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR4_des_2_SHIFT)) & VSPA_PIDR4_des_2_MASK)
#define VSPA_PIDR4_size_MASK                     (0xF0U)
#define VSPA_PIDR4_size_SHIFT                    (4U)
#define VSPA_PIDR4_size_WIDTH                    (4U)
#define VSPA_PIDR4_size(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR4_size_SHIFT)) & VSPA_PIDR4_size_MASK)
#define VSPA_PIDR4_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR4_raz_SHIFT                     (8U)
#define VSPA_PIDR4_raz_WIDTH                     (24U)
#define VSPA_PIDR4_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR4_raz_SHIFT)) & VSPA_PIDR4_raz_MASK)
/*! @} */

/*! @name PIDR5 - Peripheral ID5 register */
/*! @{ */
#define VSPA_PIDR5_raz_MASK                      (0xFFFFFFFFU)
#define VSPA_PIDR5_raz_SHIFT                     (0U)
#define VSPA_PIDR5_raz_WIDTH                     (32U)
#define VSPA_PIDR5_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR5_raz_SHIFT)) & VSPA_PIDR5_raz_MASK)
/*! @} */

/*! @name PIDR6 - Peripheral ID6 register */
/*! @{ */
#define VSPA_PIDR6_raz_MASK                      (0xFFFFFFFFU)
#define VSPA_PIDR6_raz_SHIFT                     (0U)
#define VSPA_PIDR6_raz_WIDTH                     (32U)
#define VSPA_PIDR6_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR6_raz_SHIFT)) & VSPA_PIDR6_raz_MASK)
/*! @} */

/*! @name PIDR7 - Peripheral ID7 register */
/*! @{ */
#define VSPA_PIDR7_raz_MASK                      (0xFFFFFFFFU)
#define VSPA_PIDR7_raz_SHIFT                     (0U)
#define VSPA_PIDR7_raz_WIDTH                     (32U)
#define VSPA_PIDR7_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR7_raz_SHIFT)) & VSPA_PIDR7_raz_MASK)
/*! @} */

/*! @name PIDR0 - Peripheral ID0 register */
/*! @{ */
#define VSPA_PIDR0_part_0_MASK                   (0xFFU)
#define VSPA_PIDR0_part_0_SHIFT                  (0U)
#define VSPA_PIDR0_part_0_WIDTH                  (8U)
#define VSPA_PIDR0_part_0(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR0_part_0_SHIFT)) & VSPA_PIDR0_part_0_MASK)
#define VSPA_PIDR0_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR0_raz_SHIFT                     (8U)
#define VSPA_PIDR0_raz_WIDTH                     (24U)
#define VSPA_PIDR0_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR0_raz_SHIFT)) & VSPA_PIDR0_raz_MASK)
/*! @} */

/*! @name PIDR1 - Peripheral ID1 register */
/*! @{ */
#define VSPA_PIDR1_part_1_MASK                   (0xFU)
#define VSPA_PIDR1_part_1_SHIFT                  (0U)
#define VSPA_PIDR1_part_1_WIDTH                  (4U)
#define VSPA_PIDR1_part_1(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR1_part_1_SHIFT)) & VSPA_PIDR1_part_1_MASK)
#define VSPA_PIDR1_des_0_MASK                    (0xF0U)
#define VSPA_PIDR1_des_0_SHIFT                   (4U)
#define VSPA_PIDR1_des_0_WIDTH                   (4U)
#define VSPA_PIDR1_des_0(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR1_des_0_SHIFT)) & VSPA_PIDR1_des_0_MASK)
#define VSPA_PIDR1_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR1_raz_SHIFT                     (8U)
#define VSPA_PIDR1_raz_WIDTH                     (24U)
#define VSPA_PIDR1_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR1_raz_SHIFT)) & VSPA_PIDR1_raz_MASK)
/*! @} */

/*! @name PIDR2 - Peripheral ID2 register */
/*! @{ */
#define VSPA_PIDR2_des_1_MASK                    (0x7U)
#define VSPA_PIDR2_des_1_SHIFT                   (0U)
#define VSPA_PIDR2_des_1_WIDTH                   (3U)
#define VSPA_PIDR2_des_1(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR2_des_1_SHIFT)) & VSPA_PIDR2_des_1_MASK)
#define VSPA_PIDR2_jedec_MASK                    (0x8U)
#define VSPA_PIDR2_jedec_SHIFT                   (3U)
#define VSPA_PIDR2_jedec_WIDTH                   (1U)
#define VSPA_PIDR2_jedec(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR2_jedec_SHIFT)) & VSPA_PIDR2_jedec_MASK)
#define VSPA_PIDR2_revision_MASK                 (0xF0U)
#define VSPA_PIDR2_revision_SHIFT                (4U)
#define VSPA_PIDR2_revision_WIDTH                (4U)
#define VSPA_PIDR2_revision(x)                   (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR2_revision_SHIFT)) & VSPA_PIDR2_revision_MASK)
#define VSPA_PIDR2_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR2_raz_SHIFT                     (8U)
#define VSPA_PIDR2_raz_WIDTH                     (24U)
#define VSPA_PIDR2_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR2_raz_SHIFT)) & VSPA_PIDR2_raz_MASK)
/*! @} */

/*! @name PIDR3 - Peripheral ID3 register */
/*! @{ */
#define VSPA_PIDR3_cmod_MASK                     (0xFU)
#define VSPA_PIDR3_cmod_SHIFT                    (0U)
#define VSPA_PIDR3_cmod_WIDTH                    (4U)
#define VSPA_PIDR3_cmod(x)                       (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR3_cmod_SHIFT)) & VSPA_PIDR3_cmod_MASK)
#define VSPA_PIDR3_revand_MASK                   (0xF0U)
#define VSPA_PIDR3_revand_SHIFT                  (4U)
#define VSPA_PIDR3_revand_WIDTH                  (4U)
#define VSPA_PIDR3_revand(x)                     (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR3_revand_SHIFT)) & VSPA_PIDR3_revand_MASK)
#define VSPA_PIDR3_raz_MASK                      (0xFFFFFF00U)
#define VSPA_PIDR3_raz_SHIFT                     (8U)
#define VSPA_PIDR3_raz_WIDTH                     (24U)
#define VSPA_PIDR3_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_PIDR3_raz_SHIFT)) & VSPA_PIDR3_raz_MASK)
/*! @} */

/*! @name CIDR0 - Component ID0 register */
/*! @{ */
#define VSPA_CIDR0_prmbl_0_MASK                  (0xFFU)
#define VSPA_CIDR0_prmbl_0_SHIFT                 (0U)
#define VSPA_CIDR0_prmbl_0_WIDTH                 (8U)
#define VSPA_CIDR0_prmbl_0(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR0_prmbl_0_SHIFT)) & VSPA_CIDR0_prmbl_0_MASK)
#define VSPA_CIDR0_raz_MASK                      (0xFFFFFF00U)
#define VSPA_CIDR0_raz_SHIFT                     (8U)
#define VSPA_CIDR0_raz_WIDTH                     (24U)
#define VSPA_CIDR0_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR0_raz_SHIFT)) & VSPA_CIDR0_raz_MASK)
/*! @} */

/*! @name CIDR1 - Component ID1 register */
/*! @{ */
#define VSPA_CIDR1_prmbl_1_MASK                  (0xFU)
#define VSPA_CIDR1_prmbl_1_SHIFT                 (0U)
#define VSPA_CIDR1_prmbl_1_WIDTH                 (4U)
#define VSPA_CIDR1_prmbl_1(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR1_prmbl_1_SHIFT)) & VSPA_CIDR1_prmbl_1_MASK)
#define VSPA_CIDR1_class_MASK                    (0xF0U)
#define VSPA_CIDR1_class_SHIFT                   (4U)
#define VSPA_CIDR1_class_WIDTH                   (4U)
#define VSPA_CIDR1_class(x)                      (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR1_class_SHIFT)) & VSPA_CIDR1_class_MASK)
#define VSPA_CIDR1_raz_MASK                      (0xFFFFFF00U)
#define VSPA_CIDR1_raz_SHIFT                     (8U)
#define VSPA_CIDR1_raz_WIDTH                     (24U)
#define VSPA_CIDR1_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR1_raz_SHIFT)) & VSPA_CIDR1_raz_MASK)
/*! @} */

/*! @name CIDR2 - Component ID2 register */
/*! @{ */
#define VSPA_CIDR2_prmbl_2_MASK                  (0xFFU)
#define VSPA_CIDR2_prmbl_2_SHIFT                 (0U)
#define VSPA_CIDR2_prmbl_2_WIDTH                 (8U)
#define VSPA_CIDR2_prmbl_2(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR2_prmbl_2_SHIFT)) & VSPA_CIDR2_prmbl_2_MASK)
#define VSPA_CIDR2_raz_MASK                      (0xFFFFFF00U)
#define VSPA_CIDR2_raz_SHIFT                     (8U)
#define VSPA_CIDR2_raz_WIDTH                     (24U)
#define VSPA_CIDR2_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR2_raz_SHIFT)) & VSPA_CIDR2_raz_MASK)
/*! @} */

/*! @name CIDR3 - Component ID3 register */
/*! @{ */
#define VSPA_CIDR3_prmbl_3_MASK                  (0xFFU)
#define VSPA_CIDR3_prmbl_3_SHIFT                 (0U)
#define VSPA_CIDR3_prmbl_3_WIDTH                 (8U)
#define VSPA_CIDR3_prmbl_3(x)                    (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR3_prmbl_3_SHIFT)) & VSPA_CIDR3_prmbl_3_MASK)
#define VSPA_CIDR3_raz_MASK                      (0xFFFFFF00U)
#define VSPA_CIDR3_raz_SHIFT                     (8U)
#define VSPA_CIDR3_raz_WIDTH                     (24U)
#define VSPA_CIDR3_raz(x)                        (((uint32_t)(((uint32_t)(x)) << VSPA_CIDR3_raz_SHIFT)) & VSPA_CIDR3_raz_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_H_) */
