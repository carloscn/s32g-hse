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
 * @file S32R45_DDR_GPR.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_DDR_GPR
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
#if !defined(S32R45_DDR_GPR_H_)  /* Check if memory map has not been already included */
#define S32R45_DDR_GPR_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- DDR_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DDR_GPR_Peripheral_Access_Layer DDR_GPR Peripheral Access Layer
 * @{
 */

/** DDR_GPR - Register Layout Typedef */
typedef struct {
  __IO uint32_t DDR_CONFIG_0;                      /**< Configuration 0, offset: 0x0 */
  __IO uint32_t DDR_CONFIG_1;                      /**< Configuration 1, offset: 0x4 */
  __IO uint32_t DDR_CONFIG_2;                      /**< Configuration 2, offset: 0x8 */
  __I  uint32_t DDR_CONFIG_3;                      /**< Configuration 3, offset: 0xC */
  __I  uint32_t DDR_CONFIG_4;                      /**< Configuration 4, offset: 0x10 */
  __IO uint32_t DDR_CONFIG_5;                      /**< Configuration 5, offset: 0x14 */
  __I  uint32_t DDR_CONFIG_6;                      /**< Configuration 6, offset: 0x18 */
  __IO uint32_t DDR_RET_CONTROL;                   /**< LP3 IO Retention Control, offset: 0x1C */
} DDR_GPR_Type, *DDR_GPR_MemMapPtr;

/** Number of instances of the DDR_GPR module. */
#define DDR_GPR_INSTANCE_COUNT                   (1u)

/* DDR_GPR - Peripheral instance base addresses */
/** Peripheral DDR_GPR base address */
#define DDR_GPR_BASE                             (0x4007C600u)
/** Peripheral DDR_GPR base pointer */
#define DDR_GPR                                  ((DDR_GPR_Type *)DDR_GPR_BASE)
/** Array initializer of DDR_GPR peripheral base addresses */
#define DDR_GPR_BASE_ADDRS                       { DDR_GPR_BASE }
/** Array initializer of DDR_GPR peripheral base pointers */
#define DDR_GPR_BASE_PTRS                        { DDR_GPR }

/* ----------------------------------------------------------------------------
   -- DDR_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DDR_GPR_Register_Masks DDR_GPR Register Masks
 * @{
 */

/*! @name DDR_CONFIG_0 - Configuration 0 */
/*! @{ */
#define DDR_GPR_DDR_CONFIG_0_pa_rmask_MASK       (0x3F0U)
#define DDR_GPR_DDR_CONFIG_0_pa_rmask_SHIFT      (4U)
#define DDR_GPR_DDR_CONFIG_0_pa_rmask_WIDTH      (6U)
#define DDR_GPR_DDR_CONFIG_0_pa_rmask(x)         (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_0_pa_rmask_SHIFT)) & DDR_GPR_DDR_CONFIG_0_pa_rmask_MASK)
#define DDR_GPR_DDR_CONFIG_0_pa_wmask_MASK       (0x1C00U)
#define DDR_GPR_DDR_CONFIG_0_pa_wmask_SHIFT      (10U)
#define DDR_GPR_DDR_CONFIG_0_pa_wmask_WIDTH      (3U)
#define DDR_GPR_DDR_CONFIG_0_pa_wmask(x)         (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_0_pa_wmask_SHIFT)) & DDR_GPR_DDR_CONFIG_0_pa_wmask_MASK)
#define DDR_GPR_DDR_CONFIG_0_memory_ret_MASK     (0x4000U)
#define DDR_GPR_DDR_CONFIG_0_memory_ret_SHIFT    (14U)
#define DDR_GPR_DDR_CONFIG_0_memory_ret_WIDTH    (1U)
#define DDR_GPR_DDR_CONFIG_0_memory_ret(x)       (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_0_memory_ret_SHIFT)) & DDR_GPR_DDR_CONFIG_0_memory_ret_MASK)
#define DDR_GPR_DDR_CONFIG_0_WRECC_CREDIR_CNT_MASK (0x7F0000U)
#define DDR_GPR_DDR_CONFIG_0_WRECC_CREDIR_CNT_SHIFT (16U)
#define DDR_GPR_DDR_CONFIG_0_WRECC_CREDIR_CNT_WIDTH (7U)
#define DDR_GPR_DDR_CONFIG_0_WRECC_CREDIR_CNT(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_0_WRECC_CREDIR_CNT_SHIFT)) & DDR_GPR_DDR_CONFIG_0_WRECC_CREDIR_CNT_MASK)
#define DDR_GPR_DDR_CONFIG_0_sbrAddressStartMask_35_32_MASK (0x7800000U)
#define DDR_GPR_DDR_CONFIG_0_sbrAddressStartMask_35_32_SHIFT (23U)
#define DDR_GPR_DDR_CONFIG_0_sbrAddressStartMask_35_32_WIDTH (4U)
#define DDR_GPR_DDR_CONFIG_0_sbrAddressStartMask_35_32(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_0_sbrAddressStartMask_35_32_SHIFT)) & DDR_GPR_DDR_CONFIG_0_sbrAddressStartMask_35_32_MASK)
#define DDR_GPR_DDR_CONFIG_0_sbrAddressRangeMask_35_32_MASK (0x78000000U)
#define DDR_GPR_DDR_CONFIG_0_sbrAddressRangeMask_35_32_SHIFT (27U)
#define DDR_GPR_DDR_CONFIG_0_sbrAddressRangeMask_35_32_WIDTH (4U)
#define DDR_GPR_DDR_CONFIG_0_sbrAddressRangeMask_35_32(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_0_sbrAddressRangeMask_35_32_SHIFT)) & DDR_GPR_DDR_CONFIG_0_sbrAddressRangeMask_35_32_MASK)
#define DDR_GPR_DDR_CONFIG_0_PERF_CNT_FULL_MASK_MASK (0x80000000U)
#define DDR_GPR_DDR_CONFIG_0_PERF_CNT_FULL_MASK_SHIFT (31U)
#define DDR_GPR_DDR_CONFIG_0_PERF_CNT_FULL_MASK_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_0_PERF_CNT_FULL_MASK(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_0_PERF_CNT_FULL_MASK_SHIFT)) & DDR_GPR_DDR_CONFIG_0_PERF_CNT_FULL_MASK_MASK)
/*! @} */

/*! @name DDR_CONFIG_1 - Configuration 1 */
/*! @{ */
#define DDR_GPR_DDR_CONFIG_1_sbrAddressStartMask_MASK (0xFFFFFFFFU)
#define DDR_GPR_DDR_CONFIG_1_sbrAddressStartMask_SHIFT (0U)
#define DDR_GPR_DDR_CONFIG_1_sbrAddressStartMask_WIDTH (32U)
#define DDR_GPR_DDR_CONFIG_1_sbrAddressStartMask(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_1_sbrAddressStartMask_SHIFT)) & DDR_GPR_DDR_CONFIG_1_sbrAddressStartMask_MASK)
/*! @} */

/*! @name DDR_CONFIG_2 - Configuration 2 */
/*! @{ */
#define DDR_GPR_DDR_CONFIG_2_sbrAddressRangeMask_MASK (0xFFFFFFFFU)
#define DDR_GPR_DDR_CONFIG_2_sbrAddressRangeMask_SHIFT (0U)
#define DDR_GPR_DDR_CONFIG_2_sbrAddressRangeMask_WIDTH (32U)
#define DDR_GPR_DDR_CONFIG_2_sbrAddressRangeMask(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_2_sbrAddressRangeMask_SHIFT)) & DDR_GPR_DDR_CONFIG_2_sbrAddressRangeMask_MASK)
/*! @} */

/*! @name DDR_CONFIG_3 - Configuration 3 */
/*! @{ */
#define DDR_GPR_DDR_CONFIG_3_dbg_dfi_ie_cmd_type_MASK (0x7U)
#define DDR_GPR_DDR_CONFIG_3_dbg_dfi_ie_cmd_type_SHIFT (0U)
#define DDR_GPR_DDR_CONFIG_3_dbg_dfi_ie_cmd_type_WIDTH (3U)
#define DDR_GPR_DDR_CONFIG_3_dbg_dfi_ie_cmd_type(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_3_dbg_dfi_ie_cmd_type_SHIFT)) & DDR_GPR_DDR_CONFIG_3_dbg_dfi_ie_cmd_type_MASK)
#define DDR_GPR_DDR_CONFIG_3_hif_refresh_req_bank_MASK (0x1F8U)
#define DDR_GPR_DDR_CONFIG_3_hif_refresh_req_bank_SHIFT (3U)
#define DDR_GPR_DDR_CONFIG_3_hif_refresh_req_bank_WIDTH (6U)
#define DDR_GPR_DDR_CONFIG_3_hif_refresh_req_bank(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_3_hif_refresh_req_bank_SHIFT)) & DDR_GPR_DDR_CONFIG_3_hif_refresh_req_bank_MASK)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_0_MASK  (0x1E00U)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_0_SHIFT (9U)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_0_WIDTH (4U)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_0(x)    (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_3_raqb_wcount_0_SHIFT)) & DDR_GPR_DDR_CONFIG_3_raqb_wcount_0_MASK)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_1_MASK  (0x1E000U)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_1_SHIFT (13U)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_1_WIDTH (4U)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_1(x)    (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_3_raqb_wcount_1_SHIFT)) & DDR_GPR_DDR_CONFIG_3_raqb_wcount_1_MASK)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_2_MASK  (0x1E0000U)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_2_SHIFT (17U)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_2_WIDTH (4U)
#define DDR_GPR_DDR_CONFIG_3_raqb_wcount_2(x)    (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_3_raqb_wcount_2_SHIFT)) & DDR_GPR_DDR_CONFIG_3_raqb_wcount_2_MASK)
#define DDR_GPR_DDR_CONFIG_3_stat_ddrc_reg_selfref_type_MASK (0x600000U)
#define DDR_GPR_DDR_CONFIG_3_stat_ddrc_reg_selfref_type_SHIFT (21U)
#define DDR_GPR_DDR_CONFIG_3_stat_ddrc_reg_selfref_type_WIDTH (2U)
#define DDR_GPR_DDR_CONFIG_3_stat_ddrc_reg_selfref_type(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_3_stat_ddrc_reg_selfref_type_SHIFT)) & DDR_GPR_DDR_CONFIG_3_stat_ddrc_reg_selfref_type_MASK)
/*! @} */

/*! @name DDR_CONFIG_4 - Configuration 4 */
/*! @{ */
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_0_MASK  (0xFU)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_0_SHIFT (0U)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_0_WIDTH (4U)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_0(x)    (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_4_raqr_wcount_0_SHIFT)) & DDR_GPR_DDR_CONFIG_4_raqr_wcount_0_MASK)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_1_MASK  (0xF0U)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_1_SHIFT (4U)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_1_WIDTH (4U)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_1(x)    (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_4_raqr_wcount_1_SHIFT)) & DDR_GPR_DDR_CONFIG_4_raqr_wcount_1_MASK)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_2_MASK  (0xF00U)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_2_SHIFT (8U)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_2_WIDTH (4U)
#define DDR_GPR_DDR_CONFIG_4_raqr_wcount_2(x)    (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_4_raqr_wcount_2_SHIFT)) & DDR_GPR_DDR_CONFIG_4_raqr_wcount_2_MASK)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_0_MASK   (0xF000U)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_0_SHIFT  (12U)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_0_WIDTH  (4U)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_0(x)     (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_4_waq_wcount_0_SHIFT)) & DDR_GPR_DDR_CONFIG_4_waq_wcount_0_MASK)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_1_MASK   (0xF0000U)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_1_SHIFT  (16U)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_1_WIDTH  (4U)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_1(x)     (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_4_waq_wcount_1_SHIFT)) & DDR_GPR_DDR_CONFIG_4_waq_wcount_1_MASK)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_2_MASK   (0xF00000U)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_2_SHIFT  (20U)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_2_WIDTH  (4U)
#define DDR_GPR_DDR_CONFIG_4_waq_wcount_2(x)     (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_4_waq_wcount_2_SHIFT)) & DDR_GPR_DDR_CONFIG_4_waq_wcount_2_MASK)
/*! @} */

/*! @name DDR_CONFIG_5 - Configuration 5 */
/*! @{ */
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_0_MASK     (0x1U)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_0_SHIFT    (0U)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_0_WIDTH    (1U)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_0(x)       (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_raqr_pop_0_SHIFT)) & DDR_GPR_DDR_CONFIG_5_raqr_pop_0_MASK)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_1_MASK     (0x2U)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_1_SHIFT    (1U)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_1_WIDTH    (1U)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_1(x)       (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_raqr_pop_1_SHIFT)) & DDR_GPR_DDR_CONFIG_5_raqr_pop_1_MASK)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_2_MASK     (0x4U)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_2_SHIFT    (2U)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_2_WIDTH    (1U)
#define DDR_GPR_DDR_CONFIG_5_raqr_pop_2(x)       (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_raqr_pop_2_SHIFT)) & DDR_GPR_DDR_CONFIG_5_raqr_pop_2_MASK)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_0_MASK    (0x8U)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_0_SHIFT   (3U)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_0_WIDTH   (1U)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_0(x)      (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_raqr_push_0_SHIFT)) & DDR_GPR_DDR_CONFIG_5_raqr_push_0_MASK)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_1_MASK    (0x10U)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_1_SHIFT   (4U)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_1_WIDTH   (1U)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_1(x)      (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_raqr_push_1_SHIFT)) & DDR_GPR_DDR_CONFIG_5_raqr_push_1_MASK)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_2_MASK    (0x20U)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_2_SHIFT   (5U)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_2_WIDTH   (1U)
#define DDR_GPR_DDR_CONFIG_5_raqr_push_2(x)      (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_raqr_push_2_SHIFT)) & DDR_GPR_DDR_CONFIG_5_raqr_push_2_MASK)
#define DDR_GPR_DDR_CONFIG_5_raq_split_0_MASK    (0x40U)
#define DDR_GPR_DDR_CONFIG_5_raq_split_0_SHIFT   (6U)
#define DDR_GPR_DDR_CONFIG_5_raq_split_0_WIDTH   (1U)
#define DDR_GPR_DDR_CONFIG_5_raq_split_0(x)      (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_raq_split_0_SHIFT)) & DDR_GPR_DDR_CONFIG_5_raq_split_0_MASK)
#define DDR_GPR_DDR_CONFIG_5_raq_split_1_MASK    (0x80U)
#define DDR_GPR_DDR_CONFIG_5_raq_split_1_SHIFT   (7U)
#define DDR_GPR_DDR_CONFIG_5_raq_split_1_WIDTH   (1U)
#define DDR_GPR_DDR_CONFIG_5_raq_split_1(x)      (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_raq_split_1_SHIFT)) & DDR_GPR_DDR_CONFIG_5_raq_split_1_MASK)
#define DDR_GPR_DDR_CONFIG_5_raq_split_2_MASK    (0x100U)
#define DDR_GPR_DDR_CONFIG_5_raq_split_2_SHIFT   (8U)
#define DDR_GPR_DDR_CONFIG_5_raq_split_2_WIDTH   (1U)
#define DDR_GPR_DDR_CONFIG_5_raq_split_2(x)      (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_raq_split_2_SHIFT)) & DDR_GPR_DDR_CONFIG_5_raq_split_2_MASK)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi0_MASK (0x200U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi0_SHIFT (9U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi0_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi0(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi0_SHIFT)) & DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi0_MASK)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi0_MASK (0x400U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi0_SHIFT (10U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi0_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi0(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi0_SHIFT)) & DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi0_MASK)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi0_MASK (0x800U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi0_SHIFT (11U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi0_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi0(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi0_SHIFT)) & DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi0_MASK)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi0_MASK (0x1000U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi0_SHIFT (12U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi0_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi0(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi0_SHIFT)) & DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi0_MASK)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi1_MASK (0x2000U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi1_SHIFT (13U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi1_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi1(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi1_SHIFT)) & DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi1_MASK)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi1_MASK (0x4000U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi1_SHIFT (14U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi1_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi1(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi1_SHIFT)) & DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi1_MASK)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi1_MASK (0x8000U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi1_SHIFT (15U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi1_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi1(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi1_SHIFT)) & DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi1_MASK)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi1_MASK (0x10000U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi1_SHIFT (16U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi1_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi1(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi1_SHIFT)) & DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi1_MASK)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi2_MASK (0x20000U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi2_SHIFT (17U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi2_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi2(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi2_SHIFT)) & DDR_GPR_DDR_CONFIG_5_dummy_rccu_set_axi2_MASK)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi2_MASK (0x40000U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi2_SHIFT (18U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi2_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi2(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi2_SHIFT)) & DDR_GPR_DDR_CONFIG_5_main_rccu_set_axi2_MASK)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi2_MASK (0x80000U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi2_SHIFT (19U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi2_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi2(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi2_SHIFT)) & DDR_GPR_DDR_CONFIG_5_dummy_rccu_clr_axi2_MASK)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi2_MASK (0x100000U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi2_SHIFT (20U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi2_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi2(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi2_SHIFT)) & DDR_GPR_DDR_CONFIG_5_main_rccu_clr_axi2_MASK)
/*! @} */

/*! @name DDR_CONFIG_6 - Configuration 6 */
/*! @{ */
#define DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcl_MASK (0x10000U)
#define DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcl_SHIFT (16U)
#define DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcl_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcl(x)  (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcl_SHIFT)) & DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcl_MASK)
#define DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcs_MASK (0x20000U)
#define DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcs_SHIFT (17U)
#define DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcs_WIDTH (1U)
#define DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcs(x)  (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcs_SHIFT)) & DDR_GPR_DDR_CONFIG_6_perf_op_is_zqcs_MASK)
/*! @} */

/*! @name DDR_RET_CONTROL - LP3 IO Retention Control */
/*! @{ */
#define DDR_GPR_DDR_RET_CONTROL_DDR_RET_CONTROL_MASK (0x1U)
#define DDR_GPR_DDR_RET_CONTROL_DDR_RET_CONTROL_SHIFT (0U)
#define DDR_GPR_DDR_RET_CONTROL_DDR_RET_CONTROL_WIDTH (1U)
#define DDR_GPR_DDR_RET_CONTROL_DDR_RET_CONTROL(x) (((uint32_t)(((uint32_t)(x)) << DDR_GPR_DDR_RET_CONTROL_DDR_RET_CONTROL_SHIFT)) & DDR_GPR_DDR_RET_CONTROL_DDR_RET_CONTROL_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group DDR_GPR_Register_Masks */

/*!
 * @}
 */ /* end of group DDR_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_DDR_GPR_H_) */
