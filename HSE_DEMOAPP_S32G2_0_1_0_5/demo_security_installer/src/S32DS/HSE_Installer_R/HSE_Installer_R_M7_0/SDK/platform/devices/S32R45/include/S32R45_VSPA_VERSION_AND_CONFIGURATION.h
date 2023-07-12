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
 * @file S32R45_VSPA_Version_and_configuration.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA_Version_and_configuration
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
#if !defined(S32R45_VSPA_Version_and_configuration_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_Version_and_configuration_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA_Version_and_configuration Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Version_and_configuration_Peripheral_Access_Layer VSPA_Version_and_configuration Peripheral Access Layer
 * @{
 */

/** VSPA_Version_and_configuration - Register Layout Typedef */
typedef struct {
  __I  uint32_t HWVERSION;                         /**< VSPA Hardware Version, offset: 0x0 */
  __IO uint32_t SWVERSION;                         /**< VCPU Software Version, offset: 0x4 */
  uint8_t RESERVED_0[56];
  __I  uint32_t PARAM0;                            /**< VSPA Parameters 0, offset: 0x40 */
  __I  uint32_t PARAM1;                            /**< VSPA Parameters 1, offset: 0x44 */
  __I  uint32_t PARAM2;                            /**< VSPA Parameters 2, offset: 0x48 */
  __I  uint32_t DMEM0_SIZE;                        /**< VCPU DMEM Size, offset: 0x4C */
} VSPA_Version_and_configuration_Type, *VSPA_Version_and_configuration_MemMapPtr;

/** Number of instances of the VSPA_Version_and_configuration module. */
#define VSPA_Version_and_configuration_INSTANCE_COUNT (2u)

/* VSPA_Version_and_configuration - Peripheral instance base addresses */
/** Peripheral LAX_0_Version_and_configuration base address */
#define LAX_0_Version_and_configuration_BASE     (0x44028000u)
/** Peripheral LAX_0_Version_and_configuration base pointer */
#define LAX_0_Version_and_configuration          ((VSPA_Version_and_configuration_Type *)LAX_0_Version_and_configuration_BASE)
/** Peripheral LAX_1_Version_and_configuration base address */
#define LAX_1_Version_and_configuration_BASE     (0x44029000u)
/** Peripheral LAX_1_Version_and_configuration base pointer */
#define LAX_1_Version_and_configuration          ((VSPA_Version_and_configuration_Type *)LAX_1_Version_and_configuration_BASE)
/** Array initializer of VSPA_Version_and_configuration peripheral base
 * addresses */
#define VSPA_Version_and_configuration_BASE_ADDRS { LAX_0_Version_and_configuration_BASE, LAX_1_Version_and_configuration_BASE }
/** Array initializer of VSPA_Version_and_configuration peripheral base pointers
 * */
#define VSPA_Version_and_configuration_BASE_PTRS { LAX_0_Version_and_configuration, LAX_1_Version_and_configuration }

/* ----------------------------------------------------------------------------
   -- VSPA_Version_and_configuration Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Version_and_configuration_Register_Masks VSPA_Version_and_configuration Register Masks
 * @{
 */

/*! @name HWVERSION - VSPA Hardware Version */
/*! @{ */
#define VSPA_Version_and_configuration_HWVERSION_vspa_hw_version_MASK (0xFFFFFFFFU)
#define VSPA_Version_and_configuration_HWVERSION_vspa_hw_version_SHIFT (0U)
#define VSPA_Version_and_configuration_HWVERSION_vspa_hw_version_WIDTH (32U)
#define VSPA_Version_and_configuration_HWVERSION_vspa_hw_version(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_HWVERSION_vspa_hw_version_SHIFT)) & VSPA_Version_and_configuration_HWVERSION_vspa_hw_version_MASK)
/*! @} */

/*! @name SWVERSION - VCPU Software Version */
/*! @{ */
#define VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_15_0_MASK (0xFFFFU)
#define VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_15_0_SHIFT (0U)
#define VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_15_0_WIDTH (16U)
#define VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_15_0(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_15_0_SHIFT)) & VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_15_0_MASK)
#define VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_31_16_MASK (0xFFFF0000U)
#define VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_31_16_SHIFT (16U)
#define VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_31_16_WIDTH (16U)
#define VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_31_16(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_31_16_SHIFT)) & VSPA_Version_and_configuration_SWVERSION_pram_ucode_version_31_16_MASK)
/*! @} */

/*! @name PARAM0 - VSPA Parameters 0 */
/*! @{ */
#define VSPA_Version_and_configuration_PARAM0_atid_value_MASK (0x7FU)
#define VSPA_Version_and_configuration_PARAM0_atid_value_SHIFT (0U)
#define VSPA_Version_and_configuration_PARAM0_atid_value_WIDTH (7U)
#define VSPA_Version_and_configuration_PARAM0_atid_value(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_atid_value_SHIFT)) & VSPA_Version_and_configuration_PARAM0_atid_value_MASK)
#define VSPA_Version_and_configuration_PARAM0_st_llr8_qam_enable_MASK (0x80U)
#define VSPA_Version_and_configuration_PARAM0_st_llr8_qam_enable_SHIFT (7U)
#define VSPA_Version_and_configuration_PARAM0_st_llr8_qam_enable_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_st_llr8_qam_enable(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_st_llr8_qam_enable_SHIFT)) & VSPA_Version_and_configuration_PARAM0_st_llr8_qam_enable_MASK)
#define VSPA_Version_and_configuration_PARAM0_unalign_MASK (0x700U)
#define VSPA_Version_and_configuration_PARAM0_unalign_SHIFT (8U)
#define VSPA_Version_and_configuration_PARAM0_unalign_WIDTH (3U)
#define VSPA_Version_and_configuration_PARAM0_unalign(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_unalign_SHIFT)) & VSPA_Version_and_configuration_PARAM0_unalign_MASK)
#define VSPA_Version_and_configuration_PARAM0_cgu_present_MASK (0x800U)
#define VSPA_Version_and_configuration_PARAM0_cgu_present_SHIFT (11U)
#define VSPA_Version_and_configuration_PARAM0_cgu_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_cgu_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_cgu_present_SHIFT)) & VSPA_Version_and_configuration_PARAM0_cgu_present_MASK)
#define VSPA_Version_and_configuration_PARAM0_atan_present_MASK (0x1000U)
#define VSPA_Version_and_configuration_PARAM0_atan_present_SHIFT (12U)
#define VSPA_Version_and_configuration_PARAM0_atan_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_atan_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_atan_present_SHIFT)) & VSPA_Version_and_configuration_PARAM0_atan_present_MASK)
#define VSPA_Version_and_configuration_PARAM0_rcp_present_MASK (0x2000U)
#define VSPA_Version_and_configuration_PARAM0_rcp_present_SHIFT (13U)
#define VSPA_Version_and_configuration_PARAM0_rcp_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_rcp_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_rcp_present_SHIFT)) & VSPA_Version_and_configuration_PARAM0_rcp_present_MASK)
#define VSPA_Version_and_configuration_PARAM0_rrt_present_MASK (0x4000U)
#define VSPA_Version_and_configuration_PARAM0_rrt_present_SHIFT (14U)
#define VSPA_Version_and_configuration_PARAM0_rrt_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_rrt_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_rrt_present_SHIFT)) & VSPA_Version_and_configuration_PARAM0_rrt_present_MASK)
#define VSPA_Version_and_configuration_PARAM0_srt_present_MASK (0x8000U)
#define VSPA_Version_and_configuration_PARAM0_srt_present_SHIFT (15U)
#define VSPA_Version_and_configuration_PARAM0_srt_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_srt_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_srt_present_SHIFT)) & VSPA_Version_and_configuration_PARAM0_srt_present_MASK)
#define VSPA_Version_and_configuration_PARAM0_cmm_present_MASK (0x10000U)
#define VSPA_Version_and_configuration_PARAM0_cmm_present_SHIFT (16U)
#define VSPA_Version_and_configuration_PARAM0_cmm_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_cmm_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_cmm_present_SHIFT)) & VSPA_Version_and_configuration_PARAM0_cmm_present_MASK)
#define VSPA_Version_and_configuration_PARAM0_nco_present_MASK (0x20000U)
#define VSPA_Version_and_configuration_PARAM0_nco_present_SHIFT (17U)
#define VSPA_Version_and_configuration_PARAM0_nco_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_nco_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_nco_present_SHIFT)) & VSPA_Version_and_configuration_PARAM0_nco_present_MASK)
#define VSPA_Version_and_configuration_PARAM0_dma_di_eng_MASK (0x40000U)
#define VSPA_Version_and_configuration_PARAM0_dma_di_eng_SHIFT (18U)
#define VSPA_Version_and_configuration_PARAM0_dma_di_eng_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_dma_di_eng(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_dma_di_eng_SHIFT)) & VSPA_Version_and_configuration_PARAM0_dma_di_eng_MASK)
#define VSPA_Version_and_configuration_PARAM0_thread_protection_MASK (0x80000U)
#define VSPA_Version_and_configuration_PARAM0_thread_protection_SHIFT (19U)
#define VSPA_Version_and_configuration_PARAM0_thread_protection_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_thread_protection(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_thread_protection_SHIFT)) & VSPA_Version_and_configuration_PARAM0_thread_protection_MASK)
#define VSPA_Version_and_configuration_PARAM0_lut_table_count_MASK (0x7F00000U)
#define VSPA_Version_and_configuration_PARAM0_lut_table_count_SHIFT (20U)
#define VSPA_Version_and_configuration_PARAM0_lut_table_count_WIDTH (7U)
#define VSPA_Version_and_configuration_PARAM0_lut_table_count(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_lut_table_count_SHIFT)) & VSPA_Version_and_configuration_PARAM0_lut_table_count_MASK)
#define VSPA_Version_and_configuration_PARAM0_axi_sideband_width_MASK (0x38000000U)
#define VSPA_Version_and_configuration_PARAM0_axi_sideband_width_SHIFT (27U)
#define VSPA_Version_and_configuration_PARAM0_axi_sideband_width_WIDTH (3U)
#define VSPA_Version_and_configuration_PARAM0_axi_sideband_width(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_axi_sideband_width_SHIFT)) & VSPA_Version_and_configuration_PARAM0_axi_sideband_width_MASK)
#define VSPA_Version_and_configuration_PARAM0_vcpu_isolate_MASK (0x40000000U)
#define VSPA_Version_and_configuration_PARAM0_vcpu_isolate_SHIFT (30U)
#define VSPA_Version_and_configuration_PARAM0_vcpu_isolate_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_vcpu_isolate(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_vcpu_isolate_SHIFT)) & VSPA_Version_and_configuration_PARAM0_vcpu_isolate_MASK)
#define VSPA_Version_and_configuration_PARAM0_ippu_isolate_MASK (0x80000000U)
#define VSPA_Version_and_configuration_PARAM0_ippu_isolate_SHIFT (31U)
#define VSPA_Version_and_configuration_PARAM0_ippu_isolate_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM0_ippu_isolate(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM0_ippu_isolate_SHIFT)) & VSPA_Version_and_configuration_PARAM0_ippu_isolate_MASK)
/*! @} */

/*! @name PARAM1 - VSPA Parameters 1 */
/*! @{ */
#define VSPA_Version_and_configuration_PARAM1_gp_in_MASK (0xFFU)
#define VSPA_Version_and_configuration_PARAM1_gp_in_SHIFT (0U)
#define VSPA_Version_and_configuration_PARAM1_gp_in_WIDTH (8U)
#define VSPA_Version_and_configuration_PARAM1_gp_in(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM1_gp_in_SHIFT)) & VSPA_Version_and_configuration_PARAM1_gp_in_MASK)
#define VSPA_Version_and_configuration_PARAM1_gp_out_MASK (0xFF00U)
#define VSPA_Version_and_configuration_PARAM1_gp_out_SHIFT (8U)
#define VSPA_Version_and_configuration_PARAM1_gp_out_WIDTH (8U)
#define VSPA_Version_and_configuration_PARAM1_gp_out(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM1_gp_out_SHIFT)) & VSPA_Version_and_configuration_PARAM1_gp_out_MASK)
#define VSPA_Version_and_configuration_PARAM1_dma_cnt_MASK (0xFF0000U)
#define VSPA_Version_and_configuration_PARAM1_dma_cnt_SHIFT (16U)
#define VSPA_Version_and_configuration_PARAM1_dma_cnt_WIDTH (8U)
#define VSPA_Version_and_configuration_PARAM1_dma_cnt(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM1_dma_cnt_SHIFT)) & VSPA_Version_and_configuration_PARAM1_dma_cnt_MASK)
#define VSPA_Version_and_configuration_PARAM1_axi_id_width_MASK (0xF000000U)
#define VSPA_Version_and_configuration_PARAM1_axi_id_width_SHIFT (24U)
#define VSPA_Version_and_configuration_PARAM1_axi_id_width_WIDTH (4U)
#define VSPA_Version_and_configuration_PARAM1_axi_id_width(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM1_axi_id_width_SHIFT)) & VSPA_Version_and_configuration_PARAM1_axi_id_width_MASK)
#define VSPA_Version_and_configuration_PARAM1_axi_data_width_MASK (0x70000000U)
#define VSPA_Version_and_configuration_PARAM1_axi_data_width_SHIFT (28U)
#define VSPA_Version_and_configuration_PARAM1_axi_data_width_WIDTH (3U)
#define VSPA_Version_and_configuration_PARAM1_axi_data_width(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM1_axi_data_width_SHIFT)) & VSPA_Version_and_configuration_PARAM1_axi_data_width_MASK)
#define VSPA_Version_and_configuration_PARAM1_rsse_MASK (0x80000000U)
#define VSPA_Version_and_configuration_PARAM1_rsse_SHIFT (31U)
#define VSPA_Version_and_configuration_PARAM1_rsse_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM1_rsse(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM1_rsse_SHIFT)) & VSPA_Version_and_configuration_PARAM1_rsse_MASK)
/*! @} */

/*! @name PARAM2 - VSPA Parameters 2 */
/*! @{ */
#define VSPA_Version_and_configuration_PARAM2_nau_MASK (0xFFU)
#define VSPA_Version_and_configuration_PARAM2_nau_SHIFT (0U)
#define VSPA_Version_and_configuration_PARAM2_nau_WIDTH (8U)
#define VSPA_Version_and_configuration_PARAM2_nau(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_nau_SHIFT)) & VSPA_Version_and_configuration_PARAM2_nau_MASK)
#define VSPA_Version_and_configuration_PARAM2_float16_nco_padd_MASK (0x100U)
#define VSPA_Version_and_configuration_PARAM2_float16_nco_padd_SHIFT (8U)
#define VSPA_Version_and_configuration_PARAM2_float16_nco_padd_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_float16_nco_padd(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_float16_nco_padd_SHIFT)) & VSPA_Version_and_configuration_PARAM2_float16_nco_padd_MASK)
#define VSPA_Version_and_configuration_PARAM2_scalar_fp_present_MASK (0x200U)
#define VSPA_Version_and_configuration_PARAM2_scalar_fp_present_SHIFT (9U)
#define VSPA_Version_and_configuration_PARAM2_scalar_fp_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_scalar_fp_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_scalar_fp_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_scalar_fp_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_exp_present_MASK (0x400U)
#define VSPA_Version_and_configuration_PARAM2_exp_present_SHIFT (10U)
#define VSPA_Version_and_configuration_PARAM2_exp_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_exp_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_exp_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_exp_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_log2_present_MASK (0x800U)
#define VSPA_Version_and_configuration_PARAM2_log2_present_SHIFT (11U)
#define VSPA_Version_and_configuration_PARAM2_log2_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_log2_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_log2_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_log2_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_sin_cos_present_MASK (0x1000U)
#define VSPA_Version_and_configuration_PARAM2_sin_cos_present_SHIFT (12U)
#define VSPA_Version_and_configuration_PARAM2_sin_cos_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_sin_cos_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_sin_cos_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_sin_cos_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_ippu_vinx_present_MASK (0x2000U)
#define VSPA_Version_and_configuration_PARAM2_ippu_vinx_present_SHIFT (13U)
#define VSPA_Version_and_configuration_PARAM2_ippu_vinx_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_ippu_vinx_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_ippu_vinx_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_ippu_vinx_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_vec_pred_present_MASK (0x4000U)
#define VSPA_Version_and_configuration_PARAM2_vec_pred_present_SHIFT (14U)
#define VSPA_Version_and_configuration_PARAM2_vec_pred_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_vec_pred_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_vec_pred_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_vec_pred_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_vec_red_present_MASK (0x8000U)
#define VSPA_Version_and_configuration_PARAM2_vec_red_present_SHIFT (15U)
#define VSPA_Version_and_configuration_PARAM2_vec_red_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_vec_red_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_vec_red_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_vec_red_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_dma_rd_eng_count_MASK (0x1F0000U)
#define VSPA_Version_and_configuration_PARAM2_dma_rd_eng_count_SHIFT (16U)
#define VSPA_Version_and_configuration_PARAM2_dma_rd_eng_count_WIDTH (5U)
#define VSPA_Version_and_configuration_PARAM2_dma_rd_eng_count(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_dma_rd_eng_count_SHIFT)) & VSPA_Version_and_configuration_PARAM2_dma_rd_eng_count_MASK)
#define VSPA_Version_and_configuration_PARAM2_dma_parity_present_MASK (0x200000U)
#define VSPA_Version_and_configuration_PARAM2_dma_parity_present_SHIFT (21U)
#define VSPA_Version_and_configuration_PARAM2_dma_parity_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_dma_parity_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_dma_parity_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_dma_parity_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_float16_MASK (0x400000U)
#define VSPA_Version_and_configuration_PARAM2_float16_SHIFT (22U)
#define VSPA_Version_and_configuration_PARAM2_float16_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_float16(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_float16_SHIFT)) & VSPA_Version_and_configuration_PARAM2_float16_MASK)
#define VSPA_Version_and_configuration_PARAM2_float64_MASK (0x800000U)
#define VSPA_Version_and_configuration_PARAM2_float64_SHIFT (23U)
#define VSPA_Version_and_configuration_PARAM2_float64_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_float64(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_float64_SHIFT)) & VSPA_Version_and_configuration_PARAM2_float64_MASK)
#define VSPA_Version_and_configuration_PARAM2_rf_2scomp_present_MASK (0x7000000U)
#define VSPA_Version_and_configuration_PARAM2_rf_2scomp_present_SHIFT (24U)
#define VSPA_Version_and_configuration_PARAM2_rf_2scomp_present_WIDTH (3U)
#define VSPA_Version_and_configuration_PARAM2_rf_2scomp_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_rf_2scomp_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_rf_2scomp_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_ld_elem_reorder_MASK (0x8000000U)
#define VSPA_Version_and_configuration_PARAM2_ld_elem_reorder_SHIFT (27U)
#define VSPA_Version_and_configuration_PARAM2_ld_elem_reorder_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_ld_elem_reorder(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_ld_elem_reorder_SHIFT)) & VSPA_Version_and_configuration_PARAM2_ld_elem_reorder_MASK)
#define VSPA_Version_and_configuration_PARAM2_fecu_present_MASK (0x40000000U)
#define VSPA_Version_and_configuration_PARAM2_fecu_present_SHIFT (30U)
#define VSPA_Version_and_configuration_PARAM2_fecu_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_fecu_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_fecu_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_fecu_present_MASK)
#define VSPA_Version_and_configuration_PARAM2_ippu_present_MASK (0x80000000U)
#define VSPA_Version_and_configuration_PARAM2_ippu_present_SHIFT (31U)
#define VSPA_Version_and_configuration_PARAM2_ippu_present_WIDTH (1U)
#define VSPA_Version_and_configuration_PARAM2_ippu_present(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_PARAM2_ippu_present_SHIFT)) & VSPA_Version_and_configuration_PARAM2_ippu_present_MASK)
/*! @} */

/*! @name DMEM0_SIZE - VCPU DMEM Size */
/*! @{ */
#define VSPA_Version_and_configuration_DMEM0_SIZE_dmem0_size_MASK (0xFFFFFFFFU)
#define VSPA_Version_and_configuration_DMEM0_SIZE_dmem0_size_SHIFT (0U)
#define VSPA_Version_and_configuration_DMEM0_SIZE_dmem0_size_WIDTH (32U)
#define VSPA_Version_and_configuration_DMEM0_SIZE_dmem0_size(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Version_and_configuration_DMEM0_SIZE_dmem0_size_SHIFT)) & VSPA_Version_and_configuration_DMEM0_SIZE_dmem0_size_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_Version_and_configuration_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_Version_and_configuration_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_Version_and_configuration_H_) */
