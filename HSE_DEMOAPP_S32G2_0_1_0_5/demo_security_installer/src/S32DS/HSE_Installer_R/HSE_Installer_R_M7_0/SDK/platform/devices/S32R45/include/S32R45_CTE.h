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
**    - rev. 1.3 Taru Shree 10-DEC-19  1)Initial release based on 
**                                     RM Rev.1 RC.
**                                     2)LUT array containing LSB and 
**                                     MSB registers.
**
** ###################################################################
*/

/*!
 * @file S32R45_CTE.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_CTE
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
#if !defined(S32R45_CTE_H_)  /* Check if memory map has not been already included */
#define S32R45_CTE_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CTE Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CTE_Peripheral_Access_Layer CTE Peripheral Access Layer
 * @{
 */

/** CTE - Size of Registers Arrays */
#define CTE_LUT_LUT_LSB_COUNT                     32u
#define CTE_LUT_LUT_MSB_COUNT                     32u
#define CTE_LUT_COUNT                             2u
#define CTE_SIGTYPE0_COUNT                        2u
#define CTE_SIGTYPE1_COUNT                        2u

/** CTE - Register Layout Typedef */
typedef struct {
  __IO uint32_t CNTRL;                             /**< Control Register, offset: 0x0 */
  __IO uint32_t CNTRL1;                            /**< CTE Control Register 1, offset: 0x4 */
  struct {                                         /* offset: 0x8, array step: 0x100 */
    __IO uint32_t LSB[CTE_LUT_LUT_LSB_COUNT];        /**< Timing Table 0 Register (LSB)..Timing Table 1 Register (LSB), array offset: 0x8, array step: index*0x100, index2*0x4 */
    __IO uint32_t MSB[CTE_LUT_LUT_MSB_COUNT];        /**< Timing Table 0 Register (MSB)..Timing Table 1 Register (MSB), array offset: 0x88, array step: index*0x100, index2*0x4 */
  } LUT[CTE_LUT_COUNT];
  __IO uint32_t SIGTYPE0[CTE_SIGTYPE0_COUNT];      /**< Signal Type Register 0, array offset: 0x208, array step: 0x4 */
  __IO uint32_t SIGTYPE1[CTE_SIGTYPE1_COUNT];      /**< Signal Type Register 1, array offset: 0x210, array step: 0x4 */
  uint8_t RESERVED_0[8];
  __IO uint32_t INTEN;                             /**< CTE Interrupt Enable Register, offset: 0x220 */
  __IO uint32_t INTSTAT;                           /**< CTE Interrupt Status Register, offset: 0x224 */
  uint8_t RESERVED_1[72];
  __IO uint32_t CKSM_LSB;                          /**< LUT Checksum Register, offset: 0x270 */
  __IO uint32_t CKSM_MSB;                          /**< LUT Checksum Register, offset: 0x274 */
  __IO uint32_t DBG_REG;                           /**< Debug Register, offset: 0x278 */
  __IO uint32_t LUT_DUR;                           /**< TT0 Execution Duration Register, offset: 0x27C */
  __IO uint32_t LUT_DUR1;                          /**< TT1 Execution Duration Register, offset: 0x280 */
  __IO uint32_t CLKSEL;                            /**< Clock Select Register, offset: 0x284 */
} CTE_Type, *CTE_MemMapPtr;

/** Number of instances of the CTE module. */
#define CTE_INSTANCE_COUNT                       (1u)

/* CTE - Peripheral instance base addresses */
/** Peripheral CTE base address */
#define CTE_BASE                                 (0x44025000u)
/** Peripheral CTE base pointer */
#define CTE                                      ((CTE_Type *)CTE_BASE)
/** Array initializer of CTE peripheral base addresses */
#define CTE_BASE_ADDRS                           { CTE_BASE }
/** Array initializer of CTE peripheral base pointers */
#define CTE_BASE_PTRS                            { CTE }

/* ----------------------------------------------------------------------------
   -- CTE Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CTE_Register_Masks CTE Register Masks
 * @{
 */

/*! @name CNTRL - Control Register */
/*! @{ */
#define CTE_CNTRL_REP_CNT_MASK                   (0xFFFFU)
#define CTE_CNTRL_REP_CNT_SHIFT                  (0U)
#define CTE_CNTRL_REP_CNT_WIDTH                  (16U)
#define CTE_CNTRL_REP_CNT(x)                     (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL_REP_CNT_SHIFT)) & CTE_CNTRL_REP_CNT_MASK)
#define CTE_CNTRL_RFS_DLY_MASK                   (0xF0000U)
#define CTE_CNTRL_RFS_DLY_SHIFT                  (16U)
#define CTE_CNTRL_RFS_DLY_WIDTH                  (4U)
#define CTE_CNTRL_RFS_DLY(x)                     (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL_RFS_DLY_SHIFT)) & CTE_CNTRL_RFS_DLY_MASK)
#define CTE_CNTRL_RCS_DLY_MASK                   (0xF00000U)
#define CTE_CNTRL_RCS_DLY_SHIFT                  (20U)
#define CTE_CNTRL_RCS_DLY_WIDTH                  (4U)
#define CTE_CNTRL_RCS_DLY(x)                     (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL_RCS_DLY_SHIFT)) & CTE_CNTRL_RCS_DLY_MASK)
#define CTE_CNTRL_OPMOD_SL_MASK                  (0x3000000U)
#define CTE_CNTRL_OPMOD_SL_SHIFT                 (24U)
#define CTE_CNTRL_OPMOD_SL_WIDTH                 (2U)
#define CTE_CNTRL_OPMOD_SL(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL_OPMOD_SL_SHIFT)) & CTE_CNTRL_OPMOD_SL_MASK)
#define CTE_CNTRL_eDMA_CTL_MASK                  (0xC000000U)
#define CTE_CNTRL_eDMA_CTL_SHIFT                 (26U)
#define CTE_CNTRL_eDMA_CTL_WIDTH                 (2U)
#define CTE_CNTRL_eDMA_CTL(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL_eDMA_CTL_SHIFT)) & CTE_CNTRL_eDMA_CTL_MASK)
#define CTE_CNTRL_MA_SL_ST_MASK                  (0x10000000U)
#define CTE_CNTRL_MA_SL_ST_SHIFT                 (28U)
#define CTE_CNTRL_MA_SL_ST_WIDTH                 (1U)
#define CTE_CNTRL_MA_SL_ST(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL_MA_SL_ST_SHIFT)) & CTE_CNTRL_MA_SL_ST_MASK)
#define CTE_CNTRL_CTE_RST_MASK                   (0x20000000U)
#define CTE_CNTRL_CTE_RST_SHIFT                  (29U)
#define CTE_CNTRL_CTE_RST_WIDTH                  (1U)
#define CTE_CNTRL_CTE_RST(x)                     (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL_CTE_RST_SHIFT)) & CTE_CNTRL_CTE_RST_MASK)
#define CTE_CNTRL_RFS_PGEN_MASK                  (0x40000000U)
#define CTE_CNTRL_RFS_PGEN_SHIFT                 (30U)
#define CTE_CNTRL_RFS_PGEN_WIDTH                 (1U)
#define CTE_CNTRL_RFS_PGEN(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL_RFS_PGEN_SHIFT)) & CTE_CNTRL_RFS_PGEN_MASK)
/*! @} */

/*! @name CNTRL1 - CTE Control Register 1 */
/*! @{ */
#define CTE_CNTRL1_CTECK_DV_MASK                 (0x3FU)
#define CTE_CNTRL1_CTECK_DV_SHIFT                (0U)
#define CTE_CNTRL1_CTECK_DV_WIDTH                (6U)
#define CTE_CNTRL1_CTECK_DV(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL1_CTECK_DV_SHIFT)) & CTE_CNTRL1_CTECK_DV_MASK)
#define CTE_CNTRL1_CLKDIV_1_MASK                 (0x700U)
#define CTE_CNTRL1_CLKDIV_1_SHIFT                (8U)
#define CTE_CNTRL1_CLKDIV_1_WIDTH                (3U)
#define CTE_CNTRL1_CLKDIV_1(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL1_CLKDIV_1_SHIFT)) & CTE_CNTRL1_CLKDIV_1_MASK)
#define CTE_CNTRL1_CLKDIV_2_MASK                 (0x3800U)
#define CTE_CNTRL1_CLKDIV_2_SHIFT                (11U)
#define CTE_CNTRL1_CLKDIV_2_WIDTH                (3U)
#define CTE_CNTRL1_CLKDIV_2(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL1_CLKDIV_2_SHIFT)) & CTE_CNTRL1_CLKDIV_2_MASK)
#define CTE_CNTRL1_CLKDIV_3_MASK                 (0x70000U)
#define CTE_CNTRL1_CLKDIV_3_SHIFT                (16U)
#define CTE_CNTRL1_CLKDIV_3_WIDTH                (3U)
#define CTE_CNTRL1_CLKDIV_3(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL1_CLKDIV_3_SHIFT)) & CTE_CNTRL1_CLKDIV_3_MASK)
#define CTE_CNTRL1_CLKDIV_4_MASK                 (0x380000U)
#define CTE_CNTRL1_CLKDIV_4_SHIFT                (19U)
#define CTE_CNTRL1_CLKDIV_4_WIDTH                (3U)
#define CTE_CNTRL1_CLKDIV_4(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL1_CLKDIV_4_SHIFT)) & CTE_CNTRL1_CLKDIV_4_MASK)
#define CTE_CNTRL1_TIMEMODE_MASK                 (0x1000000U)
#define CTE_CNTRL1_TIMEMODE_SHIFT                (24U)
#define CTE_CNTRL1_TIMEMODE_WIDTH                (1U)
#define CTE_CNTRL1_TIMEMODE(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL1_TIMEMODE_SHIFT)) & CTE_CNTRL1_TIMEMODE_MASK)
#define CTE_CNTRL1_CTE_EN_MASK                   (0x2000000U)
#define CTE_CNTRL1_CTE_EN_SHIFT                  (25U)
#define CTE_CNTRL1_CTE_EN_WIDTH                  (1U)
#define CTE_CNTRL1_CTE_EN(x)                     (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL1_CTE_EN_SHIFT)) & CTE_CNTRL1_CTE_EN_MASK)
#define CTE_CNTRL1_CHKSM_MD_MASK                 (0x4000000U)
#define CTE_CNTRL1_CHKSM_MD_SHIFT                (26U)
#define CTE_CNTRL1_CHKSM_MD_WIDTH                (1U)
#define CTE_CNTRL1_CHKSM_MD(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL1_CHKSM_MD_SHIFT)) & CTE_CNTRL1_CHKSM_MD_MASK)
#define CTE_CNTRL1_CKSM_RST_MASK                 (0x8000000U)
#define CTE_CNTRL1_CKSM_RST_SHIFT                (27U)
#define CTE_CNTRL1_CKSM_RST_WIDTH                (1U)
#define CTE_CNTRL1_CKSM_RST(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CNTRL1_CKSM_RST_SHIFT)) & CTE_CNTRL1_CKSM_RST_MASK)
/*! @} */

/*! @name LSB - Timing Table 0 Register (LSB)..Timing Table 1 Register (LSB) */
/*! @{ */
#define CTE_LSB_TIME_0_MASK                      (0xFFFFU)
#define CTE_LSB_TIME_0_SHIFT                     (0U)
#define CTE_LSB_TIME_0_WIDTH                     (16U)
#define CTE_LSB_TIME_0(x)                        (((uint32_t)(((uint32_t)(x)) << CTE_LSB_TIME_0_SHIFT)) & CTE_LSB_TIME_0_MASK)
#define CTE_LSB_TIME_1_MASK                      (0xFFFFU)
#define CTE_LSB_TIME_1_SHIFT                     (0U)
#define CTE_LSB_TIME_1_WIDTH                     (16U)
#define CTE_LSB_TIME_1(x)                        (((uint32_t)(((uint32_t)(x)) << CTE_LSB_TIME_1_SHIFT)) & CTE_LSB_TIME_1_MASK)
#define CTE_LSB_SPT_EVT_MASK                     (0xF0000000U)
#define CTE_LSB_SPT_EVT_SHIFT                    (28U)
#define CTE_LSB_SPT_EVT_WIDTH                    (4U)
#define CTE_LSB_SPT_EVT(x)                       (((uint32_t)(((uint32_t)(x)) << CTE_LSB_SPT_EVT_SHIFT)) & CTE_LSB_SPT_EVT_MASK)
/*! @} */

/*! @name MSB - Timing Table 0 Register (MSB)..Timing Table 1 Register (MSB) */
/*! @{ */
#define CTE_MSB_CTE_TYP0_MASK                    (0x3U)
#define CTE_MSB_CTE_TYP0_SHIFT                   (0U)
#define CTE_MSB_CTE_TYP0_WIDTH                   (2U)
#define CTE_MSB_CTE_TYP0(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_MSB_CTE_TYP0_SHIFT)) & CTE_MSB_CTE_TYP0_MASK)
#define CTE_MSB_CTE_TYP1_MASK                    (0xCU)
#define CTE_MSB_CTE_TYP1_SHIFT                   (2U)
#define CTE_MSB_CTE_TYP1_WIDTH                   (2U)
#define CTE_MSB_CTE_TYP1(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_MSB_CTE_TYP1_SHIFT)) & CTE_MSB_CTE_TYP1_MASK)
#define CTE_MSB_CTE_TYP2_MASK                    (0x30U)
#define CTE_MSB_CTE_TYP2_SHIFT                   (4U)
#define CTE_MSB_CTE_TYP2_WIDTH                   (2U)
#define CTE_MSB_CTE_TYP2(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_MSB_CTE_TYP2_SHIFT)) & CTE_MSB_CTE_TYP2_MASK)
#define CTE_MSB_CTE_TYP3_MASK                    (0xC0U)
#define CTE_MSB_CTE_TYP3_SHIFT                   (6U)
#define CTE_MSB_CTE_TYP3_WIDTH                   (2U)
#define CTE_MSB_CTE_TYP3(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_MSB_CTE_TYP3_SHIFT)) & CTE_MSB_CTE_TYP3_MASK)
#define CTE_MSB_CTE_TYP4_MASK                    (0x300U)
#define CTE_MSB_CTE_TYP4_SHIFT                   (8U)
#define CTE_MSB_CTE_TYP4_WIDTH                   (2U)
#define CTE_MSB_CTE_TYP4(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_MSB_CTE_TYP4_SHIFT)) & CTE_MSB_CTE_TYP4_MASK)
#define CTE_MSB_CTE_TYP5_MASK                    (0xC00U)
#define CTE_MSB_CTE_TYP5_SHIFT                   (10U)
#define CTE_MSB_CTE_TYP5_WIDTH                   (2U)
#define CTE_MSB_CTE_TYP5(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_MSB_CTE_TYP5_SHIFT)) & CTE_MSB_CTE_TYP5_MASK)
#define CTE_MSB_CTE_TYP6_MASK                    (0x3000U)
#define CTE_MSB_CTE_TYP6_SHIFT                   (12U)
#define CTE_MSB_CTE_TYP6_WIDTH                   (2U)
#define CTE_MSB_CTE_TYP6(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_MSB_CTE_TYP6_SHIFT)) & CTE_MSB_CTE_TYP6_MASK)
#define CTE_MSB_CTE_TYP7_MASK                    (0xC000U)
#define CTE_MSB_CTE_TYP7_SHIFT                   (14U)
#define CTE_MSB_CTE_TYP7_WIDTH                   (2U)
#define CTE_MSB_CTE_TYP7(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_MSB_CTE_TYP7_SHIFT)) & CTE_MSB_CTE_TYP7_MASK)
#define CTE_MSB_RCS_DEF_MASK                     (0x30000U)
#define CTE_MSB_RCS_DEF_SHIFT                    (16U)
#define CTE_MSB_RCS_DEF_WIDTH                    (2U)
#define CTE_MSB_RCS_DEF(x)                       (((uint32_t)(((uint32_t)(x)) << CTE_MSB_RCS_DEF_SHIFT)) & CTE_MSB_RCS_DEF_MASK)
#define CTE_MSB_RFS_DEF_MASK                     (0xC0000U)
#define CTE_MSB_RFS_DEF_SHIFT                    (18U)
#define CTE_MSB_RFS_DEF_WIDTH                    (2U)
#define CTE_MSB_RFS_DEF(x)                       (((uint32_t)(((uint32_t)(x)) << CTE_MSB_RFS_DEF_SHIFT)) & CTE_MSB_RFS_DEF_MASK)
#define CTE_MSB_eTIME_AUX_0_MASK                 (0x200000U)
#define CTE_MSB_eTIME_AUX_0_SHIFT                (21U)
#define CTE_MSB_eTIME_AUX_0_WIDTH                (1U)
#define CTE_MSB_eTIME_AUX_0(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_MSB_eTIME_AUX_0_SHIFT)) & CTE_MSB_eTIME_AUX_0_MASK)
#define CTE_MSB_eTIME_AUX_1_MASK                 (0x400000U)
#define CTE_MSB_eTIME_AUX_1_SHIFT                (22U)
#define CTE_MSB_eTIME_AUX_1_WIDTH                (1U)
#define CTE_MSB_eTIME_AUX_1(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_MSB_eTIME_AUX_1_SHIFT)) & CTE_MSB_eTIME_AUX_1_MASK)
/*! @} */

/*! @name SIGTYPE0 - Signal Type Register 0 */
/*! @{ */
#define CTE_SIGTYPE0_SPT_EVT_MASK                (0x7800U)
#define CTE_SIGTYPE0_SPT_EVT_SHIFT               (11U)
#define CTE_SIGTYPE0_SPT_EVT_WIDTH               (4U)
#define CTE_SIGTYPE0_SPT_EVT(x)                  (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE0_SPT_EVT_SHIFT)) & CTE_SIGTYPE0_SPT_EVT_MASK)
#define CTE_SIGTYPE0_CTE_TYP0_MASK               (0x30000U)
#define CTE_SIGTYPE0_CTE_TYP0_SHIFT              (16U)
#define CTE_SIGTYPE0_CTE_TYP0_WIDTH              (2U)
#define CTE_SIGTYPE0_CTE_TYP0(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE0_CTE_TYP0_SHIFT)) & CTE_SIGTYPE0_CTE_TYP0_MASK)
#define CTE_SIGTYPE0_CTE_TYP1_MASK               (0xC0000U)
#define CTE_SIGTYPE0_CTE_TYP1_SHIFT              (18U)
#define CTE_SIGTYPE0_CTE_TYP1_WIDTH              (2U)
#define CTE_SIGTYPE0_CTE_TYP1(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE0_CTE_TYP1_SHIFT)) & CTE_SIGTYPE0_CTE_TYP1_MASK)
#define CTE_SIGTYPE0_CTE_TYP2_MASK               (0x300000U)
#define CTE_SIGTYPE0_CTE_TYP2_SHIFT              (20U)
#define CTE_SIGTYPE0_CTE_TYP2_WIDTH              (2U)
#define CTE_SIGTYPE0_CTE_TYP2(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE0_CTE_TYP2_SHIFT)) & CTE_SIGTYPE0_CTE_TYP2_MASK)
#define CTE_SIGTYPE0_CTE_TYP3_MASK               (0xC00000U)
#define CTE_SIGTYPE0_CTE_TYP3_SHIFT              (22U)
#define CTE_SIGTYPE0_CTE_TYP3_WIDTH              (2U)
#define CTE_SIGTYPE0_CTE_TYP3(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE0_CTE_TYP3_SHIFT)) & CTE_SIGTYPE0_CTE_TYP3_MASK)
#define CTE_SIGTYPE0_CTE_TYP4_MASK               (0x3000000U)
#define CTE_SIGTYPE0_CTE_TYP4_SHIFT              (24U)
#define CTE_SIGTYPE0_CTE_TYP4_WIDTH              (2U)
#define CTE_SIGTYPE0_CTE_TYP4(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE0_CTE_TYP4_SHIFT)) & CTE_SIGTYPE0_CTE_TYP4_MASK)
#define CTE_SIGTYPE0_CTE_TYP5_MASK               (0xC000000U)
#define CTE_SIGTYPE0_CTE_TYP5_SHIFT              (26U)
#define CTE_SIGTYPE0_CTE_TYP5_WIDTH              (2U)
#define CTE_SIGTYPE0_CTE_TYP5(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE0_CTE_TYP5_SHIFT)) & CTE_SIGTYPE0_CTE_TYP5_MASK)
#define CTE_SIGTYPE0_CTE_TYP6_MASK               (0x30000000U)
#define CTE_SIGTYPE0_CTE_TYP6_SHIFT              (28U)
#define CTE_SIGTYPE0_CTE_TYP6_WIDTH              (2U)
#define CTE_SIGTYPE0_CTE_TYP6(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE0_CTE_TYP6_SHIFT)) & CTE_SIGTYPE0_CTE_TYP6_MASK)
#define CTE_SIGTYPE0_CTE_TYP7_MASK               (0xC0000000U)
#define CTE_SIGTYPE0_CTE_TYP7_SHIFT              (30U)
#define CTE_SIGTYPE0_CTE_TYP7_WIDTH              (2U)
#define CTE_SIGTYPE0_CTE_TYP7(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE0_CTE_TYP7_SHIFT)) & CTE_SIGTYPE0_CTE_TYP7_MASK)
/*! @} */

/*! @name SIGTYPE1 - Signal Type Register 1 */
/*! @{ */
#define CTE_SIGTYPE1_RCS_MASK                    (0x3U)
#define CTE_SIGTYPE1_RCS_SHIFT                   (0U)
#define CTE_SIGTYPE1_RCS_WIDTH                   (2U)
#define CTE_SIGTYPE1_RCS(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE1_RCS_SHIFT)) & CTE_SIGTYPE1_RCS_MASK)
#define CTE_SIGTYPE1_RFS_MASK                    (0xCU)
#define CTE_SIGTYPE1_RFS_SHIFT                   (2U)
#define CTE_SIGTYPE1_RFS_WIDTH                   (2U)
#define CTE_SIGTYPE1_RFS(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_SIGTYPE1_RFS_SHIFT)) & CTE_SIGTYPE1_RFS_MASK)
/*! @} */

/*! @name INTEN - CTE Interrupt Enable Register */
/*! @{ */
#define CTE_INTEN_TT0_STEN_MASK                  (0x1U)
#define CTE_INTEN_TT0_STEN_SHIFT                 (0U)
#define CTE_INTEN_TT0_STEN_WIDTH                 (1U)
#define CTE_INTEN_TT0_STEN(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_INTEN_TT0_STEN_SHIFT)) & CTE_INTEN_TT0_STEN_MASK)
#define CTE_INTEN_TT1_STEN_MASK                  (0x2U)
#define CTE_INTEN_TT1_STEN_SHIFT                 (1U)
#define CTE_INTEN_TT1_STEN_WIDTH                 (1U)
#define CTE_INTEN_TT1_STEN(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_INTEN_TT1_STEN_SHIFT)) & CTE_INTEN_TT1_STEN_MASK)
#define CTE_INTEN_TT0_EDEN_MASK                  (0x4U)
#define CTE_INTEN_TT0_EDEN_SHIFT                 (2U)
#define CTE_INTEN_TT0_EDEN_WIDTH                 (1U)
#define CTE_INTEN_TT0_EDEN(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_INTEN_TT0_EDEN_SHIFT)) & CTE_INTEN_TT0_EDEN_MASK)
#define CTE_INTEN_TT1_EDEN_MASK                  (0x8U)
#define CTE_INTEN_TT1_EDEN_SHIFT                 (3U)
#define CTE_INTEN_TT1_EDEN_WIDTH                 (1U)
#define CTE_INTEN_TT1_EDEN(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_INTEN_TT1_EDEN_SHIFT)) & CTE_INTEN_TT1_EDEN_MASK)
#define CTE_INTEN_RCS_EN_MASK                    (0x40U)
#define CTE_INTEN_RCS_EN_SHIFT                   (6U)
#define CTE_INTEN_RCS_EN_WIDTH                   (1U)
#define CTE_INTEN_RCS_EN(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_INTEN_RCS_EN_SHIFT)) & CTE_INTEN_RCS_EN_MASK)
#define CTE_INTEN_RFS_EN_MASK                    (0x80U)
#define CTE_INTEN_RFS_EN_SHIFT                   (7U)
#define CTE_INTEN_RFS_EN_WIDTH                   (1U)
#define CTE_INTEN_RFS_EN(x)                      (((uint32_t)(((uint32_t)(x)) << CTE_INTEN_RFS_EN_SHIFT)) & CTE_INTEN_RFS_EN_MASK)
#define CTE_INTEN_eDMA_TEN_MASK                  (0x100U)
#define CTE_INTEN_eDMA_TEN_SHIFT                 (8U)
#define CTE_INTEN_eDMA_TEN_WIDTH                 (1U)
#define CTE_INTEN_eDMA_TEN(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_INTEN_eDMA_TEN_SHIFT)) & CTE_INTEN_eDMA_TEN_MASK)
#define CTE_INTEN_LST_EXEN_MASK                  (0x200U)
#define CTE_INTEN_LST_EXEN_SHIFT                 (9U)
#define CTE_INTEN_LST_EXEN_WIDTH                 (1U)
#define CTE_INTEN_LST_EXEN(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_INTEN_LST_EXEN_SHIFT)) & CTE_INTEN_LST_EXEN_MASK)
/*! @} */

/*! @name INTSTAT - CTE Interrupt Status Register */
/*! @{ */
#define CTE_INTSTAT_TT0_STRT_MASK                (0x1U)
#define CTE_INTSTAT_TT0_STRT_SHIFT               (0U)
#define CTE_INTSTAT_TT0_STRT_WIDTH               (1U)
#define CTE_INTSTAT_TT0_STRT(x)                  (((uint32_t)(((uint32_t)(x)) << CTE_INTSTAT_TT0_STRT_SHIFT)) & CTE_INTSTAT_TT0_STRT_MASK)
#define CTE_INTSTAT_TT1_STRT_MASK                (0x2U)
#define CTE_INTSTAT_TT1_STRT_SHIFT               (1U)
#define CTE_INTSTAT_TT1_STRT_WIDTH               (1U)
#define CTE_INTSTAT_TT1_STRT(x)                  (((uint32_t)(((uint32_t)(x)) << CTE_INTSTAT_TT1_STRT_SHIFT)) & CTE_INTSTAT_TT1_STRT_MASK)
#define CTE_INTSTAT_TT0_END_MASK                 (0x4U)
#define CTE_INTSTAT_TT0_END_SHIFT                (2U)
#define CTE_INTSTAT_TT0_END_WIDTH                (1U)
#define CTE_INTSTAT_TT0_END(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_INTSTAT_TT0_END_SHIFT)) & CTE_INTSTAT_TT0_END_MASK)
#define CTE_INTSTAT_TT1_END_MASK                 (0x8U)
#define CTE_INTSTAT_TT1_END_SHIFT                (3U)
#define CTE_INTSTAT_TT1_END_WIDTH                (1U)
#define CTE_INTSTAT_TT1_END(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_INTSTAT_TT1_END_SHIFT)) & CTE_INTSTAT_TT1_END_MASK)
#define CTE_INTSTAT_RCS_MASK                     (0x40U)
#define CTE_INTSTAT_RCS_SHIFT                    (6U)
#define CTE_INTSTAT_RCS_WIDTH                    (1U)
#define CTE_INTSTAT_RCS(x)                       (((uint32_t)(((uint32_t)(x)) << CTE_INTSTAT_RCS_SHIFT)) & CTE_INTSTAT_RCS_MASK)
#define CTE_INTSTAT_RFS_MASK                     (0x80U)
#define CTE_INTSTAT_RFS_SHIFT                    (7U)
#define CTE_INTSTAT_RFS_WIDTH                    (1U)
#define CTE_INTSTAT_RFS(x)                       (((uint32_t)(((uint32_t)(x)) << CTE_INTSTAT_RFS_SHIFT)) & CTE_INTSTAT_RFS_MASK)
#define CTE_INTSTAT_eDMA_TRG_MASK                (0x100U)
#define CTE_INTSTAT_eDMA_TRG_SHIFT               (8U)
#define CTE_INTSTAT_eDMA_TRG_WIDTH               (1U)
#define CTE_INTSTAT_eDMA_TRG(x)                  (((uint32_t)(((uint32_t)(x)) << CTE_INTSTAT_eDMA_TRG_SHIFT)) & CTE_INTSTAT_eDMA_TRG_MASK)
#define CTE_INTSTAT_LAST_EXC_MASK                (0x200U)
#define CTE_INTSTAT_LAST_EXC_SHIFT               (9U)
#define CTE_INTSTAT_LAST_EXC_WIDTH               (1U)
#define CTE_INTSTAT_LAST_EXC(x)                  (((uint32_t)(((uint32_t)(x)) << CTE_INTSTAT_LAST_EXC_SHIFT)) & CTE_INTSTAT_LAST_EXC_MASK)
/*! @} */

/*! @name CKSM_LSB - LUT Checksum Register */
/*! @{ */
#define CTE_CKSM_LSB_CHKS_LSB_MASK               (0xFFFFFFFFU)
#define CTE_CKSM_LSB_CHKS_LSB_SHIFT              (0U)
#define CTE_CKSM_LSB_CHKS_LSB_WIDTH              (32U)
#define CTE_CKSM_LSB_CHKS_LSB(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_CKSM_LSB_CHKS_LSB_SHIFT)) & CTE_CKSM_LSB_CHKS_LSB_MASK)
/*! @} */

/*! @name CKSM_MSB - LUT Checksum Register */
/*! @{ */
#define CTE_CKSM_MSB_CHKS_MSB_MASK               (0xFFU)
#define CTE_CKSM_MSB_CHKS_MSB_SHIFT              (0U)
#define CTE_CKSM_MSB_CHKS_MSB_WIDTH              (8U)
#define CTE_CKSM_MSB_CHKS_MSB(x)                 (((uint32_t)(((uint32_t)(x)) << CTE_CKSM_MSB_CHKS_MSB_SHIFT)) & CTE_CKSM_MSB_CHKS_MSB_MASK)
/*! @} */

/*! @name DBG_REG - Debug Register */
/*! @{ */
#define CTE_DBG_REG_LUT_SEL_MASK                 (0x1U)
#define CTE_DBG_REG_LUT_SEL_SHIFT                (0U)
#define CTE_DBG_REG_LUT_SEL_WIDTH                (1U)
#define CTE_DBG_REG_LUT_SEL(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_DBG_REG_LUT_SEL_SHIFT)) & CTE_DBG_REG_LUT_SEL_MASK)
#define CTE_DBG_REG_CONT_ERR_MASK                (0x2U)
#define CTE_DBG_REG_CONT_ERR_SHIFT               (1U)
#define CTE_DBG_REG_CONT_ERR_WIDTH               (1U)
#define CTE_DBG_REG_CONT_ERR(x)                  (((uint32_t)(((uint32_t)(x)) << CTE_DBG_REG_CONT_ERR_SHIFT)) & CTE_DBG_REG_CONT_ERR_MASK)
#define CTE_DBG_REG_SLV_ALGN_MASK                (0x4U)
#define CTE_DBG_REG_SLV_ALGN_SHIFT               (2U)
#define CTE_DBG_REG_SLV_ALGN_WIDTH               (1U)
#define CTE_DBG_REG_SLV_ALGN(x)                  (((uint32_t)(((uint32_t)(x)) << CTE_DBG_REG_SLV_ALGN_SHIFT)) & CTE_DBG_REG_SLV_ALGN_MASK)
#define CTE_DBG_REG_FSM_ST_MASK                  (0x18U)
#define CTE_DBG_REG_FSM_ST_SHIFT                 (3U)
#define CTE_DBG_REG_FSM_ST_WIDTH                 (2U)
#define CTE_DBG_REG_FSM_ST(x)                    (((uint32_t)(((uint32_t)(x)) << CTE_DBG_REG_FSM_ST_SHIFT)) & CTE_DBG_REG_FSM_ST_MASK)
/*! @} */

/*! @name LUT_DUR - TT0 Execution Duration Register */
/*! @{ */
#define CTE_LUT_DUR_TT0_DUR_MASK                 (0xFFFFFFFFU)
#define CTE_LUT_DUR_TT0_DUR_SHIFT                (0U)
#define CTE_LUT_DUR_TT0_DUR_WIDTH                (32U)
#define CTE_LUT_DUR_TT0_DUR(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_LUT_DUR_TT0_DUR_SHIFT)) & CTE_LUT_DUR_TT0_DUR_MASK)
/*! @} */

/*! @name LUT_DUR1 - TT1 Execution Duration Register */
/*! @{ */
#define CTE_LUT_DUR1_TT1_DUR_MASK                (0xFFFFFFFFU)
#define CTE_LUT_DUR1_TT1_DUR_SHIFT               (0U)
#define CTE_LUT_DUR1_TT1_DUR_WIDTH               (32U)
#define CTE_LUT_DUR1_TT1_DUR(x)                  (((uint32_t)(((uint32_t)(x)) << CTE_LUT_DUR1_TT1_DUR_SHIFT)) & CTE_LUT_DUR1_TT1_DUR_MASK)
/*! @} */

/*! @name CLKSEL - Clock Select Register */
/*! @{ */
#define CTE_CLKSEL_CLK_SEL0_MASK                 (0x3U)
#define CTE_CLKSEL_CLK_SEL0_SHIFT                (0U)
#define CTE_CLKSEL_CLK_SEL0_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL0(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL0_SHIFT)) & CTE_CLKSEL_CLK_SEL0_MASK)
#define CTE_CLKSEL_CLK_SEL1_MASK                 (0xCU)
#define CTE_CLKSEL_CLK_SEL1_SHIFT                (2U)
#define CTE_CLKSEL_CLK_SEL1_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL1(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL1_SHIFT)) & CTE_CLKSEL_CLK_SEL1_MASK)
#define CTE_CLKSEL_CLK_SEL2_MASK                 (0x30U)
#define CTE_CLKSEL_CLK_SEL2_SHIFT                (4U)
#define CTE_CLKSEL_CLK_SEL2_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL2(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL2_SHIFT)) & CTE_CLKSEL_CLK_SEL2_MASK)
#define CTE_CLKSEL_CLK_SEL3_MASK                 (0xC0U)
#define CTE_CLKSEL_CLK_SEL3_SHIFT                (6U)
#define CTE_CLKSEL_CLK_SEL3_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL3(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL3_SHIFT)) & CTE_CLKSEL_CLK_SEL3_MASK)
#define CTE_CLKSEL_CLK_SEL4_MASK                 (0x300U)
#define CTE_CLKSEL_CLK_SEL4_SHIFT                (8U)
#define CTE_CLKSEL_CLK_SEL4_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL4(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL4_SHIFT)) & CTE_CLKSEL_CLK_SEL4_MASK)
#define CTE_CLKSEL_CLK_SEL5_MASK                 (0xC00U)
#define CTE_CLKSEL_CLK_SEL5_SHIFT                (10U)
#define CTE_CLKSEL_CLK_SEL5_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL5(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL5_SHIFT)) & CTE_CLKSEL_CLK_SEL5_MASK)
#define CTE_CLKSEL_CLK_SEL6_MASK                 (0x3000U)
#define CTE_CLKSEL_CLK_SEL6_SHIFT                (12U)
#define CTE_CLKSEL_CLK_SEL6_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL6(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL6_SHIFT)) & CTE_CLKSEL_CLK_SEL6_MASK)
#define CTE_CLKSEL_CLK_SEL7_MASK                 (0xC000U)
#define CTE_CLKSEL_CLK_SEL7_SHIFT                (14U)
#define CTE_CLKSEL_CLK_SEL7_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL7(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL7_SHIFT)) & CTE_CLKSEL_CLK_SEL7_MASK)
#define CTE_CLKSEL_CLK_SEL8_MASK                 (0x30000U)
#define CTE_CLKSEL_CLK_SEL8_SHIFT                (16U)
#define CTE_CLKSEL_CLK_SEL8_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL8(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL8_SHIFT)) & CTE_CLKSEL_CLK_SEL8_MASK)
#define CTE_CLKSEL_CLK_SEL9_MASK                 (0xC0000U)
#define CTE_CLKSEL_CLK_SEL9_SHIFT                (18U)
#define CTE_CLKSEL_CLK_SEL9_WIDTH                (2U)
#define CTE_CLKSEL_CLK_SEL9(x)                   (((uint32_t)(((uint32_t)(x)) << CTE_CLKSEL_CLK_SEL9_SHIFT)) & CTE_CLKSEL_CLK_SEL9_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CTE_Register_Masks */

/*!
 * @}
 */ /* end of group CTE_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_CTE_H_) */
