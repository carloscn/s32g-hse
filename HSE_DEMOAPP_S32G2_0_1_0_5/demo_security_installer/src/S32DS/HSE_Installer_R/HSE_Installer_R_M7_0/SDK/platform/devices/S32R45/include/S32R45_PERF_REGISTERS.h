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
 * @file S32R45_Perf_Registers.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_Perf_Registers
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
#if !defined(S32R45_Perf_Registers_H_)  /* Check if memory map has not been already included */
#define S32R45_Perf_Registers_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- Perf_Registers Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Perf_Registers_Peripheral_Access_Layer Perf_Registers Peripheral Access Layer
 * @{
 */

/** Perf_Registers - Size of Registers Arrays */
#define Perf_Registers_COUNTER_N_DATA_REG_ADDR_COUNT 4u

/** Perf_Registers - Register Layout Typedef */
typedef struct {
  __IO uint32_t COUNTER_0_CTRL_REG_ADDR;           /**< Counter control 0, offset: 0x0 */
  __IO uint32_t COUNTER_1_CTRL_REG_ADDR;           /**< Counter control 1, offset: 0x4 */
  __IO uint32_t COUNTER_2_CTRL_REG_ADDR;           /**< Counter control 2, offset: 0x8 */
  __IO uint32_t COUNTER_3_CTRL_REG_ADDR;           /**< Counter control 3, offset: 0xC */
  uint8_t RESERVED_0[16];
  __I  uint32_t COUNTER_DATA_REG_ADDR[Perf_Registers_COUNTER_N_DATA_REG_ADDR_COUNT]; /**< Counter Data, array offset: 0x20, array step: 0x4 */
  uint8_t RESERVED_1[16];
  __IO uint32_t MRR_0_DATA_REG_ADDR;               /**< Mode Register Read 0 address, offset: 0x40 */
  __I  uint32_t MRR_1_DATA_REG_ADDR;               /**< Mode Register Read 1 address, offset: 0x44 */
} Perf_Registers_Type, *Perf_Registers_MemMapPtr;

/** Number of instances of the Perf_Registers module. */
#define Perf_Registers_INSTANCE_COUNT            (1u)

/* Perf_Registers - Peripheral instance base addresses */
/** Peripheral PERF_REGISTERS base address */
#define PERF_REGISTERS_BASE                      (0x403E0000u)
/** Peripheral PERF_REGISTERS base pointer */
#define PERF_REGISTERS                           ((Perf_Registers_Type *)PERF_REGISTERS_BASE)
/** Array initializer of Perf_Registers peripheral base addresses */
#define Perf_Registers_BASE_ADDRS                { PERF_REGISTERS_BASE }
/** Array initializer of Perf_Registers peripheral base pointers */
#define Perf_Registers_BASE_PTRS                 { PERF_REGISTERS }

/* ----------------------------------------------------------------------------
   -- Perf_Registers Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Perf_Registers_Register_Masks Perf_Registers Register Masks
 * @{
 */

/*! @name COUNTER_0_CTRL_REG_ADDR - Counter control 0 */
/*! @{ */
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_OFL_MASK (0x1U)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_OFL_SHIFT (0U)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_OFL_WIDTH (1U)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_OFL(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_OFL_SHIFT)) & Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_OFL_MASK)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_CLR_MASK (0x2U)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_CLR_SHIFT (1U)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_CLR_WIDTH (1U)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_CLR(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_CLR_SHIFT)) & Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_CLR_MASK)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_EN_MASK (0x4U)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_EN_SHIFT (2U)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_EN_WIDTH (1U)
#define Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_EN(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_EN_SHIFT)) & Perf_Registers_COUNTER_0_CTRL_REG_ADDR_CNTR_EN_MASK)
/*! @} */

/*! @name COUNTER_1_CTRL_REG_ADDR - Counter control 1 */
/*! @{ */
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_OFL_MASK (0x1U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_OFL_SHIFT (0U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_OFL_WIDTH (1U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_OFL(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_OFL_SHIFT)) & Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_OFL_MASK)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_CLR_MASK (0x2U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_CLR_SHIFT (1U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_CLR_WIDTH (1U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_CLR(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_CLR_SHIFT)) & Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_CLR_MASK)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_EN_MASK (0x4U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_EN_SHIFT (2U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_EN_WIDTH (1U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_EN(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_EN_SHIFT)) & Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CNTR_EN_MASK)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_COUNT_PR_MASK (0xFF0000U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_COUNT_PR_SHIFT (16U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_COUNT_PR_WIDTH (8U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_COUNT_PR(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_1_CTRL_REG_ADDR_COUNT_PR_SHIFT)) & Perf_Registers_COUNTER_1_CTRL_REG_ADDR_COUNT_PR_MASK)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CSV_MASK (0xFF000000U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CSV_SHIFT (24U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CSV_WIDTH (8U)
#define Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CSV(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CSV_SHIFT)) & Perf_Registers_COUNTER_1_CTRL_REG_ADDR_CSV_MASK)
/*! @} */

/*! @name COUNTER_2_CTRL_REG_ADDR - Counter control 2 */
/*! @{ */
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_OFL_MASK (0x1U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_OFL_SHIFT (0U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_OFL_WIDTH (1U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_OFL(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_OFL_SHIFT)) & Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_OFL_MASK)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_CLR_MASK (0x2U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_CLR_SHIFT (1U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_CLR_WIDTH (1U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_CLR(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_CLR_SHIFT)) & Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_CLR_MASK)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_EN_MASK (0x4U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_EN_SHIFT (2U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_EN_WIDTH (1U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_EN(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_EN_SHIFT)) & Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CNTR_EN_MASK)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_COUNT_PR_MASK (0xFF0000U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_COUNT_PR_SHIFT (16U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_COUNT_PR_WIDTH (8U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_COUNT_PR(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_2_CTRL_REG_ADDR_COUNT_PR_SHIFT)) & Perf_Registers_COUNTER_2_CTRL_REG_ADDR_COUNT_PR_MASK)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CSV_MASK (0xFF000000U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CSV_SHIFT (24U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CSV_WIDTH (8U)
#define Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CSV(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CSV_SHIFT)) & Perf_Registers_COUNTER_2_CTRL_REG_ADDR_CSV_MASK)
/*! @} */

/*! @name COUNTER_3_CTRL_REG_ADDR - Counter control 3 */
/*! @{ */
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_OFL_MASK (0x1U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_OFL_SHIFT (0U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_OFL_WIDTH (1U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_OFL(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_OFL_SHIFT)) & Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_OFL_MASK)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_CLR_MASK (0x2U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_CLR_SHIFT (1U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_CLR_WIDTH (1U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_CLR(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_CLR_SHIFT)) & Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_CLR_MASK)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_EN_MASK (0x4U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_EN_SHIFT (2U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_EN_WIDTH (1U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_EN(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_EN_SHIFT)) & Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CNTR_EN_MASK)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_COUNT_PR_MASK (0xFF0000U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_COUNT_PR_SHIFT (16U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_COUNT_PR_WIDTH (8U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_COUNT_PR(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_3_CTRL_REG_ADDR_COUNT_PR_SHIFT)) & Perf_Registers_COUNTER_3_CTRL_REG_ADDR_COUNT_PR_MASK)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CSV_MASK (0xFF000000U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CSV_SHIFT (24U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CSV_WIDTH (8U)
#define Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CSV(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CSV_SHIFT)) & Perf_Registers_COUNTER_3_CTRL_REG_ADDR_CSV_MASK)
/*! @} */

/*! @name COUNTER_DATA_REG_ADDR - Counter Data */
/*! @{ */
#define Perf_Registers_COUNTER_DATA_REG_ADDR_COUNT_VL_MASK (0xFFFFFFFFU)
#define Perf_Registers_COUNTER_DATA_REG_ADDR_COUNT_VL_SHIFT (0U)
#define Perf_Registers_COUNTER_DATA_REG_ADDR_COUNT_VL_WIDTH (32U)
#define Perf_Registers_COUNTER_DATA_REG_ADDR_COUNT_VL(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_COUNTER_DATA_REG_ADDR_COUNT_VL_SHIFT)) & Perf_Registers_COUNTER_DATA_REG_ADDR_COUNT_VL_MASK)
/*! @} */

/*! @name MRR_0_DATA_REG_ADDR - Mode Register Read 0 address */
/*! @{ */
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MRR_DDR_SEL_REG_MASK (0x1U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MRR_DDR_SEL_REG_SHIFT (0U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MRR_DDR_SEL_REG_WIDTH (1U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MRR_DDR_SEL_REG(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_MRR_0_DATA_REG_ADDR_MRR_DDR_SEL_REG_SHIFT)) & Perf_Registers_MRR_0_DATA_REG_ADDR_MRR_DDR_SEL_REG_MASK)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_MODE_SEL_REG_MASK (0x2U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_MODE_SEL_REG_SHIFT (1U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_MODE_SEL_REG_WIDTH (1U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_MODE_SEL_REG(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_MODE_SEL_REG_SHIFT)) & Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_MODE_SEL_REG_MASK)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_VALID_CLR_REG_MASK (0x4U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_VALID_CLR_REG_SHIFT (2U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_VALID_CLR_REG_WIDTH (1U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_VALID_CLR_REG(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_VALID_CLR_REG_SHIFT)) & Perf_Registers_MRR_0_DATA_REG_ADDR_MPR_VALID_CLR_REG_MASK)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_VALID_OUT_MASK (0x8U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_VALID_OUT_SHIFT (3U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_VALID_OUT_WIDTH (1U)
#define Perf_Registers_MRR_0_DATA_REG_ADDR_VALID_OUT(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_MRR_0_DATA_REG_ADDR_VALID_OUT_SHIFT)) & Perf_Registers_MRR_0_DATA_REG_ADDR_VALID_OUT_MASK)
/*! @} */

/*! @name MRR_1_DATA_REG_ADDR - Mode Register Read 1 address */
/*! @{ */
#define Perf_Registers_MRR_1_DATA_REG_ADDR_MRR_VL_MASK (0xFFFFFFFFU)
#define Perf_Registers_MRR_1_DATA_REG_ADDR_MRR_VL_SHIFT (0U)
#define Perf_Registers_MRR_1_DATA_REG_ADDR_MRR_VL_WIDTH (32U)
#define Perf_Registers_MRR_1_DATA_REG_ADDR_MRR_VL(x) (((uint32_t)(((uint32_t)(x)) << Perf_Registers_MRR_1_DATA_REG_ADDR_MRR_VL_SHIFT)) & Perf_Registers_MRR_1_DATA_REG_ADDR_MRR_VL_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group Perf_Registers_Register_Masks */

/*!
 * @}
 */ /* end of group Perf_Registers_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_Perf_Registers_H_) */
