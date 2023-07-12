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
 * @file S32R45_FLEXCAN.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_FLEXCAN
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
#if !defined(S32R45_FLEXCAN_H_)  /* Check if memory map has not been already included */
#define S32R45_FLEXCAN_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- FLEXCAN Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FLEXCAN_Peripheral_Access_Layer FLEXCAN Peripheral Access Layer
 * @{
 */

/** CAN - Size of Registers Arrays */
#define CAN_RAMn_COUNT                            512u
#define CAN_RAM1n_COUNT                           512u
#define CAN_RAM2n_COUNT                           20u
#define CAN_RXIMR_COUNT                           128u
#define CAN_HR_TIME_STAMP_COUNT                   128u
#define CAN_ERFFEL_COUNT                          128u

/** FLEXCAN - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCR;                               /**< Module Configuration register, offset: 0x0 */
  __IO uint32_t CTRL1;                             /**< Control 1 register, offset: 0x4 */
  __IO uint32_t TIMER;                             /**< Free Running Timer, offset: 0x8 */
  uint8_t RESERVED_0[4];
  __IO uint32_t RXMGMASK;                          /**< Rx Mailboxes Global Mask register, offset: 0x10 */
  __IO uint32_t RX14MASK;                          /**< Rx 14 Mask register, offset: 0x14 */
  __IO uint32_t RX15MASK;                          /**< Rx 15 Mask register, offset: 0x18 */
  __IO uint32_t ECR;                               /**< Error Counter, offset: 0x1C */
  __IO uint32_t ESR1;                              /**< Error and Status 1 register, offset: 0x20 */
  __IO uint32_t IMASK2;                            /**< Interrupt Masks 2 register, offset: 0x24 */
  __IO uint32_t IMASK1;                            /**< Interrupt Masks 1 register, offset: 0x28 */
  __IO uint32_t IFLAG2;                            /**< Interrupt Flags 2 register, offset: 0x2C */
  __IO uint32_t IFLAG1;                            /**< Interrupt Flags 1 register, offset: 0x30 */
  __IO uint32_t CTRL2;                             /**< Control 2 register, offset: 0x34 */
  __I  uint32_t ESR2;                              /**< Error and Status 2 register, offset: 0x38 */
  uint8_t RESERVED_1[8];
  __I  uint32_t CRCR;                              /**< CRC register, offset: 0x44 */
  __IO uint32_t RXFGMASK;                          /**< Legacy Rx FIFO Global Mask register, offset: 0x48 */
  __I  uint32_t RXFIR;                             /**< Legacy Rx FIFO Information register, offset: 0x4C */
  __IO uint32_t CBT;                               /**< CAN Bit Timing register, offset: 0x50 */
  uint8_t RESERVED_2[20];
  __IO uint32_t IMASK4;                            /**< Interrupt Masks 4 register, offset: 0x68 */
  __IO uint32_t IMASK3;                            /**< Interrupt Masks 3 register, offset: 0x6C */
  __IO uint32_t IFLAG4;                            /**< Interrupt Flags 4 register, offset: 0x70 */
  __IO uint32_t IFLAG3;                            /**< Interrupt Flags 3 register, offset: 0x74 */
  uint8_t RESERVED_3[8];
  __IO uint32_t RAMn[CAN_RAMn_COUNT];              /**< Embedded RAM, array offset: 0x80, array step: 0x4 */
  __IO uint32_t RXIMR[CAN_RXIMR_COUNT];            /**< Rx Individual Mask registers, array offset: 0x880, array step: 0x4 */
  uint8_t RESERVED_4[96];
  __IO uint32_t MECR;                              /**< Memory Error Control register, offset: 0xAE0 */
  __IO uint32_t ERRIAR;                            /**< Error Injection Address register, offset: 0xAE4 */
  __IO uint32_t ERRIDPR;                           /**< Error Injection Data Pattern register, offset: 0xAE8 */
  __IO uint32_t ERRIPPR;                           /**< Error Injection Parity Pattern register, offset: 0xAEC */
  __I  uint32_t RERRAR;                            /**< Error Report Address register, offset: 0xAF0 */
  __I  uint32_t RERRDR;                            /**< Error Report Data register, offset: 0xAF4 */
  __I  uint32_t RERRSYNR;                          /**< Error Report Syndrome register, offset: 0xAF8 */
  __IO uint32_t ERRSR;                             /**< Error Status register, offset: 0xAFC */
  uint8_t RESERVED_5[240];
  __IO uint32_t EPRS;                              /**< Enhanced CAN Bit Timing Prescalers, offset: 0xBF0 */
  __IO uint32_t ENCBT;                             /**< Enhanced Nominal CAN Bit Timing, offset: 0xBF4 */
  __IO uint32_t EDCBT;                             /**< Enhanced Data Phase CAN bit Timing, offset: 0xBF8 */
  __IO uint32_t ETDC;                              /**< Enhanced Transceiver Delay Compensation, offset: 0xBFC */
  __IO uint32_t FDCTRL;                            /**< CAN FD Control register, offset: 0xC00 */
  __IO uint32_t FDCBT;                             /**< CAN FD Bit Timing register, offset: 0xC04 */
  __I  uint32_t FDCRC;                             /**< CAN FD CRC register, offset: 0xC08 */
  __IO uint32_t ERFCR;                             /**< Enhanced Rx FIFO Control register, offset: 0xC0C */
  __IO uint32_t ERFIER;                            /**< Enhanced Rx FIFO Interrupt Enable register, offset: 0xC10 */
  __IO uint32_t ERFSR;                             /**< Enhanced Rx FIFO Status register, offset: 0xC14 */
  uint8_t RESERVED_6[24];
  __IO uint32_t HR_TIME_STAMP[CAN_HR_TIME_STAMP_COUNT]; /**< High Resolution Time Stamp, array offset: 0xC30, array step: 0x4 */
  uint8_t RESERVED_7[464];
  __IO uint32_t RAM1n[CAN_RAM1n_COUNT];            /**< Embedded RAM, offset: 0x1000, array step: 0x4 */
  uint8_t RESERVED_8[2048];
  __IO uint32_t RAM2n[CAN_RAM2n_COUNT];            /**< Embedded RAM, offset: 0x2000, array step: 0x4 */
  uint8_t RESERVED_9[4016];
  __IO uint32_t ERFFEL[CAN_ERFFEL_COUNT];          /**< Enhanced Rx FIFO Filter Element, array offset: 0x3000, array step: 0x4 */
} CAN_Type, *CAN_MemMapPtr;

/** Number of instances of the FLEXCAN module. */
#define CAN_INSTANCE_COUNT                   (8u)

/* FLEXCAN - Peripheral instance base addresses */
/** Peripheral CAN_0 base address */
#define CAN_0_BASE                               (0x401B4000u)
/** Peripheral CAN_0 base pointer */
#define CAN_0                                    ((CAN_Type *)CAN_0_BASE)
/** Peripheral CAN_1 base address */
#define CAN_1_BASE                               (0x401BE000u)
/** Peripheral CAN_1 base pointer */
#define CAN_1                                    ((CAN_Type *)CAN_1_BASE)
/** Peripheral CAN_2 base address */
#define CAN_2_BASE                               (0x402A8000u)
/** Peripheral CAN_2 base pointer */
#define CAN_2                                    ((CAN_Type *)CAN_2_BASE)
/** Peripheral CAN_3 base address */
#define CAN_3_BASE                               (0x402B2000u)
/** Peripheral CAN_3 base pointer */
#define CAN_3                                    ((CAN_Type *)CAN_3_BASE)
/** Peripheral CAN_4 base address */
#define CAN_4_BASE                               (0x44000000u)
/** Peripheral CAN_4 base pointer */
#define CAN_4                                    ((CAN_Type *)CAN_4_BASE)
/** Peripheral CAN_5 base address */
#define CAN_5_BASE                               (0x44004000u)
/** Peripheral CAN_5 base pointer */
#define CAN_5                                    ((CAN_Type *)CAN_5_BASE)
/** Peripheral CAN_6 base address */
#define CAN_6_BASE                               (0x44008000u)
/** Peripheral CAN_6 base pointer */
#define CAN_6                                    ((CAN_Type *)CAN_6_BASE)
/** Peripheral CAN_7 base address */
#define CAN_7_BASE                               (0x4400C000u)
/** Peripheral CAN_7 base pointer */
#define CAN_7                                    ((CAN_Type *)CAN_7_BASE)
/** Array initializer of FLEXCAN peripheral base addresses */
#define CAN_BASE_ADDRS                           { CAN_0_BASE, CAN_1_BASE, CAN_2_BASE, CAN_3_BASE, CAN_4_BASE, CAN_5_BASE, CAN_6_BASE, CAN_7_BASE }
/** Array initializer of FLEXCAN peripheral base pointers */
#define CAN_BASE_PTRS                            { CAN_0, CAN_1, CAN_2, CAN_3, CAN_4, CAN_5, CAN_6, CAN_7 }

/** Array initializer of CAN peripheral base addresses has Enhanced Rx FIFO mode*/
#define CAN_BASE_PTRS_HAS_ENHANCED_RX_FIFO       { CAN_0, CAN_1, CAN_2, CAN_3, CAN_4, CAN_5, CAN_6, CAN_7 }
/** Array initializer of CAN peripheral base addresses has Enhanced Rx FIFO mode*/
#define CAN_BASE_PTRS_HAS_EXPANDABLE_MEMORY      { CAN_0, CAN_1, CAN_2, CAN_3, CAN_4, CAN_5, CAN_6, CAN_7 }
/** Interrupt vectors for the CAN peripheral type */
#define CAN_Rx_Warning_IRQS                      { CAN0_ORED_IRQn, \
                                                   CAN1_ORED_IRQn, \
                                                   CAN2_ORED_IRQn, \
                                                   CAN3_ORED_IRQn, \
                                                   CAN4_ORED_IRQn, \
                                                   CAN5_ORED_IRQn, \
                                                   CAN6_ORED_IRQn, \
                                                   CAN7_ORED_IRQn }

#define CAN_Tx_Warning_IRQS                      { CAN0_ORED_IRQn, \
                                                   CAN1_ORED_IRQn, \
                                                   CAN2_ORED_IRQn, \
                                                   CAN3_ORED_IRQn, \
                                                   CAN4_ORED_IRQn, \
                                                   CAN5_ORED_IRQn, \
                                                   CAN6_ORED_IRQn, \
                                                   CAN7_ORED_IRQn }

#define CAN_Bus_Off_IRQS                         { CAN0_ORED_IRQn, \
                                                   CAN1_ORED_IRQn, \
                                                   CAN2_ORED_IRQn, \
                                                   CAN3_ORED_IRQn, \
                                                   CAN4_ORED_IRQn, \
                                                   CAN5_ORED_IRQn, \
                                                   CAN6_ORED_IRQn, \
                                                   CAN7_ORED_IRQn }

#define CAN_Error_IRQS                           { CAN0_ERR_IRQn, \
                                                   CAN1_ERR_IRQn, \
                                                   CAN2_ERR_IRQn, \
                                                   CAN3_ERR_IRQn, \
                                                   CAN4_ERR_IRQn, \
                                                   CAN5_ERR_IRQn, \
                                                   CAN6_ERR_IRQn, \
                                                   CAN7_ERR_IRQn }

#define CAN_ORED_0_7_MB_IRQn                     { CAN0_ORED_0_7_MB_IRQn, \
                                                   CAN1_ORED_0_7_MB_IRQn, \
                                                   CAN2_ORED_0_7_MB_IRQn, \
                                                   CAN3_ORED_0_7_MB_IRQn, \
                                                   CAN4_ORED_0_7_MB_IRQn, \
                                                   CAN5_ORED_0_7_MB_IRQn, \
                                                   CAN6_ORED_0_7_MB_IRQn, \
                                                   CAN7_ORED_0_7_MB_IRQn }

#define CAN_ORED_8_127_MB_IRQn                   { CAN0_ORED_8_127_MB_IRQn, \
                                                   CAN1_ORED_8_127_MB_IRQn, \
                                                   CAN2_ORED_8_127_MB_IRQn, \
                                                   CAN3_ORED_8_127_MB_IRQn, \
                                                   CAN4_ORED_8_127_MB_IRQn, \
                                                   CAN5_ORED_8_127_MB_IRQn, \
                                                   CAN6_ORED_8_127_MB_IRQn, \
                                                   CAN7_ORED_8_127_MB_IRQn }

/* ----------------------------------------------------------------------------
   -- FLEXCAN Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FLEXCAN_Register_Masks FLEXCAN Register Masks
 * @{
 */

/*! @name MCR - Module Configuration register */
/*! @{ */
#define CAN_MCR_MAXMB_MASK                   (0x7FU)
#define CAN_MCR_MAXMB_SHIFT                  (0U)
#define CAN_MCR_MAXMB_WIDTH                  (7U)
#define CAN_MCR_MAXMB(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_MCR_MAXMB_SHIFT)) & CAN_MCR_MAXMB_MASK)
#define CAN_MCR_IDAM_MASK                    (0x300U)
#define CAN_MCR_IDAM_SHIFT                   (8U)
#define CAN_MCR_IDAM_WIDTH                   (2U)
#define CAN_MCR_IDAM(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_MCR_IDAM_SHIFT)) & CAN_MCR_IDAM_MASK)
#define CAN_MCR_FDEN_MASK                    (0x800U)
#define CAN_MCR_FDEN_SHIFT                   (11U)
#define CAN_MCR_FDEN_WIDTH                   (1U)
#define CAN_MCR_FDEN(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_MCR_FDEN_SHIFT)) & CAN_MCR_FDEN_MASK)
#define CAN_MCR_AEN_MASK                     (0x1000U)
#define CAN_MCR_AEN_SHIFT                    (12U)
#define CAN_MCR_AEN_WIDTH                    (1U)
#define CAN_MCR_AEN(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_MCR_AEN_SHIFT)) & CAN_MCR_AEN_MASK)
#define CAN_MCR_LPRIOEN_MASK                 (0x2000U)
#define CAN_MCR_LPRIOEN_SHIFT                (13U)
#define CAN_MCR_LPRIOEN_WIDTH                (1U)
#define CAN_MCR_LPRIOEN(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_MCR_LPRIOEN_SHIFT)) & CAN_MCR_LPRIOEN_MASK)
#define CAN_MCR_DMA_MASK                     (0x8000U)
#define CAN_MCR_DMA_SHIFT                    (15U)
#define CAN_MCR_DMA_WIDTH                    (1U)
#define CAN_MCR_DMA(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_MCR_DMA_SHIFT)) & CAN_MCR_DMA_MASK)
#define CAN_MCR_IRMQ_MASK                    (0x10000U)
#define CAN_MCR_IRMQ_SHIFT                   (16U)
#define CAN_MCR_IRMQ_WIDTH                   (1U)
#define CAN_MCR_IRMQ(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_MCR_IRMQ_SHIFT)) & CAN_MCR_IRMQ_MASK)
#define CAN_MCR_SRXDIS_MASK                  (0x20000U)
#define CAN_MCR_SRXDIS_SHIFT                 (17U)
#define CAN_MCR_SRXDIS_WIDTH                 (1U)
#define CAN_MCR_SRXDIS(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_MCR_SRXDIS_SHIFT)) & CAN_MCR_SRXDIS_MASK)
#define CAN_MCR_LPMACK_MASK                  (0x100000U)
#define CAN_MCR_LPMACK_SHIFT                 (20U)
#define CAN_MCR_LPMACK_WIDTH                 (1U)
#define CAN_MCR_LPMACK(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_MCR_LPMACK_SHIFT)) & CAN_MCR_LPMACK_MASK)
#define CAN_MCR_WRNEN_MASK                   (0x200000U)
#define CAN_MCR_WRNEN_SHIFT                  (21U)
#define CAN_MCR_WRNEN_WIDTH                  (1U)
#define CAN_MCR_WRNEN(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_MCR_WRNEN_SHIFT)) & CAN_MCR_WRNEN_MASK)
#define CAN_MCR_FRZACK_MASK                  (0x1000000U)
#define CAN_MCR_FRZACK_SHIFT                 (24U)
#define CAN_MCR_FRZACK_WIDTH                 (1U)
#define CAN_MCR_FRZACK(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_MCR_FRZACK_SHIFT)) & CAN_MCR_FRZACK_MASK)
#define CAN_MCR_SOFTRST_MASK                 (0x2000000U)
#define CAN_MCR_SOFTRST_SHIFT                (25U)
#define CAN_MCR_SOFTRST_WIDTH                (1U)
#define CAN_MCR_SOFTRST(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_MCR_SOFTRST_SHIFT)) & CAN_MCR_SOFTRST_MASK)
#define CAN_MCR_NOTRDY_MASK                  (0x8000000U)
#define CAN_MCR_NOTRDY_SHIFT                 (27U)
#define CAN_MCR_NOTRDY_WIDTH                 (1U)
#define CAN_MCR_NOTRDY(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_MCR_NOTRDY_SHIFT)) & CAN_MCR_NOTRDY_MASK)
#define CAN_MCR_HALT_MASK                    (0x10000000U)
#define CAN_MCR_HALT_SHIFT                   (28U)
#define CAN_MCR_HALT_WIDTH                   (1U)
#define CAN_MCR_HALT(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_MCR_HALT_SHIFT)) & CAN_MCR_HALT_MASK)
#define CAN_MCR_RFEN_MASK                    (0x20000000U)
#define CAN_MCR_RFEN_SHIFT                   (29U)
#define CAN_MCR_RFEN_WIDTH                   (1U)
#define CAN_MCR_RFEN(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_MCR_RFEN_SHIFT)) & CAN_MCR_RFEN_MASK)
#define CAN_MCR_FRZ_MASK                     (0x40000000U)
#define CAN_MCR_FRZ_SHIFT                    (30U)
#define CAN_MCR_FRZ_WIDTH                    (1U)
#define CAN_MCR_FRZ(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_MCR_FRZ_SHIFT)) & CAN_MCR_FRZ_MASK)
#define CAN_MCR_MDIS_MASK                    (0x80000000U)
#define CAN_MCR_MDIS_SHIFT                   (31U)
#define CAN_MCR_MDIS_WIDTH                   (1U)
#define CAN_MCR_MDIS(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_MCR_MDIS_SHIFT)) & CAN_MCR_MDIS_MASK)
/*! @} */

/*! @name CTRL1 - Control 1 register */
/*! @{ */
#define CAN_CTRL1_PROPSEG_MASK               (0x7U)
#define CAN_CTRL1_PROPSEG_SHIFT              (0U)
#define CAN_CTRL1_PROPSEG_WIDTH              (3U)
#define CAN_CTRL1_PROPSEG(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PROPSEG_SHIFT)) & CAN_CTRL1_PROPSEG_MASK)
#define CAN_CTRL1_LOM_MASK                   (0x8U)
#define CAN_CTRL1_LOM_SHIFT                  (3U)
#define CAN_CTRL1_LOM_WIDTH                  (1U)
#define CAN_CTRL1_LOM(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_LOM_SHIFT)) & CAN_CTRL1_LOM_MASK)
#define CAN_CTRL1_LBUF_MASK                  (0x10U)
#define CAN_CTRL1_LBUF_SHIFT                 (4U)
#define CAN_CTRL1_LBUF_WIDTH                 (1U)
#define CAN_CTRL1_LBUF(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_LBUF_SHIFT)) & CAN_CTRL1_LBUF_MASK)
#define CAN_CTRL1_TSYN_MASK                  (0x20U)
#define CAN_CTRL1_TSYN_SHIFT                 (5U)
#define CAN_CTRL1_TSYN_WIDTH                 (1U)
#define CAN_CTRL1_TSYN(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_TSYN_SHIFT)) & CAN_CTRL1_TSYN_MASK)
#define CAN_CTRL1_BOFFREC_MASK               (0x40U)
#define CAN_CTRL1_BOFFREC_SHIFT              (6U)
#define CAN_CTRL1_BOFFREC_WIDTH              (1U)
#define CAN_CTRL1_BOFFREC(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_BOFFREC_SHIFT)) & CAN_CTRL1_BOFFREC_MASK)
#define CAN_CTRL1_SMP_MASK                   (0x80U)
#define CAN_CTRL1_SMP_SHIFT                  (7U)
#define CAN_CTRL1_SMP_WIDTH                  (1U)
#define CAN_CTRL1_SMP(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_SMP_SHIFT)) & CAN_CTRL1_SMP_MASK)
#define CAN_CTRL1_RWRNMSK_MASK               (0x400U)
#define CAN_CTRL1_RWRNMSK_SHIFT              (10U)
#define CAN_CTRL1_RWRNMSK_WIDTH              (1U)
#define CAN_CTRL1_RWRNMSK(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_RWRNMSK_SHIFT)) & CAN_CTRL1_RWRNMSK_MASK)
#define CAN_CTRL1_TWRNMSK_MASK               (0x800U)
#define CAN_CTRL1_TWRNMSK_SHIFT              (11U)
#define CAN_CTRL1_TWRNMSK_WIDTH              (1U)
#define CAN_CTRL1_TWRNMSK(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_TWRNMSK_SHIFT)) & CAN_CTRL1_TWRNMSK_MASK)
#define CAN_CTRL1_LPB_MASK                   (0x1000U)
#define CAN_CTRL1_LPB_SHIFT                  (12U)
#define CAN_CTRL1_LPB_WIDTH                  (1U)
#define CAN_CTRL1_LPB(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_LPB_SHIFT)) & CAN_CTRL1_LPB_MASK)
#define CAN_CTRL1_ERRMSK_MASK                (0x4000U)
#define CAN_CTRL1_ERRMSK_SHIFT               (14U)
#define CAN_CTRL1_ERRMSK_WIDTH               (1U)
#define CAN_CTRL1_ERRMSK(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_ERRMSK_SHIFT)) & CAN_CTRL1_ERRMSK_MASK)
#define CAN_CTRL1_BOFFMSK_MASK               (0x8000U)
#define CAN_CTRL1_BOFFMSK_SHIFT              (15U)
#define CAN_CTRL1_BOFFMSK_WIDTH              (1U)
#define CAN_CTRL1_BOFFMSK(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_BOFFMSK_SHIFT)) & CAN_CTRL1_BOFFMSK_MASK)
#define CAN_CTRL1_PSEG2_MASK                 (0x70000U)
#define CAN_CTRL1_PSEG2_SHIFT                (16U)
#define CAN_CTRL1_PSEG2_WIDTH                (3U)
#define CAN_CTRL1_PSEG2(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PSEG2_SHIFT)) & CAN_CTRL1_PSEG2_MASK)
#define CAN_CTRL1_PSEG1_MASK                 (0x380000U)
#define CAN_CTRL1_PSEG1_SHIFT                (19U)
#define CAN_CTRL1_PSEG1_WIDTH                (3U)
#define CAN_CTRL1_PSEG1(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PSEG1_SHIFT)) & CAN_CTRL1_PSEG1_MASK)
#define CAN_CTRL1_RJW_MASK                   (0xC00000U)
#define CAN_CTRL1_RJW_SHIFT                  (22U)
#define CAN_CTRL1_RJW_WIDTH                  (2U)
#define CAN_CTRL1_RJW(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_RJW_SHIFT)) & CAN_CTRL1_RJW_MASK)
#define CAN_CTRL1_PRESDIV_MASK               (0xFF000000U)
#define CAN_CTRL1_PRESDIV_SHIFT              (24U)
#define CAN_CTRL1_PRESDIV_WIDTH              (8U)
#define CAN_CTRL1_PRESDIV(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL1_PRESDIV_SHIFT)) & CAN_CTRL1_PRESDIV_MASK)
/*! @} */

/*! @name TIMER - Free Running Timer */
/*! @{ */
#define CAN_TIMER_TIMER_MASK                 (0xFFFFU)
#define CAN_TIMER_TIMER_SHIFT                (0U)
#define CAN_TIMER_TIMER_WIDTH                (16U)
#define CAN_TIMER_TIMER(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_TIMER_TIMER_SHIFT)) & CAN_TIMER_TIMER_MASK)
/*! @} */

/*! @name RXMGMASK - Rx Mailboxes Global Mask register */
/*! @{ */
#define CAN_RXMGMASK_MG_MASK                 (0xFFFFFFFFU)
#define CAN_RXMGMASK_MG_SHIFT                (0U)
#define CAN_RXMGMASK_MG_WIDTH                (32U)
#define CAN_RXMGMASK_MG(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_RXMGMASK_MG_SHIFT)) & CAN_RXMGMASK_MG_MASK)
/*! @} */

/*! @name RX14MASK - Rx 14 Mask register */
/*! @{ */
#define CAN_RX14MASK_RX14M_MASK              (0xFFFFFFFFU)
#define CAN_RX14MASK_RX14M_SHIFT             (0U)
#define CAN_RX14MASK_RX14M_WIDTH             (32U)
#define CAN_RX14MASK_RX14M(x)                (((uint32_t)(((uint32_t)(x)) << CAN_RX14MASK_RX14M_SHIFT)) & CAN_RX14MASK_RX14M_MASK)
/*! @} */

/*! @name RX15MASK - Rx 15 Mask register */
/*! @{ */
#define CAN_RX15MASK_RX15M_MASK              (0xFFFFFFFFU)
#define CAN_RX15MASK_RX15M_SHIFT             (0U)
#define CAN_RX15MASK_RX15M_WIDTH             (32U)
#define CAN_RX15MASK_RX15M(x)                (((uint32_t)(((uint32_t)(x)) << CAN_RX15MASK_RX15M_SHIFT)) & CAN_RX15MASK_RX15M_MASK)
/*! @} */

/*! @name ECR - Error Counter */
/*! @{ */
#define CAN_ECR_TXERRCNT_MASK                (0xFFU)
#define CAN_ECR_TXERRCNT_SHIFT               (0U)
#define CAN_ECR_TXERRCNT_WIDTH               (8U)
#define CAN_ECR_TXERRCNT(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ECR_TXERRCNT_SHIFT)) & CAN_ECR_TXERRCNT_MASK)
#define CAN_ECR_RXERRCNT_MASK                (0xFF00U)
#define CAN_ECR_RXERRCNT_SHIFT               (8U)
#define CAN_ECR_RXERRCNT_WIDTH               (8U)
#define CAN_ECR_RXERRCNT(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ECR_RXERRCNT_SHIFT)) & CAN_ECR_RXERRCNT_MASK)
#define CAN_ECR_TXERRCNT_FAST_MASK           (0xFF0000U)
#define CAN_ECR_TXERRCNT_FAST_SHIFT          (16U)
#define CAN_ECR_TXERRCNT_FAST_WIDTH          (8U)
#define CAN_ECR_TXERRCNT_FAST(x)             (((uint32_t)(((uint32_t)(x)) << CAN_ECR_TXERRCNT_FAST_SHIFT)) & CAN_ECR_TXERRCNT_FAST_MASK)
#define CAN_ECR_RXERRCNT_FAST_MASK           (0xFF000000U)
#define CAN_ECR_RXERRCNT_FAST_SHIFT          (24U)
#define CAN_ECR_RXERRCNT_FAST_WIDTH          (8U)
#define CAN_ECR_RXERRCNT_FAST(x)             (((uint32_t)(((uint32_t)(x)) << CAN_ECR_RXERRCNT_FAST_SHIFT)) & CAN_ECR_RXERRCNT_FAST_MASK)
/*! @} */

/*! @name ESR1 - Error and Status 1 register */
/*! @{ */
#define CAN_ESR1_ERRINT_MASK                 (0x2U)
#define CAN_ESR1_ERRINT_SHIFT                (1U)
#define CAN_ESR1_ERRINT_WIDTH                (1U)
#define CAN_ESR1_ERRINT(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ERRINT_SHIFT)) & CAN_ESR1_ERRINT_MASK)
#define CAN_ESR1_BOFFINT_MASK                (0x4U)
#define CAN_ESR1_BOFFINT_SHIFT               (2U)
#define CAN_ESR1_BOFFINT_WIDTH               (1U)
#define CAN_ESR1_BOFFINT(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BOFFINT_SHIFT)) & CAN_ESR1_BOFFINT_MASK)
#define CAN_ESR1_RX_MASK                     (0x8U)
#define CAN_ESR1_RX_SHIFT                    (3U)
#define CAN_ESR1_RX_WIDTH                    (1U)
#define CAN_ESR1_RX(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_RX_SHIFT)) & CAN_ESR1_RX_MASK)
#define CAN_ESR1_FLTCONF_MASK                (0x30U)
#define CAN_ESR1_FLTCONF_SHIFT               (4U)
#define CAN_ESR1_FLTCONF_WIDTH               (2U)
#define CAN_ESR1_FLTCONF(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_FLTCONF_SHIFT)) & CAN_ESR1_FLTCONF_MASK)
#define CAN_ESR1_TX_MASK                     (0x40U)
#define CAN_ESR1_TX_SHIFT                    (6U)
#define CAN_ESR1_TX_WIDTH                    (1U)
#define CAN_ESR1_TX(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_TX_SHIFT)) & CAN_ESR1_TX_MASK)
#define CAN_ESR1_IDLE_MASK                   (0x80U)
#define CAN_ESR1_IDLE_SHIFT                  (7U)
#define CAN_ESR1_IDLE_WIDTH                  (1U)
#define CAN_ESR1_IDLE(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_IDLE_SHIFT)) & CAN_ESR1_IDLE_MASK)
#define CAN_ESR1_RXWRN_MASK                  (0x100U)
#define CAN_ESR1_RXWRN_SHIFT                 (8U)
#define CAN_ESR1_RXWRN_WIDTH                 (1U)
#define CAN_ESR1_RXWRN(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_RXWRN_SHIFT)) & CAN_ESR1_RXWRN_MASK)
#define CAN_ESR1_TXWRN_MASK                  (0x200U)
#define CAN_ESR1_TXWRN_SHIFT                 (9U)
#define CAN_ESR1_TXWRN_WIDTH                 (1U)
#define CAN_ESR1_TXWRN(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_TXWRN_SHIFT)) & CAN_ESR1_TXWRN_MASK)
#define CAN_ESR1_STFERR_MASK                 (0x400U)
#define CAN_ESR1_STFERR_SHIFT                (10U)
#define CAN_ESR1_STFERR_WIDTH                (1U)
#define CAN_ESR1_STFERR(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_STFERR_SHIFT)) & CAN_ESR1_STFERR_MASK)
#define CAN_ESR1_FRMERR_MASK                 (0x800U)
#define CAN_ESR1_FRMERR_SHIFT                (11U)
#define CAN_ESR1_FRMERR_WIDTH                (1U)
#define CAN_ESR1_FRMERR(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_FRMERR_SHIFT)) & CAN_ESR1_FRMERR_MASK)
#define CAN_ESR1_CRCERR_MASK                 (0x1000U)
#define CAN_ESR1_CRCERR_SHIFT                (12U)
#define CAN_ESR1_CRCERR_WIDTH                (1U)
#define CAN_ESR1_CRCERR(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_CRCERR_SHIFT)) & CAN_ESR1_CRCERR_MASK)
#define CAN_ESR1_ACKERR_MASK                 (0x2000U)
#define CAN_ESR1_ACKERR_SHIFT                (13U)
#define CAN_ESR1_ACKERR_WIDTH                (1U)
#define CAN_ESR1_ACKERR(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ACKERR_SHIFT)) & CAN_ESR1_ACKERR_MASK)
#define CAN_ESR1_BIT0ERR_MASK                (0x4000U)
#define CAN_ESR1_BIT0ERR_SHIFT               (14U)
#define CAN_ESR1_BIT0ERR_WIDTH               (1U)
#define CAN_ESR1_BIT0ERR(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT0ERR_SHIFT)) & CAN_ESR1_BIT0ERR_MASK)
#define CAN_ESR1_BIT1ERR_MASK                (0x8000U)
#define CAN_ESR1_BIT1ERR_SHIFT               (15U)
#define CAN_ESR1_BIT1ERR_WIDTH               (1U)
#define CAN_ESR1_BIT1ERR(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT1ERR_SHIFT)) & CAN_ESR1_BIT1ERR_MASK)
#define CAN_ESR1_RWRNINT_MASK                (0x10000U)
#define CAN_ESR1_RWRNINT_SHIFT               (16U)
#define CAN_ESR1_RWRNINT_WIDTH               (1U)
#define CAN_ESR1_RWRNINT(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_RWRNINT_SHIFT)) & CAN_ESR1_RWRNINT_MASK)
#define CAN_ESR1_TWRNINT_MASK                (0x20000U)
#define CAN_ESR1_TWRNINT_SHIFT               (17U)
#define CAN_ESR1_TWRNINT_WIDTH               (1U)
#define CAN_ESR1_TWRNINT(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_TWRNINT_SHIFT)) & CAN_ESR1_TWRNINT_MASK)
#define CAN_ESR1_SYNCH_MASK                  (0x40000U)
#define CAN_ESR1_SYNCH_SHIFT                 (18U)
#define CAN_ESR1_SYNCH_WIDTH                 (1U)
#define CAN_ESR1_SYNCH(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_SYNCH_SHIFT)) & CAN_ESR1_SYNCH_MASK)
#define CAN_ESR1_BOFFDONEINT_MASK            (0x80000U)
#define CAN_ESR1_BOFFDONEINT_SHIFT           (19U)
#define CAN_ESR1_BOFFDONEINT_WIDTH           (1U)
#define CAN_ESR1_BOFFDONEINT(x)              (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BOFFDONEINT_SHIFT)) & CAN_ESR1_BOFFDONEINT_MASK)
#define CAN_ESR1_ERRINT_FAST_MASK            (0x100000U)
#define CAN_ESR1_ERRINT_FAST_SHIFT           (20U)
#define CAN_ESR1_ERRINT_FAST_WIDTH           (1U)
#define CAN_ESR1_ERRINT_FAST(x)              (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ERRINT_FAST_SHIFT)) & CAN_ESR1_ERRINT_FAST_MASK)
#define CAN_ESR1_ERROVR_MASK                 (0x200000U)
#define CAN_ESR1_ERROVR_SHIFT                (21U)
#define CAN_ESR1_ERROVR_WIDTH                (1U)
#define CAN_ESR1_ERROVR(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_ERROVR_SHIFT)) & CAN_ESR1_ERROVR_MASK)
#define CAN_ESR1_STFERR_FAST_MASK            (0x4000000U)
#define CAN_ESR1_STFERR_FAST_SHIFT           (26U)
#define CAN_ESR1_STFERR_FAST_WIDTH           (1U)
#define CAN_ESR1_STFERR_FAST(x)              (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_STFERR_FAST_SHIFT)) & CAN_ESR1_STFERR_FAST_MASK)
#define CAN_ESR1_FRMERR_FAST_MASK            (0x8000000U)
#define CAN_ESR1_FRMERR_FAST_SHIFT           (27U)
#define CAN_ESR1_FRMERR_FAST_WIDTH           (1U)
#define CAN_ESR1_FRMERR_FAST(x)              (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_FRMERR_FAST_SHIFT)) & CAN_ESR1_FRMERR_FAST_MASK)
#define CAN_ESR1_CRCERR_FAST_MASK            (0x10000000U)
#define CAN_ESR1_CRCERR_FAST_SHIFT           (28U)
#define CAN_ESR1_CRCERR_FAST_WIDTH           (1U)
#define CAN_ESR1_CRCERR_FAST(x)              (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_CRCERR_FAST_SHIFT)) & CAN_ESR1_CRCERR_FAST_MASK)
#define CAN_ESR1_BIT0ERR_FAST_MASK           (0x40000000U)
#define CAN_ESR1_BIT0ERR_FAST_SHIFT          (30U)
#define CAN_ESR1_BIT0ERR_FAST_WIDTH          (1U)
#define CAN_ESR1_BIT0ERR_FAST(x)             (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT0ERR_FAST_SHIFT)) & CAN_ESR1_BIT0ERR_FAST_MASK)
#define CAN_ESR1_BIT1ERR_FAST_MASK           (0x80000000U)
#define CAN_ESR1_BIT1ERR_FAST_SHIFT          (31U)
#define CAN_ESR1_BIT1ERR_FAST_WIDTH          (1U)
#define CAN_ESR1_BIT1ERR_FAST(x)             (((uint32_t)(((uint32_t)(x)) << CAN_ESR1_BIT1ERR_FAST_SHIFT)) & CAN_ESR1_BIT1ERR_FAST_MASK)
/*! @} */

/*! @name IMASK2 - Interrupt Masks 2 register */
/*! @{ */
#define CAN_IMASK2_BUF63TO32M_MASK           (0xFFFFFFFFU)
#define CAN_IMASK2_BUF63TO32M_SHIFT          (0U)
#define CAN_IMASK2_BUF63TO32M_WIDTH          (32U)
#define CAN_IMASK2_BUF63TO32M(x)             (((uint32_t)(((uint32_t)(x)) << CAN_IMASK2_BUF63TO32M_SHIFT)) & CAN_IMASK2_BUF63TO32M_MASK)
/*! @} */

/*! @name IMASK1 - Interrupt Masks 1 register */
/*! @{ */
#define CAN_IMASK1_BUF31TO0M_MASK            (0xFFFFFFFFU)
#define CAN_IMASK1_BUF31TO0M_SHIFT           (0U)
#define CAN_IMASK1_BUF31TO0M_WIDTH           (32U)
#define CAN_IMASK1_BUF31TO0M(x)              (((uint32_t)(((uint32_t)(x)) << CAN_IMASK1_BUF31TO0M_SHIFT)) & CAN_IMASK1_BUF31TO0M_MASK)
/*! @} */

/*! @name IFLAG2 - Interrupt Flags 2 register */
/*! @{ */
#define CAN_IFLAG2_BUF63TO32I_MASK           (0xFFFFFFFFU)
#define CAN_IFLAG2_BUF63TO32I_SHIFT          (0U)
#define CAN_IFLAG2_BUF63TO32I_WIDTH          (32U)
#define CAN_IFLAG2_BUF63TO32I(x)             (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG2_BUF63TO32I_SHIFT)) & CAN_IFLAG2_BUF63TO32I_MASK)
/*! @} */

/*! @name IFLAG1 - Interrupt Flags 1 register */
/*! @{ */
#define CAN_IFLAG1_BUF0I_MASK                (0x1U)
#define CAN_IFLAG1_BUF0I_SHIFT               (0U)
#define CAN_IFLAG1_BUF0I_WIDTH               (1U)
#define CAN_IFLAG1_BUF0I(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF0I_SHIFT)) & CAN_IFLAG1_BUF0I_MASK)
#define CAN_IFLAG1_BUF4TO1I_MASK             (0x1EU)
#define CAN_IFLAG1_BUF4TO1I_SHIFT            (1U)
#define CAN_IFLAG1_BUF4TO1I_WIDTH            (4U)
#define CAN_IFLAG1_BUF4TO1I(x)               (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF4TO1I_SHIFT)) & CAN_IFLAG1_BUF4TO1I_MASK)
#define CAN_IFLAG1_BUF5I_MASK                (0x20U)
#define CAN_IFLAG1_BUF5I_SHIFT               (5U)
#define CAN_IFLAG1_BUF5I_WIDTH               (1U)
#define CAN_IFLAG1_BUF5I(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF5I_SHIFT)) & CAN_IFLAG1_BUF5I_MASK)
#define CAN_IFLAG1_BUF6I_MASK                (0x40U)
#define CAN_IFLAG1_BUF6I_SHIFT               (6U)
#define CAN_IFLAG1_BUF6I_WIDTH               (1U)
#define CAN_IFLAG1_BUF6I(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF6I_SHIFT)) & CAN_IFLAG1_BUF6I_MASK)
#define CAN_IFLAG1_BUF7I_MASK                (0x80U)
#define CAN_IFLAG1_BUF7I_SHIFT               (7U)
#define CAN_IFLAG1_BUF7I_WIDTH               (1U)
#define CAN_IFLAG1_BUF7I(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF7I_SHIFT)) & CAN_IFLAG1_BUF7I_MASK)
#define CAN_IFLAG1_BUF31TO8I_MASK            (0xFFFFFF00U)
#define CAN_IFLAG1_BUF31TO8I_SHIFT           (8U)
#define CAN_IFLAG1_BUF31TO8I_WIDTH           (24U)
#define CAN_IFLAG1_BUF31TO8I(x)              (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG1_BUF31TO8I_SHIFT)) & CAN_IFLAG1_BUF31TO8I_MASK)
/*! @} */

/*! @name CTRL2 - Control 2 register */
/*! @{ */
#define CAN_CTRL2_TSTAMPCAP_MASK             (0xC0U)
#define CAN_CTRL2_TSTAMPCAP_SHIFT            (6U)
#define CAN_CTRL2_TSTAMPCAP_WIDTH            (2U)
#define CAN_CTRL2_TSTAMPCAP(x)               (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_TSTAMPCAP_SHIFT)) & CAN_CTRL2_TSTAMPCAP_MASK)
#define CAN_CTRL2_MBTSBASE_MASK              (0x300U)
#define CAN_CTRL2_MBTSBASE_SHIFT             (8U)
#define CAN_CTRL2_MBTSBASE_WIDTH             (2U)
#define CAN_CTRL2_MBTSBASE(x)                (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_MBTSBASE_SHIFT)) & CAN_CTRL2_MBTSBASE_MASK)
#define CAN_CTRL2_EDFLTDIS_MASK              (0x800U)
#define CAN_CTRL2_EDFLTDIS_SHIFT             (11U)
#define CAN_CTRL2_EDFLTDIS_WIDTH             (1U)
#define CAN_CTRL2_EDFLTDIS(x)                (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_EDFLTDIS_SHIFT)) & CAN_CTRL2_EDFLTDIS_MASK)
#define CAN_CTRL2_ISOCANFDEN_MASK            (0x1000U)
#define CAN_CTRL2_ISOCANFDEN_SHIFT           (12U)
#define CAN_CTRL2_ISOCANFDEN_WIDTH           (1U)
#define CAN_CTRL2_ISOCANFDEN(x)              (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_ISOCANFDEN_SHIFT)) & CAN_CTRL2_ISOCANFDEN_MASK)
#define CAN_CTRL2_BTE_MASK                   (0x2000U)
#define CAN_CTRL2_BTE_SHIFT                  (13U)
#define CAN_CTRL2_BTE_WIDTH                  (1U)
#define CAN_CTRL2_BTE(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_BTE_SHIFT)) & CAN_CTRL2_BTE_MASK)
#define CAN_CTRL2_PREXCEN_MASK               (0x4000U)
#define CAN_CTRL2_PREXCEN_SHIFT              (14U)
#define CAN_CTRL2_PREXCEN_WIDTH              (1U)
#define CAN_CTRL2_PREXCEN(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_PREXCEN_SHIFT)) & CAN_CTRL2_PREXCEN_MASK)
#define CAN_CTRL2_TIMER_SRC_MASK             (0x8000U)
#define CAN_CTRL2_TIMER_SRC_SHIFT            (15U)
#define CAN_CTRL2_TIMER_SRC_WIDTH            (1U)
#define CAN_CTRL2_TIMER_SRC(x)               (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_TIMER_SRC_SHIFT)) & CAN_CTRL2_TIMER_SRC_MASK)
#define CAN_CTRL2_EACEN_MASK                 (0x10000U)
#define CAN_CTRL2_EACEN_SHIFT                (16U)
#define CAN_CTRL2_EACEN_WIDTH                (1U)
#define CAN_CTRL2_EACEN(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_EACEN_SHIFT)) & CAN_CTRL2_EACEN_MASK)
#define CAN_CTRL2_RRS_MASK                   (0x20000U)
#define CAN_CTRL2_RRS_SHIFT                  (17U)
#define CAN_CTRL2_RRS_WIDTH                  (1U)
#define CAN_CTRL2_RRS(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_RRS_SHIFT)) & CAN_CTRL2_RRS_MASK)
#define CAN_CTRL2_MRP_MASK                   (0x40000U)
#define CAN_CTRL2_MRP_SHIFT                  (18U)
#define CAN_CTRL2_MRP_WIDTH                  (1U)
#define CAN_CTRL2_MRP(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_MRP_SHIFT)) & CAN_CTRL2_MRP_MASK)
#define CAN_CTRL2_TASD_MASK                  (0xF80000U)
#define CAN_CTRL2_TASD_SHIFT                 (19U)
#define CAN_CTRL2_TASD_WIDTH                 (5U)
#define CAN_CTRL2_TASD(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_TASD_SHIFT)) & CAN_CTRL2_TASD_MASK)
#define CAN_CTRL2_RFFN_MASK                  (0xF000000U)
#define CAN_CTRL2_RFFN_SHIFT                 (24U)
#define CAN_CTRL2_RFFN_WIDTH                 (4U)
#define CAN_CTRL2_RFFN(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_RFFN_SHIFT)) & CAN_CTRL2_RFFN_MASK)
#define CAN_CTRL2_WRMFRZ_MASK                (0x10000000U)
#define CAN_CTRL2_WRMFRZ_SHIFT               (28U)
#define CAN_CTRL2_WRMFRZ_WIDTH               (1U)
#define CAN_CTRL2_WRMFRZ(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_WRMFRZ_SHIFT)) & CAN_CTRL2_WRMFRZ_MASK)
#define CAN_CTRL2_ECRWRE_MASK                (0x20000000U)
#define CAN_CTRL2_ECRWRE_SHIFT               (29U)
#define CAN_CTRL2_ECRWRE_WIDTH               (1U)
#define CAN_CTRL2_ECRWRE(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_ECRWRE_SHIFT)) & CAN_CTRL2_ECRWRE_MASK)
#define CAN_CTRL2_BOFFDONEMSK_MASK           (0x40000000U)
#define CAN_CTRL2_BOFFDONEMSK_SHIFT          (30U)
#define CAN_CTRL2_BOFFDONEMSK_WIDTH          (1U)
#define CAN_CTRL2_BOFFDONEMSK(x)             (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_BOFFDONEMSK_SHIFT)) & CAN_CTRL2_BOFFDONEMSK_MASK)
#define CAN_CTRL2_ERRMSK_FAST_MASK           (0x80000000U)
#define CAN_CTRL2_ERRMSK_FAST_SHIFT          (31U)
#define CAN_CTRL2_ERRMSK_FAST_WIDTH          (1U)
#define CAN_CTRL2_ERRMSK_FAST(x)             (((uint32_t)(((uint32_t)(x)) << CAN_CTRL2_ERRMSK_FAST_SHIFT)) & CAN_CTRL2_ERRMSK_FAST_MASK)
/*! @} */

/*! @name ESR2 - Error and Status 2 register */
/*! @{ */
#define CAN_ESR2_IMB_MASK                    (0x2000U)
#define CAN_ESR2_IMB_SHIFT                   (13U)
#define CAN_ESR2_IMB_WIDTH                   (1U)
#define CAN_ESR2_IMB(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR2_IMB_SHIFT)) & CAN_ESR2_IMB_MASK)
#define CAN_ESR2_VPS_MASK                    (0x4000U)
#define CAN_ESR2_VPS_SHIFT                   (14U)
#define CAN_ESR2_VPS_WIDTH                   (1U)
#define CAN_ESR2_VPS(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_ESR2_VPS_SHIFT)) & CAN_ESR2_VPS_MASK)
#define CAN_ESR2_LPTM_MASK                   (0x7F0000U)
#define CAN_ESR2_LPTM_SHIFT                  (16U)
#define CAN_ESR2_LPTM_WIDTH                  (7U)
#define CAN_ESR2_LPTM(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_ESR2_LPTM_SHIFT)) & CAN_ESR2_LPTM_MASK)
/*! @} */

/*! @name CRCR - CRC register */
/*! @{ */
#define CAN_CRCR_TXCRC_MASK                  (0x7FFFU)
#define CAN_CRCR_TXCRC_SHIFT                 (0U)
#define CAN_CRCR_TXCRC_WIDTH                 (15U)
#define CAN_CRCR_TXCRC(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CRCR_TXCRC_SHIFT)) & CAN_CRCR_TXCRC_MASK)
#define CAN_CRCR_MBCRC_MASK                  (0x7F0000U)
#define CAN_CRCR_MBCRC_SHIFT                 (16U)
#define CAN_CRCR_MBCRC_WIDTH                 (7U)
#define CAN_CRCR_MBCRC(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CRCR_MBCRC_SHIFT)) & CAN_CRCR_MBCRC_MASK)
/*! @} */

/*! @name RXFGMASK - Legacy Rx FIFO Global Mask register */
/*! @{ */
#define CAN_RXFGMASK_FGM_MASK                (0xFFFFFFFFU)
#define CAN_RXFGMASK_FGM_SHIFT               (0U)
#define CAN_RXFGMASK_FGM_WIDTH               (32U)
#define CAN_RXFGMASK_FGM(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_RXFGMASK_FGM_SHIFT)) & CAN_RXFGMASK_FGM_MASK)
/*! @} */

/*! @name RXFIR - Legacy Rx FIFO Information register */
/*! @{ */
#define CAN_RXFIR_IDHIT_MASK                 (0x1FFU)
#define CAN_RXFIR_IDHIT_SHIFT                (0U)
#define CAN_RXFIR_IDHIT_WIDTH                (9U)
#define CAN_RXFIR_IDHIT(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_RXFIR_IDHIT_SHIFT)) & CAN_RXFIR_IDHIT_MASK)
/*! @} */

/*! @name CBT - CAN Bit Timing register */
/*! @{ */
#define CAN_CBT_EPSEG2_MASK                  (0x1FU)
#define CAN_CBT_EPSEG2_SHIFT                 (0U)
#define CAN_CBT_EPSEG2_WIDTH                 (5U)
#define CAN_CBT_EPSEG2(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPSEG2_SHIFT)) & CAN_CBT_EPSEG2_MASK)
#define CAN_CBT_EPSEG1_MASK                  (0x3E0U)
#define CAN_CBT_EPSEG1_SHIFT                 (5U)
#define CAN_CBT_EPSEG1_WIDTH                 (5U)
#define CAN_CBT_EPSEG1(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPSEG1_SHIFT)) & CAN_CBT_EPSEG1_MASK)
#define CAN_CBT_EPROPSEG_MASK                (0xFC00U)
#define CAN_CBT_EPROPSEG_SHIFT               (10U)
#define CAN_CBT_EPROPSEG_WIDTH               (6U)
#define CAN_CBT_EPROPSEG(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPROPSEG_SHIFT)) & CAN_CBT_EPROPSEG_MASK)
#define CAN_CBT_ERJW_MASK                    (0x1F0000U)
#define CAN_CBT_ERJW_SHIFT                   (16U)
#define CAN_CBT_ERJW_WIDTH                   (5U)
#define CAN_CBT_ERJW(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_CBT_ERJW_SHIFT)) & CAN_CBT_ERJW_MASK)
#define CAN_CBT_EPRESDIV_MASK                (0x7FE00000U)
#define CAN_CBT_EPRESDIV_SHIFT               (21U)
#define CAN_CBT_EPRESDIV_WIDTH               (10U)
#define CAN_CBT_EPRESDIV(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_CBT_EPRESDIV_SHIFT)) & CAN_CBT_EPRESDIV_MASK)
#define CAN_CBT_BTF_MASK                     (0x80000000U)
#define CAN_CBT_BTF_SHIFT                    (31U)
#define CAN_CBT_BTF_WIDTH                    (1U)
#define CAN_CBT_BTF(x)                       (((uint32_t)(((uint32_t)(x)) << CAN_CBT_BTF_SHIFT)) & CAN_CBT_BTF_MASK)
/*! @} */

/*! @name IMASK4 - Interrupt Masks 4 register */
/*! @{ */
#define CAN_IMASK4_BUF127TO96M_MASK          (0xFFFFFFFFU)
#define CAN_IMASK4_BUF127TO96M_SHIFT         (0U)
#define CAN_IMASK4_BUF127TO96M_WIDTH         (32U)
#define CAN_IMASK4_BUF127TO96M(x)            (((uint32_t)(((uint32_t)(x)) << CAN_IMASK4_BUF127TO96M_SHIFT)) & CAN_IMASK4_BUF127TO96M_MASK)
/*! @} */

/*! @name IMASK3 - Interrupt Masks 3 register */
/*! @{ */
#define CAN_IMASK3_BUF95TO64M_MASK           (0xFFFFFFFFU)
#define CAN_IMASK3_BUF95TO64M_SHIFT          (0U)
#define CAN_IMASK3_BUF95TO64M_WIDTH          (32U)
#define CAN_IMASK3_BUF95TO64M(x)             (((uint32_t)(((uint32_t)(x)) << CAN_IMASK3_BUF95TO64M_SHIFT)) & CAN_IMASK3_BUF95TO64M_MASK)
/*! @} */

/*! @name IFLAG4 - Interrupt Flags 4 register */
/*! @{ */
#define CAN_IFLAG4_BUF127TO96_MASK           (0xFFFFFFFFU)
#define CAN_IFLAG4_BUF127TO96_SHIFT          (0U)
#define CAN_IFLAG4_BUF127TO96_WIDTH          (32U)
#define CAN_IFLAG4_BUF127TO96(x)             (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG4_BUF127TO96_SHIFT)) & CAN_IFLAG4_BUF127TO96_MASK)
/*! @} */

/*! @name IFLAG3 - Interrupt Flags 3 register */
/*! @{ */
#define CAN_IFLAG3_BUF95TO64_MASK            (0xFFFFFFFFU)
#define CAN_IFLAG3_BUF95TO64_SHIFT           (0U)
#define CAN_IFLAG3_BUF95TO64_WIDTH           (32U)
#define CAN_IFLAG3_BUF95TO64(x)              (((uint32_t)(((uint32_t)(x)) << CAN_IFLAG3_BUF95TO64_SHIFT)) & CAN_IFLAG3_BUF95TO64_MASK)
/*! @} */

/*! @name RXIMR - Rx Individual Mask registers */
/*! @{ */
#define CAN_RXIMR_MI_MASK                    (0xFFFFFFFFU)
#define CAN_RXIMR_MI_SHIFT                   (0U)
#define CAN_RXIMR_MI_WIDTH                   (32U)
#define CAN_RXIMR_MI(x)                      (((uint32_t)(((uint32_t)(x)) << CAN_RXIMR_MI_SHIFT)) & CAN_RXIMR_MI_MASK)
/*! @} */

/*! @name MECR - Memory Error Control register */
/*! @{ */
#define CAN_MECR_NCEFAFRZ_MASK               (0x80U)
#define CAN_MECR_NCEFAFRZ_SHIFT              (7U)
#define CAN_MECR_NCEFAFRZ_WIDTH              (1U)
#define CAN_MECR_NCEFAFRZ(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_MECR_NCEFAFRZ_SHIFT)) & CAN_MECR_NCEFAFRZ_MASK)
#define CAN_MECR_ECCDIS_MASK                 (0x100U)
#define CAN_MECR_ECCDIS_SHIFT                (8U)
#define CAN_MECR_ECCDIS_WIDTH                (1U)
#define CAN_MECR_ECCDIS(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_MECR_ECCDIS_SHIFT)) & CAN_MECR_ECCDIS_MASK)
#define CAN_MECR_RERRDIS_MASK                (0x200U)
#define CAN_MECR_RERRDIS_SHIFT               (9U)
#define CAN_MECR_RERRDIS_WIDTH               (1U)
#define CAN_MECR_RERRDIS(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_MECR_RERRDIS_SHIFT)) & CAN_MECR_RERRDIS_MASK)
#define CAN_MECR_EXTERRIE_MASK               (0x2000U)
#define CAN_MECR_EXTERRIE_SHIFT              (13U)
#define CAN_MECR_EXTERRIE_WIDTH              (1U)
#define CAN_MECR_EXTERRIE(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_MECR_EXTERRIE_SHIFT)) & CAN_MECR_EXTERRIE_MASK)
#define CAN_MECR_FAERRIE_MASK                (0x4000U)
#define CAN_MECR_FAERRIE_SHIFT               (14U)
#define CAN_MECR_FAERRIE_WIDTH               (1U)
#define CAN_MECR_FAERRIE(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_MECR_FAERRIE_SHIFT)) & CAN_MECR_FAERRIE_MASK)
#define CAN_MECR_HAERRIE_MASK                (0x8000U)
#define CAN_MECR_HAERRIE_SHIFT               (15U)
#define CAN_MECR_HAERRIE_WIDTH               (1U)
#define CAN_MECR_HAERRIE(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_MECR_HAERRIE_SHIFT)) & CAN_MECR_HAERRIE_MASK)
#define CAN_MECR_CEI_MSK_MASK                (0x10000U)
#define CAN_MECR_CEI_MSK_SHIFT               (16U)
#define CAN_MECR_CEI_MSK_WIDTH               (1U)
#define CAN_MECR_CEI_MSK(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_MECR_CEI_MSK_SHIFT)) & CAN_MECR_CEI_MSK_MASK)
#define CAN_MECR_FANCEI_MSK_MASK             (0x40000U)
#define CAN_MECR_FANCEI_MSK_SHIFT            (18U)
#define CAN_MECR_FANCEI_MSK_WIDTH            (1U)
#define CAN_MECR_FANCEI_MSK(x)               (((uint32_t)(((uint32_t)(x)) << CAN_MECR_FANCEI_MSK_SHIFT)) & CAN_MECR_FANCEI_MSK_MASK)
#define CAN_MECR_HANCEI_MSK_MASK             (0x80000U)
#define CAN_MECR_HANCEI_MSK_SHIFT            (19U)
#define CAN_MECR_HANCEI_MSK_WIDTH            (1U)
#define CAN_MECR_HANCEI_MSK(x)               (((uint32_t)(((uint32_t)(x)) << CAN_MECR_HANCEI_MSK_SHIFT)) & CAN_MECR_HANCEI_MSK_MASK)
#define CAN_MECR_ECRWRDIS_MASK               (0x80000000U)
#define CAN_MECR_ECRWRDIS_SHIFT              (31U)
#define CAN_MECR_ECRWRDIS_WIDTH              (1U)
#define CAN_MECR_ECRWRDIS(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_MECR_ECRWRDIS_SHIFT)) & CAN_MECR_ECRWRDIS_MASK)
/*! @} */

/*! @name ERRIAR - Error Injection Address register */
/*! @{ */
#define CAN_ERRIAR_INJADDR_L_MASK            (0x3U)
#define CAN_ERRIAR_INJADDR_L_SHIFT           (0U)
#define CAN_ERRIAR_INJADDR_L_WIDTH           (2U)
#define CAN_ERRIAR_INJADDR_L(x)              (((uint32_t)(((uint32_t)(x)) << CAN_ERRIAR_INJADDR_L_SHIFT)) & CAN_ERRIAR_INJADDR_L_MASK)
#define CAN_ERRIAR_INJADDR_H_MASK            (0x3FFCU)
#define CAN_ERRIAR_INJADDR_H_SHIFT           (2U)
#define CAN_ERRIAR_INJADDR_H_WIDTH           (12U)
#define CAN_ERRIAR_INJADDR_H(x)              (((uint32_t)(((uint32_t)(x)) << CAN_ERRIAR_INJADDR_H_SHIFT)) & CAN_ERRIAR_INJADDR_H_MASK)
/*! @} */

/*! @name ERRIDPR - Error Injection Data Pattern register */
/*! @{ */
#define CAN_ERRIDPR_DFLIP_MASK               (0xFFFFFFFFU)
#define CAN_ERRIDPR_DFLIP_SHIFT              (0U)
#define CAN_ERRIDPR_DFLIP_WIDTH              (32U)
#define CAN_ERRIDPR_DFLIP(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ERRIDPR_DFLIP_SHIFT)) & CAN_ERRIDPR_DFLIP_MASK)
/*! @} */

/*! @name ERRIPPR - Error Injection Parity Pattern register */
/*! @{ */
#define CAN_ERRIPPR_PFLIP0_MASK              (0x1FU)
#define CAN_ERRIPPR_PFLIP0_SHIFT             (0U)
#define CAN_ERRIPPR_PFLIP0_WIDTH             (5U)
#define CAN_ERRIPPR_PFLIP0(x)                (((uint32_t)(((uint32_t)(x)) << CAN_ERRIPPR_PFLIP0_SHIFT)) & CAN_ERRIPPR_PFLIP0_MASK)
#define CAN_ERRIPPR_PFLIP1_MASK              (0x1F00U)
#define CAN_ERRIPPR_PFLIP1_SHIFT             (8U)
#define CAN_ERRIPPR_PFLIP1_WIDTH             (5U)
#define CAN_ERRIPPR_PFLIP1(x)                (((uint32_t)(((uint32_t)(x)) << CAN_ERRIPPR_PFLIP1_SHIFT)) & CAN_ERRIPPR_PFLIP1_MASK)
#define CAN_ERRIPPR_PFLIP2_MASK              (0x1F0000U)
#define CAN_ERRIPPR_PFLIP2_SHIFT             (16U)
#define CAN_ERRIPPR_PFLIP2_WIDTH             (5U)
#define CAN_ERRIPPR_PFLIP2(x)                (((uint32_t)(((uint32_t)(x)) << CAN_ERRIPPR_PFLIP2_SHIFT)) & CAN_ERRIPPR_PFLIP2_MASK)
#define CAN_ERRIPPR_PFLIP3_MASK              (0x1F000000U)
#define CAN_ERRIPPR_PFLIP3_SHIFT             (24U)
#define CAN_ERRIPPR_PFLIP3_WIDTH             (5U)
#define CAN_ERRIPPR_PFLIP3(x)                (((uint32_t)(((uint32_t)(x)) << CAN_ERRIPPR_PFLIP3_SHIFT)) & CAN_ERRIPPR_PFLIP3_MASK)
/*! @} */

/*! @name RERRAR - Error Report Address register */
/*! @{ */
#define CAN_RERRAR_ERRADDR_MASK              (0x3FFFU)
#define CAN_RERRAR_ERRADDR_SHIFT             (0U)
#define CAN_RERRAR_ERRADDR_WIDTH             (14U)
#define CAN_RERRAR_ERRADDR(x)                (((uint32_t)(((uint32_t)(x)) << CAN_RERRAR_ERRADDR_SHIFT)) & CAN_RERRAR_ERRADDR_MASK)
#define CAN_RERRAR_SAID_MASK                 (0x70000U)
#define CAN_RERRAR_SAID_SHIFT                (16U)
#define CAN_RERRAR_SAID_WIDTH                (3U)
#define CAN_RERRAR_SAID(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_RERRAR_SAID_SHIFT)) & CAN_RERRAR_SAID_MASK)
#define CAN_RERRAR_NCE_MASK                  (0x1000000U)
#define CAN_RERRAR_NCE_SHIFT                 (24U)
#define CAN_RERRAR_NCE_WIDTH                 (1U)
#define CAN_RERRAR_NCE(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_RERRAR_NCE_SHIFT)) & CAN_RERRAR_NCE_MASK)
/*! @} */

/*! @name RERRDR - Error Report Data register */
/*! @{ */
#define CAN_RERRDR_RDATA_MASK                (0xFFFFFFFFU)
#define CAN_RERRDR_RDATA_SHIFT               (0U)
#define CAN_RERRDR_RDATA_WIDTH               (32U)
#define CAN_RERRDR_RDATA(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_RERRDR_RDATA_SHIFT)) & CAN_RERRDR_RDATA_MASK)
/*! @} */

/*! @name RERRSYNR - Error Report Syndrome register */
/*! @{ */
#define CAN_RERRSYNR_SYND0_MASK              (0x1FU)
#define CAN_RERRSYNR_SYND0_SHIFT             (0U)
#define CAN_RERRSYNR_SYND0_WIDTH             (5U)
#define CAN_RERRSYNR_SYND0(x)                (((uint32_t)(((uint32_t)(x)) << CAN_RERRSYNR_SYND0_SHIFT)) & CAN_RERRSYNR_SYND0_MASK)
#define CAN_RERRSYNR_BE0_MASK                (0x80U)
#define CAN_RERRSYNR_BE0_SHIFT               (7U)
#define CAN_RERRSYNR_BE0_WIDTH               (1U)
#define CAN_RERRSYNR_BE0(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_RERRSYNR_BE0_SHIFT)) & CAN_RERRSYNR_BE0_MASK)
#define CAN_RERRSYNR_SYND1_MASK              (0x1F00U)
#define CAN_RERRSYNR_SYND1_SHIFT             (8U)
#define CAN_RERRSYNR_SYND1_WIDTH             (5U)
#define CAN_RERRSYNR_SYND1(x)                (((uint32_t)(((uint32_t)(x)) << CAN_RERRSYNR_SYND1_SHIFT)) & CAN_RERRSYNR_SYND1_MASK)
#define CAN_RERRSYNR_BE1_MASK                (0x8000U)
#define CAN_RERRSYNR_BE1_SHIFT               (15U)
#define CAN_RERRSYNR_BE1_WIDTH               (1U)
#define CAN_RERRSYNR_BE1(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_RERRSYNR_BE1_SHIFT)) & CAN_RERRSYNR_BE1_MASK)
#define CAN_RERRSYNR_SYND2_MASK              (0x1F0000U)
#define CAN_RERRSYNR_SYND2_SHIFT             (16U)
#define CAN_RERRSYNR_SYND2_WIDTH             (5U)
#define CAN_RERRSYNR_SYND2(x)                (((uint32_t)(((uint32_t)(x)) << CAN_RERRSYNR_SYND2_SHIFT)) & CAN_RERRSYNR_SYND2_MASK)
#define CAN_RERRSYNR_BE2_MASK                (0x800000U)
#define CAN_RERRSYNR_BE2_SHIFT               (23U)
#define CAN_RERRSYNR_BE2_WIDTH               (1U)
#define CAN_RERRSYNR_BE2(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_RERRSYNR_BE2_SHIFT)) & CAN_RERRSYNR_BE2_MASK)
#define CAN_RERRSYNR_SYND3_MASK              (0x1F000000U)
#define CAN_RERRSYNR_SYND3_SHIFT             (24U)
#define CAN_RERRSYNR_SYND3_WIDTH             (5U)
#define CAN_RERRSYNR_SYND3(x)                (((uint32_t)(((uint32_t)(x)) << CAN_RERRSYNR_SYND3_SHIFT)) & CAN_RERRSYNR_SYND3_MASK)
#define CAN_RERRSYNR_BE3_MASK                (0x80000000U)
#define CAN_RERRSYNR_BE3_SHIFT               (31U)
#define CAN_RERRSYNR_BE3_WIDTH               (1U)
#define CAN_RERRSYNR_BE3(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_RERRSYNR_BE3_SHIFT)) & CAN_RERRSYNR_BE3_MASK)
/*! @} */

/*! @name ERRSR - Error Status register */
/*! @{ */
#define CAN_ERRSR_CEIOF_MASK                 (0x1U)
#define CAN_ERRSR_CEIOF_SHIFT                (0U)
#define CAN_ERRSR_CEIOF_WIDTH                (1U)
#define CAN_ERRSR_CEIOF(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERRSR_CEIOF_SHIFT)) & CAN_ERRSR_CEIOF_MASK)
#define CAN_ERRSR_FANCEIOF_MASK              (0x4U)
#define CAN_ERRSR_FANCEIOF_SHIFT             (2U)
#define CAN_ERRSR_FANCEIOF_WIDTH             (1U)
#define CAN_ERRSR_FANCEIOF(x)                (((uint32_t)(((uint32_t)(x)) << CAN_ERRSR_FANCEIOF_SHIFT)) & CAN_ERRSR_FANCEIOF_MASK)
#define CAN_ERRSR_HANCEIOF_MASK              (0x8U)
#define CAN_ERRSR_HANCEIOF_SHIFT             (3U)
#define CAN_ERRSR_HANCEIOF_WIDTH             (1U)
#define CAN_ERRSR_HANCEIOF(x)                (((uint32_t)(((uint32_t)(x)) << CAN_ERRSR_HANCEIOF_SHIFT)) & CAN_ERRSR_HANCEIOF_MASK)
#define CAN_ERRSR_CEIF_MASK                  (0x10000U)
#define CAN_ERRSR_CEIF_SHIFT                 (16U)
#define CAN_ERRSR_CEIF_WIDTH                 (1U)
#define CAN_ERRSR_CEIF(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_ERRSR_CEIF_SHIFT)) & CAN_ERRSR_CEIF_MASK)
#define CAN_ERRSR_FANCEIF_MASK               (0x40000U)
#define CAN_ERRSR_FANCEIF_SHIFT              (18U)
#define CAN_ERRSR_FANCEIF_WIDTH              (1U)
#define CAN_ERRSR_FANCEIF(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ERRSR_FANCEIF_SHIFT)) & CAN_ERRSR_FANCEIF_MASK)
#define CAN_ERRSR_HANCEIF_MASK               (0x80000U)
#define CAN_ERRSR_HANCEIF_SHIFT              (19U)
#define CAN_ERRSR_HANCEIF_WIDTH              (1U)
#define CAN_ERRSR_HANCEIF(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ERRSR_HANCEIF_SHIFT)) & CAN_ERRSR_HANCEIF_MASK)
/*! @} */

/*! @name EPRS - Enhanced CAN Bit Timing Prescalers */
/*! @{ */
#define CAN_EPRS_ENPRESDIV_MASK              (0x3FFU)
#define CAN_EPRS_ENPRESDIV_SHIFT             (0U)
#define CAN_EPRS_ENPRESDIV_WIDTH             (10U)
#define CAN_EPRS_ENPRESDIV(x)                (((uint32_t)(((uint32_t)(x)) << CAN_EPRS_ENPRESDIV_SHIFT)) & CAN_EPRS_ENPRESDIV_MASK)
#define CAN_EPRS_EDPRESDIV_MASK              (0x3FF0000U)
#define CAN_EPRS_EDPRESDIV_SHIFT             (16U)
#define CAN_EPRS_EDPRESDIV_WIDTH             (10U)
#define CAN_EPRS_EDPRESDIV(x)                (((uint32_t)(((uint32_t)(x)) << CAN_EPRS_EDPRESDIV_SHIFT)) & CAN_EPRS_EDPRESDIV_MASK)
/*! @} */

/*! @name ENCBT - Enhanced Nominal CAN Bit Timing */
/*! @{ */
#define CAN_ENCBT_NTSEG1_MASK                (0xFFU)
#define CAN_ENCBT_NTSEG1_SHIFT               (0U)
#define CAN_ENCBT_NTSEG1_WIDTH               (8U)
#define CAN_ENCBT_NTSEG1(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ENCBT_NTSEG1_SHIFT)) & CAN_ENCBT_NTSEG1_MASK)
#define CAN_ENCBT_NTSEG2_MASK                (0x7F000U)
#define CAN_ENCBT_NTSEG2_SHIFT               (12U)
#define CAN_ENCBT_NTSEG2_WIDTH               (7U)
#define CAN_ENCBT_NTSEG2(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ENCBT_NTSEG2_SHIFT)) & CAN_ENCBT_NTSEG2_MASK)
#define CAN_ENCBT_NRJW_MASK                  (0x1FC00000U)
#define CAN_ENCBT_NRJW_SHIFT                 (22U)
#define CAN_ENCBT_NRJW_WIDTH                 (7U)
#define CAN_ENCBT_NRJW(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_ENCBT_NRJW_SHIFT)) & CAN_ENCBT_NRJW_MASK)
/*! @} */

/*! @name EDCBT - Enhanced Data Phase CAN bit Timing */
/*! @{ */
#define CAN_EDCBT_DTSEG1_MASK                (0x1FU)
#define CAN_EDCBT_DTSEG1_SHIFT               (0U)
#define CAN_EDCBT_DTSEG1_WIDTH               (5U)
#define CAN_EDCBT_DTSEG1(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_EDCBT_DTSEG1_SHIFT)) & CAN_EDCBT_DTSEG1_MASK)
#define CAN_EDCBT_DTSEG2_MASK                (0xF000U)
#define CAN_EDCBT_DTSEG2_SHIFT               (12U)
#define CAN_EDCBT_DTSEG2_WIDTH               (4U)
#define CAN_EDCBT_DTSEG2(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_EDCBT_DTSEG2_SHIFT)) & CAN_EDCBT_DTSEG2_MASK)
#define CAN_EDCBT_DRJW_MASK                  (0x3C00000U)
#define CAN_EDCBT_DRJW_SHIFT                 (22U)
#define CAN_EDCBT_DRJW_WIDTH                 (4U)
#define CAN_EDCBT_DRJW(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_EDCBT_DRJW_SHIFT)) & CAN_EDCBT_DRJW_MASK)
/*! @} */

/*! @name ETDC - Enhanced Transceiver Delay Compensation */
/*! @{ */
#define CAN_ETDC_ETDCVAL_MASK                (0xFFU)
#define CAN_ETDC_ETDCVAL_SHIFT               (0U)
#define CAN_ETDC_ETDCVAL_WIDTH               (8U)
#define CAN_ETDC_ETDCVAL(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_ETDCVAL_SHIFT)) & CAN_ETDC_ETDCVAL_MASK)
#define CAN_ETDC_ETDCFAIL_MASK               (0x8000U)
#define CAN_ETDC_ETDCFAIL_SHIFT              (15U)
#define CAN_ETDC_ETDCFAIL_WIDTH              (1U)
#define CAN_ETDC_ETDCFAIL(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_ETDCFAIL_SHIFT)) & CAN_ETDC_ETDCFAIL_MASK)
#define CAN_ETDC_ETDCOFF_MASK                (0x7F0000U)
#define CAN_ETDC_ETDCOFF_SHIFT               (16U)
#define CAN_ETDC_ETDCOFF_WIDTH               (7U)
#define CAN_ETDC_ETDCOFF(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_ETDCOFF_SHIFT)) & CAN_ETDC_ETDCOFF_MASK)
#define CAN_ETDC_TDMDIS_MASK                 (0x40000000U)
#define CAN_ETDC_TDMDIS_SHIFT                (30U)
#define CAN_ETDC_TDMDIS_WIDTH                (1U)
#define CAN_ETDC_TDMDIS(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_TDMDIS_SHIFT)) & CAN_ETDC_TDMDIS_MASK)
#define CAN_ETDC_ETDCEN_MASK                 (0x80000000U)
#define CAN_ETDC_ETDCEN_SHIFT                (31U)
#define CAN_ETDC_ETDCEN_WIDTH                (1U)
#define CAN_ETDC_ETDCEN(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ETDC_ETDCEN_SHIFT)) & CAN_ETDC_ETDCEN_MASK)
/*! @} */

/*! @name FDCTRL - CAN FD Control register */
/*! @{ */
#define CAN_FDCTRL_TDCVAL_MASK               (0x3FU)
#define CAN_FDCTRL_TDCVAL_SHIFT              (0U)
#define CAN_FDCTRL_TDCVAL_WIDTH              (6U)
#define CAN_FDCTRL_TDCVAL(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCVAL_SHIFT)) & CAN_FDCTRL_TDCVAL_MASK)
#define CAN_FDCTRL_TDCOFF_MASK               (0x1F00U)
#define CAN_FDCTRL_TDCOFF_SHIFT              (8U)
#define CAN_FDCTRL_TDCOFF_WIDTH              (5U)
#define CAN_FDCTRL_TDCOFF(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCOFF_SHIFT)) & CAN_FDCTRL_TDCOFF_MASK)
#define CAN_FDCTRL_TDCFAIL_MASK              (0x4000U)
#define CAN_FDCTRL_TDCFAIL_SHIFT             (14U)
#define CAN_FDCTRL_TDCFAIL_WIDTH             (1U)
#define CAN_FDCTRL_TDCFAIL(x)                (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCFAIL_SHIFT)) & CAN_FDCTRL_TDCFAIL_MASK)
#define CAN_FDCTRL_TDCEN_MASK                (0x8000U)
#define CAN_FDCTRL_TDCEN_SHIFT               (15U)
#define CAN_FDCTRL_TDCEN_WIDTH               (1U)
#define CAN_FDCTRL_TDCEN(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_TDCEN_SHIFT)) & CAN_FDCTRL_TDCEN_MASK)
#define CAN_FDCTRL_MBDSR0_MASK               (0x30000U)
#define CAN_FDCTRL_MBDSR0_SHIFT              (16U)
#define CAN_FDCTRL_MBDSR0_WIDTH              (2U)
#define CAN_FDCTRL_MBDSR0(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_MBDSR0_SHIFT)) & CAN_FDCTRL_MBDSR0_MASK)
#define CAN_FDCTRL_MBDSR1_MASK               (0x180000U)
#define CAN_FDCTRL_MBDSR1_SHIFT              (19U)
#define CAN_FDCTRL_MBDSR1_WIDTH              (2U)
#define CAN_FDCTRL_MBDSR1(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_MBDSR1_SHIFT)) & CAN_FDCTRL_MBDSR1_MASK)
#define CAN_FDCTRL_MBDSR2_MASK               (0xC00000U)
#define CAN_FDCTRL_MBDSR2_SHIFT              (22U)
#define CAN_FDCTRL_MBDSR2_WIDTH              (2U)
#define CAN_FDCTRL_MBDSR2(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_MBDSR2_SHIFT)) & CAN_FDCTRL_MBDSR2_MASK)
#define CAN_FDCTRL_MBDSR3_MASK               (0x6000000U)
#define CAN_FDCTRL_MBDSR3_SHIFT              (25U)
#define CAN_FDCTRL_MBDSR3_WIDTH              (2U)
#define CAN_FDCTRL_MBDSR3(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_MBDSR3_SHIFT)) & CAN_FDCTRL_MBDSR3_MASK)
#define CAN_FDCTRL_FDRATE_MASK               (0x80000000U)
#define CAN_FDCTRL_FDRATE_SHIFT              (31U)
#define CAN_FDCTRL_FDRATE_WIDTH              (1U)
#define CAN_FDCTRL_FDRATE(x)                 (((uint32_t)(((uint32_t)(x)) << CAN_FDCTRL_FDRATE_SHIFT)) & CAN_FDCTRL_FDRATE_MASK)
/*! @} */

/*! @name FDCBT - CAN FD Bit Timing register */
/*! @{ */
#define CAN_FDCBT_FPSEG2_MASK                (0x7U)
#define CAN_FDCBT_FPSEG2_SHIFT               (0U)
#define CAN_FDCBT_FPSEG2_WIDTH               (3U)
#define CAN_FDCBT_FPSEG2(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPSEG2_SHIFT)) & CAN_FDCBT_FPSEG2_MASK)
#define CAN_FDCBT_FPSEG1_MASK                (0xE0U)
#define CAN_FDCBT_FPSEG1_SHIFT               (5U)
#define CAN_FDCBT_FPSEG1_WIDTH               (3U)
#define CAN_FDCBT_FPSEG1(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPSEG1_SHIFT)) & CAN_FDCBT_FPSEG1_MASK)
#define CAN_FDCBT_FPROPSEG_MASK              (0x7C00U)
#define CAN_FDCBT_FPROPSEG_SHIFT             (10U)
#define CAN_FDCBT_FPROPSEG_WIDTH             (5U)
#define CAN_FDCBT_FPROPSEG(x)                (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPROPSEG_SHIFT)) & CAN_FDCBT_FPROPSEG_MASK)
#define CAN_FDCBT_FRJW_MASK                  (0x70000U)
#define CAN_FDCBT_FRJW_SHIFT                 (16U)
#define CAN_FDCBT_FRJW_WIDTH                 (3U)
#define CAN_FDCBT_FRJW(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FRJW_SHIFT)) & CAN_FDCBT_FRJW_MASK)
#define CAN_FDCBT_FPRESDIV_MASK              (0x3FF00000U)
#define CAN_FDCBT_FPRESDIV_SHIFT             (20U)
#define CAN_FDCBT_FPRESDIV_WIDTH             (10U)
#define CAN_FDCBT_FPRESDIV(x)                (((uint32_t)(((uint32_t)(x)) << CAN_FDCBT_FPRESDIV_SHIFT)) & CAN_FDCBT_FPRESDIV_MASK)
/*! @} */

/*! @name FDCRC - CAN FD CRC register */
/*! @{ */
#define CAN_FDCRC_FD_TXCRC_MASK              (0x1FFFFFU)
#define CAN_FDCRC_FD_TXCRC_SHIFT             (0U)
#define CAN_FDCRC_FD_TXCRC_WIDTH             (21U)
#define CAN_FDCRC_FD_TXCRC(x)                (((uint32_t)(((uint32_t)(x)) << CAN_FDCRC_FD_TXCRC_SHIFT)) & CAN_FDCRC_FD_TXCRC_MASK)
#define CAN_FDCRC_FD_MBCRC_MASK              (0x7F000000U)
#define CAN_FDCRC_FD_MBCRC_SHIFT             (24U)
#define CAN_FDCRC_FD_MBCRC_WIDTH             (7U)
#define CAN_FDCRC_FD_MBCRC(x)                (((uint32_t)(((uint32_t)(x)) << CAN_FDCRC_FD_MBCRC_SHIFT)) & CAN_FDCRC_FD_MBCRC_MASK)
/*! @} */

/*! @name ERFCR - Enhanced Rx FIFO Control register */
/*! @{ */
#define CAN_ERFCR_ERFWM_MASK                 (0x1FU)
#define CAN_ERFCR_ERFWM_SHIFT                (0U)
#define CAN_ERFCR_ERFWM_WIDTH                (5U)
#define CAN_ERFCR_ERFWM(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_ERFWM_SHIFT)) & CAN_ERFCR_ERFWM_MASK)
#define CAN_ERFCR_NFE_MASK                   (0x3F00U)
#define CAN_ERFCR_NFE_SHIFT                  (8U)
#define CAN_ERFCR_NFE_WIDTH                  (6U)
#define CAN_ERFCR_NFE(x)                     (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_NFE_SHIFT)) & CAN_ERFCR_NFE_MASK)
#define CAN_ERFCR_NEXIF_MASK                 (0x7F0000U)
#define CAN_ERFCR_NEXIF_SHIFT                (16U)
#define CAN_ERFCR_NEXIF_WIDTH                (7U)
#define CAN_ERFCR_NEXIF(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_NEXIF_SHIFT)) & CAN_ERFCR_NEXIF_MASK)
#define CAN_ERFCR_DMALW_MASK                 (0x7C000000U)
#define CAN_ERFCR_DMALW_SHIFT                (26U)
#define CAN_ERFCR_DMALW_WIDTH                (5U)
#define CAN_ERFCR_DMALW(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_DMALW_SHIFT)) & CAN_ERFCR_DMALW_MASK)
#define CAN_ERFCR_ERFEN_MASK                 (0x80000000U)
#define CAN_ERFCR_ERFEN_SHIFT                (31U)
#define CAN_ERFCR_ERFEN_WIDTH                (1U)
#define CAN_ERFCR_ERFEN(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERFCR_ERFEN_SHIFT)) & CAN_ERFCR_ERFEN_MASK)
/*! @} */

/*! @name ERFIER - Enhanced Rx FIFO Interrupt Enable register */
/*! @{ */
#define CAN_ERFIER_ERFDAIE_MASK              (0x10000000U)
#define CAN_ERFIER_ERFDAIE_SHIFT             (28U)
#define CAN_ERFIER_ERFDAIE_WIDTH             (1U)
#define CAN_ERFIER_ERFDAIE(x)                (((uint32_t)(((uint32_t)(x)) << CAN_ERFIER_ERFDAIE_SHIFT)) & CAN_ERFIER_ERFDAIE_MASK)
#define CAN_ERFIER_ERFWMIIE_MASK             (0x20000000U)
#define CAN_ERFIER_ERFWMIIE_SHIFT            (29U)
#define CAN_ERFIER_ERFWMIIE_WIDTH            (1U)
#define CAN_ERFIER_ERFWMIIE(x)               (((uint32_t)(((uint32_t)(x)) << CAN_ERFIER_ERFWMIIE_SHIFT)) & CAN_ERFIER_ERFWMIIE_MASK)
#define CAN_ERFIER_ERFOVFIE_MASK             (0x40000000U)
#define CAN_ERFIER_ERFOVFIE_SHIFT            (30U)
#define CAN_ERFIER_ERFOVFIE_WIDTH            (1U)
#define CAN_ERFIER_ERFOVFIE(x)               (((uint32_t)(((uint32_t)(x)) << CAN_ERFIER_ERFOVFIE_SHIFT)) & CAN_ERFIER_ERFOVFIE_MASK)
#define CAN_ERFIER_ERFUFWIE_MASK             (0x80000000U)
#define CAN_ERFIER_ERFUFWIE_SHIFT            (31U)
#define CAN_ERFIER_ERFUFWIE_WIDTH            (1U)
#define CAN_ERFIER_ERFUFWIE(x)               (((uint32_t)(((uint32_t)(x)) << CAN_ERFIER_ERFUFWIE_SHIFT)) & CAN_ERFIER_ERFUFWIE_MASK)
/*! @} */

/*! @name ERFSR - Enhanced Rx FIFO Status register */
/*! @{ */
#define CAN_ERFSR_ERFEL_MASK                 (0x3FU)
#define CAN_ERFSR_ERFEL_SHIFT                (0U)
#define CAN_ERFSR_ERFEL_WIDTH                (6U)
#define CAN_ERFSR_ERFEL(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFEL_SHIFT)) & CAN_ERFSR_ERFEL_MASK)
#define CAN_ERFSR_ERFF_MASK                  (0x10000U)
#define CAN_ERFSR_ERFF_SHIFT                 (16U)
#define CAN_ERFSR_ERFF_WIDTH                 (1U)
#define CAN_ERFSR_ERFF(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFF_SHIFT)) & CAN_ERFSR_ERFF_MASK)
#define CAN_ERFSR_ERFE_MASK                  (0x20000U)
#define CAN_ERFSR_ERFE_SHIFT                 (17U)
#define CAN_ERFSR_ERFE_WIDTH                 (1U)
#define CAN_ERFSR_ERFE(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFE_SHIFT)) & CAN_ERFSR_ERFE_MASK)
#define CAN_ERFSR_ERFCLR_MASK                (0x8000000U)
#define CAN_ERFSR_ERFCLR_SHIFT               (27U)
#define CAN_ERFSR_ERFCLR_WIDTH               (1U)
#define CAN_ERFSR_ERFCLR(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFCLR_SHIFT)) & CAN_ERFSR_ERFCLR_MASK)
#define CAN_ERFSR_ERFDA_MASK                 (0x10000000U)
#define CAN_ERFSR_ERFDA_SHIFT                (28U)
#define CAN_ERFSR_ERFDA_WIDTH                (1U)
#define CAN_ERFSR_ERFDA(x)                   (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFDA_SHIFT)) & CAN_ERFSR_ERFDA_MASK)
#define CAN_ERFSR_ERFWMI_MASK                (0x20000000U)
#define CAN_ERFSR_ERFWMI_SHIFT               (29U)
#define CAN_ERFSR_ERFWMI_WIDTH               (1U)
#define CAN_ERFSR_ERFWMI(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFWMI_SHIFT)) & CAN_ERFSR_ERFWMI_MASK)
#define CAN_ERFSR_ERFOVF_MASK                (0x40000000U)
#define CAN_ERFSR_ERFOVF_SHIFT               (30U)
#define CAN_ERFSR_ERFOVF_WIDTH               (1U)
#define CAN_ERFSR_ERFOVF(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFOVF_SHIFT)) & CAN_ERFSR_ERFOVF_MASK)
#define CAN_ERFSR_ERFUFW_MASK                (0x80000000U)
#define CAN_ERFSR_ERFUFW_SHIFT               (31U)
#define CAN_ERFSR_ERFUFW_WIDTH               (1U)
#define CAN_ERFSR_ERFUFW(x)                  (((uint32_t)(((uint32_t)(x)) << CAN_ERFSR_ERFUFW_SHIFT)) & CAN_ERFSR_ERFUFW_MASK)
/*! @} */

/*! @name HR_TIME_STAMP - High Resolution Time Stamp */
/*! @{ */
#define CAN_HR_TIME_STAMP_TS_MASK            (0xFFFFFFFFU)
#define CAN_HR_TIME_STAMP_TS_SHIFT           (0U)
#define CAN_HR_TIME_STAMP_TS_WIDTH           (32U)
#define CAN_HR_TIME_STAMP_TS(x)              (((uint32_t)(((uint32_t)(x)) << CAN_HR_TIME_STAMP_TS_SHIFT)) & CAN_HR_TIME_STAMP_TS_MASK)
/*! @} */

/*! @name ERFFEL - Enhanced Rx FIFO Filter Element */
/*! @{ */
#define CAN_ERFFEL_FEL_MASK                  (0xFFFFFFFFU)
#define CAN_ERFFEL_FEL_SHIFT                 (0U)
#define CAN_ERFFEL_FEL_WIDTH                 (32U)
#define CAN_ERFFEL_FEL(x)                    (((uint32_t)(((uint32_t)(x)) << CAN_ERFFEL_FEL_SHIFT)) & CAN_ERFFEL_FEL_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group FLEXCAN_Register_Masks */

/*!
 * @}
 */ /* end of group FLEXCAN_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_FLEXCAN_H_) */
