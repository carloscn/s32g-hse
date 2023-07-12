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
 * @file S32R45_VSPA_DMA_control_and_status.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA_DMA_control_and_status
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
#if !defined(S32R45_VSPA_DMA_control_and_status_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_DMA_control_and_status_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA_DMA_control_and_status Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_DMA_control_and_status_Peripheral_Access_Layer VSPA_DMA_control_and_status Peripheral Access Layer
 * @{
 */

/** VSPA_DMA_control_and_status - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[176];
  __O  uint32_t DMA_DMEM_PRAM_ADDR;                /**< DMEM/PRAM Address, offset: 0xB0 */
  __O  uint32_t DMA_AXI_ADDRESS;                   /**< DMA AXI Address, offset: 0xB4 */
  __O  uint32_t DMA_AXI_BYTE_CNT;                  /**< AXI Byte Count register, offset: 0xB8 */
  __O  uint32_t DMA_XFR_CTRL;                      /**< DMA Transfer Control register, offset: 0xBC */
  __IO uint32_t DMA_STAT_ABORT;                    /**< DMA Status/Abort Control, offset: 0xC0 */
  __IO uint32_t DMA_IRQ_STAT;                      /**< DMA IRQ Status, offset: 0xC4 */
  __IO uint32_t DMA_COMP_STAT;                     /**< DMA Complete Status, offset: 0xC8 */
  __IO uint32_t DMA_XFRERR_STAT;                   /**< DMA Transfer Error Status, offset: 0xCC */
  __IO uint32_t DMA_CFGERR_STAT;                   /**< DMA Configuration Error Status, offset: 0xD0 */
  __I  uint32_t DMA_XRUN_STAT;                     /**< DMA Transfer Running Status, offset: 0xD4 */
  __IO uint32_t DMA_GO_STAT;                       /**< DMA Go Status, offset: 0xD8 */
  __I  uint32_t DMA_FIFO_STAT;                     /**< DMA FIFO Availability Status, offset: 0xDC */
} VSPA_DMA_control_and_status_Type, *VSPA_DMA_control_and_status_MemMapPtr;

/** Number of instances of the VSPA_DMA_control_and_status module. */
#define VSPA_DMA_control_and_status_INSTANCE_COUNT (2u)

/* VSPA_DMA_control_and_status - Peripheral instance base addresses */
/** Peripheral LAX_0_DMA_control_and_status base address */
#define LAX_0_DMA_control_and_status_BASE        (0x44028000u)
/** Peripheral LAX_0_DMA_control_and_status base pointer */
#define LAX_0_DMA_control_and_status             ((VSPA_DMA_control_and_status_Type *)LAX_0_DMA_control_and_status_BASE)
/** Peripheral LAX_1_DMA_control_and_status base address */
#define LAX_1_DMA_control_and_status_BASE        (0x44029000u)
/** Peripheral LAX_1_DMA_control_and_status base pointer */
#define LAX_1_DMA_control_and_status             ((VSPA_DMA_control_and_status_Type *)LAX_1_DMA_control_and_status_BASE)
/** Array initializer of VSPA_DMA_control_and_status peripheral base addresses */
#define VSPA_DMA_control_and_status_BASE_ADDRS   { LAX_0_DMA_control_and_status_BASE, LAX_1_DMA_control_and_status_BASE }
/** Array initializer of VSPA_DMA_control_and_status peripheral base pointers */
#define VSPA_DMA_control_and_status_BASE_PTRS    { LAX_0_DMA_control_and_status, LAX_1_DMA_control_and_status }

/* ----------------------------------------------------------------------------
   -- VSPA_DMA_control_and_status Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_DMA_control_and_status_Register_Masks VSPA_DMA_control_and_status Register Masks
 * @{
 */

/*! @name DMA_DMEM_PRAM_ADDR - DMEM/PRAM Address */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_DMEM_PRAM_ADDR_starting_address_MASK (0x1FFFFFU)
#define VSPA_DMA_control_and_status_DMA_DMEM_PRAM_ADDR_starting_address_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_DMEM_PRAM_ADDR_starting_address_WIDTH (21U)
#define VSPA_DMA_control_and_status_DMA_DMEM_PRAM_ADDR_starting_address(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_DMEM_PRAM_ADDR_starting_address_SHIFT)) & VSPA_DMA_control_and_status_DMA_DMEM_PRAM_ADDR_starting_address_MASK)
/*! @} */

/*! @name DMA_AXI_ADDRESS - DMA AXI Address */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_AXI_ADDRESS_starting_address_MASK (0xFFFFFFFFU)
#define VSPA_DMA_control_and_status_DMA_AXI_ADDRESS_starting_address_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_AXI_ADDRESS_starting_address_WIDTH (32U)
#define VSPA_DMA_control_and_status_DMA_AXI_ADDRESS_starting_address(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_AXI_ADDRESS_starting_address_SHIFT)) & VSPA_DMA_control_and_status_DMA_AXI_ADDRESS_starting_address_MASK)
/*! @} */

/*! @name DMA_AXI_BYTE_CNT - AXI Byte Count register */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_AXI_BYTE_CNT_count_MASK (0xFFFFU)
#define VSPA_DMA_control_and_status_DMA_AXI_BYTE_CNT_count_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_AXI_BYTE_CNT_count_WIDTH (16U)
#define VSPA_DMA_control_and_status_DMA_AXI_BYTE_CNT_count(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_AXI_BYTE_CNT_count_SHIFT)) & VSPA_DMA_control_and_status_DMA_AXI_BYTE_CNT_count_MASK)
/*! @} */

/*! @name DMA_XFR_CTRL - DMA Transfer Control register */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_channel_select_MASK (0x1FU)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_channel_select_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_channel_select_WIDTH (5U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_channel_select(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_channel_select_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_channel_select_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_int_to_single_precision_MASK (0x20U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_int_to_single_precision_SHIFT (5U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_int_to_single_precision_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_int_to_single_precision(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_int_to_single_precision_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_int_to_single_precision_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_br32_MASK (0x40U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_br32_SHIFT (6U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_br32_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_br32(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_br32_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_br32_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_multi_burst_MASK (0x80U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_multi_burst_SHIFT (7U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_multi_burst_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_multi_burst(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_multi_burst_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_multi_burst_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_trans_mode_select_MASK (0x700U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_trans_mode_select_SHIFT (8U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_trans_mode_select_WIDTH (3U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_trans_mode_select(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_trans_mode_select_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_trans_mode_select_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_burst_type_MASK (0x800U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_burst_type_SHIFT (11U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_burst_type_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_burst_type(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_burst_type_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_burst_type_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_go_en_MASK (0x1000U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_go_en_SHIFT (12U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_go_en_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_go_en_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_go_en_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_vcpu_go_en_MASK (0x2000U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_vcpu_go_en_SHIFT (13U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_vcpu_go_en_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_vcpu_go_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_vcpu_go_en_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_vcpu_go_en_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_irq_en_MASK (0x4000U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_irq_en_SHIFT (14U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_irq_en_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_irq_en(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_irq_en_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_irq_en_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ptr_rst_MASK (0x8000U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ptr_rst_SHIFT (15U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ptr_rst_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ptr_rst(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_ptr_rst_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_ptr_rst_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ext_trig_MASK (0x10000U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ext_trig_SHIFT (16U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ext_trig_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ext_trig(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_ext_trig_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_ext_trig_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_trig_MASK (0x20000U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_trig_SHIFT (17U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_trig_WIDTH (1U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_trig(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_trig_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_ippu_trig_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_di_mode_MASK (0x1C0000U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_di_mode_SHIFT (18U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_di_mode_WIDTH (3U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_di_mode(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_di_mode_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_di_mode_MASK)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_sideband_MASK (0xFF000000U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_sideband_SHIFT (24U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_sideband_WIDTH (8U)
#define VSPA_DMA_control_and_status_DMA_XFR_CTRL_sideband(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFR_CTRL_sideband_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFR_CTRL_sideband_MASK)
/*! @} */

/*! @name DMA_STAT_ABORT - DMA Status/Abort Control */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_STAT_ABORT_dma_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_control_and_status_DMA_STAT_ABORT_dma_chan_n_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_STAT_ABORT_dma_chan_n_WIDTH (32U)
#define VSPA_DMA_control_and_status_DMA_STAT_ABORT_dma_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_STAT_ABORT_dma_chan_n_SHIFT)) & VSPA_DMA_control_and_status_DMA_STAT_ABORT_dma_chan_n_MASK)
/*! @} */

/*! @name DMA_IRQ_STAT - DMA IRQ Status */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_IRQ_STAT_irq_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_control_and_status_DMA_IRQ_STAT_irq_chan_n_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_IRQ_STAT_irq_chan_n_WIDTH (32U)
#define VSPA_DMA_control_and_status_DMA_IRQ_STAT_irq_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_IRQ_STAT_irq_chan_n_SHIFT)) & VSPA_DMA_control_and_status_DMA_IRQ_STAT_irq_chan_n_MASK)
/*! @} */

/*! @name DMA_COMP_STAT - DMA Complete Status */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_COMP_STAT_dma_comp_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_control_and_status_DMA_COMP_STAT_dma_comp_chan_n_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_COMP_STAT_dma_comp_chan_n_WIDTH (32U)
#define VSPA_DMA_control_and_status_DMA_COMP_STAT_dma_comp_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_COMP_STAT_dma_comp_chan_n_SHIFT)) & VSPA_DMA_control_and_status_DMA_COMP_STAT_dma_comp_chan_n_MASK)
/*! @} */

/*! @name DMA_XFRERR_STAT - DMA Transfer Error Status */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_XFRERR_STAT_xfr_error_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_control_and_status_DMA_XFRERR_STAT_xfr_error_chan_n_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_XFRERR_STAT_xfr_error_chan_n_WIDTH (32U)
#define VSPA_DMA_control_and_status_DMA_XFRERR_STAT_xfr_error_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XFRERR_STAT_xfr_error_chan_n_SHIFT)) & VSPA_DMA_control_and_status_DMA_XFRERR_STAT_xfr_error_chan_n_MASK)
/*! @} */

/*! @name DMA_CFGERR_STAT - DMA Configuration Error Status */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_CFGERR_STAT_cfg_error_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_control_and_status_DMA_CFGERR_STAT_cfg_error_chan_n_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_CFGERR_STAT_cfg_error_chan_n_WIDTH (32U)
#define VSPA_DMA_control_and_status_DMA_CFGERR_STAT_cfg_error_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_CFGERR_STAT_cfg_error_chan_n_SHIFT)) & VSPA_DMA_control_and_status_DMA_CFGERR_STAT_cfg_error_chan_n_MASK)
/*! @} */

/*! @name DMA_XRUN_STAT - DMA Transfer Running Status */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_XRUN_STAT_xfr_run_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_control_and_status_DMA_XRUN_STAT_xfr_run_chan_n_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_XRUN_STAT_xfr_run_chan_n_WIDTH (32U)
#define VSPA_DMA_control_and_status_DMA_XRUN_STAT_xfr_run_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_XRUN_STAT_xfr_run_chan_n_SHIFT)) & VSPA_DMA_control_and_status_DMA_XRUN_STAT_xfr_run_chan_n_MASK)
/*! @} */

/*! @name DMA_GO_STAT - DMA Go Status */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_GO_STAT_dma_go_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_control_and_status_DMA_GO_STAT_dma_go_chan_n_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_GO_STAT_dma_go_chan_n_WIDTH (32U)
#define VSPA_DMA_control_and_status_DMA_GO_STAT_dma_go_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_GO_STAT_dma_go_chan_n_SHIFT)) & VSPA_DMA_control_and_status_DMA_GO_STAT_dma_go_chan_n_MASK)
/*! @} */

/*! @name DMA_FIFO_STAT - DMA FIFO Availability Status */
/*! @{ */
#define VSPA_DMA_control_and_status_DMA_FIFO_STAT_fifo_avail_chan_n_MASK (0xFFFFFFFFU)
#define VSPA_DMA_control_and_status_DMA_FIFO_STAT_fifo_avail_chan_n_SHIFT (0U)
#define VSPA_DMA_control_and_status_DMA_FIFO_STAT_fifo_avail_chan_n_WIDTH (32U)
#define VSPA_DMA_control_and_status_DMA_FIFO_STAT_fifo_avail_chan_n(x) (((uint32_t)(((uint32_t)(x)) << VSPA_DMA_control_and_status_DMA_FIFO_STAT_fifo_avail_chan_n_SHIFT)) & VSPA_DMA_control_and_status_DMA_FIFO_STAT_fifo_avail_chan_n_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_DMA_control_and_status_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_DMA_control_and_status_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_DMA_control_and_status_H_) */
