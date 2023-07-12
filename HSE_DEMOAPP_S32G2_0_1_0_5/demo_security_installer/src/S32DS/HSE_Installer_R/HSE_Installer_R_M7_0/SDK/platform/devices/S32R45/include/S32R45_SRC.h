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
 * @file S32R45_SRC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_SRC
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
#if !defined(S32R45_SRC_H_)  /* Check if memory map has not been already included */
#define S32R45_SRC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SRC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SRC_Peripheral_Access_Layer SRC Peripheral Access Layer
 * @{
 */

/** SRC - Register Layout Typedef */
typedef struct {
  __IO uint32_t SW_NCF;                            /**< Software Triggered Faults Register, offset: 0x0 */
  __IO uint32_t GMAC_0_CTRL_STS;                   /**< GMAC Control Register, offset: 0x4 */
  uint8_t RESERVED_0[4];
  __I  uint32_t HSE_CM7_STATUS_REG;                /**< HSE CM7 status register, offset: 0xC */
  uint8_t RESERVED_1[24];
  __IO uint32_t CMU_STATUS_REG1;                   /**< CMUs status register 1, offset: 0x28 */
  __IO uint32_t CMU_STATUS_REG2;                   /**< CMUs status register 2, offset: 0x2C */
  __IO uint32_t FCCU_EOUT_OVERRIDE_CLEAR_REG;      /**< FCCU EOUT override clear register, offset: 0x30 */
  uint8_t RESERVED_2[32];
  __IO uint32_t GPR21;                             /**< GPR21 Register, offset: 0x54 */
  uint8_t RESERVED_3[116];
  __IO uint32_t DEBUG_CONTROL;                     /**< Debug Control Register, offset: 0xCC */
  uint8_t RESERVED_4[32];
  __IO uint32_t TIMESTAMP_CONTROL_REGISTER;        /**< Time Stamp Control Register, offset: 0xF0 */
  __IO uint32_t FR_OS_TICK_INPUT_SELECT_REG;  /**< FR OS Tick input select register, offset: 0xF4 */
} SRC_Type, *SRC_MemMapPtr;

/** Number of instances of the SRC module. */
#define SRC_INSTANCE_COUNT                       (1u)

/* SRC - Peripheral instance base addresses */
/** Peripheral SRC base address */
#define SRC_BASE                                 (0x4007C000u)
/** Peripheral SRC base pointer */
#define SRC                                      ((SRC_Type *)SRC_BASE)
/** Array initializer of SRC peripheral base addresses */
#define SRC_BASE_ADDRS                           { SRC_BASE }
/** Array initializer of SRC peripheral base pointers */
#define SRC_BASE_PTRS                            { SRC }

/* ----------------------------------------------------------------------------
   -- SRC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SRC_Register_Masks SRC Register Masks
 * @{
 */

/*! @name SW_NCF - Software Triggered Faults Register */
/*! @{ */
#define SRC_SW_NCF_SW_NCF1_MASK                  (0x1U)
#define SRC_SW_NCF_SW_NCF1_SHIFT                 (0U)
#define SRC_SW_NCF_SW_NCF1_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF1(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF1_SHIFT)) & SRC_SW_NCF_SW_NCF1_MASK)
#define SRC_SW_NCF_SW_NCF2_MASK                  (0x2U)
#define SRC_SW_NCF_SW_NCF2_SHIFT                 (1U)
#define SRC_SW_NCF_SW_NCF2_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF2(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF2_SHIFT)) & SRC_SW_NCF_SW_NCF2_MASK)
#define SRC_SW_NCF_SW_NCF3_MASK                  (0x4U)
#define SRC_SW_NCF_SW_NCF3_SHIFT                 (2U)
#define SRC_SW_NCF_SW_NCF3_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF3(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF3_SHIFT)) & SRC_SW_NCF_SW_NCF3_MASK)
#define SRC_SW_NCF_SW_NCF4_MASK                  (0x8U)
#define SRC_SW_NCF_SW_NCF4_SHIFT                 (3U)
#define SRC_SW_NCF_SW_NCF4_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF4(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF4_SHIFT)) & SRC_SW_NCF_SW_NCF4_MASK)
#define SRC_SW_NCF_SW_NCF5_MASK                  (0x10U)
#define SRC_SW_NCF_SW_NCF5_SHIFT                 (4U)
#define SRC_SW_NCF_SW_NCF5_WIDTH                 (1U)
#define SRC_SW_NCF_SW_NCF5(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_SW_NCF5_SHIFT)) & SRC_SW_NCF_SW_NCF5_MASK)
#define SRC_SW_NCF_Reserved_MASK                 (0xFFFFFFE0U)
#define SRC_SW_NCF_Reserved_SHIFT                (5U)
#define SRC_SW_NCF_Reserved_WIDTH                (27U)
#define SRC_SW_NCF_Reserved(x)                   (((uint32_t)(((uint32_t)(x)) << SRC_SW_NCF_Reserved_SHIFT)) & SRC_SW_NCF_Reserved_MASK)
/*! @} */

/*! @name GMAC_0_CTRL_STS - GMAC Control Register */
/*! @{ */
#define SRC_GMAC_0_CTRL_STS_PHY_MODE_MASK        (0x1U)
#define SRC_GMAC_0_CTRL_STS_PHY_MODE_SHIFT       (0U)
#define SRC_GMAC_0_CTRL_STS_PHY_MODE_WIDTH       (1U)
#define SRC_GMAC_0_CTRL_STS_PHY_MODE(x)          (((uint32_t)(((uint32_t)(x)) << SRC_GMAC_0_CTRL_STS_PHY_MODE_SHIFT)) & SRC_GMAC_0_CTRL_STS_PHY_MODE_MASK)
#define SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_MASK    (0xEU)
#define SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_SHIFT   (1U)
#define SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_WIDTH   (3U)
#define SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL(x)      (((uint32_t)(((uint32_t)(x)) << SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_SHIFT)) & SRC_GMAC_0_CTRL_STS_PHY_INTF_SEL_MASK)
#define SRC_GMAC_0_CTRL_STS_FTM0_SEL_MASK        (0x400U)
#define SRC_GMAC_0_CTRL_STS_FTM0_SEL_SHIFT       (10U)
#define SRC_GMAC_0_CTRL_STS_FTM0_SEL_WIDTH       (1U)
#define SRC_GMAC_0_CTRL_STS_FTM0_SEL(x)          (((uint32_t)(((uint32_t)(x)) << SRC_GMAC_0_CTRL_STS_FTM0_SEL_SHIFT)) & SRC_GMAC_0_CTRL_STS_FTM0_SEL_MASK)
#define SRC_GMAC_0_CTRL_STS_FTM1_SEL_MASK        (0x800U)
#define SRC_GMAC_0_CTRL_STS_FTM1_SEL_SHIFT       (11U)
#define SRC_GMAC_0_CTRL_STS_FTM1_SEL_WIDTH       (1U)
#define SRC_GMAC_0_CTRL_STS_FTM1_SEL(x)          (((uint32_t)(((uint32_t)(x)) << SRC_GMAC_0_CTRL_STS_FTM1_SEL_SHIFT)) & SRC_GMAC_0_CTRL_STS_FTM1_SEL_MASK)
/*! @} */

/*! @name HSE_CM7_STATUS_REG - HSE CM7 status register */
/*! @{ */
#define SRC_HSE_CM7_STATUS_REG_HSE_CM7_SLEEP_STAT_MASK (0x1U)
#define SRC_HSE_CM7_STATUS_REG_HSE_CM7_SLEEP_STAT_SHIFT (0U)
#define SRC_HSE_CM7_STATUS_REG_HSE_CM7_SLEEP_STAT_WIDTH (1U)
#define SRC_HSE_CM7_STATUS_REG_HSE_CM7_SLEEP_STAT(x) (((uint32_t)(((uint32_t)(x)) << SRC_HSE_CM7_STATUS_REG_HSE_CM7_SLEEP_STAT_SHIFT)) & SRC_HSE_CM7_STATUS_REG_HSE_CM7_SLEEP_STAT_MASK)
#define SRC_HSE_CM7_STATUS_REG_Reserved_MASK     (0xFFFFFFFEU)
#define SRC_HSE_CM7_STATUS_REG_Reserved_SHIFT    (1U)
#define SRC_HSE_CM7_STATUS_REG_Reserved_WIDTH    (31U)
#define SRC_HSE_CM7_STATUS_REG_Reserved(x)       (((uint32_t)(((uint32_t)(x)) << SRC_HSE_CM7_STATUS_REG_Reserved_SHIFT)) & SRC_HSE_CM7_STATUS_REG_Reserved_MASK)
/*! @} */

/*! @name CMU_STATUS_REG1 - CMUs status register 1 */
/*! @{ */
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_MASK    (0xFFFFFFFFU)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_SHIFT   (0U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT_WIDTH   (32U)
#define SRC_CMU_STATUS_REG1_FLL_FHH_STAT(x)      (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG1_FLL_FHH_STAT_SHIFT)) & SRC_CMU_STATUS_REG1_FLL_FHH_STAT_MASK)
/*! @} */

/*! @name CMU_STATUS_REG2 - CMUs status register 2 */
/*! @{ */
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_MASK    (0x3FU)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_SHIFT   (0U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT_WIDTH   (6U)
#define SRC_CMU_STATUS_REG2_FLL_FHH_STAT(x)      (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG2_FLL_FHH_STAT_SHIFT)) & SRC_CMU_STATUS_REG2_FLL_FHH_STAT_MASK)
#define SRC_CMU_STATUS_REG2_Reserved_MASK        (0xFFFFFFC0U)
#define SRC_CMU_STATUS_REG2_Reserved_SHIFT       (6U)
#define SRC_CMU_STATUS_REG2_Reserved_WIDTH       (26U)
#define SRC_CMU_STATUS_REG2_Reserved(x)          (((uint32_t)(((uint32_t)(x)) << SRC_CMU_STATUS_REG2_Reserved_SHIFT)) & SRC_CMU_STATUS_REG2_Reserved_MASK)
/*! @} */

/*! @name FCCU_EOUT_OVERRIDE_CLEAR_REG - FCCU EOUT override clear register */
/*! @{ */
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_MASK (0x1U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_SHIFT (0U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_WIDTH (1U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_SHIFT)) & SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_CLEAR_MASK)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_MASK (0x2U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_SHIFT (1U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_WIDTH (1U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST(x) (((uint32_t)(((uint32_t)(x)) << SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_SHIFT)) & SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_EOUT_OVERRIDE_DISABLE_DURING_SELFTEST_MASK)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_Reserved_MASK (0xFFFFFFFCU)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_Reserved_SHIFT (2U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_Reserved_WIDTH (30U)
#define SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_Reserved(x) (((uint32_t)(((uint32_t)(x)) << SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_Reserved_SHIFT)) & SRC_FCCU_EOUT_OVERRIDE_CLEAR_REG_Reserved_MASK)
/*! @} */

/*! @name GPR21 - GPR21 Register */
/*! @{ */
#define SRC_GPR21_PCIE_PARITY_MODE_data_MASK     (0xFFFFFU)
#define SRC_GPR21_PCIE_PARITY_MODE_data_SHIFT    (0U)
#define SRC_GPR21_PCIE_PARITY_MODE_data_WIDTH    (20U)
#define SRC_GPR21_PCIE_PARITY_MODE_data(x)       (((uint32_t)(((uint32_t)(x)) << SRC_GPR21_PCIE_PARITY_MODE_data_SHIFT)) & SRC_GPR21_PCIE_PARITY_MODE_data_MASK)
#define SRC_GPR21_Reserved_MASK                  (0xFFF00000U)
#define SRC_GPR21_Reserved_SHIFT                 (20U)
#define SRC_GPR21_Reserved_WIDTH                 (12U)
#define SRC_GPR21_Reserved(x)                    (((uint32_t)(((uint32_t)(x)) << SRC_GPR21_Reserved_SHIFT)) & SRC_GPR21_Reserved_MASK)
/*! @} */

/*! @name DEBUG_CONTROL - Debug Control Register */
/*! @{ */
#define SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_MASK (0x1U)
#define SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_SHIFT (0U)
#define SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE(x)   (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_SHIFT)) & SRC_DEBUG_CONTROL_DEBUG_CLK_DISABLE_MASK)
#define SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_MASK (0x2U)
#define SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_SHIFT (1U)
#define SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_SHIFT)) & SRC_DEBUG_CONTROL_CA53_0_DBGL1RSTDISABLE_MASK)
#define SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_MASK (0x4U)
#define SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_SHIFT (2U)
#define SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_SHIFT)) & SRC_DEBUG_CONTROL_CA53_1_DBGL1RSTDISABLE_MASK)
#define SRC_DEBUG_CONTROL_DBG_SETUP_DONE_MASK    (0x8U)
#define SRC_DEBUG_CONTROL_DBG_SETUP_DONE_SHIFT   (3U)
#define SRC_DEBUG_CONTROL_DBG_SETUP_DONE_WIDTH   (1U)
#define SRC_DEBUG_CONTROL_DBG_SETUP_DONE(x)      (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_DBG_SETUP_DONE_SHIFT)) & SRC_DEBUG_CONTROL_DBG_SETUP_DONE_MASK)
#define SRC_DEBUG_CONTROL_JTAG_ACTIVE_MASK       (0x10U)
#define SRC_DEBUG_CONTROL_JTAG_ACTIVE_SHIFT      (4U)
#define SRC_DEBUG_CONTROL_JTAG_ACTIVE_WIDTH      (1U)
#define SRC_DEBUG_CONTROL_JTAG_ACTIVE(x)         (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_JTAG_ACTIVE_SHIFT)) & SRC_DEBUG_CONTROL_JTAG_ACTIVE_MASK)
#define SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_MASK (0x20U)
#define SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_SHIFT (5U)
#define SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_SHIFT)) & SRC_DEBUG_CONTROL_CA53_0_L2RSTDISABLE_MASK)
#define SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_MASK (0x40U)
#define SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_SHIFT (6U)
#define SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_WIDTH (1U)
#define SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_SHIFT)) & SRC_DEBUG_CONTROL_CA53_1_L2RSTDISABLE_MASK)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_MASK    (0x80U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_SHIFT   (7U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_WIDTH   (1U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_0a(x)      (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_SHIFT)) & SRC_DEBUG_CONTROL_DBG_RST_MSK_0a_MASK)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_MASK    (0x100U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_SHIFT   (8U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_WIDTH   (1U)
#define SRC_DEBUG_CONTROL_DBG_RST_MSK_1a(x)      (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_SHIFT)) & SRC_DEBUG_CONTROL_DBG_RST_MSK_1a_MASK)
#define SRC_DEBUG_CONTROL_READY_FOR_DEBUG_MASK   (0x200U)
#define SRC_DEBUG_CONTROL_READY_FOR_DEBUG_SHIFT  (9U)
#define SRC_DEBUG_CONTROL_READY_FOR_DEBUG_WIDTH  (1U)
#define SRC_DEBUG_CONTROL_READY_FOR_DEBUG(x)     (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_READY_FOR_DEBUG_SHIFT)) & SRC_DEBUG_CONTROL_READY_FOR_DEBUG_MASK)
#define SRC_DEBUG_CONTROL_Reserved_MASK          (0xFFFFFC00U)
#define SRC_DEBUG_CONTROL_Reserved_SHIFT         (10U)
#define SRC_DEBUG_CONTROL_Reserved_WIDTH         (22U)
#define SRC_DEBUG_CONTROL_Reserved(x)            (((uint32_t)(((uint32_t)(x)) << SRC_DEBUG_CONTROL_Reserved_SHIFT)) & SRC_DEBUG_CONTROL_Reserved_MASK)
/*! @} */

/*! @name TIMESTAMP_CONTROL_REGISTER - Time Stamp Control Register */
/*! @{ */
#define SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_MASK (0x3U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_SHIFT (0U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_WIDTH (2U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL(x) (((uint32_t)(((uint32_t)(x)) << SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_SHIFT)) & SRC_TIMESTAMP_CONTROL_REGISTER_CAN_TS_CNT_SEL_MASK)
#define SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_MASK (0x4U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_SHIFT (2U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_WIDTH (1U)
#define SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_SHIFT)) & SRC_TIMESTAMP_CONTROL_REGISTER_TS_ENABLE_MASK)
/*! @} */

/*! @name FR_OS_TICK_INPUT_SELECT_REG - FR OS Tick input select register */
/*! @{ */
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_0_STOPWATCH_MUX_SELECT_MASK (0x3U)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_0_STOPWATCH_MUX_SELECT_SHIFT (0U)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_0_STOPWATCH_MUX_SELECT_WIDTH (2U)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_0_STOPWATCH_MUX_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_0_STOPWATCH_MUX_SELECT_SHIFT)) & SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_0_STOPWATCH_MUX_SELECT_MASK)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_1_STOPWATCH_MUX_SELECT_MASK (0xCU)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_1_STOPWATCH_MUX_SELECT_SHIFT (2U)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_1_STOPWATCH_MUX_SELECT_WIDTH (2U)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_1_STOPWATCH_MUX_SELECT(x) (((uint32_t)(((uint32_t)(x)) << SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_1_STOPWATCH_MUX_SELECT_SHIFT)) & SRC_FR_OS_TICK_INPUT_SELECT_REG_FR_1_STOPWATCH_MUX_SELECT_MASK)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_Reserved_MASK (0xFFFFFFF0U)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_Reserved_SHIFT (4U)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_Reserved_WIDTH (28U)
#define SRC_FR_OS_TICK_INPUT_SELECT_REG_Reserved(x) (((uint32_t)(((uint32_t)(x)) << SRC_FR_OS_TICK_INPUT_SELECT_REG_Reserved_SHIFT)) & SRC_FR_OS_TICK_INPUT_SELECT_REG_Reserved_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SRC_Register_Masks */

/*!
 * @}
 */ /* end of group SRC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_SRC_H_) */
