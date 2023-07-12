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
 * @file S32R45_ADC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_ADC
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
#if !defined(S32R45_ADC_H_)  /* Check if memory map has not been already included */
#define S32R45_ADC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- ADC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_Peripheral_Access_Layer ADC Peripheral Access Layer
 * @{
 */

/** ADC - Size of Registers Arrays */
#define ADC_CDR_COUNT                            48u
#define ADC_CEOCFR_COUNT                         2u
#define ADC_CIMR_COUNT                           2u
#define ADC_DMAR_COUNT                           2u
#define ADC_PSR_COUNT                            2u
#define ADC_CTR_COUNT                            2u
#define ADC_NCMR_COUNT                           2u
#define ADC_JCMR_COUNT                           2u
#define ADC_CWENR_COUNT                          2u
#define ADC_AWORR_COUNT                          2u

/** ADC - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCR;                                    /**< Main Configuration Register, offset: 0x0 */
  __IO uint32_t MSR;                                    /**< Main Status Register, offset: 0x4 */
  uint8_t RESERVED_0[8];
  __IO uint32_t ISR;                                    /**< Interrupt Status Register, offset: 0x10 */
  __IO uint32_t CEOCFR[ADC_CEOCFR_COUNT];               /**< Channel Pending register 0..Channel Pending register 1, array offset: 0x14, array step: 0x4 */
  uint8_t RESERVED_1[4];
  __IO uint32_t IMR;                                    /**< Interrupt Mask Register, offset: 0x20 */
  __IO uint32_t CIMR[ADC_CIMR_COUNT];                   /**< Channel Interrupt Mask Register 0..Channel Interrupt Mask Register 1, array offset: 0x24, array step: 0x4 */
  uint8_t RESERVED_2[4];
  __IO uint32_t WTISR;                                  /**< Watchdog Threshold Interrupt Status Register, offset: 0x30 */
  __IO uint32_t WTIMR;                                  /**< Watchdog Threshold Interrupt Mask Register, offset: 0x34 */
  uint8_t RESERVED_3[8];
  __IO uint32_t DMAE;                                   /**< DMAE Register, offset: 0x40 */
  __IO uint32_t DMAR[ADC_DMAR_COUNT];                   /**< DMA Channel Select Register 0..DMA Channel Select Register 1, array offset: 0x44, array step: 0x4 */
  uint8_t RESERVED_4[20];
  __IO uint32_t THRHLR0;                                /**< Analog Watchdog Threshold Register 0, offset: 0x60 */
  __IO uint32_t THRHLR1;                                /**< Analog Watchdog Threshold Register 1, offset: 0x64 */
  __IO uint32_t THRHLR2;                                /**< Analog Watchdog Threshold Register 2, offset: 0x68 */
  __IO uint32_t THRHLR3;                                /**< Analog Watchdog Threshold Register 2, offset: 0x6C */
  uint8_t RESERVED_5[16];
  __IO uint32_t PSCR;                                   /**< Presampling Control Register, offset: 0x80 */
  __IO uint32_t PSR[ADC_PSR_COUNT];                     /**< Presampling register 0..Presampling register 1, array offset: 0x84, array step: 0x4 */
  uint8_t RESERVED_6[8];
  __IO uint32_t CTR[ADC_CTR_COUNT];                     /**< Conversion Timing Register 0..Conversion Timing Register 1, array offset: 0x94, array step: 0x4 */
  uint8_t RESERVED_7[8];
  __IO uint32_t NCMR[ADC_NCMR_COUNT];                   /**< Normal Conversion Mask Register 0..Normal Conversion Mask Register 1, array offset: 0xA4, array step: 0x4 */
  uint8_t RESERVED_8[8];
  __IO uint32_t JCMR[ADC_JCMR_COUNT];                   /**< Injected Conversion Mask Register 0..Injected Conversion Mask Register 1, array offset: 0xB4, array step: 0x4 */
  uint8_t RESERVED_9[4];
  __IO uint32_t USROFSGN;                               /**< User OFFSET and Gain Register, offset: 0xC0 */
  uint8_t RESERVED_10[4];
  __IO uint32_t PDEDR;                                  /**< Power Down Exit Delay Register, offset: 0xC8 */
  uint8_t RESERVED_11[52];
  __I  uint32_t CDR[ADC_CDR_COUNT];                     /**< Channel Data Register n, array offset: 0x100, array step: 0x4 */
  uint8_t RESERVED_12[192];
  __IO uint32_t THRHLR4;                                /**< Analog Watchdog Threshold Register 4, offset: 0x280 */
  __IO uint32_t THRHLR5;                                /**< Analog Watchdog Threshold Register 5, offset: 0x284 */
  __IO uint32_t THRHLR6;                                /**< Analog Watchdog Threshold Register 6, offset: 0x288 */
  __IO uint32_t THRHLR7;                                /**< Analog Watchdog Threshold Register 7, offset: 0x28C */
  uint8_t RESERVED_13[32];
  __IO uint32_t CWSELR0;                                /**< Channel Watchdog Select Register 0, offset: 0x2B0 */
  uint8_t RESERVED_14[12];
  __IO uint32_t CWSELR4;                                /**< Channel Watchdog Select Register 4, offset: 0x2C0 */
  __IO uint32_t CWSELR5;                                /**< Channel Watchdog Select Register 5  offset: 0x2C4 */
  uint8_t RESERVED_15[24];
  __IO uint32_t CWENR[ADC_CWENR_COUNT];                 /**< Channel Watchdog Enable Register 0..Channel Watchdog Enable Register 1, array offset: 0x2E0, array step: 0x4 */
  uint8_t RESERVED_16[8];
  __IO uint32_t AWORR[ADC_AWORR_COUNT];                 /**< Analog Watchdog Out of Range Register 0..Analog Watchdog Out of Range Register 1, array offset: 0x2F0, array step: 0x4 */
  uint8_t RESERVED_17[72];
  __IO uint32_t STCR1;                                  /**< Self-Test Configuration Register 1, offset: 0x340 */
  __IO uint32_t STCR2;                                  /**< Self-Test Configuration Register 2, offset: 0x344 */
  __IO uint32_t STCR3;                                  /**< Self-Test Configuration Register 3, offset: 0x348 */
  __IO uint32_t STBRR;                                  /**< Self-Test Baud Rate Register, offset: 0x34C */
  __IO uint32_t STSR1;                                  /**< Self-Test Status Register 1, offset: 0x350 */
  __I  uint32_t STSR2;                                  /**< Self-Test Status Register 2, offset: 0x354 */
  __I  uint32_t STSR3;                                  /**< Self-Test Status Register 3, offset: 0x358 */
  __I  uint32_t STSR4;                                  /**< Self-Test Status Register 4, offset: 0x35C */
  uint8_t RESERVED_18[16];
  __I  uint32_t STDR1;                                  /**< Self-Test Data Register 1, offset: 0x370 */
  __I  uint32_t STDR2;                                  /**< Self-Test Data Register 2, offset: 0x374 */
  uint8_t RESERVED_19[8];
  __IO uint32_t STAW0R;                                 /**< Self-Test Analog Watchdog Register, offset: 0x380 */
  __IO uint32_t STAW1AR;                                /**< Self-Test Analog Watchdog Register, offset: 0x384 */
  __IO uint32_t STAW1BR;                                /**< Self-Test Analog Watchdog Register 1B, offset: 0x388 */
  __IO uint32_t STAW2R;                                 /**< Self-Test Analog Watchdog Register 2, offset: 0x38C */
       uint32_t STAW3R;                                 /**< Self-Test Analog Watchdog Register 3, offset: 0x390 */
  __IO uint32_t STAW4R;                                 /**< Self-Test Analog Watchdog Register 4, offset: 0x394 */
  __IO uint32_t STAW5R;                                 /**< Self-Test Analog Watchdog Register 5, offset: 0x398 */
  __I  uint32_t CALSTAT;                                /**< Calibration Status register, offset: 0x39C */
} ADC_Type, *ADC_MemMapPtr;

/** Number of instances of the ADC module. */
#define ADC_INSTANCE_COUNT                       (2u)

/* ADC - Peripheral instance base addresses */
/** Peripheral ADC_0 base address */
#define ADC_0_BASE                               (0x401F8000u)
/** Peripheral ADC_0 base pointer */
#define ADC_0                                    ((ADC_Type *)ADC_0_BASE)
/** Peripheral ADC_1 base address */
#define ADC_1_BASE                               (0x402E8000u)
/** Peripheral ADC_1 base pointer */
#define ADC_1                                    ((ADC_Type *)ADC_1_BASE)
/** Array initializer of ADC peripheral base addresses */
#define ADC_BASE_ADDRS                           { ADC_0_BASE, ADC_1_BASE }
/** Array initializer of ADC peripheral base pointers */
#define ADC_BASE_PTRS                            { ADC_0, ADC_1 }

/* ----------------------------------------------------------------------------
   -- ADC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_Register_Masks ADC Register Masks
 * @{
 */

/*! @name MCR - Main Configuration Register */
/*! @{ */
#define ADC_MCR_PWDN_MASK                        (0x1U)
#define ADC_MCR_PWDN_SHIFT                       (0U)
#define ADC_MCR_PWDN_WIDTH                       (1U)
#define ADC_MCR_PWDN(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_MCR_PWDN_SHIFT)) & ADC_MCR_PWDN_MASK)
#define ADC_MCR_ACKO_MASK                        (0x20U)
#define ADC_MCR_ACKO_SHIFT                       (5U)
#define ADC_MCR_ACKO_WIDTH                       (1U)
#define ADC_MCR_ACKO(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_MCR_ACKO_SHIFT)) & ADC_MCR_ACKO_MASK)
#define ADC_MCR_ABORT_MASK                       (0x40U)
#define ADC_MCR_ABORT_SHIFT                      (6U)
#define ADC_MCR_ABORT_WIDTH                      (1U)
#define ADC_MCR_ABORT(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_MCR_ABORT_SHIFT)) & ADC_MCR_ABORT_MASK)
#define ADC_MCR_ABORTCHAIN_MASK                  (0x80U)
#define ADC_MCR_ABORTCHAIN_SHIFT                 (7U)
#define ADC_MCR_ABORTCHAIN_WIDTH                 (1U)
#define ADC_MCR_ABORTCHAIN(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_MCR_ABORTCHAIN_SHIFT)) & ADC_MCR_ABORTCHAIN_MASK)
#define ADC_MCR_ADCLKSEL_MASK                    (0x100U)
#define ADC_MCR_ADCLKSEL_SHIFT                   (8U)
#define ADC_MCR_ADCLKSEL_WIDTH                   (1U)
#define ADC_MCR_ADCLKSEL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_MCR_ADCLKSEL_SHIFT)) & ADC_MCR_ADCLKSEL_MASK)
#define ADC_MCR_TSAMP_MASK                       (0x600U)
#define ADC_MCR_TSAMP_SHIFT                      (9U)
#define ADC_MCR_TSAMP_WIDTH                      (2U)
#define ADC_MCR_TSAMP(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_MCR_TSAMP_SHIFT)) & ADC_MCR_TSAMP_MASK)
#define ADC_MCR_NRSMPL_MASK                      (0x1800U)
#define ADC_MCR_NRSMPL_SHIFT                     (11U)
#define ADC_MCR_NRSMPL_WIDTH                     (2U)
#define ADC_MCR_NRSMPL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_MCR_NRSMPL_SHIFT)) & ADC_MCR_NRSMPL_MASK)
#define ADC_MCR_AVGEN_MASK                       (0x2000U)
#define ADC_MCR_AVGEN_SHIFT                      (13U)
#define ADC_MCR_AVGEN_WIDTH                      (1U)
#define ADC_MCR_AVGEN(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_MCR_AVGEN_SHIFT)) & ADC_MCR_AVGEN_MASK)
#define ADC_MCR_CALSTART_MASK                    (0x4000U)
#define ADC_MCR_CALSTART_SHIFT                   (14U)
#define ADC_MCR_CALSTART_WIDTH                   (1U)
#define ADC_MCR_CALSTART(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_MCR_CALSTART_SHIFT)) & ADC_MCR_CALSTART_MASK)
#define ADC_MCR_STCL_MASK                        (0x8000U)
#define ADC_MCR_STCL_SHIFT                       (15U)
#define ADC_MCR_STCL_WIDTH                       (1U)
#define ADC_MCR_STCL(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_MCR_STCL_SHIFT)) & ADC_MCR_STCL_MASK)
#define ADC_MCR_CTU_MODE_MASK                    (0x10000U)
#define ADC_MCR_CTU_MODE_SHIFT                   (16U)
#define ADC_MCR_CTU_MODE_WIDTH                   (1U)
#define ADC_MCR_CTU_MODE(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_MCR_CTU_MODE_SHIFT)) & ADC_MCR_CTU_MODE_MASK)
#define ADC_MCR_CTUEN_MASK                       (0x20000U)
#define ADC_MCR_CTUEN_SHIFT                      (17U)
#define ADC_MCR_CTUEN_WIDTH                      (1U)
#define ADC_MCR_CTUEN(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_MCR_CTUEN_SHIFT)) & ADC_MCR_CTUEN_MASK)
#define ADC_MCR_JSTART_MASK                      (0x100000U)
#define ADC_MCR_JSTART_SHIFT                     (20U)
#define ADC_MCR_JSTART_WIDTH                     (1U)
#define ADC_MCR_JSTART(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_MCR_JSTART_SHIFT)) & ADC_MCR_JSTART_MASK)
#define ADC_MCR_JEDGE_MASK                       (0x200000U)
#define ADC_MCR_JEDGE_SHIFT                      (21U)
#define ADC_MCR_JEDGE_WIDTH                      (1U)
#define ADC_MCR_JEDGE(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_MCR_JEDGE_SHIFT)) & ADC_MCR_JEDGE_MASK)
#define ADC_MCR_JTRGEN_MASK                      (0x400000U)
#define ADC_MCR_JTRGEN_SHIFT                     (22U)
#define ADC_MCR_JTRGEN_WIDTH                     (1U)
#define ADC_MCR_JTRGEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_MCR_JTRGEN_SHIFT)) & ADC_MCR_JTRGEN_MASK)
#define ADC_MCR_NSTART_MASK                      (0x1000000U)
#define ADC_MCR_NSTART_SHIFT                     (24U)
#define ADC_MCR_NSTART_WIDTH                     (1U)
#define ADC_MCR_NSTART(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_MCR_NSTART_SHIFT)) & ADC_MCR_NSTART_MASK)
#define ADC_MCR_XSTRTEN_MASK                     (0x2000000U)
#define ADC_MCR_XSTRTEN_SHIFT                    (25U)
#define ADC_MCR_XSTRTEN_WIDTH                    (1U)
#define ADC_MCR_XSTRTEN(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_MCR_XSTRTEN_SHIFT)) & ADC_MCR_XSTRTEN_MASK)
#define ADC_MCR_EDGE_MASK                        (0x4000000U)
#define ADC_MCR_EDGE_SHIFT                       (26U)
#define ADC_MCR_EDGE_WIDTH                       (1U)
#define ADC_MCR_EDGE(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_MCR_EDGE_SHIFT)) & ADC_MCR_EDGE_MASK)
#define ADC_MCR_TRGEN_MASK                       (0x8000000U)
#define ADC_MCR_TRGEN_SHIFT                      (27U)
#define ADC_MCR_TRGEN_WIDTH                      (1U)
#define ADC_MCR_TRGEN(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_MCR_TRGEN_SHIFT)) & ADC_MCR_TRGEN_MASK)
#define ADC_MCR_MODE_MASK                        (0x20000000U)
#define ADC_MCR_MODE_SHIFT                       (29U)
#define ADC_MCR_MODE_WIDTH                       (1U)
#define ADC_MCR_MODE(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_MCR_MODE_SHIFT)) & ADC_MCR_MODE_MASK)
#define ADC_MCR_WLSIDE_MASK                      (0x40000000U)
#define ADC_MCR_WLSIDE_SHIFT                     (30U)
#define ADC_MCR_WLSIDE_WIDTH                     (1U)
#define ADC_MCR_WLSIDE(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_MCR_WLSIDE_SHIFT)) & ADC_MCR_WLSIDE_MASK)
#define ADC_MCR_OWREN_MASK                       (0x80000000U)
#define ADC_MCR_OWREN_SHIFT                      (31U)
#define ADC_MCR_OWREN_WIDTH                      (1U)
#define ADC_MCR_OWREN(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_MCR_OWREN_SHIFT)) & ADC_MCR_OWREN_MASK)
/*! @} */

/*! @name MSR - Main Status Register */
/*! @{ */
#define ADC_MSR_ADCSTATUS_MASK                   (0x7U)
#define ADC_MSR_ADCSTATUS_SHIFT                  (0U)
#define ADC_MSR_ADCSTATUS_WIDTH                  (3U)
#define ADC_MSR_ADCSTATUS(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_MSR_ADCSTATUS_SHIFT)) & ADC_MSR_ADCSTATUS_MASK)
#define ADC_MSR_ACKO_MASK                        (0x20U)
#define ADC_MSR_ACKO_SHIFT                       (5U)
#define ADC_MSR_ACKO_WIDTH                       (1U)
#define ADC_MSR_ACKO(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_MSR_ACKO_SHIFT)) & ADC_MSR_ACKO_MASK)
#define ADC_MSR_CHADDR_MASK                      (0xFE00U)
#define ADC_MSR_CHADDR_SHIFT                     (9U)
#define ADC_MSR_CHADDR_WIDTH                     (7U)
#define ADC_MSR_CHADDR(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_MSR_CHADDR_SHIFT)) & ADC_MSR_CHADDR_MASK)
#define ADC_MSR_CTUSTART_MASK                    (0x10000U)
#define ADC_MSR_CTUSTART_SHIFT                   (16U)
#define ADC_MSR_CTUSTART_WIDTH                   (1U)
#define ADC_MSR_CTUSTART(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_MSR_CTUSTART_SHIFT)) & ADC_MSR_CTUSTART_MASK)
#define ADC_MSR_SELF_TEST_S_MASK                 (0x40000U)
#define ADC_MSR_SELF_TEST_S_SHIFT                (18U)
#define ADC_MSR_SELF_TEST_S_WIDTH                (1U)
#define ADC_MSR_SELF_TEST_S(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_MSR_SELF_TEST_S_SHIFT)) & ADC_MSR_SELF_TEST_S_MASK)
#define ADC_MSR_JSTART_MASK                      (0x100000U)
#define ADC_MSR_JSTART_SHIFT                     (20U)
#define ADC_MSR_JSTART_WIDTH                     (1U)
#define ADC_MSR_JSTART(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_MSR_JSTART_SHIFT)) & ADC_MSR_JSTART_MASK)
#define ADC_MSR_JABORT_MASK                      (0x800000U)
#define ADC_MSR_JABORT_SHIFT                     (23U)
#define ADC_MSR_JABORT_WIDTH                     (1U)
#define ADC_MSR_JABORT(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_MSR_JABORT_SHIFT)) & ADC_MSR_JABORT_MASK)
#define ADC_MSR_NSTART_MASK                      (0x1000000U)
#define ADC_MSR_NSTART_SHIFT                     (24U)
#define ADC_MSR_NSTART_WIDTH                     (1U)
#define ADC_MSR_NSTART(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_MSR_NSTART_SHIFT)) & ADC_MSR_NSTART_MASK)
#define ADC_MSR_CALBUSY_MASK                     (0x20000000U)
#define ADC_MSR_CALBUSY_SHIFT                    (29U)
#define ADC_MSR_CALBUSY_WIDTH                    (1U)
#define ADC_MSR_CALBUSY(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_MSR_CALBUSY_SHIFT)) & ADC_MSR_CALBUSY_MASK)
#define ADC_MSR_CALFAIL_MASK                     (0x40000000U)
#define ADC_MSR_CALFAIL_SHIFT                    (30U)
#define ADC_MSR_CALFAIL_WIDTH                    (1U)
#define ADC_MSR_CALFAIL(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_MSR_CALFAIL_SHIFT)) & ADC_MSR_CALFAIL_MASK)
#define ADC_MSR_CALIBRTD_MASK                    (0x80000000U)
#define ADC_MSR_CALIBRTD_SHIFT                   (31U)
#define ADC_MSR_CALIBRTD_WIDTH                   (1U)
#define ADC_MSR_CALIBRTD(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_MSR_CALIBRTD_SHIFT)) & ADC_MSR_CALIBRTD_MASK)
/*! @} */

/*! @name ISR - Interrupt Status Register */
/*! @{ */
#define ADC_ISR_ECH_MASK                         (0x1U)
#define ADC_ISR_ECH_SHIFT                        (0U)
#define ADC_ISR_ECH_WIDTH                        (1U)
#define ADC_ISR_ECH(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_ISR_ECH_SHIFT)) & ADC_ISR_ECH_MASK)
#define ADC_ISR_EOC_MASK                         (0x2U)
#define ADC_ISR_EOC_SHIFT                        (1U)
#define ADC_ISR_EOC_WIDTH                        (1U)
#define ADC_ISR_EOC(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_ISR_EOC_SHIFT)) & ADC_ISR_EOC_MASK)
#define ADC_ISR_JECH_MASK                        (0x4U)
#define ADC_ISR_JECH_SHIFT                       (2U)
#define ADC_ISR_JECH_WIDTH                       (1U)
#define ADC_ISR_JECH(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_ISR_JECH_SHIFT)) & ADC_ISR_JECH_MASK)
#define ADC_ISR_JEOC_MASK                        (0x8U)
#define ADC_ISR_JEOC_SHIFT                       (3U)
#define ADC_ISR_JEOC_WIDTH                       (1U)
#define ADC_ISR_JEOC(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_ISR_JEOC_SHIFT)) & ADC_ISR_JEOC_MASK)
#define ADC_ISR_EOCTU_MASK                       (0x10U)
#define ADC_ISR_EOCTU_SHIFT                      (4U)
#define ADC_ISR_EOCTU_WIDTH                      (1U)
#define ADC_ISR_EOCTU(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_ISR_EOCTU_SHIFT)) & ADC_ISR_EOCTU_MASK)
/*! @} */

/*! @name CEOCFR0 - Channel Pending Register */
/*! @{ */
#define ADC_CEOCFR_EOC_CH0_MASK                 (0x1U)
#define ADC_CEOCFR_EOC_CH0_SHIFT                (0U)
#define ADC_CEOCFR_EOC_CH0_WIDTH                (1U)
#define ADC_CEOCFR_EOC_CH0(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH0_SHIFT)) & ADC_CEOCFR_EOC_CH0_MASK)
#define ADC_CEOCFR_EOC_CH1_MASK                 (0x2U)
#define ADC_CEOCFR_EOC_CH1_SHIFT                (1U)
#define ADC_CEOCFR_EOC_CH1_WIDTH                (1U)
#define ADC_CEOCFR_EOC_CH1(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH1_SHIFT)) & ADC_CEOCFR_EOC_CH1_MASK)
#define ADC_CEOCFR_EOC_CH2_MASK                 (0x4U)
#define ADC_CEOCFR_EOC_CH2_SHIFT                (2U)
#define ADC_CEOCFR_EOC_CH2_WIDTH                (1U)
#define ADC_CEOCFR_EOC_CH2(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH2_SHIFT)) & ADC_CEOCFR_EOC_CH2_MASK)
#define ADC_CEOCFR_EOC_CH3_MASK                 (0x8U)
#define ADC_CEOCFR_EOC_CH3_SHIFT                (3U)
#define ADC_CEOCFR_EOC_CH3_WIDTH                (1U)
#define ADC_CEOCFR_EOC_CH3(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH3_SHIFT)) & ADC_CEOCFR_EOC_CH3_MASK)
#define ADC_CEOCFR_EOC_CH4_MASK                 (0x10U)
#define ADC_CEOCFR_EOC_CH4_SHIFT                (4U)
#define ADC_CEOCFR_EOC_CH4_WIDTH                (1U)
#define ADC_CEOCFR_EOC_CH4(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH4_SHIFT)) & ADC_CEOCFR_EOC_CH4_MASK)
#define ADC_CEOCFR_EOC_CH5_MASK                 (0x20U)
#define ADC_CEOCFR_EOC_CH5_SHIFT                (5U)
#define ADC_CEOCFR_EOC_CH5_WIDTH                (1U)
#define ADC_CEOCFR_EOC_CH5(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH5_SHIFT)) & ADC_CEOCFR_EOC_CH5_MASK)
#define ADC_CEOCFR_EOC_CH6_MASK                 (0x40U)
#define ADC_CEOCFR_EOC_CH6_SHIFT                (6U)
#define ADC_CEOCFR_EOC_CH6_WIDTH                (1U)
#define ADC_CEOCFR_EOC_CH6(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH6_SHIFT)) & ADC_CEOCFR_EOC_CH6_MASK)
#define ADC_CEOCFR_EOC_CH7_MASK                 (0x80U)
#define ADC_CEOCFR_EOC_CH7_SHIFT                (7U)
#define ADC_CEOCFR_EOC_CH7_WIDTH                (1U)
#define ADC_CEOCFR_EOC_CH7(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH7_SHIFT)) & ADC_CEOCFR_EOC_CH7_MASK)
#define ADC_CEOCFR_EOC_CH32_MASK                (0x1U)
#define ADC_CEOCFR_EOC_CH32_SHIFT               (0U)
#define ADC_CEOCFR_EOC_CH32_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH32(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH32_SHIFT)) & ADC_CEOCFR_EOC_CH32_MASK)
#define ADC_CEOCFR_EOC_CH33_MASK                (0x2U)
#define ADC_CEOCFR_EOC_CH33_SHIFT               (1U)
#define ADC_CEOCFR_EOC_CH33_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH33(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH33_SHIFT)) & ADC_CEOCFR_EOC_CH33_MASK)
#define ADC_CEOCFR_EOC_CH34_MASK                (0x4U)
#define ADC_CEOCFR_EOC_CH34_SHIFT               (2U)
#define ADC_CEOCFR_EOC_CH34_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH34(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH34_SHIFT)) & ADC_CEOCFR_EOC_CH34_MASK)
#define ADC_CEOCFR_EOC_CH35_MASK                (0x8U)
#define ADC_CEOCFR_EOC_CH35_SHIFT               (3U)
#define ADC_CEOCFR_EOC_CH35_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH35(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH35_SHIFT)) & ADC_CEOCFR_EOC_CH35_MASK)
#define ADC_CEOCFR_EOC_CH36_MASK                (0x10U)
#define ADC_CEOCFR_EOC_CH36_SHIFT               (4U)
#define ADC_CEOCFR_EOC_CH36_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH36(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH36_SHIFT)) & ADC_CEOCFR_EOC_CH36_MASK)
#define ADC_CEOCFR_EOC_CH37_MASK                (0x20U)
#define ADC_CEOCFR_EOC_CH37_SHIFT               (5U)
#define ADC_CEOCFR_EOC_CH37_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH37(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH37_SHIFT)) & ADC_CEOCFR_EOC_CH37_MASK)
#define ADC_CEOCFR_EOC_CH38_MASK                (0x40U)
#define ADC_CEOCFR_EOC_CH38_SHIFT               (6U)
#define ADC_CEOCFR_EOC_CH38_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH38(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH38_SHIFT)) & ADC_CEOCFR_EOC_CH38_MASK)
#define ADC_CEOCFR_EOC_CH39_MASK                (0x80U)
#define ADC_CEOCFR_EOC_CH39_SHIFT               (7U)
#define ADC_CEOCFR_EOC_CH39_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH39(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH39_SHIFT)) & ADC_CEOCFR_EOC_CH39_MASK)
#define ADC_CEOCFR_EOC_CH40_MASK                (0x100U)
#define ADC_CEOCFR_EOC_CH40_SHIFT               (8U)
#define ADC_CEOCFR_EOC_CH40_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH40(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH40_SHIFT)) & ADC_CEOCFR_EOC_CH40_MASK)
#define ADC_CEOCFR_EOC_CH41_MASK                (0x200U)
#define ADC_CEOCFR_EOC_CH41_SHIFT               (9U)
#define ADC_CEOCFR_EOC_CH41_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH41(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH41_SHIFT)) & ADC_CEOCFR_EOC_CH41_MASK)
#define ADC_CEOCFR_EOC_CH42_MASK                (0x400U)
#define ADC_CEOCFR_EOC_CH42_SHIFT               (10U)
#define ADC_CEOCFR_EOC_CH42_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH42(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH42_SHIFT)) & ADC_CEOCFR_EOC_CH42_MASK)
#define ADC_CEOCFR_EOC_CH43_MASK                (0x800U)
#define ADC_CEOCFR_EOC_CH43_SHIFT               (11U)
#define ADC_CEOCFR_EOC_CH43_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH43(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH43_SHIFT)) & ADC_CEOCFR_EOC_CH43_MASK)
#define ADC_CEOCFR_EOC_CH44_MASK                (0x1000U)
#define ADC_CEOCFR_EOC_CH44_SHIFT               (12U)
#define ADC_CEOCFR_EOC_CH44_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH44(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH44_SHIFT)) & ADC_CEOCFR_EOC_CH44_MASK)
#define ADC_CEOCFR_EOC_CH45_MASK                (0x2000U)
#define ADC_CEOCFR_EOC_CH45_SHIFT               (13U)
#define ADC_CEOCFR_EOC_CH45_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH45(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH45_SHIFT)) & ADC_CEOCFR_EOC_CH45_MASK)
#define ADC_CEOCFR_EOC_CH46_MASK                (0x4000U)
#define ADC_CEOCFR_EOC_CH46_SHIFT               (14U)
#define ADC_CEOCFR_EOC_CH46_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH46(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH46_SHIFT)) & ADC_CEOCFR_EOC_CH46_MASK)
#define ADC_CEOCFR_EOC_CH47_MASK                (0x8000U)
#define ADC_CEOCFR_EOC_CH47_SHIFT               (15U)
#define ADC_CEOCFR_EOC_CH47_WIDTH               (1U)
#define ADC_CEOCFR_EOC_CH47(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CEOCFR_EOC_CH47_SHIFT)) & ADC_CEOCFR_EOC_CH47_MASK)
/*! @} */

/*! @name IMR - Interrupt Mask Register */
/*! @{ */
#define ADC_IMR_MSKECH_MASK                      (0x1U)
#define ADC_IMR_MSKECH_SHIFT                     (0U)
#define ADC_IMR_MSKECH_WIDTH                     (1U)
#define ADC_IMR_MSKECH(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_IMR_MSKECH_SHIFT)) & ADC_IMR_MSKECH_MASK)
#define ADC_IMR_MSKEOC_MASK                      (0x2U)
#define ADC_IMR_MSKEOC_SHIFT                     (1U)
#define ADC_IMR_MSKEOC_WIDTH                     (1U)
#define ADC_IMR_MSKEOC(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_IMR_MSKEOC_SHIFT)) & ADC_IMR_MSKEOC_MASK)
#define ADC_IMR_MSKJECH_MASK                     (0x4U)
#define ADC_IMR_MSKJECH_SHIFT                    (2U)
#define ADC_IMR_MSKJECH_WIDTH                    (1U)
#define ADC_IMR_MSKJECH(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_IMR_MSKJECH_SHIFT)) & ADC_IMR_MSKJECH_MASK)
#define ADC_IMR_MSKJEOC_MASK                     (0x8U)
#define ADC_IMR_MSKJEOC_SHIFT                    (3U)
#define ADC_IMR_MSKJEOC_WIDTH                    (1U)
#define ADC_IMR_MSKJEOC(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_IMR_MSKJEOC_SHIFT)) & ADC_IMR_MSKJEOC_MASK)
#define ADC_IMR_MSKEOCTU_MASK                    (0x10U)
#define ADC_IMR_MSKEOCTU_SHIFT                   (4U)
#define ADC_IMR_MSKEOCTU_WIDTH                   (1U)
#define ADC_IMR_MSKEOCTU(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_IMR_MSKEOCTU_SHIFT)) & ADC_IMR_MSKEOCTU_MASK)
/*! @} */

/*! @name CIMR0 - Channel Interrupt Mask Register 0 */
/*! @{ */
#define ADC_CIMR_CIM0_MASK                      (0x1U)
#define ADC_CIMR_CIM0_SHIFT                     (0U)
#define ADC_CIMR_CIM0_WIDTH                     (1U)
#define ADC_CIMR_CIM0(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM0_SHIFT)) & ADC_CIMR_CIM0_MASK)
#define ADC_CIMR_CIM1_MASK                      (0x2U)
#define ADC_CIMR_CIM1_SHIFT                     (1U)
#define ADC_CIMR_CIM1_WIDTH                     (1U)
#define ADC_CIMR_CIM1(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM1_SHIFT)) & ADC_CIMR_CIM1_MASK)
#define ADC_CIMR_CIM2_MASK                      (0x4U)
#define ADC_CIMR_CIM2_SHIFT                     (2U)
#define ADC_CIMR_CIM2_WIDTH                     (1U)
#define ADC_CIMR_CIM2(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM2_SHIFT)) & ADC_CIMR_CIM2_MASK)
#define ADC_CIMR_CIM3_MASK                      (0x8U)
#define ADC_CIMR_CIM3_SHIFT                     (3U)
#define ADC_CIMR_CIM3_WIDTH                     (1U)
#define ADC_CIMR_CIM3(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM3_SHIFT)) & ADC_CIMR_CIM3_MASK)
#define ADC_CIMR_CIM4_MASK                      (0x10U)
#define ADC_CIMR_CIM4_SHIFT                     (4U)
#define ADC_CIMR_CIM4_WIDTH                     (1U)
#define ADC_CIMR_CIM4(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM4_SHIFT)) & ADC_CIMR_CIM4_MASK)
#define ADC_CIMR_CIM5_MASK                      (0x20U)
#define ADC_CIMR_CIM5_SHIFT                     (5U)
#define ADC_CIMR_CIM5_WIDTH                     (1U)
#define ADC_CIMR_CIM5(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM5_SHIFT)) & ADC_CIMR_CIM5_MASK)
#define ADC_CIMR_CIM6_MASK                      (0x40U)
#define ADC_CIMR_CIM6_SHIFT                     (6U)
#define ADC_CIMR_CIM6_WIDTH                     (1U)
#define ADC_CIMR_CIM6(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM6_SHIFT)) & ADC_CIMR_CIM6_MASK)
#define ADC_CIMR_CIM7_MASK                      (0x80U)
#define ADC_CIMR_CIM7_SHIFT                     (7U)
#define ADC_CIMR_CIM7_WIDTH                     (1U)
#define ADC_CIMR_CIM7(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM7_SHIFT)) & ADC_CIMR_CIM7_MASK)
#define ADC_CIMR_CIM32_MASK                     (0x1U)
#define ADC_CIMR_CIM32_SHIFT                    (0U)
#define ADC_CIMR_CIM32_WIDTH                    (1U)
#define ADC_CIMR_CIM32(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM32_SHIFT)) & ADC_CIMR_CIM32_MASK)
#define ADC_CIMR_CIM33_MASK                     (0x2U)
#define ADC_CIMR_CIM33_SHIFT                    (1U)
#define ADC_CIMR_CIM33_WIDTH                    (1U)
#define ADC_CIMR_CIM33(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM33_SHIFT)) & ADC_CIMR_CIM33_MASK)
#define ADC_CIMR_CIM34_MASK                     (0x4U)
#define ADC_CIMR_CIM34_SHIFT                    (2U)
#define ADC_CIMR_CIM34_WIDTH                    (1U)
#define ADC_CIMR_CIM34(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM34_SHIFT)) & ADC_CIMR_CIM34_MASK)
#define ADC_CIMR_CIM35_MASK                     (0x8U)
#define ADC_CIMR_CIM35_SHIFT                    (3U)
#define ADC_CIMR_CIM35_WIDTH                    (1U)
#define ADC_CIMR_CIM35(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM35_SHIFT)) & ADC_CIMR_CIM35_MASK)
#define ADC_CIMR_CIM36_MASK                     (0x10U)
#define ADC_CIMR_CIM36_SHIFT                    (4U)
#define ADC_CIMR_CIM36_WIDTH                    (1U)
#define ADC_CIMR_CIM36(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM36_SHIFT)) & ADC_CIMR_CIM36_MASK)
#define ADC_CIMR_CIM37_MASK                     (0x20U)
#define ADC_CIMR_CIM37_SHIFT                    (5U)
#define ADC_CIMR_CIM37_WIDTH                    (1U)
#define ADC_CIMR_CIM37(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM37_SHIFT)) & ADC_CIMR_CIM37_MASK)
#define ADC_CIMR_CIM38_MASK                     (0x40U)
#define ADC_CIMR_CIM38_SHIFT                    (6U)
#define ADC_CIMR_CIM38_WIDTH                    (1U)
#define ADC_CIMR_CIM38(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM38_SHIFT)) & ADC_CIMR_CIM38_MASK)
#define ADC_CIMR_CIM39_MASK                     (0x80U)
#define ADC_CIMR_CIM39_SHIFT                    (7U)
#define ADC_CIMR_CIM39_WIDTH                    (1U)
#define ADC_CIMR_CIM39(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM39_SHIFT)) & ADC_CIMR_CIM39_MASK)
#define ADC_CIMR_CIM40_MASK                     (0x100U)
#define ADC_CIMR_CIM40_SHIFT                    (8U)
#define ADC_CIMR_CIM40_WIDTH                    (1U)
#define ADC_CIMR_CIM40(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM40_SHIFT)) & ADC_CIMR_CIM40_MASK)
#define ADC_CIMR_CIM41_MASK                     (0x200U)
#define ADC_CIMR_CIM41_SHIFT                    (9U)
#define ADC_CIMR_CIM41_WIDTH                    (1U)
#define ADC_CIMR_CIM41(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM41_SHIFT)) & ADC_CIMR_CIM41_MASK)
#define ADC_CIMR_CIM42_MASK                     (0x400U)
#define ADC_CIMR_CIM42_SHIFT                    (10U)
#define ADC_CIMR_CIM42_WIDTH                    (1U)
#define ADC_CIMR_CIM42(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM42_SHIFT)) & ADC_CIMR_CIM42_MASK)
#define ADC_CIMR_CIM43_MASK                     (0x800U)
#define ADC_CIMR_CIM43_SHIFT                    (11U)
#define ADC_CIMR_CIM43_WIDTH                    (1U)
#define ADC_CIMR_CIM43(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM43_SHIFT)) & ADC_CIMR_CIM43_MASK)
#define ADC_CIMR_CIM44_MASK                     (0x1000U)
#define ADC_CIMR_CIM44_SHIFT                    (12U)
#define ADC_CIMR_CIM44_WIDTH                    (1U)
#define ADC_CIMR_CIM44(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM44_SHIFT)) & ADC_CIMR_CIM44_MASK)
#define ADC_CIMR_CIM45_MASK                     (0x2000U)
#define ADC_CIMR_CIM45_SHIFT                    (13U)
#define ADC_CIMR_CIM45_WIDTH                    (1U)
#define ADC_CIMR_CIM45(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM45_SHIFT)) & ADC_CIMR_CIM45_MASK)
#define ADC_CIMR_CIM46_MASK                     (0x4000U)
#define ADC_CIMR_CIM46_SHIFT                    (14U)
#define ADC_CIMR_CIM46_WIDTH                    (1U)
#define ADC_CIMR_CIM46(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM46_SHIFT)) & ADC_CIMR_CIM46_MASK)
#define ADC_CIMR_CIM47_MASK                     (0x8000U)
#define ADC_CIMR_CIM47_SHIFT                    (15U)
#define ADC_CIMR_CIM47_WIDTH                    (1U)
#define ADC_CIMR_CIM47(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CIMR_CIM47_SHIFT)) & ADC_CIMR_CIM47_MASK)
/*! @} */

/*! @name WTISR - Watchdog Threshold Interrupt Status Register */
/*! @{ */
#define ADC_WTISR_WDG0L_MASK                     (0x1U)
#define ADC_WTISR_WDG0L_SHIFT                    (0U)
#define ADC_WTISR_WDG0L_WIDTH                    (1U)
#define ADC_WTISR_WDG0L(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG0L_SHIFT)) & ADC_WTISR_WDG0L_MASK)
#define ADC_WTISR_WDG0H_MASK                     (0x2U)
#define ADC_WTISR_WDG0H_SHIFT                    (1U)
#define ADC_WTISR_WDG0H_WIDTH                    (1U)
#define ADC_WTISR_WDG0H(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG0H_SHIFT)) & ADC_WTISR_WDG0H_MASK)
#define ADC_WTISR_WDG1L_MASK                     (0x4U)
#define ADC_WTISR_WDG1L_SHIFT                    (2U)
#define ADC_WTISR_WDG1L_WIDTH                    (1U)
#define ADC_WTISR_WDG1L(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG1L_SHIFT)) & ADC_WTISR_WDG1L_MASK)
#define ADC_WTISR_WDG1H_MASK                     (0x8U)
#define ADC_WTISR_WDG1H_SHIFT                    (3U)
#define ADC_WTISR_WDG1H_WIDTH                    (1U)
#define ADC_WTISR_WDG1H(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG1H_SHIFT)) & ADC_WTISR_WDG1H_MASK)
#define ADC_WTISR_WDG2L_MASK                     (0x10U)
#define ADC_WTISR_WDG2L_SHIFT                    (4U)
#define ADC_WTISR_WDG2L_WIDTH                    (1U)
#define ADC_WTISR_WDG2L(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG2L_SHIFT)) & ADC_WTISR_WDG2L_MASK)
#define ADC_WTISR_WDG2H_MASK                     (0x20U)
#define ADC_WTISR_WDG2H_SHIFT                    (5U)
#define ADC_WTISR_WDG2H_WIDTH                    (1U)
#define ADC_WTISR_WDG2H(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG2H_SHIFT)) & ADC_WTISR_WDG2H_MASK)
#define ADC_WTISR_WDG3L_MASK                     (0x40U)
#define ADC_WTISR_WDG3L_SHIFT                    (6U)
#define ADC_WTISR_WDG3L_WIDTH                    (1U)
#define ADC_WTISR_WDG3L(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG3L_SHIFT)) & ADC_WTISR_WDG3L_MASK)
#define ADC_WTISR_WDG3H_MASK                     (0x80U)
#define ADC_WTISR_WDG3H_SHIFT                    (7U)
#define ADC_WTISR_WDG3H_WIDTH                    (1U)
#define ADC_WTISR_WDG3H(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG3H_SHIFT)) & ADC_WTISR_WDG3H_MASK)
#define ADC_WTISR_WDG4L_MASK                     (0x100U)
#define ADC_WTISR_WDG4L_SHIFT                    (8U)
#define ADC_WTISR_WDG4L_WIDTH                    (1U)
#define ADC_WTISR_WDG4L(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG4L_SHIFT)) & ADC_WTISR_WDG4L_MASK)
#define ADC_WTISR_WDG4H_MASK                     (0x200U)
#define ADC_WTISR_WDG4H_SHIFT                    (9U)
#define ADC_WTISR_WDG4H_WIDTH                    (1U)
#define ADC_WTISR_WDG4H(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG4H_SHIFT)) & ADC_WTISR_WDG4H_MASK)
#define ADC_WTISR_WDG5L_MASK                     (0x400U)
#define ADC_WTISR_WDG5L_SHIFT                    (10U)
#define ADC_WTISR_WDG5L_WIDTH                    (1U)
#define ADC_WTISR_WDG5L(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG5L_SHIFT)) & ADC_WTISR_WDG5L_MASK)
#define ADC_WTISR_WDG5H_MASK                     (0x800U)
#define ADC_WTISR_WDG5H_SHIFT                    (11U)
#define ADC_WTISR_WDG5H_WIDTH                    (1U)
#define ADC_WTISR_WDG5H(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG5H_SHIFT)) & ADC_WTISR_WDG5H_MASK)
#define ADC_WTISR_WDG6L_MASK                     (0x1000U)
#define ADC_WTISR_WDG6L_SHIFT                    (12U)
#define ADC_WTISR_WDG6L_WIDTH                    (1U)
#define ADC_WTISR_WDG6L(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG6L_SHIFT)) & ADC_WTISR_WDG6L_MASK)
#define ADC_WTISR_WDG6H_MASK                     (0x2000U)
#define ADC_WTISR_WDG6H_SHIFT                    (13U)
#define ADC_WTISR_WDG6H_WIDTH                    (1U)
#define ADC_WTISR_WDG6H(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG6H_SHIFT)) & ADC_WTISR_WDG6H_MASK)
#define ADC_WTISR_WDG7L_MASK                     (0x4000U)
#define ADC_WTISR_WDG7L_SHIFT                    (14U)
#define ADC_WTISR_WDG7L_WIDTH                    (1U)
#define ADC_WTISR_WDG7L(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG7L_SHIFT)) & ADC_WTISR_WDG7L_MASK)
#define ADC_WTISR_WDG7H_MASK                     (0x8000U)
#define ADC_WTISR_WDG7H_SHIFT                    (15U)
#define ADC_WTISR_WDG7H_WIDTH                    (1U)
#define ADC_WTISR_WDG7H(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_WTISR_WDG7H_SHIFT)) & ADC_WTISR_WDG7H_MASK)
/*! @} */

/*! @name WTIMR - Watchdog Threshold Interrupt Mask Register */
/*! @{ */
#define ADC_WTIMR_MSKWDG0L_MASK                  (0x1U)
#define ADC_WTIMR_MSKWDG0L_SHIFT                 (0U)
#define ADC_WTIMR_MSKWDG0L_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG0L(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG0L_SHIFT)) & ADC_WTIMR_MSKWDG0L_MASK)
#define ADC_WTIMR_MSKWDG0H_MASK                  (0x2U)
#define ADC_WTIMR_MSKWDG0H_SHIFT                 (1U)
#define ADC_WTIMR_MSKWDG0H_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG0H(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG0H_SHIFT)) & ADC_WTIMR_MSKWDG0H_MASK)
#define ADC_WTIMR_MSKWDG1L_MASK                  (0x4U)
#define ADC_WTIMR_MSKWDG1L_SHIFT                 (2U)
#define ADC_WTIMR_MSKWDG1L_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG1L(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG1L_SHIFT)) & ADC_WTIMR_MSKWDG1L_MASK)
#define ADC_WTIMR_MSKWDG1H_MASK                  (0x8U)
#define ADC_WTIMR_MSKWDG1H_SHIFT                 (3U)
#define ADC_WTIMR_MSKWDG1H_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG1H(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG1H_SHIFT)) & ADC_WTIMR_MSKWDG1H_MASK)
#define ADC_WTIMR_MSKWDG2L_MASK                  (0x10U)
#define ADC_WTIMR_MSKWDG2L_SHIFT                 (4U)
#define ADC_WTIMR_MSKWDG2L_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG2L(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG2L_SHIFT)) & ADC_WTIMR_MSKWDG2L_MASK)
#define ADC_WTIMR_MSKWDG2H_MASK                  (0x20U)
#define ADC_WTIMR_MSKWDG2H_SHIFT                 (5U)
#define ADC_WTIMR_MSKWDG2H_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG2H(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG2H_SHIFT)) & ADC_WTIMR_MSKWDG2H_MASK)
#define ADC_WTIMR_MSKWDG3L_MASK                  (0x40U)
#define ADC_WTIMR_MSKWDG3L_SHIFT                 (6U)
#define ADC_WTIMR_MSKWDG3L_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG3L(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG3L_SHIFT)) & ADC_WTIMR_MSKWDG3L_MASK)
#define ADC_WTIMR_MSKWDG3H_MASK                  (0x80U)
#define ADC_WTIMR_MSKWDG3H_SHIFT                 (7U)
#define ADC_WTIMR_MSKWDG3H_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG3H(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG3H_SHIFT)) & ADC_WTIMR_MSKWDG3H_MASK)
#define ADC_WTIMR_MSKWDG4L_MASK                  (0x100U)
#define ADC_WTIMR_MSKWDG4L_SHIFT                 (8U)
#define ADC_WTIMR_MSKWDG4L_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG4L(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG4L_SHIFT)) & ADC_WTIMR_MSKWDG4L_MASK)
#define ADC_WTIMR_MSKWDG4H_MASK                  (0x200U)
#define ADC_WTIMR_MSKWDG4H_SHIFT                 (9U)
#define ADC_WTIMR_MSKWDG4H_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG4H(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG4H_SHIFT)) & ADC_WTIMR_MSKWDG4H_MASK)
#define ADC_WTIMR_MSKWDG5L_MASK                  (0x400U)
#define ADC_WTIMR_MSKWDG5L_SHIFT                 (10U)
#define ADC_WTIMR_MSKWDG5L_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG5L(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG5L_SHIFT)) & ADC_WTIMR_MSKWDG5L_MASK)
#define ADC_WTIMR_MSKWDG5H_MASK                  (0x800U)
#define ADC_WTIMR_MSKWDG5H_SHIFT                 (11U)
#define ADC_WTIMR_MSKWDG5H_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG5H(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG5H_SHIFT)) & ADC_WTIMR_MSKWDG5H_MASK)
#define ADC_WTIMR_MSKWDG6L_MASK                  (0x1000U)
#define ADC_WTIMR_MSKWDG6L_SHIFT                 (12U)
#define ADC_WTIMR_MSKWDG6L_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG6L(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG6L_SHIFT)) & ADC_WTIMR_MSKWDG6L_MASK)
#define ADC_WTIMR_MSKWDG6H_MASK                  (0x2000U)
#define ADC_WTIMR_MSKWDG6H_SHIFT                 (13U)
#define ADC_WTIMR_MSKWDG6H_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG6H(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG6H_SHIFT)) & ADC_WTIMR_MSKWDG6H_MASK)
#define ADC_WTIMR_MSKWDG7L_MASK                  (0x4000U)
#define ADC_WTIMR_MSKWDG7L_SHIFT                 (14U)
#define ADC_WTIMR_MSKWDG7L_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG7L(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG7L_SHIFT)) & ADC_WTIMR_MSKWDG7L_MASK)
#define ADC_WTIMR_MSKWDG7H_MASK                  (0x8000U)
#define ADC_WTIMR_MSKWDG7H_SHIFT                 (15U)
#define ADC_WTIMR_MSKWDG7H_WIDTH                 (1U)
#define ADC_WTIMR_MSKWDG7H(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_WTIMR_MSKWDG7H_SHIFT)) & ADC_WTIMR_MSKWDG7H_MASK)
/*! @} */

/*! @name DMAE - DMAE Register */
/*! @{ */
#define ADC_DMAE_DMAEN_MASK                      (0x1U)
#define ADC_DMAE_DMAEN_SHIFT                     (0U)
#define ADC_DMAE_DMAEN_WIDTH                     (1U)
#define ADC_DMAE_DMAEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DMAE_DMAEN_SHIFT)) & ADC_DMAE_DMAEN_MASK)
#define ADC_DMAE_DCLR_MASK                       (0x2U)
#define ADC_DMAE_DCLR_SHIFT                      (1U)
#define ADC_DMAE_DCLR_WIDTH                      (1U)
#define ADC_DMAE_DCLR(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_DMAE_DCLR_SHIFT)) & ADC_DMAE_DCLR_MASK)
/*! @} */

/*! @name DMAR - DMA Register */
/*! @{ */
#define ADC_DMAR_DMA0_MASK                      (0x1U)
#define ADC_DMAR_DMA0_SHIFT                     (0U)
#define ADC_DMAR_DMA0_WIDTH                     (1U)
#define ADC_DMAR_DMA0(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA0_SHIFT)) & ADC_DMAR_DMA0_MASK)
#define ADC_DMAR_DMA1_MASK                      (0x2U)
#define ADC_DMAR_DMA1_SHIFT                     (1U)
#define ADC_DMAR_DMA1_WIDTH                     (1U)
#define ADC_DMAR_DMA1(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA1_SHIFT)) & ADC_DMAR_DMA1_MASK)
#define ADC_DMAR_DMA2_MASK                      (0x4U)
#define ADC_DMAR_DMA2_SHIFT                     (2U)
#define ADC_DMAR_DMA2_WIDTH                     (1U)
#define ADC_DMAR_DMA2(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA2_SHIFT)) & ADC_DMAR_DMA2_MASK)
#define ADC_DMAR_DMA3_MASK                      (0x8U)
#define ADC_DMAR_DMA3_SHIFT                     (3U)
#define ADC_DMAR_DMA3_WIDTH                     (1U)
#define ADC_DMAR_DMA3(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA3_SHIFT)) & ADC_DMAR_DMA3_MASK)
#define ADC_DMAR_DMA4_MASK                      (0x10U)
#define ADC_DMAR_DMA4_SHIFT                     (4U)
#define ADC_DMAR_DMA4_WIDTH                     (1U)
#define ADC_DMAR_DMA4(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA4_SHIFT)) & ADC_DMAR_DMA4_MASK)
#define ADC_DMAR_DMA5_MASK                      (0x20U)
#define ADC_DMAR_DMA5_SHIFT                     (5U)
#define ADC_DMAR_DMA5_WIDTH                     (1U)
#define ADC_DMAR_DMA5(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA5_SHIFT)) & ADC_DMAR_DMA5_MASK)
#define ADC_DMAR_DMA6_MASK                      (0x40U)
#define ADC_DMAR_DMA6_SHIFT                     (6U)
#define ADC_DMAR_DMA6_WIDTH                     (1U)
#define ADC_DMAR_DMA6(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA6_SHIFT)) & ADC_DMAR_DMA6_MASK)
#define ADC_DMAR_DMA7_MASK                      (0x80U)
#define ADC_DMAR_DMA7_SHIFT                     (7U)
#define ADC_DMAR_DMA7_WIDTH                     (1U)
#define ADC_DMAR_DMA7(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA7_SHIFT)) & ADC_DMAR_DMA7_MASK)
#define ADC_DMAR_DMA32_MASK                     (0x1U)
#define ADC_DMAR_DMA32_SHIFT                    (0U)
#define ADC_DMAR_DMA32_WIDTH                    (1U)
#define ADC_DMAR_DMA32(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA32_SHIFT)) & ADC_DMAR_DMA32_MASK)
#define ADC_DMAR_DMA33_MASK                     (0x2U)
#define ADC_DMAR_DMA33_SHIFT                    (1U)
#define ADC_DMAR_DMA33_WIDTH                    (1U)
#define ADC_DMAR_DMA33(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA33_SHIFT)) & ADC_DMAR_DMA33_MASK)
#define ADC_DMAR_DMA34_MASK                     (0x4U)
#define ADC_DMAR_DMA34_SHIFT                    (2U)
#define ADC_DMAR_DMA34_WIDTH                    (1U)
#define ADC_DMAR_DMA34(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA34_SHIFT)) & ADC_DMAR_DMA34_MASK)
#define ADC_DMAR_DMA35_MASK                     (0x8U)
#define ADC_DMAR_DMA35_SHIFT                    (3U)
#define ADC_DMAR_DMA35_WIDTH                    (1U)
#define ADC_DMAR_DMA35(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA35_SHIFT)) & ADC_DMAR_DMA35_MASK)
#define ADC_DMAR_DMA36_MASK                     (0x10U)
#define ADC_DMAR_DMA36_SHIFT                    (4U)
#define ADC_DMAR_DMA36_WIDTH                    (1U)
#define ADC_DMAR_DMA36(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA36_SHIFT)) & ADC_DMAR_DMA36_MASK)
#define ADC_DMAR_DMA37_MASK                     (0x20U)
#define ADC_DMAR_DMA37_SHIFT                    (5U)
#define ADC_DMAR_DMA37_WIDTH                    (1U)
#define ADC_DMAR_DMA37(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA37_SHIFT)) & ADC_DMAR_DMA37_MASK)
#define ADC_DMAR_DMA38_MASK                     (0x40U)
#define ADC_DMAR_DMA38_SHIFT                    (6U)
#define ADC_DMAR_DMA38_WIDTH                    (1U)
#define ADC_DMAR_DMA38(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA38_SHIFT)) & ADC_DMAR_DMA38_MASK)
#define ADC_DMAR_DMA39_MASK                     (0x80U)
#define ADC_DMAR_DMA39_SHIFT                    (7U)
#define ADC_DMAR_DMA39_WIDTH                    (1U)
#define ADC_DMAR_DMA39(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA39_SHIFT)) & ADC_DMAR_DMA39_MASK)
#define ADC_DMAR_DMA40_MASK                     (0x100U)
#define ADC_DMAR_DMA40_SHIFT                    (8U)
#define ADC_DMAR_DMA40_WIDTH                    (1U)
#define ADC_DMAR_DMA40(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA40_SHIFT)) & ADC_DMAR_DMA40_MASK)
#define ADC_DMAR_DMA41_MASK                     (0x200U)
#define ADC_DMAR_DMA41_SHIFT                    (9U)
#define ADC_DMAR_DMA41_WIDTH                    (1U)
#define ADC_DMAR_DMA41(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA41_SHIFT)) & ADC_DMAR_DMA41_MASK)
#define ADC_DMAR_DMA42_MASK                     (0x400U)
#define ADC_DMAR_DMA42_SHIFT                    (10U)
#define ADC_DMAR_DMA42_WIDTH                    (1U)
#define ADC_DMAR_DMA42(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA42_SHIFT)) & ADC_DMAR_DMA42_MASK)
#define ADC_DMAR_DMA43_MASK                     (0x800U)
#define ADC_DMAR_DMA43_SHIFT                    (11U)
#define ADC_DMAR_DMA43_WIDTH                    (1U)
#define ADC_DMAR_DMA43(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA43_SHIFT)) & ADC_DMAR_DMA43_MASK)
#define ADC_DMAR_DMA44_MASK                     (0x1000U)
#define ADC_DMAR_DMA44_SHIFT                    (12U)
#define ADC_DMAR_DMA44_WIDTH                    (1U)
#define ADC_DMAR_DMA44(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA44_SHIFT)) & ADC_DMAR_DMA44_MASK)
#define ADC_DMAR_DMA45_MASK                     (0x2000U)
#define ADC_DMAR_DMA45_SHIFT                    (13U)
#define ADC_DMAR_DMA45_WIDTH                    (1U)
#define ADC_DMAR_DMA45(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA45_SHIFT)) & ADC_DMAR_DMA45_MASK)
#define ADC_DMAR_DMA46_MASK                     (0x4000U)
#define ADC_DMAR_DMA46_SHIFT                    (14U)
#define ADC_DMAR_DMA46_WIDTH                    (1U)
#define ADC_DMAR_DMA46(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA46_SHIFT)) & ADC_DMAR_DMA46_MASK)
#define ADC_DMAR_DMA47_MASK                     (0x8000U)
#define ADC_DMAR_DMA47_SHIFT                    (15U)
#define ADC_DMAR_DMA47_WIDTH                    (1U)
#define ADC_DMAR_DMA47(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_DMAR_DMA47_SHIFT)) & ADC_DMAR_DMA47_MASK)
/*! @} */

/*! @name THRHLR0 - Analog Watchdog Threshold Register 0 */
/*! @{ */
#define ADC_THRHLR0_THRL_MASK                    (0xFFFU)
#define ADC_THRHLR0_THRL_SHIFT                   (0U)
#define ADC_THRHLR0_THRL_WIDTH                   (12U)
#define ADC_THRHLR0_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR0_THRL_SHIFT)) & ADC_THRHLR0_THRL_MASK)
#define ADC_THRHLR0_THRH_MASK                    (0xFFF0000U)
#define ADC_THRHLR0_THRH_SHIFT                   (16U)
#define ADC_THRHLR0_THRH_WIDTH                   (12U)
#define ADC_THRHLR0_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR0_THRH_SHIFT)) & ADC_THRHLR0_THRH_MASK)
/*! @} */

/*! @name THRHLR1 - Analog Watchdog Threshold Register 1 */
/*! @{ */
#define ADC_THRHLR1_THRL_MASK                    (0xFFFU)
#define ADC_THRHLR1_THRL_SHIFT                   (0U)
#define ADC_THRHLR1_THRL_WIDTH                   (12U)
#define ADC_THRHLR1_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR1_THRL_SHIFT)) & ADC_THRHLR1_THRL_MASK)
#define ADC_THRHLR1_THRH_MASK                    (0xFFF0000U)
#define ADC_THRHLR1_THRH_SHIFT                   (16U)
#define ADC_THRHLR1_THRH_WIDTH                   (12U)
#define ADC_THRHLR1_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR1_THRH_SHIFT)) & ADC_THRHLR1_THRH_MASK)
/*! @} */

/*! @name THRHLR2 - Analog Watchdog Threshold Register 2 */
/*! @{ */
#define ADC_THRHLR2_THRL_MASK                    (0xFFFU)
#define ADC_THRHLR2_THRL_SHIFT                   (0U)
#define ADC_THRHLR2_THRL_WIDTH                   (12U)
#define ADC_THRHLR2_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR2_THRL_SHIFT)) & ADC_THRHLR2_THRL_MASK)
#define ADC_THRHLR2_THRH_MASK                    (0xFFF0000U)
#define ADC_THRHLR2_THRH_SHIFT                   (16U)
#define ADC_THRHLR2_THRH_WIDTH                   (12U)
#define ADC_THRHLR2_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR2_THRH_SHIFT)) & ADC_THRHLR2_THRH_MASK)
/*! @} */

/*! @name THRHLR3 - Analog Watchdog Threshold Register 2 */
/*! @{ */
#define ADC_THRHLR3_THRL_MASK                    (0xFFFU)
#define ADC_THRHLR3_THRL_SHIFT                   (0U)
#define ADC_THRHLR3_THRL_WIDTH                   (12U)
#define ADC_THRHLR3_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR3_THRL_SHIFT)) & ADC_THRHLR3_THRL_MASK)
#define ADC_THRHLR3_THRH_MASK                    (0xFFF0000U)
#define ADC_THRHLR3_THRH_SHIFT                   (16U)
#define ADC_THRHLR3_THRH_WIDTH                   (12U)
#define ADC_THRHLR3_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR3_THRH_SHIFT)) & ADC_THRHLR3_THRH_MASK)
/*! @} */

/*! @name PSCR - Presampling Control Register */
/*! @{ */
#define ADC_PSCR_PRECONV_MASK                    (0x1U)
#define ADC_PSCR_PRECONV_SHIFT                   (0U)
#define ADC_PSCR_PRECONV_WIDTH                   (1U)
#define ADC_PSCR_PRECONV(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_PSCR_PRECONV_SHIFT)) & ADC_PSCR_PRECONV_MASK)
#define ADC_PSCR_PREVAL0_MASK                    (0x6U)
#define ADC_PSCR_PREVAL0_SHIFT                   (1U)
#define ADC_PSCR_PREVAL0_WIDTH                   (2U)
#define ADC_PSCR_PREVAL0(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_PSCR_PREVAL0_SHIFT)) & ADC_PSCR_PREVAL0_MASK)
#define ADC_PSCR_PREVAL1_MASK                    (0x18U)
#define ADC_PSCR_PREVAL1_SHIFT                   (3U)
#define ADC_PSCR_PREVAL1_WIDTH                   (2U)
#define ADC_PSCR_PREVAL1(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_PSCR_PREVAL1_SHIFT)) & ADC_PSCR_PREVAL1_MASK)
/*! @} */

/*! @name PSR - Presampling Register */
/*! @{ */
#define ADC_PSR_PRES0_MASK                      (0x1U)
#define ADC_PSR_PRES0_SHIFT                     (0U)
#define ADC_PSR_PRES0_WIDTH                     (1U)
#define ADC_PSR_PRES0(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES0_SHIFT)) & ADC_PSR_PRES0_MASK)
#define ADC_PSR_PRES1_MASK                      (0x2U)
#define ADC_PSR_PRES1_SHIFT                     (1U)
#define ADC_PSR_PRES1_WIDTH                     (1U)
#define ADC_PSR_PRES1(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES1_SHIFT)) & ADC_PSR_PRES1_MASK)
#define ADC_PSR_PRES2_MASK                      (0x4U)
#define ADC_PSR_PRES2_SHIFT                     (2U)
#define ADC_PSR_PRES2_WIDTH                     (1U)
#define ADC_PSR_PRES2(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES2_SHIFT)) & ADC_PSR_PRES2_MASK)
#define ADC_PSR_PRES3_MASK                      (0x8U)
#define ADC_PSR_PRES3_SHIFT                     (3U)
#define ADC_PSR_PRES3_WIDTH                     (1U)
#define ADC_PSR_PRES3(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES3_SHIFT)) & ADC_PSR_PRES3_MASK)
#define ADC_PSR_PRES4_MASK                      (0x10U)
#define ADC_PSR_PRES4_SHIFT                     (4U)
#define ADC_PSR_PRES4_WIDTH                     (1U)
#define ADC_PSR_PRES4(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES4_SHIFT)) & ADC_PSR_PRES4_MASK)
#define ADC_PSR_PRES5_MASK                      (0x20U)
#define ADC_PSR_PRES5_SHIFT                     (5U)
#define ADC_PSR_PRES5_WIDTH                     (1U)
#define ADC_PSR_PRES5(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES5_SHIFT)) & ADC_PSR_PRES5_MASK)
#define ADC_PSR_PRES6_MASK                      (0x40U)
#define ADC_PSR_PRES6_SHIFT                     (6U)
#define ADC_PSR_PRES6_WIDTH                     (1U)
#define ADC_PSR_PRES6(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES6_SHIFT)) & ADC_PSR_PRES6_MASK)
#define ADC_PSR_PRES7_MASK                      (0x80U)
#define ADC_PSR_PRES7_SHIFT                     (7U)
#define ADC_PSR_PRES7_WIDTH                     (1U)
#define ADC_PSR_PRES7(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES7_SHIFT)) & ADC_PSR_PRES7_MASK)
#define ADC_PSR_PRES32_MASK                     (0x1U)
#define ADC_PSR_PRES32_SHIFT                    (0U)
#define ADC_PSR_PRES32_WIDTH                    (1U)
#define ADC_PSR_PRES32(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES32_SHIFT)) & ADC_PSR_PRES32_MASK)
#define ADC_PSR_PRES33_MASK                     (0x2U)
#define ADC_PSR_PRES33_SHIFT                    (1U)
#define ADC_PSR_PRES33_WIDTH                    (1U)
#define ADC_PSR_PRES33(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES33_SHIFT)) & ADC_PSR_PRES33_MASK)
#define ADC_PSR_PRES34_MASK                     (0x4U)
#define ADC_PSR_PRES34_SHIFT                    (2U)
#define ADC_PSR_PRES34_WIDTH                    (1U)
#define ADC_PSR_PRES34(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES34_SHIFT)) & ADC_PSR_PRES34_MASK)
#define ADC_PSR_PRES35_MASK                     (0x8U)
#define ADC_PSR_PRES35_SHIFT                    (3U)
#define ADC_PSR_PRES35_WIDTH                    (1U)
#define ADC_PSR_PRES35(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES35_SHIFT)) & ADC_PSR_PRES35_MASK)
#define ADC_PSR_PRES36_MASK                     (0x10U)
#define ADC_PSR_PRES36_SHIFT                    (4U)
#define ADC_PSR_PRES36_WIDTH                    (1U)
#define ADC_PSR_PRES36(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES36_SHIFT)) & ADC_PSR_PRES36_MASK)
#define ADC_PSR_PRES37_MASK                     (0x20U)
#define ADC_PSR_PRES37_SHIFT                    (5U)
#define ADC_PSR_PRES37_WIDTH                    (1U)
#define ADC_PSR_PRES37(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES37_SHIFT)) & ADC_PSR_PRES37_MASK)
#define ADC_PSR_PRES38_MASK                     (0x40U)
#define ADC_PSR_PRES38_SHIFT                    (6U)
#define ADC_PSR_PRES38_WIDTH                    (1U)
#define ADC_PSR_PRES38(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES38_SHIFT)) & ADC_PSR_PRES38_MASK)
#define ADC_PSR_PRES39_MASK                     (0x80U)
#define ADC_PSR_PRES39_SHIFT                    (7U)
#define ADC_PSR_PRES39_WIDTH                    (1U)
#define ADC_PSR_PRES39(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES39_SHIFT)) & ADC_PSR_PRES39_MASK)
#define ADC_PSR_PRES40_MASK                     (0x100U)
#define ADC_PSR_PRES40_SHIFT                    (8U)
#define ADC_PSR_PRES40_WIDTH                    (1U)
#define ADC_PSR_PRES40(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES40_SHIFT)) & ADC_PSR_PRES40_MASK)
#define ADC_PSR_PRES41_MASK                     (0x200U)
#define ADC_PSR_PRES41_SHIFT                    (9U)
#define ADC_PSR_PRES41_WIDTH                    (1U)
#define ADC_PSR_PRES41(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES41_SHIFT)) & ADC_PSR_PRES41_MASK)
#define ADC_PSR_PRES42_MASK                     (0x400U)
#define ADC_PSR_PRES42_SHIFT                    (10U)
#define ADC_PSR_PRES42_WIDTH                    (1U)
#define ADC_PSR_PRES42(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES42_SHIFT)) & ADC_PSR_PRES42_MASK)
#define ADC_PSR_PRES43_MASK                     (0x800U)
#define ADC_PSR_PRES43_SHIFT                    (11U)
#define ADC_PSR_PRES43_WIDTH                    (1U)
#define ADC_PSR_PRES43(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES43_SHIFT)) & ADC_PSR_PRES43_MASK)
#define ADC_PSR_PRES44_MASK                     (0x1000U)
#define ADC_PSR_PRES44_SHIFT                    (12U)
#define ADC_PSR_PRES44_WIDTH                    (1U)
#define ADC_PSR_PRES44(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES44_SHIFT)) & ADC_PSR_PRES44_MASK)
#define ADC_PSR_PRES45_MASK                     (0x2000U)
#define ADC_PSR_PRES45_SHIFT                    (13U)
#define ADC_PSR_PRES45_WIDTH                    (1U)
#define ADC_PSR_PRES45(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES45_SHIFT)) & ADC_PSR_PRES45_MASK)
#define ADC_PSR_PRES46_MASK                     (0x4000U)
#define ADC_PSR_PRES46_SHIFT                    (14U)
#define ADC_PSR_PRES46_WIDTH                    (1U)
#define ADC_PSR_PRES46(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES46_SHIFT)) & ADC_PSR_PRES46_MASK)
#define ADC_PSR_PRES47_MASK                     (0x8000U)
#define ADC_PSR_PRES47_SHIFT                    (15U)
#define ADC_PSR_PRES47_WIDTH                    (1U)
#define ADC_PSR_PRES47(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_PSR_PRES47_SHIFT)) & ADC_PSR_PRES47_MASK)
/*! @} */

/*! @name CTR0 - Conversion Timing Register 0 */
/*! @{ */
#define ADC_CTR_INPSAMP_MASK                    (0xFFU)
#define ADC_CTR_INPSAMP_SHIFT                   (0U)
#define ADC_CTR_INPSAMP_WIDTH                   (8U)
#define ADC_CTR_INPSAMP(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CTR_INPSAMP_SHIFT)) & ADC_CTR_INPSAMP_MASK)
/*! @} */

/*! @name NCMR - Normal Conversion Mask Register */
/*! @{ */
#define ADC_NCMR_CH0_MASK                       (0x1U)
#define ADC_NCMR_CH0_SHIFT                      (0U)
#define ADC_NCMR_CH0_WIDTH                      (1U)
#define ADC_NCMR_CH0(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH0_SHIFT)) & ADC_NCMR_CH0_MASK)
#define ADC_NCMR_CH1_MASK                       (0x2U)
#define ADC_NCMR_CH1_SHIFT                      (1U)
#define ADC_NCMR_CH1_WIDTH                      (1U)
#define ADC_NCMR_CH1(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH1_SHIFT)) & ADC_NCMR_CH1_MASK)
#define ADC_NCMR_CH2_MASK                       (0x4U)
#define ADC_NCMR_CH2_SHIFT                      (2U)
#define ADC_NCMR_CH2_WIDTH                      (1U)
#define ADC_NCMR_CH2(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH2_SHIFT)) & ADC_NCMR_CH2_MASK)
#define ADC_NCMR_CH3_MASK                       (0x8U)
#define ADC_NCMR_CH3_SHIFT                      (3U)
#define ADC_NCMR_CH3_WIDTH                      (1U)
#define ADC_NCMR_CH3(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH3_SHIFT)) & ADC_NCMR_CH3_MASK)
#define ADC_NCMR_CH4_MASK                       (0x10U)
#define ADC_NCMR_CH4_SHIFT                      (4U)
#define ADC_NCMR_CH4_WIDTH                      (1U)
#define ADC_NCMR_CH4(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH4_SHIFT)) & ADC_NCMR_CH4_MASK)
#define ADC_NCMR_CH5_MASK                       (0x20U)
#define ADC_NCMR_CH5_SHIFT                      (5U)
#define ADC_NCMR_CH5_WIDTH                      (1U)
#define ADC_NCMR_CH5(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH5_SHIFT)) & ADC_NCMR_CH5_MASK)
#define ADC_NCMR_CH6_MASK                       (0x40U)
#define ADC_NCMR_CH6_SHIFT                      (6U)
#define ADC_NCMR_CH6_WIDTH                      (1U)
#define ADC_NCMR_CH6(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH6_SHIFT)) & ADC_NCMR_CH6_MASK)
#define ADC_NCMR_CH7_MASK                       (0x80U)
#define ADC_NCMR_CH7_SHIFT                      (7U)
#define ADC_NCMR_CH7_WIDTH                      (1U)
#define ADC_NCMR_CH7(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH7_SHIFT)) & ADC_NCMR_CH7_MASK)
#define ADC_NCMR_CH32_MASK                      (0x1U)
#define ADC_NCMR_CH32_SHIFT                     (0U)
#define ADC_NCMR_CH32_WIDTH                     (1U)
#define ADC_NCMR_CH32(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH32_SHIFT)) & ADC_NCMR_CH32_MASK)
#define ADC_NCMR_CH33_MASK                      (0x2U)
#define ADC_NCMR_CH33_SHIFT                     (1U)
#define ADC_NCMR_CH33_WIDTH                     (1U)
#define ADC_NCMR_CH33(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH33_SHIFT)) & ADC_NCMR_CH33_MASK)
#define ADC_NCMR_CH34_MASK                      (0x4U)
#define ADC_NCMR_CH34_SHIFT                     (2U)
#define ADC_NCMR_CH34_WIDTH                     (1U)
#define ADC_NCMR_CH34(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH34_SHIFT)) & ADC_NCMR_CH34_MASK)
#define ADC_NCMR_CH35_MASK                      (0x8U)
#define ADC_NCMR_CH35_SHIFT                     (3U)
#define ADC_NCMR_CH35_WIDTH                     (1U)
#define ADC_NCMR_CH35(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH35_SHIFT)) & ADC_NCMR_CH35_MASK)
#define ADC_NCMR_CH36_MASK                      (0x10U)
#define ADC_NCMR_CH36_SHIFT                     (4U)
#define ADC_NCMR_CH36_WIDTH                     (1U)
#define ADC_NCMR_CH36(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH36_SHIFT)) & ADC_NCMR_CH36_MASK)
#define ADC_NCMR_CH37_MASK                      (0x20U)
#define ADC_NCMR_CH37_SHIFT                     (5U)
#define ADC_NCMR_CH37_WIDTH                     (1U)
#define ADC_NCMR_CH37(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH37_SHIFT)) & ADC_NCMR_CH37_MASK)
#define ADC_NCMR_CH38_MASK                      (0x40U)
#define ADC_NCMR_CH38_SHIFT                     (6U)
#define ADC_NCMR_CH38_WIDTH                     (1U)
#define ADC_NCMR_CH38(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH38_SHIFT)) & ADC_NCMR_CH38_MASK)
#define ADC_NCMR_CH39_MASK                      (0x80U)
#define ADC_NCMR_CH39_SHIFT                     (7U)
#define ADC_NCMR_CH39_WIDTH                     (1U)
#define ADC_NCMR_CH39(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH39_SHIFT)) & ADC_NCMR_CH39_MASK)
#define ADC_NCMR_CH40_MASK                      (0x100U)
#define ADC_NCMR_CH40_SHIFT                     (8U)
#define ADC_NCMR_CH40_WIDTH                     (1U)
#define ADC_NCMR_CH40(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH40_SHIFT)) & ADC_NCMR_CH40_MASK)
#define ADC_NCMR_CH41_MASK                      (0x200U)
#define ADC_NCMR_CH41_SHIFT                     (9U)
#define ADC_NCMR_CH41_WIDTH                     (1U)
#define ADC_NCMR_CH41(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH41_SHIFT)) & ADC_NCMR_CH41_MASK)
#define ADC_NCMR_CH42_MASK                      (0x400U)
#define ADC_NCMR_CH42_SHIFT                     (10U)
#define ADC_NCMR_CH42_WIDTH                     (1U)
#define ADC_NCMR_CH42(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH42_SHIFT)) & ADC_NCMR_CH42_MASK)
#define ADC_NCMR_CH43_MASK                      (0x800U)
#define ADC_NCMR_CH43_SHIFT                     (11U)
#define ADC_NCMR_CH43_WIDTH                     (1U)
#define ADC_NCMR_CH43(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH43_SHIFT)) & ADC_NCMR_CH43_MASK)
#define ADC_NCMR_CH44_MASK                      (0x1000U)
#define ADC_NCMR_CH44_SHIFT                     (12U)
#define ADC_NCMR_CH44_WIDTH                     (1U)
#define ADC_NCMR_CH44(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH44_SHIFT)) & ADC_NCMR_CH44_MASK)
#define ADC_NCMR_CH45_MASK                      (0x2000U)
#define ADC_NCMR_CH45_SHIFT                     (13U)
#define ADC_NCMR_CH45_WIDTH                     (1U)
#define ADC_NCMR_CH45(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH45_SHIFT)) & ADC_NCMR_CH45_MASK)
#define ADC_NCMR_CH46_MASK                      (0x4000U)
#define ADC_NCMR_CH46_SHIFT                     (14U)
#define ADC_NCMR_CH46_WIDTH                     (1U)
#define ADC_NCMR_CH46(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH46_SHIFT)) & ADC_NCMR_CH46_MASK)
#define ADC_NCMR_CH47_MASK                      (0x8000U)
#define ADC_NCMR_CH47_SHIFT                     (15U)
#define ADC_NCMR_CH47_WIDTH                     (1U)
#define ADC_NCMR_CH47(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_NCMR_CH47_SHIFT)) & ADC_NCMR_CH47_MASK)
/*! @} */

/*! @name JCMR - Injected Conversion Mask Register */
/*! @{ */
#define ADC_JCMR_CH0_MASK                       (0x1U)
#define ADC_JCMR_CH0_SHIFT                      (0U)
#define ADC_JCMR_CH0_WIDTH                      (1U)
#define ADC_JCMR_CH0(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH0_SHIFT)) & ADC_JCMR_CH0_MASK)
#define ADC_JCMR_CH1_MASK                       (0x2U)
#define ADC_JCMR_CH1_SHIFT                      (1U)
#define ADC_JCMR_CH1_WIDTH                      (1U)
#define ADC_JCMR_CH1(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH1_SHIFT)) & ADC_JCMR_CH1_MASK)
#define ADC_JCMR_CH2_MASK                       (0x4U)
#define ADC_JCMR_CH2_SHIFT                      (2U)
#define ADC_JCMR_CH2_WIDTH                      (1U)
#define ADC_JCMR_CH2(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH2_SHIFT)) & ADC_JCMR_CH2_MASK)
#define ADC_JCMR_CH3_MASK                       (0x8U)
#define ADC_JCMR_CH3_SHIFT                      (3U)
#define ADC_JCMR_CH3_WIDTH                      (1U)
#define ADC_JCMR_CH3(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH3_SHIFT)) & ADC_JCMR_CH3_MASK)
#define ADC_JCMR_CH4_MASK                       (0x10U)
#define ADC_JCMR_CH4_SHIFT                      (4U)
#define ADC_JCMR_CH4_WIDTH                      (1U)
#define ADC_JCMR_CH4(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH4_SHIFT)) & ADC_JCMR_CH4_MASK)
#define ADC_JCMR_CH5_MASK                       (0x20U)
#define ADC_JCMR_CH5_SHIFT                      (5U)
#define ADC_JCMR_CH5_WIDTH                      (1U)
#define ADC_JCMR_CH5(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH5_SHIFT)) & ADC_JCMR_CH5_MASK)
#define ADC_JCMR_CH6_MASK                       (0x40U)
#define ADC_JCMR_CH6_SHIFT                      (6U)
#define ADC_JCMR_CH6_WIDTH                      (1U)
#define ADC_JCMR_CH6(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH6_SHIFT)) & ADC_JCMR_CH6_MASK)
#define ADC_JCMR_CH7_MASK                       (0x80U)
#define ADC_JCMR_CH7_SHIFT                      (7U)
#define ADC_JCMR_CH7_WIDTH                      (1U)
#define ADC_JCMR_CH7(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH7_SHIFT)) & ADC_JCMR_CH7_MASK)
#define ADC_JCMR_CH32_MASK                      (0x1U)
#define ADC_JCMR_CH32_SHIFT                     (0U)
#define ADC_JCMR_CH32_WIDTH                     (1U)
#define ADC_JCMR_CH32(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH32_SHIFT)) & ADC_JCMR_CH32_MASK)
#define ADC_JCMR_CH33_MASK                      (0x2U)
#define ADC_JCMR_CH33_SHIFT                     (1U)
#define ADC_JCMR_CH33_WIDTH                     (1U)
#define ADC_JCMR_CH33(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH33_SHIFT)) & ADC_JCMR_CH33_MASK)
#define ADC_JCMR_CH34_MASK                      (0x4U)
#define ADC_JCMR_CH34_SHIFT                     (2U)
#define ADC_JCMR_CH34_WIDTH                     (1U)
#define ADC_JCMR_CH34(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH34_SHIFT)) & ADC_JCMR_CH34_MASK)
#define ADC_JCMR_CH35_MASK                      (0x8U)
#define ADC_JCMR_CH35_SHIFT                     (3U)
#define ADC_JCMR_CH35_WIDTH                     (1U)
#define ADC_JCMR_CH35(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH35_SHIFT)) & ADC_JCMR_CH35_MASK)
#define ADC_JCMR_CH36_MASK                      (0x10U)
#define ADC_JCMR_CH36_SHIFT                     (4U)
#define ADC_JCMR_CH36_WIDTH                     (1U)
#define ADC_JCMR_CH36(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH36_SHIFT)) & ADC_JCMR_CH36_MASK)
#define ADC_JCMR_CH37_MASK                      (0x20U)
#define ADC_JCMR_CH37_SHIFT                     (5U)
#define ADC_JCMR_CH37_WIDTH                     (1U)
#define ADC_JCMR_CH37(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH37_SHIFT)) & ADC_JCMR_CH37_MASK)
#define ADC_JCMR_CH38_MASK                      (0x40U)
#define ADC_JCMR_CH38_SHIFT                     (6U)
#define ADC_JCMR_CH38_WIDTH                     (1U)
#define ADC_JCMR_CH38(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH38_SHIFT)) & ADC_JCMR_CH38_MASK)
#define ADC_JCMR_CH39_MASK                      (0x80U)
#define ADC_JCMR_CH39_SHIFT                     (7U)
#define ADC_JCMR_CH39_WIDTH                     (1U)
#define ADC_JCMR_CH39(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH39_SHIFT)) & ADC_JCMR_CH39_MASK)
#define ADC_JCMR_CH40_MASK                      (0x100U)
#define ADC_JCMR_CH40_SHIFT                     (8U)
#define ADC_JCMR_CH40_WIDTH                     (1U)
#define ADC_JCMR_CH40(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH40_SHIFT)) & ADC_JCMR_CH40_MASK)
#define ADC_JCMR_CH41_MASK                      (0x200U)
#define ADC_JCMR_CH41_SHIFT                     (9U)
#define ADC_JCMR_CH41_WIDTH                     (1U)
#define ADC_JCMR_CH41(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH41_SHIFT)) & ADC_JCMR_CH41_MASK)
#define ADC_JCMR_CH42_MASK                      (0x400U)
#define ADC_JCMR_CH42_SHIFT                     (10U)
#define ADC_JCMR_CH42_WIDTH                     (1U)
#define ADC_JCMR_CH42(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH42_SHIFT)) & ADC_JCMR_CH42_MASK)
#define ADC_JCMR_CH43_MASK                      (0x800U)
#define ADC_JCMR_CH43_SHIFT                     (11U)
#define ADC_JCMR_CH43_WIDTH                     (1U)
#define ADC_JCMR_CH43(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH43_SHIFT)) & ADC_JCMR_CH43_MASK)
#define ADC_JCMR_CH44_MASK                      (0x1000U)
#define ADC_JCMR_CH44_SHIFT                     (12U)
#define ADC_JCMR_CH44_WIDTH                     (1U)
#define ADC_JCMR_CH44(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH44_SHIFT)) & ADC_JCMR_CH44_MASK)
#define ADC_JCMR_CH45_MASK                      (0x2000U)
#define ADC_JCMR_CH45_SHIFT                     (13U)
#define ADC_JCMR_CH45_WIDTH                     (1U)
#define ADC_JCMR_CH45(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH45_SHIFT)) & ADC_JCMR_CH45_MASK)
#define ADC_JCMR_CH46_MASK                      (0x4000U)
#define ADC_JCMR_CH46_SHIFT                     (14U)
#define ADC_JCMR_CH46_WIDTH                     (1U)
#define ADC_JCMR_CH46(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH46_SHIFT)) & ADC_JCMR_CH46_MASK)
#define ADC_JCMR_CH47_MASK                      (0x8000U)
#define ADC_JCMR_CH47_SHIFT                     (15U)
#define ADC_JCMR_CH47_WIDTH                     (1U)
#define ADC_JCMR_CH47(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_JCMR_CH47_SHIFT)) & ADC_JCMR_CH47_MASK)
/*! @} */

/*! @name USROFSGN - User OFFSET and Gain Register */
/*! @{ */
#define ADC_USROFSGN_OFFSUSER_MASK               (0xFFU)
#define ADC_USROFSGN_OFFSUSER_SHIFT              (0U)
#define ADC_USROFSGN_OFFSUSER_WIDTH              (8U)
#define ADC_USROFSGN_OFFSUSER(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_USROFSGN_OFFSUSER_SHIFT)) & ADC_USROFSGN_OFFSUSER_MASK)
#define ADC_USROFSGN_GAINUSER_MASK               (0x3FF0000U)
#define ADC_USROFSGN_GAINUSER_SHIFT              (16U)
#define ADC_USROFSGN_GAINUSER_WIDTH              (10U)
#define ADC_USROFSGN_GAINUSER(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_USROFSGN_GAINUSER_SHIFT)) & ADC_USROFSGN_GAINUSER_MASK)
/*! @} */

/*! @name PDEDR - Power Down Exit Delay Register */
/*! @{ */
#define ADC_PDEDR_PDED_MASK                      (0xFFU)
#define ADC_PDEDR_PDED_SHIFT                     (0U)
#define ADC_PDEDR_PDED_WIDTH                     (8U)
#define ADC_PDEDR_PDED(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_PDEDR_PDED_SHIFT)) & ADC_PDEDR_PDED_MASK)
/*! @} */

/*! @name CDR - Channel n Data Register */
/*! @{ */
#define ADC_CDR_CDATA_MASK                      (0xFFFFU)
#define ADC_CDR_CDATA_SHIFT                     (0U)
#define ADC_CDR_CDATA_WIDTH                     (16U)
#define ADC_CDR_CDATA(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CDR_CDATA_SHIFT)) & ADC_CDR_CDATA_MASK)
#define ADC_CDR_RESULT_MASK                     (0x30000U)
#define ADC_CDR_RESULT_SHIFT                    (16U)
#define ADC_CDR_RESULT_WIDTH                    (2U)
#define ADC_CDR_RESULT(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CDR_RESULT_SHIFT)) & ADC_CDR_RESULT_MASK)
#define ADC_CDR_OVERW_MASK                      (0x40000U)
#define ADC_CDR_OVERW_SHIFT                     (18U)
#define ADC_CDR_OVERW_WIDTH                     (1U)
#define ADC_CDR_OVERW(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CDR_OVERW_SHIFT)) & ADC_CDR_OVERW_MASK)
#define ADC_CDR_VALID_MASK                      (0x80000U)
#define ADC_CDR_VALID_SHIFT                     (19U)
#define ADC_CDR_VALID_WIDTH                     (1U)
#define ADC_CDR_VALID(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CDR_VALID_SHIFT)) & ADC_CDR_VALID_MASK)
/*! @} */

/*! @name THRHLR4 - Analog Watchdog Threshold Register 4 */
/*! @{ */
#define ADC_THRHLR4_THRL_MASK                    (0xFFFU)
#define ADC_THRHLR4_THRL_SHIFT                   (0U)
#define ADC_THRHLR4_THRL_WIDTH                   (12U)
#define ADC_THRHLR4_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR4_THRL_SHIFT)) & ADC_THRHLR4_THRL_MASK)
#define ADC_THRHLR4_THRH_MASK                    (0xFFF0000U)
#define ADC_THRHLR4_THRH_SHIFT                   (16U)
#define ADC_THRHLR4_THRH_WIDTH                   (12U)
#define ADC_THRHLR4_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR4_THRH_SHIFT)) & ADC_THRHLR4_THRH_MASK)
/*! @} */

/*! @name THRHLR5 - Analog Watchdog Threshold Register 5 */
/*! @{ */
#define ADC_THRHLR5_THRL_MASK                    (0xFFFU)
#define ADC_THRHLR5_THRL_SHIFT                   (0U)
#define ADC_THRHLR5_THRL_WIDTH                   (12U)
#define ADC_THRHLR5_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR5_THRL_SHIFT)) & ADC_THRHLR5_THRL_MASK)
#define ADC_THRHLR5_THRH_MASK                    (0xFFF0000U)
#define ADC_THRHLR5_THRH_SHIFT                   (16U)
#define ADC_THRHLR5_THRH_WIDTH                   (12U)
#define ADC_THRHLR5_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR5_THRH_SHIFT)) & ADC_THRHLR5_THRH_MASK)
/*! @} */

/*! @name THRHLR6 - Analog Watchdog Threshold Register 6 */
/*! @{ */
#define ADC_THRHLR6_THRL_MASK                    (0xFFFU)
#define ADC_THRHLR6_THRL_SHIFT                   (0U)
#define ADC_THRHLR6_THRL_WIDTH                   (12U)
#define ADC_THRHLR6_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR6_THRL_SHIFT)) & ADC_THRHLR6_THRL_MASK)
#define ADC_THRHLR6_THRH_MASK                    (0xFFF0000U)
#define ADC_THRHLR6_THRH_SHIFT                   (16U)
#define ADC_THRHLR6_THRH_WIDTH                   (12U)
#define ADC_THRHLR6_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR6_THRH_SHIFT)) & ADC_THRHLR6_THRH_MASK)
/*! @} */

/*! @name THRHLR7 - Analog Watchdog Threshold Register 7 */
/*! @{ */
#define ADC_THRHLR7_THRL_MASK                    (0xFFFU)
#define ADC_THRHLR7_THRL_SHIFT                   (0U)
#define ADC_THRHLR7_THRL_WIDTH                   (12U)
#define ADC_THRHLR7_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR7_THRL_SHIFT)) & ADC_THRHLR7_THRL_MASK)
#define ADC_THRHLR7_THRH_MASK                    (0xFFF0000U)
#define ADC_THRHLR7_THRH_SHIFT                   (16U)
#define ADC_THRHLR7_THRH_WIDTH                   (12U)
#define ADC_THRHLR7_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_THRHLR7_THRH_SHIFT)) & ADC_THRHLR7_THRH_MASK)
/*! @} */

/*! @name CWSELR0 - Channel Watchdog Select Register 0 */
/*! @{ */
#define ADC_CWSELR0_WSEL_CH0_MASK                (0x7U)
#define ADC_CWSELR0_WSEL_CH0_SHIFT               (0U)
#define ADC_CWSELR0_WSEL_CH0_WIDTH               (3U)
#define ADC_CWSELR0_WSEL_CH0(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR0_WSEL_CH0_SHIFT)) & ADC_CWSELR0_WSEL_CH0_MASK)
#define ADC_CWSELR0_WSEL_CH1_MASK                (0x70U)
#define ADC_CWSELR0_WSEL_CH1_SHIFT               (4U)
#define ADC_CWSELR0_WSEL_CH1_WIDTH               (3U)
#define ADC_CWSELR0_WSEL_CH1(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR0_WSEL_CH1_SHIFT)) & ADC_CWSELR0_WSEL_CH1_MASK)
#define ADC_CWSELR0_WSEL_CH2_MASK                (0x700U)
#define ADC_CWSELR0_WSEL_CH2_SHIFT               (8U)
#define ADC_CWSELR0_WSEL_CH2_WIDTH               (3U)
#define ADC_CWSELR0_WSEL_CH2(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR0_WSEL_CH2_SHIFT)) & ADC_CWSELR0_WSEL_CH2_MASK)
#define ADC_CWSELR0_WSEL_CH3_MASK                (0x7000U)
#define ADC_CWSELR0_WSEL_CH3_SHIFT               (12U)
#define ADC_CWSELR0_WSEL_CH3_WIDTH               (3U)
#define ADC_CWSELR0_WSEL_CH3(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR0_WSEL_CH3_SHIFT)) & ADC_CWSELR0_WSEL_CH3_MASK)
#define ADC_CWSELR0_WSEL_CH4_MASK                (0x70000U)
#define ADC_CWSELR0_WSEL_CH4_SHIFT               (16U)
#define ADC_CWSELR0_WSEL_CH4_WIDTH               (3U)
#define ADC_CWSELR0_WSEL_CH4(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR0_WSEL_CH4_SHIFT)) & ADC_CWSELR0_WSEL_CH4_MASK)
#define ADC_CWSELR0_WSEL_CH5_MASK                (0x700000U)
#define ADC_CWSELR0_WSEL_CH5_SHIFT               (20U)
#define ADC_CWSELR0_WSEL_CH5_WIDTH               (3U)
#define ADC_CWSELR0_WSEL_CH5(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR0_WSEL_CH5_SHIFT)) & ADC_CWSELR0_WSEL_CH5_MASK)
#define ADC_CWSELR0_WSEL_CH6_MASK                (0x7000000U)
#define ADC_CWSELR0_WSEL_CH6_SHIFT               (24U)
#define ADC_CWSELR0_WSEL_CH6_WIDTH               (3U)
#define ADC_CWSELR0_WSEL_CH6(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR0_WSEL_CH6_SHIFT)) & ADC_CWSELR0_WSEL_CH6_MASK)
#define ADC_CWSELR0_WSEL_CH7_MASK                (0x70000000U)
#define ADC_CWSELR0_WSEL_CH7_SHIFT               (28U)
#define ADC_CWSELR0_WSEL_CH7_WIDTH               (3U)
#define ADC_CWSELR0_WSEL_CH7(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR0_WSEL_CH7_SHIFT)) & ADC_CWSELR0_WSEL_CH7_MASK)
/*! @} */

/*! @name CWSELR4 - Channel Watchdog Select Register 4 */
/*! @{ */
#define ADC_CWSELR4_WSEL_CH32_MASK               (0x7U)
#define ADC_CWSELR4_WSEL_CH32_SHIFT              (0U)
#define ADC_CWSELR4_WSEL_CH32_WIDTH              (3U)
#define ADC_CWSELR4_WSEL_CH32(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR4_WSEL_CH32_SHIFT)) & ADC_CWSELR4_WSEL_CH32_MASK)
#define ADC_CWSELR4_WSEL_CH33_MASK               (0x70U)
#define ADC_CWSELR4_WSEL_CH33_SHIFT              (4U)
#define ADC_CWSELR4_WSEL_CH33_WIDTH              (3U)
#define ADC_CWSELR4_WSEL_CH33(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR4_WSEL_CH33_SHIFT)) & ADC_CWSELR4_WSEL_CH33_MASK)
#define ADC_CWSELR4_WSEL_CH34_MASK               (0x700U)
#define ADC_CWSELR4_WSEL_CH34_SHIFT              (8U)
#define ADC_CWSELR4_WSEL_CH34_WIDTH              (3U)
#define ADC_CWSELR4_WSEL_CH34(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR4_WSEL_CH34_SHIFT)) & ADC_CWSELR4_WSEL_CH34_MASK)
#define ADC_CWSELR4_WSEL_CH35_MASK               (0x7000U)
#define ADC_CWSELR4_WSEL_CH35_SHIFT              (12U)
#define ADC_CWSELR4_WSEL_CH35_WIDTH              (3U)
#define ADC_CWSELR4_WSEL_CH35(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR4_WSEL_CH35_SHIFT)) & ADC_CWSELR4_WSEL_CH35_MASK)
#define ADC_CWSELR4_WSEL_CH36_MASK               (0x70000U)
#define ADC_CWSELR4_WSEL_CH36_SHIFT              (16U)
#define ADC_CWSELR4_WSEL_CH36_WIDTH              (3U)
#define ADC_CWSELR4_WSEL_CH36(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR4_WSEL_CH36_SHIFT)) & ADC_CWSELR4_WSEL_CH36_MASK)
#define ADC_CWSELR4_WSEL_CH37_MASK               (0x700000U)
#define ADC_CWSELR4_WSEL_CH37_SHIFT              (20U)
#define ADC_CWSELR4_WSEL_CH37_WIDTH              (3U)
#define ADC_CWSELR4_WSEL_CH37(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR4_WSEL_CH37_SHIFT)) & ADC_CWSELR4_WSEL_CH37_MASK)
#define ADC_CWSELR4_WSEL_CH38_MASK               (0x7000000U)
#define ADC_CWSELR4_WSEL_CH38_SHIFT              (24U)
#define ADC_CWSELR4_WSEL_CH38_WIDTH              (3U)
#define ADC_CWSELR4_WSEL_CH38(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR4_WSEL_CH38_SHIFT)) & ADC_CWSELR4_WSEL_CH38_MASK)
#define ADC_CWSELR4_WSEL_CH39_MASK               (0x70000000U)
#define ADC_CWSELR4_WSEL_CH39_SHIFT              (28U)
#define ADC_CWSELR4_WSEL_CH39_WIDTH              (3U)
#define ADC_CWSELR4_WSEL_CH39(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR4_WSEL_CH39_SHIFT)) & ADC_CWSELR4_WSEL_CH39_MASK)
/*! @} */

/*! @name CWSELR5 - Channel Watchdog Select Register 5 */
/*! @{ */
#define ADC_CWSELR5_WSEL_CH40_MASK               (0x7U)
#define ADC_CWSELR5_WSEL_CH40_SHIFT              (0U)
#define ADC_CWSELR5_WSEL_CH40_WIDTH              (3U)
#define ADC_CWSELR5_WSEL_CH40(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR5_WSEL_CH40_SHIFT)) & ADC_CWSELR5_WSEL_CH40_MASK)
#define ADC_CWSELR5_WSEL_CH41_MASK               (0x70U)
#define ADC_CWSELR5_WSEL_CH41_SHIFT              (4U)
#define ADC_CWSELR5_WSEL_CH41_WIDTH              (3U)
#define ADC_CWSELR5_WSEL_CH41(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR5_WSEL_CH41_SHIFT)) & ADC_CWSELR5_WSEL_CH41_MASK)
#define ADC_CWSELR5_WSEL_CH42_MASK               (0x700U)
#define ADC_CWSELR5_WSEL_CH42_SHIFT              (8U)
#define ADC_CWSELR5_WSEL_CH42_WIDTH              (3U)
#define ADC_CWSELR5_WSEL_CH42(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR5_WSEL_CH42_SHIFT)) & ADC_CWSELR5_WSEL_CH42_MASK)
#define ADC_CWSELR5_WSEL_CH43_MASK               (0x7000U)
#define ADC_CWSELR5_WSEL_CH43_SHIFT              (12U)
#define ADC_CWSELR5_WSEL_CH43_WIDTH              (3U)
#define ADC_CWSELR5_WSEL_CH43(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR5_WSEL_CH43_SHIFT)) & ADC_CWSELR5_WSEL_CH43_MASK)
#define ADC_CWSELR5_WSEL_CH44_MASK               (0x70000U)
#define ADC_CWSELR5_WSEL_CH44_SHIFT              (16U)
#define ADC_CWSELR5_WSEL_CH44_WIDTH              (3U)
#define ADC_CWSELR5_WSEL_CH44(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR5_WSEL_CH44_SHIFT)) & ADC_CWSELR5_WSEL_CH44_MASK)
#define ADC_CWSELR5_WSEL_CH45_MASK               (0x700000U)
#define ADC_CWSELR5_WSEL_CH45_SHIFT              (20U)
#define ADC_CWSELR5_WSEL_CH45_WIDTH              (3U)
#define ADC_CWSELR5_WSEL_CH45(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR5_WSEL_CH45_SHIFT)) & ADC_CWSELR5_WSEL_CH45_MASK)
#define ADC_CWSELR5_WSEL_CH46_MASK               (0x7000000U)
#define ADC_CWSELR5_WSEL_CH46_SHIFT              (24U)
#define ADC_CWSELR5_WSEL_CH46_WIDTH              (3U)
#define ADC_CWSELR5_WSEL_CH46(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR5_WSEL_CH46_SHIFT)) & ADC_CWSELR5_WSEL_CH46_MASK)
#define ADC_CWSELR5_WSEL_CH47_MASK               (0x70000000U)
#define ADC_CWSELR5_WSEL_CH47_SHIFT              (28U)
#define ADC_CWSELR5_WSEL_CH47_WIDTH              (3U)
#define ADC_CWSELR5_WSEL_CH47(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_CWSELR5_WSEL_CH47_SHIFT)) & ADC_CWSELR5_WSEL_CH47_MASK)
/*! @} */

/*! @name CWENR - Channel Watchdog Enable Register */
/*! @{ */
#define ADC_CWENR_CWEN0_MASK                    (0x1U)
#define ADC_CWENR_CWEN0_SHIFT                   (0U)
#define ADC_CWENR_CWEN0_WIDTH                   (1U)
#define ADC_CWENR_CWEN0(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN0_SHIFT)) & ADC_CWENR_CWEN0_MASK)
#define ADC_CWENR_CWEN1_MASK                    (0x2U)
#define ADC_CWENR_CWEN1_SHIFT                   (1U)
#define ADC_CWENR_CWEN1_WIDTH                   (1U)
#define ADC_CWENR_CWEN1(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN1_SHIFT)) & ADC_CWENR_CWEN1_MASK)
#define ADC_CWENR_CWEN2_MASK                    (0x4U)
#define ADC_CWENR_CWEN2_SHIFT                   (2U)
#define ADC_CWENR_CWEN2_WIDTH                   (1U)
#define ADC_CWENR_CWEN2(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN2_SHIFT)) & ADC_CWENR_CWEN2_MASK)
#define ADC_CWENR_CWEN3_MASK                    (0x8U)
#define ADC_CWENR_CWEN3_SHIFT                   (3U)
#define ADC_CWENR_CWEN3_WIDTH                   (1U)
#define ADC_CWENR_CWEN3(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN3_SHIFT)) & ADC_CWENR_CWEN3_MASK)
#define ADC_CWENR_CWEN4_MASK                    (0x10U)
#define ADC_CWENR_CWEN4_SHIFT                   (4U)
#define ADC_CWENR_CWEN4_WIDTH                   (1U)
#define ADC_CWENR_CWEN4(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN4_SHIFT)) & ADC_CWENR_CWEN4_MASK)
#define ADC_CWENR_CWEN5_MASK                    (0x20U)
#define ADC_CWENR_CWEN5_SHIFT                   (5U)
#define ADC_CWENR_CWEN5_WIDTH                   (1U)
#define ADC_CWENR_CWEN5(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN5_SHIFT)) & ADC_CWENR_CWEN5_MASK)
#define ADC_CWENR_CWEN6_MASK                    (0x40U)
#define ADC_CWENR_CWEN6_SHIFT                   (6U)
#define ADC_CWENR_CWEN6_WIDTH                   (1U)
#define ADC_CWENR_CWEN6(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN6_SHIFT)) & ADC_CWENR_CWEN6_MASK)
#define ADC_CWENR_CWEN7_MASK                    (0x80U)
#define ADC_CWENR_CWEN7_SHIFT                   (7U)
#define ADC_CWENR_CWEN7_WIDTH                   (1U)
#define ADC_CWENR_CWEN7(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN7_SHIFT)) & ADC_CWENR_CWEN7_MASK)
#define ADC_CWENR_CWEN32_MASK                   (0x1U)
#define ADC_CWENR_CWEN32_SHIFT                  (0U)
#define ADC_CWENR_CWEN32_WIDTH                  (1U)
#define ADC_CWENR_CWEN32(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN32_SHIFT)) & ADC_CWENR_CWEN32_MASK)
#define ADC_CWENR_CWEN33_MASK                   (0x2U)
#define ADC_CWENR_CWEN33_SHIFT                  (1U)
#define ADC_CWENR_CWEN33_WIDTH                  (1U)
#define ADC_CWENR_CWEN33(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN33_SHIFT)) & ADC_CWENR_CWEN33_MASK)
#define ADC_CWENR_CWEN34_MASK                   (0x4U)
#define ADC_CWENR_CWEN34_SHIFT                  (2U)
#define ADC_CWENR_CWEN34_WIDTH                  (1U)
#define ADC_CWENR_CWEN34(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN34_SHIFT)) & ADC_CWENR_CWEN34_MASK)
#define ADC_CWENR_CWEN35_MASK                   (0x8U)
#define ADC_CWENR_CWEN35_SHIFT                  (3U)
#define ADC_CWENR_CWEN35_WIDTH                  (1U)
#define ADC_CWENR_CWEN35(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN35_SHIFT)) & ADC_CWENR_CWEN35_MASK)
#define ADC_CWENR_CWEN36_MASK                   (0x10U)
#define ADC_CWENR_CWEN36_SHIFT                  (4U)
#define ADC_CWENR_CWEN36_WIDTH                  (1U)
#define ADC_CWENR_CWEN36(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN36_SHIFT)) & ADC_CWENR_CWEN36_MASK)
#define ADC_CWENR_CWEN37_MASK                   (0x20U)
#define ADC_CWENR_CWEN37_SHIFT                  (5U)
#define ADC_CWENR_CWEN37_WIDTH                  (1U)
#define ADC_CWENR_CWEN37(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN37_SHIFT)) & ADC_CWENR_CWEN37_MASK)
#define ADC_CWENR_CWEN38_MASK                   (0x40U)
#define ADC_CWENR_CWEN38_SHIFT                  (6U)
#define ADC_CWENR_CWEN38_WIDTH                  (1U)
#define ADC_CWENR_CWEN38(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN38_SHIFT)) & ADC_CWENR_CWEN38_MASK)
#define ADC_CWENR_CWEN39_MASK                   (0x80U)
#define ADC_CWENR_CWEN39_SHIFT                  (7U)
#define ADC_CWENR_CWEN39_WIDTH                  (1U)
#define ADC_CWENR_CWEN39(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN39_SHIFT)) & ADC_CWENR_CWEN39_MASK)
#define ADC_CWENR_CWEN40_MASK                   (0x100U)
#define ADC_CWENR_CWEN40_SHIFT                  (8U)
#define ADC_CWENR_CWEN40_WIDTH                  (1U)
#define ADC_CWENR_CWEN40(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN40_SHIFT)) & ADC_CWENR_CWEN40_MASK)
#define ADC_CWENR_CWEN41_MASK                   (0x200U)
#define ADC_CWENR_CWEN41_SHIFT                  (9U)
#define ADC_CWENR_CWEN41_WIDTH                  (1U)
#define ADC_CWENR_CWEN41(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN41_SHIFT)) & ADC_CWENR_CWEN41_MASK)
#define ADC_CWENR_CWEN42_MASK                   (0x400U)
#define ADC_CWENR_CWEN42_SHIFT                  (10U)
#define ADC_CWENR_CWEN42_WIDTH                  (1U)
#define ADC_CWENR_CWEN42(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN42_SHIFT)) & ADC_CWENR_CWEN42_MASK)
#define ADC_CWENR_CWEN43_MASK                   (0x800U)
#define ADC_CWENR_CWEN43_SHIFT                  (11U)
#define ADC_CWENR_CWEN43_WIDTH                  (1U)
#define ADC_CWENR_CWEN43(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN43_SHIFT)) & ADC_CWENR_CWEN43_MASK)
#define ADC_CWENR_CWEN44_MASK                   (0x1000U)
#define ADC_CWENR_CWEN44_SHIFT                  (12U)
#define ADC_CWENR_CWEN44_WIDTH                  (1U)
#define ADC_CWENR_CWEN44(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN44_SHIFT)) & ADC_CWENR_CWEN44_MASK)
#define ADC_CWENR_CWEN45_MASK                   (0x2000U)
#define ADC_CWENR_CWEN45_SHIFT                  (13U)
#define ADC_CWENR_CWEN45_WIDTH                  (1U)
#define ADC_CWENR_CWEN45(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN45_SHIFT)) & ADC_CWENR_CWEN45_MASK)
#define ADC_CWENR_CWEN46_MASK                   (0x4000U)
#define ADC_CWENR_CWEN46_SHIFT                  (14U)
#define ADC_CWENR_CWEN46_WIDTH                  (1U)
#define ADC_CWENR_CWEN46(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN46_SHIFT)) & ADC_CWENR_CWEN46_MASK)
#define ADC_CWENR_CWEN47_MASK                   (0x8000U)
#define ADC_CWENR_CWEN47_SHIFT                  (15U)
#define ADC_CWENR_CWEN47_WIDTH                  (1U)
#define ADC_CWENR_CWEN47(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CWENR_CWEN47_SHIFT)) & ADC_CWENR_CWEN47_MASK)
/*! @} */

/*! @name AWORR - Analog Watchdog Out of Range Register */
/*! @{ */
#define ADC_AWORR_AWOR_CH0_MASK                 (0x1U)
#define ADC_AWORR_AWOR_CH0_SHIFT                (0U)
#define ADC_AWORR_AWOR_CH0_WIDTH                (1U)
#define ADC_AWORR_AWOR_CH0(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH0_SHIFT)) & ADC_AWORR_AWOR_CH0_MASK)
#define ADC_AWORR_AWOR_CH1_MASK                 (0x2U)
#define ADC_AWORR_AWOR_CH1_SHIFT                (1U)
#define ADC_AWORR_AWOR_CH1_WIDTH                (1U)
#define ADC_AWORR_AWOR_CH1(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH1_SHIFT)) & ADC_AWORR_AWOR_CH1_MASK)
#define ADC_AWORR_AWOR_CH2_MASK                 (0x4U)
#define ADC_AWORR_AWOR_CH2_SHIFT                (2U)
#define ADC_AWORR_AWOR_CH2_WIDTH                (1U)
#define ADC_AWORR_AWOR_CH2(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH2_SHIFT)) & ADC_AWORR_AWOR_CH2_MASK)
#define ADC_AWORR_AWOR_CH3_MASK                 (0x8U)
#define ADC_AWORR_AWOR_CH3_SHIFT                (3U)
#define ADC_AWORR_AWOR_CH3_WIDTH                (1U)
#define ADC_AWORR_AWOR_CH3(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH3_SHIFT)) & ADC_AWORR_AWOR_CH3_MASK)
#define ADC_AWORR_AWOR_CH4_MASK                 (0x10U)
#define ADC_AWORR_AWOR_CH4_SHIFT                (4U)
#define ADC_AWORR_AWOR_CH4_WIDTH                (1U)
#define ADC_AWORR_AWOR_CH4(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH4_SHIFT)) & ADC_AWORR_AWOR_CH4_MASK)
#define ADC_AWORR_AWOR_CH5_MASK                 (0x20U)
#define ADC_AWORR_AWOR_CH5_SHIFT                (5U)
#define ADC_AWORR_AWOR_CH5_WIDTH                (1U)
#define ADC_AWORR_AWOR_CH5(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH5_SHIFT)) & ADC_AWORR_AWOR_CH5_MASK)
#define ADC_AWORR_AWOR_CH6_MASK                 (0x40U)
#define ADC_AWORR_AWOR_CH6_SHIFT                (6U)
#define ADC_AWORR_AWOR_CH6_WIDTH                (1U)
#define ADC_AWORR_AWOR_CH6(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH6_SHIFT)) & ADC_AWORR_AWOR_CH6_MASK)
#define ADC_AWORR_AWOR_CH7_MASK                 (0x80U)
#define ADC_AWORR_AWOR_CH7_SHIFT                (7U)
#define ADC_AWORR_AWOR_CH7_WIDTH                (1U)
#define ADC_AWORR_AWOR_CH7(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH7_SHIFT)) & ADC_AWORR_AWOR_CH7_MASK)
#define ADC_AWORR_AWOR_CH32_MASK                (0x1U)
#define ADC_AWORR_AWOR_CH32_SHIFT               (0U)
#define ADC_AWORR_AWOR_CH32_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH32(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH32_SHIFT)) & ADC_AWORR_AWOR_CH32_MASK)
#define ADC_AWORR_AWOR_CH33_MASK                (0x2U)
#define ADC_AWORR_AWOR_CH33_SHIFT               (1U)
#define ADC_AWORR_AWOR_CH33_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH33(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH33_SHIFT)) & ADC_AWORR_AWOR_CH33_MASK)
#define ADC_AWORR_AWOR_CH34_MASK                (0x4U)
#define ADC_AWORR_AWOR_CH34_SHIFT               (2U)
#define ADC_AWORR_AWOR_CH34_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH34(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH34_SHIFT)) & ADC_AWORR_AWOR_CH34_MASK)
#define ADC_AWORR_AWOR_CH35_MASK                (0x8U)
#define ADC_AWORR_AWOR_CH35_SHIFT               (3U)
#define ADC_AWORR_AWOR_CH35_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH35(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH35_SHIFT)) & ADC_AWORR_AWOR_CH35_MASK)
#define ADC_AWORR_AWOR_CH36_MASK                (0x10U)
#define ADC_AWORR_AWOR_CH36_SHIFT               (4U)
#define ADC_AWORR_AWOR_CH36_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH36(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH36_SHIFT)) & ADC_AWORR_AWOR_CH36_MASK)
#define ADC_AWORR_AWOR_CH37_MASK                (0x20U)
#define ADC_AWORR_AWOR_CH37_SHIFT               (5U)
#define ADC_AWORR_AWOR_CH37_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH37(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH37_SHIFT)) & ADC_AWORR_AWOR_CH37_MASK)
#define ADC_AWORR_AWOR_CH38_MASK                (0x40U)
#define ADC_AWORR_AWOR_CH38_SHIFT               (6U)
#define ADC_AWORR_AWOR_CH38_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH38(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH38_SHIFT)) & ADC_AWORR_AWOR_CH38_MASK)
#define ADC_AWORR_AWOR_CH39_MASK                (0x80U)
#define ADC_AWORR_AWOR_CH39_SHIFT               (7U)
#define ADC_AWORR_AWOR_CH39_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH39(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH39_SHIFT)) & ADC_AWORR_AWOR_CH39_MASK)
#define ADC_AWORR_AWOR_CH40_MASK                (0x100U)
#define ADC_AWORR_AWOR_CH40_SHIFT               (8U)
#define ADC_AWORR_AWOR_CH40_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH40(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH40_SHIFT)) & ADC_AWORR_AWOR_CH40_MASK)
#define ADC_AWORR_AWOR_CH41_MASK                (0x200U)
#define ADC_AWORR_AWOR_CH41_SHIFT               (9U)
#define ADC_AWORR_AWOR_CH41_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH41(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH41_SHIFT)) & ADC_AWORR_AWOR_CH41_MASK)
#define ADC_AWORR_AWOR_CH42_MASK                (0x400U)
#define ADC_AWORR_AWOR_CH42_SHIFT               (10U)
#define ADC_AWORR_AWOR_CH42_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH42(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH42_SHIFT)) & ADC_AWORR_AWOR_CH42_MASK)
#define ADC_AWORR_AWOR_CH43_MASK                (0x800U)
#define ADC_AWORR_AWOR_CH43_SHIFT               (11U)
#define ADC_AWORR_AWOR_CH43_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH43(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH43_SHIFT)) & ADC_AWORR_AWOR_CH43_MASK)
#define ADC_AWORR_AWOR_CH44_MASK                (0x1000U)
#define ADC_AWORR_AWOR_CH44_SHIFT               (12U)
#define ADC_AWORR_AWOR_CH44_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH44(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH44_SHIFT)) & ADC_AWORR_AWOR_CH44_MASK)
#define ADC_AWORR_AWOR_CH45_MASK                (0x2000U)
#define ADC_AWORR_AWOR_CH45_SHIFT               (13U)
#define ADC_AWORR_AWOR_CH45_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH45(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH45_SHIFT)) & ADC_AWORR_AWOR_CH45_MASK)
#define ADC_AWORR_AWOR_CH46_MASK                (0x4000U)
#define ADC_AWORR_AWOR_CH46_SHIFT               (14U)
#define ADC_AWORR_AWOR_CH46_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH46(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH46_SHIFT)) & ADC_AWORR_AWOR_CH46_MASK)
#define ADC_AWORR_AWOR_CH47_MASK                (0x8000U)
#define ADC_AWORR_AWOR_CH47_SHIFT               (15U)
#define ADC_AWORR_AWOR_CH47_WIDTH               (1U)
#define ADC_AWORR_AWOR_CH47(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_AWORR_AWOR_CH47_SHIFT)) & ADC_AWORR_AWOR_CH47_MASK)
/*! @} */

/*! @name STCR1 - Self-Test Configuration Register 1 */
/*! @{ */
#define ADC_STCR1_INPSAMP_S_MASK                 (0xFF00U)
#define ADC_STCR1_INPSAMP_S_SHIFT                (8U)
#define ADC_STCR1_INPSAMP_S_WIDTH                (8U)
#define ADC_STCR1_INPSAMP_S(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STCR1_INPSAMP_S_SHIFT)) & ADC_STCR1_INPSAMP_S_MASK)
#define ADC_STCR1_INPSAMP_C_MASK                 (0xFF000000U)
#define ADC_STCR1_INPSAMP_C_SHIFT                (24U)
#define ADC_STCR1_INPSAMP_C_WIDTH                (8U)
#define ADC_STCR1_INPSAMP_C(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STCR1_INPSAMP_C_SHIFT)) & ADC_STCR1_INPSAMP_C_MASK)
/*! @} */

/*! @name STCR2 - Self-Test Configuration Register 2 */
/*! @{ */
#define ADC_STCR2_FMA_S_MASK                     (0x1U)
#define ADC_STCR2_FMA_S_SHIFT                    (0U)
#define ADC_STCR2_FMA_S_WIDTH                    (1U)
#define ADC_STCR2_FMA_S(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_FMA_S_SHIFT)) & ADC_STCR2_FMA_S_MASK)
#define ADC_STCR2_FMA_C_MASK                     (0x4U)
#define ADC_STCR2_FMA_C_SHIFT                    (2U)
#define ADC_STCR2_FMA_C_WIDTH                    (1U)
#define ADC_STCR2_FMA_C(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_FMA_C_SHIFT)) & ADC_STCR2_FMA_C_MASK)
#define ADC_STCR2_FMA_WDTERR_MASK                (0x8U)
#define ADC_STCR2_FMA_WDTERR_SHIFT               (3U)
#define ADC_STCR2_FMA_WDTERR_WIDTH               (1U)
#define ADC_STCR2_FMA_WDTERR(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_FMA_WDTERR_SHIFT)) & ADC_STCR2_FMA_WDTERR_MASK)
#define ADC_STCR2_FMA_WDSERR_MASK                (0x10U)
#define ADC_STCR2_FMA_WDSERR_SHIFT               (4U)
#define ADC_STCR2_FMA_WDSERR_WIDTH               (1U)
#define ADC_STCR2_FMA_WDSERR(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_FMA_WDSERR_SHIFT)) & ADC_STCR2_FMA_WDSERR_MASK)
#define ADC_STCR2_EN_MASK                        (0x80U)
#define ADC_STCR2_EN_SHIFT                       (7U)
#define ADC_STCR2_EN_WIDTH                       (1U)
#define ADC_STCR2_EN(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_EN_SHIFT)) & ADC_STCR2_EN_MASK)
#define ADC_STCR2_MSKERR_S0_MASK                 (0x800U)
#define ADC_STCR2_MSKERR_S0_SHIFT                (11U)
#define ADC_STCR2_MSKERR_S0_WIDTH                (1U)
#define ADC_STCR2_MSKERR_S0(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_MSKERR_S0_SHIFT)) & ADC_STCR2_MSKERR_S0_MASK)
#define ADC_STCR2_MSKERR_S1_MASK                 (0x1000U)
#define ADC_STCR2_MSKERR_S1_SHIFT                (12U)
#define ADC_STCR2_MSKERR_S1_WIDTH                (1U)
#define ADC_STCR2_MSKERR_S1(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_MSKERR_S1_SHIFT)) & ADC_STCR2_MSKERR_S1_MASK)
#define ADC_STCR2_MSKERR_S2_MASK                 (0x2000U)
#define ADC_STCR2_MSKERR_S2_SHIFT                (13U)
#define ADC_STCR2_MSKERR_S2_WIDTH                (1U)
#define ADC_STCR2_MSKERR_S2(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_MSKERR_S2_SHIFT)) & ADC_STCR2_MSKERR_S2_MASK)
#define ADC_STCR2_MSKERR_C_MASK                  (0x8000U)
#define ADC_STCR2_MSKERR_C_SHIFT                 (15U)
#define ADC_STCR2_MSKERR_C_WIDTH                 (1U)
#define ADC_STCR2_MSKERR_C(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_MSKERR_C_SHIFT)) & ADC_STCR2_MSKERR_C_MASK)
#define ADC_STCR2_MSKWDG_EOA_S_MASK              (0x10000U)
#define ADC_STCR2_MSKWDG_EOA_S_SHIFT             (16U)
#define ADC_STCR2_MSKWDG_EOA_S_WIDTH             (1U)
#define ADC_STCR2_MSKWDG_EOA_S(x)                (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_MSKWDG_EOA_S_SHIFT)) & ADC_STCR2_MSKWDG_EOA_S_MASK)
#define ADC_STCR2_MSKWDG_EOA_C_MASK              (0x40000U)
#define ADC_STCR2_MSKWDG_EOA_C_SHIFT             (18U)
#define ADC_STCR2_MSKWDG_EOA_C_WIDTH             (1U)
#define ADC_STCR2_MSKWDG_EOA_C(x)                (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_MSKWDG_EOA_C_SHIFT)) & ADC_STCR2_MSKWDG_EOA_C_MASK)
#define ADC_STCR2_MSKST_EOC_MASK                 (0x800000U)
#define ADC_STCR2_MSKST_EOC_SHIFT                (23U)
#define ADC_STCR2_MSKST_EOC_WIDTH                (1U)
#define ADC_STCR2_MSKST_EOC(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_MSKST_EOC_SHIFT)) & ADC_STCR2_MSKST_EOC_MASK)
#define ADC_STCR2_MSKWDTERR_MASK                 (0x2000000U)
#define ADC_STCR2_MSKWDTERR_SHIFT                (25U)
#define ADC_STCR2_MSKWDTERR_WIDTH                (1U)
#define ADC_STCR2_MSKWDTERR(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_MSKWDTERR_SHIFT)) & ADC_STCR2_MSKWDTERR_MASK)
#define ADC_STCR2_SERR_MASK                      (0x4000000U)
#define ADC_STCR2_SERR_SHIFT                     (26U)
#define ADC_STCR2_SERR_WIDTH                     (1U)
#define ADC_STCR2_SERR(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_SERR_SHIFT)) & ADC_STCR2_SERR_MASK)
#define ADC_STCR2_MSKWDSERR_MASK                 (0x8000000U)
#define ADC_STCR2_MSKWDSERR_SHIFT                (27U)
#define ADC_STCR2_MSKWDSERR_WIDTH                (1U)
#define ADC_STCR2_MSKWDSERR(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STCR2_MSKWDSERR_SHIFT)) & ADC_STCR2_MSKWDSERR_MASK)
/*! @} */

/*! @name STCR3 - Self-Test Configuration Register 3 */
/*! @{ */
#define ADC_STCR3_MSTEP_MASK                     (0x1FU)
#define ADC_STCR3_MSTEP_SHIFT                    (0U)
#define ADC_STCR3_MSTEP_WIDTH                    (5U)
#define ADC_STCR3_MSTEP(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STCR3_MSTEP_SHIFT)) & ADC_STCR3_MSTEP_MASK)
#define ADC_STCR3_ALG_MASK                       (0x300U)
#define ADC_STCR3_ALG_SHIFT                      (8U)
#define ADC_STCR3_ALG_WIDTH                      (2U)
#define ADC_STCR3_ALG(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_STCR3_ALG_SHIFT)) & ADC_STCR3_ALG_MASK)
/*! @} */

/*! @name STBRR - Self-Test Baud Rate Register */
/*! @{ */
#define ADC_STBRR_BR_MASK                        (0xFFU)
#define ADC_STBRR_BR_SHIFT                       (0U)
#define ADC_STBRR_BR_WIDTH                       (8U)
#define ADC_STBRR_BR(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_STBRR_BR_SHIFT)) & ADC_STBRR_BR_MASK)
#define ADC_STBRR_WDT_MASK                       (0x70000U)
#define ADC_STBRR_WDT_SHIFT                      (16U)
#define ADC_STBRR_WDT_WIDTH                      (3U)
#define ADC_STBRR_WDT(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_STBRR_WDT_SHIFT)) & ADC_STBRR_WDT_MASK)
/*! @} */

/*! @name STSR1 - Self-Test Status Register 1 */
/*! @{ */
#define ADC_STSR1_STEP_C_MASK                    (0x3E0U)
#define ADC_STSR1_STEP_C_SHIFT                   (5U)
#define ADC_STSR1_STEP_C_WIDTH                   (5U)
#define ADC_STSR1_STEP_C(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_STEP_C_SHIFT)) & ADC_STSR1_STEP_C_MASK)
#define ADC_STSR1_ERR_S0_MASK                    (0x800U)
#define ADC_STSR1_ERR_S0_SHIFT                   (11U)
#define ADC_STSR1_ERR_S0_WIDTH                   (1U)
#define ADC_STSR1_ERR_S0(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_ERR_S0_SHIFT)) & ADC_STSR1_ERR_S0_MASK)
#define ADC_STSR1_ERR_S1_MASK                    (0x1000U)
#define ADC_STSR1_ERR_S1_SHIFT                   (12U)
#define ADC_STSR1_ERR_S1_WIDTH                   (1U)
#define ADC_STSR1_ERR_S1(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_ERR_S1_SHIFT)) & ADC_STSR1_ERR_S1_MASK)
#define ADC_STSR1_ERR_S2_MASK                    (0x2000U)
#define ADC_STSR1_ERR_S2_SHIFT                   (13U)
#define ADC_STSR1_ERR_S2_WIDTH                   (1U)
#define ADC_STSR1_ERR_S2(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_ERR_S2_SHIFT)) & ADC_STSR1_ERR_S2_MASK)
#define ADC_STSR1_ERR_C_MASK                     (0x8000U)
#define ADC_STSR1_ERR_C_SHIFT                    (15U)
#define ADC_STSR1_ERR_C_WIDTH                    (1U)
#define ADC_STSR1_ERR_C(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_ERR_C_SHIFT)) & ADC_STSR1_ERR_C_MASK)
#define ADC_STSR1_WDG_EOA_S_MASK                 (0x10000U)
#define ADC_STSR1_WDG_EOA_S_SHIFT                (16U)
#define ADC_STSR1_WDG_EOA_S_WIDTH                (1U)
#define ADC_STSR1_WDG_EOA_S(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_WDG_EOA_S_SHIFT)) & ADC_STSR1_WDG_EOA_S_MASK)
#define ADC_STSR1_WDG_EOA_C_MASK                 (0x40000U)
#define ADC_STSR1_WDG_EOA_C_SHIFT                (18U)
#define ADC_STSR1_WDG_EOA_C_WIDTH                (1U)
#define ADC_STSR1_WDG_EOA_C(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_WDG_EOA_C_SHIFT)) & ADC_STSR1_WDG_EOA_C_MASK)
#define ADC_STSR1_ST_EOC_MASK                    (0x800000U)
#define ADC_STSR1_ST_EOC_SHIFT                   (23U)
#define ADC_STSR1_ST_EOC_WIDTH                   (1U)
#define ADC_STSR1_ST_EOC(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_ST_EOC_SHIFT)) & ADC_STSR1_ST_EOC_MASK)
#define ADC_STSR1_OVERWR_MASK                    (0x1000000U)
#define ADC_STSR1_OVERWR_SHIFT                   (24U)
#define ADC_STSR1_OVERWR_WIDTH                   (1U)
#define ADC_STSR1_OVERWR(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_OVERWR_SHIFT)) & ADC_STSR1_OVERWR_MASK)
#define ADC_STSR1_WDTERR_MASK                    (0x2000000U)
#define ADC_STSR1_WDTERR_SHIFT                   (25U)
#define ADC_STSR1_WDTERR_WIDTH                   (1U)
#define ADC_STSR1_WDTERR(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_WDTERR_SHIFT)) & ADC_STSR1_WDTERR_MASK)
#define ADC_STSR1_WDSERR_MASK                    (0x8000000U)
#define ADC_STSR1_WDSERR_SHIFT                   (27U)
#define ADC_STSR1_WDSERR_WIDTH                   (1U)
#define ADC_STSR1_WDSERR(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STSR1_WDSERR_SHIFT)) & ADC_STSR1_WDSERR_MASK)
/*! @} */

/*! @name STSR2 - Self-Test Status Register 2 */
/*! @{ */
#define ADC_STSR2_DATA0_MASK                     (0xFFFU)
#define ADC_STSR2_DATA0_SHIFT                    (0U)
#define ADC_STSR2_DATA0_WIDTH                    (12U)
#define ADC_STSR2_DATA0(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STSR2_DATA0_SHIFT)) & ADC_STSR2_DATA0_MASK)
#define ADC_STSR2_DATA1_MASK                     (0xFFF0000U)
#define ADC_STSR2_DATA1_SHIFT                    (16U)
#define ADC_STSR2_DATA1_WIDTH                    (12U)
#define ADC_STSR2_DATA1(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STSR2_DATA1_SHIFT)) & ADC_STSR2_DATA1_MASK)
#define ADC_STSR2_OVFL_MASK                      (0x80000000U)
#define ADC_STSR2_OVFL_SHIFT                     (31U)
#define ADC_STSR2_OVFL_WIDTH                     (1U)
#define ADC_STSR2_OVFL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_STSR2_OVFL_SHIFT)) & ADC_STSR2_OVFL_MASK)
/*! @} */

/*! @name STSR3 - Self-Test Status Register 3 */
/*! @{ */
#define ADC_STSR3_DATA0_MASK                     (0xFFFU)
#define ADC_STSR3_DATA0_SHIFT                    (0U)
#define ADC_STSR3_DATA0_WIDTH                    (12U)
#define ADC_STSR3_DATA0(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STSR3_DATA0_SHIFT)) & ADC_STSR3_DATA0_MASK)
#define ADC_STSR3_DATA1_MASK                     (0xFFF0000U)
#define ADC_STSR3_DATA1_SHIFT                    (16U)
#define ADC_STSR3_DATA1_WIDTH                    (12U)
#define ADC_STSR3_DATA1(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STSR3_DATA1_SHIFT)) & ADC_STSR3_DATA1_MASK)
/*! @} */

/*! @name STSR4 - Self-Test Status Register 4 */
/*! @{ */
#define ADC_STSR4_DATA1_MASK                     (0xFFF0000U)
#define ADC_STSR4_DATA1_SHIFT                    (16U)
#define ADC_STSR4_DATA1_WIDTH                    (12U)
#define ADC_STSR4_DATA1(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STSR4_DATA1_SHIFT)) & ADC_STSR4_DATA1_MASK)
/*! @} */

/*! @name STDR1 - Self-Test Data Register 1 */
/*! @{ */
#define ADC_STDR1_TCDATA_MASK                    (0xFFFU)
#define ADC_STDR1_TCDATA_SHIFT                   (0U)
#define ADC_STDR1_TCDATA_WIDTH                   (12U)
#define ADC_STDR1_TCDATA(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STDR1_TCDATA_SHIFT)) & ADC_STDR1_TCDATA_MASK)
#define ADC_STDR1_OWERWR_MASK                    (0x40000U)
#define ADC_STDR1_OWERWR_SHIFT                   (18U)
#define ADC_STDR1_OWERWR_WIDTH                   (1U)
#define ADC_STDR1_OWERWR(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STDR1_OWERWR_SHIFT)) & ADC_STDR1_OWERWR_MASK)
#define ADC_STDR1_VALID_MASK                     (0x80000U)
#define ADC_STDR1_VALID_SHIFT                    (19U)
#define ADC_STDR1_VALID_WIDTH                    (1U)
#define ADC_STDR1_VALID(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STDR1_VALID_SHIFT)) & ADC_STDR1_VALID_MASK)
/*! @} */

/*! @name STDR2 - Self-Test Data Register 2 */
/*! @{ */
#define ADC_STDR2_IDATA_MASK                     (0xFFFU)
#define ADC_STDR2_IDATA_SHIFT                    (0U)
#define ADC_STDR2_IDATA_WIDTH                    (12U)
#define ADC_STDR2_IDATA(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STDR2_IDATA_SHIFT)) & ADC_STDR2_IDATA_MASK)
#define ADC_STDR2_OVERWR_MASK                    (0x40000U)
#define ADC_STDR2_OVERWR_SHIFT                   (18U)
#define ADC_STDR2_OVERWR_WIDTH                   (1U)
#define ADC_STDR2_OVERWR(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STDR2_OVERWR_SHIFT)) & ADC_STDR2_OVERWR_MASK)
#define ADC_STDR2_VALID_MASK                     (0x80000U)
#define ADC_STDR2_VALID_SHIFT                    (19U)
#define ADC_STDR2_VALID_WIDTH                    (1U)
#define ADC_STDR2_VALID(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STDR2_VALID_SHIFT)) & ADC_STDR2_VALID_MASK)
#define ADC_STDR2_FDATA_MASK                     (0xFFF00000U)
#define ADC_STDR2_FDATA_SHIFT                    (20U)
#define ADC_STDR2_FDATA_WIDTH                    (12U)
#define ADC_STDR2_FDATA(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STDR2_FDATA_SHIFT)) & ADC_STDR2_FDATA_MASK)
/*! @} */

/*! @name STAW0R - Self-Test Analog Watchdog Register */
/*! @{ */
#define ADC_STAW0R_THRL_MASK                     (0xFFFU)
#define ADC_STAW0R_THRL_SHIFT                    (0U)
#define ADC_STAW0R_THRL_WIDTH                    (12U)
#define ADC_STAW0R_THRL(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW0R_THRL_SHIFT)) & ADC_STAW0R_THRL_MASK)
#define ADC_STAW0R_THRH_MASK                     (0xFFF0000U)
#define ADC_STAW0R_THRH_SHIFT                    (16U)
#define ADC_STAW0R_THRH_WIDTH                    (12U)
#define ADC_STAW0R_THRH(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW0R_THRH_SHIFT)) & ADC_STAW0R_THRH_MASK)
#define ADC_STAW0R_WDTE_MASK                     (0x40000000U)
#define ADC_STAW0R_WDTE_SHIFT                    (30U)
#define ADC_STAW0R_WDTE_WIDTH                    (1U)
#define ADC_STAW0R_WDTE(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW0R_WDTE_SHIFT)) & ADC_STAW0R_WDTE_MASK)
#define ADC_STAW0R_AWDE_MASK                     (0x80000000U)
#define ADC_STAW0R_AWDE_SHIFT                    (31U)
#define ADC_STAW0R_AWDE_WIDTH                    (1U)
#define ADC_STAW0R_AWDE(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW0R_AWDE_SHIFT)) & ADC_STAW0R_AWDE_MASK)
/*! @} */

/*! @name STAW1AR - Self-Test Analog Watchdog Register */
/*! @{ */
#define ADC_STAW1AR_THRL_MASK                    (0xFFFU)
#define ADC_STAW1AR_THRL_SHIFT                   (0U)
#define ADC_STAW1AR_THRL_WIDTH                   (12U)
#define ADC_STAW1AR_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STAW1AR_THRL_SHIFT)) & ADC_STAW1AR_THRL_MASK)
#define ADC_STAW1AR_THRH_MASK                    (0xFFF0000U)
#define ADC_STAW1AR_THRH_SHIFT                   (16U)
#define ADC_STAW1AR_THRH_WIDTH                   (12U)
#define ADC_STAW1AR_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STAW1AR_THRH_SHIFT)) & ADC_STAW1AR_THRH_MASK)
#define ADC_STAW1AR_AWDE_MASK                    (0x80000000U)
#define ADC_STAW1AR_AWDE_SHIFT                   (31U)
#define ADC_STAW1AR_AWDE_WIDTH                   (1U)
#define ADC_STAW1AR_AWDE(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STAW1AR_AWDE_SHIFT)) & ADC_STAW1AR_AWDE_MASK)
/*! @} */

/*! @name STAW1BR - Self-Test Analog Watchdog Register 1B */
/*! @{ */
#define ADC_STAW1BR_THRL_MASK                    (0xFFFU)
#define ADC_STAW1BR_THRL_SHIFT                   (0U)
#define ADC_STAW1BR_THRL_WIDTH                   (12U)
#define ADC_STAW1BR_THRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STAW1BR_THRL_SHIFT)) & ADC_STAW1BR_THRL_MASK)
#define ADC_STAW1BR_THRH_MASK                    (0xFFF0000U)
#define ADC_STAW1BR_THRH_SHIFT                   (16U)
#define ADC_STAW1BR_THRH_WIDTH                   (12U)
#define ADC_STAW1BR_THRH(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STAW1BR_THRH_SHIFT)) & ADC_STAW1BR_THRH_MASK)
/*! @} */

/*! @name STAW2R - Self-Test Analog Watchdog Register 2 */
/*! @{ */
#define ADC_STAW2R_THRL_MASK                     (0xFFFU)
#define ADC_STAW2R_THRL_SHIFT                    (0U)
#define ADC_STAW2R_THRL_WIDTH                    (12U)
#define ADC_STAW2R_THRL(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW2R_THRL_SHIFT)) & ADC_STAW2R_THRL_MASK)
#define ADC_STAW2R_AWDE_MASK                     (0x80000000U)
#define ADC_STAW2R_AWDE_SHIFT                    (31U)
#define ADC_STAW2R_AWDE_WIDTH                    (1U)
#define ADC_STAW2R_AWDE(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW2R_AWDE_SHIFT)) & ADC_STAW2R_AWDE_MASK)
/*! @} */

/*! @name STAW4R - Self-Test Analog Watchdog Register 4 */
/*! @{ */
#define ADC_STAW4R_THRL_MASK                     (0xFFFU)
#define ADC_STAW4R_THRL_SHIFT                    (0U)
#define ADC_STAW4R_THRL_WIDTH                    (12U)
#define ADC_STAW4R_THRL(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW4R_THRL_SHIFT)) & ADC_STAW4R_THRL_MASK)
#define ADC_STAW4R_THRH_MASK                     (0xFFF0000U)
#define ADC_STAW4R_THRH_SHIFT                    (16U)
#define ADC_STAW4R_THRH_WIDTH                    (12U)
#define ADC_STAW4R_THRH(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW4R_THRH_SHIFT)) & ADC_STAW4R_THRH_MASK)
#define ADC_STAW4R_WDTE_MASK                     (0x40000000U)
#define ADC_STAW4R_WDTE_SHIFT                    (30U)
#define ADC_STAW4R_WDTE_WIDTH                    (1U)
#define ADC_STAW4R_WDTE(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW4R_WDTE_SHIFT)) & ADC_STAW4R_WDTE_MASK)
#define ADC_STAW4R_AWDE_MASK                     (0x80000000U)
#define ADC_STAW4R_AWDE_SHIFT                    (31U)
#define ADC_STAW4R_AWDE_WIDTH                    (1U)
#define ADC_STAW4R_AWDE(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW4R_AWDE_SHIFT)) & ADC_STAW4R_AWDE_MASK)
/*! @} */

/*! @name STAW5R - Self-Test Analog Watchdog Register 5 */
/*! @{ */
#define ADC_STAW5R_THRL_MASK                     (0xFFFU)
#define ADC_STAW5R_THRL_SHIFT                    (0U)
#define ADC_STAW5R_THRL_WIDTH                    (12U)
#define ADC_STAW5R_THRL(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW5R_THRL_SHIFT)) & ADC_STAW5R_THRL_MASK)
#define ADC_STAW5R_THRH_MASK                     (0xFFF0000U)
#define ADC_STAW5R_THRH_SHIFT                    (16U)
#define ADC_STAW5R_THRH_WIDTH                    (12U)
#define ADC_STAW5R_THRH(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAW5R_THRH_SHIFT)) & ADC_STAW5R_THRH_MASK)
/*! @} */

/*! @name CALSTAT - Calibration Status register */
/*! @{ */
#define ADC_CALSTAT_STAT_1_MASK                  (0x1U)
#define ADC_CALSTAT_STAT_1_SHIFT                 (0U)
#define ADC_CALSTAT_STAT_1_WIDTH                 (1U)
#define ADC_CALSTAT_STAT_1(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_1_SHIFT)) & ADC_CALSTAT_STAT_1_MASK)
#define ADC_CALSTAT_STAT_2_MASK                  (0x2U)
#define ADC_CALSTAT_STAT_2_SHIFT                 (1U)
#define ADC_CALSTAT_STAT_2_WIDTH                 (1U)
#define ADC_CALSTAT_STAT_2(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_2_SHIFT)) & ADC_CALSTAT_STAT_2_MASK)
#define ADC_CALSTAT_STAT_3_MASK                  (0x4U)
#define ADC_CALSTAT_STAT_3_SHIFT                 (2U)
#define ADC_CALSTAT_STAT_3_WIDTH                 (1U)
#define ADC_CALSTAT_STAT_3(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_3_SHIFT)) & ADC_CALSTAT_STAT_3_MASK)
#define ADC_CALSTAT_STAT_4_MASK                  (0x8U)
#define ADC_CALSTAT_STAT_4_SHIFT                 (3U)
#define ADC_CALSTAT_STAT_4_WIDTH                 (1U)
#define ADC_CALSTAT_STAT_4(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_4_SHIFT)) & ADC_CALSTAT_STAT_4_MASK)
#define ADC_CALSTAT_STAT_5_MASK                  (0x10U)
#define ADC_CALSTAT_STAT_5_SHIFT                 (4U)
#define ADC_CALSTAT_STAT_5_WIDTH                 (1U)
#define ADC_CALSTAT_STAT_5(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_5_SHIFT)) & ADC_CALSTAT_STAT_5_MASK)
#define ADC_CALSTAT_STAT_6_MASK                  (0x20U)
#define ADC_CALSTAT_STAT_6_SHIFT                 (5U)
#define ADC_CALSTAT_STAT_6_WIDTH                 (1U)
#define ADC_CALSTAT_STAT_6(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_6_SHIFT)) & ADC_CALSTAT_STAT_6_MASK)
#define ADC_CALSTAT_STAT_7_MASK                  (0x40U)
#define ADC_CALSTAT_STAT_7_SHIFT                 (6U)
#define ADC_CALSTAT_STAT_7_WIDTH                 (1U)
#define ADC_CALSTAT_STAT_7(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_7_SHIFT)) & ADC_CALSTAT_STAT_7_MASK)
#define ADC_CALSTAT_STAT_8_MASK                  (0x80U)
#define ADC_CALSTAT_STAT_8_SHIFT                 (7U)
#define ADC_CALSTAT_STAT_8_WIDTH                 (1U)
#define ADC_CALSTAT_STAT_8(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_8_SHIFT)) & ADC_CALSTAT_STAT_8_MASK)
#define ADC_CALSTAT_STAT_9_MASK                  (0x100U)
#define ADC_CALSTAT_STAT_9_SHIFT                 (8U)
#define ADC_CALSTAT_STAT_9_WIDTH                 (1U)
#define ADC_CALSTAT_STAT_9(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_9_SHIFT)) & ADC_CALSTAT_STAT_9_MASK)
#define ADC_CALSTAT_STAT_10_MASK                 (0x200U)
#define ADC_CALSTAT_STAT_10_SHIFT                (9U)
#define ADC_CALSTAT_STAT_10_WIDTH                (1U)
#define ADC_CALSTAT_STAT_10(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_10_SHIFT)) & ADC_CALSTAT_STAT_10_MASK)
#define ADC_CALSTAT_STAT_11_MASK                 (0x400U)
#define ADC_CALSTAT_STAT_11_SHIFT                (10U)
#define ADC_CALSTAT_STAT_11_WIDTH                (1U)
#define ADC_CALSTAT_STAT_11(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_11_SHIFT)) & ADC_CALSTAT_STAT_11_MASK)
#define ADC_CALSTAT_STAT_12_MASK                 (0x800U)
#define ADC_CALSTAT_STAT_12_SHIFT                (11U)
#define ADC_CALSTAT_STAT_12_WIDTH                (1U)
#define ADC_CALSTAT_STAT_12(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_12_SHIFT)) & ADC_CALSTAT_STAT_12_MASK)
#define ADC_CALSTAT_STAT_13_MASK                 (0x1000U)
#define ADC_CALSTAT_STAT_13_SHIFT                (12U)
#define ADC_CALSTAT_STAT_13_WIDTH                (1U)
#define ADC_CALSTAT_STAT_13(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_13_SHIFT)) & ADC_CALSTAT_STAT_13_MASK)
#define ADC_CALSTAT_STAT_14_MASK                 (0x2000U)
#define ADC_CALSTAT_STAT_14_SHIFT                (13U)
#define ADC_CALSTAT_STAT_14_WIDTH                (1U)
#define ADC_CALSTAT_STAT_14(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_STAT_14_SHIFT)) & ADC_CALSTAT_STAT_14_MASK)
#define ADC_CALSTAT_TEST_RESULT_MASK             (0xFFFF0000U)
#define ADC_CALSTAT_TEST_RESULT_SHIFT            (16U)
#define ADC_CALSTAT_TEST_RESULT_WIDTH            (16U)
#define ADC_CALSTAT_TEST_RESULT(x)               (((uint32_t)(((uint32_t)(x)) << ADC_CALSTAT_TEST_RESULT_SHIFT)) & ADC_CALSTAT_TEST_RESULT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group ADC_Register_Masks */

/*!
 * @}
 */ /* end of group ADC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_ADC_H_) */
