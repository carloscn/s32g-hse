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
 * @file S32R45_FCCU.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_FCCU
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
#if !defined(S32R45_FCCU_H_)  /* Check if memory map has not been already included */
#define S32R45_FCCU_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- FCCU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FCCU_Peripheral_Access_Layer FCCU Peripheral Access Layer
 * @{
 */

/** FCCU - Size of Registers Arrays */
#define FCCU_NCF_CFG_COUNT                        4u
#define FCCU_NCFS_CFG_COUNT                       8u
#define FCCU_NCF_S_COUNT                          4u
#define FCCU_NCF_E_COUNT                          4u
#define FCCU_NCF_TOE_COUNT                        4u
#define FCCU_IRQ_ALARM_EN_COUNT                   4u
#define FCCU_NMI_EN_COUNT                         4u
#define FCCU_EOUT_SIG_EN_COUNT                    4u

/** FCCU - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL;                              /**< Control, offset: 0x0 */
  __O  uint32_t CTRLK;                             /**< Control Key, offset: 0x4 */
  __IO uint32_t CFG;                               /**< Configuration, offset: 0x8 */
  uint8_t RESERVED_0[16];
  __IO uint32_t NCF_CFG[FCCU_NCF_CFG_COUNT];       /**< Non-critical Fault Configuration, array offset: 0x1C, array step: 0x4 */
  uint8_t RESERVED_1[32];
  __IO uint32_t NCFS_CFG[FCCU_NCFS_CFG_COUNT];     /**< Non-critical Fault-State Configuration, array offset: 0x4C, array step: 0x4 */
  uint8_t RESERVED_2[20];
  __IO uint32_t NCF_S[FCCU_NCF_S_COUNT];           /**< Non-critical Fault Status, array offset: 0x80, array step: 0x4 */
  __O  uint32_t NCFK;                              /**< Non-critical Fault Key, offset: 0x90 */
  __IO uint32_t NCF_E[FCCU_NCF_E_COUNT];           /**< Non-critical Fault Enable, array offset: 0x94, array step: 0x4 */
  __IO uint32_t NCF_TOE[FCCU_NCF_TOE_COUNT];       /**< Non-critical-Fault Alarm-State Timeout Enable, array offset: 0xA4, array step: 0x4 */
  __IO uint32_t NCF_TO;                            /**< Non-critical-Fault Alarm-State Timeout Interval, offset: 0xB4 */
  __IO uint32_t CFG_TO;                            /**< Configuration-State Timeout Interval, offset: 0xB8 */
  __IO uint32_t EINOUT;                            /**< IO Control, offset: 0xBC */
  __I  uint32_t STAT;                              /**< Status, offset: 0xC0 */
  __I  uint32_t N2AF_STATUS;                       /**< Normal-to-Alarm Freeze Status, offset: 0xC4 */
  __I  uint32_t A2FF_STATUS;                       /**< Alarm-to-Fault Freeze Status, offset: 0xC8 */
  __I  uint32_t N2FF_STATUS;                       /**< Normal-to-Fault Freeze Status, offset: 0xCC */
  __I  uint32_t F2AF_STATUS;                       /**< Fault-to-Alarm Freeze Status, offset: 0xD0 */
  uint8_t RESERVED_3[8];
  __O  uint32_t NCFF;                              /**< Non-critical Fault Fake, offset: 0xDC */
  __IO uint32_t IRQ_STAT;                          /**< IRQ Status, offset: 0xE0 */
  __IO uint32_t IRQ_EN;                            /**< IRQ Enable, offset: 0xE4 */
  uint8_t RESERVED_4[8];
  __O  uint32_t TRANS_LOCK;                        /**< Transient Configuration Lock, offset: 0xF0 */
  __O  uint32_t PERMNT_LOCK;                       /**< Permanent Configuration Lock, offset: 0xF4 */
  __IO uint32_t DELTA_T;                           /**< Delta T, offset: 0xF8 */
  __IO uint32_t IRQ_ALARM_EN[FCCU_IRQ_ALARM_EN_COUNT]; /**< Non-critical Alarm-State Interrupt-Request Enable, array offset: 0xFC, array step: 0x4 */
  __IO uint32_t NMI_EN[FCCU_NMI_EN_COUNT];         /**< Non-critical Fault-State Non-maskable-Interrupt-Request Enable, array offset: 0x10C, array step: 0x4 */
  __IO uint32_t EOUT_SIG_EN[FCCU_EOUT_SIG_EN_COUNT]; /**< Non-critical Fault-State EOUT Signaling Enable, array offset: 0x11C, array step: 0x4 */
  __I  uint32_t TMR_ALARM;                         /**< Alarm-State Timer, offset: 0x12C */
  uint8_t RESERVED_5[4];
  __I  uint32_t TMR_CFG;                           /**< Configuration-State Timer, offset: 0x134 */
  __I  uint32_t TMR_ETMR;                          /**< Fault-Output Timer, offset: 0x138 */
} FCCU_Type, *FCCU_MemMapPtr;

/** Number of instances of the FCCU module. */
#define FCCU_INSTANCE_COUNT                      (1u)

/* FCCU - Peripheral instance base addresses */
/** Peripheral FCCU base address */
#define FCCU_BASE                                (0x4030C000u)
/** Peripheral FCCU base pointer */
#define FCCU                                     ((FCCU_Type *)FCCU_BASE)
/** Array initializer of FCCU peripheral base addresses */
#define FCCU_BASE_ADDRS                          { FCCU_BASE }
/** Array initializer of FCCU peripheral base pointers */
#define FCCU_BASE_PTRS                           { FCCU }

/* ----------------------------------------------------------------------------
   -- FCCU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FCCU_Register_Masks FCCU Register Masks
 * @{
 */

/*! @name CTRL - Control */
/*! @{ */
#define FCCU_CTRL_OPR_MASK                       (0x1FU)
#define FCCU_CTRL_OPR_SHIFT                      (0U)
#define FCCU_CTRL_OPR_WIDTH                      (5U)
#define FCCU_CTRL_OPR(x)                         (((uint32_t)(((uint32_t)(x)) << FCCU_CTRL_OPR_SHIFT)) & FCCU_CTRL_OPR_MASK)
#define FCCU_CTRL_OPS_MASK                       (0xC0U)
#define FCCU_CTRL_OPS_SHIFT                      (6U)
#define FCCU_CTRL_OPS_WIDTH                      (2U)
#define FCCU_CTRL_OPS(x)                         (((uint32_t)(((uint32_t)(x)) << FCCU_CTRL_OPS_SHIFT)) & FCCU_CTRL_OPS_MASK)
#define FCCU_CTRL_DEBUG_MASK                     (0x200U)
#define FCCU_CTRL_DEBUG_SHIFT                    (9U)
#define FCCU_CTRL_DEBUG_WIDTH                    (1U)
#define FCCU_CTRL_DEBUG(x)                       (((uint32_t)(((uint32_t)(x)) << FCCU_CTRL_DEBUG_SHIFT)) & FCCU_CTRL_DEBUG_MASK)
/*! @} */

/*! @name CTRLK - Control Key */
/*! @{ */
#define FCCU_CTRLK_CTRLK_MASK                    (0xFFFFFFFFU)
#define FCCU_CTRLK_CTRLK_SHIFT                   (0U)
#define FCCU_CTRLK_CTRLK_WIDTH                   (32U)
#define FCCU_CTRLK_CTRLK(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_CTRLK_CTRLK_SHIFT)) & FCCU_CTRLK_CTRLK_MASK)
/*! @} */

/*! @name CFG - Configuration */
/*! @{ */
#define FCCU_CFG_FOP_MASK                        (0x3FU)
#define FCCU_CFG_FOP_SHIFT                       (0U)
#define FCCU_CFG_FOP_WIDTH                       (6U)
#define FCCU_CFG_FOP(x)                          (((uint32_t)(((uint32_t)(x)) << FCCU_CFG_FOP_SHIFT)) & FCCU_CFG_FOP_MASK)
#define FCCU_CFG_FOM_MASK                        (0x1C0U)
#define FCCU_CFG_FOM_SHIFT                       (6U)
#define FCCU_CFG_FOM_WIDTH                       (3U)
#define FCCU_CFG_FOM(x)                          (((uint32_t)(((uint32_t)(x)) << FCCU_CFG_FOM_SHIFT)) & FCCU_CFG_FOM_MASK)
#define FCCU_CFG_PS_MASK                         (0x200U)
#define FCCU_CFG_PS_SHIFT                        (9U)
#define FCCU_CFG_PS_WIDTH                        (1U)
#define FCCU_CFG_PS(x)                           (((uint32_t)(((uint32_t)(x)) << FCCU_CFG_PS_SHIFT)) & FCCU_CFG_PS_MASK)
#define FCCU_CFG_SM_MASK                         (0x400U)
#define FCCU_CFG_SM_SHIFT                        (10U)
#define FCCU_CFG_SM_WIDTH                        (1U)
#define FCCU_CFG_SM(x)                           (((uint32_t)(((uint32_t)(x)) << FCCU_CFG_SM_SHIFT)) & FCCU_CFG_SM_MASK)
#define FCCU_CFG_FOPE_MASK                       (0x8000U)
#define FCCU_CFG_FOPE_SHIFT                      (15U)
#define FCCU_CFG_FOPE_WIDTH                      (1U)
#define FCCU_CFG_FOPE(x)                         (((uint32_t)(((uint32_t)(x)) << FCCU_CFG_FOPE_SHIFT)) & FCCU_CFG_FOPE_MASK)
#define FCCU_CFG_FCCU_SET_CLEAR_MASK             (0xC00000U)
#define FCCU_CFG_FCCU_SET_CLEAR_SHIFT            (22U)
#define FCCU_CFG_FCCU_SET_CLEAR_WIDTH            (2U)
#define FCCU_CFG_FCCU_SET_CLEAR(x)               (((uint32_t)(((uint32_t)(x)) << FCCU_CFG_FCCU_SET_CLEAR_SHIFT)) & FCCU_CFG_FCCU_SET_CLEAR_MASK)
#define FCCU_CFG_FCCU_SET_AFTER_RESET_MASK       (0x1000000U)
#define FCCU_CFG_FCCU_SET_AFTER_RESET_SHIFT      (24U)
#define FCCU_CFG_FCCU_SET_AFTER_RESET_WIDTH      (1U)
#define FCCU_CFG_FCCU_SET_AFTER_RESET(x)         (((uint32_t)(((uint32_t)(x)) << FCCU_CFG_FCCU_SET_AFTER_RESET_SHIFT)) & FCCU_CFG_FCCU_SET_AFTER_RESET_MASK)
/*! @} */

/*! @name NCF_CFG - Non-critical Fault Configuration */
/*! @{ */
#define FCCU_NCF_CFG_NCFC0_MASK                  (0x1U)
#define FCCU_NCF_CFG_NCFC0_SHIFT                 (0U)
#define FCCU_NCF_CFG_NCFC0_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC0(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC0_SHIFT)) & FCCU_NCF_CFG_NCFC0_MASK)
#define FCCU_NCF_CFG_NCFC1_MASK                  (0x2U)
#define FCCU_NCF_CFG_NCFC1_SHIFT                 (1U)
#define FCCU_NCF_CFG_NCFC1_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC1(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC1_SHIFT)) & FCCU_NCF_CFG_NCFC1_MASK)
#define FCCU_NCF_CFG_NCFC2_MASK                  (0x4U)
#define FCCU_NCF_CFG_NCFC2_SHIFT                 (2U)
#define FCCU_NCF_CFG_NCFC2_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC2(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC2_SHIFT)) & FCCU_NCF_CFG_NCFC2_MASK)
#define FCCU_NCF_CFG_NCFC3_MASK                  (0x8U)
#define FCCU_NCF_CFG_NCFC3_SHIFT                 (3U)
#define FCCU_NCF_CFG_NCFC3_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC3(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC3_SHIFT)) & FCCU_NCF_CFG_NCFC3_MASK)
#define FCCU_NCF_CFG_NCFC4_MASK                  (0x10U)
#define FCCU_NCF_CFG_NCFC4_SHIFT                 (4U)
#define FCCU_NCF_CFG_NCFC4_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC4(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC4_SHIFT)) & FCCU_NCF_CFG_NCFC4_MASK)
#define FCCU_NCF_CFG_NCFC5_MASK                  (0x20U)
#define FCCU_NCF_CFG_NCFC5_SHIFT                 (5U)
#define FCCU_NCF_CFG_NCFC5_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC5(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC5_SHIFT)) & FCCU_NCF_CFG_NCFC5_MASK)
#define FCCU_NCF_CFG_NCFC6_MASK                  (0x40U)
#define FCCU_NCF_CFG_NCFC6_SHIFT                 (6U)
#define FCCU_NCF_CFG_NCFC6_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC6(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC6_SHIFT)) & FCCU_NCF_CFG_NCFC6_MASK)
#define FCCU_NCF_CFG_NCFC7_MASK                  (0x80U)
#define FCCU_NCF_CFG_NCFC7_SHIFT                 (7U)
#define FCCU_NCF_CFG_NCFC7_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC7(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC7_SHIFT)) & FCCU_NCF_CFG_NCFC7_MASK)
#define FCCU_NCF_CFG_NCFC8_MASK                  (0x100U)
#define FCCU_NCF_CFG_NCFC8_SHIFT                 (8U)
#define FCCU_NCF_CFG_NCFC8_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC8(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC8_SHIFT)) & FCCU_NCF_CFG_NCFC8_MASK)
#define FCCU_NCF_CFG_NCFC9_MASK                  (0x200U)
#define FCCU_NCF_CFG_NCFC9_SHIFT                 (9U)
#define FCCU_NCF_CFG_NCFC9_WIDTH                 (1U)
#define FCCU_NCF_CFG_NCFC9(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC9_SHIFT)) & FCCU_NCF_CFG_NCFC9_MASK)
#define FCCU_NCF_CFG_NCFC10_MASK                 (0x400U)
#define FCCU_NCF_CFG_NCFC10_SHIFT                (10U)
#define FCCU_NCF_CFG_NCFC10_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC10(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC10_SHIFT)) & FCCU_NCF_CFG_NCFC10_MASK)
#define FCCU_NCF_CFG_NCFC11_MASK                 (0x800U)
#define FCCU_NCF_CFG_NCFC11_SHIFT                (11U)
#define FCCU_NCF_CFG_NCFC11_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC11(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC11_SHIFT)) & FCCU_NCF_CFG_NCFC11_MASK)
#define FCCU_NCF_CFG_NCFC12_MASK                 (0x1000U)
#define FCCU_NCF_CFG_NCFC12_SHIFT                (12U)
#define FCCU_NCF_CFG_NCFC12_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC12(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC12_SHIFT)) & FCCU_NCF_CFG_NCFC12_MASK)
#define FCCU_NCF_CFG_NCFC13_MASK                 (0x2000U)
#define FCCU_NCF_CFG_NCFC13_SHIFT                (13U)
#define FCCU_NCF_CFG_NCFC13_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC13(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC13_SHIFT)) & FCCU_NCF_CFG_NCFC13_MASK)
#define FCCU_NCF_CFG_NCFC14_MASK                 (0x4000U)
#define FCCU_NCF_CFG_NCFC14_SHIFT                (14U)
#define FCCU_NCF_CFG_NCFC14_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC14(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC14_SHIFT)) & FCCU_NCF_CFG_NCFC14_MASK)
#define FCCU_NCF_CFG_NCFC15_MASK                 (0x8000U)
#define FCCU_NCF_CFG_NCFC15_SHIFT                (15U)
#define FCCU_NCF_CFG_NCFC15_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC15(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC15_SHIFT)) & FCCU_NCF_CFG_NCFC15_MASK)
#define FCCU_NCF_CFG_NCFC16_MASK                 (0x10000U)
#define FCCU_NCF_CFG_NCFC16_SHIFT                (16U)
#define FCCU_NCF_CFG_NCFC16_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC16(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC16_SHIFT)) & FCCU_NCF_CFG_NCFC16_MASK)
#define FCCU_NCF_CFG_NCFC17_MASK                 (0x20000U)
#define FCCU_NCF_CFG_NCFC17_SHIFT                (17U)
#define FCCU_NCF_CFG_NCFC17_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC17(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC17_SHIFT)) & FCCU_NCF_CFG_NCFC17_MASK)
#define FCCU_NCF_CFG_NCFC18_MASK                 (0x40000U)
#define FCCU_NCF_CFG_NCFC18_SHIFT                (18U)
#define FCCU_NCF_CFG_NCFC18_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC18(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC18_SHIFT)) & FCCU_NCF_CFG_NCFC18_MASK)
#define FCCU_NCF_CFG_NCFC19_MASK                 (0x80000U)
#define FCCU_NCF_CFG_NCFC19_SHIFT                (19U)
#define FCCU_NCF_CFG_NCFC19_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC19(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC19_SHIFT)) & FCCU_NCF_CFG_NCFC19_MASK)
#define FCCU_NCF_CFG_NCFC20_MASK                 (0x100000U)
#define FCCU_NCF_CFG_NCFC20_SHIFT                (20U)
#define FCCU_NCF_CFG_NCFC20_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC20(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC20_SHIFT)) & FCCU_NCF_CFG_NCFC20_MASK)
#define FCCU_NCF_CFG_NCFC21_MASK                 (0x200000U)
#define FCCU_NCF_CFG_NCFC21_SHIFT                (21U)
#define FCCU_NCF_CFG_NCFC21_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC21(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC21_SHIFT)) & FCCU_NCF_CFG_NCFC21_MASK)
#define FCCU_NCF_CFG_NCFC22_MASK                 (0x400000U)
#define FCCU_NCF_CFG_NCFC22_SHIFT                (22U)
#define FCCU_NCF_CFG_NCFC22_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC22(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC22_SHIFT)) & FCCU_NCF_CFG_NCFC22_MASK)
#define FCCU_NCF_CFG_NCFC23_MASK                 (0x800000U)
#define FCCU_NCF_CFG_NCFC23_SHIFT                (23U)
#define FCCU_NCF_CFG_NCFC23_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC23(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC23_SHIFT)) & FCCU_NCF_CFG_NCFC23_MASK)
#define FCCU_NCF_CFG_NCFC24_MASK                 (0x1000000U)
#define FCCU_NCF_CFG_NCFC24_SHIFT                (24U)
#define FCCU_NCF_CFG_NCFC24_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC24(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC24_SHIFT)) & FCCU_NCF_CFG_NCFC24_MASK)
#define FCCU_NCF_CFG_NCFC25_MASK                 (0x2000000U)
#define FCCU_NCF_CFG_NCFC25_SHIFT                (25U)
#define FCCU_NCF_CFG_NCFC25_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC25(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC25_SHIFT)) & FCCU_NCF_CFG_NCFC25_MASK)
#define FCCU_NCF_CFG_NCFC26_MASK                 (0x4000000U)
#define FCCU_NCF_CFG_NCFC26_SHIFT                (26U)
#define FCCU_NCF_CFG_NCFC26_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC26(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC26_SHIFT)) & FCCU_NCF_CFG_NCFC26_MASK)
#define FCCU_NCF_CFG_NCFC27_MASK                 (0x8000000U)
#define FCCU_NCF_CFG_NCFC27_SHIFT                (27U)
#define FCCU_NCF_CFG_NCFC27_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC27(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC27_SHIFT)) & FCCU_NCF_CFG_NCFC27_MASK)
#define FCCU_NCF_CFG_NCFC28_MASK                 (0x10000000U)
#define FCCU_NCF_CFG_NCFC28_SHIFT                (28U)
#define FCCU_NCF_CFG_NCFC28_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC28(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC28_SHIFT)) & FCCU_NCF_CFG_NCFC28_MASK)
#define FCCU_NCF_CFG_NCFC29_MASK                 (0x20000000U)
#define FCCU_NCF_CFG_NCFC29_SHIFT                (29U)
#define FCCU_NCF_CFG_NCFC29_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC29(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC29_SHIFT)) & FCCU_NCF_CFG_NCFC29_MASK)
#define FCCU_NCF_CFG_NCFC30_MASK                 (0x40000000U)
#define FCCU_NCF_CFG_NCFC30_SHIFT                (30U)
#define FCCU_NCF_CFG_NCFC30_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC30(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC30_SHIFT)) & FCCU_NCF_CFG_NCFC30_MASK)
#define FCCU_NCF_CFG_NCFC31_MASK                 (0x80000000U)
#define FCCU_NCF_CFG_NCFC31_SHIFT                (31U)
#define FCCU_NCF_CFG_NCFC31_WIDTH                (1U)
#define FCCU_NCF_CFG_NCFC31(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_CFG_NCFC31_SHIFT)) & FCCU_NCF_CFG_NCFC31_MASK)
/*! @} */

/*! @name NCFS_CFG - Non-critical Fault-State Configuration */
/*! @{ */
#define FCCU_NCFS_CFG_NCFSC0_MASK                (0x3U)
#define FCCU_NCFS_CFG_NCFSC0_SHIFT               (0U)
#define FCCU_NCFS_CFG_NCFSC0_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC0(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC0_SHIFT)) & FCCU_NCFS_CFG_NCFSC0_MASK)
#define FCCU_NCFS_CFG_NCFSC1_MASK                (0xCU)
#define FCCU_NCFS_CFG_NCFSC1_SHIFT               (2U)
#define FCCU_NCFS_CFG_NCFSC1_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC1(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC1_SHIFT)) & FCCU_NCFS_CFG_NCFSC1_MASK)
#define FCCU_NCFS_CFG_NCFSC2_MASK                (0x30U)
#define FCCU_NCFS_CFG_NCFSC2_SHIFT               (4U)
#define FCCU_NCFS_CFG_NCFSC2_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC2(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC2_SHIFT)) & FCCU_NCFS_CFG_NCFSC2_MASK)
#define FCCU_NCFS_CFG_NCFSC3_MASK                (0xC0U)
#define FCCU_NCFS_CFG_NCFSC3_SHIFT               (6U)
#define FCCU_NCFS_CFG_NCFSC3_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC3(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC3_SHIFT)) & FCCU_NCFS_CFG_NCFSC3_MASK)
#define FCCU_NCFS_CFG_NCFSC4_MASK                (0x300U)
#define FCCU_NCFS_CFG_NCFSC4_SHIFT               (8U)
#define FCCU_NCFS_CFG_NCFSC4_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC4(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC4_SHIFT)) & FCCU_NCFS_CFG_NCFSC4_MASK)
#define FCCU_NCFS_CFG_NCFSC5_MASK                (0xC00U)
#define FCCU_NCFS_CFG_NCFSC5_SHIFT               (10U)
#define FCCU_NCFS_CFG_NCFSC5_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC5(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC5_SHIFT)) & FCCU_NCFS_CFG_NCFSC5_MASK)
#define FCCU_NCFS_CFG_NCFSC6_MASK                (0x3000U)
#define FCCU_NCFS_CFG_NCFSC6_SHIFT               (12U)
#define FCCU_NCFS_CFG_NCFSC6_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC6(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC6_SHIFT)) & FCCU_NCFS_CFG_NCFSC6_MASK)
#define FCCU_NCFS_CFG_NCFSC7_MASK                (0xC000U)
#define FCCU_NCFS_CFG_NCFSC7_SHIFT               (14U)
#define FCCU_NCFS_CFG_NCFSC7_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC7(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC7_SHIFT)) & FCCU_NCFS_CFG_NCFSC7_MASK)
#define FCCU_NCFS_CFG_NCFSC8_MASK                (0x30000U)
#define FCCU_NCFS_CFG_NCFSC8_SHIFT               (16U)
#define FCCU_NCFS_CFG_NCFSC8_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC8(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC8_SHIFT)) & FCCU_NCFS_CFG_NCFSC8_MASK)
#define FCCU_NCFS_CFG_NCFSC9_MASK                (0xC0000U)
#define FCCU_NCFS_CFG_NCFSC9_SHIFT               (18U)
#define FCCU_NCFS_CFG_NCFSC9_WIDTH               (2U)
#define FCCU_NCFS_CFG_NCFSC9(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC9_SHIFT)) & FCCU_NCFS_CFG_NCFSC9_MASK)
#define FCCU_NCFS_CFG_NCFSC10_MASK               (0x300000U)
#define FCCU_NCFS_CFG_NCFSC10_SHIFT              (20U)
#define FCCU_NCFS_CFG_NCFSC10_WIDTH              (2U)
#define FCCU_NCFS_CFG_NCFSC10(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC10_SHIFT)) & FCCU_NCFS_CFG_NCFSC10_MASK)
#define FCCU_NCFS_CFG_NCFSC11_MASK               (0xC00000U)
#define FCCU_NCFS_CFG_NCFSC11_SHIFT              (22U)
#define FCCU_NCFS_CFG_NCFSC11_WIDTH              (2U)
#define FCCU_NCFS_CFG_NCFSC11(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC11_SHIFT)) & FCCU_NCFS_CFG_NCFSC11_MASK)
#define FCCU_NCFS_CFG_NCFSC12_MASK               (0x3000000U)
#define FCCU_NCFS_CFG_NCFSC12_SHIFT              (24U)
#define FCCU_NCFS_CFG_NCFSC12_WIDTH              (2U)
#define FCCU_NCFS_CFG_NCFSC12(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC12_SHIFT)) & FCCU_NCFS_CFG_NCFSC12_MASK)
#define FCCU_NCFS_CFG_NCFSC13_MASK               (0xC000000U)
#define FCCU_NCFS_CFG_NCFSC13_SHIFT              (26U)
#define FCCU_NCFS_CFG_NCFSC13_WIDTH              (2U)
#define FCCU_NCFS_CFG_NCFSC13(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC13_SHIFT)) & FCCU_NCFS_CFG_NCFSC13_MASK)
#define FCCU_NCFS_CFG_NCFSC14_MASK               (0x30000000U)
#define FCCU_NCFS_CFG_NCFSC14_SHIFT              (28U)
#define FCCU_NCFS_CFG_NCFSC14_WIDTH              (2U)
#define FCCU_NCFS_CFG_NCFSC14(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC14_SHIFT)) & FCCU_NCFS_CFG_NCFSC14_MASK)
#define FCCU_NCFS_CFG_NCFSC15_MASK               (0xC0000000U)
#define FCCU_NCFS_CFG_NCFSC15_SHIFT              (30U)
#define FCCU_NCFS_CFG_NCFSC15_WIDTH              (2U)
#define FCCU_NCFS_CFG_NCFSC15(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCFS_CFG_NCFSC15_SHIFT)) & FCCU_NCFS_CFG_NCFSC15_MASK)
/*! @} */

/*! @name NCF_S - Non-critical Fault Status */
/*! @{ */
#define FCCU_NCF_S_NCFS0_MASK                    (0x1U)
#define FCCU_NCF_S_NCFS0_SHIFT                   (0U)
#define FCCU_NCF_S_NCFS0_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS0(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS0_SHIFT)) & FCCU_NCF_S_NCFS0_MASK)
#define FCCU_NCF_S_NCFS1_MASK                    (0x2U)
#define FCCU_NCF_S_NCFS1_SHIFT                   (1U)
#define FCCU_NCF_S_NCFS1_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS1(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS1_SHIFT)) & FCCU_NCF_S_NCFS1_MASK)
#define FCCU_NCF_S_NCFS2_MASK                    (0x4U)
#define FCCU_NCF_S_NCFS2_SHIFT                   (2U)
#define FCCU_NCF_S_NCFS2_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS2(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS2_SHIFT)) & FCCU_NCF_S_NCFS2_MASK)
#define FCCU_NCF_S_NCFS3_MASK                    (0x8U)
#define FCCU_NCF_S_NCFS3_SHIFT                   (3U)
#define FCCU_NCF_S_NCFS3_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS3(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS3_SHIFT)) & FCCU_NCF_S_NCFS3_MASK)
#define FCCU_NCF_S_NCFS4_MASK                    (0x10U)
#define FCCU_NCF_S_NCFS4_SHIFT                   (4U)
#define FCCU_NCF_S_NCFS4_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS4(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS4_SHIFT)) & FCCU_NCF_S_NCFS4_MASK)
#define FCCU_NCF_S_NCFS5_MASK                    (0x20U)
#define FCCU_NCF_S_NCFS5_SHIFT                   (5U)
#define FCCU_NCF_S_NCFS5_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS5(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS5_SHIFT)) & FCCU_NCF_S_NCFS5_MASK)
#define FCCU_NCF_S_NCFS6_MASK                    (0x40U)
#define FCCU_NCF_S_NCFS6_SHIFT                   (6U)
#define FCCU_NCF_S_NCFS6_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS6(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS6_SHIFT)) & FCCU_NCF_S_NCFS6_MASK)
#define FCCU_NCF_S_NCFS7_MASK                    (0x80U)
#define FCCU_NCF_S_NCFS7_SHIFT                   (7U)
#define FCCU_NCF_S_NCFS7_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS7(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS7_SHIFT)) & FCCU_NCF_S_NCFS7_MASK)
#define FCCU_NCF_S_NCFS8_MASK                    (0x100U)
#define FCCU_NCF_S_NCFS8_SHIFT                   (8U)
#define FCCU_NCF_S_NCFS8_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS8(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS8_SHIFT)) & FCCU_NCF_S_NCFS8_MASK)
#define FCCU_NCF_S_NCFS9_MASK                    (0x200U)
#define FCCU_NCF_S_NCFS9_SHIFT                   (9U)
#define FCCU_NCF_S_NCFS9_WIDTH                   (1U)
#define FCCU_NCF_S_NCFS9(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS9_SHIFT)) & FCCU_NCF_S_NCFS9_MASK)
#define FCCU_NCF_S_NCFS10_MASK                   (0x400U)
#define FCCU_NCF_S_NCFS10_SHIFT                  (10U)
#define FCCU_NCF_S_NCFS10_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS10(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS10_SHIFT)) & FCCU_NCF_S_NCFS10_MASK)
#define FCCU_NCF_S_NCFS11_MASK                   (0x800U)
#define FCCU_NCF_S_NCFS11_SHIFT                  (11U)
#define FCCU_NCF_S_NCFS11_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS11(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS11_SHIFT)) & FCCU_NCF_S_NCFS11_MASK)
#define FCCU_NCF_S_NCFS12_MASK                   (0x1000U)
#define FCCU_NCF_S_NCFS12_SHIFT                  (12U)
#define FCCU_NCF_S_NCFS12_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS12(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS12_SHIFT)) & FCCU_NCF_S_NCFS12_MASK)
#define FCCU_NCF_S_NCFS13_MASK                   (0x2000U)
#define FCCU_NCF_S_NCFS13_SHIFT                  (13U)
#define FCCU_NCF_S_NCFS13_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS13(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS13_SHIFT)) & FCCU_NCF_S_NCFS13_MASK)
#define FCCU_NCF_S_NCFS14_MASK                   (0x4000U)
#define FCCU_NCF_S_NCFS14_SHIFT                  (14U)
#define FCCU_NCF_S_NCFS14_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS14(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS14_SHIFT)) & FCCU_NCF_S_NCFS14_MASK)
#define FCCU_NCF_S_NCFS15_MASK                   (0x8000U)
#define FCCU_NCF_S_NCFS15_SHIFT                  (15U)
#define FCCU_NCF_S_NCFS15_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS15(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS15_SHIFT)) & FCCU_NCF_S_NCFS15_MASK)
#define FCCU_NCF_S_NCFS16_MASK                   (0x10000U)
#define FCCU_NCF_S_NCFS16_SHIFT                  (16U)
#define FCCU_NCF_S_NCFS16_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS16(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS16_SHIFT)) & FCCU_NCF_S_NCFS16_MASK)
#define FCCU_NCF_S_NCFS17_MASK                   (0x20000U)
#define FCCU_NCF_S_NCFS17_SHIFT                  (17U)
#define FCCU_NCF_S_NCFS17_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS17(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS17_SHIFT)) & FCCU_NCF_S_NCFS17_MASK)
#define FCCU_NCF_S_NCFS18_MASK                   (0x40000U)
#define FCCU_NCF_S_NCFS18_SHIFT                  (18U)
#define FCCU_NCF_S_NCFS18_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS18(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS18_SHIFT)) & FCCU_NCF_S_NCFS18_MASK)
#define FCCU_NCF_S_NCFS19_MASK                   (0x80000U)
#define FCCU_NCF_S_NCFS19_SHIFT                  (19U)
#define FCCU_NCF_S_NCFS19_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS19(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS19_SHIFT)) & FCCU_NCF_S_NCFS19_MASK)
#define FCCU_NCF_S_NCFS20_MASK                   (0x100000U)
#define FCCU_NCF_S_NCFS20_SHIFT                  (20U)
#define FCCU_NCF_S_NCFS20_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS20(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS20_SHIFT)) & FCCU_NCF_S_NCFS20_MASK)
#define FCCU_NCF_S_NCFS21_MASK                   (0x200000U)
#define FCCU_NCF_S_NCFS21_SHIFT                  (21U)
#define FCCU_NCF_S_NCFS21_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS21(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS21_SHIFT)) & FCCU_NCF_S_NCFS21_MASK)
#define FCCU_NCF_S_NCFS22_MASK                   (0x400000U)
#define FCCU_NCF_S_NCFS22_SHIFT                  (22U)
#define FCCU_NCF_S_NCFS22_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS22(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS22_SHIFT)) & FCCU_NCF_S_NCFS22_MASK)
#define FCCU_NCF_S_NCFS23_MASK                   (0x800000U)
#define FCCU_NCF_S_NCFS23_SHIFT                  (23U)
#define FCCU_NCF_S_NCFS23_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS23(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS23_SHIFT)) & FCCU_NCF_S_NCFS23_MASK)
#define FCCU_NCF_S_NCFS24_MASK                   (0x1000000U)
#define FCCU_NCF_S_NCFS24_SHIFT                  (24U)
#define FCCU_NCF_S_NCFS24_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS24(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS24_SHIFT)) & FCCU_NCF_S_NCFS24_MASK)
#define FCCU_NCF_S_NCFS25_MASK                   (0x2000000U)
#define FCCU_NCF_S_NCFS25_SHIFT                  (25U)
#define FCCU_NCF_S_NCFS25_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS25(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS25_SHIFT)) & FCCU_NCF_S_NCFS25_MASK)
#define FCCU_NCF_S_NCFS26_MASK                   (0x4000000U)
#define FCCU_NCF_S_NCFS26_SHIFT                  (26U)
#define FCCU_NCF_S_NCFS26_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS26(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS26_SHIFT)) & FCCU_NCF_S_NCFS26_MASK)
#define FCCU_NCF_S_NCFS27_MASK                   (0x8000000U)
#define FCCU_NCF_S_NCFS27_SHIFT                  (27U)
#define FCCU_NCF_S_NCFS27_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS27(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS27_SHIFT)) & FCCU_NCF_S_NCFS27_MASK)
#define FCCU_NCF_S_NCFS28_MASK                   (0x10000000U)
#define FCCU_NCF_S_NCFS28_SHIFT                  (28U)
#define FCCU_NCF_S_NCFS28_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS28(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS28_SHIFT)) & FCCU_NCF_S_NCFS28_MASK)
#define FCCU_NCF_S_NCFS29_MASK                   (0x20000000U)
#define FCCU_NCF_S_NCFS29_SHIFT                  (29U)
#define FCCU_NCF_S_NCFS29_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS29(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS29_SHIFT)) & FCCU_NCF_S_NCFS29_MASK)
#define FCCU_NCF_S_NCFS30_MASK                   (0x40000000U)
#define FCCU_NCF_S_NCFS30_SHIFT                  (30U)
#define FCCU_NCF_S_NCFS30_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS30(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS30_SHIFT)) & FCCU_NCF_S_NCFS30_MASK)
#define FCCU_NCF_S_NCFS31_MASK                   (0x80000000U)
#define FCCU_NCF_S_NCFS31_SHIFT                  (31U)
#define FCCU_NCF_S_NCFS31_WIDTH                  (1U)
#define FCCU_NCF_S_NCFS31(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_S_NCFS31_SHIFT)) & FCCU_NCF_S_NCFS31_MASK)
/*! @} */

/*! @name NCFK - Non-critical Fault Key */
/*! @{ */
#define FCCU_NCFK_NCFK_MASK                      (0xFFFFFFFFU)
#define FCCU_NCFK_NCFK_SHIFT                     (0U)
#define FCCU_NCFK_NCFK_WIDTH                     (32U)
#define FCCU_NCFK_NCFK(x)                        (((uint32_t)(((uint32_t)(x)) << FCCU_NCFK_NCFK_SHIFT)) & FCCU_NCFK_NCFK_MASK)
/*! @} */

/*! @name NCF_E - Non-critical Fault Enable */
/*! @{ */
#define FCCU_NCF_E_NCFE0_MASK                    (0x1U)
#define FCCU_NCF_E_NCFE0_SHIFT                   (0U)
#define FCCU_NCF_E_NCFE0_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE0(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE0_SHIFT)) & FCCU_NCF_E_NCFE0_MASK)
#define FCCU_NCF_E_NCFE1_MASK                    (0x2U)
#define FCCU_NCF_E_NCFE1_SHIFT                   (1U)
#define FCCU_NCF_E_NCFE1_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE1(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE1_SHIFT)) & FCCU_NCF_E_NCFE1_MASK)
#define FCCU_NCF_E_NCFE2_MASK                    (0x4U)
#define FCCU_NCF_E_NCFE2_SHIFT                   (2U)
#define FCCU_NCF_E_NCFE2_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE2(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE2_SHIFT)) & FCCU_NCF_E_NCFE2_MASK)
#define FCCU_NCF_E_NCFE3_MASK                    (0x8U)
#define FCCU_NCF_E_NCFE3_SHIFT                   (3U)
#define FCCU_NCF_E_NCFE3_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE3(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE3_SHIFT)) & FCCU_NCF_E_NCFE3_MASK)
#define FCCU_NCF_E_NCFE4_MASK                    (0x10U)
#define FCCU_NCF_E_NCFE4_SHIFT                   (4U)
#define FCCU_NCF_E_NCFE4_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE4(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE4_SHIFT)) & FCCU_NCF_E_NCFE4_MASK)
#define FCCU_NCF_E_NCFE5_MASK                    (0x20U)
#define FCCU_NCF_E_NCFE5_SHIFT                   (5U)
#define FCCU_NCF_E_NCFE5_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE5(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE5_SHIFT)) & FCCU_NCF_E_NCFE5_MASK)
#define FCCU_NCF_E_NCFE6_MASK                    (0x40U)
#define FCCU_NCF_E_NCFE6_SHIFT                   (6U)
#define FCCU_NCF_E_NCFE6_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE6(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE6_SHIFT)) & FCCU_NCF_E_NCFE6_MASK)
#define FCCU_NCF_E_NCFE7_MASK                    (0x80U)
#define FCCU_NCF_E_NCFE7_SHIFT                   (7U)
#define FCCU_NCF_E_NCFE7_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE7(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE7_SHIFT)) & FCCU_NCF_E_NCFE7_MASK)
#define FCCU_NCF_E_NCFE8_MASK                    (0x100U)
#define FCCU_NCF_E_NCFE8_SHIFT                   (8U)
#define FCCU_NCF_E_NCFE8_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE8(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE8_SHIFT)) & FCCU_NCF_E_NCFE8_MASK)
#define FCCU_NCF_E_NCFE9_MASK                    (0x200U)
#define FCCU_NCF_E_NCFE9_SHIFT                   (9U)
#define FCCU_NCF_E_NCFE9_WIDTH                   (1U)
#define FCCU_NCF_E_NCFE9(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE9_SHIFT)) & FCCU_NCF_E_NCFE9_MASK)
#define FCCU_NCF_E_NCFE10_MASK                   (0x400U)
#define FCCU_NCF_E_NCFE10_SHIFT                  (10U)
#define FCCU_NCF_E_NCFE10_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE10(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE10_SHIFT)) & FCCU_NCF_E_NCFE10_MASK)
#define FCCU_NCF_E_NCFE11_MASK                   (0x800U)
#define FCCU_NCF_E_NCFE11_SHIFT                  (11U)
#define FCCU_NCF_E_NCFE11_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE11(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE11_SHIFT)) & FCCU_NCF_E_NCFE11_MASK)
#define FCCU_NCF_E_NCFE12_MASK                   (0x1000U)
#define FCCU_NCF_E_NCFE12_SHIFT                  (12U)
#define FCCU_NCF_E_NCFE12_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE12(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE12_SHIFT)) & FCCU_NCF_E_NCFE12_MASK)
#define FCCU_NCF_E_NCFE13_MASK                   (0x2000U)
#define FCCU_NCF_E_NCFE13_SHIFT                  (13U)
#define FCCU_NCF_E_NCFE13_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE13(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE13_SHIFT)) & FCCU_NCF_E_NCFE13_MASK)
#define FCCU_NCF_E_NCFE14_MASK                   (0x4000U)
#define FCCU_NCF_E_NCFE14_SHIFT                  (14U)
#define FCCU_NCF_E_NCFE14_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE14(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE14_SHIFT)) & FCCU_NCF_E_NCFE14_MASK)
#define FCCU_NCF_E_NCFE15_MASK                   (0x8000U)
#define FCCU_NCF_E_NCFE15_SHIFT                  (15U)
#define FCCU_NCF_E_NCFE15_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE15(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE15_SHIFT)) & FCCU_NCF_E_NCFE15_MASK)
#define FCCU_NCF_E_NCFE16_MASK                   (0x10000U)
#define FCCU_NCF_E_NCFE16_SHIFT                  (16U)
#define FCCU_NCF_E_NCFE16_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE16(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE16_SHIFT)) & FCCU_NCF_E_NCFE16_MASK)
#define FCCU_NCF_E_NCFE17_MASK                   (0x20000U)
#define FCCU_NCF_E_NCFE17_SHIFT                  (17U)
#define FCCU_NCF_E_NCFE17_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE17(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE17_SHIFT)) & FCCU_NCF_E_NCFE17_MASK)
#define FCCU_NCF_E_NCFE18_MASK                   (0x40000U)
#define FCCU_NCF_E_NCFE18_SHIFT                  (18U)
#define FCCU_NCF_E_NCFE18_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE18(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE18_SHIFT)) & FCCU_NCF_E_NCFE18_MASK)
#define FCCU_NCF_E_NCFE19_MASK                   (0x80000U)
#define FCCU_NCF_E_NCFE19_SHIFT                  (19U)
#define FCCU_NCF_E_NCFE19_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE19(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE19_SHIFT)) & FCCU_NCF_E_NCFE19_MASK)
#define FCCU_NCF_E_NCFE20_MASK                   (0x100000U)
#define FCCU_NCF_E_NCFE20_SHIFT                  (20U)
#define FCCU_NCF_E_NCFE20_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE20(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE20_SHIFT)) & FCCU_NCF_E_NCFE20_MASK)
#define FCCU_NCF_E_NCFE21_MASK                   (0x200000U)
#define FCCU_NCF_E_NCFE21_SHIFT                  (21U)
#define FCCU_NCF_E_NCFE21_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE21(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE21_SHIFT)) & FCCU_NCF_E_NCFE21_MASK)
#define FCCU_NCF_E_NCFE22_MASK                   (0x400000U)
#define FCCU_NCF_E_NCFE22_SHIFT                  (22U)
#define FCCU_NCF_E_NCFE22_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE22(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE22_SHIFT)) & FCCU_NCF_E_NCFE22_MASK)
#define FCCU_NCF_E_NCFE23_MASK                   (0x800000U)
#define FCCU_NCF_E_NCFE23_SHIFT                  (23U)
#define FCCU_NCF_E_NCFE23_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE23(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE23_SHIFT)) & FCCU_NCF_E_NCFE23_MASK)
#define FCCU_NCF_E_NCFE24_MASK                   (0x1000000U)
#define FCCU_NCF_E_NCFE24_SHIFT                  (24U)
#define FCCU_NCF_E_NCFE24_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE24(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE24_SHIFT)) & FCCU_NCF_E_NCFE24_MASK)
#define FCCU_NCF_E_NCFE25_MASK                   (0x2000000U)
#define FCCU_NCF_E_NCFE25_SHIFT                  (25U)
#define FCCU_NCF_E_NCFE25_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE25(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE25_SHIFT)) & FCCU_NCF_E_NCFE25_MASK)
#define FCCU_NCF_E_NCFE26_MASK                   (0x4000000U)
#define FCCU_NCF_E_NCFE26_SHIFT                  (26U)
#define FCCU_NCF_E_NCFE26_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE26(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE26_SHIFT)) & FCCU_NCF_E_NCFE26_MASK)
#define FCCU_NCF_E_NCFE27_MASK                   (0x8000000U)
#define FCCU_NCF_E_NCFE27_SHIFT                  (27U)
#define FCCU_NCF_E_NCFE27_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE27(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE27_SHIFT)) & FCCU_NCF_E_NCFE27_MASK)
#define FCCU_NCF_E_NCFE28_MASK                   (0x10000000U)
#define FCCU_NCF_E_NCFE28_SHIFT                  (28U)
#define FCCU_NCF_E_NCFE28_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE28(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE28_SHIFT)) & FCCU_NCF_E_NCFE28_MASK)
#define FCCU_NCF_E_NCFE29_MASK                   (0x20000000U)
#define FCCU_NCF_E_NCFE29_SHIFT                  (29U)
#define FCCU_NCF_E_NCFE29_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE29(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE29_SHIFT)) & FCCU_NCF_E_NCFE29_MASK)
#define FCCU_NCF_E_NCFE30_MASK                   (0x40000000U)
#define FCCU_NCF_E_NCFE30_SHIFT                  (30U)
#define FCCU_NCF_E_NCFE30_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE30(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE30_SHIFT)) & FCCU_NCF_E_NCFE30_MASK)
#define FCCU_NCF_E_NCFE31_MASK                   (0x80000000U)
#define FCCU_NCF_E_NCFE31_SHIFT                  (31U)
#define FCCU_NCF_E_NCFE31_WIDTH                  (1U)
#define FCCU_NCF_E_NCFE31(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_E_NCFE31_SHIFT)) & FCCU_NCF_E_NCFE31_MASK)
/*! @} */

/*! @name NCF_TOE - Non-critical-Fault Alarm-State Timeout Enable */
/*! @{ */
#define FCCU_NCF_TOE_NCFTOE0_MASK                (0x1U)
#define FCCU_NCF_TOE_NCFTOE0_SHIFT               (0U)
#define FCCU_NCF_TOE_NCFTOE0_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE0(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE0_SHIFT)) & FCCU_NCF_TOE_NCFTOE0_MASK)
#define FCCU_NCF_TOE_NCFTOE1_MASK                (0x2U)
#define FCCU_NCF_TOE_NCFTOE1_SHIFT               (1U)
#define FCCU_NCF_TOE_NCFTOE1_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE1(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE1_SHIFT)) & FCCU_NCF_TOE_NCFTOE1_MASK)
#define FCCU_NCF_TOE_NCFTOE2_MASK                (0x4U)
#define FCCU_NCF_TOE_NCFTOE2_SHIFT               (2U)
#define FCCU_NCF_TOE_NCFTOE2_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE2(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE2_SHIFT)) & FCCU_NCF_TOE_NCFTOE2_MASK)
#define FCCU_NCF_TOE_NCFTOE3_MASK                (0x8U)
#define FCCU_NCF_TOE_NCFTOE3_SHIFT               (3U)
#define FCCU_NCF_TOE_NCFTOE3_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE3(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE3_SHIFT)) & FCCU_NCF_TOE_NCFTOE3_MASK)
#define FCCU_NCF_TOE_NCFTOE4_MASK                (0x10U)
#define FCCU_NCF_TOE_NCFTOE4_SHIFT               (4U)
#define FCCU_NCF_TOE_NCFTOE4_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE4(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE4_SHIFT)) & FCCU_NCF_TOE_NCFTOE4_MASK)
#define FCCU_NCF_TOE_NCFTOE5_MASK                (0x20U)
#define FCCU_NCF_TOE_NCFTOE5_SHIFT               (5U)
#define FCCU_NCF_TOE_NCFTOE5_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE5(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE5_SHIFT)) & FCCU_NCF_TOE_NCFTOE5_MASK)
#define FCCU_NCF_TOE_NCFTOE6_MASK                (0x40U)
#define FCCU_NCF_TOE_NCFTOE6_SHIFT               (6U)
#define FCCU_NCF_TOE_NCFTOE6_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE6(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE6_SHIFT)) & FCCU_NCF_TOE_NCFTOE6_MASK)
#define FCCU_NCF_TOE_NCFTOE7_MASK                (0x80U)
#define FCCU_NCF_TOE_NCFTOE7_SHIFT               (7U)
#define FCCU_NCF_TOE_NCFTOE7_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE7(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE7_SHIFT)) & FCCU_NCF_TOE_NCFTOE7_MASK)
#define FCCU_NCF_TOE_NCFTOE8_MASK                (0x100U)
#define FCCU_NCF_TOE_NCFTOE8_SHIFT               (8U)
#define FCCU_NCF_TOE_NCFTOE8_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE8(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE8_SHIFT)) & FCCU_NCF_TOE_NCFTOE8_MASK)
#define FCCU_NCF_TOE_NCFTOE9_MASK                (0x200U)
#define FCCU_NCF_TOE_NCFTOE9_SHIFT               (9U)
#define FCCU_NCF_TOE_NCFTOE9_WIDTH               (1U)
#define FCCU_NCF_TOE_NCFTOE9(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE9_SHIFT)) & FCCU_NCF_TOE_NCFTOE9_MASK)
#define FCCU_NCF_TOE_NCFTOE10_MASK               (0x400U)
#define FCCU_NCF_TOE_NCFTOE10_SHIFT              (10U)
#define FCCU_NCF_TOE_NCFTOE10_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE10(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE10_SHIFT)) & FCCU_NCF_TOE_NCFTOE10_MASK)
#define FCCU_NCF_TOE_NCFTOE11_MASK               (0x800U)
#define FCCU_NCF_TOE_NCFTOE11_SHIFT              (11U)
#define FCCU_NCF_TOE_NCFTOE11_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE11(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE11_SHIFT)) & FCCU_NCF_TOE_NCFTOE11_MASK)
#define FCCU_NCF_TOE_NCFTOE12_MASK               (0x1000U)
#define FCCU_NCF_TOE_NCFTOE12_SHIFT              (12U)
#define FCCU_NCF_TOE_NCFTOE12_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE12(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE12_SHIFT)) & FCCU_NCF_TOE_NCFTOE12_MASK)
#define FCCU_NCF_TOE_NCFTOE13_MASK               (0x2000U)
#define FCCU_NCF_TOE_NCFTOE13_SHIFT              (13U)
#define FCCU_NCF_TOE_NCFTOE13_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE13(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE13_SHIFT)) & FCCU_NCF_TOE_NCFTOE13_MASK)
#define FCCU_NCF_TOE_NCFTOE14_MASK               (0x4000U)
#define FCCU_NCF_TOE_NCFTOE14_SHIFT              (14U)
#define FCCU_NCF_TOE_NCFTOE14_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE14(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE14_SHIFT)) & FCCU_NCF_TOE_NCFTOE14_MASK)
#define FCCU_NCF_TOE_NCFTOE15_MASK               (0x8000U)
#define FCCU_NCF_TOE_NCFTOE15_SHIFT              (15U)
#define FCCU_NCF_TOE_NCFTOE15_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE15(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE15_SHIFT)) & FCCU_NCF_TOE_NCFTOE15_MASK)
#define FCCU_NCF_TOE_NCFTOE16_MASK               (0x10000U)
#define FCCU_NCF_TOE_NCFTOE16_SHIFT              (16U)
#define FCCU_NCF_TOE_NCFTOE16_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE16(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE16_SHIFT)) & FCCU_NCF_TOE_NCFTOE16_MASK)
#define FCCU_NCF_TOE_NCFTOE17_MASK               (0x20000U)
#define FCCU_NCF_TOE_NCFTOE17_SHIFT              (17U)
#define FCCU_NCF_TOE_NCFTOE17_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE17(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE17_SHIFT)) & FCCU_NCF_TOE_NCFTOE17_MASK)
#define FCCU_NCF_TOE_NCFTOE18_MASK               (0x40000U)
#define FCCU_NCF_TOE_NCFTOE18_SHIFT              (18U)
#define FCCU_NCF_TOE_NCFTOE18_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE18(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE18_SHIFT)) & FCCU_NCF_TOE_NCFTOE18_MASK)
#define FCCU_NCF_TOE_NCFTOE19_MASK               (0x80000U)
#define FCCU_NCF_TOE_NCFTOE19_SHIFT              (19U)
#define FCCU_NCF_TOE_NCFTOE19_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE19(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE19_SHIFT)) & FCCU_NCF_TOE_NCFTOE19_MASK)
#define FCCU_NCF_TOE_NCFTOE20_MASK               (0x100000U)
#define FCCU_NCF_TOE_NCFTOE20_SHIFT              (20U)
#define FCCU_NCF_TOE_NCFTOE20_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE20(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE20_SHIFT)) & FCCU_NCF_TOE_NCFTOE20_MASK)
#define FCCU_NCF_TOE_NCFTOE21_MASK               (0x200000U)
#define FCCU_NCF_TOE_NCFTOE21_SHIFT              (21U)
#define FCCU_NCF_TOE_NCFTOE21_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE21(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE21_SHIFT)) & FCCU_NCF_TOE_NCFTOE21_MASK)
#define FCCU_NCF_TOE_NCFTOE22_MASK               (0x400000U)
#define FCCU_NCF_TOE_NCFTOE22_SHIFT              (22U)
#define FCCU_NCF_TOE_NCFTOE22_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE22(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE22_SHIFT)) & FCCU_NCF_TOE_NCFTOE22_MASK)
#define FCCU_NCF_TOE_NCFTOE23_MASK               (0x800000U)
#define FCCU_NCF_TOE_NCFTOE23_SHIFT              (23U)
#define FCCU_NCF_TOE_NCFTOE23_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE23(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE23_SHIFT)) & FCCU_NCF_TOE_NCFTOE23_MASK)
#define FCCU_NCF_TOE_NCFTOE24_MASK               (0x1000000U)
#define FCCU_NCF_TOE_NCFTOE24_SHIFT              (24U)
#define FCCU_NCF_TOE_NCFTOE24_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE24(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE24_SHIFT)) & FCCU_NCF_TOE_NCFTOE24_MASK)
#define FCCU_NCF_TOE_NCFTOE25_MASK               (0x2000000U)
#define FCCU_NCF_TOE_NCFTOE25_SHIFT              (25U)
#define FCCU_NCF_TOE_NCFTOE25_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE25(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE25_SHIFT)) & FCCU_NCF_TOE_NCFTOE25_MASK)
#define FCCU_NCF_TOE_NCFTOE26_MASK               (0x4000000U)
#define FCCU_NCF_TOE_NCFTOE26_SHIFT              (26U)
#define FCCU_NCF_TOE_NCFTOE26_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE26(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE26_SHIFT)) & FCCU_NCF_TOE_NCFTOE26_MASK)
#define FCCU_NCF_TOE_NCFTOE27_MASK               (0x8000000U)
#define FCCU_NCF_TOE_NCFTOE27_SHIFT              (27U)
#define FCCU_NCF_TOE_NCFTOE27_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE27(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE27_SHIFT)) & FCCU_NCF_TOE_NCFTOE27_MASK)
#define FCCU_NCF_TOE_NCFTOE28_MASK               (0x10000000U)
#define FCCU_NCF_TOE_NCFTOE28_SHIFT              (28U)
#define FCCU_NCF_TOE_NCFTOE28_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE28(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE28_SHIFT)) & FCCU_NCF_TOE_NCFTOE28_MASK)
#define FCCU_NCF_TOE_NCFTOE29_MASK               (0x20000000U)
#define FCCU_NCF_TOE_NCFTOE29_SHIFT              (29U)
#define FCCU_NCF_TOE_NCFTOE29_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE29(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE29_SHIFT)) & FCCU_NCF_TOE_NCFTOE29_MASK)
#define FCCU_NCF_TOE_NCFTOE30_MASK               (0x40000000U)
#define FCCU_NCF_TOE_NCFTOE30_SHIFT              (30U)
#define FCCU_NCF_TOE_NCFTOE30_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE30(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE30_SHIFT)) & FCCU_NCF_TOE_NCFTOE30_MASK)
#define FCCU_NCF_TOE_NCFTOE31_MASK               (0x80000000U)
#define FCCU_NCF_TOE_NCFTOE31_SHIFT              (31U)
#define FCCU_NCF_TOE_NCFTOE31_WIDTH              (1U)
#define FCCU_NCF_TOE_NCFTOE31(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TOE_NCFTOE31_SHIFT)) & FCCU_NCF_TOE_NCFTOE31_MASK)
/*! @} */

/*! @name NCF_TO - Non-critical-Fault Alarm-State Timeout Interval */
/*! @{ */
#define FCCU_NCF_TO_TO_MASK                      (0xFFFFFFFFU)
#define FCCU_NCF_TO_TO_SHIFT                     (0U)
#define FCCU_NCF_TO_TO_WIDTH                     (32U)
#define FCCU_NCF_TO_TO(x)                        (((uint32_t)(((uint32_t)(x)) << FCCU_NCF_TO_TO_SHIFT)) & FCCU_NCF_TO_TO_MASK)
/*! @} */

/*! @name CFG_TO - Configuration-State Timeout Interval */
/*! @{ */
#define FCCU_CFG_TO_TO_MASK                      (0x7U)
#define FCCU_CFG_TO_TO_SHIFT                     (0U)
#define FCCU_CFG_TO_TO_WIDTH                     (3U)
#define FCCU_CFG_TO_TO(x)                        (((uint32_t)(((uint32_t)(x)) << FCCU_CFG_TO_TO_SHIFT)) & FCCU_CFG_TO_TO_MASK)
/*! @} */

/*! @name EINOUT - IO Control */
/*! @{ */
#define FCCU_EINOUT_EOUT0_MASK                   (0x1U)
#define FCCU_EINOUT_EOUT0_SHIFT                  (0U)
#define FCCU_EINOUT_EOUT0_WIDTH                  (1U)
#define FCCU_EINOUT_EOUT0(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_EINOUT_EOUT0_SHIFT)) & FCCU_EINOUT_EOUT0_MASK)
#define FCCU_EINOUT_EOUT1_MASK                   (0x2U)
#define FCCU_EINOUT_EOUT1_SHIFT                  (1U)
#define FCCU_EINOUT_EOUT1_WIDTH                  (1U)
#define FCCU_EINOUT_EOUT1(x)                     (((uint32_t)(((uint32_t)(x)) << FCCU_EINOUT_EOUT1_SHIFT)) & FCCU_EINOUT_EOUT1_MASK)
#define FCCU_EINOUT_EIN0_MASK                    (0x10U)
#define FCCU_EINOUT_EIN0_SHIFT                   (4U)
#define FCCU_EINOUT_EIN0_WIDTH                   (1U)
#define FCCU_EINOUT_EIN0(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_EINOUT_EIN0_SHIFT)) & FCCU_EINOUT_EIN0_MASK)
#define FCCU_EINOUT_EIN1_MASK                    (0x20U)
#define FCCU_EINOUT_EIN1_SHIFT                   (5U)
#define FCCU_EINOUT_EIN1_WIDTH                   (1U)
#define FCCU_EINOUT_EIN1(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_EINOUT_EIN1_SHIFT)) & FCCU_EINOUT_EIN1_MASK)
/*! @} */

/*! @name STAT - Status */
/*! @{ */
#define FCCU_STAT_STATUS_MASK                    (0x7U)
#define FCCU_STAT_STATUS_SHIFT                   (0U)
#define FCCU_STAT_STATUS_WIDTH                   (3U)
#define FCCU_STAT_STATUS(x)                      (((uint32_t)(((uint32_t)(x)) << FCCU_STAT_STATUS_SHIFT)) & FCCU_STAT_STATUS_MASK)
#define FCCU_STAT_ESTAT_MASK                     (0x8U)
#define FCCU_STAT_ESTAT_SHIFT                    (3U)
#define FCCU_STAT_ESTAT_WIDTH                    (1U)
#define FCCU_STAT_ESTAT(x)                       (((uint32_t)(((uint32_t)(x)) << FCCU_STAT_ESTAT_SHIFT)) & FCCU_STAT_ESTAT_MASK)
#define FCCU_STAT_PhysicErrorPin_MASK            (0x30U)
#define FCCU_STAT_PhysicErrorPin_SHIFT           (4U)
#define FCCU_STAT_PhysicErrorPin_WIDTH           (2U)
#define FCCU_STAT_PhysicErrorPin(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_STAT_PhysicErrorPin_SHIFT)) & FCCU_STAT_PhysicErrorPin_MASK)
/*! @} */

/*! @name N2AF_STATUS - Normal-to-Alarm Freeze Status */
/*! @{ */
#define FCCU_N2AF_STATUS_NAFS_MASK               (0xFFU)
#define FCCU_N2AF_STATUS_NAFS_SHIFT              (0U)
#define FCCU_N2AF_STATUS_NAFS_WIDTH              (8U)
#define FCCU_N2AF_STATUS_NAFS(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_N2AF_STATUS_NAFS_SHIFT)) & FCCU_N2AF_STATUS_NAFS_MASK)
/*! @} */

/*! @name A2FF_STATUS - Alarm-to-Fault Freeze Status */
/*! @{ */
#define FCCU_A2FF_STATUS_AFFS_MASK               (0xFFU)
#define FCCU_A2FF_STATUS_AFFS_SHIFT              (0U)
#define FCCU_A2FF_STATUS_AFFS_WIDTH              (8U)
#define FCCU_A2FF_STATUS_AFFS(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_A2FF_STATUS_AFFS_SHIFT)) & FCCU_A2FF_STATUS_AFFS_MASK)
#define FCCU_A2FF_STATUS_AF_SRC_MASK             (0x300U)
#define FCCU_A2FF_STATUS_AF_SRC_SHIFT            (8U)
#define FCCU_A2FF_STATUS_AF_SRC_WIDTH            (2U)
#define FCCU_A2FF_STATUS_AF_SRC(x)               (((uint32_t)(((uint32_t)(x)) << FCCU_A2FF_STATUS_AF_SRC_SHIFT)) & FCCU_A2FF_STATUS_AF_SRC_MASK)
/*! @} */

/*! @name N2FF_STATUS - Normal-to-Fault Freeze Status */
/*! @{ */
#define FCCU_N2FF_STATUS_NFFS_MASK               (0xFFU)
#define FCCU_N2FF_STATUS_NFFS_SHIFT              (0U)
#define FCCU_N2FF_STATUS_NFFS_WIDTH              (8U)
#define FCCU_N2FF_STATUS_NFFS(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_N2FF_STATUS_NFFS_SHIFT)) & FCCU_N2FF_STATUS_NFFS_MASK)
#define FCCU_N2FF_STATUS_NF_SRC_MASK             (0x300U)
#define FCCU_N2FF_STATUS_NF_SRC_SHIFT            (8U)
#define FCCU_N2FF_STATUS_NF_SRC_WIDTH            (2U)
#define FCCU_N2FF_STATUS_NF_SRC(x)               (((uint32_t)(((uint32_t)(x)) << FCCU_N2FF_STATUS_NF_SRC_SHIFT)) & FCCU_N2FF_STATUS_NF_SRC_MASK)
/*! @} */

/*! @name F2AF_STATUS - Fault-to-Alarm Freeze Status */
/*! @{ */
#define FCCU_F2AF_STATUS_FAFS_MASK               (0x1FFU)
#define FCCU_F2AF_STATUS_FAFS_SHIFT              (0U)
#define FCCU_F2AF_STATUS_FAFS_WIDTH              (9U)
#define FCCU_F2AF_STATUS_FAFS(x)                 (((uint32_t)(((uint32_t)(x)) << FCCU_F2AF_STATUS_FAFS_SHIFT)) & FCCU_F2AF_STATUS_FAFS_MASK)
/*! @} */

/*! @name NCFF - Non-critical Fault Fake */
/*! @{ */
#define FCCU_NCFF_FNCFC_MASK                     (0x7FU)
#define FCCU_NCFF_FNCFC_SHIFT                    (0U)
#define FCCU_NCFF_FNCFC_WIDTH                    (7U)
#define FCCU_NCFF_FNCFC(x)                       (((uint32_t)(((uint32_t)(x)) << FCCU_NCFF_FNCFC_SHIFT)) & FCCU_NCFF_FNCFC_MASK)
/*! @} */

/*! @name IRQ_STAT - IRQ Status */
/*! @{ */
#define FCCU_IRQ_STAT_CFG_TO_STAT_MASK           (0x1U)
#define FCCU_IRQ_STAT_CFG_TO_STAT_SHIFT          (0U)
#define FCCU_IRQ_STAT_CFG_TO_STAT_WIDTH          (1U)
#define FCCU_IRQ_STAT_CFG_TO_STAT(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_STAT_CFG_TO_STAT_SHIFT)) & FCCU_IRQ_STAT_CFG_TO_STAT_MASK)
#define FCCU_IRQ_STAT_ALRM_STAT_MASK             (0x2U)
#define FCCU_IRQ_STAT_ALRM_STAT_SHIFT            (1U)
#define FCCU_IRQ_STAT_ALRM_STAT_WIDTH            (1U)
#define FCCU_IRQ_STAT_ALRM_STAT(x)               (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_STAT_ALRM_STAT_SHIFT)) & FCCU_IRQ_STAT_ALRM_STAT_MASK)
#define FCCU_IRQ_STAT_NMI_STAT_MASK              (0x4U)
#define FCCU_IRQ_STAT_NMI_STAT_SHIFT             (2U)
#define FCCU_IRQ_STAT_NMI_STAT_WIDTH             (1U)
#define FCCU_IRQ_STAT_NMI_STAT(x)                (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_STAT_NMI_STAT_SHIFT)) & FCCU_IRQ_STAT_NMI_STAT_MASK)
/*! @} */

/*! @name IRQ_EN - IRQ Enable */
/*! @{ */
#define FCCU_IRQ_EN_CFG_TO_IEN_MASK              (0x1U)
#define FCCU_IRQ_EN_CFG_TO_IEN_SHIFT             (0U)
#define FCCU_IRQ_EN_CFG_TO_IEN_WIDTH             (1U)
#define FCCU_IRQ_EN_CFG_TO_IEN(x)                (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_EN_CFG_TO_IEN_SHIFT)) & FCCU_IRQ_EN_CFG_TO_IEN_MASK)
/*! @} */

/*! @name TRANS_LOCK - Transient Configuration Lock */
/*! @{ */
#define FCCU_TRANS_LOCK_TRANSKEY_MASK            (0x1FFU)
#define FCCU_TRANS_LOCK_TRANSKEY_SHIFT           (0U)
#define FCCU_TRANS_LOCK_TRANSKEY_WIDTH           (9U)
#define FCCU_TRANS_LOCK_TRANSKEY(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_TRANS_LOCK_TRANSKEY_SHIFT)) & FCCU_TRANS_LOCK_TRANSKEY_MASK)
/*! @} */

/*! @name PERMNT_LOCK - Permanent Configuration Lock */
/*! @{ */
#define FCCU_PERMNT_LOCK_PERMNTKEY_MASK          (0x1FFU)
#define FCCU_PERMNT_LOCK_PERMNTKEY_SHIFT         (0U)
#define FCCU_PERMNT_LOCK_PERMNTKEY_WIDTH         (9U)
#define FCCU_PERMNT_LOCK_PERMNTKEY(x)            (((uint32_t)(((uint32_t)(x)) << FCCU_PERMNT_LOCK_PERMNTKEY_SHIFT)) & FCCU_PERMNT_LOCK_PERMNTKEY_MASK)
/*! @} */

/*! @name DELTA_T - Delta T */
/*! @{ */
#define FCCU_DELTA_T_DELTA_T_MASK                (0x3FFFU)
#define FCCU_DELTA_T_DELTA_T_SHIFT               (0U)
#define FCCU_DELTA_T_DELTA_T_WIDTH               (14U)
#define FCCU_DELTA_T_DELTA_T(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_DELTA_T_DELTA_T_SHIFT)) & FCCU_DELTA_T_DELTA_T_MASK)
/*! @} */

/*! @name IRQ_ALARM_EN - Non-critical Alarm-State Interrupt-Request Enable */
/*! @{ */
#define FCCU_IRQ_ALARM_EN_IRQEN0_MASK            (0x1U)
#define FCCU_IRQ_ALARM_EN_IRQEN0_SHIFT           (0U)
#define FCCU_IRQ_ALARM_EN_IRQEN0_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN0(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN0_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN0_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN1_MASK            (0x2U)
#define FCCU_IRQ_ALARM_EN_IRQEN1_SHIFT           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN1_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN1(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN1_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN1_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN2_MASK            (0x4U)
#define FCCU_IRQ_ALARM_EN_IRQEN2_SHIFT           (2U)
#define FCCU_IRQ_ALARM_EN_IRQEN2_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN2(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN2_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN2_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN3_MASK            (0x8U)
#define FCCU_IRQ_ALARM_EN_IRQEN3_SHIFT           (3U)
#define FCCU_IRQ_ALARM_EN_IRQEN3_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN3(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN3_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN3_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN4_MASK            (0x10U)
#define FCCU_IRQ_ALARM_EN_IRQEN4_SHIFT           (4U)
#define FCCU_IRQ_ALARM_EN_IRQEN4_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN4(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN4_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN4_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN5_MASK            (0x20U)
#define FCCU_IRQ_ALARM_EN_IRQEN5_SHIFT           (5U)
#define FCCU_IRQ_ALARM_EN_IRQEN5_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN5(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN5_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN5_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN6_MASK            (0x40U)
#define FCCU_IRQ_ALARM_EN_IRQEN6_SHIFT           (6U)
#define FCCU_IRQ_ALARM_EN_IRQEN6_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN6(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN6_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN6_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN7_MASK            (0x80U)
#define FCCU_IRQ_ALARM_EN_IRQEN7_SHIFT           (7U)
#define FCCU_IRQ_ALARM_EN_IRQEN7_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN7(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN7_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN7_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN8_MASK            (0x100U)
#define FCCU_IRQ_ALARM_EN_IRQEN8_SHIFT           (8U)
#define FCCU_IRQ_ALARM_EN_IRQEN8_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN8(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN8_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN8_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN9_MASK            (0x200U)
#define FCCU_IRQ_ALARM_EN_IRQEN9_SHIFT           (9U)
#define FCCU_IRQ_ALARM_EN_IRQEN9_WIDTH           (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN9(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN9_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN9_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN10_MASK           (0x400U)
#define FCCU_IRQ_ALARM_EN_IRQEN10_SHIFT          (10U)
#define FCCU_IRQ_ALARM_EN_IRQEN10_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN10(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN10_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN10_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN11_MASK           (0x800U)
#define FCCU_IRQ_ALARM_EN_IRQEN11_SHIFT          (11U)
#define FCCU_IRQ_ALARM_EN_IRQEN11_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN11(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN11_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN11_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN12_MASK           (0x1000U)
#define FCCU_IRQ_ALARM_EN_IRQEN12_SHIFT          (12U)
#define FCCU_IRQ_ALARM_EN_IRQEN12_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN12(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN12_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN12_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN13_MASK           (0x2000U)
#define FCCU_IRQ_ALARM_EN_IRQEN13_SHIFT          (13U)
#define FCCU_IRQ_ALARM_EN_IRQEN13_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN13(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN13_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN13_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN14_MASK           (0x4000U)
#define FCCU_IRQ_ALARM_EN_IRQEN14_SHIFT          (14U)
#define FCCU_IRQ_ALARM_EN_IRQEN14_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN14(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN14_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN14_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN15_MASK           (0x8000U)
#define FCCU_IRQ_ALARM_EN_IRQEN15_SHIFT          (15U)
#define FCCU_IRQ_ALARM_EN_IRQEN15_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN15(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN15_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN15_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN16_MASK           (0x10000U)
#define FCCU_IRQ_ALARM_EN_IRQEN16_SHIFT          (16U)
#define FCCU_IRQ_ALARM_EN_IRQEN16_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN16(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN16_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN16_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN17_MASK           (0x20000U)
#define FCCU_IRQ_ALARM_EN_IRQEN17_SHIFT          (17U)
#define FCCU_IRQ_ALARM_EN_IRQEN17_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN17(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN17_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN17_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN18_MASK           (0x40000U)
#define FCCU_IRQ_ALARM_EN_IRQEN18_SHIFT          (18U)
#define FCCU_IRQ_ALARM_EN_IRQEN18_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN18(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN18_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN18_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN19_MASK           (0x80000U)
#define FCCU_IRQ_ALARM_EN_IRQEN19_SHIFT          (19U)
#define FCCU_IRQ_ALARM_EN_IRQEN19_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN19(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN19_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN19_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN20_MASK           (0x100000U)
#define FCCU_IRQ_ALARM_EN_IRQEN20_SHIFT          (20U)
#define FCCU_IRQ_ALARM_EN_IRQEN20_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN20(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN20_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN20_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN21_MASK           (0x200000U)
#define FCCU_IRQ_ALARM_EN_IRQEN21_SHIFT          (21U)
#define FCCU_IRQ_ALARM_EN_IRQEN21_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN21(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN21_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN21_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN22_MASK           (0x400000U)
#define FCCU_IRQ_ALARM_EN_IRQEN22_SHIFT          (22U)
#define FCCU_IRQ_ALARM_EN_IRQEN22_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN22(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN22_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN22_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN23_MASK           (0x800000U)
#define FCCU_IRQ_ALARM_EN_IRQEN23_SHIFT          (23U)
#define FCCU_IRQ_ALARM_EN_IRQEN23_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN23(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN23_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN23_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN24_MASK           (0x1000000U)
#define FCCU_IRQ_ALARM_EN_IRQEN24_SHIFT          (24U)
#define FCCU_IRQ_ALARM_EN_IRQEN24_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN24(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN24_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN24_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN25_MASK           (0x2000000U)
#define FCCU_IRQ_ALARM_EN_IRQEN25_SHIFT          (25U)
#define FCCU_IRQ_ALARM_EN_IRQEN25_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN25(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN25_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN25_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN26_MASK           (0x4000000U)
#define FCCU_IRQ_ALARM_EN_IRQEN26_SHIFT          (26U)
#define FCCU_IRQ_ALARM_EN_IRQEN26_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN26(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN26_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN26_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN27_MASK           (0x8000000U)
#define FCCU_IRQ_ALARM_EN_IRQEN27_SHIFT          (27U)
#define FCCU_IRQ_ALARM_EN_IRQEN27_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN27(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN27_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN27_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN28_MASK           (0x10000000U)
#define FCCU_IRQ_ALARM_EN_IRQEN28_SHIFT          (28U)
#define FCCU_IRQ_ALARM_EN_IRQEN28_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN28(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN28_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN28_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN29_MASK           (0x20000000U)
#define FCCU_IRQ_ALARM_EN_IRQEN29_SHIFT          (29U)
#define FCCU_IRQ_ALARM_EN_IRQEN29_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN29(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN29_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN29_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN30_MASK           (0x40000000U)
#define FCCU_IRQ_ALARM_EN_IRQEN30_SHIFT          (30U)
#define FCCU_IRQ_ALARM_EN_IRQEN30_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN30(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN30_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN30_MASK)
#define FCCU_IRQ_ALARM_EN_IRQEN31_MASK           (0x80000000U)
#define FCCU_IRQ_ALARM_EN_IRQEN31_SHIFT          (31U)
#define FCCU_IRQ_ALARM_EN_IRQEN31_WIDTH          (1U)
#define FCCU_IRQ_ALARM_EN_IRQEN31(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_IRQ_ALARM_EN_IRQEN31_SHIFT)) & FCCU_IRQ_ALARM_EN_IRQEN31_MASK)
/*! @} */

/*! @name NMI_EN - Non-critical Fault-State Non-maskable-Interrupt-Request Enable */
/*! @{ */
#define FCCU_NMI_EN_NMIEN0_MASK                  (0x1U)
#define FCCU_NMI_EN_NMIEN0_SHIFT                 (0U)
#define FCCU_NMI_EN_NMIEN0_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN0(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN0_SHIFT)) & FCCU_NMI_EN_NMIEN0_MASK)
#define FCCU_NMI_EN_NMIEN1_MASK                  (0x2U)
#define FCCU_NMI_EN_NMIEN1_SHIFT                 (1U)
#define FCCU_NMI_EN_NMIEN1_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN1(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN1_SHIFT)) & FCCU_NMI_EN_NMIEN1_MASK)
#define FCCU_NMI_EN_NMIEN2_MASK                  (0x4U)
#define FCCU_NMI_EN_NMIEN2_SHIFT                 (2U)
#define FCCU_NMI_EN_NMIEN2_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN2(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN2_SHIFT)) & FCCU_NMI_EN_NMIEN2_MASK)
#define FCCU_NMI_EN_NMIEN3_MASK                  (0x8U)
#define FCCU_NMI_EN_NMIEN3_SHIFT                 (3U)
#define FCCU_NMI_EN_NMIEN3_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN3(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN3_SHIFT)) & FCCU_NMI_EN_NMIEN3_MASK)
#define FCCU_NMI_EN_NMIEN4_MASK                  (0x10U)
#define FCCU_NMI_EN_NMIEN4_SHIFT                 (4U)
#define FCCU_NMI_EN_NMIEN4_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN4(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN4_SHIFT)) & FCCU_NMI_EN_NMIEN4_MASK)
#define FCCU_NMI_EN_NMIEN5_MASK                  (0x20U)
#define FCCU_NMI_EN_NMIEN5_SHIFT                 (5U)
#define FCCU_NMI_EN_NMIEN5_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN5(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN5_SHIFT)) & FCCU_NMI_EN_NMIEN5_MASK)
#define FCCU_NMI_EN_NMIEN6_MASK                  (0x40U)
#define FCCU_NMI_EN_NMIEN6_SHIFT                 (6U)
#define FCCU_NMI_EN_NMIEN6_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN6(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN6_SHIFT)) & FCCU_NMI_EN_NMIEN6_MASK)
#define FCCU_NMI_EN_NMIEN7_MASK                  (0x80U)
#define FCCU_NMI_EN_NMIEN7_SHIFT                 (7U)
#define FCCU_NMI_EN_NMIEN7_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN7(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN7_SHIFT)) & FCCU_NMI_EN_NMIEN7_MASK)
#define FCCU_NMI_EN_NMIEN8_MASK                  (0x100U)
#define FCCU_NMI_EN_NMIEN8_SHIFT                 (8U)
#define FCCU_NMI_EN_NMIEN8_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN8(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN8_SHIFT)) & FCCU_NMI_EN_NMIEN8_MASK)
#define FCCU_NMI_EN_NMIEN9_MASK                  (0x200U)
#define FCCU_NMI_EN_NMIEN9_SHIFT                 (9U)
#define FCCU_NMI_EN_NMIEN9_WIDTH                 (1U)
#define FCCU_NMI_EN_NMIEN9(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN9_SHIFT)) & FCCU_NMI_EN_NMIEN9_MASK)
#define FCCU_NMI_EN_NMIEN10_MASK                 (0x400U)
#define FCCU_NMI_EN_NMIEN10_SHIFT                (10U)
#define FCCU_NMI_EN_NMIEN10_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN10(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN10_SHIFT)) & FCCU_NMI_EN_NMIEN10_MASK)
#define FCCU_NMI_EN_NMIEN11_MASK                 (0x800U)
#define FCCU_NMI_EN_NMIEN11_SHIFT                (11U)
#define FCCU_NMI_EN_NMIEN11_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN11(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN11_SHIFT)) & FCCU_NMI_EN_NMIEN11_MASK)
#define FCCU_NMI_EN_NMIEN12_MASK                 (0x1000U)
#define FCCU_NMI_EN_NMIEN12_SHIFT                (12U)
#define FCCU_NMI_EN_NMIEN12_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN12(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN12_SHIFT)) & FCCU_NMI_EN_NMIEN12_MASK)
#define FCCU_NMI_EN_NMIEN13_MASK                 (0x2000U)
#define FCCU_NMI_EN_NMIEN13_SHIFT                (13U)
#define FCCU_NMI_EN_NMIEN13_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN13(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN13_SHIFT)) & FCCU_NMI_EN_NMIEN13_MASK)
#define FCCU_NMI_EN_NMIEN14_MASK                 (0x4000U)
#define FCCU_NMI_EN_NMIEN14_SHIFT                (14U)
#define FCCU_NMI_EN_NMIEN14_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN14(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN14_SHIFT)) & FCCU_NMI_EN_NMIEN14_MASK)
#define FCCU_NMI_EN_NMIEN15_MASK                 (0x8000U)
#define FCCU_NMI_EN_NMIEN15_SHIFT                (15U)
#define FCCU_NMI_EN_NMIEN15_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN15(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN15_SHIFT)) & FCCU_NMI_EN_NMIEN15_MASK)
#define FCCU_NMI_EN_NMIEN16_MASK                 (0x10000U)
#define FCCU_NMI_EN_NMIEN16_SHIFT                (16U)
#define FCCU_NMI_EN_NMIEN16_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN16(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN16_SHIFT)) & FCCU_NMI_EN_NMIEN16_MASK)
#define FCCU_NMI_EN_NMIEN17_MASK                 (0x20000U)
#define FCCU_NMI_EN_NMIEN17_SHIFT                (17U)
#define FCCU_NMI_EN_NMIEN17_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN17(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN17_SHIFT)) & FCCU_NMI_EN_NMIEN17_MASK)
#define FCCU_NMI_EN_NMIEN18_MASK                 (0x40000U)
#define FCCU_NMI_EN_NMIEN18_SHIFT                (18U)
#define FCCU_NMI_EN_NMIEN18_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN18(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN18_SHIFT)) & FCCU_NMI_EN_NMIEN18_MASK)
#define FCCU_NMI_EN_NMIEN19_MASK                 (0x80000U)
#define FCCU_NMI_EN_NMIEN19_SHIFT                (19U)
#define FCCU_NMI_EN_NMIEN19_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN19(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN19_SHIFT)) & FCCU_NMI_EN_NMIEN19_MASK)
#define FCCU_NMI_EN_NMIEN20_MASK                 (0x100000U)
#define FCCU_NMI_EN_NMIEN20_SHIFT                (20U)
#define FCCU_NMI_EN_NMIEN20_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN20(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN20_SHIFT)) & FCCU_NMI_EN_NMIEN20_MASK)
#define FCCU_NMI_EN_NMIEN21_MASK                 (0x200000U)
#define FCCU_NMI_EN_NMIEN21_SHIFT                (21U)
#define FCCU_NMI_EN_NMIEN21_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN21(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN21_SHIFT)) & FCCU_NMI_EN_NMIEN21_MASK)
#define FCCU_NMI_EN_NMIEN22_MASK                 (0x400000U)
#define FCCU_NMI_EN_NMIEN22_SHIFT                (22U)
#define FCCU_NMI_EN_NMIEN22_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN22(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN22_SHIFT)) & FCCU_NMI_EN_NMIEN22_MASK)
#define FCCU_NMI_EN_NMIEN23_MASK                 (0x800000U)
#define FCCU_NMI_EN_NMIEN23_SHIFT                (23U)
#define FCCU_NMI_EN_NMIEN23_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN23(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN23_SHIFT)) & FCCU_NMI_EN_NMIEN23_MASK)
#define FCCU_NMI_EN_NMIEN24_MASK                 (0x1000000U)
#define FCCU_NMI_EN_NMIEN24_SHIFT                (24U)
#define FCCU_NMI_EN_NMIEN24_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN24(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN24_SHIFT)) & FCCU_NMI_EN_NMIEN24_MASK)
#define FCCU_NMI_EN_NMIEN25_MASK                 (0x2000000U)
#define FCCU_NMI_EN_NMIEN25_SHIFT                (25U)
#define FCCU_NMI_EN_NMIEN25_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN25(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN25_SHIFT)) & FCCU_NMI_EN_NMIEN25_MASK)
#define FCCU_NMI_EN_NMIEN26_MASK                 (0x4000000U)
#define FCCU_NMI_EN_NMIEN26_SHIFT                (26U)
#define FCCU_NMI_EN_NMIEN26_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN26(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN26_SHIFT)) & FCCU_NMI_EN_NMIEN26_MASK)
#define FCCU_NMI_EN_NMIEN27_MASK                 (0x8000000U)
#define FCCU_NMI_EN_NMIEN27_SHIFT                (27U)
#define FCCU_NMI_EN_NMIEN27_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN27(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN27_SHIFT)) & FCCU_NMI_EN_NMIEN27_MASK)
#define FCCU_NMI_EN_NMIEN28_MASK                 (0x10000000U)
#define FCCU_NMI_EN_NMIEN28_SHIFT                (28U)
#define FCCU_NMI_EN_NMIEN28_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN28(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN28_SHIFT)) & FCCU_NMI_EN_NMIEN28_MASK)
#define FCCU_NMI_EN_NMIEN29_MASK                 (0x20000000U)
#define FCCU_NMI_EN_NMIEN29_SHIFT                (29U)
#define FCCU_NMI_EN_NMIEN29_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN29(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN29_SHIFT)) & FCCU_NMI_EN_NMIEN29_MASK)
#define FCCU_NMI_EN_NMIEN30_MASK                 (0x40000000U)
#define FCCU_NMI_EN_NMIEN30_SHIFT                (30U)
#define FCCU_NMI_EN_NMIEN30_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN30(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN30_SHIFT)) & FCCU_NMI_EN_NMIEN30_MASK)
#define FCCU_NMI_EN_NMIEN31_MASK                 (0x80000000U)
#define FCCU_NMI_EN_NMIEN31_SHIFT                (31U)
#define FCCU_NMI_EN_NMIEN31_WIDTH                (1U)
#define FCCU_NMI_EN_NMIEN31(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_NMI_EN_NMIEN31_SHIFT)) & FCCU_NMI_EN_NMIEN31_MASK)
/*! @} */

/*! @name EOUT_SIG_EN - Non-critical Fault-State EOUT Signaling Enable */
/*! @{ */
#define FCCU_EOUT_SIG_EN_EOUTEN0_MASK            (0x1U)
#define FCCU_EOUT_SIG_EN_EOUTEN0_SHIFT           (0U)
#define FCCU_EOUT_SIG_EN_EOUTEN0_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN0(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN0_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN0_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN1_MASK            (0x2U)
#define FCCU_EOUT_SIG_EN_EOUTEN1_SHIFT           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN1_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN1(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN1_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN1_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN2_MASK            (0x4U)
#define FCCU_EOUT_SIG_EN_EOUTEN2_SHIFT           (2U)
#define FCCU_EOUT_SIG_EN_EOUTEN2_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN2(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN2_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN2_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN3_MASK            (0x8U)
#define FCCU_EOUT_SIG_EN_EOUTEN3_SHIFT           (3U)
#define FCCU_EOUT_SIG_EN_EOUTEN3_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN3(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN3_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN3_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN4_MASK            (0x10U)
#define FCCU_EOUT_SIG_EN_EOUTEN4_SHIFT           (4U)
#define FCCU_EOUT_SIG_EN_EOUTEN4_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN4(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN4_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN4_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN5_MASK            (0x20U)
#define FCCU_EOUT_SIG_EN_EOUTEN5_SHIFT           (5U)
#define FCCU_EOUT_SIG_EN_EOUTEN5_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN5(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN5_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN5_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN6_MASK            (0x40U)
#define FCCU_EOUT_SIG_EN_EOUTEN6_SHIFT           (6U)
#define FCCU_EOUT_SIG_EN_EOUTEN6_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN6(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN6_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN6_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN7_MASK            (0x80U)
#define FCCU_EOUT_SIG_EN_EOUTEN7_SHIFT           (7U)
#define FCCU_EOUT_SIG_EN_EOUTEN7_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN7(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN7_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN7_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN8_MASK            (0x100U)
#define FCCU_EOUT_SIG_EN_EOUTEN8_SHIFT           (8U)
#define FCCU_EOUT_SIG_EN_EOUTEN8_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN8(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN8_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN8_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN9_MASK            (0x200U)
#define FCCU_EOUT_SIG_EN_EOUTEN9_SHIFT           (9U)
#define FCCU_EOUT_SIG_EN_EOUTEN9_WIDTH           (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN9(x)              (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN9_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN9_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN10_MASK           (0x400U)
#define FCCU_EOUT_SIG_EN_EOUTEN10_SHIFT          (10U)
#define FCCU_EOUT_SIG_EN_EOUTEN10_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN10(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN10_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN10_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN11_MASK           (0x800U)
#define FCCU_EOUT_SIG_EN_EOUTEN11_SHIFT          (11U)
#define FCCU_EOUT_SIG_EN_EOUTEN11_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN11(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN11_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN11_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN12_MASK           (0x1000U)
#define FCCU_EOUT_SIG_EN_EOUTEN12_SHIFT          (12U)
#define FCCU_EOUT_SIG_EN_EOUTEN12_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN12(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN12_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN12_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN13_MASK           (0x2000U)
#define FCCU_EOUT_SIG_EN_EOUTEN13_SHIFT          (13U)
#define FCCU_EOUT_SIG_EN_EOUTEN13_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN13(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN13_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN13_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN14_MASK           (0x4000U)
#define FCCU_EOUT_SIG_EN_EOUTEN14_SHIFT          (14U)
#define FCCU_EOUT_SIG_EN_EOUTEN14_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN14(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN14_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN14_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN15_MASK           (0x8000U)
#define FCCU_EOUT_SIG_EN_EOUTEN15_SHIFT          (15U)
#define FCCU_EOUT_SIG_EN_EOUTEN15_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN15(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN15_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN15_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN16_MASK           (0x10000U)
#define FCCU_EOUT_SIG_EN_EOUTEN16_SHIFT          (16U)
#define FCCU_EOUT_SIG_EN_EOUTEN16_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN16(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN16_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN16_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN17_MASK           (0x20000U)
#define FCCU_EOUT_SIG_EN_EOUTEN17_SHIFT          (17U)
#define FCCU_EOUT_SIG_EN_EOUTEN17_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN17(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN17_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN17_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN18_MASK           (0x40000U)
#define FCCU_EOUT_SIG_EN_EOUTEN18_SHIFT          (18U)
#define FCCU_EOUT_SIG_EN_EOUTEN18_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN18(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN18_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN18_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN19_MASK           (0x80000U)
#define FCCU_EOUT_SIG_EN_EOUTEN19_SHIFT          (19U)
#define FCCU_EOUT_SIG_EN_EOUTEN19_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN19(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN19_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN19_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN20_MASK           (0x100000U)
#define FCCU_EOUT_SIG_EN_EOUTEN20_SHIFT          (20U)
#define FCCU_EOUT_SIG_EN_EOUTEN20_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN20(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN20_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN20_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN21_MASK           (0x200000U)
#define FCCU_EOUT_SIG_EN_EOUTEN21_SHIFT          (21U)
#define FCCU_EOUT_SIG_EN_EOUTEN21_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN21(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN21_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN21_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN22_MASK           (0x400000U)
#define FCCU_EOUT_SIG_EN_EOUTEN22_SHIFT          (22U)
#define FCCU_EOUT_SIG_EN_EOUTEN22_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN22(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN22_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN22_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN23_MASK           (0x800000U)
#define FCCU_EOUT_SIG_EN_EOUTEN23_SHIFT          (23U)
#define FCCU_EOUT_SIG_EN_EOUTEN23_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN23(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN23_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN23_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN24_MASK           (0x1000000U)
#define FCCU_EOUT_SIG_EN_EOUTEN24_SHIFT          (24U)
#define FCCU_EOUT_SIG_EN_EOUTEN24_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN24(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN24_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN24_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN25_MASK           (0x2000000U)
#define FCCU_EOUT_SIG_EN_EOUTEN25_SHIFT          (25U)
#define FCCU_EOUT_SIG_EN_EOUTEN25_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN25(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN25_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN25_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN26_MASK           (0x4000000U)
#define FCCU_EOUT_SIG_EN_EOUTEN26_SHIFT          (26U)
#define FCCU_EOUT_SIG_EN_EOUTEN26_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN26(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN26_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN26_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN27_MASK           (0x8000000U)
#define FCCU_EOUT_SIG_EN_EOUTEN27_SHIFT          (27U)
#define FCCU_EOUT_SIG_EN_EOUTEN27_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN27(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN27_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN27_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN28_MASK           (0x10000000U)
#define FCCU_EOUT_SIG_EN_EOUTEN28_SHIFT          (28U)
#define FCCU_EOUT_SIG_EN_EOUTEN28_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN28(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN28_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN28_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN29_MASK           (0x20000000U)
#define FCCU_EOUT_SIG_EN_EOUTEN29_SHIFT          (29U)
#define FCCU_EOUT_SIG_EN_EOUTEN29_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN29(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN29_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN29_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN30_MASK           (0x40000000U)
#define FCCU_EOUT_SIG_EN_EOUTEN30_SHIFT          (30U)
#define FCCU_EOUT_SIG_EN_EOUTEN30_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN30(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN30_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN30_MASK)
#define FCCU_EOUT_SIG_EN_EOUTEN31_MASK           (0x80000000U)
#define FCCU_EOUT_SIG_EN_EOUTEN31_SHIFT          (31U)
#define FCCU_EOUT_SIG_EN_EOUTEN31_WIDTH          (1U)
#define FCCU_EOUT_SIG_EN_EOUTEN31(x)             (((uint32_t)(((uint32_t)(x)) << FCCU_EOUT_SIG_EN_EOUTEN31_SHIFT)) & FCCU_EOUT_SIG_EN_EOUTEN31_MASK)
/*! @} */

/*! @name TMR_ALARM - Alarm-State Timer */
/*! @{ */
#define FCCU_TMR_ALARM_COUNT_MASK                (0xFFFFFFFFU)
#define FCCU_TMR_ALARM_COUNT_SHIFT               (0U)
#define FCCU_TMR_ALARM_COUNT_WIDTH               (32U)
#define FCCU_TMR_ALARM_COUNT(x)                  (((uint32_t)(((uint32_t)(x)) << FCCU_TMR_ALARM_COUNT_SHIFT)) & FCCU_TMR_ALARM_COUNT_MASK)
/*! @} */

/*! @name TMR_CFG - Configuration-State Timer */
/*! @{ */
#define FCCU_TMR_CFG_COUNT_MASK                  (0xFFFFFFFFU)
#define FCCU_TMR_CFG_COUNT_SHIFT                 (0U)
#define FCCU_TMR_CFG_COUNT_WIDTH                 (32U)
#define FCCU_TMR_CFG_COUNT(x)                    (((uint32_t)(((uint32_t)(x)) << FCCU_TMR_CFG_COUNT_SHIFT)) & FCCU_TMR_CFG_COUNT_MASK)
/*! @} */

/*! @name TMR_ETMR - Fault-Output Timer */
/*! @{ */
#define FCCU_TMR_ETMR_COUNT_MASK                 (0xFFFFFFFFU)
#define FCCU_TMR_ETMR_COUNT_SHIFT                (0U)
#define FCCU_TMR_ETMR_COUNT_WIDTH                (32U)
#define FCCU_TMR_ETMR_COUNT(x)                   (((uint32_t)(((uint32_t)(x)) << FCCU_TMR_ETMR_COUNT_SHIFT)) & FCCU_TMR_ETMR_COUNT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group FCCU_Register_Masks */

/*!
 * @}
 */ /* end of group FCCU_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_FCCU_H_) */
