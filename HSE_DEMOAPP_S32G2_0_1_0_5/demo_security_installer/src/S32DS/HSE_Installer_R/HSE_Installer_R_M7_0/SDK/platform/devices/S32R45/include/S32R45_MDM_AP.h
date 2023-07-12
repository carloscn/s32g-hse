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
 * @file S32R45_MDM_AP.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_MDM_AP
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
#if !defined(S32R45_MDM_AP_H_)  /* Check if memory map has not been already included */
#define S32R45_MDM_AP_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- MDM_AP Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MDM_AP_Peripheral_Access_Layer MDM_AP Peripheral Access Layer
 * @{
 */

/** MDM_AP - Register Layout Typedef */
typedef struct {
  __I  uint32_t STATUS;                            /**< MDM_AP status, offset: 0x0 */
  __IO uint32_t CONTROL;                           /**< MDM_AP control, offset: 0x4 */
  uint8_t RESERVED_0[56];
  __I  uint32_t STATUS2;                           /**< MDM_AP status 2, offset: 0x40 */
  uint8_t RESERVED_1[44];
  __IO uint32_t CORTEX_A53_A0_IP_DBG;              /**< Cortex-A53 A0 debug, offset: 0x70 */
  __IO uint32_t CONTROL2;                          /**< MDM_AP control 2, offset: 0x74 */
  __IO uint32_t CA53_A1_IP_DBG;                    /**< Cortex-A53 A1 debug, offset: 0x78 */
  uint8_t RESERVED_2[4];
  __IO uint32_t CORTEX_A53_B0_IP_DBG;              /**< Cortex-A53 B0 debug, offset: 0x80 */
  uint8_t RESERVED_3[4];
  __IO uint32_t CORTEX_A53_B1_IP_DBG;              /**< Cortex-A53 B1 debug, offset: 0x88 */
  uint8_t RESERVED_4[4];
  __IO uint32_t CORTEX_M7_0_IP_DBG;                /**< Cortex M7_0 debug, offset: 0x90 */
  uint8_t RESERVED_5[4];
  __IO uint32_t CORTEX_M7_1_IP_DBG;                /**< Cortex M7_1 debug, offset: 0x98 */
  uint8_t RESERVED_6[4];
  __IO uint32_t CORTEX_M7_2_IP_DBG;                /**< Cortex M7_2 debug, offset: 0xA0 */
  uint8_t RESERVED_7[28];
  __IO uint32_t DAP_EN_CTRL;                       /**< DAP enable control, offset: 0xC0 */
} MDM_AP_Type, *MDM_AP_MemMapPtr;

/** Number of instances of the MDM_AP module. */
#define MDM_AP_INSTANCE_COUNT                    (1u)

/* MDM_AP - Peripheral instance base addresses */
/** Peripheral MDM_AP base address */
#define MDM_AP_BASE                              (0x51D00600u)
/** Peripheral MDM_AP base pointer */
#define MDM_AP                                   ((MDM_AP_Type *)MDM_AP_BASE)
/** Array initializer of MDM_AP peripheral base addresses */
#define MDM_AP_BASE_ADDRS                        { MDM_AP_BASE }
/** Array initializer of MDM_AP peripheral base pointers */
#define MDM_AP_BASE_PTRS                         { MDM_AP }

/* ----------------------------------------------------------------------------
   -- MDM_AP Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup MDM_AP_Register_Masks MDM_AP Register Masks
 * @{
 */

/*! @name STATUS - MDM_AP status */
/*! @{ */
#define MDM_AP_STATUS_SYSTEM_RESET_MASK          (0x4U)
#define MDM_AP_STATUS_SYSTEM_RESET_SHIFT         (2U)
#define MDM_AP_STATUS_SYSTEM_RESET_WIDTH         (1U)
#define MDM_AP_STATUS_SYSTEM_RESET(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_SYSTEM_RESET_SHIFT)) & MDM_AP_STATUS_SYSTEM_RESET_MASK)
#define MDM_AP_STATUS_READY_FOR_DBG_MASK         (0x20U)
#define MDM_AP_STATUS_READY_FOR_DBG_SHIFT        (5U)
#define MDM_AP_STATUS_READY_FOR_DBG_WIDTH        (1U)
#define MDM_AP_STATUS_READY_FOR_DBG(x)           (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_READY_FOR_DBG_SHIFT)) & MDM_AP_STATUS_READY_FOR_DBG_MASK)
#define MDM_AP_STATUS_CSYSPWRUPREQ_MASK          (0x40U)
#define MDM_AP_STATUS_CSYSPWRUPREQ_SHIFT         (6U)
#define MDM_AP_STATUS_CSYSPWRUPREQ_WIDTH         (1U)
#define MDM_AP_STATUS_CSYSPWRUPREQ(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CSYSPWRUPREQ_SHIFT)) & MDM_AP_STATUS_CSYSPWRUPREQ_MASK)
#define MDM_AP_STATUS_CDBGPWRUPREQ_MASK          (0x80U)
#define MDM_AP_STATUS_CDBGPWRUPREQ_SHIFT         (7U)
#define MDM_AP_STATUS_CDBGPWRUPREQ_WIDTH         (1U)
#define MDM_AP_STATUS_CDBGPWRUPREQ(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CDBGPWRUPREQ_SHIFT)) & MDM_AP_STATUS_CDBGPWRUPREQ_MASK)
#define MDM_AP_STATUS_JTAG_ACTIVE_MASK           (0x100U)
#define MDM_AP_STATUS_JTAG_ACTIVE_SHIFT          (8U)
#define MDM_AP_STATUS_JTAG_ACTIVE_WIDTH          (1U)
#define MDM_AP_STATUS_JTAG_ACTIVE(x)             (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_JTAG_ACTIVE_SHIFT)) & MDM_AP_STATUS_JTAG_ACTIVE_MASK)
#define MDM_AP_STATUS_CM7_0_HALTED_MASK          (0x1000U)
#define MDM_AP_STATUS_CM7_0_HALTED_SHIFT         (12U)
#define MDM_AP_STATUS_CM7_0_HALTED_WIDTH         (1U)
#define MDM_AP_STATUS_CM7_0_HALTED(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CM7_0_HALTED_SHIFT)) & MDM_AP_STATUS_CM7_0_HALTED_MASK)
#define MDM_AP_STATUS_CM7_1_HALTED_MASK          (0x2000U)
#define MDM_AP_STATUS_CM7_1_HALTED_SHIFT         (13U)
#define MDM_AP_STATUS_CM7_1_HALTED_WIDTH         (1U)
#define MDM_AP_STATUS_CM7_1_HALTED(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CM7_1_HALTED_SHIFT)) & MDM_AP_STATUS_CM7_1_HALTED_MASK)
#define MDM_AP_STATUS_CM7_2_HALTED_MASK          (0x4000U)
#define MDM_AP_STATUS_CM7_2_HALTED_SHIFT         (14U)
#define MDM_AP_STATUS_CM7_2_HALTED_WIDTH         (1U)
#define MDM_AP_STATUS_CM7_2_HALTED(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CM7_2_HALTED_SHIFT)) & MDM_AP_STATUS_CM7_2_HALTED_MASK)
#define MDM_AP_STATUS_CM7_0_SLEEPDEEP_MASK       (0x10000U)
#define MDM_AP_STATUS_CM7_0_SLEEPDEEP_SHIFT      (16U)
#define MDM_AP_STATUS_CM7_0_SLEEPDEEP_WIDTH      (1U)
#define MDM_AP_STATUS_CM7_0_SLEEPDEEP(x)         (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CM7_0_SLEEPDEEP_SHIFT)) & MDM_AP_STATUS_CM7_0_SLEEPDEEP_MASK)
#define MDM_AP_STATUS_CM7_1_SLEEPDEEP_MASK       (0x20000U)
#define MDM_AP_STATUS_CM7_1_SLEEPDEEP_SHIFT      (17U)
#define MDM_AP_STATUS_CM7_1_SLEEPDEEP_WIDTH      (1U)
#define MDM_AP_STATUS_CM7_1_SLEEPDEEP(x)         (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CM7_1_SLEEPDEEP_SHIFT)) & MDM_AP_STATUS_CM7_1_SLEEPDEEP_MASK)
#define MDM_AP_STATUS_CM7_2_SLEEPDEEP_MASK       (0x40000U)
#define MDM_AP_STATUS_CM7_2_SLEEPDEEP_SHIFT      (18U)
#define MDM_AP_STATUS_CM7_2_SLEEPDEEP_WIDTH      (1U)
#define MDM_AP_STATUS_CM7_2_SLEEPDEEP(x)         (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CM7_2_SLEEPDEEP_SHIFT)) & MDM_AP_STATUS_CM7_2_SLEEPDEEP_MASK)
#define MDM_AP_STATUS_CM7_0_SLEEPING_MASK        (0x100000U)
#define MDM_AP_STATUS_CM7_0_SLEEPING_SHIFT       (20U)
#define MDM_AP_STATUS_CM7_0_SLEEPING_WIDTH       (1U)
#define MDM_AP_STATUS_CM7_0_SLEEPING(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CM7_0_SLEEPING_SHIFT)) & MDM_AP_STATUS_CM7_0_SLEEPING_MASK)
#define MDM_AP_STATUS_CM7_1_SLEEPING_MASK        (0x200000U)
#define MDM_AP_STATUS_CM7_1_SLEEPING_SHIFT       (21U)
#define MDM_AP_STATUS_CM7_1_SLEEPING_WIDTH       (1U)
#define MDM_AP_STATUS_CM7_1_SLEEPING(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CM7_1_SLEEPING_SHIFT)) & MDM_AP_STATUS_CM7_1_SLEEPING_MASK)
#define MDM_AP_STATUS_CM7_2_SLEEPING_MASK        (0x400000U)
#define MDM_AP_STATUS_CM7_2_SLEEPING_SHIFT       (22U)
#define MDM_AP_STATUS_CM7_2_SLEEPING_WIDTH       (1U)
#define MDM_AP_STATUS_CM7_2_SLEEPING(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_CM7_2_SLEEPING_SHIFT)) & MDM_AP_STATUS_CM7_2_SLEEPING_MASK)
#define MDM_AP_STATUS_M7_0_DBGRSTRTD_MASK        (0x10000000U)
#define MDM_AP_STATUS_M7_0_DBGRSTRTD_SHIFT       (28U)
#define MDM_AP_STATUS_M7_0_DBGRSTRTD_WIDTH       (1U)
#define MDM_AP_STATUS_M7_0_DBGRSTRTD(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_M7_0_DBGRSTRTD_SHIFT)) & MDM_AP_STATUS_M7_0_DBGRSTRTD_MASK)
#define MDM_AP_STATUS_M7_1_DBGRSTRTD_MASK        (0x20000000U)
#define MDM_AP_STATUS_M7_1_DBGRSTRTD_SHIFT       (29U)
#define MDM_AP_STATUS_M7_1_DBGRSTRTD_WIDTH       (1U)
#define MDM_AP_STATUS_M7_1_DBGRSTRTD(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_M7_1_DBGRSTRTD_SHIFT)) & MDM_AP_STATUS_M7_1_DBGRSTRTD_MASK)
#define MDM_AP_STATUS_M7_2_DBGRSTRTD_MASK        (0x40000000U)
#define MDM_AP_STATUS_M7_2_DBGRSTRTD_SHIFT       (30U)
#define MDM_AP_STATUS_M7_2_DBGRSTRTD_WIDTH       (1U)
#define MDM_AP_STATUS_M7_2_DBGRSTRTD(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS_M7_2_DBGRSTRTD_SHIFT)) & MDM_AP_STATUS_M7_2_DBGRSTRTD_MASK)
/*! @} */

/*! @name CONTROL - MDM_AP control */
/*! @{ */
#define MDM_AP_CONTROL_DBG_SETUP_DONE_MASK       (0x8U)
#define MDM_AP_CONTROL_DBG_SETUP_DONE_SHIFT      (3U)
#define MDM_AP_CONTROL_DBG_SETUP_DONE_WIDTH      (1U)
#define MDM_AP_CONTROL_DBG_SETUP_DONE(x)         (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_DBG_SETUP_DONE_SHIFT)) & MDM_AP_CONTROL_DBG_SETUP_DONE_MASK)
#define MDM_AP_CONTROL_SYSRESETREQ_MASK          (0x10U)
#define MDM_AP_CONTROL_SYSRESETREQ_SHIFT         (4U)
#define MDM_AP_CONTROL_SYSRESETREQ_WIDTH         (1U)
#define MDM_AP_CONTROL_SYSRESETREQ(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_SYSRESETREQ_SHIFT)) & MDM_AP_CONTROL_SYSRESETREQ_MASK)
#define MDM_AP_CONTROL_SYSFUNCRST_MASK           (0x20U)
#define MDM_AP_CONTROL_SYSFUNCRST_SHIFT          (5U)
#define MDM_AP_CONTROL_SYSFUNCRST_WIDTH          (1U)
#define MDM_AP_CONTROL_SYSFUNCRST(x)             (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_SYSFUNCRST_SHIFT)) & MDM_AP_CONTROL_SYSFUNCRST_MASK)
#define MDM_AP_CONTROL_ETR_HANDSHAKE_0_MASK      (0x40U)
#define MDM_AP_CONTROL_ETR_HANDSHAKE_0_SHIFT     (6U)
#define MDM_AP_CONTROL_ETR_HANDSHAKE_0_WIDTH     (1U)
#define MDM_AP_CONTROL_ETR_HANDSHAKE_0(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_ETR_HANDSHAKE_0_SHIFT)) & MDM_AP_CONTROL_ETR_HANDSHAKE_0_MASK)
#define MDM_AP_CONTROL_ETR_HANDSHAKE_1_MASK      (0x80U)
#define MDM_AP_CONTROL_ETR_HANDSHAKE_1_SHIFT     (7U)
#define MDM_AP_CONTROL_ETR_HANDSHAKE_1_WIDTH     (1U)
#define MDM_AP_CONTROL_ETR_HANDSHAKE_1(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_ETR_HANDSHAKE_1_SHIFT)) & MDM_AP_CONTROL_ETR_HANDSHAKE_1_MASK)
#define MDM_AP_CONTROL_CM7_0_EDBGREQ_MASK        (0x100U)
#define MDM_AP_CONTROL_CM7_0_EDBGREQ_SHIFT       (8U)
#define MDM_AP_CONTROL_CM7_0_EDBGREQ_WIDTH       (1U)
#define MDM_AP_CONTROL_CM7_0_EDBGREQ(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_CM7_0_EDBGREQ_SHIFT)) & MDM_AP_CONTROL_CM7_0_EDBGREQ_MASK)
#define MDM_AP_CONTROL_CM7_1_EDBGREQ_MASK        (0x200U)
#define MDM_AP_CONTROL_CM7_1_EDBGREQ_SHIFT       (9U)
#define MDM_AP_CONTROL_CM7_1_EDBGREQ_WIDTH       (1U)
#define MDM_AP_CONTROL_CM7_1_EDBGREQ(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_CM7_1_EDBGREQ_SHIFT)) & MDM_AP_CONTROL_CM7_1_EDBGREQ_MASK)
#define MDM_AP_CONTROL_CM7_2_EDBGREQ_MASK        (0x400U)
#define MDM_AP_CONTROL_CM7_2_EDBGREQ_SHIFT       (10U)
#define MDM_AP_CONTROL_CM7_2_EDBGREQ_WIDTH       (1U)
#define MDM_AP_CONTROL_CM7_2_EDBGREQ(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_CM7_2_EDBGREQ_SHIFT)) & MDM_AP_CONTROL_CM7_2_EDBGREQ_MASK)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM70_MASK (0x1000U)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM70_SHIFT (12U)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM70_WIDTH (1U)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM70(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM70_SHIFT)) & MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM70_MASK)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM71_MASK (0x2000U)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM71_SHIFT (13U)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM71_WIDTH (1U)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM71(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM71_SHIFT)) & MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM71_MASK)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM72_MASK (0x4000U)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM72_SHIFT (14U)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM72_WIDTH (1U)
#define MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM72(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM72_SHIFT)) & MDM_AP_CONTROL_MSK_LOCKSTEP_ALARM_CM72_MASK)
#define MDM_AP_CONTROL_DIS_POR_WDOG_MSK_MASK     (0x8000U)
#define MDM_AP_CONTROL_DIS_POR_WDOG_MSK_SHIFT    (15U)
#define MDM_AP_CONTROL_DIS_POR_WDOG_MSK_WIDTH    (1U)
#define MDM_AP_CONTROL_DIS_POR_WDOG_MSK(x)       (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_DIS_POR_WDOG_MSK_SHIFT)) & MDM_AP_CONTROL_DIS_POR_WDOG_MSK_MASK)
#define MDM_AP_CONTROL_CA53_A0_EDBGREQ_MASK      (0x10000U)
#define MDM_AP_CONTROL_CA53_A0_EDBGREQ_SHIFT     (16U)
#define MDM_AP_CONTROL_CA53_A0_EDBGREQ_WIDTH     (1U)
#define MDM_AP_CONTROL_CA53_A0_EDBGREQ(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_CA53_A0_EDBGREQ_SHIFT)) & MDM_AP_CONTROL_CA53_A0_EDBGREQ_MASK)
#define MDM_AP_CONTROL_CA53_A1_EDBGREQ_MASK      (0x20000U)
#define MDM_AP_CONTROL_CA53_A1_EDBGREQ_SHIFT     (17U)
#define MDM_AP_CONTROL_CA53_A1_EDBGREQ_WIDTH     (1U)
#define MDM_AP_CONTROL_CA53_A1_EDBGREQ(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_CA53_A1_EDBGREQ_SHIFT)) & MDM_AP_CONTROL_CA53_A1_EDBGREQ_MASK)
#define MDM_AP_CONTROL_CA53_B0_EDBGREQ_MASK      (0x40000U)
#define MDM_AP_CONTROL_CA53_B0_EDBGREQ_SHIFT     (18U)
#define MDM_AP_CONTROL_CA53_B0_EDBGREQ_WIDTH     (1U)
#define MDM_AP_CONTROL_CA53_B0_EDBGREQ(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_CA53_B0_EDBGREQ_SHIFT)) & MDM_AP_CONTROL_CA53_B0_EDBGREQ_MASK)
#define MDM_AP_CONTROL_CA53_B1_EDBGREQ_MASK      (0x80000U)
#define MDM_AP_CONTROL_CA53_B1_EDBGREQ_SHIFT     (19U)
#define MDM_AP_CONTROL_CA53_B1_EDBGREQ_WIDTH     (1U)
#define MDM_AP_CONTROL_CA53_B1_EDBGREQ(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_CA53_B1_EDBGREQ_SHIFT)) & MDM_AP_CONTROL_CA53_B1_EDBGREQ_MASK)
#define MDM_AP_CONTROL_TPIU_OVERRIDE_MASK        (0x100000U)
#define MDM_AP_CONTROL_TPIU_OVERRIDE_SHIFT       (20U)
#define MDM_AP_CONTROL_TPIU_OVERRIDE_WIDTH       (1U)
#define MDM_AP_CONTROL_TPIU_OVERRIDE(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_TPIU_OVERRIDE_SHIFT)) & MDM_AP_CONTROL_TPIU_OVERRIDE_MASK)
#define MDM_AP_CONTROL_ETR_OVERRIDE_MASK         (0x200000U)
#define MDM_AP_CONTROL_ETR_OVERRIDE_SHIFT        (21U)
#define MDM_AP_CONTROL_ETR_OVERRIDE_WIDTH        (1U)
#define MDM_AP_CONTROL_ETR_OVERRIDE(x)           (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_ETR_OVERRIDE_SHIFT)) & MDM_AP_CONTROL_ETR_OVERRIDE_MASK)
#define MDM_AP_CONTROL_MSK_DBG_FAULT_MASK        (0x800000U)
#define MDM_AP_CONTROL_MSK_DBG_FAULT_SHIFT       (23U)
#define MDM_AP_CONTROL_MSK_DBG_FAULT_WIDTH       (1U)
#define MDM_AP_CONTROL_MSK_DBG_FAULT(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_MSK_DBG_FAULT_SHIFT)) & MDM_AP_CONTROL_MSK_DBG_FAULT_MASK)
#define MDM_AP_CONTROL_MSK_FCCU_RST_TRIGGER_MASK (0x1000000U)
#define MDM_AP_CONTROL_MSK_FCCU_RST_TRIGGER_SHIFT (24U)
#define MDM_AP_CONTROL_MSK_FCCU_RST_TRIGGER_WIDTH (1U)
#define MDM_AP_CONTROL_MSK_FCCU_RST_TRIGGER(x)   (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_MSK_FCCU_RST_TRIGGER_SHIFT)) & MDM_AP_CONTROL_MSK_FCCU_RST_TRIGGER_MASK)
#define MDM_AP_CONTROL_M7_0_DBGRSTRT_MASK        (0x10000000U)
#define MDM_AP_CONTROL_M7_0_DBGRSTRT_SHIFT       (28U)
#define MDM_AP_CONTROL_M7_0_DBGRSTRT_WIDTH       (1U)
#define MDM_AP_CONTROL_M7_0_DBGRSTRT(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_M7_0_DBGRSTRT_SHIFT)) & MDM_AP_CONTROL_M7_0_DBGRSTRT_MASK)
#define MDM_AP_CONTROL_M7_1_DBGRSTRT_MASK        (0x20000000U)
#define MDM_AP_CONTROL_M7_1_DBGRSTRT_SHIFT       (29U)
#define MDM_AP_CONTROL_M7_1_DBGRSTRT_WIDTH       (1U)
#define MDM_AP_CONTROL_M7_1_DBGRSTRT(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_M7_1_DBGRSTRT_SHIFT)) & MDM_AP_CONTROL_M7_1_DBGRSTRT_MASK)
#define MDM_AP_CONTROL_M7_2_DBGRSTRT_MASK        (0x40000000U)
#define MDM_AP_CONTROL_M7_2_DBGRSTRT_SHIFT       (30U)
#define MDM_AP_CONTROL_M7_2_DBGRSTRT_WIDTH       (1U)
#define MDM_AP_CONTROL_M7_2_DBGRSTRT(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL_M7_2_DBGRSTRT_SHIFT)) & MDM_AP_CONTROL_M7_2_DBGRSTRT_MASK)
/*! @} */

/*! @name STATUS2 - MDM_AP status 2 */
/*! @{ */
#define MDM_AP_STATUS2_CA53_A0_DBGMODE_MASK      (0x1U)
#define MDM_AP_STATUS2_CA53_A0_DBGMODE_SHIFT     (0U)
#define MDM_AP_STATUS2_CA53_A0_DBGMODE_WIDTH     (1U)
#define MDM_AP_STATUS2_CA53_A0_DBGMODE(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_A0_DBGMODE_SHIFT)) & MDM_AP_STATUS2_CA53_A0_DBGMODE_MASK)
#define MDM_AP_STATUS2_CA53_A1_DBGMODE_MASK      (0x2U)
#define MDM_AP_STATUS2_CA53_A1_DBGMODE_SHIFT     (1U)
#define MDM_AP_STATUS2_CA53_A1_DBGMODE_WIDTH     (1U)
#define MDM_AP_STATUS2_CA53_A1_DBGMODE(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_A1_DBGMODE_SHIFT)) & MDM_AP_STATUS2_CA53_A1_DBGMODE_MASK)
#define MDM_AP_STATUS2_CA53_B0_DBGMODE_MASK      (0x4U)
#define MDM_AP_STATUS2_CA53_B0_DBGMODE_SHIFT     (2U)
#define MDM_AP_STATUS2_CA53_B0_DBGMODE_WIDTH     (1U)
#define MDM_AP_STATUS2_CA53_B0_DBGMODE(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_B0_DBGMODE_SHIFT)) & MDM_AP_STATUS2_CA53_B0_DBGMODE_MASK)
#define MDM_AP_STATUS2_CA53_B1_DBGMODE_MASK      (0x8U)
#define MDM_AP_STATUS2_CA53_B1_DBGMODE_SHIFT     (3U)
#define MDM_AP_STATUS2_CA53_B1_DBGMODE_WIDTH     (1U)
#define MDM_AP_STATUS2_CA53_B1_DBGMODE(x)        (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_B1_DBGMODE_SHIFT)) & MDM_AP_STATUS2_CA53_B1_DBGMODE_MASK)
#define MDM_AP_STATUS2_CA53_A0_WFI_MASK          (0x10U)
#define MDM_AP_STATUS2_CA53_A0_WFI_SHIFT         (4U)
#define MDM_AP_STATUS2_CA53_A0_WFI_WIDTH         (1U)
#define MDM_AP_STATUS2_CA53_A0_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_A0_WFI_SHIFT)) & MDM_AP_STATUS2_CA53_A0_WFI_MASK)
#define MDM_AP_STATUS2_CA53_A1_WFI_MASK          (0x20U)
#define MDM_AP_STATUS2_CA53_A1_WFI_SHIFT         (5U)
#define MDM_AP_STATUS2_CA53_A1_WFI_WIDTH         (1U)
#define MDM_AP_STATUS2_CA53_A1_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_A1_WFI_SHIFT)) & MDM_AP_STATUS2_CA53_A1_WFI_MASK)
#define MDM_AP_STATUS2_CA53_B0_WFI_MASK          (0x40U)
#define MDM_AP_STATUS2_CA53_B0_WFI_SHIFT         (6U)
#define MDM_AP_STATUS2_CA53_B0_WFI_WIDTH         (1U)
#define MDM_AP_STATUS2_CA53_B0_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_B0_WFI_SHIFT)) & MDM_AP_STATUS2_CA53_B0_WFI_MASK)
#define MDM_AP_STATUS2_CA53_B1_WFI_MASK          (0x80U)
#define MDM_AP_STATUS2_CA53_B1_WFI_SHIFT         (7U)
#define MDM_AP_STATUS2_CA53_B1_WFI_WIDTH         (1U)
#define MDM_AP_STATUS2_CA53_B1_WFI(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_B1_WFI_SHIFT)) & MDM_AP_STATUS2_CA53_B1_WFI_MASK)
#define MDM_AP_STATUS2_CA53_A0_WFE_MASK          (0x100U)
#define MDM_AP_STATUS2_CA53_A0_WFE_SHIFT         (8U)
#define MDM_AP_STATUS2_CA53_A0_WFE_WIDTH         (1U)
#define MDM_AP_STATUS2_CA53_A0_WFE(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_A0_WFE_SHIFT)) & MDM_AP_STATUS2_CA53_A0_WFE_MASK)
#define MDM_AP_STATUS2_CA53_A1_WFE_MASK          (0x200U)
#define MDM_AP_STATUS2_CA53_A1_WFE_SHIFT         (9U)
#define MDM_AP_STATUS2_CA53_A1_WFE_WIDTH         (1U)
#define MDM_AP_STATUS2_CA53_A1_WFE(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_A1_WFE_SHIFT)) & MDM_AP_STATUS2_CA53_A1_WFE_MASK)
#define MDM_AP_STATUS2_CA53_B0_WFE_MASK          (0x400U)
#define MDM_AP_STATUS2_CA53_B0_WFE_SHIFT         (10U)
#define MDM_AP_STATUS2_CA53_B0_WFE_WIDTH         (1U)
#define MDM_AP_STATUS2_CA53_B0_WFE(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_B0_WFE_SHIFT)) & MDM_AP_STATUS2_CA53_B0_WFE_MASK)
#define MDM_AP_STATUS2_CA53_B1_WFE_MASK          (0x800U)
#define MDM_AP_STATUS2_CA53_B1_WFE_SHIFT         (11U)
#define MDM_AP_STATUS2_CA53_B1_WFE_WIDTH         (1U)
#define MDM_AP_STATUS2_CA53_B1_WFE(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_CA53_B1_WFE_SHIFT)) & MDM_AP_STATUS2_CA53_B1_WFE_MASK)
#define MDM_AP_STATUS2_LAX_0_HALT_ACK_MASK       (0x10000U)
#define MDM_AP_STATUS2_LAX_0_HALT_ACK_SHIFT      (16U)
#define MDM_AP_STATUS2_LAX_0_HALT_ACK_WIDTH      (1U)
#define MDM_AP_STATUS2_LAX_0_HALT_ACK(x)         (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_LAX_0_HALT_ACK_SHIFT)) & MDM_AP_STATUS2_LAX_0_HALT_ACK_MASK)
#define MDM_AP_STATUS2_LAX_1_HALT_ACK_MASK       (0x20000U)
#define MDM_AP_STATUS2_LAX_1_HALT_ACK_SHIFT      (17U)
#define MDM_AP_STATUS2_LAX_1_HALT_ACK_WIDTH      (1U)
#define MDM_AP_STATUS2_LAX_1_HALT_ACK(x)         (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_LAX_1_HALT_ACK_SHIFT)) & MDM_AP_STATUS2_LAX_1_HALT_ACK_MASK)
#define MDM_AP_STATUS2_DSP_XOCDMODE_MASK         (0x100000U)
#define MDM_AP_STATUS2_DSP_XOCDMODE_SHIFT        (20U)
#define MDM_AP_STATUS2_DSP_XOCDMODE_WIDTH        (1U)
#define MDM_AP_STATUS2_DSP_XOCDMODE(x)           (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_DSP_XOCDMODE_SHIFT)) & MDM_AP_STATUS2_DSP_XOCDMODE_MASK)
#define MDM_AP_STATUS2_DSP_DEBUGMODE_MASK        (0x200000U)
#define MDM_AP_STATUS2_DSP_DEBUGMODE_SHIFT       (21U)
#define MDM_AP_STATUS2_DSP_DEBUGMODE_WIDTH       (1U)
#define MDM_AP_STATUS2_DSP_DEBUGMODE(x)          (((uint32_t)(((uint32_t)(x)) << MDM_AP_STATUS2_DSP_DEBUGMODE_SHIFT)) & MDM_AP_STATUS2_DSP_DEBUGMODE_MASK)
/*! @} */

/*! @name CORTEX_A53_A0_IP_DBG - Cortex-A53 A0 debug */
/*! @{ */
#define MDM_AP_CORTEX_A53_A0_IP_DBG_CA53_A0_IP_DBGDIS_MASK (0x1U)
#define MDM_AP_CORTEX_A53_A0_IP_DBG_CA53_A0_IP_DBGDIS_SHIFT (0U)
#define MDM_AP_CORTEX_A53_A0_IP_DBG_CA53_A0_IP_DBGDIS_WIDTH (1U)
#define MDM_AP_CORTEX_A53_A0_IP_DBG_CA53_A0_IP_DBGDIS(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CORTEX_A53_A0_IP_DBG_CA53_A0_IP_DBGDIS_SHIFT)) & MDM_AP_CORTEX_A53_A0_IP_DBG_CA53_A0_IP_DBGDIS_MASK)
/*! @} */

/*! @name CONTROL2 - MDM_AP control 2 */
/*! @{ */
#define MDM_AP_CONTROL2_LAX_0_ATID_MASK          (0xFEU)
#define MDM_AP_CONTROL2_LAX_0_ATID_SHIFT         (1U)
#define MDM_AP_CONTROL2_LAX_0_ATID_WIDTH         (7U)
#define MDM_AP_CONTROL2_LAX_0_ATID(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL2_LAX_0_ATID_SHIFT)) & MDM_AP_CONTROL2_LAX_0_ATID_MASK)
#define MDM_AP_CONTROL2_LAX_0_DBG_HALT_REQ_MASK  (0x100U)
#define MDM_AP_CONTROL2_LAX_0_DBG_HALT_REQ_SHIFT (8U)
#define MDM_AP_CONTROL2_LAX_0_DBG_HALT_REQ_WIDTH (1U)
#define MDM_AP_CONTROL2_LAX_0_DBG_HALT_REQ(x)    (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL2_LAX_0_DBG_HALT_REQ_SHIFT)) & MDM_AP_CONTROL2_LAX_0_DBG_HALT_REQ_MASK)
#define MDM_AP_CONTROL2_LAX_0_RESUME_REQ_MASK    (0x200U)
#define MDM_AP_CONTROL2_LAX_0_RESUME_REQ_SHIFT   (9U)
#define MDM_AP_CONTROL2_LAX_0_RESUME_REQ_WIDTH   (1U)
#define MDM_AP_CONTROL2_LAX_0_RESUME_REQ(x)      (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL2_LAX_0_RESUME_REQ_SHIFT)) & MDM_AP_CONTROL2_LAX_0_RESUME_REQ_MASK)
#define MDM_AP_CONTROL2_DSP_OCDHALTONRESET_MASK  (0x1000U)
#define MDM_AP_CONTROL2_DSP_OCDHALTONRESET_SHIFT (12U)
#define MDM_AP_CONTROL2_DSP_OCDHALTONRESET_WIDTH (1U)
#define MDM_AP_CONTROL2_DSP_OCDHALTONRESET(x)    (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL2_DSP_OCDHALTONRESET_SHIFT)) & MDM_AP_CONTROL2_DSP_OCDHALTONRESET_MASK)
#define MDM_AP_CONTROL2_LAX_1_ATID_MASK          (0xFE0000U)
#define MDM_AP_CONTROL2_LAX_1_ATID_SHIFT         (17U)
#define MDM_AP_CONTROL2_LAX_1_ATID_WIDTH         (7U)
#define MDM_AP_CONTROL2_LAX_1_ATID(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL2_LAX_1_ATID_SHIFT)) & MDM_AP_CONTROL2_LAX_1_ATID_MASK)
#define MDM_AP_CONTROL2_LAX_1_DBG_HALT_REQ_MASK  (0x1000000U)
#define MDM_AP_CONTROL2_LAX_1_DBG_HALT_REQ_SHIFT (24U)
#define MDM_AP_CONTROL2_LAX_1_DBG_HALT_REQ_WIDTH (1U)
#define MDM_AP_CONTROL2_LAX_1_DBG_HALT_REQ(x)    (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL2_LAX_1_DBG_HALT_REQ_SHIFT)) & MDM_AP_CONTROL2_LAX_1_DBG_HALT_REQ_MASK)
#define MDM_AP_CONTROL2_LAX_1_RESUME_REQ_MASK    (0x2000000U)
#define MDM_AP_CONTROL2_LAX_1_RESUME_REQ_SHIFT   (25U)
#define MDM_AP_CONTROL2_LAX_1_RESUME_REQ_WIDTH   (1U)
#define MDM_AP_CONTROL2_LAX_1_RESUME_REQ(x)      (((uint32_t)(((uint32_t)(x)) << MDM_AP_CONTROL2_LAX_1_RESUME_REQ_SHIFT)) & MDM_AP_CONTROL2_LAX_1_RESUME_REQ_MASK)
/*! @} */

/*! @name CA53_A1_IP_DBG - Cortex-A53 A1 debug */
/*! @{ */
#define MDM_AP_CA53_A1_IP_DBG_CA53_A1_IP_DBGDIS_MASK (0x1U)
#define MDM_AP_CA53_A1_IP_DBG_CA53_A1_IP_DBGDIS_SHIFT (0U)
#define MDM_AP_CA53_A1_IP_DBG_CA53_A1_IP_DBGDIS_WIDTH (1U)
#define MDM_AP_CA53_A1_IP_DBG_CA53_A1_IP_DBGDIS(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CA53_A1_IP_DBG_CA53_A1_IP_DBGDIS_SHIFT)) & MDM_AP_CA53_A1_IP_DBG_CA53_A1_IP_DBGDIS_MASK)
/*! @} */

/*! @name CORTEX_A53_B0_IP_DBG - Cortex-A53 B0 debug */
/*! @{ */
#define MDM_AP_CORTEX_A53_B0_IP_DBG_CA53_B0_IP_DBGDIS_MASK (0x1U)
#define MDM_AP_CORTEX_A53_B0_IP_DBG_CA53_B0_IP_DBGDIS_SHIFT (0U)
#define MDM_AP_CORTEX_A53_B0_IP_DBG_CA53_B0_IP_DBGDIS_WIDTH (1U)
#define MDM_AP_CORTEX_A53_B0_IP_DBG_CA53_B0_IP_DBGDIS(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CORTEX_A53_B0_IP_DBG_CA53_B0_IP_DBGDIS_SHIFT)) & MDM_AP_CORTEX_A53_B0_IP_DBG_CA53_B0_IP_DBGDIS_MASK)
/*! @} */

/*! @name CORTEX_A53_B1_IP_DBG - Cortex-A53 B1 debug */
/*! @{ */
#define MDM_AP_CORTEX_A53_B1_IP_DBG_CA53_B1_IP_DBGDIS_MASK (0x1U)
#define MDM_AP_CORTEX_A53_B1_IP_DBG_CA53_B1_IP_DBGDIS_SHIFT (0U)
#define MDM_AP_CORTEX_A53_B1_IP_DBG_CA53_B1_IP_DBGDIS_WIDTH (1U)
#define MDM_AP_CORTEX_A53_B1_IP_DBG_CA53_B1_IP_DBGDIS(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CORTEX_A53_B1_IP_DBG_CA53_B1_IP_DBGDIS_SHIFT)) & MDM_AP_CORTEX_A53_B1_IP_DBG_CA53_B1_IP_DBGDIS_MASK)
/*! @} */

/*! @name CORTEX_M7_0_IP_DBG - Cortex M7_0 debug */
/*! @{ */
#define MDM_AP_CORTEX_M7_0_IP_DBG_CM7_0_IP_DBGDIS_MASK (0x1U)
#define MDM_AP_CORTEX_M7_0_IP_DBG_CM7_0_IP_DBGDIS_SHIFT (0U)
#define MDM_AP_CORTEX_M7_0_IP_DBG_CM7_0_IP_DBGDIS_WIDTH (1U)
#define MDM_AP_CORTEX_M7_0_IP_DBG_CM7_0_IP_DBGDIS(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CORTEX_M7_0_IP_DBG_CM7_0_IP_DBGDIS_SHIFT)) & MDM_AP_CORTEX_M7_0_IP_DBG_CM7_0_IP_DBGDIS_MASK)
/*! @} */

/*! @name CORTEX_M7_1_IP_DBG - Cortex M7_1 debug */
/*! @{ */
#define MDM_AP_CORTEX_M7_1_IP_DBG_CM7_1_IP_DBGDIS_MASK (0x1U)
#define MDM_AP_CORTEX_M7_1_IP_DBG_CM7_1_IP_DBGDIS_SHIFT (0U)
#define MDM_AP_CORTEX_M7_1_IP_DBG_CM7_1_IP_DBGDIS_WIDTH (1U)
#define MDM_AP_CORTEX_M7_1_IP_DBG_CM7_1_IP_DBGDIS(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CORTEX_M7_1_IP_DBG_CM7_1_IP_DBGDIS_SHIFT)) & MDM_AP_CORTEX_M7_1_IP_DBG_CM7_1_IP_DBGDIS_MASK)
/*! @} */

/*! @name CORTEX_M7_2_IP_DBG - Cortex M7_2 debug */
/*! @{ */
#define MDM_AP_CORTEX_M7_2_IP_DBG_CM7_2_IP_DBGDIS_MASK (0x1U)
#define MDM_AP_CORTEX_M7_2_IP_DBG_CM7_2_IP_DBGDIS_SHIFT (0U)
#define MDM_AP_CORTEX_M7_2_IP_DBG_CM7_2_IP_DBGDIS_WIDTH (1U)
#define MDM_AP_CORTEX_M7_2_IP_DBG_CM7_2_IP_DBGDIS(x) (((uint32_t)(((uint32_t)(x)) << MDM_AP_CORTEX_M7_2_IP_DBG_CM7_2_IP_DBGDIS_SHIFT)) & MDM_AP_CORTEX_M7_2_IP_DBG_CM7_2_IP_DBGDIS_MASK)
/*! @} */

/*! @name DAP_EN_CTRL - DAP enable control */
/*! @{ */
#define MDM_AP_DAP_EN_CTRL_GDBGEN_MASK           (0x10U)
#define MDM_AP_DAP_EN_CTRL_GDBGEN_SHIFT          (4U)
#define MDM_AP_DAP_EN_CTRL_GDBGEN_WIDTH          (1U)
#define MDM_AP_DAP_EN_CTRL_GDBGEN(x)             (((uint32_t)(((uint32_t)(x)) << MDM_AP_DAP_EN_CTRL_GDBGEN_SHIFT)) & MDM_AP_DAP_EN_CTRL_GDBGEN_MASK)
#define MDM_AP_DAP_EN_CTRL_GNIDEN_MASK           (0x20U)
#define MDM_AP_DAP_EN_CTRL_GNIDEN_SHIFT          (5U)
#define MDM_AP_DAP_EN_CTRL_GNIDEN_WIDTH          (1U)
#define MDM_AP_DAP_EN_CTRL_GNIDEN(x)             (((uint32_t)(((uint32_t)(x)) << MDM_AP_DAP_EN_CTRL_GNIDEN_SHIFT)) & MDM_AP_DAP_EN_CTRL_GNIDEN_MASK)
#define MDM_AP_DAP_EN_CTRL_GSPIDEN_MASK          (0x40U)
#define MDM_AP_DAP_EN_CTRL_GSPIDEN_SHIFT         (6U)
#define MDM_AP_DAP_EN_CTRL_GSPIDEN_WIDTH         (1U)
#define MDM_AP_DAP_EN_CTRL_GSPIDEN(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_DAP_EN_CTRL_GSPIDEN_SHIFT)) & MDM_AP_DAP_EN_CTRL_GSPIDEN_MASK)
#define MDM_AP_DAP_EN_CTRL_GSPNIDEN_MASK         (0x80U)
#define MDM_AP_DAP_EN_CTRL_GSPNIDEN_SHIFT        (7U)
#define MDM_AP_DAP_EN_CTRL_GSPNIDEN_WIDTH        (1U)
#define MDM_AP_DAP_EN_CTRL_GSPNIDEN(x)           (((uint32_t)(((uint32_t)(x)) << MDM_AP_DAP_EN_CTRL_GSPNIDEN_SHIFT)) & MDM_AP_DAP_EN_CTRL_GSPNIDEN_MASK)
#define MDM_AP_DAP_EN_CTRL_CDBGEN_MASK           (0x10000000U)
#define MDM_AP_DAP_EN_CTRL_CDBGEN_SHIFT          (28U)
#define MDM_AP_DAP_EN_CTRL_CDBGEN_WIDTH          (1U)
#define MDM_AP_DAP_EN_CTRL_CDBGEN(x)             (((uint32_t)(((uint32_t)(x)) << MDM_AP_DAP_EN_CTRL_CDBGEN_SHIFT)) & MDM_AP_DAP_EN_CTRL_CDBGEN_MASK)
#define MDM_AP_DAP_EN_CTRL_CNIDEN_MASK           (0x20000000U)
#define MDM_AP_DAP_EN_CTRL_CNIDEN_SHIFT          (29U)
#define MDM_AP_DAP_EN_CTRL_CNIDEN_WIDTH          (1U)
#define MDM_AP_DAP_EN_CTRL_CNIDEN(x)             (((uint32_t)(((uint32_t)(x)) << MDM_AP_DAP_EN_CTRL_CNIDEN_SHIFT)) & MDM_AP_DAP_EN_CTRL_CNIDEN_MASK)
#define MDM_AP_DAP_EN_CTRL_CSPIDEN_MASK          (0x40000000U)
#define MDM_AP_DAP_EN_CTRL_CSPIDEN_SHIFT         (30U)
#define MDM_AP_DAP_EN_CTRL_CSPIDEN_WIDTH         (1U)
#define MDM_AP_DAP_EN_CTRL_CSPIDEN(x)            (((uint32_t)(((uint32_t)(x)) << MDM_AP_DAP_EN_CTRL_CSPIDEN_SHIFT)) & MDM_AP_DAP_EN_CTRL_CSPIDEN_MASK)
#define MDM_AP_DAP_EN_CTRL_CSPNIDEN_MASK         (0x80000000U)
#define MDM_AP_DAP_EN_CTRL_CSPNIDEN_SHIFT        (31U)
#define MDM_AP_DAP_EN_CTRL_CSPNIDEN_WIDTH        (1U)
#define MDM_AP_DAP_EN_CTRL_CSPNIDEN(x)           (((uint32_t)(((uint32_t)(x)) << MDM_AP_DAP_EN_CTRL_CSPNIDEN_SHIFT)) & MDM_AP_DAP_EN_CTRL_CSPNIDEN_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group MDM_AP_Register_Masks */

/*!
 * @}
 */ /* end of group MDM_AP_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_MDM_AP_H_) */
