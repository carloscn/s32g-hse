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
 * @file S32R45_M7.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_M7
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


/* ----------------------------------------------------------------------------
   -- MCU activation
   ---------------------------------------------------------------------------- */

/* Prevention from multiple including the same memory map */
#if !defined(S32R45_COMMON_H_)  /* Check if memory map has not been already included */
#define S32R45_COMMON_H_
#define MCU_S32R45

/* Check if another memory map has not been also included */
#if (defined(MCU_ACTIVE))
  #error S32R45_M7 memory map: There is already included another memory map. Only one memory map can be included.
#endif /* (defined(MCU_ACTIVE)) */
#define MCU_ACTIVE

#include <stdint.h>

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0100U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0000U

/* ----------------------------------------------------------------------------
   -- Generic macros
   ---------------------------------------------------------------------------- */

/* IO definitions (access restrictions to peripheral registers) */
/**
*   IO Type Qualifiers are used
*   \li to specify the access to peripheral variables.
*   \li for automatic generation of peripheral register debug information.
*/
#ifndef __IO
#ifdef __cplusplus
  #define   __I     volatile             /*!< Defines 'read only' permissions                 */
#else
  #define   __I     volatile const       /*!< Defines 'read only' permissions                 */
#endif
#define     __O     volatile             /*!< Defines 'write only' permissions                */
#define     __IO    volatile             /*!< Defines 'read / write' permissions              */
#endif


/**
* @brief 32 bits memory read macro.
*/
#if !defined(REG_READ32)
  #define REG_READ32(address)               (*(volatile uint32_t*)(address))
#endif

/**
* @brief 32 bits memory write macro.
*/
#if !defined(REG_WRITE32)
  #define REG_WRITE32(address, value)       ((*(volatile uint32_t*)(address))= (uint32_t)(value))
#endif

/**
* @brief 32 bits bits setting macro.
*/
#if !defined(REG_BIT_SET32)
  #define REG_BIT_SET32(address, mask)      ((*(volatile uint32_t*)(address))|= (uint32_t)(mask))
#endif

/**
* @brief 32 bits bits clearing macro.
*/
#if !defined(REG_BIT_CLEAR32)
  #define REG_BIT_CLEAR32(address, mask)    ((*(volatile uint32_t*)(address))&= ((uint32_t)~((uint32_t)(mask))))
#endif

/**
* @brief 32 bit clear bits and set with new value
* @note It is user's responsability to make sure that value has only "mask" bits set - (value&~mask)==0
*/
#if !defined(REG_RMW32)
  #define REG_RMW32(address, mask, value)   (REG_WRITE32((address), ((REG_READ32(address)& ((uint32_t)~((uint32_t)(mask))))| ((uint32_t)(value)))))
#endif


/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 256                /**< Number of interrupts in the Vector table */

typedef enum {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  NonMaskableInt_IRQn          = -14,              /**< Non Maskable Interrupt */
  HardFault_IRQn               = -13,              /**< Cortex-M7 SV Hard Fault Interrupt */
  MemoryManagement_IRQn        = -12,              /**< Cortex-M7 Memory Management Interrupt */
  BusFault_IRQn                = -11,              /**< Cortex-M7 Bus Fault Interrupt */
  UsageFault_IRQn              = -10,              /**< Cortex-M7 Usage Fault Interrupt */
  SVCall_IRQn                  = -5,               /**< Cortex-M7 SV Call Interrupt */
  DebugMonitor_IRQn            = -4,               /**< Cortex-M7 Debug Monitor Interrupt */
  PendSV_IRQn                  = -2,               /**< Cortex-M7 Pend SV Interrupt */
  SysTick_IRQn                 = -1,               /**< Cortex-M7 System Tick Interrupt */

  /* Device specific interrupts */
  Pcie_1_MSI_IRQn              = 0,                /**< PCIe_1 MSI interrupt to M7/A53 */
  INT0_IRQn                    = 1,                /**< Software generated CPU interrupt to A53 core - interrupt#0 */
  INT1_IRQn                    = 2,                /**< Software generated CPU interrupt to A53 core - interrupt#1 */
  INT2_IRQn                    = 3,                /**< Software generated CPU interrupt to A53 core - interrupt#2 */
  Pcie_0_MSI_IRQn              = 4,                /**< PCIe_0 MSI interrupt to M7/A53 */
  CTI_0_IRQn                   = 5,                /**< CTI interrupt[0] */
  CTI_1_IRQn                   = 6,                /**< CTI interrupt[1] */
  MCM_IRQn                     = 7,                /**< Cortex M7 interrupt for FPU events and TCM errors */
  DMA0_0_15_IRQn               = 8,                /**< eDMA0 - DMA interrupt CH0-15 */
  DMA0_16_31_IRQn              = 9,                /**< eDMA0 - DMA interrupt CH16-31 */
  DMA0_ERR0_31_IRQn            = 10,               /**< eDMA0 - DMA error interrupt */
  DMA1_0_15_IRQn               = 11,               /**< eDMA1 - DMA interrupt  CH0-15 */
  DMA1_16_31_IRQn              = 12,               /**< eDMA1 - DMA interrupt CH16-31 */
  DMA1_ERR0_31_IRQn            = 13,               /**< eDMA1 - DMA error interrupt */
  SWT0_IRQn                    = 14,               /**< Watchdog timer interrupt */
  SWT1_IRQn                    = 15,               /**< Watchdog timer interrupt */
  SWT2_IRQn                    = 16,               /**< Watchdog timer interrupt */
  SWT3_IRQn                    = 17,               /**< Watchdog timer interrupt */
  SWT4_IRQn                    = 18,               /**< Watchdog timer interrupt */
  SWT5_IRQn                    = 19,               /**< Watchdog timer interrupt */
  SWT6_IRQn                    = 20,               /**< Watchdog timer interrupt */
  SWT7_IRQn                    = 21,               /**< Watchdog timer interrupt */
  STM0_IRQn                    = 24,               /**< STM0 interrupt channel request 0, 1, 2, 3 */
  STM1_IRQn                    = 25,               /**< STM1 interrupt channel request 0, 1, 2, 3 */
  STM2_IRQn                    = 26,               /**< STM2 interrupt channel request 0, 1, 2, 3 */
  STM3_IRQn                    = 27,               /**< STM3 interrupt channel request 0, 1, 2, 3 */
  STM4_IRQn                    = 28,               /**< STM4 interrupt channel request 0, 1, 2, 3 */
  STM5_IRQn                    = 29,               /**< STM5 interrupt channel request 0, 1, 2, 3 */
  STM6_IRQn                    = 30,               /**< STM6 interrupt channel request 0, 1, 2, 3 */
  STM7_IRQn                    = 31,               /**< STM7 interrupt channel request 0, 1, 2, 3 */
  QUADSPI_ORED_IRQ             = 32,               /**< QSPI Ored interrupt via OTC */
  QUADSPI_FLASHA_IRQ           = 33,               /**< Flash A Error interrupt via OTC */
  QUADSPI_FLASHB_IRQ           = 34,               /**< Flash B Error interrupt via OTC */
  STCU2_LBIST_IRQn             = 35,               /**< LBIST */
  USDHC_IRQn                   = 36,               /**< uSDHC Interrupt */
  CAN0_ORED_IRQn               = 37,               /**< CAN0 OR'ed Bus in Off State. */
  CAN0_ERR_IRQn                = 38,               /**< CAN0 Interrupt indicating that errors were detected on the CAN bus */
  CAN0_ORED_0_7_MB_IRQn        = 39,               /**< CAN0 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN0_ORED_8_127_MB_IRQn      = 40,               /**< CAN0 OR'ed Message buffer (8-127) */
  CAN1_ORED_IRQn               = 41,               /**< CAN1 OR'ed Bus in Off State */
  CAN1_ERR_IRQn                = 42,               /**< CAN1 Interrupt indicating that errors were detected on the CAN bus */
  CAN1_ORED_0_7_MB_IRQn        = 43,               /**< CAN1 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN1_ORED_8_127_MB_IRQn      = 44,               /**< CAN1 OR'ed Message buffer (8-127) */
  CAN2_ORED_IRQn               = 45,               /**< CAN2 OR'ed Bus in Off State */
  CAN2_ERR_IRQn                = 46,               /**< CAN2 Interrupt indicating that errors were detected on the CAN bus */
  CAN2_ORED_0_7_MB_IRQn        = 47,               /**< CAN2 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN2_ORED_8_127_MB_IRQn      = 48,               /**< CAN2 OR'ed Message buffer (8-127) */
  CAN3_ORED_IRQn               = 49,               /**< CAN3 OR'ed Bus in Off State */
  CAN3_ERR_IRQn                = 50,               /**< CAN3 Interrupt indicating that errors were detected on the CAN bus */
  CAN3_ORED_0_7_MB_IRQn        = 51,               /**< CAN3 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN3_ORED_8_127_MB_IRQn      = 52,               /**< CAN3 OR'ed Message buffer (8-127) */
  PIT0_IRQn                    = 53,               /**< OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, 6 */
  PIT1_IRQn                    = 54,               /**< OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5 */
  FTM0_IRQn                    = 55,               /**< OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, Overflow, Reload */
  FTM1_IRQn                    = 56,               /**< OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, Overflow, Reload */
  GMAC0_Common_IRQn            = 57,               /**< Common Interrupt */
  GMAC0_CH0_TX_IRQn            = 58,               /**< Channel0 TX Interrupt */
  GMAC0_CH0_RX_IRQn            = 59,               /**< Channel0 RX Interrupt */
  GMAC0_CH1_TX_IRQn            = 60,               /**< Channel1 TX Interrupt */
  GMAC0_CH1_RX_IRQn            = 61,               /**< Channel1 RX Interrupt */
  GMAC0_CH2_TX_IRQn            = 62,               /**< Channel2 TX Interrupt */
  GMAC0_CH2_RX_IRQn            = 63,               /**< Channel2 RX Interrupt */
  GMAC0_CH3_TX_IRQn            = 64,               /**< Channel3 TX Interrupt */
  GMAC0_CH3_RX_IRQn            = 65,               /**< Channel3 RX Interrupt */
  GMAC0_CH4_TX_IRQn            = 66,               /**< Channel4 TX Interrupt */
  GMAC0_CH4_RX_IRQn            = 67,               /**< Channel4 RX Interrupt */
  SAR_ADC0_INT_IRQn            = 70,               /**< End of conv., ERROR and Analog Watchdog Interrupt */
  SAR_ADC1_INT_IRQn            = 71,               /**< End of conv., ERROR and Analog Watchdog Interrupt */
  FLEXRAY_NCERR_IRQn           = 72,               /**< LRAM and DRAM Non-Corrected Error interrupt */
  FLEXRAY_CERR_IRQn            = 73,               /**< LRAM and DRAM Corrected Error interrupt */
  FLEXRAY_CH0_RX_FIFO_IRQn     = 74,               /**< Receive FIFO channel A not empty interrupt */
  FLEXRAY_CH1_RX_FIFO_IRQn     = 75,               /**< Receive FIFO channel B not empty interrupt */
  FLEXRAY_WKUP_IRQn            = 76,               /**< Wakeup interrupt */
  FLEXRAY_STATUS_IRQn          = 77,               /**< Combined protocol status and error interrupt */
  FLEXRAY_CMBERR_IRQn          = 78,               /**< Combined CHI error interrupt */
  FLEXRAY_TX_BUFF_IRQn         = 79,               /**< Combined transmit message buffer interrupt */
  FLEXRAY_RX_BUFF_IRQn         = 80,               /**< Combined receive message buffer interrupt */
  FLEXRAY_MODULE_IRQn          = 81,               /**< Combined module interrupt */
  LINFLEXD0_IRQn               = 82,               /**< Internal all interrupt request */
  LINFLEXD1_IRQn               = 83,               /**< Internal all interrupt request */
  SPI0_IRQn                    = 85,               /**< OR'ed DSPI Global Interrupt */
  SPI1_IRQn                    = 86,               /**< OR'ed DSPI Global Interrupt */
  SPI2_IRQn                    = 87,               /**< OR'ed DSPI Global Interrupt */
  SPI3_IRQn                    = 88,               /**< OR'ed DSPI Global Interrupt */
  SPI4_IRQn                    = 89,               /**< OR'ed DSPI Global Interrupt */
  SPI5_IRQn                    = 90,               /**< OR'ed DSPI Global Interrupt */
  I2C0_IRQn                    = 92,               /**< Interrupt Request */
  I2C1_IRQn                    = 93,               /**< Interrupt Request */
  MC_RGM_IRQn                  = 98,               /**< Interrupt Request to System */
  FCCU_ALARM_IRQn              = 100,              /**< Interrupt request (ALARM state) */
  FCCU_MISC_IRQn               = 101,              /**< Interrupt request (miscellaneous conditions) */
  SBSW_IRQn                    = 102,              /**< Interrupt triggered by writing to the TMWDP CONFG_ADDR Register,TMWDPI timer interrupt */
  HSE_MU0_TX_IRQn              = 103,              /**< Ored tx interrupt to MU-0 */
  HSE_MU0_RX_IRQn              = 104,              /**< Ored rx interrupt to MU-0 */
  HSE_MU0_ORED_IRQn            = 105,              /**< ORed general purpose interrupt request to MU-0 */
  HSE_MU1_TX_IRQn              = 106,              /**< Ored tx interrupt to MU-1 */
  HSE_MU1_RX_IRQn              = 107,              /**< Ored rx interrupt to MU-1 */
  HSE_MU1_ORED_IRQn            = 108,              /**< ORed general purpose interrupt request to MU-1 */
  HSE_MU2_TX_IRQn              = 109,              /**< Ored tx interrupt to MU-2 */
  HSE_MU2_RX_IRQn              = 110,              /**< Ored rx interrupt to MU-2 */
  HSE_MU2_ORED_IRQn            = 111,              /**< ORed general purpose interrupt request to MU-2 */
  HSE_MU3_TX_IRQn              = 112,              /**< Ored tx interrupt to MU-3 */
  HSE_MU3_RX_IRQn              = 113,              /**< Ored rx interrupt to MU-3 */
  HSE_MU3_ORED_IRQn            = 114,              /**< ORed general purpose interrupt request to MU-3 */
  DDR0_SCRUB_IRQn              = 115,              /**< Scrubber interrupt indicating one full address range sweep */
  DDR0_PHY_IRQn                = 116,              /**< PHY address decoding error inside DDR SS, PHY interrupt */
  CTU_FIFO_FULL_EMPTY_IRQn     = 117,              /**< FIFO 0,1,2,3 full  or empty or overflow or overrun interrupt */
  CTU_M_RELOAD_IRQn            = 118,              /**< Master reload interrupt,Trigger0 interrupt,Trigger1 interrupt,Trigger2 interrupt,Trigger3 interrupt,Trigger4 interrupt,Trigger5 interrupt,Trigger6 interrupt,Trigger7 interrupt,ADC command interrupt */
  CTU_ERR_IRQn                 = 119,              /**< Error interrupt */
  TMU_ALARM_IRQn               = 120,              /**< Level sensitive temperature alarm interrupt,Level sensitive citical temperature alarm interrupt */
  CORTEX_A53_ERR_L2RAM_CLUSTER0_IRQn = 151,        /**< Error indicator for L2 RAM double-bit ECC error for cluster0 */
  CORTEX_A53_ERR_AXI_CLUSTER0_IRQn = 152,          /**< A53:  Cluster0 Error indicator for AXI or CH bus error */
  CORTEX_A53_ERR_L2RAM_CLUSTER1_IRQn = 153,        /**< Error indicator for L2 RAM double-bit ECC error for cluster1 */
  CORTEX_A53_ERR_AXI_CLUSTER1_IRQn = 154,          /**< A53:  Cluster1 Error indicator for AXI bus error */
  JDC_IRQn                     = 155,              /**< Indicates data ready to be read from JIN_IPS register or new data can be written to JOUT_IPS register when asserted */
  FASTDMA_TX_IRQn              = 170,              /**< Transfer Done interrupt */
  FASTDMA_ERR_IRQn             = 171,              /**< DMA Configuration or Transfer error, 'CRC error encountered during data transfer */
  MIPICSI2_0_INT0_IRQn         = 172,              /**< MIPI-CSI2_1 - Reports errors in the receive path */
  MIPICSI2_0_INT1_IRQn         = 173,              /**< MIPI-CSI2_1 - Protocol and Packet Level Error Reporting */
  MIPICSI2_0_INT2_IRQn         = 174,              /**< MIPI-CSI2_1 - Receive path errors like line length error/ line count error */
  MIPICSI2_0_INT3_IRQn         = 175,              /**< MIPI-CSI2_1 - Turnaround and Transmit related Errors and Events */
  MIPICSI2_1_INT0_IRQn         = 176,              /**< MIPI-CSI2_2 - Reports errors in the receive path */
  MIPICSI2_1_INT1_IRQn         = 177,              /**< MIPI-CSI2_2 - Protocol and Packet Level Error Reporting */
  MIPICSI2_1_INT2_IRQn         = 178,              /**< MIPI-CSI2_2 - Receive path errors like line length error/ line count error */
  MIPICSI2_1_INT3_IRQn         = 179,              /**< MIPI-CSI2_2 - Turnaround and Transmit related Errors and Events */
  MIPICSI2_2_INT0_IRQn         = 180,              /**< MIPI-CSI2_1 - Reports errors in the receive path */
  MIPICSI2_2_INT1_IRQn         = 181,              /**< MIPI-CSI2_1 - Protocol and Packet Level Error Reporting */
  MIPICSI2_2_INT2_IRQn         = 182,              /**< MIPI-CSI2_1 - Receive path errors like line length error/ line count error */
  MIPICSI2_2_INT3_IRQn         = 183,              /**< MIPI-CSI2_1 - Turnaround and Transmit related Errors and Events */
  MIPICSI2_3_INT0_IRQn         = 184,              /**< MIPI-CSI2_2 - Reports errors in the receive path */
  MIPICSI2_3_INT1_IRQn         = 185,              /**< MIPI-CSI2_2 - Protocol and Packet Level Error Reporting */
  MIPICSI2_3_INT2_IRQn         = 186,              /**< MIPI-CSI2_2 - Receive path errors like line length error/ line count error */
  MIPICSI2_3_INT3_IRQn         = 187,              /**< MIPI-CSI2_2 - Turnaround and Transmit related Errors and Events */
  SPT_DSP_ERR_IRQn             = 188,              /**< DSP error interrupt */
  SPT_EVENT_IRQn               = 189,              /**< SPT Event IRQ */
  SPT_ECS_IRQn                 = 190,              /**< ECS IRQ */
  SPT_DMA_COMPL_IRQn           = 191,              /**< ECS IRQ */
  CAN4_ORED_IRQn               = 192,              /**< CAN4 OR'ed Bus in Off State. */
  CAN4_ERR_IRQn                = 193,              /**< CAN4 Interrupt indicating that errors were detected on the CAN bus */
  CAN4_ORED_0_7_MB_IRQn        = 194,              /**< CAN4 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN4_ORED_8_127_MB_IRQn      = 195,              /**< CAN4 OR'ed Message buffer (8-127) */
  CAN5_ORED_IRQn               = 196,              /**< CAN5 OR'ed Bus in Off State. */
  CAN5_ERR_IRQn                = 197,              /**< CAN5 Interrupt indicating that errors were detected on the CAN bus */
  CAN5_ORED_0_7_MB_IRQn        = 198,              /**< CAN5 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN5_ORED_8_127_MB_IRQn      = 199,              /**< CAN5 OR'ed Message buffer (8-127) */
  CAN6_ORED_IRQn               = 200,              /**< CAN6 OR'ed Bus in Off State. */
  CAN6_ERR_IRQn                = 201,              /**< CAN6 Interrupt indicating that errors were detected on the CAN bus */
  CAN6_ORED_0_7_MB_IRQn        = 202,              /**< CAN6 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN6_ORED_8_127_MB_IRQn      = 203,              /**< CAN6 OR'ed Message buffer (8-127) */
  CAN7_ORED_IRQn               = 204,              /**< CAN7 OR'ed Bus in Off State. */
  CAN7_ERR_IRQn                = 205,              /**< CAN7 Interrupt indicating that errors were detected on the CAN bus */
  CAN7_ORED_0_7_MB_IRQn        = 206,              /**< CAN7 OR'ed Message buffer (0-7),Rx FIFO Watermark, Rx FIFO Data Available, Rx FIFO Underflow, Rx FIFO Overflow */
  CAN7_ORED_8_127_MB_IRQn      = 207,              /**< CAN7 OR'ed Message buffer (8-127) */
  GMAC1_Common_IRQn            = 220,              /**< Common Interrupt */
  GMAC1_CH0_TX_IRQn            = 221,              /**< Channel0 TX Interrupt */
  GMAC1_CH0_RX_IRQn            = 222,              /**< Channel0 RX Interrupt */
  GMAC1_CH1_TX_IRQn            = 223,              /**< Channel1 TX Interrupt */
  GMAC1_CH1_RX_IRQn            = 224,              /**< Channel1 RX Interrupt */
  GMAC1_CH2_TX_IRQn            = 225,              /**< Channel2 TX Interrupt */
  GMAC1_CH2_RX_IRQn            = 226,              /**< Channel2 RX Interrupt */
  GMAC1_CH3_TX_IRQn            = 227,              /**< Channel3 TX Interrupt */
  GMAC1_CH3_RX_IRQn            = 228,              /**< Channel3 RX Interrupt */
  GMAC1_CH4_TX_IRQn            = 229,              /**< Channel4 TX Interrupt */
  GMAC1_CH4_RX_IRQn            = 230,              /**< Channel4 RX Interrupt */
  CTE_INT_IRQn                 = 231,              /**< Interrupt signal becomes high on the rising edge of the event defined in the interrupt status register at 0x0224 */
  LAX1_ERR_IRQn                = 232,              /**< LAX_DMA_ERR or VCPU_IIT interrupt */
  LAX0_ERR_IRQn                = 233,              /**< LAX_DMA_ERR or VCPU_IIT interrupt */
  LAX0_ORED_FUNC_IRQn          = 234,              /**< Ored Functional Interrupt */
  LAX0_SOFT_INT_IRQn           = 235,              /**< VSPA Software Interrupt 0, VSPA Software Interrupt 1 */
  SIUL2_1_INT_IRQn             = 237,              /**< External Interrupt Vector 0, External Interrupt Vector 1, External Interrupt Vector 2, External Interrupt Vector 3 */
  LAX1_ORED_FUNC_IRQn          = 238,              /**< Ored Functional Interrupt */
  LAX1_SOFT_INT_IRQn           = 239               /**< VSPA Software Interrupt 0, VSPA Software Interrupt 1 */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


/* ----------------------------------------------------------------------------
   -- Cortex M7 Core Configuration
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Cortex_Core_Configuration Cortex M7 Core Configuration
 * @{
 */

#define __MPU_PRESENT                  1         /**< Defines if an MPU is present or not */
#define __ICACHE_PRESENT               1         /**< Defines if an ICACHE is present or not */
#define __DCACHE_PRESENT               1         /**< Defines if an DCACHE is present or not */
#define __DTCM_PRESENT                 1         /**< Defines if an DTCM is present or not */
#define __NVIC_PRIO_BITS               4         /**< Number of priority bits implemented in the NVIC */
#define __Vendor_SysTickConfig         0         /**< Vendor specific implementation of SysTickConfig is defined */
#define __FPU_PRESENT                  1         /**< Defines if an FPU is present or not */


/*!
 * @}
 */ /* end of group Cortex_Core_Configuration */


/* ----------------------------------------------------------------------------
   -- SDK Compatibility
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDK_Compatibility_Symbols SDK Compatibility
 * @{
 */

/* No SDK compatibility issues. */

/*!
 * @}
 */ /* end of group SDK_Compatibility_Symbols */


#endif  /* #if !defined(S32R45_COMMON_H_) */

