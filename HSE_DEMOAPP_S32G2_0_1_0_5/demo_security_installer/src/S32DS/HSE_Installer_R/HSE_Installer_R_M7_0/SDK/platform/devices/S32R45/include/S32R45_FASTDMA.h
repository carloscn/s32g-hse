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
 * @file S32R45_FASTDMA.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_FASTDMA
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
#if !defined(S32R45_FASTDMA_H_)  /* Check if memory map has not been already included */
#define S32R45_FASTDMA_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- FASTDMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FASTDMA_Peripheral_Access_Layer FASTDMA Peripheral Access Layer
 * @{
 */

/** FASTDMA - Register Layout Typedef */
typedef struct {
  __IO uint32_t XFR_REC_LIST_PTR;                  /**< Transfer Records List Pointer register, offset: 0x0 */
  __IO uint32_t XFR_REC_CNT;                       /**< Total entries in Transfer Record List, offset: 0x4 */
  __IO uint32_t XFR_REC_NUM;                       /**< Transfer Record number for current Line transfer, offset: 0x8 */
  __IO uint32_t XFR_LINE_NUM;                      /**< DDR and SRAM Line numbers for current transfer, offset: 0xC */
  __IO uint32_t LINE_INCR;                         /**< Line increment value for SRAM and DDR, offset: 0x10 */
  __IO uint32_t IRQ_EN;                            /**< Interrupt enable register, offset: 0x14 */
  __IO uint32_t XFR_STAT;                          /**< Status register, offset: 0x18 */
  __I  uint32_t CALC_CRC_VAL;                      /**< Calculated CRC value, offset: 0x1C */
  __I  uint32_t CURR_DDR_PTR;                      /**< Current DDR address, offset: 0x20 */
  __I  uint32_t CURR_SRAM_PTR;                     /**< Current SRAM address, offset: 0x24 */
  __I  uint32_t XFR_REC_NUM_DONE;                  /**< Last completed Transfer Record Number, offset: 0x28 */
  __I  uint32_t ERR_XFR_REC_NUM;                   /**< Transfer Record Number of an Erroneous Transfer, offset: 0x2C */
  __I  uint32_t NEXT_LINE;                         /**< SRAM and DDR next Line number, offset: 0x30 */
  __IO uint32_t CTRL;                              /**< Control register, offset: 0x34 */
  __I  uint32_t XFR_REC_DONE_QUEUE_STAT;           /**< Transfer record done queue status register, offset: 0x38 */
  __I  uint32_t XFR_REC_DONE_QUEUE;                /**< Transfer record done queue register, offset: 0x3C */
} FASTDMA_Type, *FASTDMA_MemMapPtr;

/** Number of instances of the FASTDMA module. */
#define FASTDMA_INSTANCE_COUNT                   (1u)

/* FASTDMA - Peripheral instance base addresses */
/** Peripheral FASTDMA base address */
#define FASTDMA_BASE                             (0x44024000u)
/** Peripheral FASTDMA base pointer */
#define FASTDMA                                  ((FASTDMA_Type *)FASTDMA_BASE)
/** Array initializer of FASTDMA peripheral base addresses */
#define FASTDMA_BASE_ADDRS                       { FASTDMA_BASE }
/** Array initializer of FASTDMA peripheral base pointers */
#define FASTDMA_BASE_PTRS                        { FASTDMA }

/* ----------------------------------------------------------------------------
   -- FASTDMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FASTDMA_Register_Masks FASTDMA Register Masks
 * @{
 */

/*! @name XFR_REC_LIST_PTR - Transfer Records List Pointer register */
/*! @{ */
#define FASTDMA_XFR_REC_LIST_PTR_XFR_REC_LIST_PTR_MASK (0xFFFFFFFFU)
#define FASTDMA_XFR_REC_LIST_PTR_XFR_REC_LIST_PTR_SHIFT (0U)
#define FASTDMA_XFR_REC_LIST_PTR_XFR_REC_LIST_PTR_WIDTH (32U)
#define FASTDMA_XFR_REC_LIST_PTR_XFR_REC_LIST_PTR(x) (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_REC_LIST_PTR_XFR_REC_LIST_PTR_SHIFT)) & FASTDMA_XFR_REC_LIST_PTR_XFR_REC_LIST_PTR_MASK)
/*! @} */

/*! @name XFR_REC_CNT - Total entries in Transfer Record List */
/*! @{ */
#define FASTDMA_XFR_REC_CNT_XFR_REC_CNT_MASK     (0x7FU)
#define FASTDMA_XFR_REC_CNT_XFR_REC_CNT_SHIFT    (0U)
#define FASTDMA_XFR_REC_CNT_XFR_REC_CNT_WIDTH    (7U)
#define FASTDMA_XFR_REC_CNT_XFR_REC_CNT(x)       (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_REC_CNT_XFR_REC_CNT_SHIFT)) & FASTDMA_XFR_REC_CNT_XFR_REC_CNT_MASK)
/*! @} */

/*! @name XFR_REC_NUM - Transfer Record number for current Line transfer */
/*! @{ */
#define FASTDMA_XFR_REC_NUM_XFR_REC_NUM_MASK     (0x7FU)
#define FASTDMA_XFR_REC_NUM_XFR_REC_NUM_SHIFT    (0U)
#define FASTDMA_XFR_REC_NUM_XFR_REC_NUM_WIDTH    (7U)
#define FASTDMA_XFR_REC_NUM_XFR_REC_NUM(x)       (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_REC_NUM_XFR_REC_NUM_SHIFT)) & FASTDMA_XFR_REC_NUM_XFR_REC_NUM_MASK)
/*! @} */

/*! @name XFR_LINE_NUM - DDR and SRAM Line numbers for current transfer */
/*! @{ */
#define FASTDMA_XFR_LINE_NUM_DDR_IMG_LINE_NUM_MASK (0xFFFFU)
#define FASTDMA_XFR_LINE_NUM_DDR_IMG_LINE_NUM_SHIFT (0U)
#define FASTDMA_XFR_LINE_NUM_DDR_IMG_LINE_NUM_WIDTH (16U)
#define FASTDMA_XFR_LINE_NUM_DDR_IMG_LINE_NUM(x) (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_LINE_NUM_DDR_IMG_LINE_NUM_SHIFT)) & FASTDMA_XFR_LINE_NUM_DDR_IMG_LINE_NUM_MASK)
#define FASTDMA_XFR_LINE_NUM_SRAM_LINE_NUM_MASK  (0x3FFF0000U)
#define FASTDMA_XFR_LINE_NUM_SRAM_LINE_NUM_SHIFT (16U)
#define FASTDMA_XFR_LINE_NUM_SRAM_LINE_NUM_WIDTH (14U)
#define FASTDMA_XFR_LINE_NUM_SRAM_LINE_NUM(x)    (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_LINE_NUM_SRAM_LINE_NUM_SHIFT)) & FASTDMA_XFR_LINE_NUM_SRAM_LINE_NUM_MASK)
/*! @} */

/*! @name LINE_INCR - Line increment value for SRAM and DDR */
/*! @{ */
#define FASTDMA_LINE_INCR_DDR_LINE_INCR_MASK     (0xFFU)
#define FASTDMA_LINE_INCR_DDR_LINE_INCR_SHIFT    (0U)
#define FASTDMA_LINE_INCR_DDR_LINE_INCR_WIDTH    (8U)
#define FASTDMA_LINE_INCR_DDR_LINE_INCR(x)       (((uint32_t)(((uint32_t)(x)) << FASTDMA_LINE_INCR_DDR_LINE_INCR_SHIFT)) & FASTDMA_LINE_INCR_DDR_LINE_INCR_MASK)
#define FASTDMA_LINE_INCR_SRAM_LINE_INCR_MASK    (0xFF0000U)
#define FASTDMA_LINE_INCR_SRAM_LINE_INCR_SHIFT   (16U)
#define FASTDMA_LINE_INCR_SRAM_LINE_INCR_WIDTH   (8U)
#define FASTDMA_LINE_INCR_SRAM_LINE_INCR(x)      (((uint32_t)(((uint32_t)(x)) << FASTDMA_LINE_INCR_SRAM_LINE_INCR_SHIFT)) & FASTDMA_LINE_INCR_SRAM_LINE_INCR_MASK)
/*! @} */

/*! @name IRQ_EN - Interrupt enable register */
/*! @{ */
#define FASTDMA_IRQ_EN_FDMA_DONE_IRQ_EN_MASK     (0x1U)
#define FASTDMA_IRQ_EN_FDMA_DONE_IRQ_EN_SHIFT    (0U)
#define FASTDMA_IRQ_EN_FDMA_DONE_IRQ_EN_WIDTH    (1U)
#define FASTDMA_IRQ_EN_FDMA_DONE_IRQ_EN(x)       (((uint32_t)(((uint32_t)(x)) << FASTDMA_IRQ_EN_FDMA_DONE_IRQ_EN_SHIFT)) & FASTDMA_IRQ_EN_FDMA_DONE_IRQ_EN_MASK)
#define FASTDMA_IRQ_EN_FDMA_ERR_IRQ_EN_MASK      (0x2U)
#define FASTDMA_IRQ_EN_FDMA_ERR_IRQ_EN_SHIFT     (1U)
#define FASTDMA_IRQ_EN_FDMA_ERR_IRQ_EN_WIDTH     (1U)
#define FASTDMA_IRQ_EN_FDMA_ERR_IRQ_EN(x)        (((uint32_t)(((uint32_t)(x)) << FASTDMA_IRQ_EN_FDMA_ERR_IRQ_EN_SHIFT)) & FASTDMA_IRQ_EN_FDMA_ERR_IRQ_EN_MASK)
#define FASTDMA_IRQ_EN_FDMA_CRC_ERR_IRQ_EN_MASK  (0x4U)
#define FASTDMA_IRQ_EN_FDMA_CRC_ERR_IRQ_EN_SHIFT (2U)
#define FASTDMA_IRQ_EN_FDMA_CRC_ERR_IRQ_EN_WIDTH (1U)
#define FASTDMA_IRQ_EN_FDMA_CRC_ERR_IRQ_EN(x)    (((uint32_t)(((uint32_t)(x)) << FASTDMA_IRQ_EN_FDMA_CRC_ERR_IRQ_EN_SHIFT)) & FASTDMA_IRQ_EN_FDMA_CRC_ERR_IRQ_EN_MASK)
#define FASTDMA_IRQ_EN_EDMA_TRIG_EN_MASK         (0x8U)
#define FASTDMA_IRQ_EN_EDMA_TRIG_EN_SHIFT        (3U)
#define FASTDMA_IRQ_EN_EDMA_TRIG_EN_WIDTH        (1U)
#define FASTDMA_IRQ_EN_EDMA_TRIG_EN(x)           (((uint32_t)(((uint32_t)(x)) << FASTDMA_IRQ_EN_EDMA_TRIG_EN_SHIFT)) & FASTDMA_IRQ_EN_EDMA_TRIG_EN_MASK)
/*! @} */

/*! @name XFR_STAT - Status register */
/*! @{ */
#define FASTDMA_XFR_STAT_XFR_CMD_QUEUE_EMPTY_MASK (0x1U)
#define FASTDMA_XFR_STAT_XFR_CMD_QUEUE_EMPTY_SHIFT (0U)
#define FASTDMA_XFR_STAT_XFR_CMD_QUEUE_EMPTY_WIDTH (1U)
#define FASTDMA_XFR_STAT_XFR_CMD_QUEUE_EMPTY(x)  (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_XFR_CMD_QUEUE_EMPTY_SHIFT)) & FASTDMA_XFR_STAT_XFR_CMD_QUEUE_EMPTY_MASK)
#define FASTDMA_XFR_STAT_XFR_CMD_QUEUE_FULL_MASK (0x2U)
#define FASTDMA_XFR_STAT_XFR_CMD_QUEUE_FULL_SHIFT (1U)
#define FASTDMA_XFR_STAT_XFR_CMD_QUEUE_FULL_WIDTH (1U)
#define FASTDMA_XFR_STAT_XFR_CMD_QUEUE_FULL(x)   (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_XFR_CMD_QUEUE_FULL_SHIFT)) & FASTDMA_XFR_STAT_XFR_CMD_QUEUE_FULL_MASK)
#define FASTDMA_XFR_STAT_CRC_ERR_MASK            (0x4U)
#define FASTDMA_XFR_STAT_CRC_ERR_SHIFT           (2U)
#define FASTDMA_XFR_STAT_CRC_ERR_WIDTH           (1U)
#define FASTDMA_XFR_STAT_CRC_ERR(x)              (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_CRC_ERR_SHIFT)) & FASTDMA_XFR_STAT_CRC_ERR_MASK)
#define FASTDMA_XFR_STAT_CMD_CFG_ERR_MASK        (0x8U)
#define FASTDMA_XFR_STAT_CMD_CFG_ERR_SHIFT       (3U)
#define FASTDMA_XFR_STAT_CMD_CFG_ERR_WIDTH       (1U)
#define FASTDMA_XFR_STAT_CMD_CFG_ERR(x)          (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_CMD_CFG_ERR_SHIFT)) & FASTDMA_XFR_STAT_CMD_CFG_ERR_MASK)
#define FASTDMA_XFR_STAT_TR_RD_ERR_MASK          (0x10U)
#define FASTDMA_XFR_STAT_TR_RD_ERR_SHIFT         (4U)
#define FASTDMA_XFR_STAT_TR_RD_ERR_WIDTH         (1U)
#define FASTDMA_XFR_STAT_TR_RD_ERR(x)            (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_TR_RD_ERR_SHIFT)) & FASTDMA_XFR_STAT_TR_RD_ERR_MASK)
#define FASTDMA_XFR_STAT_CRC_RD_ERR_MASK         (0x20U)
#define FASTDMA_XFR_STAT_CRC_RD_ERR_SHIFT        (5U)
#define FASTDMA_XFR_STAT_CRC_RD_ERR_WIDTH        (1U)
#define FASTDMA_XFR_STAT_CRC_RD_ERR(x)           (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_CRC_RD_ERR_SHIFT)) & FASTDMA_XFR_STAT_CRC_RD_ERR_MASK)
#define FASTDMA_XFR_STAT_XFR_CFG_ERR_MASK        (0x40U)
#define FASTDMA_XFR_STAT_XFR_CFG_ERR_SHIFT       (6U)
#define FASTDMA_XFR_STAT_XFR_CFG_ERR_WIDTH       (1U)
#define FASTDMA_XFR_STAT_XFR_CFG_ERR(x)          (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_XFR_CFG_ERR_SHIFT)) & FASTDMA_XFR_STAT_XFR_CFG_ERR_MASK)
#define FASTDMA_XFR_STAT_XFR_ERR_DDR_MASK        (0x80U)
#define FASTDMA_XFR_STAT_XFR_ERR_DDR_SHIFT       (7U)
#define FASTDMA_XFR_STAT_XFR_ERR_DDR_WIDTH       (1U)
#define FASTDMA_XFR_STAT_XFR_ERR_DDR(x)          (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_XFR_ERR_DDR_SHIFT)) & FASTDMA_XFR_STAT_XFR_ERR_DDR_MASK)
#define FASTDMA_XFR_STAT_XFR_ERR_SRAM_MASK       (0x100U)
#define FASTDMA_XFR_STAT_XFR_ERR_SRAM_SHIFT      (8U)
#define FASTDMA_XFR_STAT_XFR_ERR_SRAM_WIDTH      (1U)
#define FASTDMA_XFR_STAT_XFR_ERR_SRAM(x)         (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_XFR_ERR_SRAM_SHIFT)) & FASTDMA_XFR_STAT_XFR_ERR_SRAM_MASK)
#define FASTDMA_XFR_STAT_CRC_WR_ERR_MASK         (0x200U)
#define FASTDMA_XFR_STAT_CRC_WR_ERR_SHIFT        (9U)
#define FASTDMA_XFR_STAT_CRC_WR_ERR_WIDTH        (1U)
#define FASTDMA_XFR_STAT_CRC_WR_ERR(x)           (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_CRC_WR_ERR_SHIFT)) & FASTDMA_XFR_STAT_CRC_WR_ERR_MASK)
#define FASTDMA_XFR_STAT_TR_WBACK_ERR_MASK       (0x400U)
#define FASTDMA_XFR_STAT_TR_WBACK_ERR_SHIFT      (10U)
#define FASTDMA_XFR_STAT_TR_WBACK_ERR_WIDTH      (1U)
#define FASTDMA_XFR_STAT_TR_WBACK_ERR(x)         (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_TR_WBACK_ERR_SHIFT)) & FASTDMA_XFR_STAT_TR_WBACK_ERR_MASK)
#define FASTDMA_XFR_STAT_XFR_DONE_MASK           (0x10000U)
#define FASTDMA_XFR_STAT_XFR_DONE_SHIFT          (16U)
#define FASTDMA_XFR_STAT_XFR_DONE_WIDTH          (1U)
#define FASTDMA_XFR_STAT_XFR_DONE(x)             (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_XFR_DONE_SHIFT)) & FASTDMA_XFR_STAT_XFR_DONE_MASK)
#define FASTDMA_XFR_STAT_DONE_CNT_MASK           (0xFF000000U)
#define FASTDMA_XFR_STAT_DONE_CNT_SHIFT          (24U)
#define FASTDMA_XFR_STAT_DONE_CNT_WIDTH          (8U)
#define FASTDMA_XFR_STAT_DONE_CNT(x)             (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_STAT_DONE_CNT_SHIFT)) & FASTDMA_XFR_STAT_DONE_CNT_MASK)
/*! @} */

/*! @name CALC_CRC_VAL - Calculated CRC value */
/*! @{ */
#define FASTDMA_CALC_CRC_VAL_CALC_CRC_VAL_MASK   (0xFFFFFFFFU)
#define FASTDMA_CALC_CRC_VAL_CALC_CRC_VAL_SHIFT  (0U)
#define FASTDMA_CALC_CRC_VAL_CALC_CRC_VAL_WIDTH  (32U)
#define FASTDMA_CALC_CRC_VAL_CALC_CRC_VAL(x)     (((uint32_t)(((uint32_t)(x)) << FASTDMA_CALC_CRC_VAL_CALC_CRC_VAL_SHIFT)) & FASTDMA_CALC_CRC_VAL_CALC_CRC_VAL_MASK)
/*! @} */

/*! @name CURR_DDR_PTR - Current DDR address */
/*! @{ */
#define FASTDMA_CURR_DDR_PTR_CURR_DDR_PTR_MASK   (0xFFFFFFFFU)
#define FASTDMA_CURR_DDR_PTR_CURR_DDR_PTR_SHIFT  (0U)
#define FASTDMA_CURR_DDR_PTR_CURR_DDR_PTR_WIDTH  (32U)
#define FASTDMA_CURR_DDR_PTR_CURR_DDR_PTR(x)     (((uint32_t)(((uint32_t)(x)) << FASTDMA_CURR_DDR_PTR_CURR_DDR_PTR_SHIFT)) & FASTDMA_CURR_DDR_PTR_CURR_DDR_PTR_MASK)
/*! @} */

/*! @name CURR_SRAM_PTR - Current SRAM address */
/*! @{ */
#define FASTDMA_CURR_SRAM_PTR_CURR_SRAM_PTR_MASK (0xFFFFFFFFU)
#define FASTDMA_CURR_SRAM_PTR_CURR_SRAM_PTR_SHIFT (0U)
#define FASTDMA_CURR_SRAM_PTR_CURR_SRAM_PTR_WIDTH (32U)
#define FASTDMA_CURR_SRAM_PTR_CURR_SRAM_PTR(x)   (((uint32_t)(((uint32_t)(x)) << FASTDMA_CURR_SRAM_PTR_CURR_SRAM_PTR_SHIFT)) & FASTDMA_CURR_SRAM_PTR_CURR_SRAM_PTR_MASK)
/*! @} */

/*! @name XFR_REC_NUM_DONE - Last completed Transfer Record Number */
/*! @{ */
#define FASTDMA_XFR_REC_NUM_DONE_XFR_REC_NUM_DONE_MASK (0x7FU)
#define FASTDMA_XFR_REC_NUM_DONE_XFR_REC_NUM_DONE_SHIFT (0U)
#define FASTDMA_XFR_REC_NUM_DONE_XFR_REC_NUM_DONE_WIDTH (7U)
#define FASTDMA_XFR_REC_NUM_DONE_XFR_REC_NUM_DONE(x) (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_REC_NUM_DONE_XFR_REC_NUM_DONE_SHIFT)) & FASTDMA_XFR_REC_NUM_DONE_XFR_REC_NUM_DONE_MASK)
/*! @} */

/*! @name ERR_XFR_REC_NUM - Transfer Record Number of an Erroneous Transfer */
/*! @{ */
#define FASTDMA_ERR_XFR_REC_NUM_ERR_XFR_REC_NUM_MASK (0x7FU)
#define FASTDMA_ERR_XFR_REC_NUM_ERR_XFR_REC_NUM_SHIFT (0U)
#define FASTDMA_ERR_XFR_REC_NUM_ERR_XFR_REC_NUM_WIDTH (7U)
#define FASTDMA_ERR_XFR_REC_NUM_ERR_XFR_REC_NUM(x) (((uint32_t)(((uint32_t)(x)) << FASTDMA_ERR_XFR_REC_NUM_ERR_XFR_REC_NUM_SHIFT)) & FASTDMA_ERR_XFR_REC_NUM_ERR_XFR_REC_NUM_MASK)
/*! @} */

/*! @name NEXT_LINE - SRAM and DDR next Line number */
/*! @{ */
#define FASTDMA_NEXT_LINE_DDR_NEXT_LINE_NUM_MASK (0xFFFFU)
#define FASTDMA_NEXT_LINE_DDR_NEXT_LINE_NUM_SHIFT (0U)
#define FASTDMA_NEXT_LINE_DDR_NEXT_LINE_NUM_WIDTH (16U)
#define FASTDMA_NEXT_LINE_DDR_NEXT_LINE_NUM(x)   (((uint32_t)(((uint32_t)(x)) << FASTDMA_NEXT_LINE_DDR_NEXT_LINE_NUM_SHIFT)) & FASTDMA_NEXT_LINE_DDR_NEXT_LINE_NUM_MASK)
#define FASTDMA_NEXT_LINE_SRAM_NEXT_LINE_NUM_MASK (0x3FFF0000U)
#define FASTDMA_NEXT_LINE_SRAM_NEXT_LINE_NUM_SHIFT (16U)
#define FASTDMA_NEXT_LINE_SRAM_NEXT_LINE_NUM_WIDTH (14U)
#define FASTDMA_NEXT_LINE_SRAM_NEXT_LINE_NUM(x)  (((uint32_t)(((uint32_t)(x)) << FASTDMA_NEXT_LINE_SRAM_NEXT_LINE_NUM_SHIFT)) & FASTDMA_NEXT_LINE_SRAM_NEXT_LINE_NUM_MASK)
/*! @} */

/*! @name CTRL - Control register */
/*! @{ */
#define FASTDMA_CTRL_SOFT_RST_MASK               (0x1U)
#define FASTDMA_CTRL_SOFT_RST_SHIFT              (0U)
#define FASTDMA_CTRL_SOFT_RST_WIDTH              (1U)
#define FASTDMA_CTRL_SOFT_RST(x)                 (((uint32_t)(((uint32_t)(x)) << FASTDMA_CTRL_SOFT_RST_SHIFT)) & FASTDMA_CTRL_SOFT_RST_MASK)
#define FASTDMA_CTRL_XFR_REC_DONE_QUEUE_RST_MASK (0x10000U)
#define FASTDMA_CTRL_XFR_REC_DONE_QUEUE_RST_SHIFT (16U)
#define FASTDMA_CTRL_XFR_REC_DONE_QUEUE_RST_WIDTH (1U)
#define FASTDMA_CTRL_XFR_REC_DONE_QUEUE_RST(x)   (((uint32_t)(((uint32_t)(x)) << FASTDMA_CTRL_XFR_REC_DONE_QUEUE_RST_SHIFT)) & FASTDMA_CTRL_XFR_REC_DONE_QUEUE_RST_MASK)
/*! @} */

/*! @name XFR_REC_DONE_QUEUE_STAT - Transfer record done queue status register */
/*! @{ */
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_EMPTY_MASK (0x1U)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_EMPTY_SHIFT (0U)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_EMPTY_WIDTH (1U)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_EMPTY(x) (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_EMPTY_SHIFT)) & FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_EMPTY_MASK)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_FULL_MASK (0x2U)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_FULL_SHIFT (1U)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_FULL_WIDTH (1U)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_FULL(x) (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_FULL_SHIFT)) & FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_FULL_MASK)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_OVRFLW_MASK (0x4U)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_OVRFLW_SHIFT (2U)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_OVRFLW_WIDTH (1U)
#define FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_OVRFLW(x) (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_OVRFLW_SHIFT)) & FASTDMA_XFR_REC_DONE_QUEUE_STAT_XFR_REC_DONE_QUEUE_OVRFLW_MASK)
/*! @} */

/*! @name XFR_REC_DONE_QUEUE - Transfer record done queue register */
/*! @{ */
#define FASTDMA_XFR_REC_DONE_QUEUE_XFR_REC_DONE_QUEUE_MASK (0x7FU)
#define FASTDMA_XFR_REC_DONE_QUEUE_XFR_REC_DONE_QUEUE_SHIFT (0U)
#define FASTDMA_XFR_REC_DONE_QUEUE_XFR_REC_DONE_QUEUE_WIDTH (7U)
#define FASTDMA_XFR_REC_DONE_QUEUE_XFR_REC_DONE_QUEUE(x) (((uint32_t)(((uint32_t)(x)) << FASTDMA_XFR_REC_DONE_QUEUE_XFR_REC_DONE_QUEUE_SHIFT)) & FASTDMA_XFR_REC_DONE_QUEUE_XFR_REC_DONE_QUEUE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group FASTDMA_Register_Masks */

/*!
 * @}
 */ /* end of group FASTDMA_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_FASTDMA_H_) */
