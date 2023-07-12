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
**                                     2)Alternate group names are changed   
**                                     -from TI2CR0_REL_TI2CR0_ABS to TI2CR0. 
**                                     -from TI2CR1_REL_TI2CR1_ABS to TI2CR1. 
**                                     3)Register names are changed             
**                                     -from TI2CRx_ABS to ABS.              
**                                     -from TI2CRx_REL to REL.
**
** ###################################################################
*/

/*!
 * @file S32R45_FLEXRAY.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_FLEXRAY
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
#if !defined(S32R45_FLEXRAY_H_)  /* Check if memory map has not been already included */
#define S32R45_FLEXRAY_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- FLEXRAY Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FR_Peripheral_Access_Layer FLEXRAY Peripheral Access Layer
 * @{
 */

/** FLEXRAY - Size of Registers Arrays */
#define FR_NMVR_COUNT                        6u
#define FR_SSR_COUNT                         8u
#define FR_SSCR_COUNT                        4u
#define FR_MB_COUNT                          256u
#define FR_MBDOR_COUNT                       260u
#define FR_LEETR_COUNT                       6u

/** FLEXRAY - Register Layout Typedef */
typedef struct {
  __I  uint16_t MVR;                               /**< Module Version Register, offset: 0x0 */
  __IO uint16_t MCR;                               /**< Module Configuration Register, offset: 0x2 */
  __IO uint16_t SYMBADHR;                          /**< System Memory Base Address High Register, offset: 0x4 */
  __IO uint16_t SYMBADLR;                          /**< System Memory Base Address Low Register, offset: 0x6 */
  __IO uint16_t STBSCR;                            /**< Strobe Signal Control Register, offset: 0x8 */
  uint8_t RESERVED_0[2];
  __IO uint16_t MBDSR;                             /**< Message Buffer Data Size Register, offset: 0xC */
  __IO uint16_t MBSSUTR;                           /**< Message Buffer Segment Size and Utilization Register, offset: 0xE */
  __IO uint16_t PEDRAR;                            /**< PE DRAM Access Register, offset: 0x10 */
  __IO uint16_t PEDRDR;                            /**< PE DRAM Data Register, offset: 0x12 */
  __IO uint16_t POCR;                              /**< Protocol Operation Control Register, offset: 0x14 */
  __IO uint16_t GIFER;                             /**< Global Interrupt Flag and Enable Register, offset: 0x16 */
  __IO uint16_t PIFR0;                             /**< Protocol Interrupt Flag Register 0, offset: 0x18 */
  __IO uint16_t PIFR1;                             /**< Protocol Interrupt Flag Register 1, offset: 0x1A */
  __IO uint16_t PIER0;                             /**< Protocol Interrupt Enable Register 0, offset: 0x1C */
  __IO uint16_t PIER1;                             /**< Protocol Interrupt Enable Register 1, offset: 0x1E */
  __IO uint16_t CHIERFR;                           /**< CHI Error Flag Register, offset: 0x20 */
  __I  uint16_t MBIVEC;                            /**< Message Buffer Interrupt Vector Register, offset: 0x22 */
  __I  uint16_t CASERCR;                           /**< Channel A Status Error Counter Register, offset: 0x24 */
  __I  uint16_t CBSERCR;                           /**< Channel B Status Error Counter Register, offset: 0x26 */
  __I  uint16_t PSR0;                              /**< Protocol Status Register 0, offset: 0x28 */
  __IO uint16_t PSR1;                              /**< Protocol Status Register 1, offset: 0x2A */
  __I  uint16_t PSR2;                              /**< Protocol Status Register 2, offset: 0x2C */
  __IO uint16_t PSR3;                              /**< Protocol Status Register 3, offset: 0x2E */
  __I  uint16_t MTCTR;                             /**< Macrotick Counter Register, offset: 0x30 */
  __I  uint16_t CYCTR;                             /**< Cycle Counter Register, offset: 0x32 */
  __I  uint16_t SLTCTAR;                           /**< Slot Counter Channel A Register, offset: 0x34 */
  __I  uint16_t SLTCTBR;                           /**< Slot Counter Channel B Register, offset: 0x36 */
  __I  uint16_t RTCORVR;                           /**< Rate Correction Value Register, offset: 0x38 */
  __I  uint16_t OFCORVR;                           /**< Offset Correction Value Register, offset: 0x3A */
  __I  uint16_t CIFR;                              /**< Combined Interrupt Flag Register, offset: 0x3C */
  __IO uint16_t SYMATOR;                           /**< System Memory Access Time-Out Register, offset: 0x3E */
  __I  uint16_t SFCNTR;                            /**< Sync Frame Counter Register, offset: 0x40 */
  __IO uint16_t SFTOR;                             /**< Sync Frame Table Offset Register, offset: 0x42 */
  __IO uint16_t SFTCCSR;                           /**< Sync Frame Table Configuration Control Status Register, offset: 0x44 */
  __IO uint16_t SFIDRFR;                           /**< Sync Frame ID Rejection Filter Register, offset: 0x46 */
  __IO uint16_t SFIDAFVR;                          /**< Sync Frame ID Acceptance Filter Value Register, offset: 0x48 */
  __IO uint16_t SFIDAFMR;                          /**< Sync Frame ID Acceptance Filter Mask Register, offset: 0x4A */
  __I  uint16_t NMVR[FR_NMVR_COUNT];               /**< Network Management Vector Register, array offset: 0x4C, array step: 0x2 */
  __IO uint16_t NMVLR;                             /**< Network Management Vector Length Register, offset: 0x58 */
  __IO uint16_t TICCR;                             /**< Timer Configuration and Control Register, offset: 0x5A */
  __IO uint16_t TI1CYSR;                           /**< Timer 1 Cycle Set Register, offset: 0x5C */
  __IO uint16_t TI1MTOR;                           /**< Timer 1 Macrotick Offset Register, offset: 0x5E */
  union {                                          /* offset: 0x60 */
    __IO uint16_t ABS;                             /**< Timer 2 Configuration Register 0 (Absolute Timer Configuration), offset: 0x60 */
    __IO uint16_t REL;                             /**< Timer 2 Configuration Register 0 (Relative Timer Configuration), offset: 0x60 */
  } TI2CR0;
  union {                                          /* offset: 0x62 */
    __IO uint16_t ABS;                             /**< Timer 2 Configuration Register 1 (Absolute Timer Configuration), offset: 0x62 */
    __IO uint16_t REL;                             /**< Timer 2 Configuration Register 1 (Relative Timer Configuration), offset: 0x62 */
  } TI2CR1;
  __IO uint16_t SSSR;                              /**< Slot Status Selection Register, offset: 0x64 */
  __IO uint16_t SSCCR;                             /**< Slot Status Counter Condition Register, offset: 0x66 */
  __I  uint16_t SSR[FR_SSR_COUNT];                 /**< Slot Status Register, array offset: 0x68, array step: 0x2 */
  __I  uint16_t SSCR[FR_SSCR_COUNT];               /**< Slot Status Counter Register, array offset: 0x78, array step: 0x2 */
  __IO uint16_t MTSACFR;                           /**< MTS A Configuration Register, offset: 0x80 */
  __IO uint16_t MTSBCFR;                           /**< MTS B Configuration Register, offset: 0x82 */
  __IO uint16_t RSBIR;                             /**< Receive Shadow Buffer Index Register, offset: 0x84 */
  __IO uint16_t RFWMSR;                            /**< Receive FIFO Watermark and Selection Register, offset: 0x86 */
  __IO uint16_t RFSIR;                             /**< Receive FIFO Start Index Register, offset: 0x88 */
  __IO uint16_t RFDSR;                             /**< Receive FIFO Depth and Size Register, offset: 0x8A */
  __I  uint16_t RFARIR;                            /**< Receive FIFO A Read Index Register, offset: 0x8C */
  __I  uint16_t RFBRIR;                            /**< Receive FIFO B Read Index Register, offset: 0x8E */
  __IO uint16_t RFMIDAFVR;                         /**< Receive FIFO Message ID Acceptance Filter Value Register, offset: 0x90 */
  __IO uint16_t RFMIDAFMR;                         /**< Receive FIFO Message ID Acceptance Filter Mask Register, offset: 0x92 */
  __IO uint16_t RFFIDRFVR;                         /**< Receive FIFO Frame ID Rejection Filter Value Register, offset: 0x94 */
  __IO uint16_t RFFIDRFMR;                         /**< Receive FIFO Frame ID Rejection Filter Mask Register, offset: 0x96 */
  __IO uint16_t RFRFCFR;                           /**< Receive FIFO Range Filter Configuration Register, offset: 0x98 */
  __IO uint16_t RFRFCTR;                           /**< Receive FIFO Range Filter Control Register, offset: 0x9A */
  __I  uint16_t LDTXSLAR;                          /**< Last Dynamic Transmit Slot Channel A Register, offset: 0x9C */
  __I  uint16_t LDTXSLBR;                          /**< Last Dynamic Transmit Slot Channel B Register, offset: 0x9E */
  __IO uint16_t PCR0;                              /**< Protocol Configuration Register 0, offset: 0xA0 */
  __IO uint16_t PCR1;                              /**< Protocol Configuration Register 1, offset: 0xA2 */
  __IO uint16_t PCR2;                              /**< Protocol Configuration Register 2, offset: 0xA4 */
  __IO uint16_t PCR3;                              /**< Protocol Configuration Register 3, offset: 0xA6 */
  __IO uint16_t PCR4;                              /**< Protocol Configuration Register 4, offset: 0xA8 */
  __IO uint16_t PCR5;                              /**< Protocol Configuration Register 5, offset: 0xAA */
  __IO uint16_t PCR6;                              /**< Protocol Configuration Register 6, offset: 0xAC */
  __IO uint16_t PCR7;                              /**< Protocol Configuration Register 7, offset: 0xAE */
  __IO uint16_t PCR8;                              /**< Protocol Configuration Register 8, offset: 0xB0 */
  __IO uint16_t PCR9;                              /**< Protocol Configuration Register 9, offset: 0xB2 */
  __IO uint16_t PCR10;                             /**< Protocol Configuration Register 10, offset: 0xB4 */
  __IO uint16_t PCR11;                             /**< Protocol Configuration Register 11, offset: 0xB6 */
  __IO uint16_t PCR12;                             /**< Protocol Configuration Register 12, offset: 0xB8 */
  __IO uint16_t PCR13;                             /**< Protocol Configuration Register 13, offset: 0xBA */
  __IO uint16_t PCR14;                             /**< Protocol Configuration Register 14, offset: 0xBC */
  __IO uint16_t PCR15;                             /**< Protocol Configuration Register 15, offset: 0xBE */
  __IO uint16_t PCR16;                             /**< Protocol Configuration Register 16, offset: 0xC0 */
  __IO uint16_t PCR17;                             /**< Protocol Configuration Register 17, offset: 0xC2 */
  __IO uint16_t PCR18;                             /**< Protocol Configuration Register 18, offset: 0xC4 */
  __IO uint16_t PCR19;                             /**< Protocol Configuration Register 19, offset: 0xC6 */
  __IO uint16_t PCR20;                             /**< Protocol Configuration Register 20, offset: 0xC8 */
  __IO uint16_t PCR21;                             /**< Protocol Configuration Register 21, offset: 0xCA */
  __IO uint16_t PCR22;                             /**< Protocol Configuration Register 22, offset: 0xCC */
  __IO uint16_t PCR23;                             /**< Protocol Configuration Register 23, offset: 0xCE */
  __IO uint16_t PCR24;                             /**< Protocol Configuration Register 24, offset: 0xD0 */
  __IO uint16_t PCR25;                             /**< Protocol Configuration Register 25, offset: 0xD2 */
  __IO uint16_t PCR26;                             /**< Protocol Configuration Register 26, offset: 0xD4 */
  __IO uint16_t PCR27;                             /**< Protocol Configuration Register 27, offset: 0xD6 */
  __IO uint16_t PCR28;                             /**< Protocol Configuration Register 28, offset: 0xD8 */
  __IO uint16_t PCR29;                             /**< Protocol Configuration Register 29, offset: 0xDA */
  __IO uint16_t PCR30;                             /**< Protocol Configuration Register 30, offset: 0xDC */
  __I  uint16_t STPWHR;                            /**< StopWatch Count High Register, offset: 0xDE */
  __I  uint16_t STPWLR;                            /**< Stop Watch Count Low Register, offset: 0xE0 */
  __IO uint16_t PEOER;                             /**< Protocol Event Output Enable and StopWatch Control Register, offset: 0xE2 */
  uint8_t RESERVED_1[2];
  __IO uint16_t RFSDOR;                            /**< Receive FIFO Start Data Offset Register, offset: 0xE6 */
  __IO uint16_t RFSYMBADHR;                        /**< Receive FIFO System Memory Base Address High Register, offset: 0xE8 */
  __IO uint16_t RFSYMBADLR;                        /**< Receive FIFO System Memory Base Address Low Register, offset: 0xEA */
  __IO uint16_t RFPTR;                             /**< Receive FIFO Periodic Timer Register, offset: 0xEC */
  __IO uint16_t RFFLPCR;                           /**< Receive FIFO Fill Level and POP Count Register, offset: 0xEE */
  __IO uint16_t EEIFER;                            /**< ECC Error Interrupt Flag and Enable Register, offset: 0xF0 */
  __IO uint16_t EERICR;                            /**< ECC Error Report and Injection Control Register, offset: 0xF2 */
  __I  uint16_t EERAR;                             /**< ECC Error Report Address Register, offset: 0xF4 */
  __I  uint16_t EERDR;                             /**< ECC Error Report Data Register, offset: 0xF6 */
  __I  uint16_t EERCR;                             /**< ECC Error Report Code Register, offset: 0xF8 */
  __IO uint16_t EEIAR;                             /**< ECC Error Injection Address Register, offset: 0xFA */
  __IO uint16_t EEIDR;                             /**< ECC Error Injection Data Register, offset: 0xFC */
  __IO uint16_t EEICR;                             /**< ECC Error Injection Code Register, offset: 0xFE */
  uint8_t RESERVED_2[1792];
  struct {                                         /* offset: 0x800, array step: 0x8 */
    __IO uint16_t CCSR;                            /**< Message Buffer Configuration Control Status Register, array offset: 0x800, array step: 0x8 */
    __IO uint16_t CCFR;                            /**< Message Buffer Cycle Counter Filter Register, array offset: 0x802, array step: 0x8 */
    __IO uint16_t FIDR;                            /**< Message Buffer Frame ID Register, array offset: 0x804, array step: 0x8 */
    __IO uint16_t IDXR;                            /**< Message Buffer Index Register, array offset: 0x806, array step: 0x8 */
  } MB[FR_MB_COUNT];
  __IO uint16_t MBDOR[FR_MBDOR_COUNT];             /**< Message Buffer Data Field Offset Register, array offset: 0x1000, array step: 0x2 */
  uint8_t RESERVED_3[8];
  __IO uint16_t LEETR[FR_LEETR_COUNT];             /**< LRAM ECC Error Test Register, array offset: 0x1210, array step: 0x2 */
} FR_Type, *FR_MemMapPtr;

/** Number of instances of the FR module. */
#define FR_INSTANCE_COUNT                   (1u)

/* FLEXRAY - Peripheral instance base addresses */
/** Peripheral FR base address */
#define FR_BASE                                  (0x402F8000u)
/** Peripheral FR base pointer */
#define FR_FLEXRAY                               ((FR_Type *)FR_BASE)
/** Array initializer of FLEXRAY peripheral base addresses */
#define FR_BASE_ADDRS                            { FR_BASE }
/** Array initializer of FLEXRAY peripheral base pointers */
#define FR_BASE_PTRS                             { FR_FLEXRAY }

/* ----------------------------------------------------------------------------
   -- FLEXRAY Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup FR_Register_Masks FLEXRAY Register Masks
 * @{
 */

/*! @name MVR - Module Version Register */
/*! @{ */
#define FR_MVR_PEVER_MASK                   (0xFFU)
#define FR_MVR_PEVER_SHIFT                  (0U)
#define FR_MVR_PEVER_WIDTH                  (8U)
#define FR_MVR_PEVER(x)                     (((uint16_t)(((uint16_t)(x)) << FR_MVR_PEVER_SHIFT)) & FR_MVR_PEVER_MASK)
#define FR_MVR_CHIVER_MASK                  (0xFF00U)
#define FR_MVR_CHIVER_SHIFT                 (8U)
#define FR_MVR_CHIVER_WIDTH                 (8U)
#define FR_MVR_CHIVER(x)                    (((uint16_t)(((uint16_t)(x)) << FR_MVR_CHIVER_SHIFT)) & FR_MVR_CHIVER_MASK)
/*! @} */

/*! @name MCR - Module Configuration Register */
/*! @{ */
#define FR_MCR_BITRATE_MASK                 (0xEU)
#define FR_MCR_BITRATE_SHIFT                (1U)
#define FR_MCR_BITRATE_WIDTH                (3U)
#define FR_MCR_BITRATE(x)                   (((uint16_t)(((uint16_t)(x)) << FR_MCR_BITRATE_SHIFT)) & FR_MCR_BITRATE_MASK)
#define FR_MCR_FAM_MASK                     (0x40U)
#define FR_MCR_FAM_SHIFT                    (6U)
#define FR_MCR_FAM_WIDTH                    (1U)
#define FR_MCR_FAM(x)                       (((uint16_t)(((uint16_t)(x)) << FR_MCR_FAM_SHIFT)) & FR_MCR_FAM_MASK)
#define FR_MCR_FUM_MASK                     (0x80U)
#define FR_MCR_FUM_SHIFT                    (7U)
#define FR_MCR_FUM_WIDTH                    (1U)
#define FR_MCR_FUM(x)                       (((uint16_t)(((uint16_t)(x)) << FR_MCR_FUM_SHIFT)) & FR_MCR_FUM_MASK)
#define FR_MCR_ECCE_MASK                    (0x200U)
#define FR_MCR_ECCE_SHIFT                   (9U)
#define FR_MCR_ECCE_WIDTH                   (1U)
#define FR_MCR_ECCE(x)                      (((uint16_t)(((uint16_t)(x)) << FR_MCR_ECCE_SHIFT)) & FR_MCR_ECCE_MASK)
#define FR_MCR_SFFE_MASK                    (0x400U)
#define FR_MCR_SFFE_SHIFT                   (10U)
#define FR_MCR_SFFE_WIDTH                   (1U)
#define FR_MCR_SFFE(x)                      (((uint16_t)(((uint16_t)(x)) << FR_MCR_SFFE_SHIFT)) & FR_MCR_SFFE_MASK)
#define FR_MCR_CHA_MASK                     (0x800U)
#define FR_MCR_CHA_SHIFT                    (11U)
#define FR_MCR_CHA_WIDTH                    (1U)
#define FR_MCR_CHA(x)                       (((uint16_t)(((uint16_t)(x)) << FR_MCR_CHA_SHIFT)) & FR_MCR_CHA_MASK)
#define FR_MCR_CHB_MASK                     (0x1000U)
#define FR_MCR_CHB_SHIFT                    (12U)
#define FR_MCR_CHB_WIDTH                    (1U)
#define FR_MCR_CHB(x)                       (((uint16_t)(((uint16_t)(x)) << FR_MCR_CHB_SHIFT)) & FR_MCR_CHB_MASK)
#define FR_MCR_SCM_MASK                     (0x2000U)
#define FR_MCR_SCM_SHIFT                    (13U)
#define FR_MCR_SCM_WIDTH                    (1U)
#define FR_MCR_SCM(x)                       (((uint16_t)(((uint16_t)(x)) << FR_MCR_SCM_SHIFT)) & FR_MCR_SCM_MASK)
#define FR_MCR_SBFF_MASK                    (0x4000U)
#define FR_MCR_SBFF_SHIFT                   (14U)
#define FR_MCR_SBFF_WIDTH                   (1U)
#define FR_MCR_SBFF(x)                      (((uint16_t)(((uint16_t)(x)) << FR_MCR_SBFF_SHIFT)) & FR_MCR_SBFF_MASK)
#define FR_MCR_MEN_MASK                     (0x8000U)
#define FR_MCR_MEN_SHIFT                    (15U)
#define FR_MCR_MEN_WIDTH                    (1U)
#define FR_MCR_MEN(x)                       (((uint16_t)(((uint16_t)(x)) << FR_MCR_MEN_SHIFT)) & FR_MCR_MEN_MASK)
/*! @} */

/*! @name SYMBADHR - System Memory Base Address High Register */
/*! @{ */
#define FR_SYMBADHR_SMBA_MASK               (0xFFFFU)
#define FR_SYMBADHR_SMBA_SHIFT              (0U)
#define FR_SYMBADHR_SMBA_WIDTH              (16U)
#define FR_SYMBADHR_SMBA(x)                 (((uint16_t)(((uint16_t)(x)) << FR_SYMBADHR_SMBA_SHIFT)) & FR_SYMBADHR_SMBA_MASK)
/*! @} */

/*! @name SYMBADLR - System Memory Base Address Low Register */
/*! @{ */
#define FR_SYMBADLR_SMBA_MASK               (0xFFF0U)
#define FR_SYMBADLR_SMBA_SHIFT              (4U)
#define FR_SYMBADLR_SMBA_WIDTH              (12U)
#define FR_SYMBADLR_SMBA(x)                 (((uint16_t)(((uint16_t)(x)) << FR_SYMBADLR_SMBA_SHIFT)) & FR_SYMBADLR_SMBA_MASK)
/*! @} */

/*! @name STBSCR - Strobe Signal Control Register */
/*! @{ */
#define FR_STBSCR_STBPSEL_MASK              (0x3U)
#define FR_STBSCR_STBPSEL_SHIFT             (0U)
#define FR_STBSCR_STBPSEL_WIDTH             (2U)
#define FR_STBSCR_STBPSEL(x)                (((uint16_t)(((uint16_t)(x)) << FR_STBSCR_STBPSEL_SHIFT)) & FR_STBSCR_STBPSEL_MASK)
#define FR_STBSCR_ENB_MASK                  (0x10U)
#define FR_STBSCR_ENB_SHIFT                 (4U)
#define FR_STBSCR_ENB_WIDTH                 (1U)
#define FR_STBSCR_ENB(x)                    (((uint16_t)(((uint16_t)(x)) << FR_STBSCR_ENB_SHIFT)) & FR_STBSCR_ENB_MASK)
#define FR_STBSCR_SEL_MASK                  (0xF00U)
#define FR_STBSCR_SEL_SHIFT                 (8U)
#define FR_STBSCR_SEL_WIDTH                 (4U)
#define FR_STBSCR_SEL(x)                    (((uint16_t)(((uint16_t)(x)) << FR_STBSCR_SEL_SHIFT)) & FR_STBSCR_SEL_MASK)
#define FR_STBSCR_WMD_MASK                  (0x8000U)
#define FR_STBSCR_WMD_SHIFT                 (15U)
#define FR_STBSCR_WMD_WIDTH                 (1U)
#define FR_STBSCR_WMD(x)                    (((uint16_t)(((uint16_t)(x)) << FR_STBSCR_WMD_SHIFT)) & FR_STBSCR_WMD_MASK)
/*! @} */

/*! @name MBDSR - Message Buffer Data Size Register */
/*! @{ */
#define FR_MBDSR_MBSEG1DS_MASK              (0x7FU)
#define FR_MBDSR_MBSEG1DS_SHIFT             (0U)
#define FR_MBDSR_MBSEG1DS_WIDTH             (7U)
#define FR_MBDSR_MBSEG1DS(x)                (((uint16_t)(((uint16_t)(x)) << FR_MBDSR_MBSEG1DS_SHIFT)) & FR_MBDSR_MBSEG1DS_MASK)
#define FR_MBDSR_MBSEG2DS_MASK              (0x7F00U)
#define FR_MBDSR_MBSEG2DS_SHIFT             (8U)
#define FR_MBDSR_MBSEG2DS_WIDTH             (7U)
#define FR_MBDSR_MBSEG2DS(x)                (((uint16_t)(((uint16_t)(x)) << FR_MBDSR_MBSEG2DS_SHIFT)) & FR_MBDSR_MBSEG2DS_MASK)
/*! @} */

/*! @name MBSSUTR - Message Buffer Segment Size and Utilization Register */
/*! @{ */
#define FR_MBSSUTR_LAST_MB_UTIL_MASK        (0xFFU)
#define FR_MBSSUTR_LAST_MB_UTIL_SHIFT       (0U)
#define FR_MBSSUTR_LAST_MB_UTIL_WIDTH       (8U)
#define FR_MBSSUTR_LAST_MB_UTIL(x)          (((uint16_t)(((uint16_t)(x)) << FR_MBSSUTR_LAST_MB_UTIL_SHIFT)) & FR_MBSSUTR_LAST_MB_UTIL_MASK)
#define FR_MBSSUTR_LAST_MB_SEG1_MASK        (0xFF00U)
#define FR_MBSSUTR_LAST_MB_SEG1_SHIFT       (8U)
#define FR_MBSSUTR_LAST_MB_SEG1_WIDTH       (8U)
#define FR_MBSSUTR_LAST_MB_SEG1(x)          (((uint16_t)(((uint16_t)(x)) << FR_MBSSUTR_LAST_MB_SEG1_SHIFT)) & FR_MBSSUTR_LAST_MB_SEG1_MASK)
/*! @} */

/*! @name PEDRAR - PE DRAM Access Register */
/*! @{ */
#define FR_PEDRAR_DAD_MASK                  (0x1U)
#define FR_PEDRAR_DAD_SHIFT                 (0U)
#define FR_PEDRAR_DAD_WIDTH                 (1U)
#define FR_PEDRAR_DAD(x)                    (((uint16_t)(((uint16_t)(x)) << FR_PEDRAR_DAD_SHIFT)) & FR_PEDRAR_DAD_MASK)
#define FR_PEDRAR_ADDR_MASK                 (0xFFEU)
#define FR_PEDRAR_ADDR_SHIFT                (1U)
#define FR_PEDRAR_ADDR_WIDTH                (11U)
#define FR_PEDRAR_ADDR(x)                   (((uint16_t)(((uint16_t)(x)) << FR_PEDRAR_ADDR_SHIFT)) & FR_PEDRAR_ADDR_MASK)
#define FR_PEDRAR_INST_MASK                 (0xF000U)
#define FR_PEDRAR_INST_SHIFT                (12U)
#define FR_PEDRAR_INST_WIDTH                (4U)
#define FR_PEDRAR_INST(x)                   (((uint16_t)(((uint16_t)(x)) << FR_PEDRAR_INST_SHIFT)) & FR_PEDRAR_INST_MASK)
/*! @} */

/*! @name PEDRDR - PE DRAM Data Register */
/*! @{ */
#define FR_PEDRDR_DATA_MASK                 (0xFFFFU)
#define FR_PEDRDR_DATA_SHIFT                (0U)
#define FR_PEDRDR_DATA_WIDTH                (16U)
#define FR_PEDRDR_DATA(x)                   (((uint16_t)(((uint16_t)(x)) << FR_PEDRDR_DATA_SHIFT)) & FR_PEDRDR_DATA_MASK)
/*! @} */

/*! @name POCR - Protocol Operation Control Register */
/*! @{ */
#define FR_POCR_POCCMD_MASK                 (0xFU)
#define FR_POCR_POCCMD_SHIFT                (0U)
#define FR_POCR_POCCMD_WIDTH                (4U)
#define FR_POCR_POCCMD(x)                   (((uint16_t)(((uint16_t)(x)) << FR_POCR_POCCMD_SHIFT)) & FR_POCR_POCCMD_MASK)
#define FR_POCR_BSY_WMC_MASK                (0x80U)
#define FR_POCR_BSY_WMC_SHIFT               (7U)
#define FR_POCR_BSY_WMC_WIDTH               (1U)
#define FR_POCR_BSY_WMC(x)                  (((uint16_t)(((uint16_t)(x)) << FR_POCR_BSY_WMC_SHIFT)) & FR_POCR_BSY_WMC_MASK)
#define FR_POCR_ERC_AP_MASK                 (0x300U)
#define FR_POCR_ERC_AP_SHIFT                (8U)
#define FR_POCR_ERC_AP_WIDTH                (2U)
#define FR_POCR_ERC_AP(x)                   (((uint16_t)(((uint16_t)(x)) << FR_POCR_ERC_AP_SHIFT)) & FR_POCR_ERC_AP_MASK)
#define FR_POCR_EOC_AP_MASK                 (0xC00U)
#define FR_POCR_EOC_AP_SHIFT                (10U)
#define FR_POCR_EOC_AP_WIDTH                (2U)
#define FR_POCR_EOC_AP(x)                   (((uint16_t)(((uint16_t)(x)) << FR_POCR_EOC_AP_SHIFT)) & FR_POCR_EOC_AP_MASK)
#define FR_POCR_WME_MASK                    (0x8000U)
#define FR_POCR_WME_SHIFT                   (15U)
#define FR_POCR_WME_WIDTH                   (1U)
#define FR_POCR_WME(x)                      (((uint16_t)(((uint16_t)(x)) << FR_POCR_WME_SHIFT)) & FR_POCR_WME_MASK)
/*! @} */

/*! @name GIFER - Global Interrupt Flag and Enable Register */
/*! @{ */
#define FR_GIFER_TBIE_MASK                  (0x1U)
#define FR_GIFER_TBIE_SHIFT                 (0U)
#define FR_GIFER_TBIE_WIDTH                 (1U)
#define FR_GIFER_TBIE(x)                    (((uint16_t)(((uint16_t)(x)) << FR_GIFER_TBIE_SHIFT)) & FR_GIFER_TBIE_MASK)
#define FR_GIFER_RBIE_MASK                  (0x2U)
#define FR_GIFER_RBIE_SHIFT                 (1U)
#define FR_GIFER_RBIE_WIDTH                 (1U)
#define FR_GIFER_RBIE(x)                    (((uint16_t)(((uint16_t)(x)) << FR_GIFER_RBIE_SHIFT)) & FR_GIFER_RBIE_MASK)
#define FR_GIFER_FAFAIE_MASK                (0x4U)
#define FR_GIFER_FAFAIE_SHIFT               (2U)
#define FR_GIFER_FAFAIE_WIDTH               (1U)
#define FR_GIFER_FAFAIE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_GIFER_FAFAIE_SHIFT)) & FR_GIFER_FAFAIE_MASK)
#define FR_GIFER_FAFBIE_MASK                (0x8U)
#define FR_GIFER_FAFBIE_SHIFT               (3U)
#define FR_GIFER_FAFBIE_WIDTH               (1U)
#define FR_GIFER_FAFBIE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_GIFER_FAFBIE_SHIFT)) & FR_GIFER_FAFBIE_MASK)
#define FR_GIFER_WUPIE_MASK                 (0x10U)
#define FR_GIFER_WUPIE_SHIFT                (4U)
#define FR_GIFER_WUPIE_WIDTH                (1U)
#define FR_GIFER_WUPIE(x)                   (((uint16_t)(((uint16_t)(x)) << FR_GIFER_WUPIE_SHIFT)) & FR_GIFER_WUPIE_MASK)
#define FR_GIFER_CHIE_MASK                  (0x20U)
#define FR_GIFER_CHIE_SHIFT                 (5U)
#define FR_GIFER_CHIE_WIDTH                 (1U)
#define FR_GIFER_CHIE(x)                    (((uint16_t)(((uint16_t)(x)) << FR_GIFER_CHIE_SHIFT)) & FR_GIFER_CHIE_MASK)
#define FR_GIFER_PRIE_MASK                  (0x40U)
#define FR_GIFER_PRIE_SHIFT                 (6U)
#define FR_GIFER_PRIE_WIDTH                 (1U)
#define FR_GIFER_PRIE(x)                    (((uint16_t)(((uint16_t)(x)) << FR_GIFER_PRIE_SHIFT)) & FR_GIFER_PRIE_MASK)
#define FR_GIFER_MIE_MASK                   (0x80U)
#define FR_GIFER_MIE_SHIFT                  (7U)
#define FR_GIFER_MIE_WIDTH                  (1U)
#define FR_GIFER_MIE(x)                     (((uint16_t)(((uint16_t)(x)) << FR_GIFER_MIE_SHIFT)) & FR_GIFER_MIE_MASK)
#define FR_GIFER_TBIF_MASK                  (0x100U)
#define FR_GIFER_TBIF_SHIFT                 (8U)
#define FR_GIFER_TBIF_WIDTH                 (1U)
#define FR_GIFER_TBIF(x)                    (((uint16_t)(((uint16_t)(x)) << FR_GIFER_TBIF_SHIFT)) & FR_GIFER_TBIF_MASK)
#define FR_GIFER_RBIF_MASK                  (0x200U)
#define FR_GIFER_RBIF_SHIFT                 (9U)
#define FR_GIFER_RBIF_WIDTH                 (1U)
#define FR_GIFER_RBIF(x)                    (((uint16_t)(((uint16_t)(x)) << FR_GIFER_RBIF_SHIFT)) & FR_GIFER_RBIF_MASK)
#define FR_GIFER_FAFAIF_MASK                (0x400U)
#define FR_GIFER_FAFAIF_SHIFT               (10U)
#define FR_GIFER_FAFAIF_WIDTH               (1U)
#define FR_GIFER_FAFAIF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_GIFER_FAFAIF_SHIFT)) & FR_GIFER_FAFAIF_MASK)
#define FR_GIFER_FAFBIF_MASK                (0x800U)
#define FR_GIFER_FAFBIF_SHIFT               (11U)
#define FR_GIFER_FAFBIF_WIDTH               (1U)
#define FR_GIFER_FAFBIF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_GIFER_FAFBIF_SHIFT)) & FR_GIFER_FAFBIF_MASK)
#define FR_GIFER_WUPIF_MASK                 (0x1000U)
#define FR_GIFER_WUPIF_SHIFT                (12U)
#define FR_GIFER_WUPIF_WIDTH                (1U)
#define FR_GIFER_WUPIF(x)                   (((uint16_t)(((uint16_t)(x)) << FR_GIFER_WUPIF_SHIFT)) & FR_GIFER_WUPIF_MASK)
#define FR_GIFER_CHIF_MASK                  (0x2000U)
#define FR_GIFER_CHIF_SHIFT                 (13U)
#define FR_GIFER_CHIF_WIDTH                 (1U)
#define FR_GIFER_CHIF(x)                    (((uint16_t)(((uint16_t)(x)) << FR_GIFER_CHIF_SHIFT)) & FR_GIFER_CHIF_MASK)
#define FR_GIFER_PRIF_MASK                  (0x4000U)
#define FR_GIFER_PRIF_SHIFT                 (14U)
#define FR_GIFER_PRIF_WIDTH                 (1U)
#define FR_GIFER_PRIF(x)                    (((uint16_t)(((uint16_t)(x)) << FR_GIFER_PRIF_SHIFT)) & FR_GIFER_PRIF_MASK)
#define FR_GIFER_MIF_MASK                   (0x8000U)
#define FR_GIFER_MIF_SHIFT                  (15U)
#define FR_GIFER_MIF_WIDTH                  (1U)
#define FR_GIFER_MIF(x)                     (((uint16_t)(((uint16_t)(x)) << FR_GIFER_MIF_SHIFT)) & FR_GIFER_MIF_MASK)
/*! @} */

/*! @name PIFR0 - Protocol Interrupt Flag Register 0 */
/*! @{ */
#define FR_PIFR0_CYS_IF_MASK                (0x1U)
#define FR_PIFR0_CYS_IF_SHIFT               (0U)
#define FR_PIFR0_CYS_IF_WIDTH               (1U)
#define FR_PIFR0_CYS_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_CYS_IF_SHIFT)) & FR_PIFR0_CYS_IF_MASK)
#define FR_PIFR0_TI1_IF_MASK                (0x2U)
#define FR_PIFR0_TI1_IF_SHIFT               (1U)
#define FR_PIFR0_TI1_IF_WIDTH               (1U)
#define FR_PIFR0_TI1_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_TI1_IF_SHIFT)) & FR_PIFR0_TI1_IF_MASK)
#define FR_PIFR0_TI2_IF_MASK                (0x4U)
#define FR_PIFR0_TI2_IF_SHIFT               (2U)
#define FR_PIFR0_TI2_IF_WIDTH               (1U)
#define FR_PIFR0_TI2_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_TI2_IF_SHIFT)) & FR_PIFR0_TI2_IF_MASK)
#define FR_PIFR0_TBVA_IF_MASK               (0x8U)
#define FR_PIFR0_TBVA_IF_SHIFT              (3U)
#define FR_PIFR0_TBVA_IF_WIDTH              (1U)
#define FR_PIFR0_TBVA_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_TBVA_IF_SHIFT)) & FR_PIFR0_TBVA_IF_MASK)
#define FR_PIFR0_TBVB_IF_MASK               (0x10U)
#define FR_PIFR0_TBVB_IF_SHIFT              (4U)
#define FR_PIFR0_TBVB_IF_WIDTH              (1U)
#define FR_PIFR0_TBVB_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_TBVB_IF_SHIFT)) & FR_PIFR0_TBVB_IF_MASK)
#define FR_PIFR0_LTXA_IF_MASK               (0x20U)
#define FR_PIFR0_LTXA_IF_SHIFT              (5U)
#define FR_PIFR0_LTXA_IF_WIDTH              (1U)
#define FR_PIFR0_LTXA_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_LTXA_IF_SHIFT)) & FR_PIFR0_LTXA_IF_MASK)
#define FR_PIFR0_LTXB_IF_MASK               (0x40U)
#define FR_PIFR0_LTXB_IF_SHIFT              (6U)
#define FR_PIFR0_LTXB_IF_WIDTH              (1U)
#define FR_PIFR0_LTXB_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_LTXB_IF_SHIFT)) & FR_PIFR0_LTXB_IF_MASK)
#define FR_PIFR0_MTX_IF_MASK                (0x80U)
#define FR_PIFR0_MTX_IF_SHIFT               (7U)
#define FR_PIFR0_MTX_IF_WIDTH               (1U)
#define FR_PIFR0_MTX_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_MTX_IF_SHIFT)) & FR_PIFR0_MTX_IF_MASK)
#define FR_PIFR0_MXS_IF_MASK                (0x100U)
#define FR_PIFR0_MXS_IF_SHIFT               (8U)
#define FR_PIFR0_MXS_IF_WIDTH               (1U)
#define FR_PIFR0_MXS_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_MXS_IF_SHIFT)) & FR_PIFR0_MXS_IF_MASK)
#define FR_PIFR0_CCL_IF_MASK                (0x200U)
#define FR_PIFR0_CCL_IF_SHIFT               (9U)
#define FR_PIFR0_CCL_IF_WIDTH               (1U)
#define FR_PIFR0_CCL_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_CCL_IF_SHIFT)) & FR_PIFR0_CCL_IF_MASK)
#define FR_PIFR0_MOC_IF_MASK                (0x400U)
#define FR_PIFR0_MOC_IF_SHIFT               (10U)
#define FR_PIFR0_MOC_IF_WIDTH               (1U)
#define FR_PIFR0_MOC_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_MOC_IF_SHIFT)) & FR_PIFR0_MOC_IF_MASK)
#define FR_PIFR0_MRC_IF_MASK                (0x800U)
#define FR_PIFR0_MRC_IF_SHIFT               (11U)
#define FR_PIFR0_MRC_IF_WIDTH               (1U)
#define FR_PIFR0_MRC_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_MRC_IF_SHIFT)) & FR_PIFR0_MRC_IF_MASK)
#define FR_PIFR0_CSA_IF_MASK                (0x1000U)
#define FR_PIFR0_CSA_IF_SHIFT               (12U)
#define FR_PIFR0_CSA_IF_WIDTH               (1U)
#define FR_PIFR0_CSA_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_CSA_IF_SHIFT)) & FR_PIFR0_CSA_IF_MASK)
#define FR_PIFR0_ILCF_IF_MASK               (0x2000U)
#define FR_PIFR0_ILCF_IF_SHIFT              (13U)
#define FR_PIFR0_ILCF_IF_WIDTH              (1U)
#define FR_PIFR0_ILCF_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_ILCF_IF_SHIFT)) & FR_PIFR0_ILCF_IF_MASK)
#define FR_PIFR0_INTL_IF_MASK               (0x4000U)
#define FR_PIFR0_INTL_IF_SHIFT              (14U)
#define FR_PIFR0_INTL_IF_WIDTH              (1U)
#define FR_PIFR0_INTL_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_INTL_IF_SHIFT)) & FR_PIFR0_INTL_IF_MASK)
#define FR_PIFR0_FATL_IF_MASK               (0x8000U)
#define FR_PIFR0_FATL_IF_SHIFT              (15U)
#define FR_PIFR0_FATL_IF_WIDTH              (1U)
#define FR_PIFR0_FATL_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR0_FATL_IF_SHIFT)) & FR_PIFR0_FATL_IF_MASK)
/*! @} */

/*! @name PIFR1 - Protocol Interrupt Flag Register 1 */
/*! @{ */
#define FR_PIFR1_ODT_IF_MASK                (0x10U)
#define FR_PIFR1_ODT_IF_SHIFT               (4U)
#define FR_PIFR1_ODT_IF_WIDTH               (1U)
#define FR_PIFR1_ODT_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_ODT_IF_SHIFT)) & FR_PIFR1_ODT_IF_MASK)
#define FR_PIFR1_EVT_IF_MASK                (0x20U)
#define FR_PIFR1_EVT_IF_SHIFT               (5U)
#define FR_PIFR1_EVT_IF_WIDTH               (1U)
#define FR_PIFR1_EVT_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_EVT_IF_SHIFT)) & FR_PIFR1_EVT_IF_MASK)
#define FR_PIFR1_SSI0_IF_MASK               (0x100U)
#define FR_PIFR1_SSI0_IF_SHIFT              (8U)
#define FR_PIFR1_SSI0_IF_WIDTH              (1U)
#define FR_PIFR1_SSI0_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_SSI0_IF_SHIFT)) & FR_PIFR1_SSI0_IF_MASK)
#define FR_PIFR1_SSI1_IF_MASK               (0x200U)
#define FR_PIFR1_SSI1_IF_SHIFT              (9U)
#define FR_PIFR1_SSI1_IF_WIDTH              (1U)
#define FR_PIFR1_SSI1_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_SSI1_IF_SHIFT)) & FR_PIFR1_SSI1_IF_MASK)
#define FR_PIFR1_SSI2_IF_MASK               (0x400U)
#define FR_PIFR1_SSI2_IF_SHIFT              (10U)
#define FR_PIFR1_SSI2_IF_WIDTH              (1U)
#define FR_PIFR1_SSI2_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_SSI2_IF_SHIFT)) & FR_PIFR1_SSI2_IF_MASK)
#define FR_PIFR1_SSI3_IF_MASK               (0x800U)
#define FR_PIFR1_SSI3_IF_SHIFT              (11U)
#define FR_PIFR1_SSI3_IF_WIDTH              (1U)
#define FR_PIFR1_SSI3_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_SSI3_IF_SHIFT)) & FR_PIFR1_SSI3_IF_MASK)
#define FR_PIFR1_PSC_IF_MASK                (0x1000U)
#define FR_PIFR1_PSC_IF_SHIFT               (12U)
#define FR_PIFR1_PSC_IF_WIDTH               (1U)
#define FR_PIFR1_PSC_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_PSC_IF_SHIFT)) & FR_PIFR1_PSC_IF_MASK)
#define FR_PIFR1_PECF_IF_MASK               (0x2000U)
#define FR_PIFR1_PECF_IF_SHIFT              (13U)
#define FR_PIFR1_PECF_IF_WIDTH              (1U)
#define FR_PIFR1_PECF_IF(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_PECF_IF_SHIFT)) & FR_PIFR1_PECF_IF_MASK)
#define FR_PIFR1_IPC_IF_MASK                (0x4000U)
#define FR_PIFR1_IPC_IF_SHIFT               (14U)
#define FR_PIFR1_IPC_IF_WIDTH               (1U)
#define FR_PIFR1_IPC_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_IPC_IF_SHIFT)) & FR_PIFR1_IPC_IF_MASK)
#define FR_PIFR1_EMC_IF_MASK                (0x8000U)
#define FR_PIFR1_EMC_IF_SHIFT               (15U)
#define FR_PIFR1_EMC_IF_WIDTH               (1U)
#define FR_PIFR1_EMC_IF(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIFR1_EMC_IF_SHIFT)) & FR_PIFR1_EMC_IF_MASK)
/*! @} */

/*! @name PIER0 - Protocol Interrupt Enable Register 0 */
/*! @{ */
#define FR_PIER0_CYS_IE_MASK                (0x1U)
#define FR_PIER0_CYS_IE_SHIFT               (0U)
#define FR_PIER0_CYS_IE_WIDTH               (1U)
#define FR_PIER0_CYS_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER0_CYS_IE_SHIFT)) & FR_PIER0_CYS_IE_MASK)
#define FR_PIER0_TI1_IE_MASK                (0x2U)
#define FR_PIER0_TI1_IE_SHIFT               (1U)
#define FR_PIER0_TI1_IE_WIDTH               (1U)
#define FR_PIER0_TI1_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER0_TI1_IE_SHIFT)) & FR_PIER0_TI1_IE_MASK)
#define FR_PIER0_TI2_IE_MASK                (0x4U)
#define FR_PIER0_TI2_IE_SHIFT               (2U)
#define FR_PIER0_TI2_IE_WIDTH               (1U)
#define FR_PIER0_TI2_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER0_TI2_IE_SHIFT)) & FR_PIER0_TI2_IE_MASK)
#define FR_PIER0_TBVA_IE_MASK               (0x8U)
#define FR_PIER0_TBVA_IE_SHIFT              (3U)
#define FR_PIER0_TBVA_IE_WIDTH              (1U)
#define FR_PIER0_TBVA_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER0_TBVA_IE_SHIFT)) & FR_PIER0_TBVA_IE_MASK)
#define FR_PIER0_TBVB_IE_MASK               (0x10U)
#define FR_PIER0_TBVB_IE_SHIFT              (4U)
#define FR_PIER0_TBVB_IE_WIDTH              (1U)
#define FR_PIER0_TBVB_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER0_TBVB_IE_SHIFT)) & FR_PIER0_TBVB_IE_MASK)
#define FR_PIER0_LTXA_IE_MASK               (0x20U)
#define FR_PIER0_LTXA_IE_SHIFT              (5U)
#define FR_PIER0_LTXA_IE_WIDTH              (1U)
#define FR_PIER0_LTXA_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER0_LTXA_IE_SHIFT)) & FR_PIER0_LTXA_IE_MASK)
#define FR_PIER0_LTXB_IE_MASK               (0x40U)
#define FR_PIER0_LTXB_IE_SHIFT              (6U)
#define FR_PIER0_LTXB_IE_WIDTH              (1U)
#define FR_PIER0_LTXB_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER0_LTXB_IE_SHIFT)) & FR_PIER0_LTXB_IE_MASK)
#define FR_PIER0_MTX_IE_MASK                (0x80U)
#define FR_PIER0_MTX_IE_SHIFT               (7U)
#define FR_PIER0_MTX_IE_WIDTH               (1U)
#define FR_PIER0_MTX_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER0_MTX_IE_SHIFT)) & FR_PIER0_MTX_IE_MASK)
#define FR_PIER0_MXS_IE_MASK                (0x100U)
#define FR_PIER0_MXS_IE_SHIFT               (8U)
#define FR_PIER0_MXS_IE_WIDTH               (1U)
#define FR_PIER0_MXS_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER0_MXS_IE_SHIFT)) & FR_PIER0_MXS_IE_MASK)
#define FR_PIER0_CCL_IE_MASK                (0x200U)
#define FR_PIER0_CCL_IE_SHIFT               (9U)
#define FR_PIER0_CCL_IE_WIDTH               (1U)
#define FR_PIER0_CCL_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER0_CCL_IE_SHIFT)) & FR_PIER0_CCL_IE_MASK)
#define FR_PIER0_MOC_IE_MASK                (0x400U)
#define FR_PIER0_MOC_IE_SHIFT               (10U)
#define FR_PIER0_MOC_IE_WIDTH               (1U)
#define FR_PIER0_MOC_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER0_MOC_IE_SHIFT)) & FR_PIER0_MOC_IE_MASK)
#define FR_PIER0_MRC_IE_MASK                (0x800U)
#define FR_PIER0_MRC_IE_SHIFT               (11U)
#define FR_PIER0_MRC_IE_WIDTH               (1U)
#define FR_PIER0_MRC_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER0_MRC_IE_SHIFT)) & FR_PIER0_MRC_IE_MASK)
#define FR_PIER0_CSA_IE_MASK                (0x1000U)
#define FR_PIER0_CSA_IE_SHIFT               (12U)
#define FR_PIER0_CSA_IE_WIDTH               (1U)
#define FR_PIER0_CSA_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER0_CSA_IE_SHIFT)) & FR_PIER0_CSA_IE_MASK)
#define FR_PIER0_ILCF_IE_MASK               (0x2000U)
#define FR_PIER0_ILCF_IE_SHIFT              (13U)
#define FR_PIER0_ILCF_IE_WIDTH              (1U)
#define FR_PIER0_ILCF_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER0_ILCF_IE_SHIFT)) & FR_PIER0_ILCF_IE_MASK)
#define FR_PIER0_INTL_IE_MASK               (0x4000U)
#define FR_PIER0_INTL_IE_SHIFT              (14U)
#define FR_PIER0_INTL_IE_WIDTH              (1U)
#define FR_PIER0_INTL_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER0_INTL_IE_SHIFT)) & FR_PIER0_INTL_IE_MASK)
#define FR_PIER0_FATL_IE_MASK               (0x8000U)
#define FR_PIER0_FATL_IE_SHIFT              (15U)
#define FR_PIER0_FATL_IE_WIDTH              (1U)
#define FR_PIER0_FATL_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER0_FATL_IE_SHIFT)) & FR_PIER0_FATL_IE_MASK)
/*! @} */

/*! @name PIER1 - Protocol Interrupt Enable Register 1 */
/*! @{ */
#define FR_PIER1_ODT_IE_MASK                (0x10U)
#define FR_PIER1_ODT_IE_SHIFT               (4U)
#define FR_PIER1_ODT_IE_WIDTH               (1U)
#define FR_PIER1_ODT_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER1_ODT_IE_SHIFT)) & FR_PIER1_ODT_IE_MASK)
#define FR_PIER1_EVT_IE_MASK                (0x20U)
#define FR_PIER1_EVT_IE_SHIFT               (5U)
#define FR_PIER1_EVT_IE_WIDTH               (1U)
#define FR_PIER1_EVT_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER1_EVT_IE_SHIFT)) & FR_PIER1_EVT_IE_MASK)
#define FR_PIER1_SSI0_IE_MASK               (0x100U)
#define FR_PIER1_SSI0_IE_SHIFT              (8U)
#define FR_PIER1_SSI0_IE_WIDTH              (1U)
#define FR_PIER1_SSI0_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER1_SSI0_IE_SHIFT)) & FR_PIER1_SSI0_IE_MASK)
#define FR_PIER1_SSI1_IE_MASK               (0x200U)
#define FR_PIER1_SSI1_IE_SHIFT              (9U)
#define FR_PIER1_SSI1_IE_WIDTH              (1U)
#define FR_PIER1_SSI1_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER1_SSI1_IE_SHIFT)) & FR_PIER1_SSI1_IE_MASK)
#define FR_PIER1_SSI2_IE_MASK               (0x400U)
#define FR_PIER1_SSI2_IE_SHIFT              (10U)
#define FR_PIER1_SSI2_IE_WIDTH              (1U)
#define FR_PIER1_SSI2_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER1_SSI2_IE_SHIFT)) & FR_PIER1_SSI2_IE_MASK)
#define FR_PIER1_SSI3_IE_MASK               (0x800U)
#define FR_PIER1_SSI3_IE_SHIFT              (11U)
#define FR_PIER1_SSI3_IE_WIDTH              (1U)
#define FR_PIER1_SSI3_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER1_SSI3_IE_SHIFT)) & FR_PIER1_SSI3_IE_MASK)
#define FR_PIER1_PSC_IE_MASK                (0x1000U)
#define FR_PIER1_PSC_IE_SHIFT               (12U)
#define FR_PIER1_PSC_IE_WIDTH               (1U)
#define FR_PIER1_PSC_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER1_PSC_IE_SHIFT)) & FR_PIER1_PSC_IE_MASK)
#define FR_PIER1_PECF_IE_MASK               (0x2000U)
#define FR_PIER1_PECF_IE_SHIFT              (13U)
#define FR_PIER1_PECF_IE_WIDTH              (1U)
#define FR_PIER1_PECF_IE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PIER1_PECF_IE_SHIFT)) & FR_PIER1_PECF_IE_MASK)
#define FR_PIER1_IPC_IE_MASK                (0x4000U)
#define FR_PIER1_IPC_IE_SHIFT               (14U)
#define FR_PIER1_IPC_IE_WIDTH               (1U)
#define FR_PIER1_IPC_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER1_IPC_IE_SHIFT)) & FR_PIER1_IPC_IE_MASK)
#define FR_PIER1_EMC_IE_MASK                (0x8000U)
#define FR_PIER1_EMC_IE_SHIFT               (15U)
#define FR_PIER1_EMC_IE_WIDTH               (1U)
#define FR_PIER1_EMC_IE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PIER1_EMC_IE_SHIFT)) & FR_PIER1_EMC_IE_MASK)
/*! @} */

/*! @name CHIERFR - CHI Error Flag Register */
/*! @{ */
#define FR_CHIERFR_ILSA_EF_MASK             (0x1U)
#define FR_CHIERFR_ILSA_EF_SHIFT            (0U)
#define FR_CHIERFR_ILSA_EF_WIDTH            (1U)
#define FR_CHIERFR_ILSA_EF(x)               (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_ILSA_EF_SHIFT)) & FR_CHIERFR_ILSA_EF_MASK)
#define FR_CHIERFR_NMF_EF_MASK              (0x2U)
#define FR_CHIERFR_NMF_EF_SHIFT             (1U)
#define FR_CHIERFR_NMF_EF_WIDTH             (1U)
#define FR_CHIERFR_NMF_EF(x)                (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_NMF_EF_SHIFT)) & FR_CHIERFR_NMF_EF_MASK)
#define FR_CHIERFR_NML_EF_MASK              (0x4U)
#define FR_CHIERFR_NML_EF_SHIFT             (2U)
#define FR_CHIERFR_NML_EF_WIDTH             (1U)
#define FR_CHIERFR_NML_EF(x)                (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_NML_EF_SHIFT)) & FR_CHIERFR_NML_EF_MASK)
#define FR_CHIERFR_SPL_EF_MASK              (0x8U)
#define FR_CHIERFR_SPL_EF_SHIFT             (3U)
#define FR_CHIERFR_SPL_EF_WIDTH             (1U)
#define FR_CHIERFR_SPL_EF(x)                (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_SPL_EF_SHIFT)) & FR_CHIERFR_SPL_EF_MASK)
#define FR_CHIERFR_DPL_EF_MASK              (0x10U)
#define FR_CHIERFR_DPL_EF_SHIFT             (4U)
#define FR_CHIERFR_DPL_EF_WIDTH             (1U)
#define FR_CHIERFR_DPL_EF(x)                (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_DPL_EF_SHIFT)) & FR_CHIERFR_DPL_EF_MASK)
#define FR_CHIERFR_FID_EF_MASK              (0x20U)
#define FR_CHIERFR_FID_EF_SHIFT             (5U)
#define FR_CHIERFR_FID_EF_WIDTH             (1U)
#define FR_CHIERFR_FID_EF(x)                (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_FID_EF_SHIFT)) & FR_CHIERFR_FID_EF_MASK)
#define FR_CHIERFR_SBCF_EF_MASK             (0x40U)
#define FR_CHIERFR_SBCF_EF_SHIFT            (6U)
#define FR_CHIERFR_SBCF_EF_WIDTH            (1U)
#define FR_CHIERFR_SBCF_EF(x)               (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_SBCF_EF_SHIFT)) & FR_CHIERFR_SBCF_EF_MASK)
#define FR_CHIERFR_LCK_EF_MASK              (0x100U)
#define FR_CHIERFR_LCK_EF_SHIFT             (8U)
#define FR_CHIERFR_LCK_EF_WIDTH             (1U)
#define FR_CHIERFR_LCK_EF(x)                (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_LCK_EF_SHIFT)) & FR_CHIERFR_LCK_EF_MASK)
#define FR_CHIERFR_MBU_EF_MASK              (0x200U)
#define FR_CHIERFR_MBU_EF_SHIFT             (9U)
#define FR_CHIERFR_MBU_EF_WIDTH             (1U)
#define FR_CHIERFR_MBU_EF(x)                (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_MBU_EF_SHIFT)) & FR_CHIERFR_MBU_EF_MASK)
#define FR_CHIERFR_MBS_EF_MASK              (0x400U)
#define FR_CHIERFR_MBS_EF_SHIFT             (10U)
#define FR_CHIERFR_MBS_EF_WIDTH             (1U)
#define FR_CHIERFR_MBS_EF(x)                (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_MBS_EF_SHIFT)) & FR_CHIERFR_MBS_EF_MASK)
#define FR_CHIERFR_FOVA_EF_MASK             (0x800U)
#define FR_CHIERFR_FOVA_EF_SHIFT            (11U)
#define FR_CHIERFR_FOVA_EF_WIDTH            (1U)
#define FR_CHIERFR_FOVA_EF(x)               (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_FOVA_EF_SHIFT)) & FR_CHIERFR_FOVA_EF_MASK)
#define FR_CHIERFR_FOVB_EF_MASK             (0x1000U)
#define FR_CHIERFR_FOVB_EF_SHIFT            (12U)
#define FR_CHIERFR_FOVB_EF_WIDTH            (1U)
#define FR_CHIERFR_FOVB_EF(x)               (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_FOVB_EF_SHIFT)) & FR_CHIERFR_FOVB_EF_MASK)
#define FR_CHIERFR_PCMI_EF_MASK             (0x2000U)
#define FR_CHIERFR_PCMI_EF_SHIFT            (13U)
#define FR_CHIERFR_PCMI_EF_WIDTH            (1U)
#define FR_CHIERFR_PCMI_EF(x)               (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_PCMI_EF_SHIFT)) & FR_CHIERFR_PCMI_EF_MASK)
#define FR_CHIERFR_FRLA_EF_MASK             (0x4000U)
#define FR_CHIERFR_FRLA_EF_SHIFT            (14U)
#define FR_CHIERFR_FRLA_EF_WIDTH            (1U)
#define FR_CHIERFR_FRLA_EF(x)               (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_FRLA_EF_SHIFT)) & FR_CHIERFR_FRLA_EF_MASK)
#define FR_CHIERFR_FRLB_EF_MASK             (0x8000U)
#define FR_CHIERFR_FRLB_EF_SHIFT            (15U)
#define FR_CHIERFR_FRLB_EF_WIDTH            (1U)
#define FR_CHIERFR_FRLB_EF(x)               (((uint16_t)(((uint16_t)(x)) << FR_CHIERFR_FRLB_EF_SHIFT)) & FR_CHIERFR_FRLB_EF_MASK)
/*! @} */

/*! @name MBIVEC - Message Buffer Interrupt Vector Register */
/*! @{ */
#define FR_MBIVEC_RBIVEC_MASK               (0xFFU)
#define FR_MBIVEC_RBIVEC_SHIFT              (0U)
#define FR_MBIVEC_RBIVEC_WIDTH              (8U)
#define FR_MBIVEC_RBIVEC(x)                 (((uint16_t)(((uint16_t)(x)) << FR_MBIVEC_RBIVEC_SHIFT)) & FR_MBIVEC_RBIVEC_MASK)
#define FR_MBIVEC_TBIVEC_MASK               (0xFF00U)
#define FR_MBIVEC_TBIVEC_SHIFT              (8U)
#define FR_MBIVEC_TBIVEC_WIDTH              (8U)
#define FR_MBIVEC_TBIVEC(x)                 (((uint16_t)(((uint16_t)(x)) << FR_MBIVEC_TBIVEC_SHIFT)) & FR_MBIVEC_TBIVEC_MASK)
/*! @} */

/*! @name CASERCR - Channel A Status Error Counter Register */
/*! @{ */
#define FR_CASERCR_CHAERSCNT_MASK           (0xFFFFU)
#define FR_CASERCR_CHAERSCNT_SHIFT          (0U)
#define FR_CASERCR_CHAERSCNT_WIDTH          (16U)
#define FR_CASERCR_CHAERSCNT(x)             (((uint16_t)(((uint16_t)(x)) << FR_CASERCR_CHAERSCNT_SHIFT)) & FR_CASERCR_CHAERSCNT_MASK)
/*! @} */

/*! @name CBSERCR - Channel B Status Error Counter Register */
/*! @{ */
#define FR_CBSERCR_CHBERSCNT_MASK           (0xFFFFU)
#define FR_CBSERCR_CHBERSCNT_SHIFT          (0U)
#define FR_CBSERCR_CHBERSCNT_WIDTH          (16U)
#define FR_CBSERCR_CHBERSCNT(x)             (((uint16_t)(((uint16_t)(x)) << FR_CBSERCR_CHBERSCNT_SHIFT)) & FR_CBSERCR_CHBERSCNT_MASK)
/*! @} */

/*! @name PSR0 - Protocol Status Register 0 */
/*! @{ */
#define FR_PSR0_WAKEUPSTATUS_MASK           (0x7U)
#define FR_PSR0_WAKEUPSTATUS_SHIFT          (0U)
#define FR_PSR0_WAKEUPSTATUS_WIDTH          (3U)
#define FR_PSR0_WAKEUPSTATUS(x)             (((uint16_t)(((uint16_t)(x)) << FR_PSR0_WAKEUPSTATUS_SHIFT)) & FR_PSR0_WAKEUPSTATUS_MASK)
#define FR_PSR0_STARTUPSTATE_MASK           (0xF0U)
#define FR_PSR0_STARTUPSTATE_SHIFT          (4U)
#define FR_PSR0_STARTUPSTATE_WIDTH          (4U)
#define FR_PSR0_STARTUPSTATE(x)             (((uint16_t)(((uint16_t)(x)) << FR_PSR0_STARTUPSTATE_SHIFT)) & FR_PSR0_STARTUPSTATE_MASK)
#define FR_PSR0_PROTSTATE_MASK              (0x700U)
#define FR_PSR0_PROTSTATE_SHIFT             (8U)
#define FR_PSR0_PROTSTATE_WIDTH             (3U)
#define FR_PSR0_PROTSTATE(x)                (((uint16_t)(((uint16_t)(x)) << FR_PSR0_PROTSTATE_SHIFT)) & FR_PSR0_PROTSTATE_MASK)
#define FR_PSR0_SLOTMODE_MASK               (0x3000U)
#define FR_PSR0_SLOTMODE_SHIFT              (12U)
#define FR_PSR0_SLOTMODE_WIDTH              (2U)
#define FR_PSR0_SLOTMODE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PSR0_SLOTMODE_SHIFT)) & FR_PSR0_SLOTMODE_MASK)
#define FR_PSR0_ERRMODE_MASK                (0xC000U)
#define FR_PSR0_ERRMODE_SHIFT               (14U)
#define FR_PSR0_ERRMODE_WIDTH               (2U)
#define FR_PSR0_ERRMODE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PSR0_ERRMODE_SHIFT)) & FR_PSR0_ERRMODE_MASK)
/*! @} */

/*! @name PSR1 - Protocol Status Register 1 */
/*! @{ */
#define FR_PSR1_APTAC_MASK                  (0x1FU)
#define FR_PSR1_APTAC_SHIFT                 (0U)
#define FR_PSR1_APTAC_WIDTH                 (5U)
#define FR_PSR1_APTAC(x)                    (((uint16_t)(((uint16_t)(x)) << FR_PSR1_APTAC_SHIFT)) & FR_PSR1_APTAC_MASK)
#define FR_PSR1_FRZ_MASK                    (0x20U)
#define FR_PSR1_FRZ_SHIFT                   (5U)
#define FR_PSR1_FRZ_WIDTH                   (1U)
#define FR_PSR1_FRZ(x)                      (((uint16_t)(((uint16_t)(x)) << FR_PSR1_FRZ_SHIFT)) & FR_PSR1_FRZ_MASK)
#define FR_PSR1_HHR_MASK                    (0x40U)
#define FR_PSR1_HHR_SHIFT                   (6U)
#define FR_PSR1_HHR_WIDTH                   (1U)
#define FR_PSR1_HHR(x)                      (((uint16_t)(((uint16_t)(x)) << FR_PSR1_HHR_SHIFT)) & FR_PSR1_HHR_MASK)
#define FR_PSR1_CPN_MASK                    (0x80U)
#define FR_PSR1_CPN_SHIFT                   (7U)
#define FR_PSR1_CPN_WIDTH                   (1U)
#define FR_PSR1_CPN(x)                      (((uint16_t)(((uint16_t)(x)) << FR_PSR1_CPN_SHIFT)) & FR_PSR1_CPN_MASK)
#define FR_PSR1_REMCSAT_MASK                (0x1F00U)
#define FR_PSR1_REMCSAT_SHIFT               (8U)
#define FR_PSR1_REMCSAT_WIDTH               (5U)
#define FR_PSR1_REMCSAT(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PSR1_REMCSAT_SHIFT)) & FR_PSR1_REMCSAT_MASK)
#define FR_PSR1_CSP_MASK                    (0x4000U)
#define FR_PSR1_CSP_SHIFT                   (14U)
#define FR_PSR1_CSP_WIDTH                   (1U)
#define FR_PSR1_CSP(x)                      (((uint16_t)(((uint16_t)(x)) << FR_PSR1_CSP_SHIFT)) & FR_PSR1_CSP_MASK)
#define FR_PSR1_CSAA_MASK                   (0x8000U)
#define FR_PSR1_CSAA_SHIFT                  (15U)
#define FR_PSR1_CSAA_WIDTH                  (1U)
#define FR_PSR1_CSAA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR1_CSAA_SHIFT)) & FR_PSR1_CSAA_MASK)
/*! @} */

/*! @name PSR2 - Protocol Status Register 2 */
/*! @{ */
#define FR_PSR2_CKCORFCNT_MASK              (0xFU)
#define FR_PSR2_CKCORFCNT_SHIFT             (0U)
#define FR_PSR2_CKCORFCNT_WIDTH             (4U)
#define FR_PSR2_CKCORFCNT(x)                (((uint16_t)(((uint16_t)(x)) << FR_PSR2_CKCORFCNT_SHIFT)) & FR_PSR2_CKCORFCNT_MASK)
#define FR_PSR2_MTA_MASK                    (0x10U)
#define FR_PSR2_MTA_SHIFT                   (4U)
#define FR_PSR2_MTA_WIDTH                   (1U)
#define FR_PSR2_MTA(x)                      (((uint16_t)(((uint16_t)(x)) << FR_PSR2_MTA_SHIFT)) & FR_PSR2_MTA_MASK)
#define FR_PSR2_SSEA_MASK                   (0x20U)
#define FR_PSR2_SSEA_SHIFT                  (5U)
#define FR_PSR2_SSEA_WIDTH                  (1U)
#define FR_PSR2_SSEA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_SSEA_SHIFT)) & FR_PSR2_SSEA_MASK)
#define FR_PSR2_SBVA_MASK                   (0x40U)
#define FR_PSR2_SBVA_SHIFT                  (6U)
#define FR_PSR2_SBVA_WIDTH                  (1U)
#define FR_PSR2_SBVA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_SBVA_SHIFT)) & FR_PSR2_SBVA_MASK)
#define FR_PSR2_STCA_MASK                   (0x80U)
#define FR_PSR2_STCA_SHIFT                  (7U)
#define FR_PSR2_STCA_WIDTH                  (1U)
#define FR_PSR2_STCA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_STCA_SHIFT)) & FR_PSR2_STCA_MASK)
#define FR_PSR2_NSEA_MASK                   (0x100U)
#define FR_PSR2_NSEA_SHIFT                  (8U)
#define FR_PSR2_NSEA_WIDTH                  (1U)
#define FR_PSR2_NSEA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_NSEA_SHIFT)) & FR_PSR2_NSEA_MASK)
#define FR_PSR2_NBVA_MASK                   (0x200U)
#define FR_PSR2_NBVA_SHIFT                  (9U)
#define FR_PSR2_NBVA_WIDTH                  (1U)
#define FR_PSR2_NBVA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_NBVA_SHIFT)) & FR_PSR2_NBVA_MASK)
#define FR_PSR2_MTB_MASK                    (0x400U)
#define FR_PSR2_MTB_SHIFT                   (10U)
#define FR_PSR2_MTB_WIDTH                   (1U)
#define FR_PSR2_MTB(x)                      (((uint16_t)(((uint16_t)(x)) << FR_PSR2_MTB_SHIFT)) & FR_PSR2_MTB_MASK)
#define FR_PSR2_SSEB_MASK                   (0x800U)
#define FR_PSR2_SSEB_SHIFT                  (11U)
#define FR_PSR2_SSEB_WIDTH                  (1U)
#define FR_PSR2_SSEB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_SSEB_SHIFT)) & FR_PSR2_SSEB_MASK)
#define FR_PSR2_SBVB_MASK                   (0x1000U)
#define FR_PSR2_SBVB_SHIFT                  (12U)
#define FR_PSR2_SBVB_WIDTH                  (1U)
#define FR_PSR2_SBVB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_SBVB_SHIFT)) & FR_PSR2_SBVB_MASK)
#define FR_PSR2_STCB_MASK                   (0x2000U)
#define FR_PSR2_STCB_SHIFT                  (13U)
#define FR_PSR2_STCB_WIDTH                  (1U)
#define FR_PSR2_STCB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_STCB_SHIFT)) & FR_PSR2_STCB_MASK)
#define FR_PSR2_NSEB_MASK                   (0x4000U)
#define FR_PSR2_NSEB_SHIFT                  (14U)
#define FR_PSR2_NSEB_WIDTH                  (1U)
#define FR_PSR2_NSEB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_NSEB_SHIFT)) & FR_PSR2_NSEB_MASK)
#define FR_PSR2_NBVB_MASK                   (0x8000U)
#define FR_PSR2_NBVB_SHIFT                  (15U)
#define FR_PSR2_NBVB_WIDTH                  (1U)
#define FR_PSR2_NBVB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR2_NBVB_SHIFT)) & FR_PSR2_NBVB_MASK)
/*! @} */

/*! @name PSR3 - Protocol Status Register 3 */
/*! @{ */
#define FR_PSR3_AVFA_MASK                   (0x1U)
#define FR_PSR3_AVFA_SHIFT                  (0U)
#define FR_PSR3_AVFA_WIDTH                  (1U)
#define FR_PSR3_AVFA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_AVFA_SHIFT)) & FR_PSR3_AVFA_MASK)
#define FR_PSR3_ASEA_MASK                   (0x2U)
#define FR_PSR3_ASEA_SHIFT                  (1U)
#define FR_PSR3_ASEA_WIDTH                  (1U)
#define FR_PSR3_ASEA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_ASEA_SHIFT)) & FR_PSR3_ASEA_MASK)
#define FR_PSR3_ACEA_MASK                   (0x4U)
#define FR_PSR3_ACEA_SHIFT                  (2U)
#define FR_PSR3_ACEA_WIDTH                  (1U)
#define FR_PSR3_ACEA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_ACEA_SHIFT)) & FR_PSR3_ACEA_MASK)
#define FR_PSR3_AACA_MASK                   (0x8U)
#define FR_PSR3_AACA_SHIFT                  (3U)
#define FR_PSR3_AACA_WIDTH                  (1U)
#define FR_PSR3_AACA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_AACA_SHIFT)) & FR_PSR3_AACA_MASK)
#define FR_PSR3_ABVA_MASK                   (0x10U)
#define FR_PSR3_ABVA_SHIFT                  (4U)
#define FR_PSR3_ABVA_WIDTH                  (1U)
#define FR_PSR3_ABVA(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_ABVA_SHIFT)) & FR_PSR3_ABVA_MASK)
#define FR_PSR3_WUA_MASK                    (0x20U)
#define FR_PSR3_WUA_SHIFT                   (5U)
#define FR_PSR3_WUA_WIDTH                   (1U)
#define FR_PSR3_WUA(x)                      (((uint16_t)(((uint16_t)(x)) << FR_PSR3_WUA_SHIFT)) & FR_PSR3_WUA_MASK)
#define FR_PSR3_AVFB_MASK                   (0x100U)
#define FR_PSR3_AVFB_SHIFT                  (8U)
#define FR_PSR3_AVFB_WIDTH                  (1U)
#define FR_PSR3_AVFB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_AVFB_SHIFT)) & FR_PSR3_AVFB_MASK)
#define FR_PSR3_ASEB_MASK                   (0x200U)
#define FR_PSR3_ASEB_SHIFT                  (9U)
#define FR_PSR3_ASEB_WIDTH                  (1U)
#define FR_PSR3_ASEB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_ASEB_SHIFT)) & FR_PSR3_ASEB_MASK)
#define FR_PSR3_ACEB_MASK                   (0x400U)
#define FR_PSR3_ACEB_SHIFT                  (10U)
#define FR_PSR3_ACEB_WIDTH                  (1U)
#define FR_PSR3_ACEB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_ACEB_SHIFT)) & FR_PSR3_ACEB_MASK)
#define FR_PSR3_AACB_MASK                   (0x800U)
#define FR_PSR3_AACB_SHIFT                  (11U)
#define FR_PSR3_AACB_WIDTH                  (1U)
#define FR_PSR3_AACB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_AACB_SHIFT)) & FR_PSR3_AACB_MASK)
#define FR_PSR3_ABVB_MASK                   (0x1000U)
#define FR_PSR3_ABVB_SHIFT                  (12U)
#define FR_PSR3_ABVB_WIDTH                  (1U)
#define FR_PSR3_ABVB(x)                     (((uint16_t)(((uint16_t)(x)) << FR_PSR3_ABVB_SHIFT)) & FR_PSR3_ABVB_MASK)
#define FR_PSR3_WUB_MASK                    (0x2000U)
#define FR_PSR3_WUB_SHIFT                   (13U)
#define FR_PSR3_WUB_WIDTH                   (1U)
#define FR_PSR3_WUB(x)                      (((uint16_t)(((uint16_t)(x)) << FR_PSR3_WUB_SHIFT)) & FR_PSR3_WUB_MASK)
/*! @} */

/*! @name MTCTR - Macrotick Counter Register */
/*! @{ */
#define FR_MTCTR_MTCT_MASK                  (0x3FFFU)
#define FR_MTCTR_MTCT_SHIFT                 (0U)
#define FR_MTCTR_MTCT_WIDTH                 (14U)
#define FR_MTCTR_MTCT(x)                    (((uint16_t)(((uint16_t)(x)) << FR_MTCTR_MTCT_SHIFT)) & FR_MTCTR_MTCT_MASK)
/*! @} */

/*! @name CYCTR - Cycle Counter Register */
/*! @{ */
#define FR_CYCTR_CYCCNT_MASK                (0x3FU)
#define FR_CYCTR_CYCCNT_SHIFT               (0U)
#define FR_CYCTR_CYCCNT_WIDTH               (6U)
#define FR_CYCTR_CYCCNT(x)                  (((uint16_t)(((uint16_t)(x)) << FR_CYCTR_CYCCNT_SHIFT)) & FR_CYCTR_CYCCNT_MASK)
/*! @} */

/*! @name SLTCTAR - Slot Counter Channel A Register */
/*! @{ */
#define FR_SLTCTAR_SLOTCNTA_MASK            (0x7FFU)
#define FR_SLTCTAR_SLOTCNTA_SHIFT           (0U)
#define FR_SLTCTAR_SLOTCNTA_WIDTH           (11U)
#define FR_SLTCTAR_SLOTCNTA(x)              (((uint16_t)(((uint16_t)(x)) << FR_SLTCTAR_SLOTCNTA_SHIFT)) & FR_SLTCTAR_SLOTCNTA_MASK)
/*! @} */

/*! @name SLTCTBR - Slot Counter Channel B Register */
/*! @{ */
#define FR_SLTCTBR_SLOTCNTB_MASK            (0x7FFU)
#define FR_SLTCTBR_SLOTCNTB_SHIFT           (0U)
#define FR_SLTCTBR_SLOTCNTB_WIDTH           (11U)
#define FR_SLTCTBR_SLOTCNTB(x)              (((uint16_t)(((uint16_t)(x)) << FR_SLTCTBR_SLOTCNTB_SHIFT)) & FR_SLTCTBR_SLOTCNTB_MASK)
/*! @} */

/*! @name RTCORVR - Rate Correction Value Register */
/*! @{ */
#define FR_RTCORVR_RATECORR_MASK            (0xFFFFU)
#define FR_RTCORVR_RATECORR_SHIFT           (0U)
#define FR_RTCORVR_RATECORR_WIDTH           (16U)
#define FR_RTCORVR_RATECORR(x)              (((uint16_t)(((uint16_t)(x)) << FR_RTCORVR_RATECORR_SHIFT)) & FR_RTCORVR_RATECORR_MASK)
/*! @} */

/*! @name OFCORVR - Offset Correction Value Register */
/*! @{ */
#define FR_OFCORVR_OFFSETCORR_MASK          (0xFFFFU)
#define FR_OFCORVR_OFFSETCORR_SHIFT         (0U)
#define FR_OFCORVR_OFFSETCORR_WIDTH         (16U)
#define FR_OFCORVR_OFFSETCORR(x)            (((uint16_t)(((uint16_t)(x)) << FR_OFCORVR_OFFSETCORR_SHIFT)) & FR_OFCORVR_OFFSETCORR_MASK)
/*! @} */

/*! @name CIFR - Combined Interrupt Flag Register */
/*! @{ */
#define FR_CIFR_TBIF_MASK                   (0x1U)
#define FR_CIFR_TBIF_SHIFT                  (0U)
#define FR_CIFR_TBIF_WIDTH                  (1U)
#define FR_CIFR_TBIF(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CIFR_TBIF_SHIFT)) & FR_CIFR_TBIF_MASK)
#define FR_CIFR_RBIF_MASK                   (0x2U)
#define FR_CIFR_RBIF_SHIFT                  (1U)
#define FR_CIFR_RBIF_WIDTH                  (1U)
#define FR_CIFR_RBIF(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CIFR_RBIF_SHIFT)) & FR_CIFR_RBIF_MASK)
#define FR_CIFR_FAFAIF_MASK                 (0x4U)
#define FR_CIFR_FAFAIF_SHIFT                (2U)
#define FR_CIFR_FAFAIF_WIDTH                (1U)
#define FR_CIFR_FAFAIF(x)                   (((uint16_t)(((uint16_t)(x)) << FR_CIFR_FAFAIF_SHIFT)) & FR_CIFR_FAFAIF_MASK)
#define FR_CIFR_FAFBIF_MASK                 (0x8U)
#define FR_CIFR_FAFBIF_SHIFT                (3U)
#define FR_CIFR_FAFBIF_WIDTH                (1U)
#define FR_CIFR_FAFBIF(x)                   (((uint16_t)(((uint16_t)(x)) << FR_CIFR_FAFBIF_SHIFT)) & FR_CIFR_FAFBIF_MASK)
#define FR_CIFR_WUPIF_MASK                  (0x10U)
#define FR_CIFR_WUPIF_SHIFT                 (4U)
#define FR_CIFR_WUPIF_WIDTH                 (1U)
#define FR_CIFR_WUPIF(x)                    (((uint16_t)(((uint16_t)(x)) << FR_CIFR_WUPIF_SHIFT)) & FR_CIFR_WUPIF_MASK)
#define FR_CIFR_CHIF_MASK                   (0x20U)
#define FR_CIFR_CHIF_SHIFT                  (5U)
#define FR_CIFR_CHIF_WIDTH                  (1U)
#define FR_CIFR_CHIF(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CIFR_CHIF_SHIFT)) & FR_CIFR_CHIF_MASK)
#define FR_CIFR_PRIF_MASK                   (0x40U)
#define FR_CIFR_PRIF_SHIFT                  (6U)
#define FR_CIFR_PRIF_WIDTH                  (1U)
#define FR_CIFR_PRIF(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CIFR_PRIF_SHIFT)) & FR_CIFR_PRIF_MASK)
#define FR_CIFR_MIF_MASK                    (0x80U)
#define FR_CIFR_MIF_SHIFT                   (7U)
#define FR_CIFR_MIF_WIDTH                   (1U)
#define FR_CIFR_MIF(x)                      (((uint16_t)(((uint16_t)(x)) << FR_CIFR_MIF_SHIFT)) & FR_CIFR_MIF_MASK)
/*! @} */

/*! @name SYMATOR - System Memory Access Time-Out Register */
/*! @{ */
#define FR_SYMATOR_TIMEOUT_MASK             (0xFFU)
#define FR_SYMATOR_TIMEOUT_SHIFT            (0U)
#define FR_SYMATOR_TIMEOUT_WIDTH            (8U)
#define FR_SYMATOR_TIMEOUT(x)               (((uint16_t)(((uint16_t)(x)) << FR_SYMATOR_TIMEOUT_SHIFT)) & FR_SYMATOR_TIMEOUT_MASK)
/*! @} */

/*! @name SFCNTR - Sync Frame Counter Register */
/*! @{ */
#define FR_SFCNTR_SFODA_MASK                (0xFU)
#define FR_SFCNTR_SFODA_SHIFT               (0U)
#define FR_SFCNTR_SFODA_WIDTH               (4U)
#define FR_SFCNTR_SFODA(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFCNTR_SFODA_SHIFT)) & FR_SFCNTR_SFODA_MASK)
#define FR_SFCNTR_SFODB_MASK                (0xF0U)
#define FR_SFCNTR_SFODB_SHIFT               (4U)
#define FR_SFCNTR_SFODB_WIDTH               (4U)
#define FR_SFCNTR_SFODB(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFCNTR_SFODB_SHIFT)) & FR_SFCNTR_SFODB_MASK)
#define FR_SFCNTR_SFEVA_MASK                (0xF00U)
#define FR_SFCNTR_SFEVA_SHIFT               (8U)
#define FR_SFCNTR_SFEVA_WIDTH               (4U)
#define FR_SFCNTR_SFEVA(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFCNTR_SFEVA_SHIFT)) & FR_SFCNTR_SFEVA_MASK)
#define FR_SFCNTR_SFEVB_MASK                (0xF000U)
#define FR_SFCNTR_SFEVB_SHIFT               (12U)
#define FR_SFCNTR_SFEVB_WIDTH               (4U)
#define FR_SFCNTR_SFEVB(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFCNTR_SFEVB_SHIFT)) & FR_SFCNTR_SFEVB_MASK)
/*! @} */

/*! @name SFTOR - Sync Frame Table Offset Register */
/*! @{ */
#define FR_SFTOR_SFT_OFFSET_MASK            (0xFFFEU)
#define FR_SFTOR_SFT_OFFSET_SHIFT           (1U)
#define FR_SFTOR_SFT_OFFSET_WIDTH           (15U)
#define FR_SFTOR_SFT_OFFSET(x)              (((uint16_t)(((uint16_t)(x)) << FR_SFTOR_SFT_OFFSET_SHIFT)) & FR_SFTOR_SFT_OFFSET_MASK)
/*! @} */

/*! @name SFTCCSR - Sync Frame Table Configuration Control Status Register */
/*! @{ */
#define FR_SFTCCSR_SIDEN_MASK               (0x1U)
#define FR_SFTCCSR_SIDEN_SHIFT              (0U)
#define FR_SFTCCSR_SIDEN_WIDTH              (1U)
#define FR_SFTCCSR_SIDEN(x)                 (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_SIDEN_SHIFT)) & FR_SFTCCSR_SIDEN_MASK)
#define FR_SFTCCSR_SDVEN_MASK               (0x2U)
#define FR_SFTCCSR_SDVEN_SHIFT              (1U)
#define FR_SFTCCSR_SDVEN_WIDTH              (1U)
#define FR_SFTCCSR_SDVEN(x)                 (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_SDVEN_SHIFT)) & FR_SFTCCSR_SDVEN_MASK)
#define FR_SFTCCSR_OPT_MASK                 (0x4U)
#define FR_SFTCCSR_OPT_SHIFT                (2U)
#define FR_SFTCCSR_OPT_WIDTH                (1U)
#define FR_SFTCCSR_OPT(x)                   (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_OPT_SHIFT)) & FR_SFTCCSR_OPT_MASK)
#define FR_SFTCCSR_OVAL_MASK                (0x10U)
#define FR_SFTCCSR_OVAL_SHIFT               (4U)
#define FR_SFTCCSR_OVAL_WIDTH               (1U)
#define FR_SFTCCSR_OVAL(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_OVAL_SHIFT)) & FR_SFTCCSR_OVAL_MASK)
#define FR_SFTCCSR_EVAL_MASK                (0x20U)
#define FR_SFTCCSR_EVAL_SHIFT               (5U)
#define FR_SFTCCSR_EVAL_WIDTH               (1U)
#define FR_SFTCCSR_EVAL(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_EVAL_SHIFT)) & FR_SFTCCSR_EVAL_MASK)
#define FR_SFTCCSR_OLKS_MASK                (0x40U)
#define FR_SFTCCSR_OLKS_SHIFT               (6U)
#define FR_SFTCCSR_OLKS_WIDTH               (1U)
#define FR_SFTCCSR_OLKS(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_OLKS_SHIFT)) & FR_SFTCCSR_OLKS_MASK)
#define FR_SFTCCSR_ELKS_MASK                (0x80U)
#define FR_SFTCCSR_ELKS_SHIFT               (7U)
#define FR_SFTCCSR_ELKS_WIDTH               (1U)
#define FR_SFTCCSR_ELKS(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_ELKS_SHIFT)) & FR_SFTCCSR_ELKS_MASK)
#define FR_SFTCCSR_CYCNUM_MASK              (0x3F00U)
#define FR_SFTCCSR_CYCNUM_SHIFT             (8U)
#define FR_SFTCCSR_CYCNUM_WIDTH             (6U)
#define FR_SFTCCSR_CYCNUM(x)                (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_CYCNUM_SHIFT)) & FR_SFTCCSR_CYCNUM_MASK)
#define FR_SFTCCSR_OLKT_MASK                (0x4000U)
#define FR_SFTCCSR_OLKT_SHIFT               (14U)
#define FR_SFTCCSR_OLKT_WIDTH               (1U)
#define FR_SFTCCSR_OLKT(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_OLKT_SHIFT)) & FR_SFTCCSR_OLKT_MASK)
#define FR_SFTCCSR_ELKT_MASK                (0x8000U)
#define FR_SFTCCSR_ELKT_SHIFT               (15U)
#define FR_SFTCCSR_ELKT_WIDTH               (1U)
#define FR_SFTCCSR_ELKT(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SFTCCSR_ELKT_SHIFT)) & FR_SFTCCSR_ELKT_MASK)
/*! @} */

/*! @name SFIDRFR - Sync Frame ID Rejection Filter Register */
/*! @{ */
#define FR_SFIDRFR_SYNFRID_MASK             (0x3FFU)
#define FR_SFIDRFR_SYNFRID_SHIFT            (0U)
#define FR_SFIDRFR_SYNFRID_WIDTH            (10U)
#define FR_SFIDRFR_SYNFRID(x)               (((uint16_t)(((uint16_t)(x)) << FR_SFIDRFR_SYNFRID_SHIFT)) & FR_SFIDRFR_SYNFRID_MASK)
/*! @} */

/*! @name SFIDAFVR - Sync Frame ID Acceptance Filter Value Register */
/*! @{ */
#define FR_SFIDAFVR_FVAL_MASK               (0x3FFU)
#define FR_SFIDAFVR_FVAL_SHIFT              (0U)
#define FR_SFIDAFVR_FVAL_WIDTH              (10U)
#define FR_SFIDAFVR_FVAL(x)                 (((uint16_t)(((uint16_t)(x)) << FR_SFIDAFVR_FVAL_SHIFT)) & FR_SFIDAFVR_FVAL_MASK)
/*! @} */

/*! @name SFIDAFMR - Sync Frame ID Acceptance Filter Mask Register */
/*! @{ */
#define FR_SFIDAFMR_FMSK_MASK               (0x3FFU)
#define FR_SFIDAFMR_FMSK_SHIFT              (0U)
#define FR_SFIDAFMR_FMSK_WIDTH              (10U)
#define FR_SFIDAFMR_FMSK(x)                 (((uint16_t)(((uint16_t)(x)) << FR_SFIDAFMR_FMSK_SHIFT)) & FR_SFIDAFMR_FMSK_MASK)
/*! @} */

/*! @name NMVR - Network Management Vector Register */
/*! @{ */
#define FR_NMVR_NMVP_MASK                   (0xFFFFU)
#define FR_NMVR_NMVP_SHIFT                  (0U)
#define FR_NMVR_NMVP_WIDTH                  (16U)
#define FR_NMVR_NMVP(x)                     (((uint16_t)(((uint16_t)(x)) << FR_NMVR_NMVP_SHIFT)) & FR_NMVR_NMVP_MASK)
/*! @} */

/*! @name NMVLR - Network Management Vector Length Register */
/*! @{ */
#define FR_NMVLR_NMVL_MASK                  (0xFU)
#define FR_NMVLR_NMVL_SHIFT                 (0U)
#define FR_NMVLR_NMVL_WIDTH                 (4U)
#define FR_NMVLR_NMVL(x)                    (((uint16_t)(((uint16_t)(x)) << FR_NMVLR_NMVL_SHIFT)) & FR_NMVLR_NMVL_MASK)
/*! @} */

/*! @name TICCR - Timer Configuration and Control Register */
/*! @{ */
#define FR_TICCR_T1ST_MASK                  (0x1U)
#define FR_TICCR_T1ST_SHIFT                 (0U)
#define FR_TICCR_T1ST_WIDTH                 (1U)
#define FR_TICCR_T1ST(x)                    (((uint16_t)(((uint16_t)(x)) << FR_TICCR_T1ST_SHIFT)) & FR_TICCR_T1ST_MASK)
#define FR_TICCR_T1TR_MASK                  (0x2U)
#define FR_TICCR_T1TR_SHIFT                 (1U)
#define FR_TICCR_T1TR_WIDTH                 (1U)
#define FR_TICCR_T1TR(x)                    (((uint16_t)(((uint16_t)(x)) << FR_TICCR_T1TR_SHIFT)) & FR_TICCR_T1TR_MASK)
#define FR_TICCR_T1SP_MASK                  (0x4U)
#define FR_TICCR_T1SP_SHIFT                 (2U)
#define FR_TICCR_T1SP_WIDTH                 (1U)
#define FR_TICCR_T1SP(x)                    (((uint16_t)(((uint16_t)(x)) << FR_TICCR_T1SP_SHIFT)) & FR_TICCR_T1SP_MASK)
#define FR_TICCR_T1_REP_MASK                (0x10U)
#define FR_TICCR_T1_REP_SHIFT               (4U)
#define FR_TICCR_T1_REP_WIDTH               (1U)
#define FR_TICCR_T1_REP(x)                  (((uint16_t)(((uint16_t)(x)) << FR_TICCR_T1_REP_SHIFT)) & FR_TICCR_T1_REP_MASK)
#define FR_TICCR_T2ST_MASK                  (0x100U)
#define FR_TICCR_T2ST_SHIFT                 (8U)
#define FR_TICCR_T2ST_WIDTH                 (1U)
#define FR_TICCR_T2ST(x)                    (((uint16_t)(((uint16_t)(x)) << FR_TICCR_T2ST_SHIFT)) & FR_TICCR_T2ST_MASK)
#define FR_TICCR_T2TR_MASK                  (0x200U)
#define FR_TICCR_T2TR_SHIFT                 (9U)
#define FR_TICCR_T2TR_WIDTH                 (1U)
#define FR_TICCR_T2TR(x)                    (((uint16_t)(((uint16_t)(x)) << FR_TICCR_T2TR_SHIFT)) & FR_TICCR_T2TR_MASK)
#define FR_TICCR_T2SP_MASK                  (0x400U)
#define FR_TICCR_T2SP_SHIFT                 (10U)
#define FR_TICCR_T2SP_WIDTH                 (1U)
#define FR_TICCR_T2SP(x)                    (((uint16_t)(((uint16_t)(x)) << FR_TICCR_T2SP_SHIFT)) & FR_TICCR_T2SP_MASK)
#define FR_TICCR_T2_REP_MASK                (0x1000U)
#define FR_TICCR_T2_REP_SHIFT               (12U)
#define FR_TICCR_T2_REP_WIDTH               (1U)
#define FR_TICCR_T2_REP(x)                  (((uint16_t)(((uint16_t)(x)) << FR_TICCR_T2_REP_SHIFT)) & FR_TICCR_T2_REP_MASK)
#define FR_TICCR_T2_CFG_MASK                (0x2000U)
#define FR_TICCR_T2_CFG_SHIFT               (13U)
#define FR_TICCR_T2_CFG_WIDTH               (1U)
#define FR_TICCR_T2_CFG(x)                  (((uint16_t)(((uint16_t)(x)) << FR_TICCR_T2_CFG_SHIFT)) & FR_TICCR_T2_CFG_MASK)
/*! @} */

/*! @name TI1CYSR - Timer 1 Cycle Set Register */
/*! @{ */
#define FR_TI1CYSR_T1_CYC_MSK_MASK          (0x3FU)
#define FR_TI1CYSR_T1_CYC_MSK_SHIFT         (0U)
#define FR_TI1CYSR_T1_CYC_MSK_WIDTH         (6U)
#define FR_TI1CYSR_T1_CYC_MSK(x)            (((uint16_t)(((uint16_t)(x)) << FR_TI1CYSR_T1_CYC_MSK_SHIFT)) & FR_TI1CYSR_T1_CYC_MSK_MASK)
#define FR_TI1CYSR_T1_CYC_VAL_MASK          (0x3F00U)
#define FR_TI1CYSR_T1_CYC_VAL_SHIFT         (8U)
#define FR_TI1CYSR_T1_CYC_VAL_WIDTH         (6U)
#define FR_TI1CYSR_T1_CYC_VAL(x)            (((uint16_t)(((uint16_t)(x)) << FR_TI1CYSR_T1_CYC_VAL_SHIFT)) & FR_TI1CYSR_T1_CYC_VAL_MASK)
/*! @} */

/*! @name TI1MTOR - Timer 1 Macrotick Offset Register */
/*! @{ */
#define FR_TI1MTOR_T1_MTOFFSET_MASK         (0x3FFFU)
#define FR_TI1MTOR_T1_MTOFFSET_SHIFT        (0U)
#define FR_TI1MTOR_T1_MTOFFSET_WIDTH        (14U)
#define FR_TI1MTOR_T1_MTOFFSET(x)           (((uint16_t)(((uint16_t)(x)) << FR_TI1MTOR_T1_MTOFFSET_SHIFT)) & FR_TI1MTOR_T1_MTOFFSET_MASK)
/*! @} */

/*! @name TI2CR0_ABS - Timer 2 Configuration Register 0 (Absolute Timer Configuration) */
/*! @{ */
#define FR_TI2CR0_ABS_T2CYCMSK_MASK         (0x3FU)
#define FR_TI2CR0_ABS_T2CYCMSK_SHIFT        (0U)
#define FR_TI2CR0_ABS_T2CYCMSK_WIDTH        (6U)
#define FR_TI2CR0_ABS_T2CYCMSK(x)           (((uint16_t)(((uint16_t)(x)) << FR_TI2CR0_ABS_T2CYCMSK_SHIFT)) & FR_TI2CR0_ABS_T2CYCMSK_MASK)
#define FR_TI2CR0_ABS_T2CYCVAL_MASK         (0x3F00U)
#define FR_TI2CR0_ABS_T2CYCVAL_SHIFT        (8U)
#define FR_TI2CR0_ABS_T2CYCVAL_WIDTH        (6U)
#define FR_TI2CR0_ABS_T2CYCVAL(x)           (((uint16_t)(((uint16_t)(x)) << FR_TI2CR0_ABS_T2CYCVAL_SHIFT)) & FR_TI2CR0_ABS_T2CYCVAL_MASK)
/*! @} */

/*! @name TI2CR0_REL - Timer 2 Configuration Register 0 (Relative Timer Configuration) */
/*! @{ */
#define FR_TI2CR0_REL_T2MTCNT_MASK          (0xFFFFU)
#define FR_TI2CR0_REL_T2MTCNT_SHIFT         (0U)
#define FR_TI2CR0_REL_T2MTCNT_WIDTH         (16U)
#define FR_TI2CR0_REL_T2MTCNT(x)            (((uint16_t)(((uint16_t)(x)) << FR_TI2CR0_REL_T2MTCNT_SHIFT)) & FR_TI2CR0_REL_T2MTCNT_MASK)
/*! @} */

/*! @name TI2CR1_ABS - Timer 2 Configuration Register 1 (Absolute Timer Configuration) */
/*! @{ */
#define FR_TI2CR1_ABS_T2MOFF_MASK           (0x3FFFU)
#define FR_TI2CR1_ABS_T2MOFF_SHIFT          (0U)
#define FR_TI2CR1_ABS_T2MOFF_WIDTH          (14U)
#define FR_TI2CR1_ABS_T2MOFF(x)             (((uint16_t)(((uint16_t)(x)) << FR_TI2CR1_ABS_T2MOFF_SHIFT)) & FR_TI2CR1_ABS_T2MOFF_MASK)
/*! @} */

/*! @name TI2CR1_REL - Timer 2 Configuration Register 1 (Relative Timer Configuration) */
/*! @{ */
#define FR_TI2CR1_REL_T2MTCNT_MASK          (0xFFFFU)
#define FR_TI2CR1_REL_T2MTCNT_SHIFT         (0U)
#define FR_TI2CR1_REL_T2MTCNT_WIDTH         (16U)
#define FR_TI2CR1_REL_T2MTCNT(x)            (((uint16_t)(((uint16_t)(x)) << FR_TI2CR1_REL_T2MTCNT_SHIFT)) & FR_TI2CR1_REL_T2MTCNT_MASK)
/*! @} */

/*! @name SSSR - Slot Status Selection Register */
/*! @{ */
#define FR_SSSR_SLOTNUMBER_MASK             (0x7FFU)
#define FR_SSSR_SLOTNUMBER_SHIFT            (0U)
#define FR_SSSR_SLOTNUMBER_WIDTH            (11U)
#define FR_SSSR_SLOTNUMBER(x)               (((uint16_t)(((uint16_t)(x)) << FR_SSSR_SLOTNUMBER_SHIFT)) & FR_SSSR_SLOTNUMBER_MASK)
#define FR_SSSR_SEL_MASK                    (0x3000U)
#define FR_SSSR_SEL_SHIFT                   (12U)
#define FR_SSSR_SEL_WIDTH                   (2U)
#define FR_SSSR_SEL(x)                      (((uint16_t)(((uint16_t)(x)) << FR_SSSR_SEL_SHIFT)) & FR_SSSR_SEL_MASK)
#define FR_SSSR_WMD_MASK                    (0x8000U)
#define FR_SSSR_WMD_SHIFT                   (15U)
#define FR_SSSR_WMD_WIDTH                   (1U)
#define FR_SSSR_WMD(x)                      (((uint16_t)(((uint16_t)(x)) << FR_SSSR_WMD_SHIFT)) & FR_SSSR_WMD_MASK)
/*! @} */

/*! @name SSCCR - Slot Status Counter Condition Register */
/*! @{ */
#define FR_SSCCR_STATUSMASK_MASK            (0xFU)
#define FR_SSCCR_STATUSMASK_SHIFT           (0U)
#define FR_SSCCR_STATUSMASK_WIDTH           (4U)
#define FR_SSCCR_STATUSMASK(x)              (((uint16_t)(((uint16_t)(x)) << FR_SSCCR_STATUSMASK_SHIFT)) & FR_SSCCR_STATUSMASK_MASK)
#define FR_SSCCR_SUF_MASK                   (0x10U)
#define FR_SSCCR_SUF_SHIFT                  (4U)
#define FR_SSCCR_SUF_WIDTH                  (1U)
#define FR_SSCCR_SUF(x)                     (((uint16_t)(((uint16_t)(x)) << FR_SSCCR_SUF_SHIFT)) & FR_SSCCR_SUF_MASK)
#define FR_SSCCR_NUF_MASK                   (0x20U)
#define FR_SSCCR_NUF_SHIFT                  (5U)
#define FR_SSCCR_NUF_WIDTH                  (1U)
#define FR_SSCCR_NUF(x)                     (((uint16_t)(((uint16_t)(x)) << FR_SSCCR_NUF_SHIFT)) & FR_SSCCR_NUF_MASK)
#define FR_SSCCR_SYF_MASK                   (0x40U)
#define FR_SSCCR_SYF_SHIFT                  (6U)
#define FR_SSCCR_SYF_WIDTH                  (1U)
#define FR_SSCCR_SYF(x)                     (((uint16_t)(((uint16_t)(x)) << FR_SSCCR_SYF_SHIFT)) & FR_SSCCR_SYF_MASK)
#define FR_SSCCR_VFR_MASK                   (0x80U)
#define FR_SSCCR_VFR_SHIFT                  (7U)
#define FR_SSCCR_VFR_WIDTH                  (1U)
#define FR_SSCCR_VFR(x)                     (((uint16_t)(((uint16_t)(x)) << FR_SSCCR_VFR_SHIFT)) & FR_SSCCR_VFR_MASK)
#define FR_SSCCR_MCY_MASK                   (0x100U)
#define FR_SSCCR_MCY_SHIFT                  (8U)
#define FR_SSCCR_MCY_WIDTH                  (1U)
#define FR_SSCCR_MCY(x)                     (((uint16_t)(((uint16_t)(x)) << FR_SSCCR_MCY_SHIFT)) & FR_SSCCR_MCY_MASK)
#define FR_SSCCR_CNTCFG_MASK                (0x600U)
#define FR_SSCCR_CNTCFG_SHIFT               (9U)
#define FR_SSCCR_CNTCFG_WIDTH               (2U)
#define FR_SSCCR_CNTCFG(x)                  (((uint16_t)(((uint16_t)(x)) << FR_SSCCR_CNTCFG_SHIFT)) & FR_SSCCR_CNTCFG_MASK)
#define FR_SSCCR_SEL_MASK                   (0x3000U)
#define FR_SSCCR_SEL_SHIFT                  (12U)
#define FR_SSCCR_SEL_WIDTH                  (2U)
#define FR_SSCCR_SEL(x)                     (((uint16_t)(((uint16_t)(x)) << FR_SSCCR_SEL_SHIFT)) & FR_SSCCR_SEL_MASK)
#define FR_SSCCR_WMD_MASK                   (0x8000U)
#define FR_SSCCR_WMD_SHIFT                  (15U)
#define FR_SSCCR_WMD_WIDTH                  (1U)
#define FR_SSCCR_WMD(x)                     (((uint16_t)(((uint16_t)(x)) << FR_SSCCR_WMD_SHIFT)) & FR_SSCCR_WMD_MASK)
/*! @} */

/*! @name SSR - Slot Status Register */
/*! @{ */
#define FR_SSR_TCA_MASK                     (0x1U)
#define FR_SSR_TCA_SHIFT                    (0U)
#define FR_SSR_TCA_WIDTH                    (1U)
#define FR_SSR_TCA(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_TCA_SHIFT)) & FR_SSR_TCA_MASK)
#define FR_SSR_BVA_MASK                     (0x2U)
#define FR_SSR_BVA_SHIFT                    (1U)
#define FR_SSR_BVA_WIDTH                    (1U)
#define FR_SSR_BVA(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_BVA_SHIFT)) & FR_SSR_BVA_MASK)
#define FR_SSR_CEA_MASK                     (0x4U)
#define FR_SSR_CEA_SHIFT                    (2U)
#define FR_SSR_CEA_WIDTH                    (1U)
#define FR_SSR_CEA(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_CEA_SHIFT)) & FR_SSR_CEA_MASK)
#define FR_SSR_SEA_MASK                     (0x8U)
#define FR_SSR_SEA_SHIFT                    (3U)
#define FR_SSR_SEA_WIDTH                    (1U)
#define FR_SSR_SEA(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_SEA_SHIFT)) & FR_SSR_SEA_MASK)
#define FR_SSR_SUA_MASK                     (0x10U)
#define FR_SSR_SUA_SHIFT                    (4U)
#define FR_SSR_SUA_WIDTH                    (1U)
#define FR_SSR_SUA(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_SUA_SHIFT)) & FR_SSR_SUA_MASK)
#define FR_SSR_NFA_MASK                     (0x20U)
#define FR_SSR_NFA_SHIFT                    (5U)
#define FR_SSR_NFA_WIDTH                    (1U)
#define FR_SSR_NFA(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_NFA_SHIFT)) & FR_SSR_NFA_MASK)
#define FR_SSR_SYA_MASK                     (0x40U)
#define FR_SSR_SYA_SHIFT                    (6U)
#define FR_SSR_SYA_WIDTH                    (1U)
#define FR_SSR_SYA(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_SYA_SHIFT)) & FR_SSR_SYA_MASK)
#define FR_SSR_VFA_MASK                     (0x80U)
#define FR_SSR_VFA_SHIFT                    (7U)
#define FR_SSR_VFA_WIDTH                    (1U)
#define FR_SSR_VFA(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_VFA_SHIFT)) & FR_SSR_VFA_MASK)
#define FR_SSR_TCB_MASK                     (0x100U)
#define FR_SSR_TCB_SHIFT                    (8U)
#define FR_SSR_TCB_WIDTH                    (1U)
#define FR_SSR_TCB(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_TCB_SHIFT)) & FR_SSR_TCB_MASK)
#define FR_SSR_BVB_MASK                     (0x200U)
#define FR_SSR_BVB_SHIFT                    (9U)
#define FR_SSR_BVB_WIDTH                    (1U)
#define FR_SSR_BVB(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_BVB_SHIFT)) & FR_SSR_BVB_MASK)
#define FR_SSR_CEB_MASK                     (0x400U)
#define FR_SSR_CEB_SHIFT                    (10U)
#define FR_SSR_CEB_WIDTH                    (1U)
#define FR_SSR_CEB(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_CEB_SHIFT)) & FR_SSR_CEB_MASK)
#define FR_SSR_SEB_MASK                     (0x800U)
#define FR_SSR_SEB_SHIFT                    (11U)
#define FR_SSR_SEB_WIDTH                    (1U)
#define FR_SSR_SEB(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_SEB_SHIFT)) & FR_SSR_SEB_MASK)
#define FR_SSR_SUB_MASK                     (0x1000U)
#define FR_SSR_SUB_SHIFT                    (12U)
#define FR_SSR_SUB_WIDTH                    (1U)
#define FR_SSR_SUB(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_SUB_SHIFT)) & FR_SSR_SUB_MASK)
#define FR_SSR_NFB_MASK                     (0x2000U)
#define FR_SSR_NFB_SHIFT                    (13U)
#define FR_SSR_NFB_WIDTH                    (1U)
#define FR_SSR_NFB(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_NFB_SHIFT)) & FR_SSR_NFB_MASK)
#define FR_SSR_SYB_MASK                     (0x4000U)
#define FR_SSR_SYB_SHIFT                    (14U)
#define FR_SSR_SYB_WIDTH                    (1U)
#define FR_SSR_SYB(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_SYB_SHIFT)) & FR_SSR_SYB_MASK)
#define FR_SSR_VFB_MASK                     (0x8000U)
#define FR_SSR_VFB_SHIFT                    (15U)
#define FR_SSR_VFB_WIDTH                    (1U)
#define FR_SSR_VFB(x)                       (((uint16_t)(((uint16_t)(x)) << FR_SSR_VFB_SHIFT)) & FR_SSR_VFB_MASK)
/*! @} */

/*! @name SSCR - Slot Status Counter Register */
/*! @{ */
#define FR_SSCR_SLOTSTATUSCNT_MASK          (0xFFFFU)
#define FR_SSCR_SLOTSTATUSCNT_SHIFT         (0U)
#define FR_SSCR_SLOTSTATUSCNT_WIDTH         (16U)
#define FR_SSCR_SLOTSTATUSCNT(x)            (((uint16_t)(((uint16_t)(x)) << FR_SSCR_SLOTSTATUSCNT_SHIFT)) & FR_SSCR_SLOTSTATUSCNT_MASK)
/*! @} */

/*! @name MTSACFR - MTS A Configuration Register */
/*! @{ */
#define FR_MTSACFR_CYCCNTVAL_MASK           (0x3FU)
#define FR_MTSACFR_CYCCNTVAL_SHIFT          (0U)
#define FR_MTSACFR_CYCCNTVAL_WIDTH          (6U)
#define FR_MTSACFR_CYCCNTVAL(x)             (((uint16_t)(((uint16_t)(x)) << FR_MTSACFR_CYCCNTVAL_SHIFT)) & FR_MTSACFR_CYCCNTVAL_MASK)
#define FR_MTSACFR_CYCCNTMSK_MASK           (0x3F00U)
#define FR_MTSACFR_CYCCNTMSK_SHIFT          (8U)
#define FR_MTSACFR_CYCCNTMSK_WIDTH          (6U)
#define FR_MTSACFR_CYCCNTMSK(x)             (((uint16_t)(((uint16_t)(x)) << FR_MTSACFR_CYCCNTMSK_SHIFT)) & FR_MTSACFR_CYCCNTMSK_MASK)
#define FR_MTSACFR_MTE_MASK                 (0x8000U)
#define FR_MTSACFR_MTE_SHIFT                (15U)
#define FR_MTSACFR_MTE_WIDTH                (1U)
#define FR_MTSACFR_MTE(x)                   (((uint16_t)(((uint16_t)(x)) << FR_MTSACFR_MTE_SHIFT)) & FR_MTSACFR_MTE_MASK)
/*! @} */

/*! @name MTSBCFR - MTS B Configuration Register */
/*! @{ */
#define FR_MTSBCFR_CYCCNTVAL_MASK           (0x3FU)
#define FR_MTSBCFR_CYCCNTVAL_SHIFT          (0U)
#define FR_MTSBCFR_CYCCNTVAL_WIDTH          (6U)
#define FR_MTSBCFR_CYCCNTVAL(x)             (((uint16_t)(((uint16_t)(x)) << FR_MTSBCFR_CYCCNTVAL_SHIFT)) & FR_MTSBCFR_CYCCNTVAL_MASK)
#define FR_MTSBCFR_CYCCNTMSK_MASK           (0x3F00U)
#define FR_MTSBCFR_CYCCNTMSK_SHIFT          (8U)
#define FR_MTSBCFR_CYCCNTMSK_WIDTH          (6U)
#define FR_MTSBCFR_CYCCNTMSK(x)             (((uint16_t)(((uint16_t)(x)) << FR_MTSBCFR_CYCCNTMSK_SHIFT)) & FR_MTSBCFR_CYCCNTMSK_MASK)
#define FR_MTSBCFR_MTE_MASK                 (0x8000U)
#define FR_MTSBCFR_MTE_SHIFT                (15U)
#define FR_MTSBCFR_MTE_WIDTH                (1U)
#define FR_MTSBCFR_MTE(x)                   (((uint16_t)(((uint16_t)(x)) << FR_MTSBCFR_MTE_SHIFT)) & FR_MTSBCFR_MTE_MASK)
/*! @} */

/*! @name RSBIR - Receive Shadow Buffer Index Register */
/*! @{ */
#define FR_RSBIR_RSBIDX_MASK                (0x1FFU)
#define FR_RSBIR_RSBIDX_SHIFT               (0U)
#define FR_RSBIR_RSBIDX_WIDTH               (9U)
#define FR_RSBIR_RSBIDX(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RSBIR_RSBIDX_SHIFT)) & FR_RSBIR_RSBIDX_MASK)
#define FR_RSBIR_SEL_MASK                   (0x3000U)
#define FR_RSBIR_SEL_SHIFT                  (12U)
#define FR_RSBIR_SEL_WIDTH                  (2U)
#define FR_RSBIR_SEL(x)                     (((uint16_t)(((uint16_t)(x)) << FR_RSBIR_SEL_SHIFT)) & FR_RSBIR_SEL_MASK)
#define FR_RSBIR_WMD_MASK                   (0x8000U)
#define FR_RSBIR_WMD_SHIFT                  (15U)
#define FR_RSBIR_WMD_WIDTH                  (1U)
#define FR_RSBIR_WMD(x)                     (((uint16_t)(((uint16_t)(x)) << FR_RSBIR_WMD_SHIFT)) & FR_RSBIR_WMD_MASK)
/*! @} */

/*! @name RFWMSR - Receive FIFO Watermark and Selection Register */
/*! @{ */
#define FR_RFWMSR_SEL_MASK                  (0x1U)
#define FR_RFWMSR_SEL_SHIFT                 (0U)
#define FR_RFWMSR_SEL_WIDTH                 (1U)
#define FR_RFWMSR_SEL(x)                    (((uint16_t)(((uint16_t)(x)) << FR_RFWMSR_SEL_SHIFT)) & FR_RFWMSR_SEL_MASK)
#define FR_RFWMSR_WM_MASK                   (0xFF00U)
#define FR_RFWMSR_WM_SHIFT                  (8U)
#define FR_RFWMSR_WM_WIDTH                  (8U)
#define FR_RFWMSR_WM(x)                     (((uint16_t)(((uint16_t)(x)) << FR_RFWMSR_WM_SHIFT)) & FR_RFWMSR_WM_MASK)
/*! @} */

/*! @name RFSIR - Receive FIFO Start Index Register */
/*! @{ */
#define FR_RFSIR_SIDX_MASK                  (0x3FFU)
#define FR_RFSIR_SIDX_SHIFT                 (0U)
#define FR_RFSIR_SIDX_WIDTH                 (10U)
#define FR_RFSIR_SIDX(x)                    (((uint16_t)(((uint16_t)(x)) << FR_RFSIR_SIDX_SHIFT)) & FR_RFSIR_SIDX_MASK)
/*! @} */

/*! @name RFDSR - Receive FIFO Depth and Size Register */
/*! @{ */
#define FR_RFDSR_ENTRY_SIZE_MASK            (0x7FU)
#define FR_RFDSR_ENTRY_SIZE_SHIFT           (0U)
#define FR_RFDSR_ENTRY_SIZE_WIDTH           (7U)
#define FR_RFDSR_ENTRY_SIZE(x)              (((uint16_t)(((uint16_t)(x)) << FR_RFDSR_ENTRY_SIZE_SHIFT)) & FR_RFDSR_ENTRY_SIZE_MASK)
#define FR_RFDSR_FIFO_DEPTH_MASK            (0xFF00U)
#define FR_RFDSR_FIFO_DEPTH_SHIFT           (8U)
#define FR_RFDSR_FIFO_DEPTH_WIDTH           (8U)
#define FR_RFDSR_FIFO_DEPTH(x)              (((uint16_t)(((uint16_t)(x)) << FR_RFDSR_FIFO_DEPTH_SHIFT)) & FR_RFDSR_FIFO_DEPTH_MASK)
/*! @} */

/*! @name RFARIR - Receive FIFO A Read Index Register */
/*! @{ */
#define FR_RFARIR_RDIDX_MASK                (0x3FFU)
#define FR_RFARIR_RDIDX_SHIFT               (0U)
#define FR_RFARIR_RDIDX_WIDTH               (10U)
#define FR_RFARIR_RDIDX(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFARIR_RDIDX_SHIFT)) & FR_RFARIR_RDIDX_MASK)
/*! @} */

/*! @name RFBRIR - Receive FIFO B Read Index Register */
/*! @{ */
#define FR_RFBRIR_RDIDX_MASK                (0x3FFU)
#define FR_RFBRIR_RDIDX_SHIFT               (0U)
#define FR_RFBRIR_RDIDX_WIDTH               (10U)
#define FR_RFBRIR_RDIDX(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFBRIR_RDIDX_SHIFT)) & FR_RFBRIR_RDIDX_MASK)
/*! @} */

/*! @name RFMIDAFVR - Receive FIFO Message ID Acceptance Filter Value Register */
/*! @{ */
#define FR_RFMIDAFVR_MIDAFVAL_MASK          (0xFFFFU)
#define FR_RFMIDAFVR_MIDAFVAL_SHIFT         (0U)
#define FR_RFMIDAFVR_MIDAFVAL_WIDTH         (16U)
#define FR_RFMIDAFVR_MIDAFVAL(x)            (((uint16_t)(((uint16_t)(x)) << FR_RFMIDAFVR_MIDAFVAL_SHIFT)) & FR_RFMIDAFVR_MIDAFVAL_MASK)
/*! @} */

/*! @name RFMIDAFMR - Receive FIFO Message ID Acceptance Filter Mask Register */
/*! @{ */
#define FR_RFMIDAFMR_MIDAFMSK_MASK          (0xFFFFU)
#define FR_RFMIDAFMR_MIDAFMSK_SHIFT         (0U)
#define FR_RFMIDAFMR_MIDAFMSK_WIDTH         (16U)
#define FR_RFMIDAFMR_MIDAFMSK(x)            (((uint16_t)(((uint16_t)(x)) << FR_RFMIDAFMR_MIDAFMSK_SHIFT)) & FR_RFMIDAFMR_MIDAFMSK_MASK)
/*! @} */

/*! @name RFFIDRFVR - Receive FIFO Frame ID Rejection Filter Value Register */
/*! @{ */
#define FR_RFFIDRFVR_FIDRFVAL_MASK          (0x7FFU)
#define FR_RFFIDRFVR_FIDRFVAL_SHIFT         (0U)
#define FR_RFFIDRFVR_FIDRFVAL_WIDTH         (11U)
#define FR_RFFIDRFVR_FIDRFVAL(x)            (((uint16_t)(((uint16_t)(x)) << FR_RFFIDRFVR_FIDRFVAL_SHIFT)) & FR_RFFIDRFVR_FIDRFVAL_MASK)
/*! @} */

/*! @name RFFIDRFMR - Receive FIFO Frame ID Rejection Filter Mask Register */
/*! @{ */
#define FR_RFFIDRFMR_FIDRFMSK_MASK          (0x7FFU)
#define FR_RFFIDRFMR_FIDRFMSK_SHIFT         (0U)
#define FR_RFFIDRFMR_FIDRFMSK_WIDTH         (11U)
#define FR_RFFIDRFMR_FIDRFMSK(x)            (((uint16_t)(((uint16_t)(x)) << FR_RFFIDRFMR_FIDRFMSK_SHIFT)) & FR_RFFIDRFMR_FIDRFMSK_MASK)
/*! @} */

/*! @name RFRFCFR - Receive FIFO Range Filter Configuration Register */
/*! @{ */
#define FR_RFRFCFR_SID_MASK                 (0x7FFU)
#define FR_RFRFCFR_SID_SHIFT                (0U)
#define FR_RFRFCFR_SID_WIDTH                (11U)
#define FR_RFRFCFR_SID(x)                   (((uint16_t)(((uint16_t)(x)) << FR_RFRFCFR_SID_SHIFT)) & FR_RFRFCFR_SID_MASK)
#define FR_RFRFCFR_SEL_MASK                 (0x3000U)
#define FR_RFRFCFR_SEL_SHIFT                (12U)
#define FR_RFRFCFR_SEL_WIDTH                (2U)
#define FR_RFRFCFR_SEL(x)                   (((uint16_t)(((uint16_t)(x)) << FR_RFRFCFR_SEL_SHIFT)) & FR_RFRFCFR_SEL_MASK)
#define FR_RFRFCFR_IBD_MASK                 (0x4000U)
#define FR_RFRFCFR_IBD_SHIFT                (14U)
#define FR_RFRFCFR_IBD_WIDTH                (1U)
#define FR_RFRFCFR_IBD(x)                   (((uint16_t)(((uint16_t)(x)) << FR_RFRFCFR_IBD_SHIFT)) & FR_RFRFCFR_IBD_MASK)
#define FR_RFRFCFR_WMD_MASK                 (0x8000U)
#define FR_RFRFCFR_WMD_SHIFT                (15U)
#define FR_RFRFCFR_WMD_WIDTH                (1U)
#define FR_RFRFCFR_WMD(x)                   (((uint16_t)(((uint16_t)(x)) << FR_RFRFCFR_WMD_SHIFT)) & FR_RFRFCFR_WMD_MASK)
/*! @} */

/*! @name RFRFCTR - Receive FIFO Range Filter Control Register */
/*! @{ */
#define FR_RFRFCTR_F0EN_MASK                (0x1U)
#define FR_RFRFCTR_F0EN_SHIFT               (0U)
#define FR_RFRFCTR_F0EN_WIDTH               (1U)
#define FR_RFRFCTR_F0EN(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFRFCTR_F0EN_SHIFT)) & FR_RFRFCTR_F0EN_MASK)
#define FR_RFRFCTR_F1EN_MASK                (0x2U)
#define FR_RFRFCTR_F1EN_SHIFT               (1U)
#define FR_RFRFCTR_F1EN_WIDTH               (1U)
#define FR_RFRFCTR_F1EN(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFRFCTR_F1EN_SHIFT)) & FR_RFRFCTR_F1EN_MASK)
#define FR_RFRFCTR_F2EN_MASK                (0x4U)
#define FR_RFRFCTR_F2EN_SHIFT               (2U)
#define FR_RFRFCTR_F2EN_WIDTH               (1U)
#define FR_RFRFCTR_F2EN(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFRFCTR_F2EN_SHIFT)) & FR_RFRFCTR_F2EN_MASK)
#define FR_RFRFCTR_F3EN_MASK                (0x8U)
#define FR_RFRFCTR_F3EN_SHIFT               (3U)
#define FR_RFRFCTR_F3EN_WIDTH               (1U)
#define FR_RFRFCTR_F3EN(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFRFCTR_F3EN_SHIFT)) & FR_RFRFCTR_F3EN_MASK)
#define FR_RFRFCTR_F0MD_MASK                (0x100U)
#define FR_RFRFCTR_F0MD_SHIFT               (8U)
#define FR_RFRFCTR_F0MD_WIDTH               (1U)
#define FR_RFRFCTR_F0MD(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFRFCTR_F0MD_SHIFT)) & FR_RFRFCTR_F0MD_MASK)
#define FR_RFRFCTR_F1MD_MASK                (0x200U)
#define FR_RFRFCTR_F1MD_SHIFT               (9U)
#define FR_RFRFCTR_F1MD_WIDTH               (1U)
#define FR_RFRFCTR_F1MD(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFRFCTR_F1MD_SHIFT)) & FR_RFRFCTR_F1MD_MASK)
#define FR_RFRFCTR_F2MD_MASK                (0x400U)
#define FR_RFRFCTR_F2MD_SHIFT               (10U)
#define FR_RFRFCTR_F2MD_WIDTH               (1U)
#define FR_RFRFCTR_F2MD(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFRFCTR_F2MD_SHIFT)) & FR_RFRFCTR_F2MD_MASK)
#define FR_RFRFCTR_F3MD_MASK                (0x800U)
#define FR_RFRFCTR_F3MD_SHIFT               (11U)
#define FR_RFRFCTR_F3MD_WIDTH               (1U)
#define FR_RFRFCTR_F3MD(x)                  (((uint16_t)(((uint16_t)(x)) << FR_RFRFCTR_F3MD_SHIFT)) & FR_RFRFCTR_F3MD_MASK)
/*! @} */

/*! @name LDTXSLAR - Last Dynamic Transmit Slot Channel A Register */
/*! @{ */
#define FR_LDTXSLAR_LDYNTXSLOTA_MASK        (0x7FFU)
#define FR_LDTXSLAR_LDYNTXSLOTA_SHIFT       (0U)
#define FR_LDTXSLAR_LDYNTXSLOTA_WIDTH       (11U)
#define FR_LDTXSLAR_LDYNTXSLOTA(x)          (((uint16_t)(((uint16_t)(x)) << FR_LDTXSLAR_LDYNTXSLOTA_SHIFT)) & FR_LDTXSLAR_LDYNTXSLOTA_MASK)
/*! @} */

/*! @name LDTXSLBR - Last Dynamic Transmit Slot Channel B Register */
/*! @{ */
#define FR_LDTXSLBR_LDYNTXSLOTB_MASK        (0x7FFU)
#define FR_LDTXSLBR_LDYNTXSLOTB_SHIFT       (0U)
#define FR_LDTXSLBR_LDYNTXSLOTB_WIDTH       (11U)
#define FR_LDTXSLBR_LDYNTXSLOTB(x)          (((uint16_t)(((uint16_t)(x)) << FR_LDTXSLBR_LDYNTXSLOTB_SHIFT)) & FR_LDTXSLBR_LDYNTXSLOTB_MASK)
/*! @} */

/*! @name PCR0 - Protocol Configuration Register 0 */
/*! @{ */
#define FR_PCR0_static_slot_length_MASK     (0x3FFU)
#define FR_PCR0_static_slot_length_SHIFT    (0U)
#define FR_PCR0_static_slot_length_WIDTH    (10U)
#define FR_PCR0_static_slot_length(x)       (((uint16_t)(((uint16_t)(x)) << FR_PCR0_static_slot_length_SHIFT)) & FR_PCR0_static_slot_length_MASK)
#define FR_PCR0_action_point_offset_MASK    (0xFC00U)
#define FR_PCR0_action_point_offset_SHIFT   (10U)
#define FR_PCR0_action_point_offset_WIDTH   (6U)
#define FR_PCR0_action_point_offset(x)      (((uint16_t)(((uint16_t)(x)) << FR_PCR0_action_point_offset_SHIFT)) & FR_PCR0_action_point_offset_MASK)
/*! @} */

/*! @name PCR1 - Protocol Configuration Register 1 */
/*! @{ */
#define FR_PCR1_macro_after_first_static_slot_MASK (0x3FFFU)
#define FR_PCR1_macro_after_first_static_slot_SHIFT (0U)
#define FR_PCR1_macro_after_first_static_slot_WIDTH (14U)
#define FR_PCR1_macro_after_first_static_slot(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR1_macro_after_first_static_slot_SHIFT)) & FR_PCR1_macro_after_first_static_slot_MASK)
/*! @} */

/*! @name PCR2 - Protocol Configuration Register 2 */
/*! @{ */
#define FR_PCR2_number_of_static_slots_MASK (0x3FFU)
#define FR_PCR2_number_of_static_slots_SHIFT (0U)
#define FR_PCR2_number_of_static_slots_WIDTH (10U)
#define FR_PCR2_number_of_static_slots(x)   (((uint16_t)(((uint16_t)(x)) << FR_PCR2_number_of_static_slots_SHIFT)) & FR_PCR2_number_of_static_slots_MASK)
#define FR_PCR2_minislot_after_action_point_MASK (0xFC00U)
#define FR_PCR2_minislot_after_action_point_SHIFT (10U)
#define FR_PCR2_minislot_after_action_point_WIDTH (6U)
#define FR_PCR2_minislot_after_action_point(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR2_minislot_after_action_point_SHIFT)) & FR_PCR2_minislot_after_action_point_MASK)
/*! @} */

/*! @name PCR3 - Protocol Configuration Register 3 */
/*! @{ */
#define FR_PCR3_coldstart_attempts_MASK     (0x1FU)
#define FR_PCR3_coldstart_attempts_SHIFT    (0U)
#define FR_PCR3_coldstart_attempts_WIDTH    (5U)
#define FR_PCR3_coldstart_attempts(x)       (((uint16_t)(((uint16_t)(x)) << FR_PCR3_coldstart_attempts_SHIFT)) & FR_PCR3_coldstart_attempts_MASK)
#define FR_PCR3_minislot_action_point_offset_MASK (0x3E0U)
#define FR_PCR3_minislot_action_point_offset_SHIFT (5U)
#define FR_PCR3_minislot_action_point_offset_WIDTH (5U)
#define FR_PCR3_minislot_action_point_offset(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR3_minislot_action_point_offset_SHIFT)) & FR_PCR3_minislot_action_point_offset_MASK)
#define FR_PCR3_wakeup_symbol_rx_low_MASK   (0xFC00U)
#define FR_PCR3_wakeup_symbol_rx_low_SHIFT  (10U)
#define FR_PCR3_wakeup_symbol_rx_low_WIDTH  (6U)
#define FR_PCR3_wakeup_symbol_rx_low(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR3_wakeup_symbol_rx_low_SHIFT)) & FR_PCR3_wakeup_symbol_rx_low_MASK)
/*! @} */

/*! @name PCR4 - Protocol Configuration Register 4 */
/*! @{ */
#define FR_PCR4_wakeup_symbol_rx_window_MASK (0x1FFU)
#define FR_PCR4_wakeup_symbol_rx_window_SHIFT (0U)
#define FR_PCR4_wakeup_symbol_rx_window_WIDTH (9U)
#define FR_PCR4_wakeup_symbol_rx_window(x)  (((uint16_t)(((uint16_t)(x)) << FR_PCR4_wakeup_symbol_rx_window_SHIFT)) & FR_PCR4_wakeup_symbol_rx_window_MASK)
#define FR_PCR4_cas_rx_low_max_MASK         (0xFE00U)
#define FR_PCR4_cas_rx_low_max_SHIFT        (9U)
#define FR_PCR4_cas_rx_low_max_WIDTH        (7U)
#define FR_PCR4_cas_rx_low_max(x)           (((uint16_t)(((uint16_t)(x)) << FR_PCR4_cas_rx_low_max_SHIFT)) & FR_PCR4_cas_rx_low_max_MASK)
/*! @} */

/*! @name PCR5 - Protocol Configuration Register 5 */
/*! @{ */
#define FR_PCR5_wakeup_symbol_rx_idle_MASK  (0x3FU)
#define FR_PCR5_wakeup_symbol_rx_idle_SHIFT (0U)
#define FR_PCR5_wakeup_symbol_rx_idle_WIDTH (6U)
#define FR_PCR5_wakeup_symbol_rx_idle(x)    (((uint16_t)(((uint16_t)(x)) << FR_PCR5_wakeup_symbol_rx_idle_SHIFT)) & FR_PCR5_wakeup_symbol_rx_idle_MASK)
#define FR_PCR5_wakeup_symbol_tx_low_MASK   (0xFC0U)
#define FR_PCR5_wakeup_symbol_tx_low_SHIFT  (6U)
#define FR_PCR5_wakeup_symbol_tx_low_WIDTH  (6U)
#define FR_PCR5_wakeup_symbol_tx_low(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR5_wakeup_symbol_tx_low_SHIFT)) & FR_PCR5_wakeup_symbol_tx_low_MASK)
#define FR_PCR5_tss_transmitter_MASK        (0xF000U)
#define FR_PCR5_tss_transmitter_SHIFT       (12U)
#define FR_PCR5_tss_transmitter_WIDTH       (4U)
#define FR_PCR5_tss_transmitter(x)          (((uint16_t)(((uint16_t)(x)) << FR_PCR5_tss_transmitter_SHIFT)) & FR_PCR5_tss_transmitter_MASK)
/*! @} */

/*! @name PCR6 - Protocol Configuration Register 6 */
/*! @{ */
#define FR_PCR6_macro_initial_offset_a_MASK (0x7FU)
#define FR_PCR6_macro_initial_offset_a_SHIFT (0U)
#define FR_PCR6_macro_initial_offset_a_WIDTH (7U)
#define FR_PCR6_macro_initial_offset_a(x)   (((uint16_t)(((uint16_t)(x)) << FR_PCR6_macro_initial_offset_a_SHIFT)) & FR_PCR6_macro_initial_offset_a_MASK)
#define FR_PCR6_symbol_window_after_action_point_MASK (0x7F80U)
#define FR_PCR6_symbol_window_after_action_point_SHIFT (7U)
#define FR_PCR6_symbol_window_after_action_point_WIDTH (8U)
#define FR_PCR6_symbol_window_after_action_point(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR6_symbol_window_after_action_point_SHIFT)) & FR_PCR6_symbol_window_after_action_point_MASK)
/*! @} */

/*! @name PCR7 - Protocol Configuration Register 7 */
/*! @{ */
#define FR_PCR7_micro_per_macro_nom_half_MASK (0x7FU)
#define FR_PCR7_micro_per_macro_nom_half_SHIFT (0U)
#define FR_PCR7_micro_per_macro_nom_half_WIDTH (7U)
#define FR_PCR7_micro_per_macro_nom_half(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR7_micro_per_macro_nom_half_SHIFT)) & FR_PCR7_micro_per_macro_nom_half_MASK)
#define FR_PCR7_decoding_correction_b_MASK  (0xFF80U)
#define FR_PCR7_decoding_correction_b_SHIFT (7U)
#define FR_PCR7_decoding_correction_b_WIDTH (9U)
#define FR_PCR7_decoding_correction_b(x)    (((uint16_t)(((uint16_t)(x)) << FR_PCR7_decoding_correction_b_SHIFT)) & FR_PCR7_decoding_correction_b_MASK)
/*! @} */

/*! @name PCR8 - Protocol Configuration Register 8 */
/*! @{ */
#define FR_PCR8_wakeup_symbol_tx_idle_MASK  (0xFFU)
#define FR_PCR8_wakeup_symbol_tx_idle_SHIFT (0U)
#define FR_PCR8_wakeup_symbol_tx_idle_WIDTH (8U)
#define FR_PCR8_wakeup_symbol_tx_idle(x)    (((uint16_t)(((uint16_t)(x)) << FR_PCR8_wakeup_symbol_tx_idle_SHIFT)) & FR_PCR8_wakeup_symbol_tx_idle_MASK)
#define FR_PCR8_max_without_clock_correction_passive_MASK (0xF00U)
#define FR_PCR8_max_without_clock_correction_passive_SHIFT (8U)
#define FR_PCR8_max_without_clock_correction_passive_WIDTH (4U)
#define FR_PCR8_max_without_clock_correction_passive(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR8_max_without_clock_correction_passive_SHIFT)) & FR_PCR8_max_without_clock_correction_passive_MASK)
#define FR_PCR8_max_without_clock_correction_fatal_MASK (0xF000U)
#define FR_PCR8_max_without_clock_correction_fatal_SHIFT (12U)
#define FR_PCR8_max_without_clock_correction_fatal_WIDTH (4U)
#define FR_PCR8_max_without_clock_correction_fatal(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR8_max_without_clock_correction_fatal_SHIFT)) & FR_PCR8_max_without_clock_correction_fatal_MASK)
/*! @} */

/*! @name PCR9 - Protocol Configuration Register 9 */
/*! @{ */
#define FR_PCR9_offset_correction_out_MASK  (0x3FFFU)
#define FR_PCR9_offset_correction_out_SHIFT (0U)
#define FR_PCR9_offset_correction_out_WIDTH (14U)
#define FR_PCR9_offset_correction_out(x)    (((uint16_t)(((uint16_t)(x)) << FR_PCR9_offset_correction_out_SHIFT)) & FR_PCR9_offset_correction_out_MASK)
#define FR_PCR9_symbol_window_exists_MASK   (0x4000U)
#define FR_PCR9_symbol_window_exists_SHIFT  (14U)
#define FR_PCR9_symbol_window_exists_WIDTH  (1U)
#define FR_PCR9_symbol_window_exists(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR9_symbol_window_exists_SHIFT)) & FR_PCR9_symbol_window_exists_MASK)
#define FR_PCR9_minislot_exists_MASK        (0x8000U)
#define FR_PCR9_minislot_exists_SHIFT       (15U)
#define FR_PCR9_minislot_exists_WIDTH       (1U)
#define FR_PCR9_minislot_exists(x)          (((uint16_t)(((uint16_t)(x)) << FR_PCR9_minislot_exists_SHIFT)) & FR_PCR9_minislot_exists_MASK)
/*! @} */

/*! @name PCR10 - Protocol Configuration Register 10 */
/*! @{ */
#define FR_PCR10_macro_per_cycle_MASK       (0x3FFFU)
#define FR_PCR10_macro_per_cycle_SHIFT      (0U)
#define FR_PCR10_macro_per_cycle_WIDTH      (14U)
#define FR_PCR10_macro_per_cycle(x)         (((uint16_t)(((uint16_t)(x)) << FR_PCR10_macro_per_cycle_SHIFT)) & FR_PCR10_macro_per_cycle_MASK)
#define FR_PCR10_wakeup_channel_MASK        (0x4000U)
#define FR_PCR10_wakeup_channel_SHIFT       (14U)
#define FR_PCR10_wakeup_channel_WIDTH       (1U)
#define FR_PCR10_wakeup_channel(x)          (((uint16_t)(((uint16_t)(x)) << FR_PCR10_wakeup_channel_SHIFT)) & FR_PCR10_wakeup_channel_MASK)
#define FR_PCR10_single_slot_enabled_MASK   (0x8000U)
#define FR_PCR10_single_slot_enabled_SHIFT  (15U)
#define FR_PCR10_single_slot_enabled_WIDTH  (1U)
#define FR_PCR10_single_slot_enabled(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR10_single_slot_enabled_SHIFT)) & FR_PCR10_single_slot_enabled_MASK)
/*! @} */

/*! @name PCR11 - Protocol Configuration Register 11 */
/*! @{ */
#define FR_PCR11_offset_correction_start_MASK (0x3FFFU)
#define FR_PCR11_offset_correction_start_SHIFT (0U)
#define FR_PCR11_offset_correction_start_WIDTH (14U)
#define FR_PCR11_offset_correction_start(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR11_offset_correction_start_SHIFT)) & FR_PCR11_offset_correction_start_MASK)
#define FR_PCR11_key_slot_used_for_sync_MASK (0x4000U)
#define FR_PCR11_key_slot_used_for_sync_SHIFT (14U)
#define FR_PCR11_key_slot_used_for_sync_WIDTH (1U)
#define FR_PCR11_key_slot_used_for_sync(x)  (((uint16_t)(((uint16_t)(x)) << FR_PCR11_key_slot_used_for_sync_SHIFT)) & FR_PCR11_key_slot_used_for_sync_MASK)
#define FR_PCR11_key_slot_used_for_startup_MASK (0x8000U)
#define FR_PCR11_key_slot_used_for_startup_SHIFT (15U)
#define FR_PCR11_key_slot_used_for_startup_WIDTH (1U)
#define FR_PCR11_key_slot_used_for_startup(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR11_key_slot_used_for_startup_SHIFT)) & FR_PCR11_key_slot_used_for_startup_MASK)
/*! @} */

/*! @name PCR12 - Protocol Configuration Register 12 */
/*! @{ */
#define FR_PCR12_key_slot_header_crc_MASK   (0x7FFU)
#define FR_PCR12_key_slot_header_crc_SHIFT  (0U)
#define FR_PCR12_key_slot_header_crc_WIDTH  (11U)
#define FR_PCR12_key_slot_header_crc(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR12_key_slot_header_crc_SHIFT)) & FR_PCR12_key_slot_header_crc_MASK)
#define FR_PCR12_allow_passive_to_active_MASK (0xF800U)
#define FR_PCR12_allow_passive_to_active_SHIFT (11U)
#define FR_PCR12_allow_passive_to_active_WIDTH (5U)
#define FR_PCR12_allow_passive_to_active(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR12_allow_passive_to_active_SHIFT)) & FR_PCR12_allow_passive_to_active_MASK)
/*! @} */

/*! @name PCR13 - Protocol Configuration Register 13 */
/*! @{ */
#define FR_PCR13_static_slot_after_action_point_MASK (0x3FFU)
#define FR_PCR13_static_slot_after_action_point_SHIFT (0U)
#define FR_PCR13_static_slot_after_action_point_WIDTH (10U)
#define FR_PCR13_static_slot_after_action_point(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR13_static_slot_after_action_point_SHIFT)) & FR_PCR13_static_slot_after_action_point_MASK)
#define FR_PCR13_first_minislot_action_point_offset_MASK (0xFC00U)
#define FR_PCR13_first_minislot_action_point_offset_SHIFT (10U)
#define FR_PCR13_first_minislot_action_point_offset_WIDTH (6U)
#define FR_PCR13_first_minislot_action_point_offset(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR13_first_minislot_action_point_offset_SHIFT)) & FR_PCR13_first_minislot_action_point_offset_MASK)
/*! @} */

/*! @name PCR14 - Protocol Configuration Register 14 */
/*! @{ */
#define FR_PCR14_listen_timeout_MASK        (0x1FU)
#define FR_PCR14_listen_timeout_SHIFT       (0U)
#define FR_PCR14_listen_timeout_WIDTH       (5U)
#define FR_PCR14_listen_timeout(x)          (((uint16_t)(((uint16_t)(x)) << FR_PCR14_listen_timeout_SHIFT)) & FR_PCR14_listen_timeout_MASK)
#define FR_PCR14_rate_correction_out_MASK   (0xFFE0U)
#define FR_PCR14_rate_correction_out_SHIFT  (5U)
#define FR_PCR14_rate_correction_out_WIDTH  (11U)
#define FR_PCR14_rate_correction_out(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR14_rate_correction_out_SHIFT)) & FR_PCR14_rate_correction_out_MASK)
/*! @} */

/*! @name PCR15 - Protocol Configuration Register 15 */
/*! @{ */
#define FR_PCR15_listen_timeout_MASK        (0xFFFFU)
#define FR_PCR15_listen_timeout_SHIFT       (0U)
#define FR_PCR15_listen_timeout_WIDTH       (16U)
#define FR_PCR15_listen_timeout(x)          (((uint16_t)(((uint16_t)(x)) << FR_PCR15_listen_timeout_SHIFT)) & FR_PCR15_listen_timeout_MASK)
/*! @} */

/*! @name PCR16 - Protocol Configuration Register 16 */
/*! @{ */
#define FR_PCR16_noise_listen_timeout_MASK  (0x1FFU)
#define FR_PCR16_noise_listen_timeout_SHIFT (0U)
#define FR_PCR16_noise_listen_timeout_WIDTH (9U)
#define FR_PCR16_noise_listen_timeout(x)    (((uint16_t)(((uint16_t)(x)) << FR_PCR16_noise_listen_timeout_SHIFT)) & FR_PCR16_noise_listen_timeout_MASK)
#define FR_PCR16_macro_initial_offset_b_MASK (0xFE00U)
#define FR_PCR16_macro_initial_offset_b_SHIFT (9U)
#define FR_PCR16_macro_initial_offset_b_WIDTH (7U)
#define FR_PCR16_macro_initial_offset_b(x)  (((uint16_t)(((uint16_t)(x)) << FR_PCR16_macro_initial_offset_b_SHIFT)) & FR_PCR16_macro_initial_offset_b_MASK)
/*! @} */

/*! @name PCR17 - Protocol Configuration Register 17 */
/*! @{ */
#define FR_PCR17_noise_listen_timeout_MASK  (0xFFFFU)
#define FR_PCR17_noise_listen_timeout_SHIFT (0U)
#define FR_PCR17_noise_listen_timeout_WIDTH (16U)
#define FR_PCR17_noise_listen_timeout(x)    (((uint16_t)(((uint16_t)(x)) << FR_PCR17_noise_listen_timeout_SHIFT)) & FR_PCR17_noise_listen_timeout_MASK)
/*! @} */

/*! @name PCR18 - Protocol Configuration Register 18 */
/*! @{ */
#define FR_PCR18_key_slot_id_MASK           (0x3FFU)
#define FR_PCR18_key_slot_id_SHIFT          (0U)
#define FR_PCR18_key_slot_id_WIDTH          (10U)
#define FR_PCR18_key_slot_id(x)             (((uint16_t)(((uint16_t)(x)) << FR_PCR18_key_slot_id_SHIFT)) & FR_PCR18_key_slot_id_MASK)
#define FR_PCR18_wakeup_pattern_MASK        (0xFC00U)
#define FR_PCR18_wakeup_pattern_SHIFT       (10U)
#define FR_PCR18_wakeup_pattern_WIDTH       (6U)
#define FR_PCR18_wakeup_pattern(x)          (((uint16_t)(((uint16_t)(x)) << FR_PCR18_wakeup_pattern_SHIFT)) & FR_PCR18_wakeup_pattern_MASK)
/*! @} */

/*! @name PCR19 - Protocol Configuration Register 19 */
/*! @{ */
#define FR_PCR19_payload_length_static_MASK (0x7FU)
#define FR_PCR19_payload_length_static_SHIFT (0U)
#define FR_PCR19_payload_length_static_WIDTH (7U)
#define FR_PCR19_payload_length_static(x)   (((uint16_t)(((uint16_t)(x)) << FR_PCR19_payload_length_static_SHIFT)) & FR_PCR19_payload_length_static_MASK)
#define FR_PCR19_decoding_correction_a_MASK (0xFF80U)
#define FR_PCR19_decoding_correction_a_SHIFT (7U)
#define FR_PCR19_decoding_correction_a_WIDTH (9U)
#define FR_PCR19_decoding_correction_a(x)   (((uint16_t)(((uint16_t)(x)) << FR_PCR19_decoding_correction_a_SHIFT)) & FR_PCR19_decoding_correction_a_MASK)
/*! @} */

/*! @name PCR20 - Protocol Configuration Register 20 */
/*! @{ */
#define FR_PCR20_micro_initial_offset_a_MASK (0xFFU)
#define FR_PCR20_micro_initial_offset_a_SHIFT (0U)
#define FR_PCR20_micro_initial_offset_a_WIDTH (8U)
#define FR_PCR20_micro_initial_offset_a(x)  (((uint16_t)(((uint16_t)(x)) << FR_PCR20_micro_initial_offset_a_SHIFT)) & FR_PCR20_micro_initial_offset_a_MASK)
#define FR_PCR20_micro_initial_offset_b_MASK (0xFF00U)
#define FR_PCR20_micro_initial_offset_b_SHIFT (8U)
#define FR_PCR20_micro_initial_offset_b_WIDTH (8U)
#define FR_PCR20_micro_initial_offset_b(x)  (((uint16_t)(((uint16_t)(x)) << FR_PCR20_micro_initial_offset_b_SHIFT)) & FR_PCR20_micro_initial_offset_b_MASK)
/*! @} */

/*! @name PCR21 - Protocol Configuration Register 21 */
/*! @{ */
#define FR_PCR21_latest_tx_MASK             (0x1FFFU)
#define FR_PCR21_latest_tx_SHIFT            (0U)
#define FR_PCR21_latest_tx_WIDTH            (13U)
#define FR_PCR21_latest_tx(x)               (((uint16_t)(((uint16_t)(x)) << FR_PCR21_latest_tx_SHIFT)) & FR_PCR21_latest_tx_MASK)
#define FR_PCR21_extern_rate_correction_MASK (0xE000U)
#define FR_PCR21_extern_rate_correction_SHIFT (13U)
#define FR_PCR21_extern_rate_correction_WIDTH (3U)
#define FR_PCR21_extern_rate_correction(x)  (((uint16_t)(((uint16_t)(x)) << FR_PCR21_extern_rate_correction_SHIFT)) & FR_PCR21_extern_rate_correction_MASK)
/*! @} */

/*! @name PCR22 - Protocol Configuration Register 22 */
/*! @{ */
#define FR_PCR22_micro_per_cycle_MASK       (0xFU)
#define FR_PCR22_micro_per_cycle_SHIFT      (0U)
#define FR_PCR22_micro_per_cycle_WIDTH      (4U)
#define FR_PCR22_micro_per_cycle(x)         (((uint16_t)(((uint16_t)(x)) << FR_PCR22_micro_per_cycle_SHIFT)) & FR_PCR22_micro_per_cycle_MASK)
#define FR_PCR22_comp_accepted_startup_range_a_MASK (0x7FF0U)
#define FR_PCR22_comp_accepted_startup_range_a_SHIFT (4U)
#define FR_PCR22_comp_accepted_startup_range_a_WIDTH (11U)
#define FR_PCR22_comp_accepted_startup_range_a(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR22_comp_accepted_startup_range_a_SHIFT)) & FR_PCR22_comp_accepted_startup_range_a_MASK)
/*! @} */

/*! @name PCR23 - Protocol Configuration Register 23 */
/*! @{ */
#define FR_PCR23_micro_per_cycle_MASK       (0xFFFFU)
#define FR_PCR23_micro_per_cycle_SHIFT      (0U)
#define FR_PCR23_micro_per_cycle_WIDTH      (16U)
#define FR_PCR23_micro_per_cycle(x)         (((uint16_t)(((uint16_t)(x)) << FR_PCR23_micro_per_cycle_SHIFT)) & FR_PCR23_micro_per_cycle_MASK)
/*! @} */

/*! @name PCR24 - Protocol Configuration Register 24 */
/*! @{ */
#define FR_PCR24_micro_per_cycle_min_MASK   (0xFU)
#define FR_PCR24_micro_per_cycle_min_SHIFT  (0U)
#define FR_PCR24_micro_per_cycle_min_WIDTH  (4U)
#define FR_PCR24_micro_per_cycle_min(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR24_micro_per_cycle_min_SHIFT)) & FR_PCR24_micro_per_cycle_min_MASK)
#define FR_PCR24_max_payload_length_dynamic_MASK (0x7F0U)
#define FR_PCR24_max_payload_length_dynamic_SHIFT (4U)
#define FR_PCR24_max_payload_length_dynamic_WIDTH (7U)
#define FR_PCR24_max_payload_length_dynamic(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR24_max_payload_length_dynamic_SHIFT)) & FR_PCR24_max_payload_length_dynamic_MASK)
#define FR_PCR24_cluster_drift_damping_MASK (0xF800U)
#define FR_PCR24_cluster_drift_damping_SHIFT (11U)
#define FR_PCR24_cluster_drift_damping_WIDTH (5U)
#define FR_PCR24_cluster_drift_damping(x)   (((uint16_t)(((uint16_t)(x)) << FR_PCR24_cluster_drift_damping_SHIFT)) & FR_PCR24_cluster_drift_damping_MASK)
/*! @} */

/*! @name PCR25 - Protocol Configuration Register 25 */
/*! @{ */
#define FR_PCR25_micro_per_cycle_min_MASK   (0xFFFFU)
#define FR_PCR25_micro_per_cycle_min_SHIFT  (0U)
#define FR_PCR25_micro_per_cycle_min_WIDTH  (16U)
#define FR_PCR25_micro_per_cycle_min(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR25_micro_per_cycle_min_SHIFT)) & FR_PCR25_micro_per_cycle_min_MASK)
/*! @} */

/*! @name PCR26 - Protocol Configuration Register 26 */
/*! @{ */
#define FR_PCR26_micro_per_cycle_max_MASK   (0xFU)
#define FR_PCR26_micro_per_cycle_max_SHIFT  (0U)
#define FR_PCR26_micro_per_cycle_max_WIDTH  (4U)
#define FR_PCR26_micro_per_cycle_max(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR26_micro_per_cycle_max_SHIFT)) & FR_PCR26_micro_per_cycle_max_MASK)
#define FR_PCR26_comp_accepted_startup_range_b_MASK (0x7FF0U)
#define FR_PCR26_comp_accepted_startup_range_b_SHIFT (4U)
#define FR_PCR26_comp_accepted_startup_range_b_WIDTH (11U)
#define FR_PCR26_comp_accepted_startup_range_b(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR26_comp_accepted_startup_range_b_SHIFT)) & FR_PCR26_comp_accepted_startup_range_b_MASK)
#define FR_PCR26_allow_halt_due_to_clock_MASK (0x8000U)
#define FR_PCR26_allow_halt_due_to_clock_SHIFT (15U)
#define FR_PCR26_allow_halt_due_to_clock_WIDTH (1U)
#define FR_PCR26_allow_halt_due_to_clock(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR26_allow_halt_due_to_clock_SHIFT)) & FR_PCR26_allow_halt_due_to_clock_MASK)
/*! @} */

/*! @name PCR27 - Protocol Configuration Register 27 */
/*! @{ */
#define FR_PCR27_micro_per_cycle_max_MASK   (0xFFFFU)
#define FR_PCR27_micro_per_cycle_max_SHIFT  (0U)
#define FR_PCR27_micro_per_cycle_max_WIDTH  (16U)
#define FR_PCR27_micro_per_cycle_max(x)     (((uint16_t)(((uint16_t)(x)) << FR_PCR27_micro_per_cycle_max_SHIFT)) & FR_PCR27_micro_per_cycle_max_MASK)
/*! @} */

/*! @name PCR28 - Protocol Configuration Register 28 */
/*! @{ */
#define FR_PCR28_macro_after_offset_correction_MASK (0x3FFFU)
#define FR_PCR28_macro_after_offset_correction_SHIFT (0U)
#define FR_PCR28_macro_after_offset_correction_WIDTH (14U)
#define FR_PCR28_macro_after_offset_correction(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR28_macro_after_offset_correction_SHIFT)) & FR_PCR28_macro_after_offset_correction_MASK)
#define FR_PCR28_dynamic_slot_idle_phase_MASK (0xC000U)
#define FR_PCR28_dynamic_slot_idle_phase_SHIFT (14U)
#define FR_PCR28_dynamic_slot_idle_phase_WIDTH (2U)
#define FR_PCR28_dynamic_slot_idle_phase(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR28_dynamic_slot_idle_phase_SHIFT)) & FR_PCR28_dynamic_slot_idle_phase_MASK)
/*! @} */

/*! @name PCR29 - Protocol Configuration Register 29 */
/*! @{ */
#define FR_PCR29_minislots_max_MASK         (0x1FFFU)
#define FR_PCR29_minislots_max_SHIFT        (0U)
#define FR_PCR29_minislots_max_WIDTH        (13U)
#define FR_PCR29_minislots_max(x)           (((uint16_t)(((uint16_t)(x)) << FR_PCR29_minislots_max_SHIFT)) & FR_PCR29_minislots_max_MASK)
#define FR_PCR29_extern_offset_correction_MASK (0xE000U)
#define FR_PCR29_extern_offset_correction_SHIFT (13U)
#define FR_PCR29_extern_offset_correction_WIDTH (3U)
#define FR_PCR29_extern_offset_correction(x) (((uint16_t)(((uint16_t)(x)) << FR_PCR29_extern_offset_correction_SHIFT)) & FR_PCR29_extern_offset_correction_MASK)
/*! @} */

/*! @name PCR30 - Protocol Configuration Register 30 */
/*! @{ */
#define FR_PCR30_sync_node_max_MASK         (0xFU)
#define FR_PCR30_sync_node_max_SHIFT        (0U)
#define FR_PCR30_sync_node_max_WIDTH        (4U)
#define FR_PCR30_sync_node_max(x)           (((uint16_t)(((uint16_t)(x)) << FR_PCR30_sync_node_max_SHIFT)) & FR_PCR30_sync_node_max_MASK)
/*! @} */

/*! @name STPWHR - StopWatch Count High Register */
/*! @{ */
#define FR_STPWHR_STPW_S_H_MASK             (0xFFFFU)
#define FR_STPWHR_STPW_S_H_SHIFT            (0U)
#define FR_STPWHR_STPW_S_H_WIDTH            (16U)
#define FR_STPWHR_STPW_S_H(x)               (((uint16_t)(((uint16_t)(x)) << FR_STPWHR_STPW_S_H_SHIFT)) & FR_STPWHR_STPW_S_H_MASK)
/*! @} */

/*! @name STPWLR - Stop Watch Count Low Register */
/*! @{ */
#define FR_STPWLR_STPW_S_L_MASK             (0xFFFFU)
#define FR_STPWLR_STPW_S_L_SHIFT            (0U)
#define FR_STPWLR_STPW_S_L_WIDTH            (16U)
#define FR_STPWLR_STPW_S_L(x)               (((uint16_t)(((uint16_t)(x)) << FR_STPWLR_STPW_S_L_SHIFT)) & FR_STPWLR_STPW_S_L_MASK)
/*! @} */

/*! @name PEOER - Protocol Event Output Enable and StopWatch Control Register */
/*! @{ */
#define FR_PEOER_CYC_EE_MASK                (0x1U)
#define FR_PEOER_CYC_EE_SHIFT               (0U)
#define FR_PEOER_CYC_EE_WIDTH               (1U)
#define FR_PEOER_CYC_EE(x)                  (((uint16_t)(((uint16_t)(x)) << FR_PEOER_CYC_EE_SHIFT)) & FR_PEOER_CYC_EE_MASK)
#define FR_PEOER_TIM1_EE_MASK               (0x2U)
#define FR_PEOER_TIM1_EE_SHIFT              (1U)
#define FR_PEOER_TIM1_EE_WIDTH              (1U)
#define FR_PEOER_TIM1_EE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PEOER_TIM1_EE_SHIFT)) & FR_PEOER_TIM1_EE_MASK)
#define FR_PEOER_TIM2_EE_MASK               (0x4U)
#define FR_PEOER_TIM2_EE_SHIFT              (2U)
#define FR_PEOER_TIM2_EE_WIDTH              (1U)
#define FR_PEOER_TIM2_EE(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PEOER_TIM2_EE_SHIFT)) & FR_PEOER_TIM2_EE_MASK)
#define FR_PEOER_STPW_EN_MASK               (0x100U)
#define FR_PEOER_STPW_EN_SHIFT              (8U)
#define FR_PEOER_STPW_EN_WIDTH              (1U)
#define FR_PEOER_STPW_EN(x)                 (((uint16_t)(((uint16_t)(x)) << FR_PEOER_STPW_EN_SHIFT)) & FR_PEOER_STPW_EN_MASK)
/*! @} */

/*! @name RFSDOR - Receive FIFO Start Data Offset Register */
/*! @{ */
#define FR_RFSDOR_SDO_MASK                  (0xFFFFU)
#define FR_RFSDOR_SDO_SHIFT                 (0U)
#define FR_RFSDOR_SDO_WIDTH                 (16U)
#define FR_RFSDOR_SDO(x)                    (((uint16_t)(((uint16_t)(x)) << FR_RFSDOR_SDO_SHIFT)) & FR_RFSDOR_SDO_MASK)
/*! @} */

/*! @name RFSYMBADHR - Receive FIFO System Memory Base Address High Register */
/*! @{ */
#define FR_RFSYMBADHR_SMBA_MASK             (0xFFFFU)
#define FR_RFSYMBADHR_SMBA_SHIFT            (0U)
#define FR_RFSYMBADHR_SMBA_WIDTH            (16U)
#define FR_RFSYMBADHR_SMBA(x)               (((uint16_t)(((uint16_t)(x)) << FR_RFSYMBADHR_SMBA_SHIFT)) & FR_RFSYMBADHR_SMBA_MASK)
/*! @} */

/*! @name RFSYMBADLR - Receive FIFO System Memory Base Address Low Register */
/*! @{ */
#define FR_RFSYMBADLR_SMBA_MASK             (0xFFF0U)
#define FR_RFSYMBADLR_SMBA_SHIFT            (4U)
#define FR_RFSYMBADLR_SMBA_WIDTH            (12U)
#define FR_RFSYMBADLR_SMBA(x)               (((uint16_t)(((uint16_t)(x)) << FR_RFSYMBADLR_SMBA_SHIFT)) & FR_RFSYMBADLR_SMBA_MASK)
/*! @} */

/*! @name RFPTR - Receive FIFO Periodic Timer Register */
/*! @{ */
#define FR_RFPTR_PTD_MASK                   (0x3FFFU)
#define FR_RFPTR_PTD_SHIFT                  (0U)
#define FR_RFPTR_PTD_WIDTH                  (14U)
#define FR_RFPTR_PTD(x)                     (((uint16_t)(((uint16_t)(x)) << FR_RFPTR_PTD_SHIFT)) & FR_RFPTR_PTD_MASK)
/*! @} */

/*! @name RFFLPCR - Receive FIFO Fill Level and POP Count Register */
/*! @{ */
#define FR_RFFLPCR_FLA_or_PCA_MASK          (0xFFU)
#define FR_RFFLPCR_FLA_or_PCA_SHIFT         (0U)
#define FR_RFFLPCR_FLA_or_PCA_WIDTH         (8U)
#define FR_RFFLPCR_FLA_or_PCA(x)            (((uint16_t)(((uint16_t)(x)) << FR_RFFLPCR_FLA_or_PCA_SHIFT)) & FR_RFFLPCR_FLA_or_PCA_MASK)
#define FR_RFFLPCR_FLB_or_PCB_MASK          (0xFF00U)
#define FR_RFFLPCR_FLB_or_PCB_SHIFT         (8U)
#define FR_RFFLPCR_FLB_or_PCB_WIDTH         (8U)
#define FR_RFFLPCR_FLB_or_PCB(x)            (((uint16_t)(((uint16_t)(x)) << FR_RFFLPCR_FLB_or_PCB_SHIFT)) & FR_RFFLPCR_FLB_or_PCB_MASK)
/*! @} */

/*! @name EEIFER - ECC Error Interrupt Flag and Enable Register */
/*! @{ */
#define FR_EEIFER_DRCE_IE_MASK              (0x1U)
#define FR_EEIFER_DRCE_IE_SHIFT             (0U)
#define FR_EEIFER_DRCE_IE_WIDTH             (1U)
#define FR_EEIFER_DRCE_IE(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_DRCE_IE_SHIFT)) & FR_EEIFER_DRCE_IE_MASK)
#define FR_EEIFER_DRNE_IE_MASK              (0x2U)
#define FR_EEIFER_DRNE_IE_SHIFT             (1U)
#define FR_EEIFER_DRNE_IE_WIDTH             (1U)
#define FR_EEIFER_DRNE_IE(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_DRNE_IE_SHIFT)) & FR_EEIFER_DRNE_IE_MASK)
#define FR_EEIFER_LRCE_IE_MASK              (0x4U)
#define FR_EEIFER_LRCE_IE_SHIFT             (2U)
#define FR_EEIFER_LRCE_IE_WIDTH             (1U)
#define FR_EEIFER_LRCE_IE(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_LRCE_IE_SHIFT)) & FR_EEIFER_LRCE_IE_MASK)
#define FR_EEIFER_LRNE_IE_MASK              (0x8U)
#define FR_EEIFER_LRNE_IE_SHIFT             (3U)
#define FR_EEIFER_LRNE_IE_WIDTH             (1U)
#define FR_EEIFER_LRNE_IE(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_LRNE_IE_SHIFT)) & FR_EEIFER_LRNE_IE_MASK)
#define FR_EEIFER_DRCE_IF_MASK              (0x100U)
#define FR_EEIFER_DRCE_IF_SHIFT             (8U)
#define FR_EEIFER_DRCE_IF_WIDTH             (1U)
#define FR_EEIFER_DRCE_IF(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_DRCE_IF_SHIFT)) & FR_EEIFER_DRCE_IF_MASK)
#define FR_EEIFER_DRNE_IF_MASK              (0x200U)
#define FR_EEIFER_DRNE_IF_SHIFT             (9U)
#define FR_EEIFER_DRNE_IF_WIDTH             (1U)
#define FR_EEIFER_DRNE_IF(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_DRNE_IF_SHIFT)) & FR_EEIFER_DRNE_IF_MASK)
#define FR_EEIFER_LRCE_IF_MASK              (0x400U)
#define FR_EEIFER_LRCE_IF_SHIFT             (10U)
#define FR_EEIFER_LRCE_IF_WIDTH             (1U)
#define FR_EEIFER_LRCE_IF(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_LRCE_IF_SHIFT)) & FR_EEIFER_LRCE_IF_MASK)
#define FR_EEIFER_LRNE_IF_MASK              (0x800U)
#define FR_EEIFER_LRNE_IF_SHIFT             (11U)
#define FR_EEIFER_LRNE_IF_WIDTH             (1U)
#define FR_EEIFER_LRNE_IF(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_LRNE_IF_SHIFT)) & FR_EEIFER_LRNE_IF_MASK)
#define FR_EEIFER_DRCE_OF_MASK              (0x1000U)
#define FR_EEIFER_DRCE_OF_SHIFT             (12U)
#define FR_EEIFER_DRCE_OF_WIDTH             (1U)
#define FR_EEIFER_DRCE_OF(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_DRCE_OF_SHIFT)) & FR_EEIFER_DRCE_OF_MASK)
#define FR_EEIFER_DRNE_OF_MASK              (0x2000U)
#define FR_EEIFER_DRNE_OF_SHIFT             (13U)
#define FR_EEIFER_DRNE_OF_WIDTH             (1U)
#define FR_EEIFER_DRNE_OF(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_DRNE_OF_SHIFT)) & FR_EEIFER_DRNE_OF_MASK)
#define FR_EEIFER_LRCE_OF_MASK              (0x4000U)
#define FR_EEIFER_LRCE_OF_SHIFT             (14U)
#define FR_EEIFER_LRCE_OF_WIDTH             (1U)
#define FR_EEIFER_LRCE_OF(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_LRCE_OF_SHIFT)) & FR_EEIFER_LRCE_OF_MASK)
#define FR_EEIFER_LRNE_OF_MASK              (0x8000U)
#define FR_EEIFER_LRNE_OF_SHIFT             (15U)
#define FR_EEIFER_LRNE_OF_WIDTH             (1U)
#define FR_EEIFER_LRNE_OF(x)                (((uint16_t)(((uint16_t)(x)) << FR_EEIFER_LRNE_OF_SHIFT)) & FR_EEIFER_LRNE_OF_MASK)
/*! @} */

/*! @name EERICR - ECC Error Report and Injection Control Register */
/*! @{ */
#define FR_EERICR_EIE_MASK                  (0x1U)
#define FR_EERICR_EIE_SHIFT                 (0U)
#define FR_EERICR_EIE_WIDTH                 (1U)
#define FR_EERICR_EIE(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EERICR_EIE_SHIFT)) & FR_EERICR_EIE_MASK)
#define FR_EERICR_EIM_MASK                  (0x2U)
#define FR_EERICR_EIM_SHIFT                 (1U)
#define FR_EERICR_EIM_WIDTH                 (1U)
#define FR_EERICR_EIM(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EERICR_EIM_SHIFT)) & FR_EERICR_EIM_MASK)
#define FR_EERICR_ERM_MASK                  (0x10U)
#define FR_EERICR_ERM_SHIFT                 (4U)
#define FR_EERICR_ERM_WIDTH                 (1U)
#define FR_EERICR_ERM(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EERICR_ERM_SHIFT)) & FR_EERICR_ERM_MASK)
#define FR_EERICR_ERS_MASK                  (0x300U)
#define FR_EERICR_ERS_SHIFT                 (8U)
#define FR_EERICR_ERS_WIDTH                 (2U)
#define FR_EERICR_ERS(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EERICR_ERS_SHIFT)) & FR_EERICR_ERS_MASK)
#define FR_EERICR_BSY_MASK                  (0x8000U)
#define FR_EERICR_BSY_SHIFT                 (15U)
#define FR_EERICR_BSY_WIDTH                 (1U)
#define FR_EERICR_BSY(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EERICR_BSY_SHIFT)) & FR_EERICR_BSY_MASK)
/*! @} */

/*! @name EERAR - ECC Error Report Address Register */
/*! @{ */
#define FR_EERAR_ADDR_MASK                  (0xFFFU)
#define FR_EERAR_ADDR_SHIFT                 (0U)
#define FR_EERAR_ADDR_WIDTH                 (12U)
#define FR_EERAR_ADDR(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EERAR_ADDR_SHIFT)) & FR_EERAR_ADDR_MASK)
#define FR_EERAR_BANK_MASK                  (0x7000U)
#define FR_EERAR_BANK_SHIFT                 (12U)
#define FR_EERAR_BANK_WIDTH                 (3U)
#define FR_EERAR_BANK(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EERAR_BANK_SHIFT)) & FR_EERAR_BANK_MASK)
#define FR_EERAR_MID_MASK                   (0x8000U)
#define FR_EERAR_MID_SHIFT                  (15U)
#define FR_EERAR_MID_WIDTH                  (1U)
#define FR_EERAR_MID(x)                     (((uint16_t)(((uint16_t)(x)) << FR_EERAR_MID_SHIFT)) & FR_EERAR_MID_MASK)
/*! @} */

/*! @name EERDR - ECC Error Report Data Register */
/*! @{ */
#define FR_EERDR_DATA_MASK                  (0xFFFFU)
#define FR_EERDR_DATA_SHIFT                 (0U)
#define FR_EERDR_DATA_WIDTH                 (16U)
#define FR_EERDR_DATA(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EERDR_DATA_SHIFT)) & FR_EERDR_DATA_MASK)
/*! @} */

/*! @name EERCR - ECC Error Report Code Register */
/*! @{ */
#define FR_EERCR_CODE_MASK                  (0x1FU)
#define FR_EERCR_CODE_SHIFT                 (0U)
#define FR_EERCR_CODE_WIDTH                 (5U)
#define FR_EERCR_CODE(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EERCR_CODE_SHIFT)) & FR_EERCR_CODE_MASK)
/*! @} */

/*! @name EEIAR - ECC Error Injection Address Register */
/*! @{ */
#define FR_EEIAR_ADDR_MASK                  (0xFFFU)
#define FR_EEIAR_ADDR_SHIFT                 (0U)
#define FR_EEIAR_ADDR_WIDTH                 (12U)
#define FR_EEIAR_ADDR(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EEIAR_ADDR_SHIFT)) & FR_EEIAR_ADDR_MASK)
#define FR_EEIAR_BANK_MASK                  (0x7000U)
#define FR_EEIAR_BANK_SHIFT                 (12U)
#define FR_EEIAR_BANK_WIDTH                 (3U)
#define FR_EEIAR_BANK(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EEIAR_BANK_SHIFT)) & FR_EEIAR_BANK_MASK)
#define FR_EEIAR_MID_MASK                   (0x8000U)
#define FR_EEIAR_MID_SHIFT                  (15U)
#define FR_EEIAR_MID_WIDTH                  (1U)
#define FR_EEIAR_MID(x)                     (((uint16_t)(((uint16_t)(x)) << FR_EEIAR_MID_SHIFT)) & FR_EEIAR_MID_MASK)
/*! @} */

/*! @name EEIDR - ECC Error Injection Data Register */
/*! @{ */
#define FR_EEIDR_DATA_MASK                  (0xFFFFU)
#define FR_EEIDR_DATA_SHIFT                 (0U)
#define FR_EEIDR_DATA_WIDTH                 (16U)
#define FR_EEIDR_DATA(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EEIDR_DATA_SHIFT)) & FR_EEIDR_DATA_MASK)
/*! @} */

/*! @name EEICR - ECC Error Injection Code Register */
/*! @{ */
#define FR_EEICR_CODE_MASK                  (0x1FU)
#define FR_EEICR_CODE_SHIFT                 (0U)
#define FR_EEICR_CODE_WIDTH                 (5U)
#define FR_EEICR_CODE(x)                    (((uint16_t)(((uint16_t)(x)) << FR_EEICR_CODE_SHIFT)) & FR_EEICR_CODE_MASK)
/*! @} */

/*! @name CCSR - Message Buffer Configuration Control Status Register */
/*! @{ */
#define FR_CCSR_MBIF_MASK                   (0x1U)
#define FR_CCSR_MBIF_SHIFT                  (0U)
#define FR_CCSR_MBIF_WIDTH                  (1U)
#define FR_CCSR_MBIF(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CCSR_MBIF_SHIFT)) & FR_CCSR_MBIF_MASK)
#define FR_CCSR_LCKS_MASK                   (0x2U)
#define FR_CCSR_LCKS_SHIFT                  (1U)
#define FR_CCSR_LCKS_WIDTH                  (1U)
#define FR_CCSR_LCKS(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CCSR_LCKS_SHIFT)) & FR_CCSR_LCKS_MASK)
#define FR_CCSR_EDS_MASK                    (0x4U)
#define FR_CCSR_EDS_SHIFT                   (2U)
#define FR_CCSR_EDS_WIDTH                   (1U)
#define FR_CCSR_EDS(x)                      (((uint16_t)(((uint16_t)(x)) << FR_CCSR_EDS_SHIFT)) & FR_CCSR_EDS_MASK)
#define FR_CCSR_DVAL_MASK                   (0x8U)
#define FR_CCSR_DVAL_SHIFT                  (3U)
#define FR_CCSR_DVAL_WIDTH                  (1U)
#define FR_CCSR_DVAL(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CCSR_DVAL_SHIFT)) & FR_CCSR_DVAL_MASK)
#define FR_CCSR_DUP_MASK                    (0x10U)
#define FR_CCSR_DUP_SHIFT                   (4U)
#define FR_CCSR_DUP_WIDTH                   (1U)
#define FR_CCSR_DUP(x)                      (((uint16_t)(((uint16_t)(x)) << FR_CCSR_DUP_SHIFT)) & FR_CCSR_DUP_MASK)
#define FR_CCSR_MBIE_MASK                   (0x100U)
#define FR_CCSR_MBIE_SHIFT                  (8U)
#define FR_CCSR_MBIE_WIDTH                  (1U)
#define FR_CCSR_MBIE(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CCSR_MBIE_SHIFT)) & FR_CCSR_MBIE_MASK)
#define FR_CCSR_LCKT_MASK                   (0x200U)
#define FR_CCSR_LCKT_SHIFT                  (9U)
#define FR_CCSR_LCKT_WIDTH                  (1U)
#define FR_CCSR_LCKT(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CCSR_LCKT_SHIFT)) & FR_CCSR_LCKT_MASK)
#define FR_CCSR_EDT_MASK                    (0x400U)
#define FR_CCSR_EDT_SHIFT                   (10U)
#define FR_CCSR_EDT_WIDTH                   (1U)
#define FR_CCSR_EDT(x)                      (((uint16_t)(((uint16_t)(x)) << FR_CCSR_EDT_SHIFT)) & FR_CCSR_EDT_MASK)
#define FR_CCSR_CMT_MASK                    (0x800U)
#define FR_CCSR_CMT_SHIFT                   (11U)
#define FR_CCSR_CMT_WIDTH                   (1U)
#define FR_CCSR_CMT(x)                      (((uint16_t)(((uint16_t)(x)) << FR_CCSR_CMT_SHIFT)) & FR_CCSR_CMT_MASK)
#define FR_CCSR_MTD_MASK                    (0x1000U)
#define FR_CCSR_MTD_SHIFT                   (12U)
#define FR_CCSR_MTD_WIDTH                   (1U)
#define FR_CCSR_MTD(x)                      (((uint16_t)(((uint16_t)(x)) << FR_CCSR_MTD_SHIFT)) & FR_CCSR_MTD_MASK)
/*! @} */

/*! @name CCFR - Message Buffer Cycle Counter Filter Register */
/*! @{ */
#define FR_CCFR_CCFVAL_MASK                 (0x3FU)
#define FR_CCFR_CCFVAL_SHIFT                (0U)
#define FR_CCFR_CCFVAL_WIDTH                (6U)
#define FR_CCFR_CCFVAL(x)                   (((uint16_t)(((uint16_t)(x)) << FR_CCFR_CCFVAL_SHIFT)) & FR_CCFR_CCFVAL_MASK)
#define FR_CCFR_CCFMSK_MASK                 (0xFC0U)
#define FR_CCFR_CCFMSK_SHIFT                (6U)
#define FR_CCFR_CCFMSK_WIDTH                (6U)
#define FR_CCFR_CCFMSK(x)                   (((uint16_t)(((uint16_t)(x)) << FR_CCFR_CCFMSK_SHIFT)) & FR_CCFR_CCFMSK_MASK)
#define FR_CCFR_CCFE_MASK                   (0x1000U)
#define FR_CCFR_CCFE_SHIFT                  (12U)
#define FR_CCFR_CCFE_WIDTH                  (1U)
#define FR_CCFR_CCFE(x)                     (((uint16_t)(((uint16_t)(x)) << FR_CCFR_CCFE_SHIFT)) & FR_CCFR_CCFE_MASK)
#define FR_CCFR_CHB_MASK                    (0x2000U)
#define FR_CCFR_CHB_SHIFT                   (13U)
#define FR_CCFR_CHB_WIDTH                   (1U)
#define FR_CCFR_CHB(x)                      (((uint16_t)(((uint16_t)(x)) << FR_CCFR_CHB_SHIFT)) & FR_CCFR_CHB_MASK)
#define FR_CCFR_CHA_MASK                    (0x4000U)
#define FR_CCFR_CHA_SHIFT                   (14U)
#define FR_CCFR_CHA_WIDTH                   (1U)
#define FR_CCFR_CHA(x)                      (((uint16_t)(((uint16_t)(x)) << FR_CCFR_CHA_SHIFT)) & FR_CCFR_CHA_MASK)
#define FR_CCFR_MTM_MASK                    (0x8000U)
#define FR_CCFR_MTM_SHIFT                   (15U)
#define FR_CCFR_MTM_WIDTH                   (1U)
#define FR_CCFR_MTM(x)                      (((uint16_t)(((uint16_t)(x)) << FR_CCFR_MTM_SHIFT)) & FR_CCFR_MTM_MASK)
/*! @} */

/*! @name FIDR - Message Buffer Frame ID Register */
/*! @{ */
#define FR_FIDR_FID_MASK                    (0x7FFU)
#define FR_FIDR_FID_SHIFT                   (0U)
#define FR_FIDR_FID_WIDTH                   (11U)
#define FR_FIDR_FID(x)                      (((uint16_t)(((uint16_t)(x)) << FR_FIDR_FID_SHIFT)) & FR_FIDR_FID_MASK)
/*! @} */

/*! @name IDXR - Message Buffer Index Register */
/*! @{ */
#define FR_IDXR_MBIDX_MASK                  (0x1FFU)
#define FR_IDXR_MBIDX_SHIFT                 (0U)
#define FR_IDXR_MBIDX_WIDTH                 (9U)
#define FR_IDXR_MBIDX(x)                    (((uint16_t)(((uint16_t)(x)) << FR_IDXR_MBIDX_SHIFT)) & FR_IDXR_MBIDX_MASK)
/*! @} */

/*! @name MBDOR - Message Buffer Data Field Offset Register */
/*! @{ */
#define FR_MBDOR_MBDO_MASK                  (0xFFFFU)
#define FR_MBDOR_MBDO_SHIFT                 (0U)
#define FR_MBDOR_MBDO_WIDTH                 (16U)
#define FR_MBDOR_MBDO(x)                    (((uint16_t)(((uint16_t)(x)) << FR_MBDOR_MBDO_SHIFT)) & FR_MBDOR_MBDO_MASK)
/*! @} */

/*! @name LEETR - LRAM ECC Error Test Register */
/*! @{ */
#define FR_LEETR_LEETD_MASK                 (0xFFFFU)
#define FR_LEETR_LEETD_SHIFT                (0U)
#define FR_LEETR_LEETD_WIDTH                (16U)
#define FR_LEETR_LEETD(x)                   (((uint16_t)(((uint16_t)(x)) << FR_LEETR_LEETD_SHIFT)) & FR_LEETR_LEETD_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group FLEXRAY_Register_Masks */

/*!
 * @}
 */ /* end of group FLEXRAY_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_FLEXRAY_H_) */
