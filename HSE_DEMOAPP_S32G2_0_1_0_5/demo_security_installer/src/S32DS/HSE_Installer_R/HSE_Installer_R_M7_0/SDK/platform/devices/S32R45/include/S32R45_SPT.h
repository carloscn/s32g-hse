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
 * @file S32R45_SPT.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_SPT
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
#if !defined(S32R45_SPT_H_)  /* Check if memory map has not been already included */
#define S32R45_SPT_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SPT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SPT_Peripheral_Access_Layer SPT Peripheral Access Layer
 * @{
 */

/** SPT - Register Layout Typedef */
typedef struct {
  __IO uint32_t GBL_CTRL;                          /**< SPT Global Control Register, offset: 0x0 */
  __IO uint32_t CS_PG_ST_ADDR;                     /**< Program Start Addr Register, offset: 0x4 */
  __IO uint32_t CS_MODE_CTRL;                      /**< Mode Control Register, offset: 0x8 */
  __I  uint32_t CS_WD_STATUS;                      /**< Watchdog Counter Register, offset: 0xC */
  __IO uint32_t CS_BKPT0_ADDR;                     /**< Breakpoint0 Addr Register, offset: 0x10 */
  __IO uint32_t CS_BKPT1_ADDR;                     /**< Breakpoint1 Addr Register, offset: 0x14 */
  __IO uint32_t CS_BKPT2_ADDR;                     /**< Breakpoint2 Addr Register, offset: 0x18 */
  __IO uint32_t CS_BKPT3_ADDR;                     /**< Breakpoint3 Addr Register, offset: 0x1C */
  __IO uint32_t CS_JAM_INST0;                      /**< MCS Jamming Instruction0 Register, offset: 0x20 */
  __IO uint32_t CS_JAM_INST1;                      /**< MCS Jamming Instruction1 Register, offset: 0x24 */
  __IO uint32_t CS_JAM_INST2;                      /**< MCS Jamming Instruction2 Register, offset: 0x28 */
  __IO uint32_t CS_JAM_INST3;                      /**< MCS Jamming Instruction3 Register, offset: 0x2C */
  __I  uint32_t CS_CURR_INST_ADDR;                 /**< MCS Current Instruction Addr Register, offset: 0x30 */
  __I  uint32_t CS_CURR_INST0;                     /**< MCS Current Instruction0 Register, offset: 0x34 */
  __I  uint32_t CS_CURR_INST1;                     /**< MCS Current Instruction1 Register, offset: 0x38 */
  __I  uint32_t CS_CURR_INST2;                     /**< MCS Current Instruction2 Register, offset: 0x3C */
  __I  uint32_t CS_CURR_INST3;                     /**< MCS Current Instruction3 Register, offset: 0x40 */
  __I  uint32_t CS_LOOPCNTR01;                     /**< Loop Counter 0 and 1 Register, offset: 0x44 */
  __I  uint32_t CS_LOOPCNTR23;                     /**< Loop Counter 2 and 3 Register, offset: 0x48 */
  __I  uint32_t CS_ERR_INST_ADDR;                  /**< MCS Error Instruction Addr Register, offset: 0x4C */
  __I  uint32_t CS_ERR_INST0;                      /**< MCS Error Instruction 0 Register, offset: 0x50 */
  __I  uint32_t CS_ERR_INST1;                      /**< MCS Error Instruction 1 Register, offset: 0x54 */
  __I  uint32_t CS_ERR_INST2;                      /**< MCS Error Instruction 2 Register, offset: 0x58 */
  __I  uint32_t CS_ERR_INST3;                      /**< MCS Error Instruction 3 Register, offset: 0x5C */
  __IO uint32_t CS_STATUS0;                        /**< MCS General Status 0 Register, offset: 0x60 */
  __IO uint32_t CS_STATUS1;                        /**< MCS General Status 1 Register, offset: 0x64 */
  __I  uint32_t CS_STATUS2;                        /**< MCS General Status2 Register, offset: 0x68 */
  __I  uint32_t CS_STATUS3;                        /**< MCS General Status 3 Register, offset: 0x6C */
  __IO uint32_t CS_EVTREG1;                        /**< EVT1 Status Register, offset: 0x70 */
  uint8_t RESERVED_0[4];
  __IO uint32_t CS_SW_EVTREG;                      /**< SW Event Trigger Register, offset: 0x78 */
  uint8_t RESERVED_1[4];
  __IO uint32_t CS_CHRP_CNTR_RST;                  /**< External Events Chirp Counter Reset Mapping Register, offset: 0x80 */
  __IO uint32_t CS_CHRP_CNTR_LD;                   /**< External Events Chirp Counter Load Mapping Register, offset: 0x84 */
  __IO uint32_t CS_INTEN0;                         /**< Interrupt Enable Register 0, offset: 0x88 */
  __IO uint32_t CS_INTEN1;                         /**< Interrupt Enable Register 1, offset: 0x8C */
  __IO uint32_t CS_EVT1_INTEN;                     /**< EVT1 Interrupt Enable Register, offset: 0x90 */
  __IO uint32_t DSP_RST_REG;                       /**< DSP Reset Register, offset: 0x94 */
  __IO uint32_t DSP_CONFIG_REG;                    /**< DSP Configuration Register, offset: 0x98 */
  __IO uint32_t DSP_ERR_INFO_REG;                  /**< DSP Error Info Register, offset: 0x9C */
  __IO uint32_t DSP_ERR_INFO_INT_EN;               /**< DSP Error Info Interrupt Enable Register., offset: 0xA0 */
  __I  uint32_t DSP_PFAULT_INFO_REG;               /**< DSP PFault Info Register, offset: 0xA4 */
  __I  uint32_t DSP_DEBUG1_REG;                    /**< DSP Debug Register 1, offset: 0xA8 */
  __I  uint32_t DSP_DEBUG2_REG;                    /**< DSP Debug Register 2, offset: 0xAC */
  __I  uint32_t DSP_DEBUG3_REG;                    /**< DSP Debug Register 3, offset: 0xB0 */
  __I  uint32_t DSP_DEBUG4_REG;                    /**< DSP Debug Register 4, offset: 0xB4 */
  __I  uint32_t DSP_DEBUG5_REG;                    /**< DSP Debug Register 5, offset: 0xB8 */
  __I  uint32_t DSP_DEBUG6_REG;                    /**< DSP Debug Register 6, offset: 0xBC */
  __IO uint32_t PDMA_LFSR_LOAD_VAL_HIGH;           /**< LFSR Load High Value, offset: 0xC0 */
  __IO uint32_t PDMA_LFSR_LOAD_VAL_LOW;            /**< LFSR Load Low Value, offset: 0xC4 */
  __IO uint32_t PDMA_CONTROL;                      /**< PDMA Control Register, offset: 0xC8 */
  __I  uint32_t PDMA_TRANSFER_COUNT_STATUS;        /**< PDMA Transfer Count Status, offset: 0xCC */
  __I  uint32_t PDMA_FMTB_EXP_ADDR_STATUS;         /**< PDMA formatB Exponent Address status Register, offset: 0xD0 */
  uint8_t RESERVED_2[12];
  __IO uint32_t HIST_OVF_STATUS0;                  /**< HIST Overflow Status0 Register, offset: 0xE0 */
  __IO uint32_t HIST_OVF_STATUS1;                  /**< HIST Overflow Status1 Register, offset: 0xE4 */
  __IO uint32_t HIST_OVF_IE;                       /**< HIST Overflow Interrupt Enable Register, offset: 0xE8 */
  uint8_t RESERVED_3[20];
  __IO uint32_t MEM_ERR_INJECT_CTRL;               /**< Memory Error Injection Register, offset: 0x100 */
  __IO uint32_t MEM_ERR_STATUS;                    /**< Memory Error Status Register, offset: 0x104 */
  __IO uint32_t MEM_ERR_INT_EN;                    /**< Memory Interrupt Enable Register, offset: 0x108 */
  __I  uint32_t OR_WR_LOCK_ERR_THRD_STATUS;        /**< OPRAM Write Lock Error Thread Status Register, offset: 0x10C */
  __I  uint32_t OR_RD_LOCK_ERR_THRD_STATUS;        /**< OPRAM Read Lock Error Thread Status Register, offset: 0x110 */
  __I  uint32_t TR_WR_LOCK_ERR_THRD_STATUS;        /**< TRAM Write Lock Error Thread Status Register, offset: 0x114 */
  __I  uint32_t TR_RD_LOCK_ERR_THRD_STATUS;        /**< TRAM Read Lock Error Thread Status Register, offset: 0x118 */
  __I  uint32_t OR_WEST_WR_LOCK_ERR_ADDR;          /**< OPRAM West Write Lock Error Address Register, offset: 0x11C */
  __I  uint32_t OR_EAST_WR_LOCK_ERR_ADDR;          /**< OPRAM East Write Lock Error Address Register, offset: 0x120 */
  __I  uint32_t OR_WEST_RD_LOCK_ERR_ADDR;          /**< OPRAM West Read Lock Error Address Register, offset: 0x124 */
  __I  uint32_t OR_EAST_RD_LOCK_ERR_ADDR;          /**< OPRAM East Read Lock Error Address Register, offset: 0x128 */
  __I  uint32_t TR_WR_LOCK_ERR_ADDR;               /**< TRAM Write Lock Error Address Register, offset: 0x12C */
  __I  uint32_t TR_RD_LOCK_ERR_ADDR;               /**< TRAM Read Lock Error Address Register, offset: 0x130 */
  __I  uint32_t OR_WEST_PAR_ERR_ADDR;              /**< OPRAM West Parity Error Address Register, offset: 0x134 */
  __I  uint32_t OR_EAST_PAR_ERR_ADDR;              /**< OPRAM East Parity Error Address Register, offset: 0x138 */
  __I  uint32_t TR_PAR_ERR_ADDR;                   /**< TRAM Parity Error Address Register, offset: 0x13C */
  uint8_t RESERVED_4[16];
  __IO uint32_t SPT_AXI_QOS_RD;                    /**< AXI QOS for Read Masters, offset: 0x150 */
  __IO uint32_t SPT_AXI_QOS_WR;                    /**< AXI QOS for Read Masters, offset: 0x154 */
  __I  uint32_t DMA_ERR_STATUS;                    /**< DMA Error Status Register, offset: 0x158 */
  __IO uint32_t GBL_STATUS;                        /**< Global Status Register, offset: 0x15C */
  __IO uint32_t GBL_STATUS_IE;                     /**< Global Status Interrupt Enable Register, offset: 0x160 */
  __IO uint32_t HW_ACC_ERR_STATUS;                 /**< Hardware Accelerator Error Status Register, offset: 0x164 */
  __IO uint32_t HW_ACC_ERR_IE;                     /**< Hardware Accelerator Error Interrupt Enable Register, offset: 0x168 */
  __IO uint32_t HW2_ACC_ERR_STATUS;                /**< Hardware Accelerator2 Error Status Register, offset: 0x16C */
  __IO uint32_t HW2_ACC_ERR_IE;                    /**< Hardware Accelerator2 Error Interrupt Enable Register, offset: 0x170 */
  __IO uint32_t WR_ACCESS_ERR_REG;                 /**< WR/SPR Access Error Status Register, offset: 0x174 */
  __IO uint32_t WR_ACCESS_ERR_INT_EN;              /**< WR/SPR Access Error Interrupt Enable Register, offset: 0x178 */
  uint8_t RESERVED_5[4];
  __IO uint32_t WR_0_15_CTRL_REG;                  /**< Access Control Register, offset: 0x180 */
  __IO uint32_t WR_16_31_CTRL_REG;                 /**< Access Control Register, offset: 0x184 */
  __IO uint32_t WR_32_47_CTRL_REG;                 /**< Access Control Register, offset: 0x188 */
  uint8_t RESERVED_6[12];
  __IO uint32_t WR_R0_RE;                          /**< Work Register, offset: 0x198 */
  __IO uint32_t WR_R0_IM;                          /**< Work Register, offset: 0x19C */
  __IO uint32_t WR_R1_RE;                          /**< Work Register, offset: 0x1A0 */
  __IO uint32_t WR_R1_IM;                          /**< Work Register, offset: 0x1A4 */
  __IO uint32_t WR_R2_RE;                          /**< Work Register, offset: 0x1A8 */
  __IO uint32_t WR_R2_IM;                          /**< Work Register, offset: 0x1AC */
  __IO uint32_t WR_R3_RE;                          /**< Work Register, offset: 0x1B0 */
  __IO uint32_t WR_R3_IM;                          /**< Work Register, offset: 0x1B4 */
  __IO uint32_t WR_R4_RE;                          /**< Work Register, offset: 0x1B8 */
  __IO uint32_t WR_R4_IM;                          /**< Work Register, offset: 0x1BC */
  __IO uint32_t WR_R5_RE;                          /**< Work Register, offset: 0x1C0 */
  __IO uint32_t WR_R5_IM;                          /**< Work Register, offset: 0x1C4 */
  __IO uint32_t WR_R6_RE;                          /**< Work Register, offset: 0x1C8 */
  __IO uint32_t WR_R6_IM;                          /**< Work Register, offset: 0x1CC */
  __IO uint32_t WR_R7_RE;                          /**< Work Register, offset: 0x1D0 */
  __IO uint32_t WR_R7_IM;                          /**< Work Register, offset: 0x1D4 */
  __IO uint32_t WR_R8_RE;                          /**< Work Register, offset: 0x1D8 */
  __IO uint32_t WR_R8_IM;                          /**< Work Register, offset: 0x1DC */
  __IO uint32_t WR_R9_RE;                          /**< Work Register, offset: 0x1E0 */
  __IO uint32_t WR_R9_IM;                          /**< Work Register, offset: 0x1E4 */
  __IO uint32_t WR_R10_RE;                         /**< Work Register, offset: 0x1E8 */
  __IO uint32_t WR_R10_IM;                         /**< Work Register, offset: 0x1EC */
  __IO uint32_t WR_R11_RE;                         /**< Work Register, offset: 0x1F0 */
  __IO uint32_t WR_R11_IM;                         /**< Work Register, offset: 0x1F4 */
  __IO uint32_t WR_R12_RE;                         /**< Work Register, offset: 0x1F8 */
  __IO uint32_t WR_R12_IM;                         /**< Work Register, offset: 0x1FC */
  __IO uint32_t WR_R13_RE;                         /**< Work Register, offset: 0x200 */
  __IO uint32_t WR_R13_IM;                         /**< Work Register, offset: 0x204 */
  __IO uint32_t WR_R14_RE;                         /**< Work Register, offset: 0x208 */
  __IO uint32_t WR_R14_IM;                         /**< Work Register, offset: 0x20C */
  __IO uint32_t WR_R15_RE;                         /**< Work Register, offset: 0x210 */
  __IO uint32_t WR_R15_IM;                         /**< Work Register, offset: 0x214 */
  __IO uint32_t WR_R16_RE;                         /**< Work Register, offset: 0x218 */
  __IO uint32_t WR_R16_IM;                         /**< Work Register, offset: 0x21C */
  __IO uint32_t WR_R17_RE;                         /**< Work Register, offset: 0x220 */
  __IO uint32_t WR_R17_IM;                         /**< Work Register, offset: 0x224 */
  __IO uint32_t WR_R18_RE;                         /**< Work Register, offset: 0x228 */
  __IO uint32_t WR_R18_IM;                         /**< Work Register, offset: 0x22C */
  __IO uint32_t WR_R19_RE;                         /**< Work Register, offset: 0x230 */
  __IO uint32_t WR_R19_IM;                         /**< Work Register, offset: 0x234 */
  __IO uint32_t WR_R20_RE;                         /**< Work Register, offset: 0x238 */
  __IO uint32_t WR_R20_IM;                         /**< Work Register, offset: 0x23C */
  __IO uint32_t WR_R21_RE;                         /**< Work Register, offset: 0x240 */
  __IO uint32_t WR_R21_IM;                         /**< Work Register, offset: 0x244 */
  __IO uint32_t WR_R22_RE;                         /**< Work Register, offset: 0x248 */
  __IO uint32_t WR_R22_IM;                         /**< Work Register, offset: 0x24C */
  __IO uint32_t WR_R23_RE;                         /**< Work Register, offset: 0x250 */
  __IO uint32_t WR_R23_IM;                         /**< Work Register, offset: 0x254 */
  __IO uint32_t WR_R24_RE;                         /**< Work Register, offset: 0x258 */
  __IO uint32_t WR_R24_IM;                         /**< Work Register, offset: 0x25C */
  __IO uint32_t WR_R25_RE;                         /**< Work Register, offset: 0x260 */
  __IO uint32_t WR_R25_IM;                         /**< Work Register, offset: 0x264 */
  __IO uint32_t WR_R26_RE;                         /**< Work Register, offset: 0x268 */
  __IO uint32_t WR_R26_IM;                         /**< Work Register, offset: 0x26C */
  __IO uint32_t WR_R27_RE;                         /**< Work Register, offset: 0x270 */
  __IO uint32_t WR_R27_IM;                         /**< Work Register, offset: 0x274 */
  __IO uint32_t WR_R28_RE;                         /**< Work Register, offset: 0x278 */
  __IO uint32_t WR_R28_IM;                         /**< Work Register, offset: 0x27C */
  __IO uint32_t WR_R29_RE;                         /**< Work Register, offset: 0x280 */
  __IO uint32_t WR_R29_IM;                         /**< Work Register, offset: 0x284 */
  __IO uint32_t WR_R30_RE;                         /**< Work Register, offset: 0x288 */
  __IO uint32_t WR_R30_IM;                         /**< Work Register, offset: 0x28C */
  __IO uint32_t WR_R31_RE;                         /**< Work Register, offset: 0x290 */
  __IO uint32_t WR_R31_IM;                         /**< Work Register, offset: 0x294 */
  __IO uint32_t WR_R32_RE;                         /**< Work Register, offset: 0x298 */
  __IO uint32_t WR_R32_IM;                         /**< Work Register, offset: 0x29C */
  __IO uint32_t WR_R33_RE;                         /**< Work Register, offset: 0x2A0 */
  __IO uint32_t WR_R33_IM;                         /**< Work Register, offset: 0x2A4 */
  __IO uint32_t WR_R34_RE;                         /**< Work Register, offset: 0x2A8 */
  __IO uint32_t WR_R34_IM;                         /**< Work Register, offset: 0x2AC */
  __IO uint32_t WR_R35_RE;                         /**< Work Register, offset: 0x2B0 */
  __IO uint32_t WR_R35_IM;                         /**< Work Register, offset: 0x2B4 */
  __IO uint32_t WR_R36_RE;                         /**< Work Register, offset: 0x2B8 */
  __IO uint32_t WR_R36_IM;                         /**< Work Register, offset: 0x2BC */
  __IO uint32_t WR_R37_RE;                         /**< Work Register, offset: 0x2C0 */
  __IO uint32_t WR_R37_IM;                         /**< Work Register, offset: 0x2C4 */
  __IO uint32_t WR_R38_RE;                         /**< Work Register, offset: 0x2C8 */
  __IO uint32_t WR_R38_IM;                         /**< Work Register, offset: 0x2CC */
  __IO uint32_t WR_R39_RE;                         /**< Work Register, offset: 0x2D0 */
  __IO uint32_t WR_R39_IM;                         /**< Work Register, offset: 0x2D4 */
  __IO uint32_t WR_R40_RE;                         /**< Work Register, offset: 0x2D8 */
  __IO uint32_t WR_R40_IM;                         /**< Work Register, offset: 0x2DC */
  __IO uint32_t WR_R41_RE;                         /**< Work Register, offset: 0x2E0 */
  __IO uint32_t WR_R41_IM;                         /**< Work Register, offset: 0x2E4 */
  __IO uint32_t WR_R42_RE;                         /**< Work Register, offset: 0x2E8 */
  __IO uint32_t WR_R42_IM;                         /**< Work Register, offset: 0x2EC */
  __IO uint32_t WR_R43_RE;                         /**< Work Register, offset: 0x2F0 */
  __IO uint32_t WR_R43_IM;                         /**< Work Register, offset: 0x2F4 */
  __IO uint32_t WR_R44_RE;                         /**< Work Register, offset: 0x2F8 */
  __IO uint32_t WR_R44_IM;                         /**< Work Register, offset: 0x2FC */
  __IO uint32_t WR_R45_RE;                         /**< Work Register, offset: 0x300 */
  __IO uint32_t WR_R45_IM;                         /**< Work Register, offset: 0x304 */
  __IO uint32_t WR_R46_RE;                         /**< Work Register, offset: 0x308 */
  __IO uint32_t WR_R46_IM;                         /**< Work Register, offset: 0x30C */
  __IO uint32_t WR_R47_RE;                         /**< Work Register, offset: 0x310 */
  __IO uint32_t WR_R47_IM;                         /**< Work Register, offset: 0x314 */
  uint8_t RESERVED_7[232];
  __IO uint32_t SCS0_JAM_INST0;                    /**< SCSa Jamming Instruction0 Register, offset: 0x400 */
  __IO uint32_t SCS0_JAM_INST1;                    /**< SCSa Jamming Instruction1 Register, offset: 0x404 */
  __IO uint32_t SCS0_JAM_INST2;                    /**< SCSa Jamming Instruction2 Register, offset: 0x408 */
  __IO uint32_t SCS0_JAM_INST3;                    /**< SCSa Jamming Instruction3 Register, offset: 0x40C */
  __I  uint32_t SCS0_CURR_INST_ADDR;               /**< SCSa Current Instruction Addr Register, offset: 0x410 */
  __I  uint32_t SCS0_CURR_INST0;                   /**< SCSa Current Instruction Register, offset: 0x414 */
  __I  uint32_t SCS0_CURR_INST1;                   /**< SCSa Current Instruction Register, offset: 0x418 */
  __I  uint32_t SCS0_CURR_INST2;                   /**< SCSa Current Instruction Register, offset: 0x41C */
  __I  uint32_t SCS0_CURR_INST3;                   /**< SCSa Current Instruction Register, offset: 0x420 */
  __I  uint32_t SCS0_LOOPCNTR01;                   /**< Loop Counter 0 and 1 Register, offset: 0x424 */
  __I  uint32_t SCS0_LOOPCNTR23;                   /**< Loop Counter 2 and 3 Register, offset: 0x428 */
  __I  uint32_t SCS0_ERR_INST_ADDR;                /**< SCSa Error Instruction Addr Register, offset: 0x42C */
  __I  uint32_t SCS0_ERR_INST0;                    /**< , offset: 0x430 */
  __I  uint32_t SCS0_ERR_INST1;                    /**< , offset: 0x434 */
  __I  uint32_t SCS0_ERR_INST2;                    /**< , offset: 0x438 */
  __I  uint32_t SCS0_ERR_INST3;                    /**< , offset: 0x43C */
  __IO uint32_t SCS0_STATUS0;                      /**< SCSa General Status 0 Register, offset: 0x440 */
  __IO uint32_t SCS0_STATUS1;                      /**< SCSa General Status 1 Register, offset: 0x444 */
  __I  uint32_t SCS0_STATUS2;                      /**< SCSa General Status2 Register, offset: 0x448 */
  __I  uint32_t SCS0_STATUS3;                      /**< SCSa General Status 3 Register, offset: 0x44C */
  __IO uint32_t SCS0_INTEN0;                       /**< SCS Interrupt Enable Register 0, offset: 0x450 */
  __IO uint32_t SCS0_INTEN1;                       /**< SCS Interrupt Enable Register 1, offset: 0x454 */
  __I  uint32_t SCS0_PDMA_TRANSFER_COUNT_STATUS;   /**< SCS PDMA Transfer Count Status, offset: 0x458 */
  __I  uint32_t SCS0_PDMA_FMTB_EXP_ADDR_STATUS;    /**< SCS PDMA formatB Exponent Address status Register, offset: 0x45C */
  uint8_t RESERVED_8[64];
  __IO uint32_t SCS1_JAM_INST0;                    /**< SCSa Jamming Instruction0 Register, offset: 0x4A0 */
  __IO uint32_t SCS1_JAM_INST1;                    /**< SCSa Jamming Instruction1 Register, offset: 0x4A4 */
  __IO uint32_t SCS1_JAM_INST2;                    /**< SCSa Jamming Instruction2 Register, offset: 0x4A8 */
  __IO uint32_t SCS1_JAM_INST3;                    /**< SCSa Jamming Instruction3 Register, offset: 0x4AC */
  __I  uint32_t SCS1_CURR_INST_ADDR;               /**< SCSa Current Instruction Addr Register, offset: 0x4B0 */
  __I  uint32_t SCS1_CURR_INST0;                   /**< SCSa Current Instruction Register, offset: 0x4B4 */
  __I  uint32_t SCS1_CURR_INST1;                   /**< SCSa Current Instruction Register, offset: 0x4B8 */
  __I  uint32_t SCS1_CURR_INST2;                   /**< SCSa Current Instruction Register, offset: 0x4BC */
  __I  uint32_t SCS1_CURR_INST3;                   /**< SCSa Current Instruction Register, offset: 0x4C0 */
  __I  uint32_t SCS1_LOOPCNTR01;                   /**< Loop Counter 0 and 1 Register, offset: 0x4C4 */
  __I  uint32_t SCS1_LOOPCNTR23;                   /**< Loop Counter 2 and 3 Register, offset: 0x4C8 */
  __I  uint32_t SCS1_ERR_INST_ADDR;                /**< SCSa Error Instruction Addr Register, offset: 0x4CC */
  __I  uint32_t SCS1_ERR_INST0;                    /**< , offset: 0x4D0 */
  __I  uint32_t SCS1_ERR_INST1;                    /**< , offset: 0x4D4 */
  __I  uint32_t SCS1_ERR_INST2;                    /**< , offset: 0x4D8 */
  __I  uint32_t SCS1_ERR_INST3;                    /**< , offset: 0x4DC */
  __IO uint32_t SCS1_STATUS0;                      /**< SCSa General Status 0 Register, offset: 0x4E0 */
  __IO uint32_t SCS1_STATUS1;                      /**< SCSa General Status 1 Register, offset: 0x4E4 */
  __I  uint32_t SCS1_STATUS2;                      /**< SCSa General Status2 Register, offset: 0x4E8 */
  __I  uint32_t SCS1_STATUS3;                      /**< SCSa General Status 3 Register, offset: 0x4EC */
  __IO uint32_t SCS1_INTEN0;                       /**< SCS Interrupt Enable Register 0, offset: 0x4F0 */
  __IO uint32_t SCS1_INTEN1;                       /**< SCS Interrupt Enable Register 1, offset: 0x4F4 */
  __I  uint32_t SCS1_PDMA_TRANSFER_COUNT_STATUS;   /**< SCS PDMA Transfer Count Status, offset: 0x4F8 */
  __I  uint32_t SCS1_PDMA_FMTB_EXP_ADDR_STATUS;    /**< SCS PDMA formatB Exponent Address status Register, offset: 0x4FC */
  uint8_t RESERVED_9[64];
  __IO uint32_t SCS2_JAM_INST0;                    /**< SCSa Jamming Instruction0 Register, offset: 0x540 */
  __IO uint32_t SCS2_JAM_INST1;                    /**< SCSa Jamming Instruction1 Register, offset: 0x544 */
  __IO uint32_t SCS2_JAM_INST2;                    /**< SCSa Jamming Instruction2 Register, offset: 0x548 */
  __IO uint32_t SCS2_JAM_INST3;                    /**< SCSa Jamming Instruction3 Register, offset: 0x54C */
  __I  uint32_t SCS2_CURR_INST_ADDR;               /**< SCSa Current Instruction Addr Register, offset: 0x550 */
  __I  uint32_t SCS2_CURR_INST0;                   /**< SCSa Current Instruction Register, offset: 0x554 */
  __I  uint32_t SCS2_CURR_INST1;                   /**< SCSa Current Instruction Register, offset: 0x558 */
  __I  uint32_t SCS2_CURR_INST2;                   /**< SCSa Current Instruction Register, offset: 0x55C */
  __I  uint32_t SCS2_CURR_INST3;                   /**< SCSa Current Instruction Register, offset: 0x560 */
  __I  uint32_t SCS2_LOOPCNTR01;                   /**< Loop Counter 0 and 1 Register, offset: 0x564 */
  __I  uint32_t SCS2_LOOPCNTR23;                   /**< Loop Counter 2 and 3 Register, offset: 0x568 */
  __I  uint32_t SCS2_ERR_INST_ADDR;                /**< SCSa Error Instruction Addr Register, offset: 0x56C */
  __I  uint32_t SCS2_ERR_INST0;                    /**< , offset: 0x570 */
  __I  uint32_t SCS2_ERR_INST1;                    /**< , offset: 0x574 */
  __I  uint32_t SCS2_ERR_INST2;                    /**< , offset: 0x578 */
  __I  uint32_t SCS2_ERR_INST3;                    /**< , offset: 0x57C */
  __IO uint32_t SCS2_STATUS0;                      /**< SCSa General Status 0 Register, offset: 0x580 */
  __IO uint32_t SCS2_STATUS1;                      /**< SCSa General Status 1 Register, offset: 0x584 */
  __I  uint32_t SCS2_STATUS2;                      /**< SCSa General Status2 Register, offset: 0x588 */
  __I  uint32_t SCS2_STATUS3;                      /**< SCSa General Status 3 Register, offset: 0x58C */
  __IO uint32_t SCS2_INTEN0;                       /**< SCS Interrupt Enable Register 0, offset: 0x590 */
  __IO uint32_t SCS2_INTEN1;                       /**< SCS Interrupt Enable Register 1, offset: 0x594 */
  __I  uint32_t SCS2_PDMA_TRANSFER_COUNT_STATUS;   /**< SCS PDMA Transfer Count Status, offset: 0x598 */
  __I  uint32_t SCS2_PDMA_FMTB_EXP_ADDR_STATUS;    /**< SCS PDMA formatB Exponent Address status Register, offset: 0x59C */
  uint8_t RESERVED_10[64];
  __IO uint32_t SCS3_JAM_INST0;                    /**< SCSa Jamming Instruction0 Register, offset: 0x5E0 */
  __IO uint32_t SCS3_JAM_INST1;                    /**< SCSa Jamming Instruction1 Register, offset: 0x5E4 */
  __IO uint32_t SCS3_JAM_INST2;                    /**< SCSa Jamming Instruction2 Register, offset: 0x5E8 */
  __IO uint32_t SCS3_JAM_INST3;                    /**< SCSa Jamming Instruction3 Register, offset: 0x5EC */
  __I  uint32_t SCS3_CURR_INST_ADDR;               /**< SCSa Current Instruction Addr Register, offset: 0x5F0 */
  __I  uint32_t SCS3_CURR_INST0;                   /**< SCSa Current Instruction Register, offset: 0x5F4 */
  __I  uint32_t SCS3_CURR_INST1;                   /**< SCSa Current Instruction Register, offset: 0x5F8 */
  __I  uint32_t SCS3_CURR_INST2;                   /**< SCSa Current Instruction Register, offset: 0x5FC */
  __I  uint32_t SCS3_CURR_INST3;                   /**< SCSa Current Instruction Register, offset: 0x600 */
  __I  uint32_t SCS3_LOOPCNTR01;                   /**< Loop Counter 0 and 1 Register, offset: 0x604 */
  __I  uint32_t SCS3_LOOPCNTR23;                   /**< Loop Counter 2 and 3 Register, offset: 0x608 */
  __I  uint32_t SCS3_ERR_INST_ADDR;                /**< SCSa Error Instruction Addr Register, offset: 0x60C */
  __I  uint32_t SCS3_ERR_INST0;                    /**< , offset: 0x610 */
  __I  uint32_t SCS3_ERR_INST1;                    /**< , offset: 0x614 */
  __I  uint32_t SCS3_ERR_INST2;                    /**< , offset: 0x618 */
  __I  uint32_t SCS3_ERR_INST3;                    /**< , offset: 0x61C */
  __IO uint32_t SCS3_STATUS0;                      /**< SCSa General Status 0 Register, offset: 0x620 */
  __IO uint32_t SCS3_STATUS1;                      /**< SCSa General Status 1 Register, offset: 0x624 */
  __I  uint32_t SCS3_STATUS2;                      /**< SCSa General Status2 Register, offset: 0x628 */
  __I  uint32_t SCS3_STATUS3;                      /**< SCSa General Status 3 Register, offset: 0x62C */
  __IO uint32_t SCS3_INTEN0;                       /**< SCS Interrupt Enable Register 0, offset: 0x630 */
  __IO uint32_t SCS3_INTEN1;                       /**< SCS Interrupt Enable Register 1, offset: 0x634 */
  __I  uint32_t SCS3_PDMA_TRANSFER_COUNT_STATUS;   /**< SCS PDMA Transfer Count Status, offset: 0x638 */
  __I  uint32_t SCS3_PDMA_FMTB_EXP_ADDR_STATUS;    /**< SCS PDMA formatB Exponent Address status Register, offset: 0x63C */
  uint8_t RESERVED_11[448];
  __IO uint32_t SPR_0_15_CTRL_REG;                 /**< DSP WLU interface has unconditional access to all Work Registers and SPRs(0:9)., offset: 0x800 */
  uint8_t RESERVED_12[12];
  __IO uint32_t SPR0_RE;                           /**< Special-purpose Register, offset: 0x810 */
  __IO uint32_t SPR0_IM;                           /**< Special-purpose Register, offset: 0x814 */
  __IO uint32_t SPR1_RE;                           /**< Special-purpose Register, offset: 0x818 */
  __IO uint32_t SPR1_IM;                           /**< Special-purpose Register, offset: 0x81C */
  __IO uint32_t SPR2_RE;                           /**< Special-purpose Register, offset: 0x820 */
  __IO uint32_t SPR2_IM;                           /**< Special-purpose Register, offset: 0x824 */
  __IO uint32_t SPR3_RE;                           /**< Special-purpose Register, offset: 0x828 */
  __IO uint32_t SPR3_IM;                           /**< Special-purpose Register, offset: 0x82C */
  __IO uint32_t SPR4_RE;                           /**< Special-purpose Register, offset: 0x830 */
  __IO uint32_t SPR4_IM;                           /**< Special-purpose Register, offset: 0x834 */
  __IO uint32_t SPR5_RE;                           /**< Special-purpose Register, offset: 0x838 */
  __IO uint32_t SPR5_IM;                           /**< Special-purpose Register, offset: 0x83C */
  __IO uint32_t SPR6_RE;                           /**< Special-purpose Register, offset: 0x840 */
  __IO uint32_t SPR6_IM;                           /**< Special-purpose Register, offset: 0x844 */
  __IO uint32_t SPR7_RE;                           /**< Special-purpose Register, offset: 0x848 */
  __IO uint32_t SPR7_IM;                           /**< Special-purpose Register, offset: 0x84C */
  __IO uint32_t SPR8_RE;                           /**< Special-purpose Register, offset: 0x850 */
  __IO uint32_t SPR8_IM;                           /**< Special-purpose Register, offset: 0x854 */
  __IO uint32_t SPR9_RE;                           /**< Special-purpose Register, offset: 0x858 */
  __IO uint32_t SPR9_IM;                           /**< Special-purpose Register, offset: 0x85C */
  uint8_t RESERVED_13[48];
  __I  uint32_t HW_SPR0_RE;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x890 */
  __I  uint32_t HW_SPR0_IM;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x894 */
  __I  uint32_t HW_SPR1_RE;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x898 */
  __I  uint32_t HW_SPR1_IM;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x89C */
  __I  uint32_t HW_SPR2_RE;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x8A0 */
  __I  uint32_t HW_SPR2_IM;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x8A4 */
  __I  uint32_t HW_SPR3_RE;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x8A8 */
  __I  uint32_t HW_SPR3_IM;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x8AC */
  __I  uint32_t HW_SPR4_RE;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x8B0 */
  __I  uint32_t HW_SPR4_IM;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x8B4 */
  __I  uint32_t HW_SPR5_RE;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x8B8 */
  __I  uint32_t HW_SPR5_IM;                        /**< Hardware Accelerator Special-purpose Register, offset: 0x8BC */
  __I  uint32_t EVT_SPR0_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8C0 */
  __I  uint32_t EVT_SPR0_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8C4 */
  __I  uint32_t EVT_SPR1_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8C8 */
  __I  uint32_t EVT_SPR1_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8CC */
  __I  uint32_t EVT_SPR2_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8D0 */
  __I  uint32_t EVT_SPR2_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8D4 */
  __I  uint32_t EVT_SPR3_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8D8 */
  __I  uint32_t EVT_SPR3_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8DC */
  __I  uint32_t EVT_SPR4_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8E0 */
  __I  uint32_t EVT_SPR4_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8E4 */
  __I  uint32_t EVT_SPR5_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8E8 */
  __I  uint32_t EVT_SPR5_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8EC */
  __I  uint32_t EVT_SPR6_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8F0 */
  __I  uint32_t EVT_SPR6_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8F4 */
  __I  uint32_t EVT_SPR7_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8F8 */
  __I  uint32_t EVT_SPR7_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x8FC */
  __I  uint32_t EVT_SPR8_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x900 */
  __I  uint32_t EVT_SPR8_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x904 */
  __I  uint32_t EVT_SPR9_RE;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x908 */
  __I  uint32_t EVT_SPR9_IM;                       /**< EXT EVT WAIT Special-purpose Register, offset: 0x90C */
  __I  uint32_t CHRP_SPR0_RE;                      /**< Chirp Special-purpose Register, offset: 0x910 */
  __I  uint32_t CHRP_SPR0_IM;                      /**< Chirp Special-purpose Register, offset: 0x914 */
  __I  uint32_t CHRP_SPR1_RE;                      /**< Chirp Special-purpose Register, offset: 0x918 */
  __I  uint32_t CHRP_SPR1_IM;                      /**< Chirp Special-purpose Register, offset: 0x91C */
  __I  uint32_t CHRP_SPR2_RE;                      /**< Chirp Special-purpose Register, offset: 0x920 */
  __I  uint32_t CHRP_SPR2_IM;                      /**< Chirp Special-purpose Register, offset: 0x924 */
  __I  uint32_t CHRP_SPR3_RE;                      /**< Chirp Special-purpose Register, offset: 0x928 */
  __I  uint32_t CHRP_SPR3_IM;                      /**< Chirp Special-purpose Register, offset: 0x92C */
  __I  uint32_t CHRP_SPR4_RE;                      /**< Chirp Special-purpose Register, offset: 0x930 */
  __I  uint32_t CHRP_SPR4_IM;                      /**< Chirp Special-purpose Register, offset: 0x934 */
  __I  uint32_t CHRP_SPR5_RE;                      /**< Chirp Special-purpose Register, offset: 0x938 */
  __I  uint32_t CHRP_SPR5_IM;                      /**< Chirp Special-purpose Register, offset: 0x93C */
  __I  uint32_t CHRP_SPR6_RE;                      /**< Chirp Special-purpose Register, offset: 0x940 */
  __I  uint32_t CHRP_SPR6_IM;                      /**< Chirp Special-purpose Register, offset: 0x944 */
  __I  uint32_t CHRP_SPR7_RE;                      /**< Chirp Special-purpose Register, offset: 0x948 */
  __I  uint32_t CHRP_SPR7_IM;                      /**< Chirp Special-purpose Register, offset: 0x94C */
} SPT_Type, *SPT_MemMapPtr;

/** Number of instances of the SPT module. */
#define SPT_INSTANCE_COUNT                       (1u)

/* SPT - Peripheral instance base addresses */
/** Peripheral SPT base address */
#define SPT_BASE                                 (0x44026000u)
/** Peripheral SPT base pointer */
#define SPT                                      ((SPT_Type *)SPT_BASE)
/** Array initializer of SPT peripheral base addresses */
#define SPT_BASE_ADDRS                           { SPT_BASE }
/** Array initializer of SPT peripheral base pointers */
#define SPT_BASE_PTRS                            { SPT }

/* ----------------------------------------------------------------------------
   -- SPT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SPT_Register_Masks SPT Register Masks
 * @{
 */

/*! @name GBL_CTRL - SPT Global Control Register */
/*! @{ */
#define SPT_GBL_CTRL_PG_ST_CTRL_MASK             (0x4U)
#define SPT_GBL_CTRL_PG_ST_CTRL_SHIFT            (2U)
#define SPT_GBL_CTRL_PG_ST_CTRL_WIDTH            (1U)
#define SPT_GBL_CTRL_PG_ST_CTRL(x)               (((uint32_t)(((uint32_t)(x)) << SPT_GBL_CTRL_PG_ST_CTRL_SHIFT)) & SPT_GBL_CTRL_PG_ST_CTRL_MASK)
/*! @} */

/*! @name CS_PG_ST_ADDR - Program Start Addr Register */
/*! @{ */
#define SPT_CS_PG_ST_ADDR_PG_ST_ADDR_MASK        (0xFFFFFFFFU)
#define SPT_CS_PG_ST_ADDR_PG_ST_ADDR_SHIFT       (0U)
#define SPT_CS_PG_ST_ADDR_PG_ST_ADDR_WIDTH       (32U)
#define SPT_CS_PG_ST_ADDR_PG_ST_ADDR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_PG_ST_ADDR_PG_ST_ADDR_SHIFT)) & SPT_CS_PG_ST_ADDR_PG_ST_ADDR_MASK)
/*! @} */

/*! @name CS_MODE_CTRL - Mode Control Register */
/*! @{ */
#define SPT_CS_MODE_CTRL_STOP_MASK               (0x1U)
#define SPT_CS_MODE_CTRL_STOP_SHIFT              (0U)
#define SPT_CS_MODE_CTRL_STOP_WIDTH              (1U)
#define SPT_CS_MODE_CTRL_STOP(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_STOP_SHIFT)) & SPT_CS_MODE_CTRL_STOP_MASK)
#define SPT_CS_MODE_CTRL_ASYNCSTOP_MASK          (0x2U)
#define SPT_CS_MODE_CTRL_ASYNCSTOP_SHIFT         (1U)
#define SPT_CS_MODE_CTRL_ASYNCSTOP_WIDTH         (1U)
#define SPT_CS_MODE_CTRL_ASYNCSTOP(x)            (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_ASYNCSTOP_SHIFT)) & SPT_CS_MODE_CTRL_ASYNCSTOP_MASK)
#define SPT_CS_MODE_CTRL_DEBUG_MD_MASK           (0xCU)
#define SPT_CS_MODE_CTRL_DEBUG_MD_SHIFT          (2U)
#define SPT_CS_MODE_CTRL_DEBUG_MD_WIDTH          (2U)
#define SPT_CS_MODE_CTRL_DEBUG_MD(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_DEBUG_MD_SHIFT)) & SPT_CS_MODE_CTRL_DEBUG_MD_MASK)
#define SPT_CS_MODE_CTRL_CS_IMM_DEBUG_MASK       (0x10U)
#define SPT_CS_MODE_CTRL_CS_IMM_DEBUG_SHIFT      (4U)
#define SPT_CS_MODE_CTRL_CS_IMM_DEBUG_WIDTH      (1U)
#define SPT_CS_MODE_CTRL_CS_IMM_DEBUG(x)         (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_CS_IMM_DEBUG_SHIFT)) & SPT_CS_MODE_CTRL_CS_IMM_DEBUG_MASK)
#define SPT_CS_MODE_CTRL_CS_BKPT_DEBUG_MASK      (0x20U)
#define SPT_CS_MODE_CTRL_CS_BKPT_DEBUG_SHIFT     (5U)
#define SPT_CS_MODE_CTRL_CS_BKPT_DEBUG_WIDTH     (1U)
#define SPT_CS_MODE_CTRL_CS_BKPT_DEBUG(x)        (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_CS_BKPT_DEBUG_SHIFT)) & SPT_CS_MODE_CTRL_CS_BKPT_DEBUG_MASK)
#define SPT_CS_MODE_CTRL_CS_SYS_DEBUG_MASK       (0x40U)
#define SPT_CS_MODE_CTRL_CS_SYS_DEBUG_SHIFT      (6U)
#define SPT_CS_MODE_CTRL_CS_SYS_DEBUG_WIDTH      (1U)
#define SPT_CS_MODE_CTRL_CS_SYS_DEBUG(x)         (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_CS_SYS_DEBUG_SHIFT)) & SPT_CS_MODE_CTRL_CS_SYS_DEBUG_MASK)
#define SPT_CS_MODE_CTRL_BKPT0_EN_MASK           (0x80U)
#define SPT_CS_MODE_CTRL_BKPT0_EN_SHIFT          (7U)
#define SPT_CS_MODE_CTRL_BKPT0_EN_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_BKPT0_EN(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_BKPT0_EN_SHIFT)) & SPT_CS_MODE_CTRL_BKPT0_EN_MASK)
#define SPT_CS_MODE_CTRL_BKPT0_RE_MASK           (0x100U)
#define SPT_CS_MODE_CTRL_BKPT0_RE_SHIFT          (8U)
#define SPT_CS_MODE_CTRL_BKPT0_RE_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_BKPT0_RE(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_BKPT0_RE_SHIFT)) & SPT_CS_MODE_CTRL_BKPT0_RE_MASK)
#define SPT_CS_MODE_CTRL_BKPT1_EN_MASK           (0x200U)
#define SPT_CS_MODE_CTRL_BKPT1_EN_SHIFT          (9U)
#define SPT_CS_MODE_CTRL_BKPT1_EN_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_BKPT1_EN(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_BKPT1_EN_SHIFT)) & SPT_CS_MODE_CTRL_BKPT1_EN_MASK)
#define SPT_CS_MODE_CTRL_BKPT1_RE_MASK           (0x400U)
#define SPT_CS_MODE_CTRL_BKPT1_RE_SHIFT          (10U)
#define SPT_CS_MODE_CTRL_BKPT1_RE_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_BKPT1_RE(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_BKPT1_RE_SHIFT)) & SPT_CS_MODE_CTRL_BKPT1_RE_MASK)
#define SPT_CS_MODE_CTRL_BKPT2_EN_MASK           (0x800U)
#define SPT_CS_MODE_CTRL_BKPT2_EN_SHIFT          (11U)
#define SPT_CS_MODE_CTRL_BKPT2_EN_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_BKPT2_EN(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_BKPT2_EN_SHIFT)) & SPT_CS_MODE_CTRL_BKPT2_EN_MASK)
#define SPT_CS_MODE_CTRL_BKPT2_RE_MASK           (0x1000U)
#define SPT_CS_MODE_CTRL_BKPT2_RE_SHIFT          (12U)
#define SPT_CS_MODE_CTRL_BKPT2_RE_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_BKPT2_RE(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_BKPT2_RE_SHIFT)) & SPT_CS_MODE_CTRL_BKPT2_RE_MASK)
#define SPT_CS_MODE_CTRL_BKPT3_EN_MASK           (0x2000U)
#define SPT_CS_MODE_CTRL_BKPT3_EN_SHIFT          (13U)
#define SPT_CS_MODE_CTRL_BKPT3_EN_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_BKPT3_EN(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_BKPT3_EN_SHIFT)) & SPT_CS_MODE_CTRL_BKPT3_EN_MASK)
#define SPT_CS_MODE_CTRL_BKPT3_RE_MASK           (0x4000U)
#define SPT_CS_MODE_CTRL_BKPT3_RE_SHIFT          (14U)
#define SPT_CS_MODE_CTRL_BKPT3_RE_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_BKPT3_RE(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_BKPT3_RE_SHIFT)) & SPT_CS_MODE_CTRL_BKPT3_RE_MASK)
#define SPT_CS_MODE_CTRL_PREFETCH_MASK           (0x8000U)
#define SPT_CS_MODE_CTRL_PREFETCH_SHIFT          (15U)
#define SPT_CS_MODE_CTRL_PREFETCH_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_PREFETCH(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_PREFETCH_SHIFT)) & SPT_CS_MODE_CTRL_PREFETCH_MASK)
#define SPT_CS_MODE_CTRL_ERROR_EN_MASK           (0x10000U)
#define SPT_CS_MODE_CTRL_ERROR_EN_SHIFT          (16U)
#define SPT_CS_MODE_CTRL_ERROR_EN_WIDTH          (1U)
#define SPT_CS_MODE_CTRL_ERROR_EN(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_ERROR_EN_SHIFT)) & SPT_CS_MODE_CTRL_ERROR_EN_MASK)
#define SPT_CS_MODE_CTRL_CFG_HALT_OTHER_THREADS_MASK (0x20000U)
#define SPT_CS_MODE_CTRL_CFG_HALT_OTHER_THREADS_SHIFT (17U)
#define SPT_CS_MODE_CTRL_CFG_HALT_OTHER_THREADS_WIDTH (1U)
#define SPT_CS_MODE_CTRL_CFG_HALT_OTHER_THREADS(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_CFG_HALT_OTHER_THREADS_SHIFT)) & SPT_CS_MODE_CTRL_CFG_HALT_OTHER_THREADS_MASK)
#define SPT_CS_MODE_CTRL_SCS0_DEBUG_MD_MASK      (0xC0000U)
#define SPT_CS_MODE_CTRL_SCS0_DEBUG_MD_SHIFT     (18U)
#define SPT_CS_MODE_CTRL_SCS0_DEBUG_MD_WIDTH     (2U)
#define SPT_CS_MODE_CTRL_SCS0_DEBUG_MD(x)        (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_SCS0_DEBUG_MD_SHIFT)) & SPT_CS_MODE_CTRL_SCS0_DEBUG_MD_MASK)
#define SPT_CS_MODE_CTRL_SCS1_DEBUG_MD_MASK      (0x300000U)
#define SPT_CS_MODE_CTRL_SCS1_DEBUG_MD_SHIFT     (20U)
#define SPT_CS_MODE_CTRL_SCS1_DEBUG_MD_WIDTH     (2U)
#define SPT_CS_MODE_CTRL_SCS1_DEBUG_MD(x)        (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_SCS1_DEBUG_MD_SHIFT)) & SPT_CS_MODE_CTRL_SCS1_DEBUG_MD_MASK)
#define SPT_CS_MODE_CTRL_SCS2_DEBUG_MD_MASK      (0xC00000U)
#define SPT_CS_MODE_CTRL_SCS2_DEBUG_MD_SHIFT     (22U)
#define SPT_CS_MODE_CTRL_SCS2_DEBUG_MD_WIDTH     (2U)
#define SPT_CS_MODE_CTRL_SCS2_DEBUG_MD(x)        (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_SCS2_DEBUG_MD_SHIFT)) & SPT_CS_MODE_CTRL_SCS2_DEBUG_MD_MASK)
#define SPT_CS_MODE_CTRL_SCS3_DEBUG_MD_MASK      (0x3000000U)
#define SPT_CS_MODE_CTRL_SCS3_DEBUG_MD_SHIFT     (24U)
#define SPT_CS_MODE_CTRL_SCS3_DEBUG_MD_WIDTH     (2U)
#define SPT_CS_MODE_CTRL_SCS3_DEBUG_MD(x)        (((uint32_t)(((uint32_t)(x)) << SPT_CS_MODE_CTRL_SCS3_DEBUG_MD_SHIFT)) & SPT_CS_MODE_CTRL_SCS3_DEBUG_MD_MASK)
/*! @} */

/*! @name CS_WD_STATUS - Watchdog Counter Register */
/*! @{ */
#define SPT_CS_WD_STATUS_WD_COUNT_MASK           (0xFFFFFFU)
#define SPT_CS_WD_STATUS_WD_COUNT_SHIFT          (0U)
#define SPT_CS_WD_STATUS_WD_COUNT_WIDTH          (24U)
#define SPT_CS_WD_STATUS_WD_COUNT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_WD_STATUS_WD_COUNT_SHIFT)) & SPT_CS_WD_STATUS_WD_COUNT_MASK)
#define SPT_CS_WD_STATUS_CFG_WD_WAITREG_MASK     (0x3F000000U)
#define SPT_CS_WD_STATUS_CFG_WD_WAITREG_SHIFT    (24U)
#define SPT_CS_WD_STATUS_CFG_WD_WAITREG_WIDTH    (6U)
#define SPT_CS_WD_STATUS_CFG_WD_WAITREG(x)       (((uint32_t)(((uint32_t)(x)) << SPT_CS_WD_STATUS_CFG_WD_WAITREG_SHIFT)) & SPT_CS_WD_STATUS_CFG_WD_WAITREG_MASK)
/*! @} */

/*! @name CS_BKPT0_ADDR - Breakpoint0 Addr Register */
/*! @{ */
#define SPT_CS_BKPT0_ADDR_BKPT0_MASK             (0xFFFFFFFFU)
#define SPT_CS_BKPT0_ADDR_BKPT0_SHIFT            (0U)
#define SPT_CS_BKPT0_ADDR_BKPT0_WIDTH            (32U)
#define SPT_CS_BKPT0_ADDR_BKPT0(x)               (((uint32_t)(((uint32_t)(x)) << SPT_CS_BKPT0_ADDR_BKPT0_SHIFT)) & SPT_CS_BKPT0_ADDR_BKPT0_MASK)
/*! @} */

/*! @name CS_BKPT1_ADDR - Breakpoint1 Addr Register */
/*! @{ */
#define SPT_CS_BKPT1_ADDR_BKPT1_MASK             (0xFFFFFFFFU)
#define SPT_CS_BKPT1_ADDR_BKPT1_SHIFT            (0U)
#define SPT_CS_BKPT1_ADDR_BKPT1_WIDTH            (32U)
#define SPT_CS_BKPT1_ADDR_BKPT1(x)               (((uint32_t)(((uint32_t)(x)) << SPT_CS_BKPT1_ADDR_BKPT1_SHIFT)) & SPT_CS_BKPT1_ADDR_BKPT1_MASK)
/*! @} */

/*! @name CS_BKPT2_ADDR - Breakpoint2 Addr Register */
/*! @{ */
#define SPT_CS_BKPT2_ADDR_BKPT2_MASK             (0xFFFFFFFFU)
#define SPT_CS_BKPT2_ADDR_BKPT2_SHIFT            (0U)
#define SPT_CS_BKPT2_ADDR_BKPT2_WIDTH            (32U)
#define SPT_CS_BKPT2_ADDR_BKPT2(x)               (((uint32_t)(((uint32_t)(x)) << SPT_CS_BKPT2_ADDR_BKPT2_SHIFT)) & SPT_CS_BKPT2_ADDR_BKPT2_MASK)
/*! @} */

/*! @name CS_BKPT3_ADDR - Breakpoint3 Addr Register */
/*! @{ */
#define SPT_CS_BKPT3_ADDR_BKPT3_MASK             (0xFFFFFFFFU)
#define SPT_CS_BKPT3_ADDR_BKPT3_SHIFT            (0U)
#define SPT_CS_BKPT3_ADDR_BKPT3_WIDTH            (32U)
#define SPT_CS_BKPT3_ADDR_BKPT3(x)               (((uint32_t)(((uint32_t)(x)) << SPT_CS_BKPT3_ADDR_BKPT3_SHIFT)) & SPT_CS_BKPT3_ADDR_BKPT3_MASK)
/*! @} */

/*! @name CS_JAM_INST0 - MCS Jamming Instruction0 Register */
/*! @{ */
#define SPT_CS_JAM_INST0_JAM_INST_31_0_MASK      (0xFFFFFFFFU)
#define SPT_CS_JAM_INST0_JAM_INST_31_0_SHIFT     (0U)
#define SPT_CS_JAM_INST0_JAM_INST_31_0_WIDTH     (32U)
#define SPT_CS_JAM_INST0_JAM_INST_31_0(x)        (((uint32_t)(((uint32_t)(x)) << SPT_CS_JAM_INST0_JAM_INST_31_0_SHIFT)) & SPT_CS_JAM_INST0_JAM_INST_31_0_MASK)
/*! @} */

/*! @name CS_JAM_INST1 - MCS Jamming Instruction1 Register */
/*! @{ */
#define SPT_CS_JAM_INST1_JAM_INST_63_32_MASK     (0xFFFFFFFFU)
#define SPT_CS_JAM_INST1_JAM_INST_63_32_SHIFT    (0U)
#define SPT_CS_JAM_INST1_JAM_INST_63_32_WIDTH    (32U)
#define SPT_CS_JAM_INST1_JAM_INST_63_32(x)       (((uint32_t)(((uint32_t)(x)) << SPT_CS_JAM_INST1_JAM_INST_63_32_SHIFT)) & SPT_CS_JAM_INST1_JAM_INST_63_32_MASK)
/*! @} */

/*! @name CS_JAM_INST2 - MCS Jamming Instruction2 Register */
/*! @{ */
#define SPT_CS_JAM_INST2_JAM_INST_95_64_MASK     (0xFFFFFFFFU)
#define SPT_CS_JAM_INST2_JAM_INST_95_64_SHIFT    (0U)
#define SPT_CS_JAM_INST2_JAM_INST_95_64_WIDTH    (32U)
#define SPT_CS_JAM_INST2_JAM_INST_95_64(x)       (((uint32_t)(((uint32_t)(x)) << SPT_CS_JAM_INST2_JAM_INST_95_64_SHIFT)) & SPT_CS_JAM_INST2_JAM_INST_95_64_MASK)
/*! @} */

/*! @name CS_JAM_INST3 - MCS Jamming Instruction3 Register */
/*! @{ */
#define SPT_CS_JAM_INST3_JAM_INST_127_96_MASK    (0xFFFFFFFFU)
#define SPT_CS_JAM_INST3_JAM_INST_127_96_SHIFT   (0U)
#define SPT_CS_JAM_INST3_JAM_INST_127_96_WIDTH   (32U)
#define SPT_CS_JAM_INST3_JAM_INST_127_96(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_JAM_INST3_JAM_INST_127_96_SHIFT)) & SPT_CS_JAM_INST3_JAM_INST_127_96_MASK)
/*! @} */

/*! @name CS_CURR_INST_ADDR - MCS Current Instruction Addr Register */
/*! @{ */
#define SPT_CS_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_CS_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT (0U)
#define SPT_CS_CURR_INST_ADDR_CURRENT_INST_ADDR_WIDTH (32U)
#define SPT_CS_CURR_INST_ADDR_CURRENT_INST_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT)) & SPT_CS_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK)
/*! @} */

/*! @name CS_CURR_INST0 - MCS Current Instruction0 Register */
/*! @{ */
#define SPT_CS_CURR_INST0_CURR_INST_31_0_MASK    (0xFFFFFFFFU)
#define SPT_CS_CURR_INST0_CURR_INST_31_0_SHIFT   (0U)
#define SPT_CS_CURR_INST0_CURR_INST_31_0_WIDTH   (32U)
#define SPT_CS_CURR_INST0_CURR_INST_31_0(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_CURR_INST0_CURR_INST_31_0_SHIFT)) & SPT_CS_CURR_INST0_CURR_INST_31_0_MASK)
/*! @} */

/*! @name CS_CURR_INST1 - MCS Current Instruction1 Register */
/*! @{ */
#define SPT_CS_CURR_INST1_CURR_INST_63_32_MASK   (0xFFFFFFFFU)
#define SPT_CS_CURR_INST1_CURR_INST_63_32_SHIFT  (0U)
#define SPT_CS_CURR_INST1_CURR_INST_63_32_WIDTH  (32U)
#define SPT_CS_CURR_INST1_CURR_INST_63_32(x)     (((uint32_t)(((uint32_t)(x)) << SPT_CS_CURR_INST1_CURR_INST_63_32_SHIFT)) & SPT_CS_CURR_INST1_CURR_INST_63_32_MASK)
/*! @} */

/*! @name CS_CURR_INST2 - MCS Current Instruction2 Register */
/*! @{ */
#define SPT_CS_CURR_INST2_CURR_INST_95_64_MASK   (0xFFFFFFFFU)
#define SPT_CS_CURR_INST2_CURR_INST_95_64_SHIFT  (0U)
#define SPT_CS_CURR_INST2_CURR_INST_95_64_WIDTH  (32U)
#define SPT_CS_CURR_INST2_CURR_INST_95_64(x)     (((uint32_t)(((uint32_t)(x)) << SPT_CS_CURR_INST2_CURR_INST_95_64_SHIFT)) & SPT_CS_CURR_INST2_CURR_INST_95_64_MASK)
/*! @} */

/*! @name CS_CURR_INST3 - MCS Current Instruction3 Register */
/*! @{ */
#define SPT_CS_CURR_INST3_CURR_INST_127_96_MASK  (0xFFFFFFFFU)
#define SPT_CS_CURR_INST3_CURR_INST_127_96_SHIFT (0U)
#define SPT_CS_CURR_INST3_CURR_INST_127_96_WIDTH (32U)
#define SPT_CS_CURR_INST3_CURR_INST_127_96(x)    (((uint32_t)(((uint32_t)(x)) << SPT_CS_CURR_INST3_CURR_INST_127_96_SHIFT)) & SPT_CS_CURR_INST3_CURR_INST_127_96_MASK)
/*! @} */

/*! @name CS_LOOPCNTR01 - Loop Counter 0 and 1 Register */
/*! @{ */
#define SPT_CS_LOOPCNTR01_LOOP_CNTR0_MASK        (0xFFFFU)
#define SPT_CS_LOOPCNTR01_LOOP_CNTR0_SHIFT       (0U)
#define SPT_CS_LOOPCNTR01_LOOP_CNTR0_WIDTH       (16U)
#define SPT_CS_LOOPCNTR01_LOOP_CNTR0(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_LOOPCNTR01_LOOP_CNTR0_SHIFT)) & SPT_CS_LOOPCNTR01_LOOP_CNTR0_MASK)
#define SPT_CS_LOOPCNTR01_LOOP_CNTR1_MASK        (0xFFFF0000U)
#define SPT_CS_LOOPCNTR01_LOOP_CNTR1_SHIFT       (16U)
#define SPT_CS_LOOPCNTR01_LOOP_CNTR1_WIDTH       (16U)
#define SPT_CS_LOOPCNTR01_LOOP_CNTR1(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_LOOPCNTR01_LOOP_CNTR1_SHIFT)) & SPT_CS_LOOPCNTR01_LOOP_CNTR1_MASK)
/*! @} */

/*! @name CS_LOOPCNTR23 - Loop Counter 2 and 3 Register */
/*! @{ */
#define SPT_CS_LOOPCNTR23_LOOP_CNTR2_MASK        (0xFFFFU)
#define SPT_CS_LOOPCNTR23_LOOP_CNTR2_SHIFT       (0U)
#define SPT_CS_LOOPCNTR23_LOOP_CNTR2_WIDTH       (16U)
#define SPT_CS_LOOPCNTR23_LOOP_CNTR2(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_LOOPCNTR23_LOOP_CNTR2_SHIFT)) & SPT_CS_LOOPCNTR23_LOOP_CNTR2_MASK)
#define SPT_CS_LOOPCNTR23_LOOP_CNTR3_MASK        (0xFFFF0000U)
#define SPT_CS_LOOPCNTR23_LOOP_CNTR3_SHIFT       (16U)
#define SPT_CS_LOOPCNTR23_LOOP_CNTR3_WIDTH       (16U)
#define SPT_CS_LOOPCNTR23_LOOP_CNTR3(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_LOOPCNTR23_LOOP_CNTR3_SHIFT)) & SPT_CS_LOOPCNTR23_LOOP_CNTR3_MASK)
/*! @} */

/*! @name CS_ERR_INST_ADDR - MCS Error Instruction Addr Register */
/*! @{ */
#define SPT_CS_ERR_INST_ADDR_ERROR_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_CS_ERR_INST_ADDR_ERROR_INST_ADDR_SHIFT (0U)
#define SPT_CS_ERR_INST_ADDR_ERROR_INST_ADDR_WIDTH (32U)
#define SPT_CS_ERR_INST_ADDR_ERROR_INST_ADDR(x)  (((uint32_t)(((uint32_t)(x)) << SPT_CS_ERR_INST_ADDR_ERROR_INST_ADDR_SHIFT)) & SPT_CS_ERR_INST_ADDR_ERROR_INST_ADDR_MASK)
/*! @} */

/*! @name CS_ERR_INST0 - MCS Error Instruction 0 Register */
/*! @{ */
#define SPT_CS_ERR_INST0_ERR_INST_31_0_MASK      (0xFFFFFFFFU)
#define SPT_CS_ERR_INST0_ERR_INST_31_0_SHIFT     (0U)
#define SPT_CS_ERR_INST0_ERR_INST_31_0_WIDTH     (32U)
#define SPT_CS_ERR_INST0_ERR_INST_31_0(x)        (((uint32_t)(((uint32_t)(x)) << SPT_CS_ERR_INST0_ERR_INST_31_0_SHIFT)) & SPT_CS_ERR_INST0_ERR_INST_31_0_MASK)
/*! @} */

/*! @name CS_ERR_INST1 - MCS Error Instruction 1 Register */
/*! @{ */
#define SPT_CS_ERR_INST1_ERR_INST_63_32_MASK     (0xFFFFFFFFU)
#define SPT_CS_ERR_INST1_ERR_INST_63_32_SHIFT    (0U)
#define SPT_CS_ERR_INST1_ERR_INST_63_32_WIDTH    (32U)
#define SPT_CS_ERR_INST1_ERR_INST_63_32(x)       (((uint32_t)(((uint32_t)(x)) << SPT_CS_ERR_INST1_ERR_INST_63_32_SHIFT)) & SPT_CS_ERR_INST1_ERR_INST_63_32_MASK)
/*! @} */

/*! @name CS_ERR_INST2 - MCS Error Instruction 2 Register */
/*! @{ */
#define SPT_CS_ERR_INST2_ERR_INST_95_64_MASK     (0xFFFFFFFFU)
#define SPT_CS_ERR_INST2_ERR_INST_95_64_SHIFT    (0U)
#define SPT_CS_ERR_INST2_ERR_INST_95_64_WIDTH    (32U)
#define SPT_CS_ERR_INST2_ERR_INST_95_64(x)       (((uint32_t)(((uint32_t)(x)) << SPT_CS_ERR_INST2_ERR_INST_95_64_SHIFT)) & SPT_CS_ERR_INST2_ERR_INST_95_64_MASK)
/*! @} */

/*! @name CS_ERR_INST3 - MCS Error Instruction 3 Register */
/*! @{ */
#define SPT_CS_ERR_INST3_ERR_INST_127_96_MASK    (0xFFFFFFFFU)
#define SPT_CS_ERR_INST3_ERR_INST_127_96_SHIFT   (0U)
#define SPT_CS_ERR_INST3_ERR_INST_127_96_WIDTH   (32U)
#define SPT_CS_ERR_INST3_ERR_INST_127_96(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_ERR_INST3_ERR_INST_127_96_SHIFT)) & SPT_CS_ERR_INST3_ERR_INST_127_96_MASK)
/*! @} */

/*! @name CS_STATUS0 - MCS General Status 0 Register */
/*! @{ */
#define SPT_CS_STATUS0_PS_START_MASK             (0x1U)
#define SPT_CS_STATUS0_PS_START_SHIFT            (0U)
#define SPT_CS_STATUS0_PS_START_WIDTH            (1U)
#define SPT_CS_STATUS0_PS_START(x)               (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_PS_START_SHIFT)) & SPT_CS_STATUS0_PS_START_MASK)
#define SPT_CS_STATUS0_PS_WAIT_MASK              (0x2U)
#define SPT_CS_STATUS0_PS_WAIT_SHIFT             (1U)
#define SPT_CS_STATUS0_PS_WAIT_WIDTH             (1U)
#define SPT_CS_STATUS0_PS_WAIT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_PS_WAIT_SHIFT)) & SPT_CS_STATUS0_PS_WAIT_MASK)
#define SPT_CS_STATUS0_PS_DEBUG_MASK             (0x4U)
#define SPT_CS_STATUS0_PS_DEBUG_SHIFT            (2U)
#define SPT_CS_STATUS0_PS_DEBUG_WIDTH            (1U)
#define SPT_CS_STATUS0_PS_DEBUG(x)               (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_PS_DEBUG_SHIFT)) & SPT_CS_STATUS0_PS_DEBUG_MASK)
#define SPT_CS_STATUS0_PS_STOP_MASK              (0x8U)
#define SPT_CS_STATUS0_PS_STOP_SHIFT             (3U)
#define SPT_CS_STATUS0_PS_STOP_WIDTH             (1U)
#define SPT_CS_STATUS0_PS_STOP(x)                (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_PS_STOP_SHIFT)) & SPT_CS_STATUS0_PS_STOP_MASK)
#define SPT_CS_STATUS0_PS_ASYNCSTOP_MASK         (0x10U)
#define SPT_CS_STATUS0_PS_ASYNCSTOP_SHIFT        (4U)
#define SPT_CS_STATUS0_PS_ASYNCSTOP_WIDTH        (1U)
#define SPT_CS_STATUS0_PS_ASYNCSTOP(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_PS_ASYNCSTOP_SHIFT)) & SPT_CS_STATUS0_PS_ASYNCSTOP_MASK)
#define SPT_CS_STATUS0_PS_RUN_MASK               (0x20U)
#define SPT_CS_STATUS0_PS_RUN_SHIFT              (5U)
#define SPT_CS_STATUS0_PS_RUN_WIDTH              (1U)
#define SPT_CS_STATUS0_PS_RUN(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_PS_RUN_SHIFT)) & SPT_CS_STATUS0_PS_RUN_MASK)
#define SPT_CS_STATUS0_MD_HALT_MASK              (0x40U)
#define SPT_CS_STATUS0_MD_HALT_SHIFT             (6U)
#define SPT_CS_STATUS0_MD_HALT_WIDTH             (1U)
#define SPT_CS_STATUS0_MD_HALT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_MD_HALT_SHIFT)) & SPT_CS_STATUS0_MD_HALT_MASK)
#define SPT_CS_STATUS0_MD_STEP_ONCE_MASK         (0x80U)
#define SPT_CS_STATUS0_MD_STEP_ONCE_SHIFT        (7U)
#define SPT_CS_STATUS0_MD_STEP_ONCE_WIDTH        (1U)
#define SPT_CS_STATUS0_MD_STEP_ONCE(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_MD_STEP_ONCE_SHIFT)) & SPT_CS_STATUS0_MD_STEP_ONCE_MASK)
#define SPT_CS_STATUS0_MD_STEP_JUMP_MASK         (0x100U)
#define SPT_CS_STATUS0_MD_STEP_JUMP_SHIFT        (8U)
#define SPT_CS_STATUS0_MD_STEP_JUMP_WIDTH        (1U)
#define SPT_CS_STATUS0_MD_STEP_JUMP(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_MD_STEP_JUMP_SHIFT)) & SPT_CS_STATUS0_MD_STEP_JUMP_MASK)
#define SPT_CS_STATUS0_MD_JAM_MASK               (0x200U)
#define SPT_CS_STATUS0_MD_JAM_SHIFT              (9U)
#define SPT_CS_STATUS0_MD_JAM_WIDTH              (1U)
#define SPT_CS_STATUS0_MD_JAM(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_MD_JAM_SHIFT)) & SPT_CS_STATUS0_MD_JAM_MASK)
#define SPT_CS_STATUS0_STEP_ONCE_OVR_MASK        (0x400U)
#define SPT_CS_STATUS0_STEP_ONCE_OVR_SHIFT       (10U)
#define SPT_CS_STATUS0_STEP_ONCE_OVR_WIDTH       (1U)
#define SPT_CS_STATUS0_STEP_ONCE_OVR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_STEP_ONCE_OVR_SHIFT)) & SPT_CS_STATUS0_STEP_ONCE_OVR_MASK)
#define SPT_CS_STATUS0_STEP_JUMP_OVR_MASK        (0x800U)
#define SPT_CS_STATUS0_STEP_JUMP_OVR_SHIFT       (11U)
#define SPT_CS_STATUS0_STEP_JUMP_OVR_WIDTH       (1U)
#define SPT_CS_STATUS0_STEP_JUMP_OVR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_STEP_JUMP_OVR_SHIFT)) & SPT_CS_STATUS0_STEP_JUMP_OVR_MASK)
#define SPT_CS_STATUS0_JAM_OVR_MASK              (0x1000U)
#define SPT_CS_STATUS0_JAM_OVR_SHIFT             (12U)
#define SPT_CS_STATUS0_JAM_OVR_WIDTH             (1U)
#define SPT_CS_STATUS0_JAM_OVR(x)                (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_JAM_OVR_SHIFT)) & SPT_CS_STATUS0_JAM_OVR_MASK)
#define SPT_CS_STATUS0_BKPT0_OCC_MASK            (0x2000U)
#define SPT_CS_STATUS0_BKPT0_OCC_SHIFT           (13U)
#define SPT_CS_STATUS0_BKPT0_OCC_WIDTH           (1U)
#define SPT_CS_STATUS0_BKPT0_OCC(x)              (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_BKPT0_OCC_SHIFT)) & SPT_CS_STATUS0_BKPT0_OCC_MASK)
#define SPT_CS_STATUS0_BKPT1_OCC_MASK            (0x4000U)
#define SPT_CS_STATUS0_BKPT1_OCC_SHIFT           (14U)
#define SPT_CS_STATUS0_BKPT1_OCC_WIDTH           (1U)
#define SPT_CS_STATUS0_BKPT1_OCC(x)              (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_BKPT1_OCC_SHIFT)) & SPT_CS_STATUS0_BKPT1_OCC_MASK)
#define SPT_CS_STATUS0_BKPT2_OCC_MASK            (0x8000U)
#define SPT_CS_STATUS0_BKPT2_OCC_SHIFT           (15U)
#define SPT_CS_STATUS0_BKPT2_OCC_WIDTH           (1U)
#define SPT_CS_STATUS0_BKPT2_OCC(x)              (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_BKPT2_OCC_SHIFT)) & SPT_CS_STATUS0_BKPT2_OCC_MASK)
#define SPT_CS_STATUS0_BKPT3_OCC_MASK            (0x10000U)
#define SPT_CS_STATUS0_BKPT3_OCC_SHIFT           (16U)
#define SPT_CS_STATUS0_BKPT3_OCC_WIDTH           (1U)
#define SPT_CS_STATUS0_BKPT3_OCC(x)              (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_BKPT3_OCC_SHIFT)) & SPT_CS_STATUS0_BKPT3_OCC_MASK)
#define SPT_CS_STATUS0_WD_ZERO_MASK              (0x80000000U)
#define SPT_CS_STATUS0_WD_ZERO_SHIFT             (31U)
#define SPT_CS_STATUS0_WD_ZERO_WIDTH             (1U)
#define SPT_CS_STATUS0_WD_ZERO(x)                (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS0_WD_ZERO_SHIFT)) & SPT_CS_STATUS0_WD_ZERO_MASK)
/*! @} */

/*! @name CS_STATUS1 - MCS General Status 1 Register */
/*! @{ */
#define SPT_CS_STATUS1_ILL_OPCODE_MASK           (0x1U)
#define SPT_CS_STATUS1_ILL_OPCODE_SHIFT          (0U)
#define SPT_CS_STATUS1_ILL_OPCODE_WIDTH          (1U)
#define SPT_CS_STATUS1_ILL_OPCODE(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_ILL_OPCODE_SHIFT)) & SPT_CS_STATUS1_ILL_OPCODE_MASK)
#define SPT_CS_STATUS1_ILL_LOOP_MASK             (0x2U)
#define SPT_CS_STATUS1_ILL_LOOP_SHIFT            (1U)
#define SPT_CS_STATUS1_ILL_LOOP_WIDTH            (1U)
#define SPT_CS_STATUS1_ILL_LOOP(x)               (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_ILL_LOOP_SHIFT)) & SPT_CS_STATUS1_ILL_LOOP_MASK)
#define SPT_CS_STATUS1_ILL_0CNTLOOP_MASK         (0x4U)
#define SPT_CS_STATUS1_ILL_0CNTLOOP_SHIFT        (2U)
#define SPT_CS_STATUS1_ILL_0CNTLOOP_WIDTH        (1U)
#define SPT_CS_STATUS1_ILL_0CNTLOOP(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_ILL_0CNTLOOP_SHIFT)) & SPT_CS_STATUS1_ILL_0CNTLOOP_MASK)
#define SPT_CS_STATUS1_ILL_NEXT_MASK             (0x8U)
#define SPT_CS_STATUS1_ILL_NEXT_SHIFT            (3U)
#define SPT_CS_STATUS1_ILL_NEXT_WIDTH            (1U)
#define SPT_CS_STATUS1_ILL_NEXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_ILL_NEXT_SHIFT)) & SPT_CS_STATUS1_ILL_NEXT_MASK)
#define SPT_CS_STATUS1_ILL_SET_MASK              (0x10U)
#define SPT_CS_STATUS1_ILL_SET_SHIFT             (4U)
#define SPT_CS_STATUS1_ILL_SET_WIDTH             (1U)
#define SPT_CS_STATUS1_ILL_SET(x)                (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_ILL_SET_SHIFT)) & SPT_CS_STATUS1_ILL_SET_MASK)
#define SPT_CS_STATUS1_ILL_GET_MASK              (0x20U)
#define SPT_CS_STATUS1_ILL_GET_SHIFT             (5U)
#define SPT_CS_STATUS1_ILL_GET_WIDTH             (1U)
#define SPT_CS_STATUS1_ILL_GET(x)                (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_ILL_GET_SHIFT)) & SPT_CS_STATUS1_ILL_GET_MASK)
#define SPT_CS_STATUS1_ILL_ADD_MASK              (0x40U)
#define SPT_CS_STATUS1_ILL_ADD_SHIFT             (6U)
#define SPT_CS_STATUS1_ILL_ADD_WIDTH             (1U)
#define SPT_CS_STATUS1_ILL_ADD(x)                (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_ILL_ADD_SHIFT)) & SPT_CS_STATUS1_ILL_ADD_MASK)
#define SPT_CS_STATUS1_JAM_ILL_OPCODE_MASK       (0x80U)
#define SPT_CS_STATUS1_JAM_ILL_OPCODE_SHIFT      (7U)
#define SPT_CS_STATUS1_JAM_ILL_OPCODE_WIDTH      (1U)
#define SPT_CS_STATUS1_JAM_ILL_OPCODE(x)         (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_JAM_ILL_OPCODE_SHIFT)) & SPT_CS_STATUS1_JAM_ILL_OPCODE_MASK)
#define SPT_CS_STATUS1_JAM_ILL_SYNC_MASK         (0x100U)
#define SPT_CS_STATUS1_JAM_ILL_SYNC_SHIFT        (8U)
#define SPT_CS_STATUS1_JAM_ILL_SYNC_WIDTH        (1U)
#define SPT_CS_STATUS1_JAM_ILL_SYNC(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_JAM_ILL_SYNC_SHIFT)) & SPT_CS_STATUS1_JAM_ILL_SYNC_MASK)
#define SPT_CS_STATUS1_JAM_ILL_LOOP_MASK         (0x200U)
#define SPT_CS_STATUS1_JAM_ILL_LOOP_SHIFT        (9U)
#define SPT_CS_STATUS1_JAM_ILL_LOOP_WIDTH        (1U)
#define SPT_CS_STATUS1_JAM_ILL_LOOP(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_JAM_ILL_LOOP_SHIFT)) & SPT_CS_STATUS1_JAM_ILL_LOOP_MASK)
#define SPT_CS_STATUS1_JAM_ILL_NEXT_MASK         (0x400U)
#define SPT_CS_STATUS1_JAM_ILL_NEXT_SHIFT        (10U)
#define SPT_CS_STATUS1_JAM_ILL_NEXT_WIDTH        (1U)
#define SPT_CS_STATUS1_JAM_ILL_NEXT(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_JAM_ILL_NEXT_SHIFT)) & SPT_CS_STATUS1_JAM_ILL_NEXT_MASK)
#define SPT_CS_STATUS1_JAM_ILL_JUMP_MASK         (0x800U)
#define SPT_CS_STATUS1_JAM_ILL_JUMP_SHIFT        (11U)
#define SPT_CS_STATUS1_JAM_ILL_JUMP_WIDTH        (1U)
#define SPT_CS_STATUS1_JAM_ILL_JUMP(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS1_JAM_ILL_JUMP_SHIFT)) & SPT_CS_STATUS1_JAM_ILL_JUMP_MASK)
/*! @} */

/*! @name CS_STATUS2 - MCS General Status2 Register */
/*! @{ */
#define SPT_CS_STATUS2_WAITREG_SW_MASK           (0xFFFFU)
#define SPT_CS_STATUS2_WAITREG_SW_SHIFT          (0U)
#define SPT_CS_STATUS2_WAITREG_SW_WIDTH          (16U)
#define SPT_CS_STATUS2_WAITREG_SW(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS2_WAITREG_SW_SHIFT)) & SPT_CS_STATUS2_WAITREG_SW_MASK)
#define SPT_CS_STATUS2_WAITREG_EVT_NUMBER_MASK   (0x7F0000U)
#define SPT_CS_STATUS2_WAITREG_EVT_NUMBER_SHIFT  (16U)
#define SPT_CS_STATUS2_WAITREG_EVT_NUMBER_WIDTH  (7U)
#define SPT_CS_STATUS2_WAITREG_EVT_NUMBER(x)     (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS2_WAITREG_EVT_NUMBER_SHIFT)) & SPT_CS_STATUS2_WAITREG_EVT_NUMBER_MASK)
#define SPT_CS_STATUS2_WAITREG_EVT_TYPE_MASK     (0x60000000U)
#define SPT_CS_STATUS2_WAITREG_EVT_TYPE_SHIFT    (29U)
#define SPT_CS_STATUS2_WAITREG_EVT_TYPE_WIDTH    (2U)
#define SPT_CS_STATUS2_WAITREG_EVT_TYPE(x)       (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS2_WAITREG_EVT_TYPE_SHIFT)) & SPT_CS_STATUS2_WAITREG_EVT_TYPE_MASK)
#define SPT_CS_STATUS2_WAITREG_TR_MASK           (0x80000000U)
#define SPT_CS_STATUS2_WAITREG_TR_SHIFT          (31U)
#define SPT_CS_STATUS2_WAITREG_TR_WIDTH          (1U)
#define SPT_CS_STATUS2_WAITREG_TR(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS2_WAITREG_TR_SHIFT)) & SPT_CS_STATUS2_WAITREG_TR_MASK)
/*! @} */

/*! @name CS_STATUS3 - MCS General Status 3 Register */
/*! @{ */
#define SPT_CS_STATUS3_LOOP_DEPTH_MASK           (0x7U)
#define SPT_CS_STATUS3_LOOP_DEPTH_SHIFT          (0U)
#define SPT_CS_STATUS3_LOOP_DEPTH_WIDTH          (3U)
#define SPT_CS_STATUS3_LOOP_DEPTH(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS3_LOOP_DEPTH_SHIFT)) & SPT_CS_STATUS3_LOOP_DEPTH_MASK)
#define SPT_CS_STATUS3_PROC_STATE_MASK           (0x78U)
#define SPT_CS_STATUS3_PROC_STATE_SHIFT          (3U)
#define SPT_CS_STATUS3_PROC_STATE_WIDTH          (4U)
#define SPT_CS_STATUS3_PROC_STATE(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CS_STATUS3_PROC_STATE_SHIFT)) & SPT_CS_STATUS3_PROC_STATE_MASK)
/*! @} */

/*! @name CS_EVTREG1 - EVT1 Status Register */
/*! @{ */
#define SPT_CS_EVTREG1_EVTREG1_MASK              (0xFFFFFFFFU)
#define SPT_CS_EVTREG1_EVTREG1_SHIFT             (0U)
#define SPT_CS_EVTREG1_EVTREG1_WIDTH             (32U)
#define SPT_CS_EVTREG1_EVTREG1(x)                (((uint32_t)(((uint32_t)(x)) << SPT_CS_EVTREG1_EVTREG1_SHIFT)) & SPT_CS_EVTREG1_EVTREG1_MASK)
/*! @} */

/*! @name CS_SW_EVTREG - SW Event Trigger Register */
/*! @{ */
#define SPT_CS_SW_EVTREG_SW_EVTREG_MASK          (0xFFFFU)
#define SPT_CS_SW_EVTREG_SW_EVTREG_SHIFT         (0U)
#define SPT_CS_SW_EVTREG_SW_EVTREG_WIDTH         (16U)
#define SPT_CS_SW_EVTREG_SW_EVTREG(x)            (((uint32_t)(((uint32_t)(x)) << SPT_CS_SW_EVTREG_SW_EVTREG_SHIFT)) & SPT_CS_SW_EVTREG_SW_EVTREG_MASK)
/*! @} */

/*! @name CS_CHRP_CNTR_RST - External Events Chirp Counter Reset Mapping Register */
/*! @{ */
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_0_MASK (0xFU)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_0_SHIFT (0U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_0_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_0(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_0_SHIFT)) & SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_0_MASK)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_1_MASK (0xF0U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_1_SHIFT (4U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_1_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_1(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_1_SHIFT)) & SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_1_MASK)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_2_MASK (0xF00U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_2_SHIFT (8U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_2_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_2(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_2_SHIFT)) & SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_2_MASK)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_3_MASK (0xF000U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_3_SHIFT (12U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_3_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_3(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_3_SHIFT)) & SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_3_MASK)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_4_MASK (0xF0000U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_4_SHIFT (16U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_4_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_4(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_4_SHIFT)) & SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_4_MASK)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_5_MASK (0xF00000U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_5_SHIFT (20U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_5_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_5(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_5_SHIFT)) & SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_5_MASK)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_6_MASK (0xF000000U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_6_SHIFT (24U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_6_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_6(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_6_SHIFT)) & SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_6_MASK)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_7_MASK (0xF0000000U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_7_SHIFT (28U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_7_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_7(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_7_SHIFT)) & SPT_CS_CHRP_CNTR_RST_RST_CHRP_CNT_EVT_7_MASK)
/*! @} */

/*! @name CS_CHRP_CNTR_LD - External Events Chirp Counter Load Mapping Register */
/*! @{ */
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_0_MASK (0xFU)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_0_SHIFT (0U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_0_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_0(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_0_SHIFT)) & SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_0_MASK)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_1_MASK (0xF0U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_1_SHIFT (4U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_1_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_1(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_1_SHIFT)) & SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_1_MASK)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_2_MASK (0xF00U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_2_SHIFT (8U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_2_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_2(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_2_SHIFT)) & SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_2_MASK)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_3_MASK (0xF000U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_3_SHIFT (12U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_3_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_3(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_3_SHIFT)) & SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_3_MASK)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_4_MASK (0xF0000U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_4_SHIFT (16U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_4_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_4(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_4_SHIFT)) & SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_4_MASK)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_5_MASK (0xF00000U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_5_SHIFT (20U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_5_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_5(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_5_SHIFT)) & SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_5_MASK)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_6_MASK (0xF000000U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_6_SHIFT (24U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_6_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_6(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_6_SHIFT)) & SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_6_MASK)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_7_MASK (0xF0000000U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_7_SHIFT (28U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_7_WIDTH (4U)
#define SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_7(x) (((uint32_t)(((uint32_t)(x)) << SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_7_SHIFT)) & SPT_CS_CHRP_CNTR_LD_LOAD_CHRP_CNT_EVT_7_MASK)
/*! @} */

/*! @name CS_INTEN0 - Interrupt Enable Register 0 */
/*! @{ */
#define SPT_CS_INTEN0_PS_START_INTEN_MASK        (0x1U)
#define SPT_CS_INTEN0_PS_START_INTEN_SHIFT       (0U)
#define SPT_CS_INTEN0_PS_START_INTEN_WIDTH       (1U)
#define SPT_CS_INTEN0_PS_START_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_PS_START_INTEN_SHIFT)) & SPT_CS_INTEN0_PS_START_INTEN_MASK)
#define SPT_CS_INTEN0_PS_WAIT_INTEN_MASK         (0x2U)
#define SPT_CS_INTEN0_PS_WAIT_INTEN_SHIFT        (1U)
#define SPT_CS_INTEN0_PS_WAIT_INTEN_WIDTH        (1U)
#define SPT_CS_INTEN0_PS_WAIT_INTEN(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_PS_WAIT_INTEN_SHIFT)) & SPT_CS_INTEN0_PS_WAIT_INTEN_MASK)
#define SPT_CS_INTEN0_PS_DEBUG_INTEN_MASK        (0x4U)
#define SPT_CS_INTEN0_PS_DEBUG_INTEN_SHIFT       (2U)
#define SPT_CS_INTEN0_PS_DEBUG_INTEN_WIDTH       (1U)
#define SPT_CS_INTEN0_PS_DEBUG_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_PS_DEBUG_INTEN_SHIFT)) & SPT_CS_INTEN0_PS_DEBUG_INTEN_MASK)
#define SPT_CS_INTEN0_PS_STOP_INTEN_MASK         (0x8U)
#define SPT_CS_INTEN0_PS_STOP_INTEN_SHIFT        (3U)
#define SPT_CS_INTEN0_PS_STOP_INTEN_WIDTH        (1U)
#define SPT_CS_INTEN0_PS_STOP_INTEN(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_PS_STOP_INTEN_SHIFT)) & SPT_CS_INTEN0_PS_STOP_INTEN_MASK)
#define SPT_CS_INTEN0_PS_ASYNCSTOP_INTEN_MASK    (0x10U)
#define SPT_CS_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT   (4U)
#define SPT_CS_INTEN0_PS_ASYNCSTOP_INTEN_WIDTH   (1U)
#define SPT_CS_INTEN0_PS_ASYNCSTOP_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT)) & SPT_CS_INTEN0_PS_ASYNCSTOP_INTEN_MASK)
#define SPT_CS_INTEN0_PS_RUN_INTEN_MASK          (0x20U)
#define SPT_CS_INTEN0_PS_RUN_INTEN_SHIFT         (5U)
#define SPT_CS_INTEN0_PS_RUN_INTEN_WIDTH         (1U)
#define SPT_CS_INTEN0_PS_RUN_INTEN(x)            (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_PS_RUN_INTEN_SHIFT)) & SPT_CS_INTEN0_PS_RUN_INTEN_MASK)
#define SPT_CS_INTEN0_MD_HALT_INTEN_MASK         (0x40U)
#define SPT_CS_INTEN0_MD_HALT_INTEN_SHIFT        (6U)
#define SPT_CS_INTEN0_MD_HALT_INTEN_WIDTH        (1U)
#define SPT_CS_INTEN0_MD_HALT_INTEN(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_MD_HALT_INTEN_SHIFT)) & SPT_CS_INTEN0_MD_HALT_INTEN_MASK)
#define SPT_CS_INTEN0_MD_STEP_ONCE_INTEN_MASK    (0x80U)
#define SPT_CS_INTEN0_MD_STEP_ONCE_INTEN_SHIFT   (7U)
#define SPT_CS_INTEN0_MD_STEP_ONCE_INTEN_WIDTH   (1U)
#define SPT_CS_INTEN0_MD_STEP_ONCE_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_MD_STEP_ONCE_INTEN_SHIFT)) & SPT_CS_INTEN0_MD_STEP_ONCE_INTEN_MASK)
#define SPT_CS_INTEN0_MD_STEP_JUMP_INTEN_MASK    (0x100U)
#define SPT_CS_INTEN0_MD_STEP_JUMP_INTEN_SHIFT   (8U)
#define SPT_CS_INTEN0_MD_STEP_JUMP_INTEN_WIDTH   (1U)
#define SPT_CS_INTEN0_MD_STEP_JUMP_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_MD_STEP_JUMP_INTEN_SHIFT)) & SPT_CS_INTEN0_MD_STEP_JUMP_INTEN_MASK)
#define SPT_CS_INTEN0_MD_JAM_INTEN_MASK          (0x200U)
#define SPT_CS_INTEN0_MD_JAM_INTEN_SHIFT         (9U)
#define SPT_CS_INTEN0_MD_JAM_INTEN_WIDTH         (1U)
#define SPT_CS_INTEN0_MD_JAM_INTEN(x)            (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_MD_JAM_INTEN_SHIFT)) & SPT_CS_INTEN0_MD_JAM_INTEN_MASK)
#define SPT_CS_INTEN0_STEP_ONCE_OVR_INTEN_MASK   (0x400U)
#define SPT_CS_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT  (10U)
#define SPT_CS_INTEN0_STEP_ONCE_OVR_INTEN_WIDTH  (1U)
#define SPT_CS_INTEN0_STEP_ONCE_OVR_INTEN(x)     (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT)) & SPT_CS_INTEN0_STEP_ONCE_OVR_INTEN_MASK)
#define SPT_CS_INTEN0_STEP_JUMP_OVR_INTEN_MASK   (0x800U)
#define SPT_CS_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT  (11U)
#define SPT_CS_INTEN0_STEP_JUMP_OVR_INTEN_WIDTH  (1U)
#define SPT_CS_INTEN0_STEP_JUMP_OVR_INTEN(x)     (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT)) & SPT_CS_INTEN0_STEP_JUMP_OVR_INTEN_MASK)
#define SPT_CS_INTEN0_JAM_OVR_INTEN_MASK         (0x1000U)
#define SPT_CS_INTEN0_JAM_OVR_INTEN_SHIFT        (12U)
#define SPT_CS_INTEN0_JAM_OVR_INTEN_WIDTH        (1U)
#define SPT_CS_INTEN0_JAM_OVR_INTEN(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_JAM_OVR_INTEN_SHIFT)) & SPT_CS_INTEN0_JAM_OVR_INTEN_MASK)
#define SPT_CS_INTEN0_BKPT0_OCC_INTEN_MASK       (0x2000U)
#define SPT_CS_INTEN0_BKPT0_OCC_INTEN_SHIFT      (13U)
#define SPT_CS_INTEN0_BKPT0_OCC_INTEN_WIDTH      (1U)
#define SPT_CS_INTEN0_BKPT0_OCC_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_BKPT0_OCC_INTEN_SHIFT)) & SPT_CS_INTEN0_BKPT0_OCC_INTEN_MASK)
#define SPT_CS_INTEN0_BKPT1_OCC_INTEN_MASK       (0x4000U)
#define SPT_CS_INTEN0_BKPT1_OCC_INTEN_SHIFT      (14U)
#define SPT_CS_INTEN0_BKPT1_OCC_INTEN_WIDTH      (1U)
#define SPT_CS_INTEN0_BKPT1_OCC_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_BKPT1_OCC_INTEN_SHIFT)) & SPT_CS_INTEN0_BKPT1_OCC_INTEN_MASK)
#define SPT_CS_INTEN0_BKPT2_OCC_INTEN_MASK       (0x8000U)
#define SPT_CS_INTEN0_BKPT2_OCC_INTEN_SHIFT      (15U)
#define SPT_CS_INTEN0_BKPT2_OCC_INTEN_WIDTH      (1U)
#define SPT_CS_INTEN0_BKPT2_OCC_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_BKPT2_OCC_INTEN_SHIFT)) & SPT_CS_INTEN0_BKPT2_OCC_INTEN_MASK)
#define SPT_CS_INTEN0_BKPT3_OCC_INTEN_MASK       (0x10000U)
#define SPT_CS_INTEN0_BKPT3_OCC_INTEN_SHIFT      (16U)
#define SPT_CS_INTEN0_BKPT3_OCC_INTEN_WIDTH      (1U)
#define SPT_CS_INTEN0_BKPT3_OCC_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_BKPT3_OCC_INTEN_SHIFT)) & SPT_CS_INTEN0_BKPT3_OCC_INTEN_MASK)
#define SPT_CS_INTEN0_WD_ZERO_INTEN_MASK         (0x80000000U)
#define SPT_CS_INTEN0_WD_ZERO_INTEN_SHIFT        (31U)
#define SPT_CS_INTEN0_WD_ZERO_INTEN_WIDTH        (1U)
#define SPT_CS_INTEN0_WD_ZERO_INTEN(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN0_WD_ZERO_INTEN_SHIFT)) & SPT_CS_INTEN0_WD_ZERO_INTEN_MASK)
/*! @} */

/*! @name CS_INTEN1 - Interrupt Enable Register 1 */
/*! @{ */
#define SPT_CS_INTEN1_ILL_OPCODE_INTEN_MASK      (0x1U)
#define SPT_CS_INTEN1_ILL_OPCODE_INTEN_SHIFT     (0U)
#define SPT_CS_INTEN1_ILL_OPCODE_INTEN_WIDTH     (1U)
#define SPT_CS_INTEN1_ILL_OPCODE_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_ILL_OPCODE_INTEN_SHIFT)) & SPT_CS_INTEN1_ILL_OPCODE_INTEN_MASK)
#define SPT_CS_INTEN1_ILL_LOOP_INTEN_MASK        (0x2U)
#define SPT_CS_INTEN1_ILL_LOOP_INTEN_SHIFT       (1U)
#define SPT_CS_INTEN1_ILL_LOOP_INTEN_WIDTH       (1U)
#define SPT_CS_INTEN1_ILL_LOOP_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_ILL_LOOP_INTEN_SHIFT)) & SPT_CS_INTEN1_ILL_LOOP_INTEN_MASK)
#define SPT_CS_INTEN1_ILL_0CNTLOOP_INTEN_MASK    (0x4U)
#define SPT_CS_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT   (2U)
#define SPT_CS_INTEN1_ILL_0CNTLOOP_INTEN_WIDTH   (1U)
#define SPT_CS_INTEN1_ILL_0CNTLOOP_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT)) & SPT_CS_INTEN1_ILL_0CNTLOOP_INTEN_MASK)
#define SPT_CS_INTEN1_ILL_NEXT_INTEN_MASK        (0x8U)
#define SPT_CS_INTEN1_ILL_NEXT_INTEN_SHIFT       (3U)
#define SPT_CS_INTEN1_ILL_NEXT_INTEN_WIDTH       (1U)
#define SPT_CS_INTEN1_ILL_NEXT_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_ILL_NEXT_INTEN_SHIFT)) & SPT_CS_INTEN1_ILL_NEXT_INTEN_MASK)
#define SPT_CS_INTEN1_ILL_SET_INTEN_MASK         (0x10U)
#define SPT_CS_INTEN1_ILL_SET_INTEN_SHIFT        (4U)
#define SPT_CS_INTEN1_ILL_SET_INTEN_WIDTH        (1U)
#define SPT_CS_INTEN1_ILL_SET_INTEN(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_ILL_SET_INTEN_SHIFT)) & SPT_CS_INTEN1_ILL_SET_INTEN_MASK)
#define SPT_CS_INTEN1_ILL_GET_INTEN_MASK         (0x20U)
#define SPT_CS_INTEN1_ILL_GET_INTEN_SHIFT        (5U)
#define SPT_CS_INTEN1_ILL_GET_INTEN_WIDTH        (1U)
#define SPT_CS_INTEN1_ILL_GET_INTEN(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_ILL_GET_INTEN_SHIFT)) & SPT_CS_INTEN1_ILL_GET_INTEN_MASK)
#define SPT_CS_INTEN1_ILL_ADD_INTEN_MASK         (0x40U)
#define SPT_CS_INTEN1_ILL_ADD_INTEN_SHIFT        (6U)
#define SPT_CS_INTEN1_ILL_ADD_INTEN_WIDTH        (1U)
#define SPT_CS_INTEN1_ILL_ADD_INTEN(x)           (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_ILL_ADD_INTEN_SHIFT)) & SPT_CS_INTEN1_ILL_ADD_INTEN_MASK)
#define SPT_CS_INTEN1_JAM_ILL_OPCODE_INTEN_MASK  (0x80U)
#define SPT_CS_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT (7U)
#define SPT_CS_INTEN1_JAM_ILL_OPCODE_INTEN_WIDTH (1U)
#define SPT_CS_INTEN1_JAM_ILL_OPCODE_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT)) & SPT_CS_INTEN1_JAM_ILL_OPCODE_INTEN_MASK)
#define SPT_CS_INTEN1_JAM_ILL_SYNC_INTEN_MASK    (0x100U)
#define SPT_CS_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT   (8U)
#define SPT_CS_INTEN1_JAM_ILL_SYNC_INTEN_WIDTH   (1U)
#define SPT_CS_INTEN1_JAM_ILL_SYNC_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT)) & SPT_CS_INTEN1_JAM_ILL_SYNC_INTEN_MASK)
#define SPT_CS_INTEN1_JAM_ILL_LOOP_INTEN_MASK    (0x200U)
#define SPT_CS_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT   (9U)
#define SPT_CS_INTEN1_JAM_ILL_LOOP_INTEN_WIDTH   (1U)
#define SPT_CS_INTEN1_JAM_ILL_LOOP_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT)) & SPT_CS_INTEN1_JAM_ILL_LOOP_INTEN_MASK)
#define SPT_CS_INTEN1_JAM_ILL_NEXT_INTEN_MASK    (0x400U)
#define SPT_CS_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT   (10U)
#define SPT_CS_INTEN1_JAM_ILL_NEXT_INTEN_WIDTH   (1U)
#define SPT_CS_INTEN1_JAM_ILL_NEXT_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT)) & SPT_CS_INTEN1_JAM_ILL_NEXT_INTEN_MASK)
#define SPT_CS_INTEN1_JAM_ILL_JUMP_INTEN_MASK    (0x800U)
#define SPT_CS_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT   (11U)
#define SPT_CS_INTEN1_JAM_ILL_JUMP_INTEN_WIDTH   (1U)
#define SPT_CS_INTEN1_JAM_ILL_JUMP_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_CS_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT)) & SPT_CS_INTEN1_JAM_ILL_JUMP_INTEN_MASK)
/*! @} */

/*! @name CS_EVT1_INTEN - EVT1 Interrupt Enable Register */
/*! @{ */
#define SPT_CS_EVT1_INTEN_EVT1_INTEN_MASK        (0xFFFFFFFFU)
#define SPT_CS_EVT1_INTEN_EVT1_INTEN_SHIFT       (0U)
#define SPT_CS_EVT1_INTEN_EVT1_INTEN_WIDTH       (32U)
#define SPT_CS_EVT1_INTEN_EVT1_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CS_EVT1_INTEN_EVT1_INTEN_SHIFT)) & SPT_CS_EVT1_INTEN_EVT1_INTEN_MASK)
/*! @} */

/*! @name DSP_RST_REG - DSP Reset Register */
/*! @{ */
#define SPT_DSP_RST_REG_DSP_RST_MASK             (0x1U)
#define SPT_DSP_RST_REG_DSP_RST_SHIFT            (0U)
#define SPT_DSP_RST_REG_DSP_RST_WIDTH            (1U)
#define SPT_DSP_RST_REG_DSP_RST(x)               (((uint32_t)(((uint32_t)(x)) << SPT_DSP_RST_REG_DSP_RST_SHIFT)) & SPT_DSP_RST_REG_DSP_RST_MASK)
/*! @} */

/*! @name DSP_CONFIG_REG - DSP Configuration Register */
/*! @{ */
#define SPT_DSP_CONFIG_REG_DSP_BOOT_MODE_MASK    (0x1U)
#define SPT_DSP_CONFIG_REG_DSP_BOOT_MODE_SHIFT   (0U)
#define SPT_DSP_CONFIG_REG_DSP_BOOT_MODE_WIDTH   (1U)
#define SPT_DSP_CONFIG_REG_DSP_BOOT_MODE(x)      (((uint32_t)(((uint32_t)(x)) << SPT_DSP_CONFIG_REG_DSP_BOOT_MODE_SHIFT)) & SPT_DSP_CONFIG_REG_DSP_BOOT_MODE_MASK)
#define SPT_DSP_CONFIG_REG_DSP_RUN_STALL_MASK    (0x2U)
#define SPT_DSP_CONFIG_REG_DSP_RUN_STALL_SHIFT   (1U)
#define SPT_DSP_CONFIG_REG_DSP_RUN_STALL_WIDTH   (1U)
#define SPT_DSP_CONFIG_REG_DSP_RUN_STALL(x)      (((uint32_t)(((uint32_t)(x)) << SPT_DSP_CONFIG_REG_DSP_RUN_STALL_SHIFT)) & SPT_DSP_CONFIG_REG_DSP_RUN_STALL_MASK)
#define SPT_DSP_CONFIG_REG_DSP_PROG_COUNT_MASK   (0x3CU)
#define SPT_DSP_CONFIG_REG_DSP_PROG_COUNT_SHIFT  (2U)
#define SPT_DSP_CONFIG_REG_DSP_PROG_COUNT_WIDTH  (4U)
#define SPT_DSP_CONFIG_REG_DSP_PROG_COUNT(x)     (((uint32_t)(((uint32_t)(x)) << SPT_DSP_CONFIG_REG_DSP_PROG_COUNT_SHIFT)) & SPT_DSP_CONFIG_REG_DSP_PROG_COUNT_MASK)
/*! @} */

/*! @name DSP_ERR_INFO_REG - DSP Error Info Register */
/*! @{ */
#define SPT_DSP_ERR_INFO_REG_DSP_ERR_INFO_MASK   (0xFFFFFFFFU)
#define SPT_DSP_ERR_INFO_REG_DSP_ERR_INFO_SHIFT  (0U)
#define SPT_DSP_ERR_INFO_REG_DSP_ERR_INFO_WIDTH  (32U)
#define SPT_DSP_ERR_INFO_REG_DSP_ERR_INFO(x)     (((uint32_t)(((uint32_t)(x)) << SPT_DSP_ERR_INFO_REG_DSP_ERR_INFO_SHIFT)) & SPT_DSP_ERR_INFO_REG_DSP_ERR_INFO_MASK)
/*! @} */

/*! @name DSP_ERR_INFO_INT_EN - DSP Error Info Interrupt Enable Register. */
/*! @{ */
#define SPT_DSP_ERR_INFO_INT_EN_DSP_ERR_INFO_INT_EN_MASK (0x1U)
#define SPT_DSP_ERR_INFO_INT_EN_DSP_ERR_INFO_INT_EN_SHIFT (0U)
#define SPT_DSP_ERR_INFO_INT_EN_DSP_ERR_INFO_INT_EN_WIDTH (1U)
#define SPT_DSP_ERR_INFO_INT_EN_DSP_ERR_INFO_INT_EN(x) (((uint32_t)(((uint32_t)(x)) << SPT_DSP_ERR_INFO_INT_EN_DSP_ERR_INFO_INT_EN_SHIFT)) & SPT_DSP_ERR_INFO_INT_EN_DSP_ERR_INFO_INT_EN_MASK)
/*! @} */

/*! @name DSP_PFAULT_INFO_REG - DSP PFault Info Register */
/*! @{ */
#define SPT_DSP_PFAULT_INFO_REG_DSP_PFAULT_INFO_MASK (0xFFFFFFFFU)
#define SPT_DSP_PFAULT_INFO_REG_DSP_PFAULT_INFO_SHIFT (0U)
#define SPT_DSP_PFAULT_INFO_REG_DSP_PFAULT_INFO_WIDTH (32U)
#define SPT_DSP_PFAULT_INFO_REG_DSP_PFAULT_INFO(x) (((uint32_t)(((uint32_t)(x)) << SPT_DSP_PFAULT_INFO_REG_DSP_PFAULT_INFO_SHIFT)) & SPT_DSP_PFAULT_INFO_REG_DSP_PFAULT_INFO_MASK)
/*! @} */

/*! @name DSP_DEBUG1_REG - DSP Debug Register 1 */
/*! @{ */
#define SPT_DSP_DEBUG1_REG_DSP_DEBUG1_MASK       (0xFFFFFFFFU)
#define SPT_DSP_DEBUG1_REG_DSP_DEBUG1_SHIFT      (0U)
#define SPT_DSP_DEBUG1_REG_DSP_DEBUG1_WIDTH      (32U)
#define SPT_DSP_DEBUG1_REG_DSP_DEBUG1(x)         (((uint32_t)(((uint32_t)(x)) << SPT_DSP_DEBUG1_REG_DSP_DEBUG1_SHIFT)) & SPT_DSP_DEBUG1_REG_DSP_DEBUG1_MASK)
/*! @} */

/*! @name DSP_DEBUG2_REG - DSP Debug Register 2 */
/*! @{ */
#define SPT_DSP_DEBUG2_REG_DSP_DEBUG2_MASK       (0xFFFFFFFFU)
#define SPT_DSP_DEBUG2_REG_DSP_DEBUG2_SHIFT      (0U)
#define SPT_DSP_DEBUG2_REG_DSP_DEBUG2_WIDTH      (32U)
#define SPT_DSP_DEBUG2_REG_DSP_DEBUG2(x)         (((uint32_t)(((uint32_t)(x)) << SPT_DSP_DEBUG2_REG_DSP_DEBUG2_SHIFT)) & SPT_DSP_DEBUG2_REG_DSP_DEBUG2_MASK)
/*! @} */

/*! @name DSP_DEBUG3_REG - DSP Debug Register 3 */
/*! @{ */
#define SPT_DSP_DEBUG3_REG_DSP_DEBUG3_MASK       (0xFFFFFFFFU)
#define SPT_DSP_DEBUG3_REG_DSP_DEBUG3_SHIFT      (0U)
#define SPT_DSP_DEBUG3_REG_DSP_DEBUG3_WIDTH      (32U)
#define SPT_DSP_DEBUG3_REG_DSP_DEBUG3(x)         (((uint32_t)(((uint32_t)(x)) << SPT_DSP_DEBUG3_REG_DSP_DEBUG3_SHIFT)) & SPT_DSP_DEBUG3_REG_DSP_DEBUG3_MASK)
/*! @} */

/*! @name DSP_DEBUG4_REG - DSP Debug Register 4 */
/*! @{ */
#define SPT_DSP_DEBUG4_REG_DSP_DEBUG4_MASK       (0xFFFFFFFFU)
#define SPT_DSP_DEBUG4_REG_DSP_DEBUG4_SHIFT      (0U)
#define SPT_DSP_DEBUG4_REG_DSP_DEBUG4_WIDTH      (32U)
#define SPT_DSP_DEBUG4_REG_DSP_DEBUG4(x)         (((uint32_t)(((uint32_t)(x)) << SPT_DSP_DEBUG4_REG_DSP_DEBUG4_SHIFT)) & SPT_DSP_DEBUG4_REG_DSP_DEBUG4_MASK)
/*! @} */

/*! @name DSP_DEBUG5_REG - DSP Debug Register 5 */
/*! @{ */
#define SPT_DSP_DEBUG5_REG_DSP_DEBUG5_MASK       (0xFFFFFFFFU)
#define SPT_DSP_DEBUG5_REG_DSP_DEBUG5_SHIFT      (0U)
#define SPT_DSP_DEBUG5_REG_DSP_DEBUG5_WIDTH      (32U)
#define SPT_DSP_DEBUG5_REG_DSP_DEBUG5(x)         (((uint32_t)(((uint32_t)(x)) << SPT_DSP_DEBUG5_REG_DSP_DEBUG5_SHIFT)) & SPT_DSP_DEBUG5_REG_DSP_DEBUG5_MASK)
/*! @} */

/*! @name DSP_DEBUG6_REG - DSP Debug Register 6 */
/*! @{ */
#define SPT_DSP_DEBUG6_REG_DSP_DEBUG6_MASK       (0xFFFFFFFFU)
#define SPT_DSP_DEBUG6_REG_DSP_DEBUG6_SHIFT      (0U)
#define SPT_DSP_DEBUG6_REG_DSP_DEBUG6_WIDTH      (32U)
#define SPT_DSP_DEBUG6_REG_DSP_DEBUG6(x)         (((uint32_t)(((uint32_t)(x)) << SPT_DSP_DEBUG6_REG_DSP_DEBUG6_SHIFT)) & SPT_DSP_DEBUG6_REG_DSP_DEBUG6_MASK)
/*! @} */

/*! @name PDMA_LFSR_LOAD_VAL_HIGH - LFSR Load High Value */
/*! @{ */
#define SPT_PDMA_LFSR_LOAD_VAL_HIGH_PDMA_LFSR_LOAD_VAL_HIGH_MASK (0xFFFFFFFFU)
#define SPT_PDMA_LFSR_LOAD_VAL_HIGH_PDMA_LFSR_LOAD_VAL_HIGH_SHIFT (0U)
#define SPT_PDMA_LFSR_LOAD_VAL_HIGH_PDMA_LFSR_LOAD_VAL_HIGH_WIDTH (32U)
#define SPT_PDMA_LFSR_LOAD_VAL_HIGH_PDMA_LFSR_LOAD_VAL_HIGH(x) (((uint32_t)(((uint32_t)(x)) << SPT_PDMA_LFSR_LOAD_VAL_HIGH_PDMA_LFSR_LOAD_VAL_HIGH_SHIFT)) & SPT_PDMA_LFSR_LOAD_VAL_HIGH_PDMA_LFSR_LOAD_VAL_HIGH_MASK)
/*! @} */

/*! @name PDMA_LFSR_LOAD_VAL_LOW - LFSR Load Low Value */
/*! @{ */
#define SPT_PDMA_LFSR_LOAD_VAL_LOW_PDMA_LFSR_LOAD_VAL_LOW_MASK (0xFFFFFFFFU)
#define SPT_PDMA_LFSR_LOAD_VAL_LOW_PDMA_LFSR_LOAD_VAL_LOW_SHIFT (0U)
#define SPT_PDMA_LFSR_LOAD_VAL_LOW_PDMA_LFSR_LOAD_VAL_LOW_WIDTH (32U)
#define SPT_PDMA_LFSR_LOAD_VAL_LOW_PDMA_LFSR_LOAD_VAL_LOW(x) (((uint32_t)(((uint32_t)(x)) << SPT_PDMA_LFSR_LOAD_VAL_LOW_PDMA_LFSR_LOAD_VAL_LOW_SHIFT)) & SPT_PDMA_LFSR_LOAD_VAL_LOW_PDMA_LFSR_LOAD_VAL_LOW_MASK)
/*! @} */

/*! @name PDMA_CONTROL - PDMA Control Register */
/*! @{ */
#define SPT_PDMA_CONTROL_PDMA_LFSR_LOAD_EN_MASK  (0x1U)
#define SPT_PDMA_CONTROL_PDMA_LFSR_LOAD_EN_SHIFT (0U)
#define SPT_PDMA_CONTROL_PDMA_LFSR_LOAD_EN_WIDTH (1U)
#define SPT_PDMA_CONTROL_PDMA_LFSR_LOAD_EN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_PDMA_CONTROL_PDMA_LFSR_LOAD_EN_SHIFT)) & SPT_PDMA_CONTROL_PDMA_LFSR_LOAD_EN_MASK)
/*! @} */

/*! @name PDMA_TRANSFER_COUNT_STATUS - PDMA Transfer Count Status */
/*! @{ */
#define SPT_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK (0xFFFFU)
#define SPT_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT (0U)
#define SPT_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_WIDTH (16U)
#define SPT_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT)) & SPT_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK)
#define SPT_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK (0xFFFF0000U)
#define SPT_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT (16U)
#define SPT_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_WIDTH (16U)
#define SPT_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT)) & SPT_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK)
/*! @} */

/*! @name PDMA_FMTB_EXP_ADDR_STATUS - PDMA formatB Exponent Address status Register */
/*! @{ */
#define SPT_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK (0xFFFFFFFFU)
#define SPT_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT (0U)
#define SPT_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_WIDTH (32U)
#define SPT_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT)) & SPT_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK)
/*! @} */

/*! @name HIST_OVF_STATUS0 - HIST Overflow Status0 Register */
/*! @{ */
#define SPT_HIST_OVF_STATUS0_B0_OVF_MASK         (0x1U)
#define SPT_HIST_OVF_STATUS0_B0_OVF_SHIFT        (0U)
#define SPT_HIST_OVF_STATUS0_B0_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B0_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B0_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B0_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B1_OVF_MASK         (0x2U)
#define SPT_HIST_OVF_STATUS0_B1_OVF_SHIFT        (1U)
#define SPT_HIST_OVF_STATUS0_B1_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B1_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B1_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B1_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B2_OVF_MASK         (0x4U)
#define SPT_HIST_OVF_STATUS0_B2_OVF_SHIFT        (2U)
#define SPT_HIST_OVF_STATUS0_B2_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B2_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B2_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B2_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B3_OVF_MASK         (0x8U)
#define SPT_HIST_OVF_STATUS0_B3_OVF_SHIFT        (3U)
#define SPT_HIST_OVF_STATUS0_B3_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B3_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B3_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B3_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B4_OVF_MASK         (0x10U)
#define SPT_HIST_OVF_STATUS0_B4_OVF_SHIFT        (4U)
#define SPT_HIST_OVF_STATUS0_B4_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B4_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B4_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B4_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B5_OVF_MASK         (0x20U)
#define SPT_HIST_OVF_STATUS0_B5_OVF_SHIFT        (5U)
#define SPT_HIST_OVF_STATUS0_B5_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B5_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B5_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B5_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B6_OVF_MASK         (0x40U)
#define SPT_HIST_OVF_STATUS0_B6_OVF_SHIFT        (6U)
#define SPT_HIST_OVF_STATUS0_B6_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B6_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B6_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B6_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B7_OVF_MASK         (0x80U)
#define SPT_HIST_OVF_STATUS0_B7_OVF_SHIFT        (7U)
#define SPT_HIST_OVF_STATUS0_B7_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B7_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B7_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B7_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B8_OVF_MASK         (0x100U)
#define SPT_HIST_OVF_STATUS0_B8_OVF_SHIFT        (8U)
#define SPT_HIST_OVF_STATUS0_B8_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B8_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B8_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B8_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B9_OVF_MASK         (0x200U)
#define SPT_HIST_OVF_STATUS0_B9_OVF_SHIFT        (9U)
#define SPT_HIST_OVF_STATUS0_B9_OVF_WIDTH        (1U)
#define SPT_HIST_OVF_STATUS0_B9_OVF(x)           (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B9_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B9_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B10_OVF_MASK        (0x400U)
#define SPT_HIST_OVF_STATUS0_B10_OVF_SHIFT       (10U)
#define SPT_HIST_OVF_STATUS0_B10_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B10_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B10_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B10_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B11_OVF_MASK        (0x800U)
#define SPT_HIST_OVF_STATUS0_B11_OVF_SHIFT       (11U)
#define SPT_HIST_OVF_STATUS0_B11_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B11_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B11_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B11_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B12_OVF_MASK        (0x1000U)
#define SPT_HIST_OVF_STATUS0_B12_OVF_SHIFT       (12U)
#define SPT_HIST_OVF_STATUS0_B12_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B12_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B12_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B12_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B13_OVF_MASK        (0x2000U)
#define SPT_HIST_OVF_STATUS0_B13_OVF_SHIFT       (13U)
#define SPT_HIST_OVF_STATUS0_B13_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B13_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B13_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B13_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B14_OVF_MASK        (0x4000U)
#define SPT_HIST_OVF_STATUS0_B14_OVF_SHIFT       (14U)
#define SPT_HIST_OVF_STATUS0_B14_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B14_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B14_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B14_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B15_OVF_MASK        (0x8000U)
#define SPT_HIST_OVF_STATUS0_B15_OVF_SHIFT       (15U)
#define SPT_HIST_OVF_STATUS0_B15_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B15_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B15_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B15_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B16_OVF_MASK        (0x10000U)
#define SPT_HIST_OVF_STATUS0_B16_OVF_SHIFT       (16U)
#define SPT_HIST_OVF_STATUS0_B16_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B16_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B16_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B16_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B17_OVF_MASK        (0x20000U)
#define SPT_HIST_OVF_STATUS0_B17_OVF_SHIFT       (17U)
#define SPT_HIST_OVF_STATUS0_B17_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B17_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B17_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B17_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B18_OVF_MASK        (0x40000U)
#define SPT_HIST_OVF_STATUS0_B18_OVF_SHIFT       (18U)
#define SPT_HIST_OVF_STATUS0_B18_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B18_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B18_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B18_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B19_OVF_MASK        (0x80000U)
#define SPT_HIST_OVF_STATUS0_B19_OVF_SHIFT       (19U)
#define SPT_HIST_OVF_STATUS0_B19_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B19_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B19_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B19_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B20_OVF_MASK        (0x100000U)
#define SPT_HIST_OVF_STATUS0_B20_OVF_SHIFT       (20U)
#define SPT_HIST_OVF_STATUS0_B20_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B20_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B20_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B20_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B21_OVF_MASK        (0x200000U)
#define SPT_HIST_OVF_STATUS0_B21_OVF_SHIFT       (21U)
#define SPT_HIST_OVF_STATUS0_B21_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B21_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B21_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B21_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B22_OVF_MASK        (0x400000U)
#define SPT_HIST_OVF_STATUS0_B22_OVF_SHIFT       (22U)
#define SPT_HIST_OVF_STATUS0_B22_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B22_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B22_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B22_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B23_OVF_MASK        (0x800000U)
#define SPT_HIST_OVF_STATUS0_B23_OVF_SHIFT       (23U)
#define SPT_HIST_OVF_STATUS0_B23_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B23_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B23_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B23_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B24_OVF_MASK        (0x1000000U)
#define SPT_HIST_OVF_STATUS0_B24_OVF_SHIFT       (24U)
#define SPT_HIST_OVF_STATUS0_B24_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B24_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B24_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B24_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B25_OVF_MASK        (0x2000000U)
#define SPT_HIST_OVF_STATUS0_B25_OVF_SHIFT       (25U)
#define SPT_HIST_OVF_STATUS0_B25_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B25_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B25_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B25_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B26_OVF_MASK        (0x4000000U)
#define SPT_HIST_OVF_STATUS0_B26_OVF_SHIFT       (26U)
#define SPT_HIST_OVF_STATUS0_B26_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B26_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B26_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B26_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B27_OVF_MASK        (0x8000000U)
#define SPT_HIST_OVF_STATUS0_B27_OVF_SHIFT       (27U)
#define SPT_HIST_OVF_STATUS0_B27_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B27_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B27_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B27_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B28_OVF_MASK        (0x10000000U)
#define SPT_HIST_OVF_STATUS0_B28_OVF_SHIFT       (28U)
#define SPT_HIST_OVF_STATUS0_B28_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B28_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B28_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B28_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B29_OVF_MASK        (0x20000000U)
#define SPT_HIST_OVF_STATUS0_B29_OVF_SHIFT       (29U)
#define SPT_HIST_OVF_STATUS0_B29_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B29_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B29_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B29_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B30_OVF_MASK        (0x40000000U)
#define SPT_HIST_OVF_STATUS0_B30_OVF_SHIFT       (30U)
#define SPT_HIST_OVF_STATUS0_B30_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B30_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B30_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B30_OVF_MASK)
#define SPT_HIST_OVF_STATUS0_B31_OVF_MASK        (0x80000000U)
#define SPT_HIST_OVF_STATUS0_B31_OVF_SHIFT       (31U)
#define SPT_HIST_OVF_STATUS0_B31_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS0_B31_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS0_B31_OVF_SHIFT)) & SPT_HIST_OVF_STATUS0_B31_OVF_MASK)
/*! @} */

/*! @name HIST_OVF_STATUS1 - HIST Overflow Status1 Register */
/*! @{ */
#define SPT_HIST_OVF_STATUS1_B32_OVF_MASK        (0x1U)
#define SPT_HIST_OVF_STATUS1_B32_OVF_SHIFT       (0U)
#define SPT_HIST_OVF_STATUS1_B32_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B32_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B32_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B32_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B33_OVF_MASK        (0x2U)
#define SPT_HIST_OVF_STATUS1_B33_OVF_SHIFT       (1U)
#define SPT_HIST_OVF_STATUS1_B33_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B33_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B33_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B33_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B34_OVF_MASK        (0x4U)
#define SPT_HIST_OVF_STATUS1_B34_OVF_SHIFT       (2U)
#define SPT_HIST_OVF_STATUS1_B34_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B34_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B34_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B34_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B35_OVF_MASK        (0x8U)
#define SPT_HIST_OVF_STATUS1_B35_OVF_SHIFT       (3U)
#define SPT_HIST_OVF_STATUS1_B35_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B35_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B35_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B35_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B36_OVF_MASK        (0x10U)
#define SPT_HIST_OVF_STATUS1_B36_OVF_SHIFT       (4U)
#define SPT_HIST_OVF_STATUS1_B36_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B36_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B36_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B36_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B37_OVF_MASK        (0x20U)
#define SPT_HIST_OVF_STATUS1_B37_OVF_SHIFT       (5U)
#define SPT_HIST_OVF_STATUS1_B37_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B37_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B37_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B37_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B38_OVF_MASK        (0x40U)
#define SPT_HIST_OVF_STATUS1_B38_OVF_SHIFT       (6U)
#define SPT_HIST_OVF_STATUS1_B38_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B38_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B38_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B38_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B39_OVF_MASK        (0x80U)
#define SPT_HIST_OVF_STATUS1_B39_OVF_SHIFT       (7U)
#define SPT_HIST_OVF_STATUS1_B39_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B39_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B39_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B39_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B40_OVF_MASK        (0x100U)
#define SPT_HIST_OVF_STATUS1_B40_OVF_SHIFT       (8U)
#define SPT_HIST_OVF_STATUS1_B40_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B40_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B40_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B40_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B41_OVF_MASK        (0x200U)
#define SPT_HIST_OVF_STATUS1_B41_OVF_SHIFT       (9U)
#define SPT_HIST_OVF_STATUS1_B41_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B41_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B41_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B41_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B42_OVF_MASK        (0x400U)
#define SPT_HIST_OVF_STATUS1_B42_OVF_SHIFT       (10U)
#define SPT_HIST_OVF_STATUS1_B42_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B42_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B42_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B42_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B43_OVF_MASK        (0x800U)
#define SPT_HIST_OVF_STATUS1_B43_OVF_SHIFT       (11U)
#define SPT_HIST_OVF_STATUS1_B43_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B43_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B43_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B43_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B44_OVF_MASK        (0x1000U)
#define SPT_HIST_OVF_STATUS1_B44_OVF_SHIFT       (12U)
#define SPT_HIST_OVF_STATUS1_B44_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B44_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B44_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B44_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B45_OVF_MASK        (0x2000U)
#define SPT_HIST_OVF_STATUS1_B45_OVF_SHIFT       (13U)
#define SPT_HIST_OVF_STATUS1_B45_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B45_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B45_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B45_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B46_OVF_MASK        (0x4000U)
#define SPT_HIST_OVF_STATUS1_B46_OVF_SHIFT       (14U)
#define SPT_HIST_OVF_STATUS1_B46_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B46_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B46_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B46_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B47_OVF_MASK        (0x8000U)
#define SPT_HIST_OVF_STATUS1_B47_OVF_SHIFT       (15U)
#define SPT_HIST_OVF_STATUS1_B47_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B47_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B47_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B47_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B48_OVF_MASK        (0x10000U)
#define SPT_HIST_OVF_STATUS1_B48_OVF_SHIFT       (16U)
#define SPT_HIST_OVF_STATUS1_B48_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B48_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B48_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B48_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B49_OVF_MASK        (0x20000U)
#define SPT_HIST_OVF_STATUS1_B49_OVF_SHIFT       (17U)
#define SPT_HIST_OVF_STATUS1_B49_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B49_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B49_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B49_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B50_OVF_MASK        (0x40000U)
#define SPT_HIST_OVF_STATUS1_B50_OVF_SHIFT       (18U)
#define SPT_HIST_OVF_STATUS1_B50_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B50_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B50_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B50_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B51_OVF_MASK        (0x80000U)
#define SPT_HIST_OVF_STATUS1_B51_OVF_SHIFT       (19U)
#define SPT_HIST_OVF_STATUS1_B51_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B51_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B51_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B51_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B52_OVF_MASK        (0x100000U)
#define SPT_HIST_OVF_STATUS1_B52_OVF_SHIFT       (20U)
#define SPT_HIST_OVF_STATUS1_B52_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B52_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B52_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B52_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B53_OVF_MASK        (0x200000U)
#define SPT_HIST_OVF_STATUS1_B53_OVF_SHIFT       (21U)
#define SPT_HIST_OVF_STATUS1_B53_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B53_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B53_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B53_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B54_OVF_MASK        (0x400000U)
#define SPT_HIST_OVF_STATUS1_B54_OVF_SHIFT       (22U)
#define SPT_HIST_OVF_STATUS1_B54_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B54_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B54_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B54_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B55_OVF_MASK        (0x800000U)
#define SPT_HIST_OVF_STATUS1_B55_OVF_SHIFT       (23U)
#define SPT_HIST_OVF_STATUS1_B55_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B55_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B55_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B55_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B56_OVF_MASK        (0x1000000U)
#define SPT_HIST_OVF_STATUS1_B56_OVF_SHIFT       (24U)
#define SPT_HIST_OVF_STATUS1_B56_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B56_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B56_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B56_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B57_OVF_MASK        (0x2000000U)
#define SPT_HIST_OVF_STATUS1_B57_OVF_SHIFT       (25U)
#define SPT_HIST_OVF_STATUS1_B57_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B57_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B57_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B57_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B58_OVF_MASK        (0x4000000U)
#define SPT_HIST_OVF_STATUS1_B58_OVF_SHIFT       (26U)
#define SPT_HIST_OVF_STATUS1_B58_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B58_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B58_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B58_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B59_OVF_MASK        (0x8000000U)
#define SPT_HIST_OVF_STATUS1_B59_OVF_SHIFT       (27U)
#define SPT_HIST_OVF_STATUS1_B59_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B59_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B59_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B59_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B60_OVF_MASK        (0x10000000U)
#define SPT_HIST_OVF_STATUS1_B60_OVF_SHIFT       (28U)
#define SPT_HIST_OVF_STATUS1_B60_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B60_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B60_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B60_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B61_OVF_MASK        (0x20000000U)
#define SPT_HIST_OVF_STATUS1_B61_OVF_SHIFT       (29U)
#define SPT_HIST_OVF_STATUS1_B61_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B61_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B61_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B61_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B62_OVF_MASK        (0x40000000U)
#define SPT_HIST_OVF_STATUS1_B62_OVF_SHIFT       (30U)
#define SPT_HIST_OVF_STATUS1_B62_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B62_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B62_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B62_OVF_MASK)
#define SPT_HIST_OVF_STATUS1_B63_OVF_MASK        (0x80000000U)
#define SPT_HIST_OVF_STATUS1_B63_OVF_SHIFT       (31U)
#define SPT_HIST_OVF_STATUS1_B63_OVF_WIDTH       (1U)
#define SPT_HIST_OVF_STATUS1_B63_OVF(x)          (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_STATUS1_B63_OVF_SHIFT)) & SPT_HIST_OVF_STATUS1_B63_OVF_MASK)
/*! @} */

/*! @name HIST_OVF_IE - HIST Overflow Interrupt Enable Register */
/*! @{ */
#define SPT_HIST_OVF_IE_OVF_IE_MASK              (0x1U)
#define SPT_HIST_OVF_IE_OVF_IE_SHIFT             (0U)
#define SPT_HIST_OVF_IE_OVF_IE_WIDTH             (1U)
#define SPT_HIST_OVF_IE_OVF_IE(x)                (((uint32_t)(((uint32_t)(x)) << SPT_HIST_OVF_IE_OVF_IE_SHIFT)) & SPT_HIST_OVF_IE_OVF_IE_MASK)
/*! @} */

/*! @name MEM_ERR_INJECT_CTRL - Memory Error Injection Register */
/*! @{ */
#define SPT_MEM_ERR_INJECT_CTRL_OR_PAR_ERR_INJ_MASK (0xFU)
#define SPT_MEM_ERR_INJECT_CTRL_OR_PAR_ERR_INJ_SHIFT (0U)
#define SPT_MEM_ERR_INJECT_CTRL_OR_PAR_ERR_INJ_WIDTH (4U)
#define SPT_MEM_ERR_INJECT_CTRL_OR_PAR_ERR_INJ(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INJECT_CTRL_OR_PAR_ERR_INJ_SHIFT)) & SPT_MEM_ERR_INJECT_CTRL_OR_PAR_ERR_INJ_MASK)
#define SPT_MEM_ERR_INJECT_CTRL_TR_PAR_ERR_INJ_MASK (0xF0U)
#define SPT_MEM_ERR_INJECT_CTRL_TR_PAR_ERR_INJ_SHIFT (4U)
#define SPT_MEM_ERR_INJECT_CTRL_TR_PAR_ERR_INJ_WIDTH (4U)
#define SPT_MEM_ERR_INJECT_CTRL_TR_PAR_ERR_INJ(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INJECT_CTRL_TR_PAR_ERR_INJ_SHIFT)) & SPT_MEM_ERR_INJECT_CTRL_TR_PAR_ERR_INJ_MASK)
/*! @} */

/*! @name MEM_ERR_STATUS - Memory Error Status Register */
/*! @{ */
#define SPT_MEM_ERR_STATUS_WR_LCK_VIOL_MASK      (0x2U)
#define SPT_MEM_ERR_STATUS_WR_LCK_VIOL_SHIFT     (1U)
#define SPT_MEM_ERR_STATUS_WR_LCK_VIOL_WIDTH     (1U)
#define SPT_MEM_ERR_STATUS_WR_LCK_VIOL(x)        (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_WR_LCK_VIOL_SHIFT)) & SPT_MEM_ERR_STATUS_WR_LCK_VIOL_MASK)
#define SPT_MEM_ERR_STATUS_SPR_LCK_VIOL_MASK     (0x4U)
#define SPT_MEM_ERR_STATUS_SPR_LCK_VIOL_SHIFT    (2U)
#define SPT_MEM_ERR_STATUS_SPR_LCK_VIOL_WIDTH    (1U)
#define SPT_MEM_ERR_STATUS_SPR_LCK_VIOL(x)       (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_SPR_LCK_VIOL_SHIFT)) & SPT_MEM_ERR_STATUS_SPR_LCK_VIOL_MASK)
#define SPT_MEM_ERR_STATUS_TR_W_BANK_WR_LOCK_ERR_MASK (0x100U)
#define SPT_MEM_ERR_STATUS_TR_W_BANK_WR_LOCK_ERR_SHIFT (8U)
#define SPT_MEM_ERR_STATUS_TR_W_BANK_WR_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_TR_W_BANK_WR_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_TR_W_BANK_WR_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_TR_W_BANK_WR_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_TR_E_BANK_WR_LOCK_ERR_MASK (0x200U)
#define SPT_MEM_ERR_STATUS_TR_E_BANK_WR_LOCK_ERR_SHIFT (9U)
#define SPT_MEM_ERR_STATUS_TR_E_BANK_WR_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_TR_E_BANK_WR_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_TR_E_BANK_WR_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_TR_E_BANK_WR_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_TR_W_BANK_RD_LOCK_ERR_MASK (0x400U)
#define SPT_MEM_ERR_STATUS_TR_W_BANK_RD_LOCK_ERR_SHIFT (10U)
#define SPT_MEM_ERR_STATUS_TR_W_BANK_RD_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_TR_W_BANK_RD_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_TR_W_BANK_RD_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_TR_W_BANK_RD_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_TR_E_BANK_RD_LOCK_ERR_MASK (0x800U)
#define SPT_MEM_ERR_STATUS_TR_E_BANK_RD_LOCK_ERR_SHIFT (11U)
#define SPT_MEM_ERR_STATUS_TR_E_BANK_RD_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_TR_E_BANK_RD_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_TR_E_BANK_RD_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_TR_E_BANK_RD_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_TR_W_PAR_ERR_MASK     (0x4000U)
#define SPT_MEM_ERR_STATUS_TR_W_PAR_ERR_SHIFT    (14U)
#define SPT_MEM_ERR_STATUS_TR_W_PAR_ERR_WIDTH    (1U)
#define SPT_MEM_ERR_STATUS_TR_W_PAR_ERR(x)       (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_TR_W_PAR_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_TR_W_PAR_ERR_MASK)
#define SPT_MEM_ERR_STATUS_TR_E_PAR_ERR_MASK     (0x8000U)
#define SPT_MEM_ERR_STATUS_TR_E_PAR_ERR_SHIFT    (15U)
#define SPT_MEM_ERR_STATUS_TR_E_PAR_ERR_WIDTH    (1U)
#define SPT_MEM_ERR_STATUS_TR_E_PAR_ERR(x)       (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_TR_E_PAR_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_TR_E_PAR_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_NW_BANK_WR_LOCK_ERR_MASK (0x10000U)
#define SPT_MEM_ERR_STATUS_OR_NW_BANK_WR_LOCK_ERR_SHIFT (16U)
#define SPT_MEM_ERR_STATUS_OR_NW_BANK_WR_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_OR_NW_BANK_WR_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_NW_BANK_WR_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_NW_BANK_WR_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_SW_BANK_WR_LOCK_ERR_MASK (0x20000U)
#define SPT_MEM_ERR_STATUS_OR_SW_BANK_WR_LOCK_ERR_SHIFT (17U)
#define SPT_MEM_ERR_STATUS_OR_SW_BANK_WR_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_OR_SW_BANK_WR_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_SW_BANK_WR_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_SW_BANK_WR_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_SE_BANK_WR_LOCK_ERR_MASK (0x40000U)
#define SPT_MEM_ERR_STATUS_OR_SE_BANK_WR_LOCK_ERR_SHIFT (18U)
#define SPT_MEM_ERR_STATUS_OR_SE_BANK_WR_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_OR_SE_BANK_WR_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_SE_BANK_WR_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_SE_BANK_WR_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_NE_BANK_WR_LOCK_ERR_MASK (0x80000U)
#define SPT_MEM_ERR_STATUS_OR_NE_BANK_WR_LOCK_ERR_SHIFT (19U)
#define SPT_MEM_ERR_STATUS_OR_NE_BANK_WR_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_OR_NE_BANK_WR_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_NE_BANK_WR_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_NE_BANK_WR_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_NW_BANK_RD_LOCK_ERR_MASK (0x100000U)
#define SPT_MEM_ERR_STATUS_OR_NW_BANK_RD_LOCK_ERR_SHIFT (20U)
#define SPT_MEM_ERR_STATUS_OR_NW_BANK_RD_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_OR_NW_BANK_RD_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_NW_BANK_RD_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_NW_BANK_RD_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_SW_BANK_RD_LOCK_ERR_MASK (0x200000U)
#define SPT_MEM_ERR_STATUS_OR_SW_BANK_RD_LOCK_ERR_SHIFT (21U)
#define SPT_MEM_ERR_STATUS_OR_SW_BANK_RD_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_OR_SW_BANK_RD_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_SW_BANK_RD_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_SW_BANK_RD_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_SE_BANK_RD_LOCK_ERR_MASK (0x400000U)
#define SPT_MEM_ERR_STATUS_OR_SE_BANK_RD_LOCK_ERR_SHIFT (22U)
#define SPT_MEM_ERR_STATUS_OR_SE_BANK_RD_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_OR_SE_BANK_RD_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_SE_BANK_RD_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_SE_BANK_RD_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_NE_BANK_RD_LOCK_ERR_MASK (0x800000U)
#define SPT_MEM_ERR_STATUS_OR_NE_BANK_RD_LOCK_ERR_SHIFT (23U)
#define SPT_MEM_ERR_STATUS_OR_NE_BANK_RD_LOCK_ERR_WIDTH (1U)
#define SPT_MEM_ERR_STATUS_OR_NE_BANK_RD_LOCK_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_NE_BANK_RD_LOCK_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_NE_BANK_RD_LOCK_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_NW_PAR_ERR_MASK    (0x10000000U)
#define SPT_MEM_ERR_STATUS_OR_NW_PAR_ERR_SHIFT   (28U)
#define SPT_MEM_ERR_STATUS_OR_NW_PAR_ERR_WIDTH   (1U)
#define SPT_MEM_ERR_STATUS_OR_NW_PAR_ERR(x)      (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_NW_PAR_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_NW_PAR_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_SW_PAR_ERR_MASK    (0x20000000U)
#define SPT_MEM_ERR_STATUS_OR_SW_PAR_ERR_SHIFT   (29U)
#define SPT_MEM_ERR_STATUS_OR_SW_PAR_ERR_WIDTH   (1U)
#define SPT_MEM_ERR_STATUS_OR_SW_PAR_ERR(x)      (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_SW_PAR_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_SW_PAR_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_SE_PAR_ERR_MASK    (0x40000000U)
#define SPT_MEM_ERR_STATUS_OR_SE_PAR_ERR_SHIFT   (30U)
#define SPT_MEM_ERR_STATUS_OR_SE_PAR_ERR_WIDTH   (1U)
#define SPT_MEM_ERR_STATUS_OR_SE_PAR_ERR(x)      (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_SE_PAR_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_SE_PAR_ERR_MASK)
#define SPT_MEM_ERR_STATUS_OR_NE_PAR_ERR_MASK    (0x80000000U)
#define SPT_MEM_ERR_STATUS_OR_NE_PAR_ERR_SHIFT   (31U)
#define SPT_MEM_ERR_STATUS_OR_NE_PAR_ERR_WIDTH   (1U)
#define SPT_MEM_ERR_STATUS_OR_NE_PAR_ERR(x)      (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_STATUS_OR_NE_PAR_ERR_SHIFT)) & SPT_MEM_ERR_STATUS_OR_NE_PAR_ERR_MASK)
/*! @} */

/*! @name MEM_ERR_INT_EN - Memory Interrupt Enable Register */
/*! @{ */
#define SPT_MEM_ERR_INT_EN_WR_LCK_IE_MASK        (0x2U)
#define SPT_MEM_ERR_INT_EN_WR_LCK_IE_SHIFT       (1U)
#define SPT_MEM_ERR_INT_EN_WR_LCK_IE_WIDTH       (1U)
#define SPT_MEM_ERR_INT_EN_WR_LCK_IE(x)          (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_WR_LCK_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_WR_LCK_IE_MASK)
#define SPT_MEM_ERR_INT_EN_SPR_LCK_IE_MASK       (0x4U)
#define SPT_MEM_ERR_INT_EN_SPR_LCK_IE_SHIFT      (2U)
#define SPT_MEM_ERR_INT_EN_SPR_LCK_IE_WIDTH      (1U)
#define SPT_MEM_ERR_INT_EN_SPR_LCK_IE(x)         (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_SPR_LCK_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_SPR_LCK_IE_MASK)
#define SPT_MEM_ERR_INT_EN_TR_W_BANK_WR_LOCK_ERR_IE_MASK (0x100U)
#define SPT_MEM_ERR_INT_EN_TR_W_BANK_WR_LOCK_ERR_IE_SHIFT (8U)
#define SPT_MEM_ERR_INT_EN_TR_W_BANK_WR_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_TR_W_BANK_WR_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_TR_W_BANK_WR_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_TR_W_BANK_WR_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_TR_E_BANK_WR_LOCK_ERR_IE_MASK (0x200U)
#define SPT_MEM_ERR_INT_EN_TR_E_BANK_WR_LOCK_ERR_IE_SHIFT (9U)
#define SPT_MEM_ERR_INT_EN_TR_E_BANK_WR_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_TR_E_BANK_WR_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_TR_E_BANK_WR_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_TR_E_BANK_WR_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_TR_W_BANK_RD_LOCK_ERR_IE_MASK (0x400U)
#define SPT_MEM_ERR_INT_EN_TR_W_BANK_RD_LOCK_ERR_IE_SHIFT (10U)
#define SPT_MEM_ERR_INT_EN_TR_W_BANK_RD_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_TR_W_BANK_RD_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_TR_W_BANK_RD_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_TR_W_BANK_RD_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_TR_E_BANK_RD_LOCK_ERR_IE_MASK (0x800U)
#define SPT_MEM_ERR_INT_EN_TR_E_BANK_RD_LOCK_ERR_IE_SHIFT (11U)
#define SPT_MEM_ERR_INT_EN_TR_E_BANK_RD_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_TR_E_BANK_RD_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_TR_E_BANK_RD_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_TR_E_BANK_RD_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_TR_W_PAR_ERR_IE_MASK  (0x4000U)
#define SPT_MEM_ERR_INT_EN_TR_W_PAR_ERR_IE_SHIFT (14U)
#define SPT_MEM_ERR_INT_EN_TR_W_PAR_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_TR_W_PAR_ERR_IE(x)    (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_TR_W_PAR_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_TR_W_PAR_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_TR_E_PAR_ERR_IE_MASK  (0x8000U)
#define SPT_MEM_ERR_INT_EN_TR_E_PAR_ERR_IE_SHIFT (15U)
#define SPT_MEM_ERR_INT_EN_TR_E_PAR_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_TR_E_PAR_ERR_IE(x)    (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_TR_E_PAR_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_TR_E_PAR_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_NW_BANK_WR_LOCK_ERR_IE_MASK (0x10000U)
#define SPT_MEM_ERR_INT_EN_OR_NW_BANK_WR_LOCK_ERR_IE_SHIFT (16U)
#define SPT_MEM_ERR_INT_EN_OR_NW_BANK_WR_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_NW_BANK_WR_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_NW_BANK_WR_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_NW_BANK_WR_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_SW_BANK_WR_LOCK_ERR_IE_MASK (0x20000U)
#define SPT_MEM_ERR_INT_EN_OR_SW_BANK_WR_LOCK_ERR_IE_SHIFT (17U)
#define SPT_MEM_ERR_INT_EN_OR_SW_BANK_WR_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_SW_BANK_WR_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_SW_BANK_WR_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_SW_BANK_WR_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_SE_BANK_WR_LOCK_ERR_IE_MASK (0x40000U)
#define SPT_MEM_ERR_INT_EN_OR_SE_BANK_WR_LOCK_ERR_IE_SHIFT (18U)
#define SPT_MEM_ERR_INT_EN_OR_SE_BANK_WR_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_SE_BANK_WR_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_SE_BANK_WR_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_SE_BANK_WR_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_NE_BANK_WR_LOCK_ERR_IE_MASK (0x80000U)
#define SPT_MEM_ERR_INT_EN_OR_NE_BANK_WR_LOCK_ERR_IE_SHIFT (19U)
#define SPT_MEM_ERR_INT_EN_OR_NE_BANK_WR_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_NE_BANK_WR_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_NE_BANK_WR_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_NE_BANK_WR_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_NW_BANK_RD_LOCK_ERR_IE_MASK (0x100000U)
#define SPT_MEM_ERR_INT_EN_OR_NW_BANK_RD_LOCK_ERR_IE_SHIFT (20U)
#define SPT_MEM_ERR_INT_EN_OR_NW_BANK_RD_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_NW_BANK_RD_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_NW_BANK_RD_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_NW_BANK_RD_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_SW_BANK_RD_LOCK_ERR_IE_MASK (0x200000U)
#define SPT_MEM_ERR_INT_EN_OR_SW_BANK_RD_LOCK_ERR_IE_SHIFT (21U)
#define SPT_MEM_ERR_INT_EN_OR_SW_BANK_RD_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_SW_BANK_RD_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_SW_BANK_RD_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_SW_BANK_RD_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_SE_BANK_RD_LOCK_ERR_IE_MASK (0x400000U)
#define SPT_MEM_ERR_INT_EN_OR_SE_BANK_RD_LOCK_ERR_IE_SHIFT (22U)
#define SPT_MEM_ERR_INT_EN_OR_SE_BANK_RD_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_SE_BANK_RD_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_SE_BANK_RD_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_SE_BANK_RD_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_NE_BANK_RD_LOCK_ERR_IE_MASK (0x800000U)
#define SPT_MEM_ERR_INT_EN_OR_NE_BANK_RD_LOCK_ERR_IE_SHIFT (23U)
#define SPT_MEM_ERR_INT_EN_OR_NE_BANK_RD_LOCK_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_NE_BANK_RD_LOCK_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_NE_BANK_RD_LOCK_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_NE_BANK_RD_LOCK_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_NW_PAR_ERR_IE_MASK (0x10000000U)
#define SPT_MEM_ERR_INT_EN_OR_NW_PAR_ERR_IE_SHIFT (28U)
#define SPT_MEM_ERR_INT_EN_OR_NW_PAR_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_NW_PAR_ERR_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_NW_PAR_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_NW_PAR_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_SW_PAR_ERR_IE_MASK (0x20000000U)
#define SPT_MEM_ERR_INT_EN_OR_SW_PAR_ERR_IE_SHIFT (29U)
#define SPT_MEM_ERR_INT_EN_OR_SW_PAR_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_SW_PAR_ERR_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_SW_PAR_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_SW_PAR_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_SE_PAR_ERR_IE_MASK (0x40000000U)
#define SPT_MEM_ERR_INT_EN_OR_SE_PAR_ERR_IE_SHIFT (30U)
#define SPT_MEM_ERR_INT_EN_OR_SE_PAR_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_SE_PAR_ERR_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_SE_PAR_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_SE_PAR_ERR_IE_MASK)
#define SPT_MEM_ERR_INT_EN_OR_NE_PAR_ERR_IE_MASK (0x80000000U)
#define SPT_MEM_ERR_INT_EN_OR_NE_PAR_ERR_IE_SHIFT (31U)
#define SPT_MEM_ERR_INT_EN_OR_NE_PAR_ERR_IE_WIDTH (1U)
#define SPT_MEM_ERR_INT_EN_OR_NE_PAR_ERR_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_MEM_ERR_INT_EN_OR_NE_PAR_ERR_IE_SHIFT)) & SPT_MEM_ERR_INT_EN_OR_NE_PAR_ERR_IE_MASK)
/*! @} */

/*! @name OR_WR_LOCK_ERR_THRD_STATUS - OPRAM Write Lock Error Thread Status Register */
/*! @{ */
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NW_BANK_WR_LOCK_ERR_THRD_MASK (0x7U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NW_BANK_WR_LOCK_ERR_THRD_SHIFT (0U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NW_BANK_WR_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NW_BANK_WR_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NW_BANK_WR_LOCK_ERR_THRD_SHIFT)) & SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NW_BANK_WR_LOCK_ERR_THRD_MASK)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SW_BANK_WR_LOCK_ERR_THRD_MASK (0x700U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SW_BANK_WR_LOCK_ERR_THRD_SHIFT (8U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SW_BANK_WR_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SW_BANK_WR_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SW_BANK_WR_LOCK_ERR_THRD_SHIFT)) & SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SW_BANK_WR_LOCK_ERR_THRD_MASK)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SE_BANK_WR_LOCK_ERR_THRD_MASK (0x70000U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SE_BANK_WR_LOCK_ERR_THRD_SHIFT (16U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SE_BANK_WR_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SE_BANK_WR_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SE_BANK_WR_LOCK_ERR_THRD_SHIFT)) & SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_SE_BANK_WR_LOCK_ERR_THRD_MASK)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NE_BANK_WR_LOCK_ERR_THRD_MASK (0x7000000U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NE_BANK_WR_LOCK_ERR_THRD_SHIFT (24U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NE_BANK_WR_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NE_BANK_WR_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NE_BANK_WR_LOCK_ERR_THRD_SHIFT)) & SPT_OR_WR_LOCK_ERR_THRD_STATUS_OR_NE_BANK_WR_LOCK_ERR_THRD_MASK)
/*! @} */

/*! @name OR_RD_LOCK_ERR_THRD_STATUS - OPRAM Read Lock Error Thread Status Register */
/*! @{ */
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NW_BANK_RD_LOCK_ERR_THRD_MASK (0x7U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NW_BANK_RD_LOCK_ERR_THRD_SHIFT (0U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NW_BANK_RD_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NW_BANK_RD_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NW_BANK_RD_LOCK_ERR_THRD_SHIFT)) & SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NW_BANK_RD_LOCK_ERR_THRD_MASK)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SW_BANK_RD_LOCK_ERR_THRD_MASK (0x700U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SW_BANK_RD_LOCK_ERR_THRD_SHIFT (8U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SW_BANK_RD_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SW_BANK_RD_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SW_BANK_RD_LOCK_ERR_THRD_SHIFT)) & SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SW_BANK_RD_LOCK_ERR_THRD_MASK)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SE_BANK_RD_LOCK_ERR_THRD_MASK (0x70000U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SE_BANK_RD_LOCK_ERR_THRD_SHIFT (16U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SE_BANK_RD_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SE_BANK_RD_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SE_BANK_RD_LOCK_ERR_THRD_SHIFT)) & SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_SE_BANK_RD_LOCK_ERR_THRD_MASK)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NE_BANK_RD_LOCK_ERR_THRD_MASK (0x7000000U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NE_BANK_RD_LOCK_ERR_THRD_SHIFT (24U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NE_BANK_RD_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NE_BANK_RD_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NE_BANK_RD_LOCK_ERR_THRD_SHIFT)) & SPT_OR_RD_LOCK_ERR_THRD_STATUS_OR_NE_BANK_RD_LOCK_ERR_THRD_MASK)
/*! @} */

/*! @name TR_WR_LOCK_ERR_THRD_STATUS - TRAM Write Lock Error Thread Status Register */
/*! @{ */
#define SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_W_BANK_WR_LOCK_ERR_THRD_MASK (0x7U)
#define SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_W_BANK_WR_LOCK_ERR_THRD_SHIFT (0U)
#define SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_W_BANK_WR_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_W_BANK_WR_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_W_BANK_WR_LOCK_ERR_THRD_SHIFT)) & SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_W_BANK_WR_LOCK_ERR_THRD_MASK)
#define SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_E_BANK_WR_LOCK_ERR_THRD_MASK (0x700U)
#define SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_E_BANK_WR_LOCK_ERR_THRD_SHIFT (8U)
#define SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_E_BANK_WR_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_E_BANK_WR_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_E_BANK_WR_LOCK_ERR_THRD_SHIFT)) & SPT_TR_WR_LOCK_ERR_THRD_STATUS_TR_E_BANK_WR_LOCK_ERR_THRD_MASK)
/*! @} */

/*! @name TR_RD_LOCK_ERR_THRD_STATUS - TRAM Read Lock Error Thread Status Register */
/*! @{ */
#define SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_W_BANK_RD_LOCK_ERR_THRD_MASK (0x7U)
#define SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_W_BANK_RD_LOCK_ERR_THRD_SHIFT (0U)
#define SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_W_BANK_RD_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_W_BANK_RD_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_W_BANK_RD_LOCK_ERR_THRD_SHIFT)) & SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_W_BANK_RD_LOCK_ERR_THRD_MASK)
#define SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_E_BANK_RD_LOCK_ERR_THRD_MASK (0x700U)
#define SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_E_BANK_RD_LOCK_ERR_THRD_SHIFT (8U)
#define SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_E_BANK_RD_LOCK_ERR_THRD_WIDTH (3U)
#define SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_E_BANK_RD_LOCK_ERR_THRD(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_E_BANK_RD_LOCK_ERR_THRD_SHIFT)) & SPT_TR_RD_LOCK_ERR_THRD_STATUS_TR_E_BANK_RD_LOCK_ERR_THRD_MASK)
/*! @} */

/*! @name OR_WEST_WR_LOCK_ERR_ADDR - OPRAM West Write Lock Error Address Register */
/*! @{ */
#define SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_NW_BANK_WR_LOCK_ERR_ADDR_MASK (0xFFFFU)
#define SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_NW_BANK_WR_LOCK_ERR_ADDR_SHIFT (0U)
#define SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_NW_BANK_WR_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_NW_BANK_WR_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_NW_BANK_WR_LOCK_ERR_ADDR_SHIFT)) & SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_NW_BANK_WR_LOCK_ERR_ADDR_MASK)
#define SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_SW_BANK_WR_LOCK_ERR_ADDR_MASK (0xFFFF0000U)
#define SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_SW_BANK_WR_LOCK_ERR_ADDR_SHIFT (16U)
#define SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_SW_BANK_WR_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_SW_BANK_WR_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_SW_BANK_WR_LOCK_ERR_ADDR_SHIFT)) & SPT_OR_WEST_WR_LOCK_ERR_ADDR_OR_SW_BANK_WR_LOCK_ERR_ADDR_MASK)
/*! @} */

/*! @name OR_EAST_WR_LOCK_ERR_ADDR - OPRAM East Write Lock Error Address Register */
/*! @{ */
#define SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_NE_BANK_WR_LOCK_ERR_ADDR_MASK (0xFFFFU)
#define SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_NE_BANK_WR_LOCK_ERR_ADDR_SHIFT (0U)
#define SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_NE_BANK_WR_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_NE_BANK_WR_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_NE_BANK_WR_LOCK_ERR_ADDR_SHIFT)) & SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_NE_BANK_WR_LOCK_ERR_ADDR_MASK)
#define SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_SE_BANK_WR_LOCK_ERR_ADDR_MASK (0xFFFF0000U)
#define SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_SE_BANK_WR_LOCK_ERR_ADDR_SHIFT (16U)
#define SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_SE_BANK_WR_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_SE_BANK_WR_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_SE_BANK_WR_LOCK_ERR_ADDR_SHIFT)) & SPT_OR_EAST_WR_LOCK_ERR_ADDR_OR_SE_BANK_WR_LOCK_ERR_ADDR_MASK)
/*! @} */

/*! @name OR_WEST_RD_LOCK_ERR_ADDR - OPRAM West Read Lock Error Address Register */
/*! @{ */
#define SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_NW_BANK_RD_LOCK_ERR_ADDR_MASK (0xFFFFU)
#define SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_NW_BANK_RD_LOCK_ERR_ADDR_SHIFT (0U)
#define SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_NW_BANK_RD_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_NW_BANK_RD_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_NW_BANK_RD_LOCK_ERR_ADDR_SHIFT)) & SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_NW_BANK_RD_LOCK_ERR_ADDR_MASK)
#define SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_SW_BANK_RD_LOCK_ERR_ADDR_MASK (0xFFFF0000U)
#define SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_SW_BANK_RD_LOCK_ERR_ADDR_SHIFT (16U)
#define SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_SW_BANK_RD_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_SW_BANK_RD_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_SW_BANK_RD_LOCK_ERR_ADDR_SHIFT)) & SPT_OR_WEST_RD_LOCK_ERR_ADDR_OR_SW_BANK_RD_LOCK_ERR_ADDR_MASK)
/*! @} */

/*! @name OR_EAST_RD_LOCK_ERR_ADDR - OPRAM East Read Lock Error Address Register */
/*! @{ */
#define SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_NE_BANK_RD_LOCK_ERR_ADDR_MASK (0xFFFFU)
#define SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_NE_BANK_RD_LOCK_ERR_ADDR_SHIFT (0U)
#define SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_NE_BANK_RD_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_NE_BANK_RD_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_NE_BANK_RD_LOCK_ERR_ADDR_SHIFT)) & SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_NE_BANK_RD_LOCK_ERR_ADDR_MASK)
#define SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_SE_BANK_RD_LOCK_ERR_ADDR_MASK (0xFFFF0000U)
#define SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_SE_BANK_RD_LOCK_ERR_ADDR_SHIFT (16U)
#define SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_SE_BANK_RD_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_SE_BANK_RD_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_SE_BANK_RD_LOCK_ERR_ADDR_SHIFT)) & SPT_OR_EAST_RD_LOCK_ERR_ADDR_OR_SE_BANK_RD_LOCK_ERR_ADDR_MASK)
/*! @} */

/*! @name TR_WR_LOCK_ERR_ADDR - TRAM Write Lock Error Address Register */
/*! @{ */
#define SPT_TR_WR_LOCK_ERR_ADDR_TR_W_BANK_WR_LOCK_ERR_ADDR_MASK (0xFFFFU)
#define SPT_TR_WR_LOCK_ERR_ADDR_TR_W_BANK_WR_LOCK_ERR_ADDR_SHIFT (0U)
#define SPT_TR_WR_LOCK_ERR_ADDR_TR_W_BANK_WR_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_TR_WR_LOCK_ERR_ADDR_TR_W_BANK_WR_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_WR_LOCK_ERR_ADDR_TR_W_BANK_WR_LOCK_ERR_ADDR_SHIFT)) & SPT_TR_WR_LOCK_ERR_ADDR_TR_W_BANK_WR_LOCK_ERR_ADDR_MASK)
#define SPT_TR_WR_LOCK_ERR_ADDR_TR_E_BANK_WR_LOCK_ERR_ADDR_MASK (0xFFFF0000U)
#define SPT_TR_WR_LOCK_ERR_ADDR_TR_E_BANK_WR_LOCK_ERR_ADDR_SHIFT (16U)
#define SPT_TR_WR_LOCK_ERR_ADDR_TR_E_BANK_WR_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_TR_WR_LOCK_ERR_ADDR_TR_E_BANK_WR_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_WR_LOCK_ERR_ADDR_TR_E_BANK_WR_LOCK_ERR_ADDR_SHIFT)) & SPT_TR_WR_LOCK_ERR_ADDR_TR_E_BANK_WR_LOCK_ERR_ADDR_MASK)
/*! @} */

/*! @name TR_RD_LOCK_ERR_ADDR - TRAM Read Lock Error Address Register */
/*! @{ */
#define SPT_TR_RD_LOCK_ERR_ADDR_TR_W_BANK_RD_LOCK_ERR_ADDR_MASK (0xFFFFU)
#define SPT_TR_RD_LOCK_ERR_ADDR_TR_W_BANK_RD_LOCK_ERR_ADDR_SHIFT (0U)
#define SPT_TR_RD_LOCK_ERR_ADDR_TR_W_BANK_RD_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_TR_RD_LOCK_ERR_ADDR_TR_W_BANK_RD_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_RD_LOCK_ERR_ADDR_TR_W_BANK_RD_LOCK_ERR_ADDR_SHIFT)) & SPT_TR_RD_LOCK_ERR_ADDR_TR_W_BANK_RD_LOCK_ERR_ADDR_MASK)
#define SPT_TR_RD_LOCK_ERR_ADDR_TR_E_BANK_RD_LOCK_ERR_ADDR_MASK (0xFFFF0000U)
#define SPT_TR_RD_LOCK_ERR_ADDR_TR_E_BANK_RD_LOCK_ERR_ADDR_SHIFT (16U)
#define SPT_TR_RD_LOCK_ERR_ADDR_TR_E_BANK_RD_LOCK_ERR_ADDR_WIDTH (16U)
#define SPT_TR_RD_LOCK_ERR_ADDR_TR_E_BANK_RD_LOCK_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_RD_LOCK_ERR_ADDR_TR_E_BANK_RD_LOCK_ERR_ADDR_SHIFT)) & SPT_TR_RD_LOCK_ERR_ADDR_TR_E_BANK_RD_LOCK_ERR_ADDR_MASK)
/*! @} */

/*! @name OR_WEST_PAR_ERR_ADDR - OPRAM West Parity Error Address Register */
/*! @{ */
#define SPT_OR_WEST_PAR_ERR_ADDR_OR_NW_PAR_ERR_ADDR_MASK (0xFFFFU)
#define SPT_OR_WEST_PAR_ERR_ADDR_OR_NW_PAR_ERR_ADDR_SHIFT (0U)
#define SPT_OR_WEST_PAR_ERR_ADDR_OR_NW_PAR_ERR_ADDR_WIDTH (16U)
#define SPT_OR_WEST_PAR_ERR_ADDR_OR_NW_PAR_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WEST_PAR_ERR_ADDR_OR_NW_PAR_ERR_ADDR_SHIFT)) & SPT_OR_WEST_PAR_ERR_ADDR_OR_NW_PAR_ERR_ADDR_MASK)
#define SPT_OR_WEST_PAR_ERR_ADDR_OR_SW_PAR_ERR_ADDR_MASK (0xFFFF0000U)
#define SPT_OR_WEST_PAR_ERR_ADDR_OR_SW_PAR_ERR_ADDR_SHIFT (16U)
#define SPT_OR_WEST_PAR_ERR_ADDR_OR_SW_PAR_ERR_ADDR_WIDTH (16U)
#define SPT_OR_WEST_PAR_ERR_ADDR_OR_SW_PAR_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_WEST_PAR_ERR_ADDR_OR_SW_PAR_ERR_ADDR_SHIFT)) & SPT_OR_WEST_PAR_ERR_ADDR_OR_SW_PAR_ERR_ADDR_MASK)
/*! @} */

/*! @name OR_EAST_PAR_ERR_ADDR - OPRAM East Parity Error Address Register */
/*! @{ */
#define SPT_OR_EAST_PAR_ERR_ADDR_OR_NE_PAR_ERR_ADDR_MASK (0xFFFFU)
#define SPT_OR_EAST_PAR_ERR_ADDR_OR_NE_PAR_ERR_ADDR_SHIFT (0U)
#define SPT_OR_EAST_PAR_ERR_ADDR_OR_NE_PAR_ERR_ADDR_WIDTH (16U)
#define SPT_OR_EAST_PAR_ERR_ADDR_OR_NE_PAR_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_EAST_PAR_ERR_ADDR_OR_NE_PAR_ERR_ADDR_SHIFT)) & SPT_OR_EAST_PAR_ERR_ADDR_OR_NE_PAR_ERR_ADDR_MASK)
#define SPT_OR_EAST_PAR_ERR_ADDR_OR_SE_PAR_ERR_ADDR_MASK (0xFFFF0000U)
#define SPT_OR_EAST_PAR_ERR_ADDR_OR_SE_PAR_ERR_ADDR_SHIFT (16U)
#define SPT_OR_EAST_PAR_ERR_ADDR_OR_SE_PAR_ERR_ADDR_WIDTH (16U)
#define SPT_OR_EAST_PAR_ERR_ADDR_OR_SE_PAR_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_OR_EAST_PAR_ERR_ADDR_OR_SE_PAR_ERR_ADDR_SHIFT)) & SPT_OR_EAST_PAR_ERR_ADDR_OR_SE_PAR_ERR_ADDR_MASK)
/*! @} */

/*! @name TR_PAR_ERR_ADDR - TRAM Parity Error Address Register */
/*! @{ */
#define SPT_TR_PAR_ERR_ADDR_TR_W_PAR_ERR_ADDR_MASK (0xFFFFU)
#define SPT_TR_PAR_ERR_ADDR_TR_W_PAR_ERR_ADDR_SHIFT (0U)
#define SPT_TR_PAR_ERR_ADDR_TR_W_PAR_ERR_ADDR_WIDTH (16U)
#define SPT_TR_PAR_ERR_ADDR_TR_W_PAR_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_PAR_ERR_ADDR_TR_W_PAR_ERR_ADDR_SHIFT)) & SPT_TR_PAR_ERR_ADDR_TR_W_PAR_ERR_ADDR_MASK)
#define SPT_TR_PAR_ERR_ADDR_TR_E_PAR_ERR_ADDR_MASK (0xFFFF0000U)
#define SPT_TR_PAR_ERR_ADDR_TR_E_PAR_ERR_ADDR_SHIFT (16U)
#define SPT_TR_PAR_ERR_ADDR_TR_E_PAR_ERR_ADDR_WIDTH (16U)
#define SPT_TR_PAR_ERR_ADDR_TR_E_PAR_ERR_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_TR_PAR_ERR_ADDR_TR_E_PAR_ERR_ADDR_SHIFT)) & SPT_TR_PAR_ERR_ADDR_TR_E_PAR_ERR_ADDR_MASK)
/*! @} */

/*! @name SPT_AXI_QOS_RD - AXI QOS for Read Masters */
/*! @{ */
#define SPT_SPT_AXI_QOS_RD_CS_AXI_RD_QOS_MASK    (0xFU)
#define SPT_SPT_AXI_QOS_RD_CS_AXI_RD_QOS_SHIFT   (0U)
#define SPT_SPT_AXI_QOS_RD_CS_AXI_RD_QOS_WIDTH   (4U)
#define SPT_SPT_AXI_QOS_RD_CS_AXI_RD_QOS(x)      (((uint32_t)(((uint32_t)(x)) << SPT_SPT_AXI_QOS_RD_CS_AXI_RD_QOS_SHIFT)) & SPT_SPT_AXI_QOS_RD_CS_AXI_RD_QOS_MASK)
#define SPT_SPT_AXI_QOS_RD_SCS0_AXI_RD_QOS_MASK  (0xF0U)
#define SPT_SPT_AXI_QOS_RD_SCS0_AXI_RD_QOS_SHIFT (4U)
#define SPT_SPT_AXI_QOS_RD_SCS0_AXI_RD_QOS_WIDTH (4U)
#define SPT_SPT_AXI_QOS_RD_SCS0_AXI_RD_QOS(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SPT_AXI_QOS_RD_SCS0_AXI_RD_QOS_SHIFT)) & SPT_SPT_AXI_QOS_RD_SCS0_AXI_RD_QOS_MASK)
#define SPT_SPT_AXI_QOS_RD_SCS1_AXI_RD_QOS_MASK  (0xF00U)
#define SPT_SPT_AXI_QOS_RD_SCS1_AXI_RD_QOS_SHIFT (8U)
#define SPT_SPT_AXI_QOS_RD_SCS1_AXI_RD_QOS_WIDTH (4U)
#define SPT_SPT_AXI_QOS_RD_SCS1_AXI_RD_QOS(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SPT_AXI_QOS_RD_SCS1_AXI_RD_QOS_SHIFT)) & SPT_SPT_AXI_QOS_RD_SCS1_AXI_RD_QOS_MASK)
#define SPT_SPT_AXI_QOS_RD_SCS2_AXI_RD_QOS_MASK  (0xF000U)
#define SPT_SPT_AXI_QOS_RD_SCS2_AXI_RD_QOS_SHIFT (12U)
#define SPT_SPT_AXI_QOS_RD_SCS2_AXI_RD_QOS_WIDTH (4U)
#define SPT_SPT_AXI_QOS_RD_SCS2_AXI_RD_QOS(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SPT_AXI_QOS_RD_SCS2_AXI_RD_QOS_SHIFT)) & SPT_SPT_AXI_QOS_RD_SCS2_AXI_RD_QOS_MASK)
#define SPT_SPT_AXI_QOS_RD_SCS3_AXI_RD_QOS_MASK  (0xF0000U)
#define SPT_SPT_AXI_QOS_RD_SCS3_AXI_RD_QOS_SHIFT (16U)
#define SPT_SPT_AXI_QOS_RD_SCS3_AXI_RD_QOS_WIDTH (4U)
#define SPT_SPT_AXI_QOS_RD_SCS3_AXI_RD_QOS(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SPT_AXI_QOS_RD_SCS3_AXI_RD_QOS_SHIFT)) & SPT_SPT_AXI_QOS_RD_SCS3_AXI_RD_QOS_MASK)
#define SPT_SPT_AXI_QOS_RD_PDMA_AXI_RD_QOS_MASK  (0xF000000U)
#define SPT_SPT_AXI_QOS_RD_PDMA_AXI_RD_QOS_SHIFT (24U)
#define SPT_SPT_AXI_QOS_RD_PDMA_AXI_RD_QOS_WIDTH (4U)
#define SPT_SPT_AXI_QOS_RD_PDMA_AXI_RD_QOS(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SPT_AXI_QOS_RD_PDMA_AXI_RD_QOS_SHIFT)) & SPT_SPT_AXI_QOS_RD_PDMA_AXI_RD_QOS_MASK)
/*! @} */

/*! @name SPT_AXI_QOS_WR - AXI QOS for Read Masters */
/*! @{ */
#define SPT_SPT_AXI_QOS_WR_PDMA_AXI_WR_QOS_MASK  (0xF000000U)
#define SPT_SPT_AXI_QOS_WR_PDMA_AXI_WR_QOS_SHIFT (24U)
#define SPT_SPT_AXI_QOS_WR_PDMA_AXI_WR_QOS_WIDTH (4U)
#define SPT_SPT_AXI_QOS_WR_PDMA_AXI_WR_QOS(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SPT_AXI_QOS_WR_PDMA_AXI_WR_QOS_SHIFT)) & SPT_SPT_AXI_QOS_WR_PDMA_AXI_WR_QOS_MASK)
/*! @} */

/*! @name DMA_ERR_STATUS - DMA Error Status Register */
/*! @{ */
#define SPT_DMA_ERR_STATUS_CS_AXI_RRESP_MASK     (0x3U)
#define SPT_DMA_ERR_STATUS_CS_AXI_RRESP_SHIFT    (0U)
#define SPT_DMA_ERR_STATUS_CS_AXI_RRESP_WIDTH    (2U)
#define SPT_DMA_ERR_STATUS_CS_AXI_RRESP(x)       (((uint32_t)(((uint32_t)(x)) << SPT_DMA_ERR_STATUS_CS_AXI_RRESP_SHIFT)) & SPT_DMA_ERR_STATUS_CS_AXI_RRESP_MASK)
#define SPT_DMA_ERR_STATUS_SCS0_AXI_RRESP_MASK   (0xCU)
#define SPT_DMA_ERR_STATUS_SCS0_AXI_RRESP_SHIFT  (2U)
#define SPT_DMA_ERR_STATUS_SCS0_AXI_RRESP_WIDTH  (2U)
#define SPT_DMA_ERR_STATUS_SCS0_AXI_RRESP(x)     (((uint32_t)(((uint32_t)(x)) << SPT_DMA_ERR_STATUS_SCS0_AXI_RRESP_SHIFT)) & SPT_DMA_ERR_STATUS_SCS0_AXI_RRESP_MASK)
#define SPT_DMA_ERR_STATUS_SCS1_AXI_RRESP_MASK   (0x30U)
#define SPT_DMA_ERR_STATUS_SCS1_AXI_RRESP_SHIFT  (4U)
#define SPT_DMA_ERR_STATUS_SCS1_AXI_RRESP_WIDTH  (2U)
#define SPT_DMA_ERR_STATUS_SCS1_AXI_RRESP(x)     (((uint32_t)(((uint32_t)(x)) << SPT_DMA_ERR_STATUS_SCS1_AXI_RRESP_SHIFT)) & SPT_DMA_ERR_STATUS_SCS1_AXI_RRESP_MASK)
#define SPT_DMA_ERR_STATUS_SCS2_AXI_RRESP_MASK   (0xC0U)
#define SPT_DMA_ERR_STATUS_SCS2_AXI_RRESP_SHIFT  (6U)
#define SPT_DMA_ERR_STATUS_SCS2_AXI_RRESP_WIDTH  (2U)
#define SPT_DMA_ERR_STATUS_SCS2_AXI_RRESP(x)     (((uint32_t)(((uint32_t)(x)) << SPT_DMA_ERR_STATUS_SCS2_AXI_RRESP_SHIFT)) & SPT_DMA_ERR_STATUS_SCS2_AXI_RRESP_MASK)
#define SPT_DMA_ERR_STATUS_SCS3_AXI_RRESP_MASK   (0x300U)
#define SPT_DMA_ERR_STATUS_SCS3_AXI_RRESP_SHIFT  (8U)
#define SPT_DMA_ERR_STATUS_SCS3_AXI_RRESP_WIDTH  (2U)
#define SPT_DMA_ERR_STATUS_SCS3_AXI_RRESP(x)     (((uint32_t)(((uint32_t)(x)) << SPT_DMA_ERR_STATUS_SCS3_AXI_RRESP_SHIFT)) & SPT_DMA_ERR_STATUS_SCS3_AXI_RRESP_MASK)
#define SPT_DMA_ERR_STATUS_PDMA_AXI_RRESP_MASK   (0x30000U)
#define SPT_DMA_ERR_STATUS_PDMA_AXI_RRESP_SHIFT  (16U)
#define SPT_DMA_ERR_STATUS_PDMA_AXI_RRESP_WIDTH  (2U)
#define SPT_DMA_ERR_STATUS_PDMA_AXI_RRESP(x)     (((uint32_t)(((uint32_t)(x)) << SPT_DMA_ERR_STATUS_PDMA_AXI_RRESP_SHIFT)) & SPT_DMA_ERR_STATUS_PDMA_AXI_RRESP_MASK)
#define SPT_DMA_ERR_STATUS_PDMA_AXI_BRESP_MASK   (0xC0000U)
#define SPT_DMA_ERR_STATUS_PDMA_AXI_BRESP_SHIFT  (18U)
#define SPT_DMA_ERR_STATUS_PDMA_AXI_BRESP_WIDTH  (2U)
#define SPT_DMA_ERR_STATUS_PDMA_AXI_BRESP(x)     (((uint32_t)(((uint32_t)(x)) << SPT_DMA_ERR_STATUS_PDMA_AXI_BRESP_SHIFT)) & SPT_DMA_ERR_STATUS_PDMA_AXI_BRESP_MASK)
/*! @} */

/*! @name GBL_STATUS - Global Status Register */
/*! @{ */
#define SPT_GBL_STATUS_MCS_PDMA_TRANS_DONE_MASK  (0x1U)
#define SPT_GBL_STATUS_MCS_PDMA_TRANS_DONE_SHIFT (0U)
#define SPT_GBL_STATUS_MCS_PDMA_TRANS_DONE_WIDTH (1U)
#define SPT_GBL_STATUS_MCS_PDMA_TRANS_DONE(x)    (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_MCS_PDMA_TRANS_DONE_SHIFT)) & SPT_GBL_STATUS_MCS_PDMA_TRANS_DONE_MASK)
#define SPT_GBL_STATUS_SCS0_PDMA_TRANS_DONE_MASK (0x2U)
#define SPT_GBL_STATUS_SCS0_PDMA_TRANS_DONE_SHIFT (1U)
#define SPT_GBL_STATUS_SCS0_PDMA_TRANS_DONE_WIDTH (1U)
#define SPT_GBL_STATUS_SCS0_PDMA_TRANS_DONE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_SCS0_PDMA_TRANS_DONE_SHIFT)) & SPT_GBL_STATUS_SCS0_PDMA_TRANS_DONE_MASK)
#define SPT_GBL_STATUS_SCS1_PDMA_TRANS_DONE_MASK (0x4U)
#define SPT_GBL_STATUS_SCS1_PDMA_TRANS_DONE_SHIFT (2U)
#define SPT_GBL_STATUS_SCS1_PDMA_TRANS_DONE_WIDTH (1U)
#define SPT_GBL_STATUS_SCS1_PDMA_TRANS_DONE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_SCS1_PDMA_TRANS_DONE_SHIFT)) & SPT_GBL_STATUS_SCS1_PDMA_TRANS_DONE_MASK)
#define SPT_GBL_STATUS_SCS2_PDMA_TRANS_DONE_MASK (0x8U)
#define SPT_GBL_STATUS_SCS2_PDMA_TRANS_DONE_SHIFT (3U)
#define SPT_GBL_STATUS_SCS2_PDMA_TRANS_DONE_WIDTH (1U)
#define SPT_GBL_STATUS_SCS2_PDMA_TRANS_DONE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_SCS2_PDMA_TRANS_DONE_SHIFT)) & SPT_GBL_STATUS_SCS2_PDMA_TRANS_DONE_MASK)
#define SPT_GBL_STATUS_SCS3_PDMA_TRANS_DONE_MASK (0x10U)
#define SPT_GBL_STATUS_SCS3_PDMA_TRANS_DONE_SHIFT (4U)
#define SPT_GBL_STATUS_SCS3_PDMA_TRANS_DONE_WIDTH (1U)
#define SPT_GBL_STATUS_SCS3_PDMA_TRANS_DONE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_SCS3_PDMA_TRANS_DONE_SHIFT)) & SPT_GBL_STATUS_SCS3_PDMA_TRANS_DONE_MASK)
#define SPT_GBL_STATUS_CS_AXI_RD_ERR_MASK        (0x100U)
#define SPT_GBL_STATUS_CS_AXI_RD_ERR_SHIFT       (8U)
#define SPT_GBL_STATUS_CS_AXI_RD_ERR_WIDTH       (1U)
#define SPT_GBL_STATUS_CS_AXI_RD_ERR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_CS_AXI_RD_ERR_SHIFT)) & SPT_GBL_STATUS_CS_AXI_RD_ERR_MASK)
#define SPT_GBL_STATUS_SCS0_AXI_RD_ERR_MASK      (0x200U)
#define SPT_GBL_STATUS_SCS0_AXI_RD_ERR_SHIFT     (9U)
#define SPT_GBL_STATUS_SCS0_AXI_RD_ERR_WIDTH     (1U)
#define SPT_GBL_STATUS_SCS0_AXI_RD_ERR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_SCS0_AXI_RD_ERR_SHIFT)) & SPT_GBL_STATUS_SCS0_AXI_RD_ERR_MASK)
#define SPT_GBL_STATUS_SCS1_AXI_RD_ERR_MASK      (0x400U)
#define SPT_GBL_STATUS_SCS1_AXI_RD_ERR_SHIFT     (10U)
#define SPT_GBL_STATUS_SCS1_AXI_RD_ERR_WIDTH     (1U)
#define SPT_GBL_STATUS_SCS1_AXI_RD_ERR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_SCS1_AXI_RD_ERR_SHIFT)) & SPT_GBL_STATUS_SCS1_AXI_RD_ERR_MASK)
#define SPT_GBL_STATUS_SCS2_AXI_RD_ERR_MASK      (0x800U)
#define SPT_GBL_STATUS_SCS2_AXI_RD_ERR_SHIFT     (11U)
#define SPT_GBL_STATUS_SCS2_AXI_RD_ERR_WIDTH     (1U)
#define SPT_GBL_STATUS_SCS2_AXI_RD_ERR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_SCS2_AXI_RD_ERR_SHIFT)) & SPT_GBL_STATUS_SCS2_AXI_RD_ERR_MASK)
#define SPT_GBL_STATUS_SCS3_AXI_RD_ERR_MASK      (0x1000U)
#define SPT_GBL_STATUS_SCS3_AXI_RD_ERR_SHIFT     (12U)
#define SPT_GBL_STATUS_SCS3_AXI_RD_ERR_WIDTH     (1U)
#define SPT_GBL_STATUS_SCS3_AXI_RD_ERR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_SCS3_AXI_RD_ERR_SHIFT)) & SPT_GBL_STATUS_SCS3_AXI_RD_ERR_MASK)
#define SPT_GBL_STATUS_PDMA_AXI_RD_ERR_MASK      (0x10000U)
#define SPT_GBL_STATUS_PDMA_AXI_RD_ERR_SHIFT     (16U)
#define SPT_GBL_STATUS_PDMA_AXI_RD_ERR_WIDTH     (1U)
#define SPT_GBL_STATUS_PDMA_AXI_RD_ERR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_PDMA_AXI_RD_ERR_SHIFT)) & SPT_GBL_STATUS_PDMA_AXI_RD_ERR_MASK)
#define SPT_GBL_STATUS_PDMA_AXI_WR_ERR_MASK      (0x20000U)
#define SPT_GBL_STATUS_PDMA_AXI_WR_ERR_SHIFT     (17U)
#define SPT_GBL_STATUS_PDMA_AXI_WR_ERR_WIDTH     (1U)
#define SPT_GBL_STATUS_PDMA_AXI_WR_ERR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_PDMA_AXI_WR_ERR_SHIFT)) & SPT_GBL_STATUS_PDMA_AXI_WR_ERR_MASK)
/*! @} */

/*! @name GBL_STATUS_IE - Global Status Interrupt Enable Register */
/*! @{ */
#define SPT_GBL_STATUS_IE_MCS_PDMA_TRANS_DONE_IE_MASK (0x1U)
#define SPT_GBL_STATUS_IE_MCS_PDMA_TRANS_DONE_IE_SHIFT (0U)
#define SPT_GBL_STATUS_IE_MCS_PDMA_TRANS_DONE_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_MCS_PDMA_TRANS_DONE_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_MCS_PDMA_TRANS_DONE_IE_SHIFT)) & SPT_GBL_STATUS_IE_MCS_PDMA_TRANS_DONE_IE_MASK)
#define SPT_GBL_STATUS_IE_SCS0_PDMA_TRANS_DONE_IE_MASK (0x2U)
#define SPT_GBL_STATUS_IE_SCS0_PDMA_TRANS_DONE_IE_SHIFT (1U)
#define SPT_GBL_STATUS_IE_SCS0_PDMA_TRANS_DONE_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_SCS0_PDMA_TRANS_DONE_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_SCS0_PDMA_TRANS_DONE_IE_SHIFT)) & SPT_GBL_STATUS_IE_SCS0_PDMA_TRANS_DONE_IE_MASK)
#define SPT_GBL_STATUS_IE_SCS1_PDMA_TRANS_DONE_IE_MASK (0x4U)
#define SPT_GBL_STATUS_IE_SCS1_PDMA_TRANS_DONE_IE_SHIFT (2U)
#define SPT_GBL_STATUS_IE_SCS1_PDMA_TRANS_DONE_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_SCS1_PDMA_TRANS_DONE_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_SCS1_PDMA_TRANS_DONE_IE_SHIFT)) & SPT_GBL_STATUS_IE_SCS1_PDMA_TRANS_DONE_IE_MASK)
#define SPT_GBL_STATUS_IE_SCS2_PDMA_TRANS_DONE_IE_MASK (0x8U)
#define SPT_GBL_STATUS_IE_SCS2_PDMA_TRANS_DONE_IE_SHIFT (3U)
#define SPT_GBL_STATUS_IE_SCS2_PDMA_TRANS_DONE_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_SCS2_PDMA_TRANS_DONE_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_SCS2_PDMA_TRANS_DONE_IE_SHIFT)) & SPT_GBL_STATUS_IE_SCS2_PDMA_TRANS_DONE_IE_MASK)
#define SPT_GBL_STATUS_IE_SCS3_PDMA_TRANS_DONE_IE_MASK (0x10U)
#define SPT_GBL_STATUS_IE_SCS3_PDMA_TRANS_DONE_IE_SHIFT (4U)
#define SPT_GBL_STATUS_IE_SCS3_PDMA_TRANS_DONE_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_SCS3_PDMA_TRANS_DONE_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_SCS3_PDMA_TRANS_DONE_IE_SHIFT)) & SPT_GBL_STATUS_IE_SCS3_PDMA_TRANS_DONE_IE_MASK)
#define SPT_GBL_STATUS_IE_CS_AXI_RD_ERR_IE_MASK  (0x100U)
#define SPT_GBL_STATUS_IE_CS_AXI_RD_ERR_IE_SHIFT (8U)
#define SPT_GBL_STATUS_IE_CS_AXI_RD_ERR_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_CS_AXI_RD_ERR_IE(x)    (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_CS_AXI_RD_ERR_IE_SHIFT)) & SPT_GBL_STATUS_IE_CS_AXI_RD_ERR_IE_MASK)
#define SPT_GBL_STATUS_IE_SCS0_AXI_RD_ERR_IE_MASK (0x200U)
#define SPT_GBL_STATUS_IE_SCS0_AXI_RD_ERR_IE_SHIFT (9U)
#define SPT_GBL_STATUS_IE_SCS0_AXI_RD_ERR_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_SCS0_AXI_RD_ERR_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_SCS0_AXI_RD_ERR_IE_SHIFT)) & SPT_GBL_STATUS_IE_SCS0_AXI_RD_ERR_IE_MASK)
#define SPT_GBL_STATUS_IE_SCS1_AXI_RD_ERR_IE_MASK (0x400U)
#define SPT_GBL_STATUS_IE_SCS1_AXI_RD_ERR_IE_SHIFT (10U)
#define SPT_GBL_STATUS_IE_SCS1_AXI_RD_ERR_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_SCS1_AXI_RD_ERR_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_SCS1_AXI_RD_ERR_IE_SHIFT)) & SPT_GBL_STATUS_IE_SCS1_AXI_RD_ERR_IE_MASK)
#define SPT_GBL_STATUS_IE_SCS2_AXI_RD_ERR_IE_MASK (0x800U)
#define SPT_GBL_STATUS_IE_SCS2_AXI_RD_ERR_IE_SHIFT (11U)
#define SPT_GBL_STATUS_IE_SCS2_AXI_RD_ERR_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_SCS2_AXI_RD_ERR_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_SCS2_AXI_RD_ERR_IE_SHIFT)) & SPT_GBL_STATUS_IE_SCS2_AXI_RD_ERR_IE_MASK)
#define SPT_GBL_STATUS_IE_SCS3_AXI_RD_ERR_IE_MASK (0x1000U)
#define SPT_GBL_STATUS_IE_SCS3_AXI_RD_ERR_IE_SHIFT (12U)
#define SPT_GBL_STATUS_IE_SCS3_AXI_RD_ERR_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_SCS3_AXI_RD_ERR_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_SCS3_AXI_RD_ERR_IE_SHIFT)) & SPT_GBL_STATUS_IE_SCS3_AXI_RD_ERR_IE_MASK)
#define SPT_GBL_STATUS_IE_PDMA_AXI_RD_ERR_IE_MASK (0x10000U)
#define SPT_GBL_STATUS_IE_PDMA_AXI_RD_ERR_IE_SHIFT (16U)
#define SPT_GBL_STATUS_IE_PDMA_AXI_RD_ERR_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_PDMA_AXI_RD_ERR_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_PDMA_AXI_RD_ERR_IE_SHIFT)) & SPT_GBL_STATUS_IE_PDMA_AXI_RD_ERR_IE_MASK)
#define SPT_GBL_STATUS_IE_PDMA_AXI_WR_ERR_IE_MASK (0x20000U)
#define SPT_GBL_STATUS_IE_PDMA_AXI_WR_ERR_IE_SHIFT (17U)
#define SPT_GBL_STATUS_IE_PDMA_AXI_WR_ERR_IE_WIDTH (1U)
#define SPT_GBL_STATUS_IE_PDMA_AXI_WR_ERR_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_GBL_STATUS_IE_PDMA_AXI_WR_ERR_IE_SHIFT)) & SPT_GBL_STATUS_IE_PDMA_AXI_WR_ERR_IE_MASK)
/*! @} */

/*! @name HW_ACC_ERR_STATUS - Hardware Accelerator Error Status Register */
/*! @{ */
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_SRC_DEST_ERR_MASK (0x1U)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_SRC_DEST_ERR_SHIFT (0U)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_SRC_DEST_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_SRC_DEST_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_VMT_INVLD_SRC_DEST_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_VMT_INVLD_SRC_DEST_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_MODE_CFG_ERR_MASK (0x2U)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_MODE_CFG_ERR_SHIFT (1U)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_MODE_CFG_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_MODE_CFG_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_VMT_INVLD_MODE_CFG_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_VMT_INVLD_MODE_CFG_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_DATA_ERR_MASK (0x4U)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_DATA_ERR_SHIFT (2U)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_DATA_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_VMT_INVLD_DATA_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_VMT_INVLD_DATA_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_VMT_INVLD_DATA_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_VMT_SHFT_OVF_ERR_MASK (0x8U)
#define SPT_HW_ACC_ERR_STATUS_VMT_SHFT_OVF_ERR_SHIFT (3U)
#define SPT_HW_ACC_ERR_STATUS_VMT_SHFT_OVF_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_VMT_SHFT_OVF_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_VMT_SHFT_OVF_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_VMT_SHFT_OVF_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_HST_INVALID_PROG_ERR_MASK (0x20U)
#define SPT_HW_ACC_ERR_STATUS_HST_INVALID_PROG_ERR_SHIFT (5U)
#define SPT_HW_ACC_ERR_STATUS_HST_INVALID_PROG_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_HST_INVALID_PROG_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_HST_INVALID_PROG_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_HST_INVALID_PROG_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_HST_INVALID_WR_ACCESS_ERR_MASK (0x40U)
#define SPT_HW_ACC_ERR_STATUS_HST_INVALID_WR_ACCESS_ERR_SHIFT (6U)
#define SPT_HW_ACC_ERR_STATUS_HST_INVALID_WR_ACCESS_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_HST_INVALID_WR_ACCESS_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_HST_INVALID_WR_ACCESS_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_HST_INVALID_WR_ACCESS_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_HST_VECLEN_NOT_MULTOF8_ERR_MASK (0x80U)
#define SPT_HW_ACC_ERR_STATUS_HST_VECLEN_NOT_MULTOF8_ERR_SHIFT (7U)
#define SPT_HW_ACC_ERR_STATUS_HST_VECLEN_NOT_MULTOF8_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_HST_VECLEN_NOT_MULTOF8_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_HST_VECLEN_NOT_MULTOF8_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_HST_VECLEN_NOT_MULTOF8_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_HST_SRC_NOT_OR_ERR_MASK (0x100U)
#define SPT_HW_ACC_ERR_STATUS_HST_SRC_NOT_OR_ERR_SHIFT (8U)
#define SPT_HW_ACC_ERR_STATUS_HST_SRC_NOT_OR_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_HST_SRC_NOT_OR_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_HST_SRC_NOT_OR_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_HST_SRC_NOT_OR_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_HST_SRCADDR_NOT_MULTOF16_ERR_MASK (0x200U)
#define SPT_HW_ACC_ERR_STATUS_HST_SRCADDR_NOT_MULTOF16_ERR_SHIFT (9U)
#define SPT_HW_ACC_ERR_STATUS_HST_SRCADDR_NOT_MULTOF16_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_HST_SRCADDR_NOT_MULTOF16_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_HST_SRCADDR_NOT_MULTOF16_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_HST_SRCADDR_NOT_MULTOF16_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_HST_DESTADDR_NOT_MULTOF16_ERR_MASK (0x400U)
#define SPT_HW_ACC_ERR_STATUS_HST_DESTADDR_NOT_MULTOF16_ERR_SHIFT (10U)
#define SPT_HW_ACC_ERR_STATUS_HST_DESTADDR_NOT_MULTOF16_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_HST_DESTADDR_NOT_MULTOF16_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_HST_DESTADDR_NOT_MULTOF16_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_HST_DESTADDR_NOT_MULTOF16_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_EXTRA_RESP_ERR_MASK (0x800U)
#define SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_EXTRA_RESP_ERR_SHIFT (11U)
#define SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_EXTRA_RESP_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_EXTRA_RESP_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_EXTRA_RESP_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_EXTRA_RESP_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_MISSING_RESP_ERR_MASK (0x1000U)
#define SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_MISSING_RESP_ERR_SHIFT (12U)
#define SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_MISSING_RESP_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_MISSING_RESP_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_MISSING_RESP_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_CS_DSP_IF_MISSING_RESP_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_FIR_SCP_TAP_ERR_MASK (0x2000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_FIR_SCP_TAP_ERR_SHIFT (13U)
#define SPT_HW_ACC_ERR_STATUS_FFT_FIR_SCP_TAP_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_FIR_SCP_TAP_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_FIR_SCP_TAP_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_FIR_SCP_TAP_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_MODE2X_VL_ERR_MASK (0x4000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_MODE2X_VL_ERR_SHIFT (14U)
#define SPT_HW_ACC_ERR_STATUS_FFT_MODE2X_VL_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_MODE2X_VL_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_MODE2X_VL_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_MODE2X_VL_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_ILL_SHFTVAL_MASK (0x8000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_ILL_SHFTVAL_SHIFT (15U)
#define SPT_HW_ACC_ERR_STATUS_FFT_ILL_SHFTVAL_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_ILL_SHFTVAL(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_ILL_SHFTVAL_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_ILL_SHFTVAL_MASK)
#define SPT_HW_ACC_ERR_STATUS_PDMA_CMD_ERR_MASK  (0x10000U)
#define SPT_HW_ACC_ERR_STATUS_PDMA_CMD_ERR_SHIFT (16U)
#define SPT_HW_ACC_ERR_STATUS_PDMA_CMD_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_PDMA_CMD_ERR(x)    (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_PDMA_CMD_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_PDMA_CMD_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_COPY_IP_CMD_ERR_MASK (0x80000U)
#define SPT_HW_ACC_ERR_STATUS_COPY_IP_CMD_ERR_SHIFT (19U)
#define SPT_HW_ACC_ERR_STATUS_COPY_IP_CMD_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_COPY_IP_CMD_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_COPY_IP_CMD_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_COPY_IP_CMD_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_DSP_RLU0_CMD_ERR_MASK (0x100000U)
#define SPT_HW_ACC_ERR_STATUS_DSP_RLU0_CMD_ERR_SHIFT (20U)
#define SPT_HW_ACC_ERR_STATUS_DSP_RLU0_CMD_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_DSP_RLU0_CMD_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_DSP_RLU0_CMD_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_DSP_RLU0_CMD_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_DSP_RLU1_CMD_ERR_MASK (0x200000U)
#define SPT_HW_ACC_ERR_STATUS_DSP_RLU1_CMD_ERR_SHIFT (21U)
#define SPT_HW_ACC_ERR_STATUS_DSP_RLU1_CMD_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_DSP_RLU1_CMD_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_DSP_RLU1_CMD_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_DSP_RLU1_CMD_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_DSP_WLU_CMD_ERR_MASK (0x400000U)
#define SPT_HW_ACC_ERR_STATUS_DSP_WLU_CMD_ERR_SHIFT (22U)
#define SPT_HW_ACC_ERR_STATUS_DSP_WLU_CMD_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_DSP_WLU_CMD_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_DSP_WLU_CMD_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_DSP_WLU_CMD_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_MAXS_IP_CMD_ERR_MASK (0x800000U)
#define SPT_HW_ACC_ERR_STATUS_MAXS_IP_CMD_ERR_SHIFT (23U)
#define SPT_HW_ACC_ERR_STATUS_MAXS_IP_CMD_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_MAXS_IP_CMD_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_MAXS_IP_CMD_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_MAXS_IP_CMD_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_WIN_RND_ERR_MASK (0x1000000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_WIN_RND_ERR_SHIFT (24U)
#define SPT_HW_ACC_ERR_STATUS_FFT_WIN_RND_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_WIN_RND_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_WIN_RND_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_WIN_RND_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_RDX4_RND_ERR_MASK (0x2000000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_RDX4_RND_ERR_SHIFT (25U)
#define SPT_HW_ACC_ERR_STATUS_FFT_RDX4_RND_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_RDX4_RND_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_RDX4_RND_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_RDX4_RND_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_QE_VL_OVS_ERR_MASK (0x4000000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_QE_VL_OVS_ERR_SHIFT (26U)
#define SPT_HW_ACC_ERR_STATUS_FFT_QE_VL_OVS_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_QE_VL_OVS_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_QE_VL_OVS_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_QE_VL_OVS_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_TW_OVS_ERR_MASK (0x8000000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_TW_OVS_ERR_SHIFT (27U)
#define SPT_HW_ACC_ERR_STATUS_FFT_TW_OVS_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_TW_OVS_ERR(x)  (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_TW_OVS_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_TW_OVS_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF1_ERR_MASK (0x10000000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF1_ERR_SHIFT (28U)
#define SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF1_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF1_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF1_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF1_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF2_ERR_MASK (0x20000000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF2_ERR_SHIFT (29U)
#define SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF2_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF2_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF2_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_MULT_COEF2_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_OPR_ADDR_ERR_MASK (0x40000000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_OPR_ADDR_ERR_SHIFT (30U)
#define SPT_HW_ACC_ERR_STATUS_FFT_OPR_ADDR_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_OPR_ADDR_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_OPR_ADDR_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_OPR_ADDR_ERR_MASK)
#define SPT_HW_ACC_ERR_STATUS_FFT_RDX2_RND_ERR_MASK (0x80000000U)
#define SPT_HW_ACC_ERR_STATUS_FFT_RDX2_RND_ERR_SHIFT (31U)
#define SPT_HW_ACC_ERR_STATUS_FFT_RDX2_RND_ERR_WIDTH (1U)
#define SPT_HW_ACC_ERR_STATUS_FFT_RDX2_RND_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_STATUS_FFT_RDX2_RND_ERR_SHIFT)) & SPT_HW_ACC_ERR_STATUS_FFT_RDX2_RND_ERR_MASK)
/*! @} */

/*! @name HW_ACC_ERR_IE - Hardware Accelerator Error Interrupt Enable Register */
/*! @{ */
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_SRC_DEST_IE_MASK (0x1U)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_SRC_DEST_IE_SHIFT (0U)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_SRC_DEST_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_SRC_DEST_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_VMT_INVLD_SRC_DEST_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_VMT_INVLD_SRC_DEST_IE_MASK)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_MODE_CFG_IE_MASK (0x2U)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_MODE_CFG_IE_SHIFT (1U)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_MODE_CFG_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_MODE_CFG_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_VMT_INVLD_MODE_CFG_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_VMT_INVLD_MODE_CFG_IE_MASK)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_DATA_IE_MASK (0x4U)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_DATA_IE_SHIFT (2U)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_DATA_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_VMT_INVLD_DATA_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_VMT_INVLD_DATA_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_VMT_INVLD_DATA_IE_MASK)
#define SPT_HW_ACC_ERR_IE_VMT_SHFT_OVF_IE_MASK   (0x8U)
#define SPT_HW_ACC_ERR_IE_VMT_SHFT_OVF_IE_SHIFT  (3U)
#define SPT_HW_ACC_ERR_IE_VMT_SHFT_OVF_IE_WIDTH  (1U)
#define SPT_HW_ACC_ERR_IE_VMT_SHFT_OVF_IE(x)     (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_VMT_SHFT_OVF_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_VMT_SHFT_OVF_IE_MASK)
#define SPT_HW_ACC_ERR_IE_HST_INVALID_PROG_ERR_IE_MASK (0x20U)
#define SPT_HW_ACC_ERR_IE_HST_INVALID_PROG_ERR_IE_SHIFT (5U)
#define SPT_HW_ACC_ERR_IE_HST_INVALID_PROG_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_HST_INVALID_PROG_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_HST_INVALID_PROG_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_HST_INVALID_PROG_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_HST_INVALID_WR_ACCESS_ERR_IE_MASK (0x40U)
#define SPT_HW_ACC_ERR_IE_HST_INVALID_WR_ACCESS_ERR_IE_SHIFT (6U)
#define SPT_HW_ACC_ERR_IE_HST_INVALID_WR_ACCESS_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_HST_INVALID_WR_ACCESS_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_HST_INVALID_WR_ACCESS_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_HST_INVALID_WR_ACCESS_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_HST_VECLEN_NOT_MULTOF8_ERR_IE_MASK (0x80U)
#define SPT_HW_ACC_ERR_IE_HST_VECLEN_NOT_MULTOF8_ERR_IE_SHIFT (7U)
#define SPT_HW_ACC_ERR_IE_HST_VECLEN_NOT_MULTOF8_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_HST_VECLEN_NOT_MULTOF8_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_HST_VECLEN_NOT_MULTOF8_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_HST_VECLEN_NOT_MULTOF8_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_HST_SRC_NOT_OR_ERR_IE_MASK (0x100U)
#define SPT_HW_ACC_ERR_IE_HST_SRC_NOT_OR_ERR_IE_SHIFT (8U)
#define SPT_HW_ACC_ERR_IE_HST_SRC_NOT_OR_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_HST_SRC_NOT_OR_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_HST_SRC_NOT_OR_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_HST_SRC_NOT_OR_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_HST_SRCADDR_NOT_MULTOF16_ERR_IE_MASK (0x200U)
#define SPT_HW_ACC_ERR_IE_HST_SRCADDR_NOT_MULTOF16_ERR_IE_SHIFT (9U)
#define SPT_HW_ACC_ERR_IE_HST_SRCADDR_NOT_MULTOF16_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_HST_SRCADDR_NOT_MULTOF16_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_HST_SRCADDR_NOT_MULTOF16_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_HST_SRCADDR_NOT_MULTOF16_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_HST_DESTADDR_NOT_MULTOF16_ERR_IE_MASK (0x400U)
#define SPT_HW_ACC_ERR_IE_HST_DESTADDR_NOT_MULTOF16_ERR_IE_SHIFT (10U)
#define SPT_HW_ACC_ERR_IE_HST_DESTADDR_NOT_MULTOF16_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_HST_DESTADDR_NOT_MULTOF16_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_HST_DESTADDR_NOT_MULTOF16_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_HST_DESTADDR_NOT_MULTOF16_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_CS_DSP_IF_EXTRA_RESP_ERR_IE_MASK (0x800U)
#define SPT_HW_ACC_ERR_IE_CS_DSP_IF_EXTRA_RESP_ERR_IE_SHIFT (11U)
#define SPT_HW_ACC_ERR_IE_CS_DSP_IF_EXTRA_RESP_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_CS_DSP_IF_EXTRA_RESP_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_CS_DSP_IF_EXTRA_RESP_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_CS_DSP_IF_EXTRA_RESP_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_CS_DSP_IF_MISSING_RESP_ERR_IE_MASK (0x1000U)
#define SPT_HW_ACC_ERR_IE_CS_DSP_IF_MISSING_RESP_ERR_IE_SHIFT (12U)
#define SPT_HW_ACC_ERR_IE_CS_DSP_IF_MISSING_RESP_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_CS_DSP_IF_MISSING_RESP_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_CS_DSP_IF_MISSING_RESP_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_CS_DSP_IF_MISSING_RESP_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_FIR_SCP_TAP_IE_MASK (0x2000U)
#define SPT_HW_ACC_ERR_IE_FFT_FIR_SCP_TAP_IE_SHIFT (13U)
#define SPT_HW_ACC_ERR_IE_FFT_FIR_SCP_TAP_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_FFT_FIR_SCP_TAP_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_FIR_SCP_TAP_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_FIR_SCP_TAP_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_MODE2X_VL_IE_MASK  (0x4000U)
#define SPT_HW_ACC_ERR_IE_FFT_MODE2X_VL_IE_SHIFT (14U)
#define SPT_HW_ACC_ERR_IE_FFT_MODE2X_VL_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_FFT_MODE2X_VL_IE(x)    (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_MODE2X_VL_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_MODE2X_VL_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_ILL_SHFTVAL_IE_MASK (0x8000U)
#define SPT_HW_ACC_ERR_IE_FFT_ILL_SHFTVAL_IE_SHIFT (15U)
#define SPT_HW_ACC_ERR_IE_FFT_ILL_SHFTVAL_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_FFT_ILL_SHFTVAL_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_ILL_SHFTVAL_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_ILL_SHFTVAL_IE_MASK)
#define SPT_HW_ACC_ERR_IE_PDMA_CMD_IE_MASK       (0x10000U)
#define SPT_HW_ACC_ERR_IE_PDMA_CMD_IE_SHIFT      (16U)
#define SPT_HW_ACC_ERR_IE_PDMA_CMD_IE_WIDTH      (1U)
#define SPT_HW_ACC_ERR_IE_PDMA_CMD_IE(x)         (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_PDMA_CMD_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_PDMA_CMD_IE_MASK)
#define SPT_HW_ACC_ERR_IE_COPY_IP_CMD_IE_MASK    (0x80000U)
#define SPT_HW_ACC_ERR_IE_COPY_IP_CMD_IE_SHIFT   (19U)
#define SPT_HW_ACC_ERR_IE_COPY_IP_CMD_IE_WIDTH   (1U)
#define SPT_HW_ACC_ERR_IE_COPY_IP_CMD_IE(x)      (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_COPY_IP_CMD_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_COPY_IP_CMD_IE_MASK)
#define SPT_HW_ACC_ERR_IE_DSP_RLU0_CMD_ERR_IE_MASK (0x100000U)
#define SPT_HW_ACC_ERR_IE_DSP_RLU0_CMD_ERR_IE_SHIFT (20U)
#define SPT_HW_ACC_ERR_IE_DSP_RLU0_CMD_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_DSP_RLU0_CMD_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_DSP_RLU0_CMD_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_DSP_RLU0_CMD_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_DSP_RLU1_CMD_ERR_IE_MASK (0x200000U)
#define SPT_HW_ACC_ERR_IE_DSP_RLU1_CMD_ERR_IE_SHIFT (21U)
#define SPT_HW_ACC_ERR_IE_DSP_RLU1_CMD_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_DSP_RLU1_CMD_ERR_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_DSP_RLU1_CMD_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_DSP_RLU1_CMD_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_DSP_WLU_CMD_ERR_IE_MASK (0x400000U)
#define SPT_HW_ACC_ERR_IE_DSP_WLU_CMD_ERR_IE_SHIFT (22U)
#define SPT_HW_ACC_ERR_IE_DSP_WLU_CMD_ERR_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_DSP_WLU_CMD_ERR_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_DSP_WLU_CMD_ERR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_DSP_WLU_CMD_ERR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_MAXS_IP_CMD_IE_MASK    (0x800000U)
#define SPT_HW_ACC_ERR_IE_MAXS_IP_CMD_IE_SHIFT   (23U)
#define SPT_HW_ACC_ERR_IE_MAXS_IP_CMD_IE_WIDTH   (1U)
#define SPT_HW_ACC_ERR_IE_MAXS_IP_CMD_IE(x)      (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_MAXS_IP_CMD_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_MAXS_IP_CMD_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_WIN_RND_IE_MASK    (0x1000000U)
#define SPT_HW_ACC_ERR_IE_FFT_WIN_RND_IE_SHIFT   (24U)
#define SPT_HW_ACC_ERR_IE_FFT_WIN_RND_IE_WIDTH   (1U)
#define SPT_HW_ACC_ERR_IE_FFT_WIN_RND_IE(x)      (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_WIN_RND_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_WIN_RND_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_RDX4_RND_IE_MASK   (0x2000000U)
#define SPT_HW_ACC_ERR_IE_FFT_RDX4_RND_IE_SHIFT  (25U)
#define SPT_HW_ACC_ERR_IE_FFT_RDX4_RND_IE_WIDTH  (1U)
#define SPT_HW_ACC_ERR_IE_FFT_RDX4_RND_IE(x)     (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_RDX4_RND_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_RDX4_RND_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_QE_VL_OVS_IE_MASK  (0x4000000U)
#define SPT_HW_ACC_ERR_IE_FFT_QE_VL_OVS_IE_SHIFT (26U)
#define SPT_HW_ACC_ERR_IE_FFT_QE_VL_OVS_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_FFT_QE_VL_OVS_IE(x)    (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_QE_VL_OVS_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_QE_VL_OVS_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_TW_OVS_IE_MASK     (0x8000000U)
#define SPT_HW_ACC_ERR_IE_FFT_TW_OVS_IE_SHIFT    (27U)
#define SPT_HW_ACC_ERR_IE_FFT_TW_OVS_IE_WIDTH    (1U)
#define SPT_HW_ACC_ERR_IE_FFT_TW_OVS_IE(x)       (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_TW_OVS_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_TW_OVS_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_MULT_COEF1_IE_MASK (0x10000000U)
#define SPT_HW_ACC_ERR_IE_FFT_MULT_COEF1_IE_SHIFT (28U)
#define SPT_HW_ACC_ERR_IE_FFT_MULT_COEF1_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_FFT_MULT_COEF1_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_MULT_COEF1_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_MULT_COEF1_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_MULT_COEF2_IE_MASK (0x20000000U)
#define SPT_HW_ACC_ERR_IE_FFT_MULT_COEF2_IE_SHIFT (29U)
#define SPT_HW_ACC_ERR_IE_FFT_MULT_COEF2_IE_WIDTH (1U)
#define SPT_HW_ACC_ERR_IE_FFT_MULT_COEF2_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_MULT_COEF2_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_MULT_COEF2_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_OPR_ADDR_IE_MASK   (0x40000000U)
#define SPT_HW_ACC_ERR_IE_FFT_OPR_ADDR_IE_SHIFT  (30U)
#define SPT_HW_ACC_ERR_IE_FFT_OPR_ADDR_IE_WIDTH  (1U)
#define SPT_HW_ACC_ERR_IE_FFT_OPR_ADDR_IE(x)     (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_OPR_ADDR_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_OPR_ADDR_IE_MASK)
#define SPT_HW_ACC_ERR_IE_FFT_RDX2_RND_IE_MASK   (0x80000000U)
#define SPT_HW_ACC_ERR_IE_FFT_RDX2_RND_IE_SHIFT  (31U)
#define SPT_HW_ACC_ERR_IE_FFT_RDX2_RND_IE_WIDTH  (1U)
#define SPT_HW_ACC_ERR_IE_FFT_RDX2_RND_IE(x)     (((uint32_t)(((uint32_t)(x)) << SPT_HW_ACC_ERR_IE_FFT_RDX2_RND_IE_SHIFT)) & SPT_HW_ACC_ERR_IE_FFT_RDX2_RND_IE_MASK)
/*! @} */

/*! @name HW2_ACC_ERR_STATUS - Hardware Accelerator2 Error Status Register */
/*! @{ */
#define SPT_HW2_ACC_ERR_STATUS_FFT2_FIR_SCP_TAP_ERR_MASK (0x2000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_FIR_SCP_TAP_ERR_SHIFT (13U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_FIR_SCP_TAP_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_FIR_SCP_TAP_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_FIR_SCP_TAP_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_FIR_SCP_TAP_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MODE2X_VL_ERR_MASK (0x4000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MODE2X_VL_ERR_SHIFT (14U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MODE2X_VL_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MODE2X_VL_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_MODE2X_VL_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_MODE2X_VL_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_ILL_SHFTVAL_MASK (0x8000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_ILL_SHFTVAL_SHIFT (15U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_ILL_SHFTVAL_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_ILL_SHFTVAL(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_ILL_SHFTVAL_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_ILL_SHFTVAL_MASK)
#define SPT_HW2_ACC_ERR_STATUS_COPY2_IP_CMD_ERR_MASK (0x80000U)
#define SPT_HW2_ACC_ERR_STATUS_COPY2_IP_CMD_ERR_SHIFT (19U)
#define SPT_HW2_ACC_ERR_STATUS_COPY2_IP_CMD_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_COPY2_IP_CMD_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_COPY2_IP_CMD_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_COPY2_IP_CMD_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_MAXS2_IP_CMD_ERR_MASK (0x800000U)
#define SPT_HW2_ACC_ERR_STATUS_MAXS2_IP_CMD_ERR_SHIFT (23U)
#define SPT_HW2_ACC_ERR_STATUS_MAXS2_IP_CMD_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_MAXS2_IP_CMD_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_MAXS2_IP_CMD_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_MAXS2_IP_CMD_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_WIN_RND_ERR_MASK (0x1000000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_WIN_RND_ERR_SHIFT (24U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_WIN_RND_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_WIN_RND_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_WIN_RND_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_WIN_RND_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_RDX4_RND_ERR_MASK (0x2000000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_RDX4_RND_ERR_SHIFT (25U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_RDX4_RND_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_RDX4_RND_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_RDX4_RND_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_RDX4_RND_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_QE_VL_OVS_ERR_MASK (0x4000000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_QE_VL_OVS_ERR_SHIFT (26U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_QE_VL_OVS_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_QE_VL_OVS_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_QE_VL_OVS_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_QE_VL_OVS_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_TW_OVS_ERR_MASK (0x8000000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_TW_OVS_ERR_SHIFT (27U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_TW_OVS_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_TW_OVS_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_TW_OVS_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_TW_OVS_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF1_ERR_MASK (0x10000000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF1_ERR_SHIFT (28U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF1_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF1_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF1_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF1_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF2_ERR_MASK (0x20000000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF2_ERR_SHIFT (29U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF2_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF2_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF2_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_MULT_COEF2_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_OPR_ADDR_ERR_MASK (0x40000000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_OPR_ADDR_ERR_SHIFT (30U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_OPR_ADDR_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_OPR_ADDR_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_OPR_ADDR_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_OPR_ADDR_ERR_MASK)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_RDX2_RND_ERR_MASK (0x80000000U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_RDX2_RND_ERR_SHIFT (31U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_RDX2_RND_ERR_WIDTH (1U)
#define SPT_HW2_ACC_ERR_STATUS_FFT2_RDX2_RND_ERR(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_STATUS_FFT2_RDX2_RND_ERR_SHIFT)) & SPT_HW2_ACC_ERR_STATUS_FFT2_RDX2_RND_ERR_MASK)
/*! @} */

/*! @name HW2_ACC_ERR_IE - Hardware Accelerator2 Error Interrupt Enable Register */
/*! @{ */
#define SPT_HW2_ACC_ERR_IE_FFT2_FIR_SCP_TAP_IE_MASK (0x2000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_FIR_SCP_TAP_IE_SHIFT (13U)
#define SPT_HW2_ACC_ERR_IE_FFT2_FIR_SCP_TAP_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_FIR_SCP_TAP_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_FIR_SCP_TAP_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_FIR_SCP_TAP_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_MODE2X_VL_IE_MASK (0x4000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_MODE2X_VL_IE_SHIFT (14U)
#define SPT_HW2_ACC_ERR_IE_FFT2_MODE2X_VL_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_MODE2X_VL_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_MODE2X_VL_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_MODE2X_VL_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_ILL_SHFTVAL_IE_MASK (0x8000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_ILL_SHFTVAL_IE_SHIFT (15U)
#define SPT_HW2_ACC_ERR_IE_FFT2_ILL_SHFTVAL_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_ILL_SHFTVAL_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_ILL_SHFTVAL_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_ILL_SHFTVAL_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_COPY2_IP_CMD_IE_MASK  (0x80000U)
#define SPT_HW2_ACC_ERR_IE_COPY2_IP_CMD_IE_SHIFT (19U)
#define SPT_HW2_ACC_ERR_IE_COPY2_IP_CMD_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_COPY2_IP_CMD_IE(x)    (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_COPY2_IP_CMD_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_COPY2_IP_CMD_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_MAXS2_IP_CMD_IE_MASK  (0x800000U)
#define SPT_HW2_ACC_ERR_IE_MAXS2_IP_CMD_IE_SHIFT (23U)
#define SPT_HW2_ACC_ERR_IE_MAXS2_IP_CMD_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_MAXS2_IP_CMD_IE(x)    (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_MAXS2_IP_CMD_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_MAXS2_IP_CMD_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_WIN_RND_IE_MASK  (0x1000000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_WIN_RND_IE_SHIFT (24U)
#define SPT_HW2_ACC_ERR_IE_FFT2_WIN_RND_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_WIN_RND_IE(x)    (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_WIN_RND_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_WIN_RND_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_RDX4_RND_IE_MASK (0x2000000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_RDX4_RND_IE_SHIFT (25U)
#define SPT_HW2_ACC_ERR_IE_FFT2_RDX4_RND_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_RDX4_RND_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_RDX4_RND_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_RDX4_RND_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_QE_VL_OVS_IE_MASK (0x4000000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_QE_VL_OVS_IE_SHIFT (26U)
#define SPT_HW2_ACC_ERR_IE_FFT2_QE_VL_OVS_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_QE_VL_OVS_IE(x)  (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_QE_VL_OVS_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_QE_VL_OVS_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_TW_OVS_IE_MASK   (0x8000000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_TW_OVS_IE_SHIFT  (27U)
#define SPT_HW2_ACC_ERR_IE_FFT2_TW_OVS_IE_WIDTH  (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_TW_OVS_IE(x)     (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_TW_OVS_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_TW_OVS_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF1_IE_MASK (0x10000000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF1_IE_SHIFT (28U)
#define SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF1_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF1_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF1_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF1_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF2_IE_MASK (0x20000000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF2_IE_SHIFT (29U)
#define SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF2_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF2_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF2_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_MULT_COEF2_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_OPR_ADDR_IE_MASK (0x40000000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_OPR_ADDR_IE_SHIFT (30U)
#define SPT_HW2_ACC_ERR_IE_FFT2_OPR_ADDR_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_OPR_ADDR_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_OPR_ADDR_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_OPR_ADDR_IE_MASK)
#define SPT_HW2_ACC_ERR_IE_FFT2_RDX2_RND_IE_MASK (0x80000000U)
#define SPT_HW2_ACC_ERR_IE_FFT2_RDX2_RND_IE_SHIFT (31U)
#define SPT_HW2_ACC_ERR_IE_FFT2_RDX2_RND_IE_WIDTH (1U)
#define SPT_HW2_ACC_ERR_IE_FFT2_RDX2_RND_IE(x)   (((uint32_t)(((uint32_t)(x)) << SPT_HW2_ACC_ERR_IE_FFT2_RDX2_RND_IE_SHIFT)) & SPT_HW2_ACC_ERR_IE_FFT2_RDX2_RND_IE_MASK)
/*! @} */

/*! @name WR_ACCESS_ERR_REG - WR/SPR Access Error Status Register */
/*! @{ */
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR0_MASK (0x1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR0_SHIFT (0U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR0_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR0(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR0_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR0_MASK)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR1_MASK (0x2U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR1_SHIFT (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR1_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR1(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR1_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR1_MASK)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR2_MASK (0x4U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR2_SHIFT (2U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR2_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR2(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR2_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR2_MASK)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR3_MASK (0x8U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR3_SHIFT (3U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR3_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR3(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR3_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR3_MASK)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR4_MASK (0x10U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR4_SHIFT (4U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR4_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR4(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR4_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_RF_ACC_ERR4_MASK)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR0_MASK (0x100U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR0_SHIFT (8U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR0_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR0(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR0_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR0_MASK)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR1_MASK (0x200U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR1_SHIFT (9U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR1_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR1(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR1_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR1_MASK)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR2_MASK (0x400U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR2_SHIFT (10U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR2_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR2(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR2_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR2_MASK)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR3_MASK (0x800U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR3_SHIFT (11U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR3_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR3(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR3_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR3_MASK)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR4_MASK (0x1000U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR4_SHIFT (12U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR4_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR4(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR4_SHIFT)) & SPT_WR_ACCESS_ERR_REG_SPT_SPR_ACC_ERR4_MASK)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR0_MASK (0x10000U)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR0_SHIFT (16U)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR0_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR0(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR0_SHIFT)) & SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR0_MASK)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR1_MASK (0x20000U)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR1_SHIFT (17U)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR1_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR1(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR1_SHIFT)) & SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR1_MASK)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR2_MASK (0x40000U)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR2_SHIFT (18U)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR2_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR2(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR2_SHIFT)) & SPT_WR_ACCESS_ERR_REG_DSP_RF_ACC_ERR2_MASK)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR0_MASK (0x1000000U)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR0_SHIFT (24U)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR0_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR0(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR0_SHIFT)) & SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR0_MASK)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR1_MASK (0x2000000U)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR1_SHIFT (25U)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR1_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR1(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR1_SHIFT)) & SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR1_MASK)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR2_MASK (0x4000000U)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR2_SHIFT (26U)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR2_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR2(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR2_SHIFT)) & SPT_WR_ACCESS_ERR_REG_DSP_SPR_ACC_ERR2_MASK)
/*! @} */

/*! @name WR_ACCESS_ERR_INT_EN - WR/SPR Access Error Interrupt Enable Register */
/*! @{ */
#define SPT_WR_ACCESS_ERR_INT_EN_RF_SPR_ACC_IE_MASK (0x1U)
#define SPT_WR_ACCESS_ERR_INT_EN_RF_SPR_ACC_IE_SHIFT (0U)
#define SPT_WR_ACCESS_ERR_INT_EN_RF_SPR_ACC_IE_WIDTH (1U)
#define SPT_WR_ACCESS_ERR_INT_EN_RF_SPR_ACC_IE(x) (((uint32_t)(((uint32_t)(x)) << SPT_WR_ACCESS_ERR_INT_EN_RF_SPR_ACC_IE_SHIFT)) & SPT_WR_ACCESS_ERR_INT_EN_RF_SPR_ACC_IE_MASK)
/*! @} */

/*! @name WR_0_15_CTRL_REG - Access Control Register */
/*! @{ */
#define SPT_WR_0_15_CTRL_REG_WR0_LCK_MASK        (0x1U)
#define SPT_WR_0_15_CTRL_REG_WR0_LCK_SHIFT       (0U)
#define SPT_WR_0_15_CTRL_REG_WR0_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR0_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR0_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR0_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR0_ACC_CTRL_MASK   (0x2U)
#define SPT_WR_0_15_CTRL_REG_WR0_ACC_CTRL_SHIFT  (1U)
#define SPT_WR_0_15_CTRL_REG_WR0_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR0_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR0_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR0_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR1_LCK_MASK        (0x4U)
#define SPT_WR_0_15_CTRL_REG_WR1_LCK_SHIFT       (2U)
#define SPT_WR_0_15_CTRL_REG_WR1_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR1_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR1_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR1_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR1_ACC_CTRL_MASK   (0x8U)
#define SPT_WR_0_15_CTRL_REG_WR1_ACC_CTRL_SHIFT  (3U)
#define SPT_WR_0_15_CTRL_REG_WR1_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR1_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR1_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR1_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR2_LCK_MASK        (0x10U)
#define SPT_WR_0_15_CTRL_REG_WR2_LCK_SHIFT       (4U)
#define SPT_WR_0_15_CTRL_REG_WR2_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR2_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR2_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR2_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR2_ACC_CTRL_MASK   (0x20U)
#define SPT_WR_0_15_CTRL_REG_WR2_ACC_CTRL_SHIFT  (5U)
#define SPT_WR_0_15_CTRL_REG_WR2_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR2_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR2_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR2_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR3_LCK_MASK        (0x40U)
#define SPT_WR_0_15_CTRL_REG_WR3_LCK_SHIFT       (6U)
#define SPT_WR_0_15_CTRL_REG_WR3_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR3_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR3_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR3_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR3_ACC_CTRL_MASK   (0x80U)
#define SPT_WR_0_15_CTRL_REG_WR3_ACC_CTRL_SHIFT  (7U)
#define SPT_WR_0_15_CTRL_REG_WR3_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR3_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR3_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR3_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR4_LCK_MASK        (0x100U)
#define SPT_WR_0_15_CTRL_REG_WR4_LCK_SHIFT       (8U)
#define SPT_WR_0_15_CTRL_REG_WR4_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR4_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR4_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR4_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR4_ACC_CTRL_MASK   (0x200U)
#define SPT_WR_0_15_CTRL_REG_WR4_ACC_CTRL_SHIFT  (9U)
#define SPT_WR_0_15_CTRL_REG_WR4_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR4_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR4_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR4_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR5_LCK_MASK        (0x400U)
#define SPT_WR_0_15_CTRL_REG_WR5_LCK_SHIFT       (10U)
#define SPT_WR_0_15_CTRL_REG_WR5_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR5_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR5_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR5_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR5_ACC_CTRL_MASK   (0x800U)
#define SPT_WR_0_15_CTRL_REG_WR5_ACC_CTRL_SHIFT  (11U)
#define SPT_WR_0_15_CTRL_REG_WR5_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR5_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR5_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR5_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR6_LCK_MASK        (0x1000U)
#define SPT_WR_0_15_CTRL_REG_WR6_LCK_SHIFT       (12U)
#define SPT_WR_0_15_CTRL_REG_WR6_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR6_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR6_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR6_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR6_ACC_CTRL_MASK   (0x2000U)
#define SPT_WR_0_15_CTRL_REG_WR6_ACC_CTRL_SHIFT  (13U)
#define SPT_WR_0_15_CTRL_REG_WR6_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR6_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR6_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR6_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR7_LCK_MASK        (0x4000U)
#define SPT_WR_0_15_CTRL_REG_WR7_LCK_SHIFT       (14U)
#define SPT_WR_0_15_CTRL_REG_WR7_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR7_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR7_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR7_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR7_ACC_CTRL_MASK   (0x8000U)
#define SPT_WR_0_15_CTRL_REG_WR7_ACC_CTRL_SHIFT  (15U)
#define SPT_WR_0_15_CTRL_REG_WR7_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR7_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR7_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR7_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR8_LCK_MASK        (0x10000U)
#define SPT_WR_0_15_CTRL_REG_WR8_LCK_SHIFT       (16U)
#define SPT_WR_0_15_CTRL_REG_WR8_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR8_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR8_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR8_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR8_ACC_CTRL_MASK   (0x20000U)
#define SPT_WR_0_15_CTRL_REG_WR8_ACC_CTRL_SHIFT  (17U)
#define SPT_WR_0_15_CTRL_REG_WR8_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR8_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR8_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR8_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR9_LCK_MASK        (0x40000U)
#define SPT_WR_0_15_CTRL_REG_WR9_LCK_SHIFT       (18U)
#define SPT_WR_0_15_CTRL_REG_WR9_LCK_WIDTH       (1U)
#define SPT_WR_0_15_CTRL_REG_WR9_LCK(x)          (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR9_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR9_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR9_ACC_CTRL_MASK   (0x80000U)
#define SPT_WR_0_15_CTRL_REG_WR9_ACC_CTRL_SHIFT  (19U)
#define SPT_WR_0_15_CTRL_REG_WR9_ACC_CTRL_WIDTH  (1U)
#define SPT_WR_0_15_CTRL_REG_WR9_ACC_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR9_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR9_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR10_LCK_MASK       (0x100000U)
#define SPT_WR_0_15_CTRL_REG_WR10_LCK_SHIFT      (20U)
#define SPT_WR_0_15_CTRL_REG_WR10_LCK_WIDTH      (1U)
#define SPT_WR_0_15_CTRL_REG_WR10_LCK(x)         (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR10_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR10_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR10_ACC_CTRL_MASK  (0x200000U)
#define SPT_WR_0_15_CTRL_REG_WR10_ACC_CTRL_SHIFT (21U)
#define SPT_WR_0_15_CTRL_REG_WR10_ACC_CTRL_WIDTH (1U)
#define SPT_WR_0_15_CTRL_REG_WR10_ACC_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR10_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR10_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR11_LCK_MASK       (0x400000U)
#define SPT_WR_0_15_CTRL_REG_WR11_LCK_SHIFT      (22U)
#define SPT_WR_0_15_CTRL_REG_WR11_LCK_WIDTH      (1U)
#define SPT_WR_0_15_CTRL_REG_WR11_LCK(x)         (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR11_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR11_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR11_ACC_CTRL_MASK  (0x800000U)
#define SPT_WR_0_15_CTRL_REG_WR11_ACC_CTRL_SHIFT (23U)
#define SPT_WR_0_15_CTRL_REG_WR11_ACC_CTRL_WIDTH (1U)
#define SPT_WR_0_15_CTRL_REG_WR11_ACC_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR11_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR11_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR12_LCK_MASK       (0x1000000U)
#define SPT_WR_0_15_CTRL_REG_WR12_LCK_SHIFT      (24U)
#define SPT_WR_0_15_CTRL_REG_WR12_LCK_WIDTH      (1U)
#define SPT_WR_0_15_CTRL_REG_WR12_LCK(x)         (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR12_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR12_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR12_ACC_CTRL_MASK  (0x2000000U)
#define SPT_WR_0_15_CTRL_REG_WR12_ACC_CTRL_SHIFT (25U)
#define SPT_WR_0_15_CTRL_REG_WR12_ACC_CTRL_WIDTH (1U)
#define SPT_WR_0_15_CTRL_REG_WR12_ACC_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR12_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR12_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR13_LCK_MASK       (0x4000000U)
#define SPT_WR_0_15_CTRL_REG_WR13_LCK_SHIFT      (26U)
#define SPT_WR_0_15_CTRL_REG_WR13_LCK_WIDTH      (1U)
#define SPT_WR_0_15_CTRL_REG_WR13_LCK(x)         (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR13_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR13_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR13_ACC_CTRL_MASK  (0x8000000U)
#define SPT_WR_0_15_CTRL_REG_WR13_ACC_CTRL_SHIFT (27U)
#define SPT_WR_0_15_CTRL_REG_WR13_ACC_CTRL_WIDTH (1U)
#define SPT_WR_0_15_CTRL_REG_WR13_ACC_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR13_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR13_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR14_LCK_MASK       (0x10000000U)
#define SPT_WR_0_15_CTRL_REG_WR14_LCK_SHIFT      (28U)
#define SPT_WR_0_15_CTRL_REG_WR14_LCK_WIDTH      (1U)
#define SPT_WR_0_15_CTRL_REG_WR14_LCK(x)         (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR14_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR14_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR14_ACC_CTRL_MASK  (0x20000000U)
#define SPT_WR_0_15_CTRL_REG_WR14_ACC_CTRL_SHIFT (29U)
#define SPT_WR_0_15_CTRL_REG_WR14_ACC_CTRL_WIDTH (1U)
#define SPT_WR_0_15_CTRL_REG_WR14_ACC_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR14_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR14_ACC_CTRL_MASK)
#define SPT_WR_0_15_CTRL_REG_WR15_LCK_MASK       (0x40000000U)
#define SPT_WR_0_15_CTRL_REG_WR15_LCK_SHIFT      (30U)
#define SPT_WR_0_15_CTRL_REG_WR15_LCK_WIDTH      (1U)
#define SPT_WR_0_15_CTRL_REG_WR15_LCK(x)         (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR15_LCK_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR15_LCK_MASK)
#define SPT_WR_0_15_CTRL_REG_WR15_ACC_CTRL_MASK  (0x80000000U)
#define SPT_WR_0_15_CTRL_REG_WR15_ACC_CTRL_SHIFT (31U)
#define SPT_WR_0_15_CTRL_REG_WR15_ACC_CTRL_WIDTH (1U)
#define SPT_WR_0_15_CTRL_REG_WR15_ACC_CTRL(x)    (((uint32_t)(((uint32_t)(x)) << SPT_WR_0_15_CTRL_REG_WR15_ACC_CTRL_SHIFT)) & SPT_WR_0_15_CTRL_REG_WR15_ACC_CTRL_MASK)
/*! @} */

/*! @name WR_16_31_CTRL_REG - Access Control Register */
/*! @{ */
#define SPT_WR_16_31_CTRL_REG_WR16_LCK_MASK      (0x1U)
#define SPT_WR_16_31_CTRL_REG_WR16_LCK_SHIFT     (0U)
#define SPT_WR_16_31_CTRL_REG_WR16_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR16_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR16_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR16_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR16_ACC_CTRL_MASK (0x2U)
#define SPT_WR_16_31_CTRL_REG_WR16_ACC_CTRL_SHIFT (1U)
#define SPT_WR_16_31_CTRL_REG_WR16_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR16_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR16_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR16_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR17_LCK_MASK      (0x4U)
#define SPT_WR_16_31_CTRL_REG_WR17_LCK_SHIFT     (2U)
#define SPT_WR_16_31_CTRL_REG_WR17_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR17_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR17_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR17_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR17_ACC_CTRL_MASK (0x8U)
#define SPT_WR_16_31_CTRL_REG_WR17_ACC_CTRL_SHIFT (3U)
#define SPT_WR_16_31_CTRL_REG_WR17_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR17_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR17_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR17_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR18_LCK_MASK      (0x10U)
#define SPT_WR_16_31_CTRL_REG_WR18_LCK_SHIFT     (4U)
#define SPT_WR_16_31_CTRL_REG_WR18_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR18_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR18_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR18_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR18_ACC_CTRL_MASK (0x20U)
#define SPT_WR_16_31_CTRL_REG_WR18_ACC_CTRL_SHIFT (5U)
#define SPT_WR_16_31_CTRL_REG_WR18_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR18_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR18_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR18_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR19_LCK_MASK      (0x40U)
#define SPT_WR_16_31_CTRL_REG_WR19_LCK_SHIFT     (6U)
#define SPT_WR_16_31_CTRL_REG_WR19_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR19_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR19_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR19_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR19_ACC_CTRL_MASK (0x80U)
#define SPT_WR_16_31_CTRL_REG_WR19_ACC_CTRL_SHIFT (7U)
#define SPT_WR_16_31_CTRL_REG_WR19_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR19_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR19_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR19_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR20_LCK_MASK      (0x100U)
#define SPT_WR_16_31_CTRL_REG_WR20_LCK_SHIFT     (8U)
#define SPT_WR_16_31_CTRL_REG_WR20_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR20_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR20_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR20_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR20_ACC_CTRL_MASK (0x200U)
#define SPT_WR_16_31_CTRL_REG_WR20_ACC_CTRL_SHIFT (9U)
#define SPT_WR_16_31_CTRL_REG_WR20_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR20_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR20_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR20_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR21_LCK_MASK      (0x400U)
#define SPT_WR_16_31_CTRL_REG_WR21_LCK_SHIFT     (10U)
#define SPT_WR_16_31_CTRL_REG_WR21_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR21_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR21_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR21_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR21_ACC_CTRL_MASK (0x800U)
#define SPT_WR_16_31_CTRL_REG_WR21_ACC_CTRL_SHIFT (11U)
#define SPT_WR_16_31_CTRL_REG_WR21_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR21_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR21_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR21_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR22_LCK_MASK      (0x1000U)
#define SPT_WR_16_31_CTRL_REG_WR22_LCK_SHIFT     (12U)
#define SPT_WR_16_31_CTRL_REG_WR22_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR22_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR22_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR22_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR22_ACC_CTRL_MASK (0x2000U)
#define SPT_WR_16_31_CTRL_REG_WR22_ACC_CTRL_SHIFT (13U)
#define SPT_WR_16_31_CTRL_REG_WR22_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR22_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR22_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR22_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR23_LCK_MASK      (0x4000U)
#define SPT_WR_16_31_CTRL_REG_WR23_LCK_SHIFT     (14U)
#define SPT_WR_16_31_CTRL_REG_WR23_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR23_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR23_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR23_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR23_ACC_CTRL_MASK (0x8000U)
#define SPT_WR_16_31_CTRL_REG_WR23_ACC_CTRL_SHIFT (15U)
#define SPT_WR_16_31_CTRL_REG_WR23_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR23_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR23_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR23_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR24_LCK_MASK      (0x10000U)
#define SPT_WR_16_31_CTRL_REG_WR24_LCK_SHIFT     (16U)
#define SPT_WR_16_31_CTRL_REG_WR24_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR24_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR24_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR24_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR24_ACC_CTRL_MASK (0x20000U)
#define SPT_WR_16_31_CTRL_REG_WR24_ACC_CTRL_SHIFT (17U)
#define SPT_WR_16_31_CTRL_REG_WR24_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR24_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR24_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR24_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR25_LCK_MASK      (0x40000U)
#define SPT_WR_16_31_CTRL_REG_WR25_LCK_SHIFT     (18U)
#define SPT_WR_16_31_CTRL_REG_WR25_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR25_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR25_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR25_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR25_ACC_CTRL_MASK (0x80000U)
#define SPT_WR_16_31_CTRL_REG_WR25_ACC_CTRL_SHIFT (19U)
#define SPT_WR_16_31_CTRL_REG_WR25_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR25_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR25_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR25_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR26_LCK_MASK      (0x100000U)
#define SPT_WR_16_31_CTRL_REG_WR26_LCK_SHIFT     (20U)
#define SPT_WR_16_31_CTRL_REG_WR26_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR26_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR26_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR26_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR26_ACC_CTRL_MASK (0x200000U)
#define SPT_WR_16_31_CTRL_REG_WR26_ACC_CTRL_SHIFT (21U)
#define SPT_WR_16_31_CTRL_REG_WR26_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR26_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR26_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR26_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR27_LCK_MASK      (0x400000U)
#define SPT_WR_16_31_CTRL_REG_WR27_LCK_SHIFT     (22U)
#define SPT_WR_16_31_CTRL_REG_WR27_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR27_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR27_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR27_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR27_ACC_CTRL_MASK (0x800000U)
#define SPT_WR_16_31_CTRL_REG_WR27_ACC_CTRL_SHIFT (23U)
#define SPT_WR_16_31_CTRL_REG_WR27_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR27_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR27_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR27_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR28_LCK_MASK      (0x1000000U)
#define SPT_WR_16_31_CTRL_REG_WR28_LCK_SHIFT     (24U)
#define SPT_WR_16_31_CTRL_REG_WR28_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR28_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR28_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR28_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR28_ACC_CTRL_MASK (0x2000000U)
#define SPT_WR_16_31_CTRL_REG_WR28_ACC_CTRL_SHIFT (25U)
#define SPT_WR_16_31_CTRL_REG_WR28_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR28_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR28_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR28_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR29_LCK_MASK      (0x4000000U)
#define SPT_WR_16_31_CTRL_REG_WR29_LCK_SHIFT     (26U)
#define SPT_WR_16_31_CTRL_REG_WR29_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR29_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR29_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR29_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR29_ACC_CTRL_MASK (0x8000000U)
#define SPT_WR_16_31_CTRL_REG_WR29_ACC_CTRL_SHIFT (27U)
#define SPT_WR_16_31_CTRL_REG_WR29_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR29_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR29_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR29_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR30_LCK_MASK      (0x10000000U)
#define SPT_WR_16_31_CTRL_REG_WR30_LCK_SHIFT     (28U)
#define SPT_WR_16_31_CTRL_REG_WR30_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR30_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR30_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR30_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR30_ACC_CTRL_MASK (0x20000000U)
#define SPT_WR_16_31_CTRL_REG_WR30_ACC_CTRL_SHIFT (29U)
#define SPT_WR_16_31_CTRL_REG_WR30_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR30_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR30_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR30_ACC_CTRL_MASK)
#define SPT_WR_16_31_CTRL_REG_WR31_LCK_MASK      (0x40000000U)
#define SPT_WR_16_31_CTRL_REG_WR31_LCK_SHIFT     (30U)
#define SPT_WR_16_31_CTRL_REG_WR31_LCK_WIDTH     (1U)
#define SPT_WR_16_31_CTRL_REG_WR31_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR31_LCK_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR31_LCK_MASK)
#define SPT_WR_16_31_CTRL_REG_WR31_ACC_CTRL_MASK (0x80000000U)
#define SPT_WR_16_31_CTRL_REG_WR31_ACC_CTRL_SHIFT (31U)
#define SPT_WR_16_31_CTRL_REG_WR31_ACC_CTRL_WIDTH (1U)
#define SPT_WR_16_31_CTRL_REG_WR31_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_16_31_CTRL_REG_WR31_ACC_CTRL_SHIFT)) & SPT_WR_16_31_CTRL_REG_WR31_ACC_CTRL_MASK)
/*! @} */

/*! @name WR_32_47_CTRL_REG - Access Control Register */
/*! @{ */
#define SPT_WR_32_47_CTRL_REG_WR32_LCK_MASK      (0x1U)
#define SPT_WR_32_47_CTRL_REG_WR32_LCK_SHIFT     (0U)
#define SPT_WR_32_47_CTRL_REG_WR32_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR32_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR32_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR32_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR32_ACC_CTRL_MASK (0x2U)
#define SPT_WR_32_47_CTRL_REG_WR32_ACC_CTRL_SHIFT (1U)
#define SPT_WR_32_47_CTRL_REG_WR32_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR32_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR32_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR32_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR33_LCK_MASK      (0x4U)
#define SPT_WR_32_47_CTRL_REG_WR33_LCK_SHIFT     (2U)
#define SPT_WR_32_47_CTRL_REG_WR33_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR33_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR33_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR33_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR33_ACC_CTRL_MASK (0x8U)
#define SPT_WR_32_47_CTRL_REG_WR33_ACC_CTRL_SHIFT (3U)
#define SPT_WR_32_47_CTRL_REG_WR33_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR33_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR33_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR33_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR34_LCK_MASK      (0x10U)
#define SPT_WR_32_47_CTRL_REG_WR34_LCK_SHIFT     (4U)
#define SPT_WR_32_47_CTRL_REG_WR34_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR34_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR34_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR34_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR34_ACC_CTRL_MASK (0x20U)
#define SPT_WR_32_47_CTRL_REG_WR34_ACC_CTRL_SHIFT (5U)
#define SPT_WR_32_47_CTRL_REG_WR34_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR34_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR34_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR34_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR35_LCK_MASK      (0x40U)
#define SPT_WR_32_47_CTRL_REG_WR35_LCK_SHIFT     (6U)
#define SPT_WR_32_47_CTRL_REG_WR35_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR35_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR35_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR35_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR35_ACC_CTRL_MASK (0x80U)
#define SPT_WR_32_47_CTRL_REG_WR35_ACC_CTRL_SHIFT (7U)
#define SPT_WR_32_47_CTRL_REG_WR35_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR35_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR35_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR35_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR36_LCK_MASK      (0x100U)
#define SPT_WR_32_47_CTRL_REG_WR36_LCK_SHIFT     (8U)
#define SPT_WR_32_47_CTRL_REG_WR36_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR36_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR36_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR36_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR36_ACC_CTRL_MASK (0x200U)
#define SPT_WR_32_47_CTRL_REG_WR36_ACC_CTRL_SHIFT (9U)
#define SPT_WR_32_47_CTRL_REG_WR36_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR36_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR36_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR36_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR37_LCK_MASK      (0x400U)
#define SPT_WR_32_47_CTRL_REG_WR37_LCK_SHIFT     (10U)
#define SPT_WR_32_47_CTRL_REG_WR37_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR37_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR37_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR37_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR37_ACC_CTRL_MASK (0x800U)
#define SPT_WR_32_47_CTRL_REG_WR37_ACC_CTRL_SHIFT (11U)
#define SPT_WR_32_47_CTRL_REG_WR37_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR37_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR37_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR37_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR38_LCK_MASK      (0x1000U)
#define SPT_WR_32_47_CTRL_REG_WR38_LCK_SHIFT     (12U)
#define SPT_WR_32_47_CTRL_REG_WR38_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR38_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR38_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR38_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR38_ACC_CTRL_MASK (0x2000U)
#define SPT_WR_32_47_CTRL_REG_WR38_ACC_CTRL_SHIFT (13U)
#define SPT_WR_32_47_CTRL_REG_WR38_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR38_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR38_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR38_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR39_LCK_MASK      (0x4000U)
#define SPT_WR_32_47_CTRL_REG_WR39_LCK_SHIFT     (14U)
#define SPT_WR_32_47_CTRL_REG_WR39_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR39_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR39_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR39_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR39_ACC_CTRL_MASK (0x8000U)
#define SPT_WR_32_47_CTRL_REG_WR39_ACC_CTRL_SHIFT (15U)
#define SPT_WR_32_47_CTRL_REG_WR39_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR39_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR39_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR39_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR40_LCK_MASK      (0x10000U)
#define SPT_WR_32_47_CTRL_REG_WR40_LCK_SHIFT     (16U)
#define SPT_WR_32_47_CTRL_REG_WR40_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR40_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR40_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR40_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR40_ACC_CTRL_MASK (0x20000U)
#define SPT_WR_32_47_CTRL_REG_WR40_ACC_CTRL_SHIFT (17U)
#define SPT_WR_32_47_CTRL_REG_WR40_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR40_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR40_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR40_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR41_LCK_MASK      (0x40000U)
#define SPT_WR_32_47_CTRL_REG_WR41_LCK_SHIFT     (18U)
#define SPT_WR_32_47_CTRL_REG_WR41_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR41_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR41_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR41_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR41_ACC_CTRL_MASK (0x80000U)
#define SPT_WR_32_47_CTRL_REG_WR41_ACC_CTRL_SHIFT (19U)
#define SPT_WR_32_47_CTRL_REG_WR41_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR41_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR41_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR41_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR42_LCK_MASK      (0x100000U)
#define SPT_WR_32_47_CTRL_REG_WR42_LCK_SHIFT     (20U)
#define SPT_WR_32_47_CTRL_REG_WR42_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR42_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR42_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR42_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR42_ACC_CTRL_MASK (0x200000U)
#define SPT_WR_32_47_CTRL_REG_WR42_ACC_CTRL_SHIFT (21U)
#define SPT_WR_32_47_CTRL_REG_WR42_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR42_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR42_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR42_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR43_LCK_MASK      (0x400000U)
#define SPT_WR_32_47_CTRL_REG_WR43_LCK_SHIFT     (22U)
#define SPT_WR_32_47_CTRL_REG_WR43_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR43_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR43_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR43_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR43_ACC_CTRL_MASK (0x800000U)
#define SPT_WR_32_47_CTRL_REG_WR43_ACC_CTRL_SHIFT (23U)
#define SPT_WR_32_47_CTRL_REG_WR43_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR43_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR43_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR43_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR44_LCK_MASK      (0x1000000U)
#define SPT_WR_32_47_CTRL_REG_WR44_LCK_SHIFT     (24U)
#define SPT_WR_32_47_CTRL_REG_WR44_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR44_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR44_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR44_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR44_ACC_CTRL_MASK (0x2000000U)
#define SPT_WR_32_47_CTRL_REG_WR44_ACC_CTRL_SHIFT (25U)
#define SPT_WR_32_47_CTRL_REG_WR44_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR44_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR44_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR44_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR45_LCK_MASK      (0x4000000U)
#define SPT_WR_32_47_CTRL_REG_WR45_LCK_SHIFT     (26U)
#define SPT_WR_32_47_CTRL_REG_WR45_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR45_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR45_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR45_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR45_ACC_CTRL_MASK (0x8000000U)
#define SPT_WR_32_47_CTRL_REG_WR45_ACC_CTRL_SHIFT (27U)
#define SPT_WR_32_47_CTRL_REG_WR45_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR45_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR45_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR45_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR46_LCK_MASK      (0x10000000U)
#define SPT_WR_32_47_CTRL_REG_WR46_LCK_SHIFT     (28U)
#define SPT_WR_32_47_CTRL_REG_WR46_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR46_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR46_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR46_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR46_ACC_CTRL_MASK (0x20000000U)
#define SPT_WR_32_47_CTRL_REG_WR46_ACC_CTRL_SHIFT (29U)
#define SPT_WR_32_47_CTRL_REG_WR46_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR46_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR46_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR46_ACC_CTRL_MASK)
#define SPT_WR_32_47_CTRL_REG_WR47_LCK_MASK      (0x40000000U)
#define SPT_WR_32_47_CTRL_REG_WR47_LCK_SHIFT     (30U)
#define SPT_WR_32_47_CTRL_REG_WR47_LCK_WIDTH     (1U)
#define SPT_WR_32_47_CTRL_REG_WR47_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR47_LCK_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR47_LCK_MASK)
#define SPT_WR_32_47_CTRL_REG_WR47_ACC_CTRL_MASK (0x80000000U)
#define SPT_WR_32_47_CTRL_REG_WR47_ACC_CTRL_SHIFT (31U)
#define SPT_WR_32_47_CTRL_REG_WR47_ACC_CTRL_WIDTH (1U)
#define SPT_WR_32_47_CTRL_REG_WR47_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_WR_32_47_CTRL_REG_WR47_ACC_CTRL_SHIFT)) & SPT_WR_32_47_CTRL_REG_WR47_ACC_CTRL_MASK)
/*! @} */

/*! @name WR_R0_RE - Work Register */
/*! @{ */
#define SPT_WR_R0_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R0_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R0_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R0_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R0_RE_RE_WR_SHIFT)) & SPT_WR_R0_RE_RE_WR_MASK)
#define SPT_WR_R0_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R0_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R0_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R0_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R0_RE_SIGN_EXT_SHIFT)) & SPT_WR_R0_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R0_IM - Work Register */
/*! @{ */
#define SPT_WR_R0_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R0_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R0_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R0_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R0_IM_IM_WR_SHIFT)) & SPT_WR_R0_IM_IM_WR_MASK)
#define SPT_WR_R0_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R0_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R0_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R0_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R0_IM_SIGN_EXT_SHIFT)) & SPT_WR_R0_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R1_RE - Work Register */
/*! @{ */
#define SPT_WR_R1_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R1_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R1_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R1_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R1_RE_RE_WR_SHIFT)) & SPT_WR_R1_RE_RE_WR_MASK)
#define SPT_WR_R1_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R1_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R1_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R1_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R1_RE_SIGN_EXT_SHIFT)) & SPT_WR_R1_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R1_IM - Work Register */
/*! @{ */
#define SPT_WR_R1_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R1_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R1_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R1_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R1_IM_IM_WR_SHIFT)) & SPT_WR_R1_IM_IM_WR_MASK)
#define SPT_WR_R1_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R1_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R1_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R1_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R1_IM_SIGN_EXT_SHIFT)) & SPT_WR_R1_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R2_RE - Work Register */
/*! @{ */
#define SPT_WR_R2_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R2_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R2_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R2_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R2_RE_RE_WR_SHIFT)) & SPT_WR_R2_RE_RE_WR_MASK)
#define SPT_WR_R2_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R2_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R2_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R2_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R2_RE_SIGN_EXT_SHIFT)) & SPT_WR_R2_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R2_IM - Work Register */
/*! @{ */
#define SPT_WR_R2_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R2_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R2_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R2_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R2_IM_IM_WR_SHIFT)) & SPT_WR_R2_IM_IM_WR_MASK)
#define SPT_WR_R2_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R2_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R2_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R2_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R2_IM_SIGN_EXT_SHIFT)) & SPT_WR_R2_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R3_RE - Work Register */
/*! @{ */
#define SPT_WR_R3_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R3_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R3_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R3_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R3_RE_RE_WR_SHIFT)) & SPT_WR_R3_RE_RE_WR_MASK)
#define SPT_WR_R3_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R3_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R3_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R3_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R3_RE_SIGN_EXT_SHIFT)) & SPT_WR_R3_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R3_IM - Work Register */
/*! @{ */
#define SPT_WR_R3_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R3_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R3_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R3_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R3_IM_IM_WR_SHIFT)) & SPT_WR_R3_IM_IM_WR_MASK)
#define SPT_WR_R3_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R3_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R3_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R3_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R3_IM_SIGN_EXT_SHIFT)) & SPT_WR_R3_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R4_RE - Work Register */
/*! @{ */
#define SPT_WR_R4_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R4_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R4_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R4_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R4_RE_RE_WR_SHIFT)) & SPT_WR_R4_RE_RE_WR_MASK)
#define SPT_WR_R4_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R4_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R4_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R4_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R4_RE_SIGN_EXT_SHIFT)) & SPT_WR_R4_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R4_IM - Work Register */
/*! @{ */
#define SPT_WR_R4_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R4_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R4_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R4_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R4_IM_IM_WR_SHIFT)) & SPT_WR_R4_IM_IM_WR_MASK)
#define SPT_WR_R4_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R4_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R4_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R4_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R4_IM_SIGN_EXT_SHIFT)) & SPT_WR_R4_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R5_RE - Work Register */
/*! @{ */
#define SPT_WR_R5_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R5_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R5_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R5_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R5_RE_RE_WR_SHIFT)) & SPT_WR_R5_RE_RE_WR_MASK)
#define SPT_WR_R5_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R5_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R5_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R5_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R5_RE_SIGN_EXT_SHIFT)) & SPT_WR_R5_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R5_IM - Work Register */
/*! @{ */
#define SPT_WR_R5_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R5_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R5_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R5_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R5_IM_IM_WR_SHIFT)) & SPT_WR_R5_IM_IM_WR_MASK)
#define SPT_WR_R5_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R5_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R5_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R5_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R5_IM_SIGN_EXT_SHIFT)) & SPT_WR_R5_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R6_RE - Work Register */
/*! @{ */
#define SPT_WR_R6_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R6_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R6_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R6_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R6_RE_RE_WR_SHIFT)) & SPT_WR_R6_RE_RE_WR_MASK)
#define SPT_WR_R6_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R6_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R6_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R6_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R6_RE_SIGN_EXT_SHIFT)) & SPT_WR_R6_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R6_IM - Work Register */
/*! @{ */
#define SPT_WR_R6_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R6_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R6_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R6_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R6_IM_IM_WR_SHIFT)) & SPT_WR_R6_IM_IM_WR_MASK)
#define SPT_WR_R6_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R6_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R6_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R6_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R6_IM_SIGN_EXT_SHIFT)) & SPT_WR_R6_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R7_RE - Work Register */
/*! @{ */
#define SPT_WR_R7_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R7_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R7_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R7_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R7_RE_RE_WR_SHIFT)) & SPT_WR_R7_RE_RE_WR_MASK)
#define SPT_WR_R7_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R7_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R7_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R7_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R7_RE_SIGN_EXT_SHIFT)) & SPT_WR_R7_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R7_IM - Work Register */
/*! @{ */
#define SPT_WR_R7_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R7_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R7_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R7_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R7_IM_IM_WR_SHIFT)) & SPT_WR_R7_IM_IM_WR_MASK)
#define SPT_WR_R7_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R7_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R7_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R7_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R7_IM_SIGN_EXT_SHIFT)) & SPT_WR_R7_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R8_RE - Work Register */
/*! @{ */
#define SPT_WR_R8_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R8_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R8_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R8_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R8_RE_RE_WR_SHIFT)) & SPT_WR_R8_RE_RE_WR_MASK)
#define SPT_WR_R8_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R8_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R8_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R8_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R8_RE_SIGN_EXT_SHIFT)) & SPT_WR_R8_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R8_IM - Work Register */
/*! @{ */
#define SPT_WR_R8_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R8_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R8_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R8_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R8_IM_IM_WR_SHIFT)) & SPT_WR_R8_IM_IM_WR_MASK)
#define SPT_WR_R8_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R8_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R8_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R8_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R8_IM_SIGN_EXT_SHIFT)) & SPT_WR_R8_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R9_RE - Work Register */
/*! @{ */
#define SPT_WR_R9_RE_RE_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R9_RE_RE_WR_SHIFT                 (0U)
#define SPT_WR_R9_RE_RE_WR_WIDTH                 (24U)
#define SPT_WR_R9_RE_RE_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R9_RE_RE_WR_SHIFT)) & SPT_WR_R9_RE_RE_WR_MASK)
#define SPT_WR_R9_RE_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R9_RE_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R9_RE_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R9_RE_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R9_RE_SIGN_EXT_SHIFT)) & SPT_WR_R9_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R9_IM - Work Register */
/*! @{ */
#define SPT_WR_R9_IM_IM_WR_MASK                  (0xFFFFFFU)
#define SPT_WR_R9_IM_IM_WR_SHIFT                 (0U)
#define SPT_WR_R9_IM_IM_WR_WIDTH                 (24U)
#define SPT_WR_R9_IM_IM_WR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_WR_R9_IM_IM_WR_SHIFT)) & SPT_WR_R9_IM_IM_WR_MASK)
#define SPT_WR_R9_IM_SIGN_EXT_MASK               (0xFF000000U)
#define SPT_WR_R9_IM_SIGN_EXT_SHIFT              (24U)
#define SPT_WR_R9_IM_SIGN_EXT_WIDTH              (8U)
#define SPT_WR_R9_IM_SIGN_EXT(x)                 (((uint32_t)(((uint32_t)(x)) << SPT_WR_R9_IM_SIGN_EXT_SHIFT)) & SPT_WR_R9_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R10_RE - Work Register */
/*! @{ */
#define SPT_WR_R10_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R10_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R10_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R10_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R10_RE_RE_WR_SHIFT)) & SPT_WR_R10_RE_RE_WR_MASK)
#define SPT_WR_R10_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R10_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R10_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R10_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R10_RE_SIGN_EXT_SHIFT)) & SPT_WR_R10_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R10_IM - Work Register */
/*! @{ */
#define SPT_WR_R10_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R10_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R10_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R10_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R10_IM_IM_WR_SHIFT)) & SPT_WR_R10_IM_IM_WR_MASK)
#define SPT_WR_R10_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R10_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R10_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R10_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R10_IM_SIGN_EXT_SHIFT)) & SPT_WR_R10_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R11_RE - Work Register */
/*! @{ */
#define SPT_WR_R11_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R11_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R11_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R11_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R11_RE_RE_WR_SHIFT)) & SPT_WR_R11_RE_RE_WR_MASK)
#define SPT_WR_R11_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R11_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R11_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R11_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R11_RE_SIGN_EXT_SHIFT)) & SPT_WR_R11_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R11_IM - Work Register */
/*! @{ */
#define SPT_WR_R11_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R11_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R11_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R11_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R11_IM_IM_WR_SHIFT)) & SPT_WR_R11_IM_IM_WR_MASK)
#define SPT_WR_R11_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R11_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R11_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R11_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R11_IM_SIGN_EXT_SHIFT)) & SPT_WR_R11_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R12_RE - Work Register */
/*! @{ */
#define SPT_WR_R12_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R12_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R12_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R12_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R12_RE_RE_WR_SHIFT)) & SPT_WR_R12_RE_RE_WR_MASK)
#define SPT_WR_R12_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R12_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R12_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R12_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R12_RE_SIGN_EXT_SHIFT)) & SPT_WR_R12_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R12_IM - Work Register */
/*! @{ */
#define SPT_WR_R12_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R12_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R12_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R12_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R12_IM_IM_WR_SHIFT)) & SPT_WR_R12_IM_IM_WR_MASK)
#define SPT_WR_R12_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R12_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R12_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R12_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R12_IM_SIGN_EXT_SHIFT)) & SPT_WR_R12_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R13_RE - Work Register */
/*! @{ */
#define SPT_WR_R13_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R13_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R13_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R13_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R13_RE_RE_WR_SHIFT)) & SPT_WR_R13_RE_RE_WR_MASK)
#define SPT_WR_R13_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R13_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R13_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R13_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R13_RE_SIGN_EXT_SHIFT)) & SPT_WR_R13_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R13_IM - Work Register */
/*! @{ */
#define SPT_WR_R13_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R13_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R13_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R13_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R13_IM_IM_WR_SHIFT)) & SPT_WR_R13_IM_IM_WR_MASK)
#define SPT_WR_R13_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R13_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R13_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R13_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R13_IM_SIGN_EXT_SHIFT)) & SPT_WR_R13_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R14_RE - Work Register */
/*! @{ */
#define SPT_WR_R14_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R14_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R14_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R14_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R14_RE_RE_WR_SHIFT)) & SPT_WR_R14_RE_RE_WR_MASK)
#define SPT_WR_R14_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R14_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R14_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R14_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R14_RE_SIGN_EXT_SHIFT)) & SPT_WR_R14_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R14_IM - Work Register */
/*! @{ */
#define SPT_WR_R14_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R14_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R14_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R14_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R14_IM_IM_WR_SHIFT)) & SPT_WR_R14_IM_IM_WR_MASK)
#define SPT_WR_R14_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R14_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R14_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R14_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R14_IM_SIGN_EXT_SHIFT)) & SPT_WR_R14_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R15_RE - Work Register */
/*! @{ */
#define SPT_WR_R15_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R15_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R15_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R15_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R15_RE_RE_WR_SHIFT)) & SPT_WR_R15_RE_RE_WR_MASK)
#define SPT_WR_R15_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R15_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R15_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R15_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R15_RE_SIGN_EXT_SHIFT)) & SPT_WR_R15_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R15_IM - Work Register */
/*! @{ */
#define SPT_WR_R15_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R15_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R15_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R15_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R15_IM_IM_WR_SHIFT)) & SPT_WR_R15_IM_IM_WR_MASK)
#define SPT_WR_R15_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R15_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R15_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R15_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R15_IM_SIGN_EXT_SHIFT)) & SPT_WR_R15_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R16_RE - Work Register */
/*! @{ */
#define SPT_WR_R16_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R16_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R16_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R16_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R16_RE_RE_WR_SHIFT)) & SPT_WR_R16_RE_RE_WR_MASK)
#define SPT_WR_R16_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R16_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R16_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R16_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R16_RE_SIGN_EXT_SHIFT)) & SPT_WR_R16_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R16_IM - Work Register */
/*! @{ */
#define SPT_WR_R16_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R16_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R16_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R16_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R16_IM_IM_WR_SHIFT)) & SPT_WR_R16_IM_IM_WR_MASK)
#define SPT_WR_R16_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R16_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R16_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R16_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R16_IM_SIGN_EXT_SHIFT)) & SPT_WR_R16_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R17_RE - Work Register */
/*! @{ */
#define SPT_WR_R17_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R17_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R17_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R17_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R17_RE_RE_WR_SHIFT)) & SPT_WR_R17_RE_RE_WR_MASK)
#define SPT_WR_R17_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R17_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R17_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R17_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R17_RE_SIGN_EXT_SHIFT)) & SPT_WR_R17_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R17_IM - Work Register */
/*! @{ */
#define SPT_WR_R17_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R17_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R17_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R17_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R17_IM_IM_WR_SHIFT)) & SPT_WR_R17_IM_IM_WR_MASK)
#define SPT_WR_R17_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R17_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R17_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R17_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R17_IM_SIGN_EXT_SHIFT)) & SPT_WR_R17_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R18_RE - Work Register */
/*! @{ */
#define SPT_WR_R18_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R18_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R18_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R18_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R18_RE_RE_WR_SHIFT)) & SPT_WR_R18_RE_RE_WR_MASK)
#define SPT_WR_R18_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R18_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R18_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R18_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R18_RE_SIGN_EXT_SHIFT)) & SPT_WR_R18_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R18_IM - Work Register */
/*! @{ */
#define SPT_WR_R18_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R18_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R18_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R18_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R18_IM_IM_WR_SHIFT)) & SPT_WR_R18_IM_IM_WR_MASK)
#define SPT_WR_R18_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R18_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R18_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R18_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R18_IM_SIGN_EXT_SHIFT)) & SPT_WR_R18_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R19_RE - Work Register */
/*! @{ */
#define SPT_WR_R19_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R19_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R19_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R19_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R19_RE_RE_WR_SHIFT)) & SPT_WR_R19_RE_RE_WR_MASK)
#define SPT_WR_R19_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R19_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R19_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R19_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R19_RE_SIGN_EXT_SHIFT)) & SPT_WR_R19_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R19_IM - Work Register */
/*! @{ */
#define SPT_WR_R19_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R19_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R19_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R19_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R19_IM_IM_WR_SHIFT)) & SPT_WR_R19_IM_IM_WR_MASK)
#define SPT_WR_R19_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R19_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R19_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R19_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R19_IM_SIGN_EXT_SHIFT)) & SPT_WR_R19_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R20_RE - Work Register */
/*! @{ */
#define SPT_WR_R20_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R20_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R20_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R20_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R20_RE_RE_WR_SHIFT)) & SPT_WR_R20_RE_RE_WR_MASK)
#define SPT_WR_R20_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R20_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R20_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R20_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R20_RE_SIGN_EXT_SHIFT)) & SPT_WR_R20_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R20_IM - Work Register */
/*! @{ */
#define SPT_WR_R20_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R20_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R20_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R20_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R20_IM_IM_WR_SHIFT)) & SPT_WR_R20_IM_IM_WR_MASK)
#define SPT_WR_R20_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R20_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R20_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R20_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R20_IM_SIGN_EXT_SHIFT)) & SPT_WR_R20_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R21_RE - Work Register */
/*! @{ */
#define SPT_WR_R21_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R21_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R21_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R21_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R21_RE_RE_WR_SHIFT)) & SPT_WR_R21_RE_RE_WR_MASK)
#define SPT_WR_R21_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R21_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R21_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R21_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R21_RE_SIGN_EXT_SHIFT)) & SPT_WR_R21_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R21_IM - Work Register */
/*! @{ */
#define SPT_WR_R21_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R21_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R21_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R21_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R21_IM_IM_WR_SHIFT)) & SPT_WR_R21_IM_IM_WR_MASK)
#define SPT_WR_R21_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R21_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R21_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R21_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R21_IM_SIGN_EXT_SHIFT)) & SPT_WR_R21_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R22_RE - Work Register */
/*! @{ */
#define SPT_WR_R22_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R22_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R22_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R22_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R22_RE_RE_WR_SHIFT)) & SPT_WR_R22_RE_RE_WR_MASK)
#define SPT_WR_R22_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R22_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R22_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R22_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R22_RE_SIGN_EXT_SHIFT)) & SPT_WR_R22_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R22_IM - Work Register */
/*! @{ */
#define SPT_WR_R22_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R22_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R22_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R22_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R22_IM_IM_WR_SHIFT)) & SPT_WR_R22_IM_IM_WR_MASK)
#define SPT_WR_R22_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R22_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R22_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R22_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R22_IM_SIGN_EXT_SHIFT)) & SPT_WR_R22_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R23_RE - Work Register */
/*! @{ */
#define SPT_WR_R23_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R23_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R23_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R23_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R23_RE_RE_WR_SHIFT)) & SPT_WR_R23_RE_RE_WR_MASK)
#define SPT_WR_R23_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R23_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R23_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R23_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R23_RE_SIGN_EXT_SHIFT)) & SPT_WR_R23_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R23_IM - Work Register */
/*! @{ */
#define SPT_WR_R23_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R23_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R23_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R23_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R23_IM_IM_WR_SHIFT)) & SPT_WR_R23_IM_IM_WR_MASK)
#define SPT_WR_R23_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R23_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R23_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R23_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R23_IM_SIGN_EXT_SHIFT)) & SPT_WR_R23_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R24_RE - Work Register */
/*! @{ */
#define SPT_WR_R24_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R24_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R24_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R24_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R24_RE_RE_WR_SHIFT)) & SPT_WR_R24_RE_RE_WR_MASK)
#define SPT_WR_R24_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R24_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R24_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R24_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R24_RE_SIGN_EXT_SHIFT)) & SPT_WR_R24_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R24_IM - Work Register */
/*! @{ */
#define SPT_WR_R24_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R24_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R24_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R24_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R24_IM_IM_WR_SHIFT)) & SPT_WR_R24_IM_IM_WR_MASK)
#define SPT_WR_R24_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R24_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R24_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R24_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R24_IM_SIGN_EXT_SHIFT)) & SPT_WR_R24_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R25_RE - Work Register */
/*! @{ */
#define SPT_WR_R25_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R25_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R25_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R25_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R25_RE_RE_WR_SHIFT)) & SPT_WR_R25_RE_RE_WR_MASK)
#define SPT_WR_R25_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R25_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R25_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R25_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R25_RE_SIGN_EXT_SHIFT)) & SPT_WR_R25_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R25_IM - Work Register */
/*! @{ */
#define SPT_WR_R25_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R25_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R25_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R25_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R25_IM_IM_WR_SHIFT)) & SPT_WR_R25_IM_IM_WR_MASK)
#define SPT_WR_R25_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R25_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R25_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R25_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R25_IM_SIGN_EXT_SHIFT)) & SPT_WR_R25_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R26_RE - Work Register */
/*! @{ */
#define SPT_WR_R26_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R26_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R26_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R26_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R26_RE_RE_WR_SHIFT)) & SPT_WR_R26_RE_RE_WR_MASK)
#define SPT_WR_R26_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R26_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R26_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R26_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R26_RE_SIGN_EXT_SHIFT)) & SPT_WR_R26_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R26_IM - Work Register */
/*! @{ */
#define SPT_WR_R26_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R26_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R26_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R26_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R26_IM_IM_WR_SHIFT)) & SPT_WR_R26_IM_IM_WR_MASK)
#define SPT_WR_R26_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R26_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R26_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R26_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R26_IM_SIGN_EXT_SHIFT)) & SPT_WR_R26_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R27_RE - Work Register */
/*! @{ */
#define SPT_WR_R27_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R27_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R27_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R27_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R27_RE_RE_WR_SHIFT)) & SPT_WR_R27_RE_RE_WR_MASK)
#define SPT_WR_R27_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R27_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R27_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R27_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R27_RE_SIGN_EXT_SHIFT)) & SPT_WR_R27_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R27_IM - Work Register */
/*! @{ */
#define SPT_WR_R27_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R27_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R27_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R27_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R27_IM_IM_WR_SHIFT)) & SPT_WR_R27_IM_IM_WR_MASK)
#define SPT_WR_R27_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R27_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R27_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R27_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R27_IM_SIGN_EXT_SHIFT)) & SPT_WR_R27_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R28_RE - Work Register */
/*! @{ */
#define SPT_WR_R28_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R28_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R28_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R28_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R28_RE_RE_WR_SHIFT)) & SPT_WR_R28_RE_RE_WR_MASK)
#define SPT_WR_R28_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R28_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R28_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R28_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R28_RE_SIGN_EXT_SHIFT)) & SPT_WR_R28_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R28_IM - Work Register */
/*! @{ */
#define SPT_WR_R28_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R28_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R28_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R28_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R28_IM_IM_WR_SHIFT)) & SPT_WR_R28_IM_IM_WR_MASK)
#define SPT_WR_R28_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R28_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R28_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R28_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R28_IM_SIGN_EXT_SHIFT)) & SPT_WR_R28_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R29_RE - Work Register */
/*! @{ */
#define SPT_WR_R29_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R29_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R29_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R29_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R29_RE_RE_WR_SHIFT)) & SPT_WR_R29_RE_RE_WR_MASK)
#define SPT_WR_R29_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R29_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R29_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R29_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R29_RE_SIGN_EXT_SHIFT)) & SPT_WR_R29_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R29_IM - Work Register */
/*! @{ */
#define SPT_WR_R29_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R29_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R29_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R29_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R29_IM_IM_WR_SHIFT)) & SPT_WR_R29_IM_IM_WR_MASK)
#define SPT_WR_R29_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R29_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R29_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R29_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R29_IM_SIGN_EXT_SHIFT)) & SPT_WR_R29_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R30_RE - Work Register */
/*! @{ */
#define SPT_WR_R30_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R30_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R30_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R30_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R30_RE_RE_WR_SHIFT)) & SPT_WR_R30_RE_RE_WR_MASK)
#define SPT_WR_R30_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R30_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R30_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R30_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R30_RE_SIGN_EXT_SHIFT)) & SPT_WR_R30_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R30_IM - Work Register */
/*! @{ */
#define SPT_WR_R30_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R30_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R30_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R30_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R30_IM_IM_WR_SHIFT)) & SPT_WR_R30_IM_IM_WR_MASK)
#define SPT_WR_R30_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R30_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R30_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R30_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R30_IM_SIGN_EXT_SHIFT)) & SPT_WR_R30_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R31_RE - Work Register */
/*! @{ */
#define SPT_WR_R31_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R31_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R31_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R31_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R31_RE_RE_WR_SHIFT)) & SPT_WR_R31_RE_RE_WR_MASK)
#define SPT_WR_R31_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R31_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R31_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R31_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R31_RE_SIGN_EXT_SHIFT)) & SPT_WR_R31_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R31_IM - Work Register */
/*! @{ */
#define SPT_WR_R31_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R31_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R31_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R31_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R31_IM_IM_WR_SHIFT)) & SPT_WR_R31_IM_IM_WR_MASK)
#define SPT_WR_R31_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R31_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R31_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R31_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R31_IM_SIGN_EXT_SHIFT)) & SPT_WR_R31_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R32_RE - Work Register */
/*! @{ */
#define SPT_WR_R32_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R32_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R32_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R32_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R32_RE_RE_WR_SHIFT)) & SPT_WR_R32_RE_RE_WR_MASK)
#define SPT_WR_R32_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R32_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R32_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R32_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R32_RE_SIGN_EXT_SHIFT)) & SPT_WR_R32_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R32_IM - Work Register */
/*! @{ */
#define SPT_WR_R32_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R32_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R32_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R32_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R32_IM_IM_WR_SHIFT)) & SPT_WR_R32_IM_IM_WR_MASK)
#define SPT_WR_R32_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R32_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R32_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R32_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R32_IM_SIGN_EXT_SHIFT)) & SPT_WR_R32_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R33_RE - Work Register */
/*! @{ */
#define SPT_WR_R33_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R33_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R33_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R33_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R33_RE_RE_WR_SHIFT)) & SPT_WR_R33_RE_RE_WR_MASK)
#define SPT_WR_R33_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R33_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R33_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R33_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R33_RE_SIGN_EXT_SHIFT)) & SPT_WR_R33_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R33_IM - Work Register */
/*! @{ */
#define SPT_WR_R33_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R33_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R33_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R33_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R33_IM_IM_WR_SHIFT)) & SPT_WR_R33_IM_IM_WR_MASK)
#define SPT_WR_R33_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R33_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R33_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R33_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R33_IM_SIGN_EXT_SHIFT)) & SPT_WR_R33_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R34_RE - Work Register */
/*! @{ */
#define SPT_WR_R34_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R34_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R34_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R34_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R34_RE_RE_WR_SHIFT)) & SPT_WR_R34_RE_RE_WR_MASK)
#define SPT_WR_R34_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R34_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R34_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R34_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R34_RE_SIGN_EXT_SHIFT)) & SPT_WR_R34_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R34_IM - Work Register */
/*! @{ */
#define SPT_WR_R34_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R34_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R34_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R34_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R34_IM_IM_WR_SHIFT)) & SPT_WR_R34_IM_IM_WR_MASK)
#define SPT_WR_R34_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R34_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R34_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R34_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R34_IM_SIGN_EXT_SHIFT)) & SPT_WR_R34_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R35_RE - Work Register */
/*! @{ */
#define SPT_WR_R35_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R35_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R35_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R35_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R35_RE_RE_WR_SHIFT)) & SPT_WR_R35_RE_RE_WR_MASK)
#define SPT_WR_R35_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R35_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R35_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R35_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R35_RE_SIGN_EXT_SHIFT)) & SPT_WR_R35_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R35_IM - Work Register */
/*! @{ */
#define SPT_WR_R35_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R35_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R35_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R35_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R35_IM_IM_WR_SHIFT)) & SPT_WR_R35_IM_IM_WR_MASK)
#define SPT_WR_R35_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R35_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R35_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R35_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R35_IM_SIGN_EXT_SHIFT)) & SPT_WR_R35_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R36_RE - Work Register */
/*! @{ */
#define SPT_WR_R36_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R36_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R36_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R36_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R36_RE_RE_WR_SHIFT)) & SPT_WR_R36_RE_RE_WR_MASK)
#define SPT_WR_R36_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R36_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R36_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R36_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R36_RE_SIGN_EXT_SHIFT)) & SPT_WR_R36_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R36_IM - Work Register */
/*! @{ */
#define SPT_WR_R36_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R36_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R36_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R36_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R36_IM_IM_WR_SHIFT)) & SPT_WR_R36_IM_IM_WR_MASK)
#define SPT_WR_R36_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R36_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R36_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R36_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R36_IM_SIGN_EXT_SHIFT)) & SPT_WR_R36_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R37_RE - Work Register */
/*! @{ */
#define SPT_WR_R37_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R37_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R37_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R37_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R37_RE_RE_WR_SHIFT)) & SPT_WR_R37_RE_RE_WR_MASK)
#define SPT_WR_R37_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R37_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R37_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R37_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R37_RE_SIGN_EXT_SHIFT)) & SPT_WR_R37_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R37_IM - Work Register */
/*! @{ */
#define SPT_WR_R37_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R37_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R37_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R37_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R37_IM_IM_WR_SHIFT)) & SPT_WR_R37_IM_IM_WR_MASK)
#define SPT_WR_R37_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R37_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R37_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R37_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R37_IM_SIGN_EXT_SHIFT)) & SPT_WR_R37_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R38_RE - Work Register */
/*! @{ */
#define SPT_WR_R38_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R38_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R38_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R38_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R38_RE_RE_WR_SHIFT)) & SPT_WR_R38_RE_RE_WR_MASK)
#define SPT_WR_R38_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R38_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R38_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R38_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R38_RE_SIGN_EXT_SHIFT)) & SPT_WR_R38_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R38_IM - Work Register */
/*! @{ */
#define SPT_WR_R38_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R38_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R38_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R38_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R38_IM_IM_WR_SHIFT)) & SPT_WR_R38_IM_IM_WR_MASK)
#define SPT_WR_R38_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R38_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R38_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R38_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R38_IM_SIGN_EXT_SHIFT)) & SPT_WR_R38_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R39_RE - Work Register */
/*! @{ */
#define SPT_WR_R39_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R39_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R39_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R39_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R39_RE_RE_WR_SHIFT)) & SPT_WR_R39_RE_RE_WR_MASK)
#define SPT_WR_R39_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R39_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R39_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R39_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R39_RE_SIGN_EXT_SHIFT)) & SPT_WR_R39_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R39_IM - Work Register */
/*! @{ */
#define SPT_WR_R39_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R39_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R39_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R39_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R39_IM_IM_WR_SHIFT)) & SPT_WR_R39_IM_IM_WR_MASK)
#define SPT_WR_R39_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R39_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R39_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R39_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R39_IM_SIGN_EXT_SHIFT)) & SPT_WR_R39_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R40_RE - Work Register */
/*! @{ */
#define SPT_WR_R40_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R40_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R40_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R40_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R40_RE_RE_WR_SHIFT)) & SPT_WR_R40_RE_RE_WR_MASK)
#define SPT_WR_R40_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R40_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R40_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R40_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R40_RE_SIGN_EXT_SHIFT)) & SPT_WR_R40_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R40_IM - Work Register */
/*! @{ */
#define SPT_WR_R40_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R40_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R40_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R40_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R40_IM_IM_WR_SHIFT)) & SPT_WR_R40_IM_IM_WR_MASK)
#define SPT_WR_R40_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R40_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R40_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R40_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R40_IM_SIGN_EXT_SHIFT)) & SPT_WR_R40_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R41_RE - Work Register */
/*! @{ */
#define SPT_WR_R41_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R41_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R41_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R41_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R41_RE_RE_WR_SHIFT)) & SPT_WR_R41_RE_RE_WR_MASK)
#define SPT_WR_R41_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R41_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R41_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R41_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R41_RE_SIGN_EXT_SHIFT)) & SPT_WR_R41_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R41_IM - Work Register */
/*! @{ */
#define SPT_WR_R41_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R41_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R41_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R41_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R41_IM_IM_WR_SHIFT)) & SPT_WR_R41_IM_IM_WR_MASK)
#define SPT_WR_R41_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R41_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R41_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R41_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R41_IM_SIGN_EXT_SHIFT)) & SPT_WR_R41_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R42_RE - Work Register */
/*! @{ */
#define SPT_WR_R42_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R42_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R42_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R42_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R42_RE_RE_WR_SHIFT)) & SPT_WR_R42_RE_RE_WR_MASK)
#define SPT_WR_R42_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R42_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R42_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R42_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R42_RE_SIGN_EXT_SHIFT)) & SPT_WR_R42_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R42_IM - Work Register */
/*! @{ */
#define SPT_WR_R42_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R42_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R42_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R42_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R42_IM_IM_WR_SHIFT)) & SPT_WR_R42_IM_IM_WR_MASK)
#define SPT_WR_R42_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R42_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R42_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R42_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R42_IM_SIGN_EXT_SHIFT)) & SPT_WR_R42_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R43_RE - Work Register */
/*! @{ */
#define SPT_WR_R43_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R43_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R43_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R43_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R43_RE_RE_WR_SHIFT)) & SPT_WR_R43_RE_RE_WR_MASK)
#define SPT_WR_R43_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R43_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R43_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R43_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R43_RE_SIGN_EXT_SHIFT)) & SPT_WR_R43_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R43_IM - Work Register */
/*! @{ */
#define SPT_WR_R43_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R43_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R43_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R43_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R43_IM_IM_WR_SHIFT)) & SPT_WR_R43_IM_IM_WR_MASK)
#define SPT_WR_R43_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R43_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R43_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R43_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R43_IM_SIGN_EXT_SHIFT)) & SPT_WR_R43_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R44_RE - Work Register */
/*! @{ */
#define SPT_WR_R44_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R44_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R44_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R44_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R44_RE_RE_WR_SHIFT)) & SPT_WR_R44_RE_RE_WR_MASK)
#define SPT_WR_R44_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R44_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R44_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R44_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R44_RE_SIGN_EXT_SHIFT)) & SPT_WR_R44_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R44_IM - Work Register */
/*! @{ */
#define SPT_WR_R44_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R44_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R44_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R44_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R44_IM_IM_WR_SHIFT)) & SPT_WR_R44_IM_IM_WR_MASK)
#define SPT_WR_R44_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R44_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R44_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R44_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R44_IM_SIGN_EXT_SHIFT)) & SPT_WR_R44_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R45_RE - Work Register */
/*! @{ */
#define SPT_WR_R45_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R45_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R45_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R45_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R45_RE_RE_WR_SHIFT)) & SPT_WR_R45_RE_RE_WR_MASK)
#define SPT_WR_R45_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R45_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R45_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R45_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R45_RE_SIGN_EXT_SHIFT)) & SPT_WR_R45_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R45_IM - Work Register */
/*! @{ */
#define SPT_WR_R45_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R45_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R45_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R45_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R45_IM_IM_WR_SHIFT)) & SPT_WR_R45_IM_IM_WR_MASK)
#define SPT_WR_R45_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R45_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R45_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R45_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R45_IM_SIGN_EXT_SHIFT)) & SPT_WR_R45_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R46_RE - Work Register */
/*! @{ */
#define SPT_WR_R46_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R46_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R46_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R46_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R46_RE_RE_WR_SHIFT)) & SPT_WR_R46_RE_RE_WR_MASK)
#define SPT_WR_R46_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R46_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R46_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R46_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R46_RE_SIGN_EXT_SHIFT)) & SPT_WR_R46_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R46_IM - Work Register */
/*! @{ */
#define SPT_WR_R46_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R46_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R46_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R46_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R46_IM_IM_WR_SHIFT)) & SPT_WR_R46_IM_IM_WR_MASK)
#define SPT_WR_R46_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R46_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R46_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R46_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R46_IM_SIGN_EXT_SHIFT)) & SPT_WR_R46_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R47_RE - Work Register */
/*! @{ */
#define SPT_WR_R47_RE_RE_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R47_RE_RE_WR_SHIFT                (0U)
#define SPT_WR_R47_RE_RE_WR_WIDTH                (24U)
#define SPT_WR_R47_RE_RE_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R47_RE_RE_WR_SHIFT)) & SPT_WR_R47_RE_RE_WR_MASK)
#define SPT_WR_R47_RE_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R47_RE_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R47_RE_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R47_RE_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R47_RE_SIGN_EXT_SHIFT)) & SPT_WR_R47_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name WR_R47_IM - Work Register */
/*! @{ */
#define SPT_WR_R47_IM_IM_WR_MASK                 (0xFFFFFFU)
#define SPT_WR_R47_IM_IM_WR_SHIFT                (0U)
#define SPT_WR_R47_IM_IM_WR_WIDTH                (24U)
#define SPT_WR_R47_IM_IM_WR(x)                   (((uint32_t)(((uint32_t)(x)) << SPT_WR_R47_IM_IM_WR_SHIFT)) & SPT_WR_R47_IM_IM_WR_MASK)
#define SPT_WR_R47_IM_SIGN_EXT_MASK              (0xFF000000U)
#define SPT_WR_R47_IM_SIGN_EXT_SHIFT             (24U)
#define SPT_WR_R47_IM_SIGN_EXT_WIDTH             (8U)
#define SPT_WR_R47_IM_SIGN_EXT(x)                (((uint32_t)(((uint32_t)(x)) << SPT_WR_R47_IM_SIGN_EXT_SHIFT)) & SPT_WR_R47_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SCS0_JAM_INST0 - SCSa Jamming Instruction0 Register */
/*! @{ */
#define SPT_SCS0_JAM_INST0_JAM_INST_31_0_MASK    (0xFFFFFFFFU)
#define SPT_SCS0_JAM_INST0_JAM_INST_31_0_SHIFT   (0U)
#define SPT_SCS0_JAM_INST0_JAM_INST_31_0_WIDTH   (32U)
#define SPT_SCS0_JAM_INST0_JAM_INST_31_0(x)      (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_JAM_INST0_JAM_INST_31_0_SHIFT)) & SPT_SCS0_JAM_INST0_JAM_INST_31_0_MASK)
/*! @} */

/*! @name SCS0_JAM_INST1 - SCSa Jamming Instruction1 Register */
/*! @{ */
#define SPT_SCS0_JAM_INST1_JAM_INST_63_32_MASK   (0xFFFFFFFFU)
#define SPT_SCS0_JAM_INST1_JAM_INST_63_32_SHIFT  (0U)
#define SPT_SCS0_JAM_INST1_JAM_INST_63_32_WIDTH  (32U)
#define SPT_SCS0_JAM_INST1_JAM_INST_63_32(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_JAM_INST1_JAM_INST_63_32_SHIFT)) & SPT_SCS0_JAM_INST1_JAM_INST_63_32_MASK)
/*! @} */

/*! @name SCS0_JAM_INST2 - SCSa Jamming Instruction2 Register */
/*! @{ */
#define SPT_SCS0_JAM_INST2_JAM_INST_95_64_MASK   (0xFFFFFFFFU)
#define SPT_SCS0_JAM_INST2_JAM_INST_95_64_SHIFT  (0U)
#define SPT_SCS0_JAM_INST2_JAM_INST_95_64_WIDTH  (32U)
#define SPT_SCS0_JAM_INST2_JAM_INST_95_64(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_JAM_INST2_JAM_INST_95_64_SHIFT)) & SPT_SCS0_JAM_INST2_JAM_INST_95_64_MASK)
/*! @} */

/*! @name SCS0_JAM_INST3 - SCSa Jamming Instruction3 Register */
/*! @{ */
#define SPT_SCS0_JAM_INST3_JAM_INST_127_96_MASK  (0xFFFFFFFFU)
#define SPT_SCS0_JAM_INST3_JAM_INST_127_96_SHIFT (0U)
#define SPT_SCS0_JAM_INST3_JAM_INST_127_96_WIDTH (32U)
#define SPT_SCS0_JAM_INST3_JAM_INST_127_96(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_JAM_INST3_JAM_INST_127_96_SHIFT)) & SPT_SCS0_JAM_INST3_JAM_INST_127_96_MASK)
/*! @} */

/*! @name SCS0_CURR_INST_ADDR - SCSa Current Instruction Addr Register */
/*! @{ */
#define SPT_SCS0_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS0_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT (0U)
#define SPT_SCS0_CURR_INST_ADDR_CURRENT_INST_ADDR_WIDTH (32U)
#define SPT_SCS0_CURR_INST_ADDR_CURRENT_INST_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT)) & SPT_SCS0_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK)
/*! @} */

/*! @name SCS0_CURR_INST0 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS0_CURR_INST0_CURR_INST_31_0_MASK  (0xFFFFFFFFU)
#define SPT_SCS0_CURR_INST0_CURR_INST_31_0_SHIFT (0U)
#define SPT_SCS0_CURR_INST0_CURR_INST_31_0_WIDTH (32U)
#define SPT_SCS0_CURR_INST0_CURR_INST_31_0(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_CURR_INST0_CURR_INST_31_0_SHIFT)) & SPT_SCS0_CURR_INST0_CURR_INST_31_0_MASK)
/*! @} */

/*! @name SCS0_CURR_INST1 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS0_CURR_INST1_CURR_INST_63_32_MASK (0xFFFFFFFFU)
#define SPT_SCS0_CURR_INST1_CURR_INST_63_32_SHIFT (0U)
#define SPT_SCS0_CURR_INST1_CURR_INST_63_32_WIDTH (32U)
#define SPT_SCS0_CURR_INST1_CURR_INST_63_32(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_CURR_INST1_CURR_INST_63_32_SHIFT)) & SPT_SCS0_CURR_INST1_CURR_INST_63_32_MASK)
/*! @} */

/*! @name SCS0_CURR_INST2 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS0_CURR_INST2_CURR_INST_95_64_MASK (0xFFFFFFFFU)
#define SPT_SCS0_CURR_INST2_CURR_INST_95_64_SHIFT (0U)
#define SPT_SCS0_CURR_INST2_CURR_INST_95_64_WIDTH (32U)
#define SPT_SCS0_CURR_INST2_CURR_INST_95_64(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_CURR_INST2_CURR_INST_95_64_SHIFT)) & SPT_SCS0_CURR_INST2_CURR_INST_95_64_MASK)
/*! @} */

/*! @name SCS0_CURR_INST3 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS0_CURR_INST3_CURR_INST_127_96_MASK (0xFFFFFFFFU)
#define SPT_SCS0_CURR_INST3_CURR_INST_127_96_SHIFT (0U)
#define SPT_SCS0_CURR_INST3_CURR_INST_127_96_WIDTH (32U)
#define SPT_SCS0_CURR_INST3_CURR_INST_127_96(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_CURR_INST3_CURR_INST_127_96_SHIFT)) & SPT_SCS0_CURR_INST3_CURR_INST_127_96_MASK)
/*! @} */

/*! @name SCS0_LOOPCNTR01 - Loop Counter 0 and 1 Register */
/*! @{ */
#define SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR0_MASK  (0xFFFFU)
#define SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR0_SHIFT (0U)
#define SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR0_WIDTH (16U)
#define SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR0(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR0_SHIFT)) & SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR0_MASK)
#define SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR1_MASK  (0xFFFF0000U)
#define SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR1_SHIFT (16U)
#define SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR1_WIDTH (16U)
#define SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR1(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR1_SHIFT)) & SPT_SCS0_LOOPCNTR01_SCS_LOOP_CNTR1_MASK)
/*! @} */

/*! @name SCS0_LOOPCNTR23 - Loop Counter 2 and 3 Register */
/*! @{ */
#define SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR2_MASK  (0xFFFFU)
#define SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR2_SHIFT (0U)
#define SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR2_WIDTH (16U)
#define SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR2(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR2_SHIFT)) & SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR2_MASK)
#define SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR3_MASK  (0xFFFF0000U)
#define SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR3_SHIFT (16U)
#define SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR3_WIDTH (16U)
#define SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR3(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR3_SHIFT)) & SPT_SCS0_LOOPCNTR23_SCS_LOOP_CNTR3_MASK)
/*! @} */

/*! @name SCS0_ERR_INST_ADDR - SCSa Error Instruction Addr Register */
/*! @{ */
#define SPT_SCS0_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS0_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_SHIFT (0U)
#define SPT_SCS0_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_WIDTH (32U)
#define SPT_SCS0_ERR_INST_ADDR_SCS_ERROR_INST_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_SHIFT)) & SPT_SCS0_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_MASK)
/*! @} */

/*! @name SCS0_ERR_INST0 -  */
/*! @{ */
#define SPT_SCS0_ERR_INST0_SCS_ERR_INST_31_0_MASK (0xFFFFFFFFU)
#define SPT_SCS0_ERR_INST0_SCS_ERR_INST_31_0_SHIFT (0U)
#define SPT_SCS0_ERR_INST0_SCS_ERR_INST_31_0_WIDTH (32U)
#define SPT_SCS0_ERR_INST0_SCS_ERR_INST_31_0(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_ERR_INST0_SCS_ERR_INST_31_0_SHIFT)) & SPT_SCS0_ERR_INST0_SCS_ERR_INST_31_0_MASK)
/*! @} */

/*! @name SCS0_ERR_INST1 -  */
/*! @{ */
#define SPT_SCS0_ERR_INST1_SCS_ERR_INST_63_32_MASK (0xFFFFFFFFU)
#define SPT_SCS0_ERR_INST1_SCS_ERR_INST_63_32_SHIFT (0U)
#define SPT_SCS0_ERR_INST1_SCS_ERR_INST_63_32_WIDTH (32U)
#define SPT_SCS0_ERR_INST1_SCS_ERR_INST_63_32(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_ERR_INST1_SCS_ERR_INST_63_32_SHIFT)) & SPT_SCS0_ERR_INST1_SCS_ERR_INST_63_32_MASK)
/*! @} */

/*! @name SCS0_ERR_INST2 -  */
/*! @{ */
#define SPT_SCS0_ERR_INST2_SCS_ERR_INST_95_64_MASK (0xFFFFFFFFU)
#define SPT_SCS0_ERR_INST2_SCS_ERR_INST_95_64_SHIFT (0U)
#define SPT_SCS0_ERR_INST2_SCS_ERR_INST_95_64_WIDTH (32U)
#define SPT_SCS0_ERR_INST2_SCS_ERR_INST_95_64(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_ERR_INST2_SCS_ERR_INST_95_64_SHIFT)) & SPT_SCS0_ERR_INST2_SCS_ERR_INST_95_64_MASK)
/*! @} */

/*! @name SCS0_ERR_INST3 -  */
/*! @{ */
#define SPT_SCS0_ERR_INST3_SCS_ERR_INST_127_96_MASK (0xFFFFFFFFU)
#define SPT_SCS0_ERR_INST3_SCS_ERR_INST_127_96_SHIFT (0U)
#define SPT_SCS0_ERR_INST3_SCS_ERR_INST_127_96_WIDTH (32U)
#define SPT_SCS0_ERR_INST3_SCS_ERR_INST_127_96(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_ERR_INST3_SCS_ERR_INST_127_96_SHIFT)) & SPT_SCS0_ERR_INST3_SCS_ERR_INST_127_96_MASK)
/*! @} */

/*! @name SCS0_STATUS0 - SCSa General Status 0 Register */
/*! @{ */
#define SPT_SCS0_STATUS0_PS_START_MASK           (0x1U)
#define SPT_SCS0_STATUS0_PS_START_SHIFT          (0U)
#define SPT_SCS0_STATUS0_PS_START_WIDTH          (1U)
#define SPT_SCS0_STATUS0_PS_START(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_PS_START_SHIFT)) & SPT_SCS0_STATUS0_PS_START_MASK)
#define SPT_SCS0_STATUS0_PS_WAIT_MASK            (0x2U)
#define SPT_SCS0_STATUS0_PS_WAIT_SHIFT           (1U)
#define SPT_SCS0_STATUS0_PS_WAIT_WIDTH           (1U)
#define SPT_SCS0_STATUS0_PS_WAIT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_PS_WAIT_SHIFT)) & SPT_SCS0_STATUS0_PS_WAIT_MASK)
#define SPT_SCS0_STATUS0_PS_DEBUG_MASK           (0x4U)
#define SPT_SCS0_STATUS0_PS_DEBUG_SHIFT          (2U)
#define SPT_SCS0_STATUS0_PS_DEBUG_WIDTH          (1U)
#define SPT_SCS0_STATUS0_PS_DEBUG(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_PS_DEBUG_SHIFT)) & SPT_SCS0_STATUS0_PS_DEBUG_MASK)
#define SPT_SCS0_STATUS0_PS_STOP_MASK            (0x8U)
#define SPT_SCS0_STATUS0_PS_STOP_SHIFT           (3U)
#define SPT_SCS0_STATUS0_PS_STOP_WIDTH           (1U)
#define SPT_SCS0_STATUS0_PS_STOP(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_PS_STOP_SHIFT)) & SPT_SCS0_STATUS0_PS_STOP_MASK)
#define SPT_SCS0_STATUS0_PS_ASYNCSTOP_MASK       (0x10U)
#define SPT_SCS0_STATUS0_PS_ASYNCSTOP_SHIFT      (4U)
#define SPT_SCS0_STATUS0_PS_ASYNCSTOP_WIDTH      (1U)
#define SPT_SCS0_STATUS0_PS_ASYNCSTOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_PS_ASYNCSTOP_SHIFT)) & SPT_SCS0_STATUS0_PS_ASYNCSTOP_MASK)
#define SPT_SCS0_STATUS0_PS_RUN_MASK             (0x20U)
#define SPT_SCS0_STATUS0_PS_RUN_SHIFT            (5U)
#define SPT_SCS0_STATUS0_PS_RUN_WIDTH            (1U)
#define SPT_SCS0_STATUS0_PS_RUN(x)               (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_PS_RUN_SHIFT)) & SPT_SCS0_STATUS0_PS_RUN_MASK)
#define SPT_SCS0_STATUS0_MD_HALT_MASK            (0x40U)
#define SPT_SCS0_STATUS0_MD_HALT_SHIFT           (6U)
#define SPT_SCS0_STATUS0_MD_HALT_WIDTH           (1U)
#define SPT_SCS0_STATUS0_MD_HALT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_MD_HALT_SHIFT)) & SPT_SCS0_STATUS0_MD_HALT_MASK)
#define SPT_SCS0_STATUS0_MD_STEP_ONCE_MASK       (0x80U)
#define SPT_SCS0_STATUS0_MD_STEP_ONCE_SHIFT      (7U)
#define SPT_SCS0_STATUS0_MD_STEP_ONCE_WIDTH      (1U)
#define SPT_SCS0_STATUS0_MD_STEP_ONCE(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_MD_STEP_ONCE_SHIFT)) & SPT_SCS0_STATUS0_MD_STEP_ONCE_MASK)
#define SPT_SCS0_STATUS0_MD_STEP_JUMP_MASK       (0x100U)
#define SPT_SCS0_STATUS0_MD_STEP_JUMP_SHIFT      (8U)
#define SPT_SCS0_STATUS0_MD_STEP_JUMP_WIDTH      (1U)
#define SPT_SCS0_STATUS0_MD_STEP_JUMP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_MD_STEP_JUMP_SHIFT)) & SPT_SCS0_STATUS0_MD_STEP_JUMP_MASK)
#define SPT_SCS0_STATUS0_MD_JAM_MASK             (0x200U)
#define SPT_SCS0_STATUS0_MD_JAM_SHIFT            (9U)
#define SPT_SCS0_STATUS0_MD_JAM_WIDTH            (1U)
#define SPT_SCS0_STATUS0_MD_JAM(x)               (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_MD_JAM_SHIFT)) & SPT_SCS0_STATUS0_MD_JAM_MASK)
#define SPT_SCS0_STATUS0_STEP_ONCE_OVR_MASK      (0x400U)
#define SPT_SCS0_STATUS0_STEP_ONCE_OVR_SHIFT     (10U)
#define SPT_SCS0_STATUS0_STEP_ONCE_OVR_WIDTH     (1U)
#define SPT_SCS0_STATUS0_STEP_ONCE_OVR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_STEP_ONCE_OVR_SHIFT)) & SPT_SCS0_STATUS0_STEP_ONCE_OVR_MASK)
#define SPT_SCS0_STATUS0_STEP_JUMP_OVR_MASK      (0x800U)
#define SPT_SCS0_STATUS0_STEP_JUMP_OVR_SHIFT     (11U)
#define SPT_SCS0_STATUS0_STEP_JUMP_OVR_WIDTH     (1U)
#define SPT_SCS0_STATUS0_STEP_JUMP_OVR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_STEP_JUMP_OVR_SHIFT)) & SPT_SCS0_STATUS0_STEP_JUMP_OVR_MASK)
#define SPT_SCS0_STATUS0_JAM_OVR_MASK            (0x1000U)
#define SPT_SCS0_STATUS0_JAM_OVR_SHIFT           (12U)
#define SPT_SCS0_STATUS0_JAM_OVR_WIDTH           (1U)
#define SPT_SCS0_STATUS0_JAM_OVR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_JAM_OVR_SHIFT)) & SPT_SCS0_STATUS0_JAM_OVR_MASK)
#define SPT_SCS0_STATUS0_BKPT0_OCC_MASK          (0x2000U)
#define SPT_SCS0_STATUS0_BKPT0_OCC_SHIFT         (13U)
#define SPT_SCS0_STATUS0_BKPT0_OCC_WIDTH         (1U)
#define SPT_SCS0_STATUS0_BKPT0_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_BKPT0_OCC_SHIFT)) & SPT_SCS0_STATUS0_BKPT0_OCC_MASK)
#define SPT_SCS0_STATUS0_BKPT1_OCC_MASK          (0x4000U)
#define SPT_SCS0_STATUS0_BKPT1_OCC_SHIFT         (14U)
#define SPT_SCS0_STATUS0_BKPT1_OCC_WIDTH         (1U)
#define SPT_SCS0_STATUS0_BKPT1_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_BKPT1_OCC_SHIFT)) & SPT_SCS0_STATUS0_BKPT1_OCC_MASK)
#define SPT_SCS0_STATUS0_BKPT2_OCC_MASK          (0x8000U)
#define SPT_SCS0_STATUS0_BKPT2_OCC_SHIFT         (15U)
#define SPT_SCS0_STATUS0_BKPT2_OCC_WIDTH         (1U)
#define SPT_SCS0_STATUS0_BKPT2_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_BKPT2_OCC_SHIFT)) & SPT_SCS0_STATUS0_BKPT2_OCC_MASK)
#define SPT_SCS0_STATUS0_BKPT3_OCC_MASK          (0x10000U)
#define SPT_SCS0_STATUS0_BKPT3_OCC_SHIFT         (16U)
#define SPT_SCS0_STATUS0_BKPT3_OCC_WIDTH         (1U)
#define SPT_SCS0_STATUS0_BKPT3_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS0_BKPT3_OCC_SHIFT)) & SPT_SCS0_STATUS0_BKPT3_OCC_MASK)
/*! @} */

/*! @name SCS0_STATUS1 - SCSa General Status 1 Register */
/*! @{ */
#define SPT_SCS0_STATUS1_ILL_OPCODE_MASK         (0x1U)
#define SPT_SCS0_STATUS1_ILL_OPCODE_SHIFT        (0U)
#define SPT_SCS0_STATUS1_ILL_OPCODE_WIDTH        (1U)
#define SPT_SCS0_STATUS1_ILL_OPCODE(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_ILL_OPCODE_SHIFT)) & SPT_SCS0_STATUS1_ILL_OPCODE_MASK)
#define SPT_SCS0_STATUS1_ILL_LOOP_MASK           (0x2U)
#define SPT_SCS0_STATUS1_ILL_LOOP_SHIFT          (1U)
#define SPT_SCS0_STATUS1_ILL_LOOP_WIDTH          (1U)
#define SPT_SCS0_STATUS1_ILL_LOOP(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_ILL_LOOP_SHIFT)) & SPT_SCS0_STATUS1_ILL_LOOP_MASK)
#define SPT_SCS0_STATUS1_ILL_0CNTLOOP_MASK       (0x4U)
#define SPT_SCS0_STATUS1_ILL_0CNTLOOP_SHIFT      (2U)
#define SPT_SCS0_STATUS1_ILL_0CNTLOOP_WIDTH      (1U)
#define SPT_SCS0_STATUS1_ILL_0CNTLOOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_ILL_0CNTLOOP_SHIFT)) & SPT_SCS0_STATUS1_ILL_0CNTLOOP_MASK)
#define SPT_SCS0_STATUS1_ILL_NEXT_MASK           (0x8U)
#define SPT_SCS0_STATUS1_ILL_NEXT_SHIFT          (3U)
#define SPT_SCS0_STATUS1_ILL_NEXT_WIDTH          (1U)
#define SPT_SCS0_STATUS1_ILL_NEXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_ILL_NEXT_SHIFT)) & SPT_SCS0_STATUS1_ILL_NEXT_MASK)
#define SPT_SCS0_STATUS1_ILL_SET_MASK            (0x10U)
#define SPT_SCS0_STATUS1_ILL_SET_SHIFT           (4U)
#define SPT_SCS0_STATUS1_ILL_SET_WIDTH           (1U)
#define SPT_SCS0_STATUS1_ILL_SET(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_ILL_SET_SHIFT)) & SPT_SCS0_STATUS1_ILL_SET_MASK)
#define SPT_SCS0_STATUS1_ILL_GET_MASK            (0x20U)
#define SPT_SCS0_STATUS1_ILL_GET_SHIFT           (5U)
#define SPT_SCS0_STATUS1_ILL_GET_WIDTH           (1U)
#define SPT_SCS0_STATUS1_ILL_GET(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_ILL_GET_SHIFT)) & SPT_SCS0_STATUS1_ILL_GET_MASK)
#define SPT_SCS0_STATUS1_ILL_ADD_MASK            (0x40U)
#define SPT_SCS0_STATUS1_ILL_ADD_SHIFT           (6U)
#define SPT_SCS0_STATUS1_ILL_ADD_WIDTH           (1U)
#define SPT_SCS0_STATUS1_ILL_ADD(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_ILL_ADD_SHIFT)) & SPT_SCS0_STATUS1_ILL_ADD_MASK)
#define SPT_SCS0_STATUS1_JAM_ILL_OPCODE_MASK     (0x80U)
#define SPT_SCS0_STATUS1_JAM_ILL_OPCODE_SHIFT    (7U)
#define SPT_SCS0_STATUS1_JAM_ILL_OPCODE_WIDTH    (1U)
#define SPT_SCS0_STATUS1_JAM_ILL_OPCODE(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_JAM_ILL_OPCODE_SHIFT)) & SPT_SCS0_STATUS1_JAM_ILL_OPCODE_MASK)
#define SPT_SCS0_STATUS1_JAM_ILL_SYNC_MASK       (0x100U)
#define SPT_SCS0_STATUS1_JAM_ILL_SYNC_SHIFT      (8U)
#define SPT_SCS0_STATUS1_JAM_ILL_SYNC_WIDTH      (1U)
#define SPT_SCS0_STATUS1_JAM_ILL_SYNC(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_JAM_ILL_SYNC_SHIFT)) & SPT_SCS0_STATUS1_JAM_ILL_SYNC_MASK)
#define SPT_SCS0_STATUS1_JAM_ILL_LOOP_MASK       (0x200U)
#define SPT_SCS0_STATUS1_JAM_ILL_LOOP_SHIFT      (9U)
#define SPT_SCS0_STATUS1_JAM_ILL_LOOP_WIDTH      (1U)
#define SPT_SCS0_STATUS1_JAM_ILL_LOOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_JAM_ILL_LOOP_SHIFT)) & SPT_SCS0_STATUS1_JAM_ILL_LOOP_MASK)
#define SPT_SCS0_STATUS1_JAM_ILL_NEXT_MASK       (0x400U)
#define SPT_SCS0_STATUS1_JAM_ILL_NEXT_SHIFT      (10U)
#define SPT_SCS0_STATUS1_JAM_ILL_NEXT_WIDTH      (1U)
#define SPT_SCS0_STATUS1_JAM_ILL_NEXT(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_JAM_ILL_NEXT_SHIFT)) & SPT_SCS0_STATUS1_JAM_ILL_NEXT_MASK)
#define SPT_SCS0_STATUS1_JAM_ILL_JUMP_MASK       (0x800U)
#define SPT_SCS0_STATUS1_JAM_ILL_JUMP_SHIFT      (11U)
#define SPT_SCS0_STATUS1_JAM_ILL_JUMP_WIDTH      (1U)
#define SPT_SCS0_STATUS1_JAM_ILL_JUMP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS1_JAM_ILL_JUMP_SHIFT)) & SPT_SCS0_STATUS1_JAM_ILL_JUMP_MASK)
/*! @} */

/*! @name SCS0_STATUS2 - SCSa General Status2 Register */
/*! @{ */
#define SPT_SCS0_STATUS2_WAITREG_SW_MASK         (0xFFFFU)
#define SPT_SCS0_STATUS2_WAITREG_SW_SHIFT        (0U)
#define SPT_SCS0_STATUS2_WAITREG_SW_WIDTH        (16U)
#define SPT_SCS0_STATUS2_WAITREG_SW(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS2_WAITREG_SW_SHIFT)) & SPT_SCS0_STATUS2_WAITREG_SW_MASK)
#define SPT_SCS0_STATUS2_WAITREG_EVT_NUMBER_MASK (0x7F0000U)
#define SPT_SCS0_STATUS2_WAITREG_EVT_NUMBER_SHIFT (16U)
#define SPT_SCS0_STATUS2_WAITREG_EVT_NUMBER_WIDTH (7U)
#define SPT_SCS0_STATUS2_WAITREG_EVT_NUMBER(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS2_WAITREG_EVT_NUMBER_SHIFT)) & SPT_SCS0_STATUS2_WAITREG_EVT_NUMBER_MASK)
#define SPT_SCS0_STATUS2_WAITREG_EVT_TYPE_MASK   (0x60000000U)
#define SPT_SCS0_STATUS2_WAITREG_EVT_TYPE_SHIFT  (29U)
#define SPT_SCS0_STATUS2_WAITREG_EVT_TYPE_WIDTH  (2U)
#define SPT_SCS0_STATUS2_WAITREG_EVT_TYPE(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS2_WAITREG_EVT_TYPE_SHIFT)) & SPT_SCS0_STATUS2_WAITREG_EVT_TYPE_MASK)
/*! @} */

/*! @name SCS0_STATUS3 - SCSa General Status 3 Register */
/*! @{ */
#define SPT_SCS0_STATUS3_LOOP_DEPTH_MASK         (0x7U)
#define SPT_SCS0_STATUS3_LOOP_DEPTH_SHIFT        (0U)
#define SPT_SCS0_STATUS3_LOOP_DEPTH_WIDTH        (3U)
#define SPT_SCS0_STATUS3_LOOP_DEPTH(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS3_LOOP_DEPTH_SHIFT)) & SPT_SCS0_STATUS3_LOOP_DEPTH_MASK)
#define SPT_SCS0_STATUS3_PROC_STATE_MASK         (0x78U)
#define SPT_SCS0_STATUS3_PROC_STATE_SHIFT        (3U)
#define SPT_SCS0_STATUS3_PROC_STATE_WIDTH        (4U)
#define SPT_SCS0_STATUS3_PROC_STATE(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_STATUS3_PROC_STATE_SHIFT)) & SPT_SCS0_STATUS3_PROC_STATE_MASK)
/*! @} */

/*! @name SCS0_INTEN0 - SCS Interrupt Enable Register 0 */
/*! @{ */
#define SPT_SCS0_INTEN0_PS_START_INTEN_MASK      (0x1U)
#define SPT_SCS0_INTEN0_PS_START_INTEN_SHIFT     (0U)
#define SPT_SCS0_INTEN0_PS_START_INTEN_WIDTH     (1U)
#define SPT_SCS0_INTEN0_PS_START_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_PS_START_INTEN_SHIFT)) & SPT_SCS0_INTEN0_PS_START_INTEN_MASK)
#define SPT_SCS0_INTEN0_PS_WAIT_INTEN_MASK       (0x2U)
#define SPT_SCS0_INTEN0_PS_WAIT_INTEN_SHIFT      (1U)
#define SPT_SCS0_INTEN0_PS_WAIT_INTEN_WIDTH      (1U)
#define SPT_SCS0_INTEN0_PS_WAIT_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_PS_WAIT_INTEN_SHIFT)) & SPT_SCS0_INTEN0_PS_WAIT_INTEN_MASK)
#define SPT_SCS0_INTEN0_PS_DEBUG_INTEN_MASK      (0x4U)
#define SPT_SCS0_INTEN0_PS_DEBUG_INTEN_SHIFT     (2U)
#define SPT_SCS0_INTEN0_PS_DEBUG_INTEN_WIDTH     (1U)
#define SPT_SCS0_INTEN0_PS_DEBUG_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_PS_DEBUG_INTEN_SHIFT)) & SPT_SCS0_INTEN0_PS_DEBUG_INTEN_MASK)
#define SPT_SCS0_INTEN0_PS_STOP_INTEN_MASK       (0x8U)
#define SPT_SCS0_INTEN0_PS_STOP_INTEN_SHIFT      (3U)
#define SPT_SCS0_INTEN0_PS_STOP_INTEN_WIDTH      (1U)
#define SPT_SCS0_INTEN0_PS_STOP_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_PS_STOP_INTEN_SHIFT)) & SPT_SCS0_INTEN0_PS_STOP_INTEN_MASK)
#define SPT_SCS0_INTEN0_PS_ASYNCSTOP_INTEN_MASK  (0x10U)
#define SPT_SCS0_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT (4U)
#define SPT_SCS0_INTEN0_PS_ASYNCSTOP_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN0_PS_ASYNCSTOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT)) & SPT_SCS0_INTEN0_PS_ASYNCSTOP_INTEN_MASK)
#define SPT_SCS0_INTEN0_PS_RUN_INTEN_MASK        (0x20U)
#define SPT_SCS0_INTEN0_PS_RUN_INTEN_SHIFT       (5U)
#define SPT_SCS0_INTEN0_PS_RUN_INTEN_WIDTH       (1U)
#define SPT_SCS0_INTEN0_PS_RUN_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_PS_RUN_INTEN_SHIFT)) & SPT_SCS0_INTEN0_PS_RUN_INTEN_MASK)
#define SPT_SCS0_INTEN0_MD_HALT_INTEN_MASK       (0x40U)
#define SPT_SCS0_INTEN0_MD_HALT_INTEN_SHIFT      (6U)
#define SPT_SCS0_INTEN0_MD_HALT_INTEN_WIDTH      (1U)
#define SPT_SCS0_INTEN0_MD_HALT_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_MD_HALT_INTEN_SHIFT)) & SPT_SCS0_INTEN0_MD_HALT_INTEN_MASK)
#define SPT_SCS0_INTEN0_MD_STEP_ONCE_INTEN_MASK  (0x80U)
#define SPT_SCS0_INTEN0_MD_STEP_ONCE_INTEN_SHIFT (7U)
#define SPT_SCS0_INTEN0_MD_STEP_ONCE_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN0_MD_STEP_ONCE_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_MD_STEP_ONCE_INTEN_SHIFT)) & SPT_SCS0_INTEN0_MD_STEP_ONCE_INTEN_MASK)
#define SPT_SCS0_INTEN0_MD_STEP_JUMP_INTEN_MASK  (0x100U)
#define SPT_SCS0_INTEN0_MD_STEP_JUMP_INTEN_SHIFT (8U)
#define SPT_SCS0_INTEN0_MD_STEP_JUMP_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN0_MD_STEP_JUMP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_MD_STEP_JUMP_INTEN_SHIFT)) & SPT_SCS0_INTEN0_MD_STEP_JUMP_INTEN_MASK)
#define SPT_SCS0_INTEN0_MD_JAM_INTEN_MASK        (0x200U)
#define SPT_SCS0_INTEN0_MD_JAM_INTEN_SHIFT       (9U)
#define SPT_SCS0_INTEN0_MD_JAM_INTEN_WIDTH       (1U)
#define SPT_SCS0_INTEN0_MD_JAM_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_MD_JAM_INTEN_SHIFT)) & SPT_SCS0_INTEN0_MD_JAM_INTEN_MASK)
#define SPT_SCS0_INTEN0_STEP_ONCE_OVR_INTEN_MASK (0x400U)
#define SPT_SCS0_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT (10U)
#define SPT_SCS0_INTEN0_STEP_ONCE_OVR_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN0_STEP_ONCE_OVR_INTEN(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT)) & SPT_SCS0_INTEN0_STEP_ONCE_OVR_INTEN_MASK)
#define SPT_SCS0_INTEN0_STEP_JUMP_OVR_INTEN_MASK (0x800U)
#define SPT_SCS0_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT (11U)
#define SPT_SCS0_INTEN0_STEP_JUMP_OVR_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN0_STEP_JUMP_OVR_INTEN(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT)) & SPT_SCS0_INTEN0_STEP_JUMP_OVR_INTEN_MASK)
#define SPT_SCS0_INTEN0_JAM_OVR_INTEN_MASK       (0x1000U)
#define SPT_SCS0_INTEN0_JAM_OVR_INTEN_SHIFT      (12U)
#define SPT_SCS0_INTEN0_JAM_OVR_INTEN_WIDTH      (1U)
#define SPT_SCS0_INTEN0_JAM_OVR_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_JAM_OVR_INTEN_SHIFT)) & SPT_SCS0_INTEN0_JAM_OVR_INTEN_MASK)
#define SPT_SCS0_INTEN0_BKPT0_OCC_INTEN_MASK     (0x2000U)
#define SPT_SCS0_INTEN0_BKPT0_OCC_INTEN_SHIFT    (13U)
#define SPT_SCS0_INTEN0_BKPT0_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS0_INTEN0_BKPT0_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_BKPT0_OCC_INTEN_SHIFT)) & SPT_SCS0_INTEN0_BKPT0_OCC_INTEN_MASK)
#define SPT_SCS0_INTEN0_BKPT1_OCC_INTEN_MASK     (0x4000U)
#define SPT_SCS0_INTEN0_BKPT1_OCC_INTEN_SHIFT    (14U)
#define SPT_SCS0_INTEN0_BKPT1_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS0_INTEN0_BKPT1_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_BKPT1_OCC_INTEN_SHIFT)) & SPT_SCS0_INTEN0_BKPT1_OCC_INTEN_MASK)
#define SPT_SCS0_INTEN0_BKPT2_OCC_INTEN_MASK     (0x8000U)
#define SPT_SCS0_INTEN0_BKPT2_OCC_INTEN_SHIFT    (15U)
#define SPT_SCS0_INTEN0_BKPT2_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS0_INTEN0_BKPT2_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_BKPT2_OCC_INTEN_SHIFT)) & SPT_SCS0_INTEN0_BKPT2_OCC_INTEN_MASK)
#define SPT_SCS0_INTEN0_BKPT3_OCC_INTEN_MASK     (0x10000U)
#define SPT_SCS0_INTEN0_BKPT3_OCC_INTEN_SHIFT    (16U)
#define SPT_SCS0_INTEN0_BKPT3_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS0_INTEN0_BKPT3_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN0_BKPT3_OCC_INTEN_SHIFT)) & SPT_SCS0_INTEN0_BKPT3_OCC_INTEN_MASK)
/*! @} */

/*! @name SCS0_INTEN1 - SCS Interrupt Enable Register 1 */
/*! @{ */
#define SPT_SCS0_INTEN1_ILL_OPCODE_INTEN_MASK    (0x1U)
#define SPT_SCS0_INTEN1_ILL_OPCODE_INTEN_SHIFT   (0U)
#define SPT_SCS0_INTEN1_ILL_OPCODE_INTEN_WIDTH   (1U)
#define SPT_SCS0_INTEN1_ILL_OPCODE_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_ILL_OPCODE_INTEN_SHIFT)) & SPT_SCS0_INTEN1_ILL_OPCODE_INTEN_MASK)
#define SPT_SCS0_INTEN1_ILL_LOOP_INTEN_MASK      (0x2U)
#define SPT_SCS0_INTEN1_ILL_LOOP_INTEN_SHIFT     (1U)
#define SPT_SCS0_INTEN1_ILL_LOOP_INTEN_WIDTH     (1U)
#define SPT_SCS0_INTEN1_ILL_LOOP_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_ILL_LOOP_INTEN_SHIFT)) & SPT_SCS0_INTEN1_ILL_LOOP_INTEN_MASK)
#define SPT_SCS0_INTEN1_ILL_0CNTLOOP_INTEN_MASK  (0x4U)
#define SPT_SCS0_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT (2U)
#define SPT_SCS0_INTEN1_ILL_0CNTLOOP_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN1_ILL_0CNTLOOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT)) & SPT_SCS0_INTEN1_ILL_0CNTLOOP_INTEN_MASK)
#define SPT_SCS0_INTEN1_ILL_NEXT_INTEN_MASK      (0x8U)
#define SPT_SCS0_INTEN1_ILL_NEXT_INTEN_SHIFT     (3U)
#define SPT_SCS0_INTEN1_ILL_NEXT_INTEN_WIDTH     (1U)
#define SPT_SCS0_INTEN1_ILL_NEXT_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_ILL_NEXT_INTEN_SHIFT)) & SPT_SCS0_INTEN1_ILL_NEXT_INTEN_MASK)
#define SPT_SCS0_INTEN1_ILL_SET_INTEN_MASK       (0x10U)
#define SPT_SCS0_INTEN1_ILL_SET_INTEN_SHIFT      (4U)
#define SPT_SCS0_INTEN1_ILL_SET_INTEN_WIDTH      (1U)
#define SPT_SCS0_INTEN1_ILL_SET_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_ILL_SET_INTEN_SHIFT)) & SPT_SCS0_INTEN1_ILL_SET_INTEN_MASK)
#define SPT_SCS0_INTEN1_ILL_GET_INTEN_MASK       (0x20U)
#define SPT_SCS0_INTEN1_ILL_GET_INTEN_SHIFT      (5U)
#define SPT_SCS0_INTEN1_ILL_GET_INTEN_WIDTH      (1U)
#define SPT_SCS0_INTEN1_ILL_GET_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_ILL_GET_INTEN_SHIFT)) & SPT_SCS0_INTEN1_ILL_GET_INTEN_MASK)
#define SPT_SCS0_INTEN1_ILL_ADD_INTEN_MASK       (0x40U)
#define SPT_SCS0_INTEN1_ILL_ADD_INTEN_SHIFT      (6U)
#define SPT_SCS0_INTEN1_ILL_ADD_INTEN_WIDTH      (1U)
#define SPT_SCS0_INTEN1_ILL_ADD_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_ILL_ADD_INTEN_SHIFT)) & SPT_SCS0_INTEN1_ILL_ADD_INTEN_MASK)
#define SPT_SCS0_INTEN1_JAM_ILL_OPCODE_INTEN_MASK (0x80U)
#define SPT_SCS0_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT (7U)
#define SPT_SCS0_INTEN1_JAM_ILL_OPCODE_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN1_JAM_ILL_OPCODE_INTEN(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT)) & SPT_SCS0_INTEN1_JAM_ILL_OPCODE_INTEN_MASK)
#define SPT_SCS0_INTEN1_JAM_ILL_SYNC_INTEN_MASK  (0x100U)
#define SPT_SCS0_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT (8U)
#define SPT_SCS0_INTEN1_JAM_ILL_SYNC_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN1_JAM_ILL_SYNC_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT)) & SPT_SCS0_INTEN1_JAM_ILL_SYNC_INTEN_MASK)
#define SPT_SCS0_INTEN1_JAM_ILL_LOOP_INTEN_MASK  (0x200U)
#define SPT_SCS0_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT (9U)
#define SPT_SCS0_INTEN1_JAM_ILL_LOOP_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN1_JAM_ILL_LOOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT)) & SPT_SCS0_INTEN1_JAM_ILL_LOOP_INTEN_MASK)
#define SPT_SCS0_INTEN1_JAM_ILL_NEXT_INTEN_MASK  (0x400U)
#define SPT_SCS0_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT (10U)
#define SPT_SCS0_INTEN1_JAM_ILL_NEXT_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN1_JAM_ILL_NEXT_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT)) & SPT_SCS0_INTEN1_JAM_ILL_NEXT_INTEN_MASK)
#define SPT_SCS0_INTEN1_JAM_ILL_JUMP_INTEN_MASK  (0x800U)
#define SPT_SCS0_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT (11U)
#define SPT_SCS0_INTEN1_JAM_ILL_JUMP_INTEN_WIDTH (1U)
#define SPT_SCS0_INTEN1_JAM_ILL_JUMP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT)) & SPT_SCS0_INTEN1_JAM_ILL_JUMP_INTEN_MASK)
/*! @} */

/*! @name SCS0_PDMA_TRANSFER_COUNT_STATUS - SCS PDMA Transfer Count Status */
/*! @{ */
#define SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK (0xFFFFU)
#define SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT (0U)
#define SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_WIDTH (16U)
#define SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT)) & SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK)
#define SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK (0xFFFF0000U)
#define SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT (16U)
#define SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_WIDTH (16U)
#define SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT)) & SPT_SCS0_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK)
/*! @} */

/*! @name SCS0_PDMA_FMTB_EXP_ADDR_STATUS - SCS PDMA formatB Exponent Address status Register */
/*! @{ */
#define SPT_SCS0_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS0_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT (0U)
#define SPT_SCS0_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_WIDTH (32U)
#define SPT_SCS0_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS0_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT)) & SPT_SCS0_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK)
/*! @} */

/*! @name SCS1_JAM_INST0 - SCSa Jamming Instruction0 Register */
/*! @{ */
#define SPT_SCS1_JAM_INST0_JAM_INST_31_0_MASK    (0xFFFFFFFFU)
#define SPT_SCS1_JAM_INST0_JAM_INST_31_0_SHIFT   (0U)
#define SPT_SCS1_JAM_INST0_JAM_INST_31_0_WIDTH   (32U)
#define SPT_SCS1_JAM_INST0_JAM_INST_31_0(x)      (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_JAM_INST0_JAM_INST_31_0_SHIFT)) & SPT_SCS1_JAM_INST0_JAM_INST_31_0_MASK)
/*! @} */

/*! @name SCS1_JAM_INST1 - SCSa Jamming Instruction1 Register */
/*! @{ */
#define SPT_SCS1_JAM_INST1_JAM_INST_63_32_MASK   (0xFFFFFFFFU)
#define SPT_SCS1_JAM_INST1_JAM_INST_63_32_SHIFT  (0U)
#define SPT_SCS1_JAM_INST1_JAM_INST_63_32_WIDTH  (32U)
#define SPT_SCS1_JAM_INST1_JAM_INST_63_32(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_JAM_INST1_JAM_INST_63_32_SHIFT)) & SPT_SCS1_JAM_INST1_JAM_INST_63_32_MASK)
/*! @} */

/*! @name SCS1_JAM_INST2 - SCSa Jamming Instruction2 Register */
/*! @{ */
#define SPT_SCS1_JAM_INST2_JAM_INST_95_64_MASK   (0xFFFFFFFFU)
#define SPT_SCS1_JAM_INST2_JAM_INST_95_64_SHIFT  (0U)
#define SPT_SCS1_JAM_INST2_JAM_INST_95_64_WIDTH  (32U)
#define SPT_SCS1_JAM_INST2_JAM_INST_95_64(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_JAM_INST2_JAM_INST_95_64_SHIFT)) & SPT_SCS1_JAM_INST2_JAM_INST_95_64_MASK)
/*! @} */

/*! @name SCS1_JAM_INST3 - SCSa Jamming Instruction3 Register */
/*! @{ */
#define SPT_SCS1_JAM_INST3_JAM_INST_127_96_MASK  (0xFFFFFFFFU)
#define SPT_SCS1_JAM_INST3_JAM_INST_127_96_SHIFT (0U)
#define SPT_SCS1_JAM_INST3_JAM_INST_127_96_WIDTH (32U)
#define SPT_SCS1_JAM_INST3_JAM_INST_127_96(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_JAM_INST3_JAM_INST_127_96_SHIFT)) & SPT_SCS1_JAM_INST3_JAM_INST_127_96_MASK)
/*! @} */

/*! @name SCS1_CURR_INST_ADDR - SCSa Current Instruction Addr Register */
/*! @{ */
#define SPT_SCS1_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS1_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT (0U)
#define SPT_SCS1_CURR_INST_ADDR_CURRENT_INST_ADDR_WIDTH (32U)
#define SPT_SCS1_CURR_INST_ADDR_CURRENT_INST_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT)) & SPT_SCS1_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK)
/*! @} */

/*! @name SCS1_CURR_INST0 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS1_CURR_INST0_CURR_INST_31_0_MASK  (0xFFFFFFFFU)
#define SPT_SCS1_CURR_INST0_CURR_INST_31_0_SHIFT (0U)
#define SPT_SCS1_CURR_INST0_CURR_INST_31_0_WIDTH (32U)
#define SPT_SCS1_CURR_INST0_CURR_INST_31_0(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_CURR_INST0_CURR_INST_31_0_SHIFT)) & SPT_SCS1_CURR_INST0_CURR_INST_31_0_MASK)
/*! @} */

/*! @name SCS1_CURR_INST1 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS1_CURR_INST1_CURR_INST_63_32_MASK (0xFFFFFFFFU)
#define SPT_SCS1_CURR_INST1_CURR_INST_63_32_SHIFT (0U)
#define SPT_SCS1_CURR_INST1_CURR_INST_63_32_WIDTH (32U)
#define SPT_SCS1_CURR_INST1_CURR_INST_63_32(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_CURR_INST1_CURR_INST_63_32_SHIFT)) & SPT_SCS1_CURR_INST1_CURR_INST_63_32_MASK)
/*! @} */

/*! @name SCS1_CURR_INST2 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS1_CURR_INST2_CURR_INST_95_64_MASK (0xFFFFFFFFU)
#define SPT_SCS1_CURR_INST2_CURR_INST_95_64_SHIFT (0U)
#define SPT_SCS1_CURR_INST2_CURR_INST_95_64_WIDTH (32U)
#define SPT_SCS1_CURR_INST2_CURR_INST_95_64(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_CURR_INST2_CURR_INST_95_64_SHIFT)) & SPT_SCS1_CURR_INST2_CURR_INST_95_64_MASK)
/*! @} */

/*! @name SCS1_CURR_INST3 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS1_CURR_INST3_CURR_INST_127_96_MASK (0xFFFFFFFFU)
#define SPT_SCS1_CURR_INST3_CURR_INST_127_96_SHIFT (0U)
#define SPT_SCS1_CURR_INST3_CURR_INST_127_96_WIDTH (32U)
#define SPT_SCS1_CURR_INST3_CURR_INST_127_96(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_CURR_INST3_CURR_INST_127_96_SHIFT)) & SPT_SCS1_CURR_INST3_CURR_INST_127_96_MASK)
/*! @} */

/*! @name SCS1_LOOPCNTR01 - Loop Counter 0 and 1 Register */
/*! @{ */
#define SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR0_MASK  (0xFFFFU)
#define SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR0_SHIFT (0U)
#define SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR0_WIDTH (16U)
#define SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR0(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR0_SHIFT)) & SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR0_MASK)
#define SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR1_MASK  (0xFFFF0000U)
#define SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR1_SHIFT (16U)
#define SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR1_WIDTH (16U)
#define SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR1(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR1_SHIFT)) & SPT_SCS1_LOOPCNTR01_SCS_LOOP_CNTR1_MASK)
/*! @} */

/*! @name SCS1_LOOPCNTR23 - Loop Counter 2 and 3 Register */
/*! @{ */
#define SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR2_MASK  (0xFFFFU)
#define SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR2_SHIFT (0U)
#define SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR2_WIDTH (16U)
#define SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR2(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR2_SHIFT)) & SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR2_MASK)
#define SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR3_MASK  (0xFFFF0000U)
#define SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR3_SHIFT (16U)
#define SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR3_WIDTH (16U)
#define SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR3(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR3_SHIFT)) & SPT_SCS1_LOOPCNTR23_SCS_LOOP_CNTR3_MASK)
/*! @} */

/*! @name SCS1_ERR_INST_ADDR - SCSa Error Instruction Addr Register */
/*! @{ */
#define SPT_SCS1_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS1_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_SHIFT (0U)
#define SPT_SCS1_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_WIDTH (32U)
#define SPT_SCS1_ERR_INST_ADDR_SCS_ERROR_INST_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_SHIFT)) & SPT_SCS1_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_MASK)
/*! @} */

/*! @name SCS1_ERR_INST0 -  */
/*! @{ */
#define SPT_SCS1_ERR_INST0_SCS_ERR_INST_31_0_MASK (0xFFFFFFFFU)
#define SPT_SCS1_ERR_INST0_SCS_ERR_INST_31_0_SHIFT (0U)
#define SPT_SCS1_ERR_INST0_SCS_ERR_INST_31_0_WIDTH (32U)
#define SPT_SCS1_ERR_INST0_SCS_ERR_INST_31_0(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_ERR_INST0_SCS_ERR_INST_31_0_SHIFT)) & SPT_SCS1_ERR_INST0_SCS_ERR_INST_31_0_MASK)
/*! @} */

/*! @name SCS1_ERR_INST1 -  */
/*! @{ */
#define SPT_SCS1_ERR_INST1_SCS_ERR_INST_63_32_MASK (0xFFFFFFFFU)
#define SPT_SCS1_ERR_INST1_SCS_ERR_INST_63_32_SHIFT (0U)
#define SPT_SCS1_ERR_INST1_SCS_ERR_INST_63_32_WIDTH (32U)
#define SPT_SCS1_ERR_INST1_SCS_ERR_INST_63_32(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_ERR_INST1_SCS_ERR_INST_63_32_SHIFT)) & SPT_SCS1_ERR_INST1_SCS_ERR_INST_63_32_MASK)
/*! @} */

/*! @name SCS1_ERR_INST2 -  */
/*! @{ */
#define SPT_SCS1_ERR_INST2_SCS_ERR_INST_95_64_MASK (0xFFFFFFFFU)
#define SPT_SCS1_ERR_INST2_SCS_ERR_INST_95_64_SHIFT (0U)
#define SPT_SCS1_ERR_INST2_SCS_ERR_INST_95_64_WIDTH (32U)
#define SPT_SCS1_ERR_INST2_SCS_ERR_INST_95_64(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_ERR_INST2_SCS_ERR_INST_95_64_SHIFT)) & SPT_SCS1_ERR_INST2_SCS_ERR_INST_95_64_MASK)
/*! @} */

/*! @name SCS1_ERR_INST3 -  */
/*! @{ */
#define SPT_SCS1_ERR_INST3_SCS_ERR_INST_127_96_MASK (0xFFFFFFFFU)
#define SPT_SCS1_ERR_INST3_SCS_ERR_INST_127_96_SHIFT (0U)
#define SPT_SCS1_ERR_INST3_SCS_ERR_INST_127_96_WIDTH (32U)
#define SPT_SCS1_ERR_INST3_SCS_ERR_INST_127_96(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_ERR_INST3_SCS_ERR_INST_127_96_SHIFT)) & SPT_SCS1_ERR_INST3_SCS_ERR_INST_127_96_MASK)
/*! @} */

/*! @name SCS1_STATUS0 - SCSa General Status 0 Register */
/*! @{ */
#define SPT_SCS1_STATUS0_PS_START_MASK           (0x1U)
#define SPT_SCS1_STATUS0_PS_START_SHIFT          (0U)
#define SPT_SCS1_STATUS0_PS_START_WIDTH          (1U)
#define SPT_SCS1_STATUS0_PS_START(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_PS_START_SHIFT)) & SPT_SCS1_STATUS0_PS_START_MASK)
#define SPT_SCS1_STATUS0_PS_WAIT_MASK            (0x2U)
#define SPT_SCS1_STATUS0_PS_WAIT_SHIFT           (1U)
#define SPT_SCS1_STATUS0_PS_WAIT_WIDTH           (1U)
#define SPT_SCS1_STATUS0_PS_WAIT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_PS_WAIT_SHIFT)) & SPT_SCS1_STATUS0_PS_WAIT_MASK)
#define SPT_SCS1_STATUS0_PS_DEBUG_MASK           (0x4U)
#define SPT_SCS1_STATUS0_PS_DEBUG_SHIFT          (2U)
#define SPT_SCS1_STATUS0_PS_DEBUG_WIDTH          (1U)
#define SPT_SCS1_STATUS0_PS_DEBUG(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_PS_DEBUG_SHIFT)) & SPT_SCS1_STATUS0_PS_DEBUG_MASK)
#define SPT_SCS1_STATUS0_PS_STOP_MASK            (0x8U)
#define SPT_SCS1_STATUS0_PS_STOP_SHIFT           (3U)
#define SPT_SCS1_STATUS0_PS_STOP_WIDTH           (1U)
#define SPT_SCS1_STATUS0_PS_STOP(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_PS_STOP_SHIFT)) & SPT_SCS1_STATUS0_PS_STOP_MASK)
#define SPT_SCS1_STATUS0_PS_ASYNCSTOP_MASK       (0x10U)
#define SPT_SCS1_STATUS0_PS_ASYNCSTOP_SHIFT      (4U)
#define SPT_SCS1_STATUS0_PS_ASYNCSTOP_WIDTH      (1U)
#define SPT_SCS1_STATUS0_PS_ASYNCSTOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_PS_ASYNCSTOP_SHIFT)) & SPT_SCS1_STATUS0_PS_ASYNCSTOP_MASK)
#define SPT_SCS1_STATUS0_PS_RUN_MASK             (0x20U)
#define SPT_SCS1_STATUS0_PS_RUN_SHIFT            (5U)
#define SPT_SCS1_STATUS0_PS_RUN_WIDTH            (1U)
#define SPT_SCS1_STATUS0_PS_RUN(x)               (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_PS_RUN_SHIFT)) & SPT_SCS1_STATUS0_PS_RUN_MASK)
#define SPT_SCS1_STATUS0_MD_HALT_MASK            (0x40U)
#define SPT_SCS1_STATUS0_MD_HALT_SHIFT           (6U)
#define SPT_SCS1_STATUS0_MD_HALT_WIDTH           (1U)
#define SPT_SCS1_STATUS0_MD_HALT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_MD_HALT_SHIFT)) & SPT_SCS1_STATUS0_MD_HALT_MASK)
#define SPT_SCS1_STATUS0_MD_STEP_ONCE_MASK       (0x80U)
#define SPT_SCS1_STATUS0_MD_STEP_ONCE_SHIFT      (7U)
#define SPT_SCS1_STATUS0_MD_STEP_ONCE_WIDTH      (1U)
#define SPT_SCS1_STATUS0_MD_STEP_ONCE(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_MD_STEP_ONCE_SHIFT)) & SPT_SCS1_STATUS0_MD_STEP_ONCE_MASK)
#define SPT_SCS1_STATUS0_MD_STEP_JUMP_MASK       (0x100U)
#define SPT_SCS1_STATUS0_MD_STEP_JUMP_SHIFT      (8U)
#define SPT_SCS1_STATUS0_MD_STEP_JUMP_WIDTH      (1U)
#define SPT_SCS1_STATUS0_MD_STEP_JUMP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_MD_STEP_JUMP_SHIFT)) & SPT_SCS1_STATUS0_MD_STEP_JUMP_MASK)
#define SPT_SCS1_STATUS0_MD_JAM_MASK             (0x200U)
#define SPT_SCS1_STATUS0_MD_JAM_SHIFT            (9U)
#define SPT_SCS1_STATUS0_MD_JAM_WIDTH            (1U)
#define SPT_SCS1_STATUS0_MD_JAM(x)               (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_MD_JAM_SHIFT)) & SPT_SCS1_STATUS0_MD_JAM_MASK)
#define SPT_SCS1_STATUS0_STEP_ONCE_OVR_MASK      (0x400U)
#define SPT_SCS1_STATUS0_STEP_ONCE_OVR_SHIFT     (10U)
#define SPT_SCS1_STATUS0_STEP_ONCE_OVR_WIDTH     (1U)
#define SPT_SCS1_STATUS0_STEP_ONCE_OVR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_STEP_ONCE_OVR_SHIFT)) & SPT_SCS1_STATUS0_STEP_ONCE_OVR_MASK)
#define SPT_SCS1_STATUS0_STEP_JUMP_OVR_MASK      (0x800U)
#define SPT_SCS1_STATUS0_STEP_JUMP_OVR_SHIFT     (11U)
#define SPT_SCS1_STATUS0_STEP_JUMP_OVR_WIDTH     (1U)
#define SPT_SCS1_STATUS0_STEP_JUMP_OVR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_STEP_JUMP_OVR_SHIFT)) & SPT_SCS1_STATUS0_STEP_JUMP_OVR_MASK)
#define SPT_SCS1_STATUS0_JAM_OVR_MASK            (0x1000U)
#define SPT_SCS1_STATUS0_JAM_OVR_SHIFT           (12U)
#define SPT_SCS1_STATUS0_JAM_OVR_WIDTH           (1U)
#define SPT_SCS1_STATUS0_JAM_OVR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_JAM_OVR_SHIFT)) & SPT_SCS1_STATUS0_JAM_OVR_MASK)
#define SPT_SCS1_STATUS0_BKPT0_OCC_MASK          (0x2000U)
#define SPT_SCS1_STATUS0_BKPT0_OCC_SHIFT         (13U)
#define SPT_SCS1_STATUS0_BKPT0_OCC_WIDTH         (1U)
#define SPT_SCS1_STATUS0_BKPT0_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_BKPT0_OCC_SHIFT)) & SPT_SCS1_STATUS0_BKPT0_OCC_MASK)
#define SPT_SCS1_STATUS0_BKPT1_OCC_MASK          (0x4000U)
#define SPT_SCS1_STATUS0_BKPT1_OCC_SHIFT         (14U)
#define SPT_SCS1_STATUS0_BKPT1_OCC_WIDTH         (1U)
#define SPT_SCS1_STATUS0_BKPT1_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_BKPT1_OCC_SHIFT)) & SPT_SCS1_STATUS0_BKPT1_OCC_MASK)
#define SPT_SCS1_STATUS0_BKPT2_OCC_MASK          (0x8000U)
#define SPT_SCS1_STATUS0_BKPT2_OCC_SHIFT         (15U)
#define SPT_SCS1_STATUS0_BKPT2_OCC_WIDTH         (1U)
#define SPT_SCS1_STATUS0_BKPT2_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_BKPT2_OCC_SHIFT)) & SPT_SCS1_STATUS0_BKPT2_OCC_MASK)
#define SPT_SCS1_STATUS0_BKPT3_OCC_MASK          (0x10000U)
#define SPT_SCS1_STATUS0_BKPT3_OCC_SHIFT         (16U)
#define SPT_SCS1_STATUS0_BKPT3_OCC_WIDTH         (1U)
#define SPT_SCS1_STATUS0_BKPT3_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS0_BKPT3_OCC_SHIFT)) & SPT_SCS1_STATUS0_BKPT3_OCC_MASK)
/*! @} */

/*! @name SCS1_STATUS1 - SCSa General Status 1 Register */
/*! @{ */
#define SPT_SCS1_STATUS1_ILL_OPCODE_MASK         (0x1U)
#define SPT_SCS1_STATUS1_ILL_OPCODE_SHIFT        (0U)
#define SPT_SCS1_STATUS1_ILL_OPCODE_WIDTH        (1U)
#define SPT_SCS1_STATUS1_ILL_OPCODE(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_ILL_OPCODE_SHIFT)) & SPT_SCS1_STATUS1_ILL_OPCODE_MASK)
#define SPT_SCS1_STATUS1_ILL_LOOP_MASK           (0x2U)
#define SPT_SCS1_STATUS1_ILL_LOOP_SHIFT          (1U)
#define SPT_SCS1_STATUS1_ILL_LOOP_WIDTH          (1U)
#define SPT_SCS1_STATUS1_ILL_LOOP(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_ILL_LOOP_SHIFT)) & SPT_SCS1_STATUS1_ILL_LOOP_MASK)
#define SPT_SCS1_STATUS1_ILL_0CNTLOOP_MASK       (0x4U)
#define SPT_SCS1_STATUS1_ILL_0CNTLOOP_SHIFT      (2U)
#define SPT_SCS1_STATUS1_ILL_0CNTLOOP_WIDTH      (1U)
#define SPT_SCS1_STATUS1_ILL_0CNTLOOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_ILL_0CNTLOOP_SHIFT)) & SPT_SCS1_STATUS1_ILL_0CNTLOOP_MASK)
#define SPT_SCS1_STATUS1_ILL_NEXT_MASK           (0x8U)
#define SPT_SCS1_STATUS1_ILL_NEXT_SHIFT          (3U)
#define SPT_SCS1_STATUS1_ILL_NEXT_WIDTH          (1U)
#define SPT_SCS1_STATUS1_ILL_NEXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_ILL_NEXT_SHIFT)) & SPT_SCS1_STATUS1_ILL_NEXT_MASK)
#define SPT_SCS1_STATUS1_ILL_SET_MASK            (0x10U)
#define SPT_SCS1_STATUS1_ILL_SET_SHIFT           (4U)
#define SPT_SCS1_STATUS1_ILL_SET_WIDTH           (1U)
#define SPT_SCS1_STATUS1_ILL_SET(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_ILL_SET_SHIFT)) & SPT_SCS1_STATUS1_ILL_SET_MASK)
#define SPT_SCS1_STATUS1_ILL_GET_MASK            (0x20U)
#define SPT_SCS1_STATUS1_ILL_GET_SHIFT           (5U)
#define SPT_SCS1_STATUS1_ILL_GET_WIDTH           (1U)
#define SPT_SCS1_STATUS1_ILL_GET(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_ILL_GET_SHIFT)) & SPT_SCS1_STATUS1_ILL_GET_MASK)
#define SPT_SCS1_STATUS1_ILL_ADD_MASK            (0x40U)
#define SPT_SCS1_STATUS1_ILL_ADD_SHIFT           (6U)
#define SPT_SCS1_STATUS1_ILL_ADD_WIDTH           (1U)
#define SPT_SCS1_STATUS1_ILL_ADD(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_ILL_ADD_SHIFT)) & SPT_SCS1_STATUS1_ILL_ADD_MASK)
#define SPT_SCS1_STATUS1_JAM_ILL_OPCODE_MASK     (0x80U)
#define SPT_SCS1_STATUS1_JAM_ILL_OPCODE_SHIFT    (7U)
#define SPT_SCS1_STATUS1_JAM_ILL_OPCODE_WIDTH    (1U)
#define SPT_SCS1_STATUS1_JAM_ILL_OPCODE(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_JAM_ILL_OPCODE_SHIFT)) & SPT_SCS1_STATUS1_JAM_ILL_OPCODE_MASK)
#define SPT_SCS1_STATUS1_JAM_ILL_SYNC_MASK       (0x100U)
#define SPT_SCS1_STATUS1_JAM_ILL_SYNC_SHIFT      (8U)
#define SPT_SCS1_STATUS1_JAM_ILL_SYNC_WIDTH      (1U)
#define SPT_SCS1_STATUS1_JAM_ILL_SYNC(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_JAM_ILL_SYNC_SHIFT)) & SPT_SCS1_STATUS1_JAM_ILL_SYNC_MASK)
#define SPT_SCS1_STATUS1_JAM_ILL_LOOP_MASK       (0x200U)
#define SPT_SCS1_STATUS1_JAM_ILL_LOOP_SHIFT      (9U)
#define SPT_SCS1_STATUS1_JAM_ILL_LOOP_WIDTH      (1U)
#define SPT_SCS1_STATUS1_JAM_ILL_LOOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_JAM_ILL_LOOP_SHIFT)) & SPT_SCS1_STATUS1_JAM_ILL_LOOP_MASK)
#define SPT_SCS1_STATUS1_JAM_ILL_NEXT_MASK       (0x400U)
#define SPT_SCS1_STATUS1_JAM_ILL_NEXT_SHIFT      (10U)
#define SPT_SCS1_STATUS1_JAM_ILL_NEXT_WIDTH      (1U)
#define SPT_SCS1_STATUS1_JAM_ILL_NEXT(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_JAM_ILL_NEXT_SHIFT)) & SPT_SCS1_STATUS1_JAM_ILL_NEXT_MASK)
#define SPT_SCS1_STATUS1_JAM_ILL_JUMP_MASK       (0x800U)
#define SPT_SCS1_STATUS1_JAM_ILL_JUMP_SHIFT      (11U)
#define SPT_SCS1_STATUS1_JAM_ILL_JUMP_WIDTH      (1U)
#define SPT_SCS1_STATUS1_JAM_ILL_JUMP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS1_JAM_ILL_JUMP_SHIFT)) & SPT_SCS1_STATUS1_JAM_ILL_JUMP_MASK)
/*! @} */

/*! @name SCS1_STATUS2 - SCSa General Status2 Register */
/*! @{ */
#define SPT_SCS1_STATUS2_WAITREG_SW_MASK         (0xFFFFU)
#define SPT_SCS1_STATUS2_WAITREG_SW_SHIFT        (0U)
#define SPT_SCS1_STATUS2_WAITREG_SW_WIDTH        (16U)
#define SPT_SCS1_STATUS2_WAITREG_SW(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS2_WAITREG_SW_SHIFT)) & SPT_SCS1_STATUS2_WAITREG_SW_MASK)
#define SPT_SCS1_STATUS2_WAITREG_EVT_NUMBER_MASK (0x7F0000U)
#define SPT_SCS1_STATUS2_WAITREG_EVT_NUMBER_SHIFT (16U)
#define SPT_SCS1_STATUS2_WAITREG_EVT_NUMBER_WIDTH (7U)
#define SPT_SCS1_STATUS2_WAITREG_EVT_NUMBER(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS2_WAITREG_EVT_NUMBER_SHIFT)) & SPT_SCS1_STATUS2_WAITREG_EVT_NUMBER_MASK)
#define SPT_SCS1_STATUS2_WAITREG_EVT_TYPE_MASK   (0x60000000U)
#define SPT_SCS1_STATUS2_WAITREG_EVT_TYPE_SHIFT  (29U)
#define SPT_SCS1_STATUS2_WAITREG_EVT_TYPE_WIDTH  (2U)
#define SPT_SCS1_STATUS2_WAITREG_EVT_TYPE(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS2_WAITREG_EVT_TYPE_SHIFT)) & SPT_SCS1_STATUS2_WAITREG_EVT_TYPE_MASK)
/*! @} */

/*! @name SCS1_STATUS3 - SCSa General Status 3 Register */
/*! @{ */
#define SPT_SCS1_STATUS3_LOOP_DEPTH_MASK         (0x7U)
#define SPT_SCS1_STATUS3_LOOP_DEPTH_SHIFT        (0U)
#define SPT_SCS1_STATUS3_LOOP_DEPTH_WIDTH        (3U)
#define SPT_SCS1_STATUS3_LOOP_DEPTH(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS3_LOOP_DEPTH_SHIFT)) & SPT_SCS1_STATUS3_LOOP_DEPTH_MASK)
#define SPT_SCS1_STATUS3_PROC_STATE_MASK         (0x78U)
#define SPT_SCS1_STATUS3_PROC_STATE_SHIFT        (3U)
#define SPT_SCS1_STATUS3_PROC_STATE_WIDTH        (4U)
#define SPT_SCS1_STATUS3_PROC_STATE(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_STATUS3_PROC_STATE_SHIFT)) & SPT_SCS1_STATUS3_PROC_STATE_MASK)
/*! @} */

/*! @name SCS1_INTEN0 - SCS Interrupt Enable Register 0 */
/*! @{ */
#define SPT_SCS1_INTEN0_PS_START_INTEN_MASK      (0x1U)
#define SPT_SCS1_INTEN0_PS_START_INTEN_SHIFT     (0U)
#define SPT_SCS1_INTEN0_PS_START_INTEN_WIDTH     (1U)
#define SPT_SCS1_INTEN0_PS_START_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_PS_START_INTEN_SHIFT)) & SPT_SCS1_INTEN0_PS_START_INTEN_MASK)
#define SPT_SCS1_INTEN0_PS_WAIT_INTEN_MASK       (0x2U)
#define SPT_SCS1_INTEN0_PS_WAIT_INTEN_SHIFT      (1U)
#define SPT_SCS1_INTEN0_PS_WAIT_INTEN_WIDTH      (1U)
#define SPT_SCS1_INTEN0_PS_WAIT_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_PS_WAIT_INTEN_SHIFT)) & SPT_SCS1_INTEN0_PS_WAIT_INTEN_MASK)
#define SPT_SCS1_INTEN0_PS_DEBUG_INTEN_MASK      (0x4U)
#define SPT_SCS1_INTEN0_PS_DEBUG_INTEN_SHIFT     (2U)
#define SPT_SCS1_INTEN0_PS_DEBUG_INTEN_WIDTH     (1U)
#define SPT_SCS1_INTEN0_PS_DEBUG_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_PS_DEBUG_INTEN_SHIFT)) & SPT_SCS1_INTEN0_PS_DEBUG_INTEN_MASK)
#define SPT_SCS1_INTEN0_PS_STOP_INTEN_MASK       (0x8U)
#define SPT_SCS1_INTEN0_PS_STOP_INTEN_SHIFT      (3U)
#define SPT_SCS1_INTEN0_PS_STOP_INTEN_WIDTH      (1U)
#define SPT_SCS1_INTEN0_PS_STOP_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_PS_STOP_INTEN_SHIFT)) & SPT_SCS1_INTEN0_PS_STOP_INTEN_MASK)
#define SPT_SCS1_INTEN0_PS_ASYNCSTOP_INTEN_MASK  (0x10U)
#define SPT_SCS1_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT (4U)
#define SPT_SCS1_INTEN0_PS_ASYNCSTOP_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN0_PS_ASYNCSTOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT)) & SPT_SCS1_INTEN0_PS_ASYNCSTOP_INTEN_MASK)
#define SPT_SCS1_INTEN0_PS_RUN_INTEN_MASK        (0x20U)
#define SPT_SCS1_INTEN0_PS_RUN_INTEN_SHIFT       (5U)
#define SPT_SCS1_INTEN0_PS_RUN_INTEN_WIDTH       (1U)
#define SPT_SCS1_INTEN0_PS_RUN_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_PS_RUN_INTEN_SHIFT)) & SPT_SCS1_INTEN0_PS_RUN_INTEN_MASK)
#define SPT_SCS1_INTEN0_MD_HALT_INTEN_MASK       (0x40U)
#define SPT_SCS1_INTEN0_MD_HALT_INTEN_SHIFT      (6U)
#define SPT_SCS1_INTEN0_MD_HALT_INTEN_WIDTH      (1U)
#define SPT_SCS1_INTEN0_MD_HALT_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_MD_HALT_INTEN_SHIFT)) & SPT_SCS1_INTEN0_MD_HALT_INTEN_MASK)
#define SPT_SCS1_INTEN0_MD_STEP_ONCE_INTEN_MASK  (0x80U)
#define SPT_SCS1_INTEN0_MD_STEP_ONCE_INTEN_SHIFT (7U)
#define SPT_SCS1_INTEN0_MD_STEP_ONCE_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN0_MD_STEP_ONCE_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_MD_STEP_ONCE_INTEN_SHIFT)) & SPT_SCS1_INTEN0_MD_STEP_ONCE_INTEN_MASK)
#define SPT_SCS1_INTEN0_MD_STEP_JUMP_INTEN_MASK  (0x100U)
#define SPT_SCS1_INTEN0_MD_STEP_JUMP_INTEN_SHIFT (8U)
#define SPT_SCS1_INTEN0_MD_STEP_JUMP_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN0_MD_STEP_JUMP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_MD_STEP_JUMP_INTEN_SHIFT)) & SPT_SCS1_INTEN0_MD_STEP_JUMP_INTEN_MASK)
#define SPT_SCS1_INTEN0_MD_JAM_INTEN_MASK        (0x200U)
#define SPT_SCS1_INTEN0_MD_JAM_INTEN_SHIFT       (9U)
#define SPT_SCS1_INTEN0_MD_JAM_INTEN_WIDTH       (1U)
#define SPT_SCS1_INTEN0_MD_JAM_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_MD_JAM_INTEN_SHIFT)) & SPT_SCS1_INTEN0_MD_JAM_INTEN_MASK)
#define SPT_SCS1_INTEN0_STEP_ONCE_OVR_INTEN_MASK (0x400U)
#define SPT_SCS1_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT (10U)
#define SPT_SCS1_INTEN0_STEP_ONCE_OVR_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN0_STEP_ONCE_OVR_INTEN(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT)) & SPT_SCS1_INTEN0_STEP_ONCE_OVR_INTEN_MASK)
#define SPT_SCS1_INTEN0_STEP_JUMP_OVR_INTEN_MASK (0x800U)
#define SPT_SCS1_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT (11U)
#define SPT_SCS1_INTEN0_STEP_JUMP_OVR_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN0_STEP_JUMP_OVR_INTEN(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT)) & SPT_SCS1_INTEN0_STEP_JUMP_OVR_INTEN_MASK)
#define SPT_SCS1_INTEN0_JAM_OVR_INTEN_MASK       (0x1000U)
#define SPT_SCS1_INTEN0_JAM_OVR_INTEN_SHIFT      (12U)
#define SPT_SCS1_INTEN0_JAM_OVR_INTEN_WIDTH      (1U)
#define SPT_SCS1_INTEN0_JAM_OVR_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_JAM_OVR_INTEN_SHIFT)) & SPT_SCS1_INTEN0_JAM_OVR_INTEN_MASK)
#define SPT_SCS1_INTEN0_BKPT0_OCC_INTEN_MASK     (0x2000U)
#define SPT_SCS1_INTEN0_BKPT0_OCC_INTEN_SHIFT    (13U)
#define SPT_SCS1_INTEN0_BKPT0_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS1_INTEN0_BKPT0_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_BKPT0_OCC_INTEN_SHIFT)) & SPT_SCS1_INTEN0_BKPT0_OCC_INTEN_MASK)
#define SPT_SCS1_INTEN0_BKPT1_OCC_INTEN_MASK     (0x4000U)
#define SPT_SCS1_INTEN0_BKPT1_OCC_INTEN_SHIFT    (14U)
#define SPT_SCS1_INTEN0_BKPT1_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS1_INTEN0_BKPT1_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_BKPT1_OCC_INTEN_SHIFT)) & SPT_SCS1_INTEN0_BKPT1_OCC_INTEN_MASK)
#define SPT_SCS1_INTEN0_BKPT2_OCC_INTEN_MASK     (0x8000U)
#define SPT_SCS1_INTEN0_BKPT2_OCC_INTEN_SHIFT    (15U)
#define SPT_SCS1_INTEN0_BKPT2_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS1_INTEN0_BKPT2_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_BKPT2_OCC_INTEN_SHIFT)) & SPT_SCS1_INTEN0_BKPT2_OCC_INTEN_MASK)
#define SPT_SCS1_INTEN0_BKPT3_OCC_INTEN_MASK     (0x10000U)
#define SPT_SCS1_INTEN0_BKPT3_OCC_INTEN_SHIFT    (16U)
#define SPT_SCS1_INTEN0_BKPT3_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS1_INTEN0_BKPT3_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN0_BKPT3_OCC_INTEN_SHIFT)) & SPT_SCS1_INTEN0_BKPT3_OCC_INTEN_MASK)
/*! @} */

/*! @name SCS1_INTEN1 - SCS Interrupt Enable Register 1 */
/*! @{ */
#define SPT_SCS1_INTEN1_ILL_OPCODE_INTEN_MASK    (0x1U)
#define SPT_SCS1_INTEN1_ILL_OPCODE_INTEN_SHIFT   (0U)
#define SPT_SCS1_INTEN1_ILL_OPCODE_INTEN_WIDTH   (1U)
#define SPT_SCS1_INTEN1_ILL_OPCODE_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_ILL_OPCODE_INTEN_SHIFT)) & SPT_SCS1_INTEN1_ILL_OPCODE_INTEN_MASK)
#define SPT_SCS1_INTEN1_ILL_LOOP_INTEN_MASK      (0x2U)
#define SPT_SCS1_INTEN1_ILL_LOOP_INTEN_SHIFT     (1U)
#define SPT_SCS1_INTEN1_ILL_LOOP_INTEN_WIDTH     (1U)
#define SPT_SCS1_INTEN1_ILL_LOOP_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_ILL_LOOP_INTEN_SHIFT)) & SPT_SCS1_INTEN1_ILL_LOOP_INTEN_MASK)
#define SPT_SCS1_INTEN1_ILL_0CNTLOOP_INTEN_MASK  (0x4U)
#define SPT_SCS1_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT (2U)
#define SPT_SCS1_INTEN1_ILL_0CNTLOOP_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN1_ILL_0CNTLOOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT)) & SPT_SCS1_INTEN1_ILL_0CNTLOOP_INTEN_MASK)
#define SPT_SCS1_INTEN1_ILL_NEXT_INTEN_MASK      (0x8U)
#define SPT_SCS1_INTEN1_ILL_NEXT_INTEN_SHIFT     (3U)
#define SPT_SCS1_INTEN1_ILL_NEXT_INTEN_WIDTH     (1U)
#define SPT_SCS1_INTEN1_ILL_NEXT_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_ILL_NEXT_INTEN_SHIFT)) & SPT_SCS1_INTEN1_ILL_NEXT_INTEN_MASK)
#define SPT_SCS1_INTEN1_ILL_SET_INTEN_MASK       (0x10U)
#define SPT_SCS1_INTEN1_ILL_SET_INTEN_SHIFT      (4U)
#define SPT_SCS1_INTEN1_ILL_SET_INTEN_WIDTH      (1U)
#define SPT_SCS1_INTEN1_ILL_SET_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_ILL_SET_INTEN_SHIFT)) & SPT_SCS1_INTEN1_ILL_SET_INTEN_MASK)
#define SPT_SCS1_INTEN1_ILL_GET_INTEN_MASK       (0x20U)
#define SPT_SCS1_INTEN1_ILL_GET_INTEN_SHIFT      (5U)
#define SPT_SCS1_INTEN1_ILL_GET_INTEN_WIDTH      (1U)
#define SPT_SCS1_INTEN1_ILL_GET_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_ILL_GET_INTEN_SHIFT)) & SPT_SCS1_INTEN1_ILL_GET_INTEN_MASK)
#define SPT_SCS1_INTEN1_ILL_ADD_INTEN_MASK       (0x40U)
#define SPT_SCS1_INTEN1_ILL_ADD_INTEN_SHIFT      (6U)
#define SPT_SCS1_INTEN1_ILL_ADD_INTEN_WIDTH      (1U)
#define SPT_SCS1_INTEN1_ILL_ADD_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_ILL_ADD_INTEN_SHIFT)) & SPT_SCS1_INTEN1_ILL_ADD_INTEN_MASK)
#define SPT_SCS1_INTEN1_JAM_ILL_OPCODE_INTEN_MASK (0x80U)
#define SPT_SCS1_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT (7U)
#define SPT_SCS1_INTEN1_JAM_ILL_OPCODE_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN1_JAM_ILL_OPCODE_INTEN(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT)) & SPT_SCS1_INTEN1_JAM_ILL_OPCODE_INTEN_MASK)
#define SPT_SCS1_INTEN1_JAM_ILL_SYNC_INTEN_MASK  (0x100U)
#define SPT_SCS1_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT (8U)
#define SPT_SCS1_INTEN1_JAM_ILL_SYNC_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN1_JAM_ILL_SYNC_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT)) & SPT_SCS1_INTEN1_JAM_ILL_SYNC_INTEN_MASK)
#define SPT_SCS1_INTEN1_JAM_ILL_LOOP_INTEN_MASK  (0x200U)
#define SPT_SCS1_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT (9U)
#define SPT_SCS1_INTEN1_JAM_ILL_LOOP_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN1_JAM_ILL_LOOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT)) & SPT_SCS1_INTEN1_JAM_ILL_LOOP_INTEN_MASK)
#define SPT_SCS1_INTEN1_JAM_ILL_NEXT_INTEN_MASK  (0x400U)
#define SPT_SCS1_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT (10U)
#define SPT_SCS1_INTEN1_JAM_ILL_NEXT_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN1_JAM_ILL_NEXT_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT)) & SPT_SCS1_INTEN1_JAM_ILL_NEXT_INTEN_MASK)
#define SPT_SCS1_INTEN1_JAM_ILL_JUMP_INTEN_MASK  (0x800U)
#define SPT_SCS1_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT (11U)
#define SPT_SCS1_INTEN1_JAM_ILL_JUMP_INTEN_WIDTH (1U)
#define SPT_SCS1_INTEN1_JAM_ILL_JUMP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT)) & SPT_SCS1_INTEN1_JAM_ILL_JUMP_INTEN_MASK)
/*! @} */

/*! @name SCS1_PDMA_TRANSFER_COUNT_STATUS - SCS PDMA Transfer Count Status */
/*! @{ */
#define SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK (0xFFFFU)
#define SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT (0U)
#define SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_WIDTH (16U)
#define SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT)) & SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK)
#define SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK (0xFFFF0000U)
#define SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT (16U)
#define SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_WIDTH (16U)
#define SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT)) & SPT_SCS1_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK)
/*! @} */

/*! @name SCS1_PDMA_FMTB_EXP_ADDR_STATUS - SCS PDMA formatB Exponent Address status Register */
/*! @{ */
#define SPT_SCS1_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS1_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT (0U)
#define SPT_SCS1_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_WIDTH (32U)
#define SPT_SCS1_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS1_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT)) & SPT_SCS1_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK)
/*! @} */

/*! @name SCS2_JAM_INST0 - SCSa Jamming Instruction0 Register */
/*! @{ */
#define SPT_SCS2_JAM_INST0_JAM_INST_31_0_MASK    (0xFFFFFFFFU)
#define SPT_SCS2_JAM_INST0_JAM_INST_31_0_SHIFT   (0U)
#define SPT_SCS2_JAM_INST0_JAM_INST_31_0_WIDTH   (32U)
#define SPT_SCS2_JAM_INST0_JAM_INST_31_0(x)      (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_JAM_INST0_JAM_INST_31_0_SHIFT)) & SPT_SCS2_JAM_INST0_JAM_INST_31_0_MASK)
/*! @} */

/*! @name SCS2_JAM_INST1 - SCSa Jamming Instruction1 Register */
/*! @{ */
#define SPT_SCS2_JAM_INST1_JAM_INST_63_32_MASK   (0xFFFFFFFFU)
#define SPT_SCS2_JAM_INST1_JAM_INST_63_32_SHIFT  (0U)
#define SPT_SCS2_JAM_INST1_JAM_INST_63_32_WIDTH  (32U)
#define SPT_SCS2_JAM_INST1_JAM_INST_63_32(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_JAM_INST1_JAM_INST_63_32_SHIFT)) & SPT_SCS2_JAM_INST1_JAM_INST_63_32_MASK)
/*! @} */

/*! @name SCS2_JAM_INST2 - SCSa Jamming Instruction2 Register */
/*! @{ */
#define SPT_SCS2_JAM_INST2_JAM_INST_95_64_MASK   (0xFFFFFFFFU)
#define SPT_SCS2_JAM_INST2_JAM_INST_95_64_SHIFT  (0U)
#define SPT_SCS2_JAM_INST2_JAM_INST_95_64_WIDTH  (32U)
#define SPT_SCS2_JAM_INST2_JAM_INST_95_64(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_JAM_INST2_JAM_INST_95_64_SHIFT)) & SPT_SCS2_JAM_INST2_JAM_INST_95_64_MASK)
/*! @} */

/*! @name SCS2_JAM_INST3 - SCSa Jamming Instruction3 Register */
/*! @{ */
#define SPT_SCS2_JAM_INST3_JAM_INST_127_96_MASK  (0xFFFFFFFFU)
#define SPT_SCS2_JAM_INST3_JAM_INST_127_96_SHIFT (0U)
#define SPT_SCS2_JAM_INST3_JAM_INST_127_96_WIDTH (32U)
#define SPT_SCS2_JAM_INST3_JAM_INST_127_96(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_JAM_INST3_JAM_INST_127_96_SHIFT)) & SPT_SCS2_JAM_INST3_JAM_INST_127_96_MASK)
/*! @} */

/*! @name SCS2_CURR_INST_ADDR - SCSa Current Instruction Addr Register */
/*! @{ */
#define SPT_SCS2_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS2_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT (0U)
#define SPT_SCS2_CURR_INST_ADDR_CURRENT_INST_ADDR_WIDTH (32U)
#define SPT_SCS2_CURR_INST_ADDR_CURRENT_INST_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT)) & SPT_SCS2_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK)
/*! @} */

/*! @name SCS2_CURR_INST0 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS2_CURR_INST0_CURR_INST_31_0_MASK  (0xFFFFFFFFU)
#define SPT_SCS2_CURR_INST0_CURR_INST_31_0_SHIFT (0U)
#define SPT_SCS2_CURR_INST0_CURR_INST_31_0_WIDTH (32U)
#define SPT_SCS2_CURR_INST0_CURR_INST_31_0(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_CURR_INST0_CURR_INST_31_0_SHIFT)) & SPT_SCS2_CURR_INST0_CURR_INST_31_0_MASK)
/*! @} */

/*! @name SCS2_CURR_INST1 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS2_CURR_INST1_CURR_INST_63_32_MASK (0xFFFFFFFFU)
#define SPT_SCS2_CURR_INST1_CURR_INST_63_32_SHIFT (0U)
#define SPT_SCS2_CURR_INST1_CURR_INST_63_32_WIDTH (32U)
#define SPT_SCS2_CURR_INST1_CURR_INST_63_32(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_CURR_INST1_CURR_INST_63_32_SHIFT)) & SPT_SCS2_CURR_INST1_CURR_INST_63_32_MASK)
/*! @} */

/*! @name SCS2_CURR_INST2 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS2_CURR_INST2_CURR_INST_95_64_MASK (0xFFFFFFFFU)
#define SPT_SCS2_CURR_INST2_CURR_INST_95_64_SHIFT (0U)
#define SPT_SCS2_CURR_INST2_CURR_INST_95_64_WIDTH (32U)
#define SPT_SCS2_CURR_INST2_CURR_INST_95_64(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_CURR_INST2_CURR_INST_95_64_SHIFT)) & SPT_SCS2_CURR_INST2_CURR_INST_95_64_MASK)
/*! @} */

/*! @name SCS2_CURR_INST3 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS2_CURR_INST3_CURR_INST_127_96_MASK (0xFFFFFFFFU)
#define SPT_SCS2_CURR_INST3_CURR_INST_127_96_SHIFT (0U)
#define SPT_SCS2_CURR_INST3_CURR_INST_127_96_WIDTH (32U)
#define SPT_SCS2_CURR_INST3_CURR_INST_127_96(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_CURR_INST3_CURR_INST_127_96_SHIFT)) & SPT_SCS2_CURR_INST3_CURR_INST_127_96_MASK)
/*! @} */

/*! @name SCS2_LOOPCNTR01 - Loop Counter 0 and 1 Register */
/*! @{ */
#define SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR0_MASK  (0xFFFFU)
#define SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR0_SHIFT (0U)
#define SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR0_WIDTH (16U)
#define SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR0(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR0_SHIFT)) & SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR0_MASK)
#define SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR1_MASK  (0xFFFF0000U)
#define SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR1_SHIFT (16U)
#define SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR1_WIDTH (16U)
#define SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR1(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR1_SHIFT)) & SPT_SCS2_LOOPCNTR01_SCS_LOOP_CNTR1_MASK)
/*! @} */

/*! @name SCS2_LOOPCNTR23 - Loop Counter 2 and 3 Register */
/*! @{ */
#define SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR2_MASK  (0xFFFFU)
#define SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR2_SHIFT (0U)
#define SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR2_WIDTH (16U)
#define SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR2(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR2_SHIFT)) & SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR2_MASK)
#define SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR3_MASK  (0xFFFF0000U)
#define SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR3_SHIFT (16U)
#define SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR3_WIDTH (16U)
#define SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR3(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR3_SHIFT)) & SPT_SCS2_LOOPCNTR23_SCS_LOOP_CNTR3_MASK)
/*! @} */

/*! @name SCS2_ERR_INST_ADDR - SCSa Error Instruction Addr Register */
/*! @{ */
#define SPT_SCS2_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS2_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_SHIFT (0U)
#define SPT_SCS2_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_WIDTH (32U)
#define SPT_SCS2_ERR_INST_ADDR_SCS_ERROR_INST_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_SHIFT)) & SPT_SCS2_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_MASK)
/*! @} */

/*! @name SCS2_ERR_INST0 -  */
/*! @{ */
#define SPT_SCS2_ERR_INST0_SCS_ERR_INST_31_0_MASK (0xFFFFFFFFU)
#define SPT_SCS2_ERR_INST0_SCS_ERR_INST_31_0_SHIFT (0U)
#define SPT_SCS2_ERR_INST0_SCS_ERR_INST_31_0_WIDTH (32U)
#define SPT_SCS2_ERR_INST0_SCS_ERR_INST_31_0(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_ERR_INST0_SCS_ERR_INST_31_0_SHIFT)) & SPT_SCS2_ERR_INST0_SCS_ERR_INST_31_0_MASK)
/*! @} */

/*! @name SCS2_ERR_INST1 -  */
/*! @{ */
#define SPT_SCS2_ERR_INST1_SCS_ERR_INST_63_32_MASK (0xFFFFFFFFU)
#define SPT_SCS2_ERR_INST1_SCS_ERR_INST_63_32_SHIFT (0U)
#define SPT_SCS2_ERR_INST1_SCS_ERR_INST_63_32_WIDTH (32U)
#define SPT_SCS2_ERR_INST1_SCS_ERR_INST_63_32(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_ERR_INST1_SCS_ERR_INST_63_32_SHIFT)) & SPT_SCS2_ERR_INST1_SCS_ERR_INST_63_32_MASK)
/*! @} */

/*! @name SCS2_ERR_INST2 -  */
/*! @{ */
#define SPT_SCS2_ERR_INST2_SCS_ERR_INST_95_64_MASK (0xFFFFFFFFU)
#define SPT_SCS2_ERR_INST2_SCS_ERR_INST_95_64_SHIFT (0U)
#define SPT_SCS2_ERR_INST2_SCS_ERR_INST_95_64_WIDTH (32U)
#define SPT_SCS2_ERR_INST2_SCS_ERR_INST_95_64(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_ERR_INST2_SCS_ERR_INST_95_64_SHIFT)) & SPT_SCS2_ERR_INST2_SCS_ERR_INST_95_64_MASK)
/*! @} */

/*! @name SCS2_ERR_INST3 -  */
/*! @{ */
#define SPT_SCS2_ERR_INST3_SCS_ERR_INST_127_96_MASK (0xFFFFFFFFU)
#define SPT_SCS2_ERR_INST3_SCS_ERR_INST_127_96_SHIFT (0U)
#define SPT_SCS2_ERR_INST3_SCS_ERR_INST_127_96_WIDTH (32U)
#define SPT_SCS2_ERR_INST3_SCS_ERR_INST_127_96(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_ERR_INST3_SCS_ERR_INST_127_96_SHIFT)) & SPT_SCS2_ERR_INST3_SCS_ERR_INST_127_96_MASK)
/*! @} */

/*! @name SCS2_STATUS0 - SCSa General Status 0 Register */
/*! @{ */
#define SPT_SCS2_STATUS0_PS_START_MASK           (0x1U)
#define SPT_SCS2_STATUS0_PS_START_SHIFT          (0U)
#define SPT_SCS2_STATUS0_PS_START_WIDTH          (1U)
#define SPT_SCS2_STATUS0_PS_START(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_PS_START_SHIFT)) & SPT_SCS2_STATUS0_PS_START_MASK)
#define SPT_SCS2_STATUS0_PS_WAIT_MASK            (0x2U)
#define SPT_SCS2_STATUS0_PS_WAIT_SHIFT           (1U)
#define SPT_SCS2_STATUS0_PS_WAIT_WIDTH           (1U)
#define SPT_SCS2_STATUS0_PS_WAIT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_PS_WAIT_SHIFT)) & SPT_SCS2_STATUS0_PS_WAIT_MASK)
#define SPT_SCS2_STATUS0_PS_DEBUG_MASK           (0x4U)
#define SPT_SCS2_STATUS0_PS_DEBUG_SHIFT          (2U)
#define SPT_SCS2_STATUS0_PS_DEBUG_WIDTH          (1U)
#define SPT_SCS2_STATUS0_PS_DEBUG(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_PS_DEBUG_SHIFT)) & SPT_SCS2_STATUS0_PS_DEBUG_MASK)
#define SPT_SCS2_STATUS0_PS_STOP_MASK            (0x8U)
#define SPT_SCS2_STATUS0_PS_STOP_SHIFT           (3U)
#define SPT_SCS2_STATUS0_PS_STOP_WIDTH           (1U)
#define SPT_SCS2_STATUS0_PS_STOP(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_PS_STOP_SHIFT)) & SPT_SCS2_STATUS0_PS_STOP_MASK)
#define SPT_SCS2_STATUS0_PS_ASYNCSTOP_MASK       (0x10U)
#define SPT_SCS2_STATUS0_PS_ASYNCSTOP_SHIFT      (4U)
#define SPT_SCS2_STATUS0_PS_ASYNCSTOP_WIDTH      (1U)
#define SPT_SCS2_STATUS0_PS_ASYNCSTOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_PS_ASYNCSTOP_SHIFT)) & SPT_SCS2_STATUS0_PS_ASYNCSTOP_MASK)
#define SPT_SCS2_STATUS0_PS_RUN_MASK             (0x20U)
#define SPT_SCS2_STATUS0_PS_RUN_SHIFT            (5U)
#define SPT_SCS2_STATUS0_PS_RUN_WIDTH            (1U)
#define SPT_SCS2_STATUS0_PS_RUN(x)               (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_PS_RUN_SHIFT)) & SPT_SCS2_STATUS0_PS_RUN_MASK)
#define SPT_SCS2_STATUS0_MD_HALT_MASK            (0x40U)
#define SPT_SCS2_STATUS0_MD_HALT_SHIFT           (6U)
#define SPT_SCS2_STATUS0_MD_HALT_WIDTH           (1U)
#define SPT_SCS2_STATUS0_MD_HALT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_MD_HALT_SHIFT)) & SPT_SCS2_STATUS0_MD_HALT_MASK)
#define SPT_SCS2_STATUS0_MD_STEP_ONCE_MASK       (0x80U)
#define SPT_SCS2_STATUS0_MD_STEP_ONCE_SHIFT      (7U)
#define SPT_SCS2_STATUS0_MD_STEP_ONCE_WIDTH      (1U)
#define SPT_SCS2_STATUS0_MD_STEP_ONCE(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_MD_STEP_ONCE_SHIFT)) & SPT_SCS2_STATUS0_MD_STEP_ONCE_MASK)
#define SPT_SCS2_STATUS0_MD_STEP_JUMP_MASK       (0x100U)
#define SPT_SCS2_STATUS0_MD_STEP_JUMP_SHIFT      (8U)
#define SPT_SCS2_STATUS0_MD_STEP_JUMP_WIDTH      (1U)
#define SPT_SCS2_STATUS0_MD_STEP_JUMP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_MD_STEP_JUMP_SHIFT)) & SPT_SCS2_STATUS0_MD_STEP_JUMP_MASK)
#define SPT_SCS2_STATUS0_MD_JAM_MASK             (0x200U)
#define SPT_SCS2_STATUS0_MD_JAM_SHIFT            (9U)
#define SPT_SCS2_STATUS0_MD_JAM_WIDTH            (1U)
#define SPT_SCS2_STATUS0_MD_JAM(x)               (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_MD_JAM_SHIFT)) & SPT_SCS2_STATUS0_MD_JAM_MASK)
#define SPT_SCS2_STATUS0_STEP_ONCE_OVR_MASK      (0x400U)
#define SPT_SCS2_STATUS0_STEP_ONCE_OVR_SHIFT     (10U)
#define SPT_SCS2_STATUS0_STEP_ONCE_OVR_WIDTH     (1U)
#define SPT_SCS2_STATUS0_STEP_ONCE_OVR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_STEP_ONCE_OVR_SHIFT)) & SPT_SCS2_STATUS0_STEP_ONCE_OVR_MASK)
#define SPT_SCS2_STATUS0_STEP_JUMP_OVR_MASK      (0x800U)
#define SPT_SCS2_STATUS0_STEP_JUMP_OVR_SHIFT     (11U)
#define SPT_SCS2_STATUS0_STEP_JUMP_OVR_WIDTH     (1U)
#define SPT_SCS2_STATUS0_STEP_JUMP_OVR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_STEP_JUMP_OVR_SHIFT)) & SPT_SCS2_STATUS0_STEP_JUMP_OVR_MASK)
#define SPT_SCS2_STATUS0_JAM_OVR_MASK            (0x1000U)
#define SPT_SCS2_STATUS0_JAM_OVR_SHIFT           (12U)
#define SPT_SCS2_STATUS0_JAM_OVR_WIDTH           (1U)
#define SPT_SCS2_STATUS0_JAM_OVR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_JAM_OVR_SHIFT)) & SPT_SCS2_STATUS0_JAM_OVR_MASK)
#define SPT_SCS2_STATUS0_BKPT0_OCC_MASK          (0x2000U)
#define SPT_SCS2_STATUS0_BKPT0_OCC_SHIFT         (13U)
#define SPT_SCS2_STATUS0_BKPT0_OCC_WIDTH         (1U)
#define SPT_SCS2_STATUS0_BKPT0_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_BKPT0_OCC_SHIFT)) & SPT_SCS2_STATUS0_BKPT0_OCC_MASK)
#define SPT_SCS2_STATUS0_BKPT1_OCC_MASK          (0x4000U)
#define SPT_SCS2_STATUS0_BKPT1_OCC_SHIFT         (14U)
#define SPT_SCS2_STATUS0_BKPT1_OCC_WIDTH         (1U)
#define SPT_SCS2_STATUS0_BKPT1_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_BKPT1_OCC_SHIFT)) & SPT_SCS2_STATUS0_BKPT1_OCC_MASK)
#define SPT_SCS2_STATUS0_BKPT2_OCC_MASK          (0x8000U)
#define SPT_SCS2_STATUS0_BKPT2_OCC_SHIFT         (15U)
#define SPT_SCS2_STATUS0_BKPT2_OCC_WIDTH         (1U)
#define SPT_SCS2_STATUS0_BKPT2_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_BKPT2_OCC_SHIFT)) & SPT_SCS2_STATUS0_BKPT2_OCC_MASK)
#define SPT_SCS2_STATUS0_BKPT3_OCC_MASK          (0x10000U)
#define SPT_SCS2_STATUS0_BKPT3_OCC_SHIFT         (16U)
#define SPT_SCS2_STATUS0_BKPT3_OCC_WIDTH         (1U)
#define SPT_SCS2_STATUS0_BKPT3_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS0_BKPT3_OCC_SHIFT)) & SPT_SCS2_STATUS0_BKPT3_OCC_MASK)
/*! @} */

/*! @name SCS2_STATUS1 - SCSa General Status 1 Register */
/*! @{ */
#define SPT_SCS2_STATUS1_ILL_OPCODE_MASK         (0x1U)
#define SPT_SCS2_STATUS1_ILL_OPCODE_SHIFT        (0U)
#define SPT_SCS2_STATUS1_ILL_OPCODE_WIDTH        (1U)
#define SPT_SCS2_STATUS1_ILL_OPCODE(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_ILL_OPCODE_SHIFT)) & SPT_SCS2_STATUS1_ILL_OPCODE_MASK)
#define SPT_SCS2_STATUS1_ILL_LOOP_MASK           (0x2U)
#define SPT_SCS2_STATUS1_ILL_LOOP_SHIFT          (1U)
#define SPT_SCS2_STATUS1_ILL_LOOP_WIDTH          (1U)
#define SPT_SCS2_STATUS1_ILL_LOOP(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_ILL_LOOP_SHIFT)) & SPT_SCS2_STATUS1_ILL_LOOP_MASK)
#define SPT_SCS2_STATUS1_ILL_0CNTLOOP_MASK       (0x4U)
#define SPT_SCS2_STATUS1_ILL_0CNTLOOP_SHIFT      (2U)
#define SPT_SCS2_STATUS1_ILL_0CNTLOOP_WIDTH      (1U)
#define SPT_SCS2_STATUS1_ILL_0CNTLOOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_ILL_0CNTLOOP_SHIFT)) & SPT_SCS2_STATUS1_ILL_0CNTLOOP_MASK)
#define SPT_SCS2_STATUS1_ILL_NEXT_MASK           (0x8U)
#define SPT_SCS2_STATUS1_ILL_NEXT_SHIFT          (3U)
#define SPT_SCS2_STATUS1_ILL_NEXT_WIDTH          (1U)
#define SPT_SCS2_STATUS1_ILL_NEXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_ILL_NEXT_SHIFT)) & SPT_SCS2_STATUS1_ILL_NEXT_MASK)
#define SPT_SCS2_STATUS1_ILL_SET_MASK            (0x10U)
#define SPT_SCS2_STATUS1_ILL_SET_SHIFT           (4U)
#define SPT_SCS2_STATUS1_ILL_SET_WIDTH           (1U)
#define SPT_SCS2_STATUS1_ILL_SET(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_ILL_SET_SHIFT)) & SPT_SCS2_STATUS1_ILL_SET_MASK)
#define SPT_SCS2_STATUS1_ILL_GET_MASK            (0x20U)
#define SPT_SCS2_STATUS1_ILL_GET_SHIFT           (5U)
#define SPT_SCS2_STATUS1_ILL_GET_WIDTH           (1U)
#define SPT_SCS2_STATUS1_ILL_GET(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_ILL_GET_SHIFT)) & SPT_SCS2_STATUS1_ILL_GET_MASK)
#define SPT_SCS2_STATUS1_ILL_ADD_MASK            (0x40U)
#define SPT_SCS2_STATUS1_ILL_ADD_SHIFT           (6U)
#define SPT_SCS2_STATUS1_ILL_ADD_WIDTH           (1U)
#define SPT_SCS2_STATUS1_ILL_ADD(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_ILL_ADD_SHIFT)) & SPT_SCS2_STATUS1_ILL_ADD_MASK)
#define SPT_SCS2_STATUS1_JAM_ILL_OPCODE_MASK     (0x80U)
#define SPT_SCS2_STATUS1_JAM_ILL_OPCODE_SHIFT    (7U)
#define SPT_SCS2_STATUS1_JAM_ILL_OPCODE_WIDTH    (1U)
#define SPT_SCS2_STATUS1_JAM_ILL_OPCODE(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_JAM_ILL_OPCODE_SHIFT)) & SPT_SCS2_STATUS1_JAM_ILL_OPCODE_MASK)
#define SPT_SCS2_STATUS1_JAM_ILL_SYNC_MASK       (0x100U)
#define SPT_SCS2_STATUS1_JAM_ILL_SYNC_SHIFT      (8U)
#define SPT_SCS2_STATUS1_JAM_ILL_SYNC_WIDTH      (1U)
#define SPT_SCS2_STATUS1_JAM_ILL_SYNC(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_JAM_ILL_SYNC_SHIFT)) & SPT_SCS2_STATUS1_JAM_ILL_SYNC_MASK)
#define SPT_SCS2_STATUS1_JAM_ILL_LOOP_MASK       (0x200U)
#define SPT_SCS2_STATUS1_JAM_ILL_LOOP_SHIFT      (9U)
#define SPT_SCS2_STATUS1_JAM_ILL_LOOP_WIDTH      (1U)
#define SPT_SCS2_STATUS1_JAM_ILL_LOOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_JAM_ILL_LOOP_SHIFT)) & SPT_SCS2_STATUS1_JAM_ILL_LOOP_MASK)
#define SPT_SCS2_STATUS1_JAM_ILL_NEXT_MASK       (0x400U)
#define SPT_SCS2_STATUS1_JAM_ILL_NEXT_SHIFT      (10U)
#define SPT_SCS2_STATUS1_JAM_ILL_NEXT_WIDTH      (1U)
#define SPT_SCS2_STATUS1_JAM_ILL_NEXT(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_JAM_ILL_NEXT_SHIFT)) & SPT_SCS2_STATUS1_JAM_ILL_NEXT_MASK)
#define SPT_SCS2_STATUS1_JAM_ILL_JUMP_MASK       (0x800U)
#define SPT_SCS2_STATUS1_JAM_ILL_JUMP_SHIFT      (11U)
#define SPT_SCS2_STATUS1_JAM_ILL_JUMP_WIDTH      (1U)
#define SPT_SCS2_STATUS1_JAM_ILL_JUMP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS1_JAM_ILL_JUMP_SHIFT)) & SPT_SCS2_STATUS1_JAM_ILL_JUMP_MASK)
/*! @} */

/*! @name SCS2_STATUS2 - SCSa General Status2 Register */
/*! @{ */
#define SPT_SCS2_STATUS2_WAITREG_SW_MASK         (0xFFFFU)
#define SPT_SCS2_STATUS2_WAITREG_SW_SHIFT        (0U)
#define SPT_SCS2_STATUS2_WAITREG_SW_WIDTH        (16U)
#define SPT_SCS2_STATUS2_WAITREG_SW(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS2_WAITREG_SW_SHIFT)) & SPT_SCS2_STATUS2_WAITREG_SW_MASK)
#define SPT_SCS2_STATUS2_WAITREG_EVT_NUMBER_MASK (0x7F0000U)
#define SPT_SCS2_STATUS2_WAITREG_EVT_NUMBER_SHIFT (16U)
#define SPT_SCS2_STATUS2_WAITREG_EVT_NUMBER_WIDTH (7U)
#define SPT_SCS2_STATUS2_WAITREG_EVT_NUMBER(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS2_WAITREG_EVT_NUMBER_SHIFT)) & SPT_SCS2_STATUS2_WAITREG_EVT_NUMBER_MASK)
#define SPT_SCS2_STATUS2_WAITREG_EVT_TYPE_MASK   (0x60000000U)
#define SPT_SCS2_STATUS2_WAITREG_EVT_TYPE_SHIFT  (29U)
#define SPT_SCS2_STATUS2_WAITREG_EVT_TYPE_WIDTH  (2U)
#define SPT_SCS2_STATUS2_WAITREG_EVT_TYPE(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS2_WAITREG_EVT_TYPE_SHIFT)) & SPT_SCS2_STATUS2_WAITREG_EVT_TYPE_MASK)
/*! @} */

/*! @name SCS2_STATUS3 - SCSa General Status 3 Register */
/*! @{ */
#define SPT_SCS2_STATUS3_LOOP_DEPTH_MASK         (0x7U)
#define SPT_SCS2_STATUS3_LOOP_DEPTH_SHIFT        (0U)
#define SPT_SCS2_STATUS3_LOOP_DEPTH_WIDTH        (3U)
#define SPT_SCS2_STATUS3_LOOP_DEPTH(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS3_LOOP_DEPTH_SHIFT)) & SPT_SCS2_STATUS3_LOOP_DEPTH_MASK)
#define SPT_SCS2_STATUS3_PROC_STATE_MASK         (0x78U)
#define SPT_SCS2_STATUS3_PROC_STATE_SHIFT        (3U)
#define SPT_SCS2_STATUS3_PROC_STATE_WIDTH        (4U)
#define SPT_SCS2_STATUS3_PROC_STATE(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_STATUS3_PROC_STATE_SHIFT)) & SPT_SCS2_STATUS3_PROC_STATE_MASK)
/*! @} */

/*! @name SCS2_INTEN0 - SCS Interrupt Enable Register 0 */
/*! @{ */
#define SPT_SCS2_INTEN0_PS_START_INTEN_MASK      (0x1U)
#define SPT_SCS2_INTEN0_PS_START_INTEN_SHIFT     (0U)
#define SPT_SCS2_INTEN0_PS_START_INTEN_WIDTH     (1U)
#define SPT_SCS2_INTEN0_PS_START_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_PS_START_INTEN_SHIFT)) & SPT_SCS2_INTEN0_PS_START_INTEN_MASK)
#define SPT_SCS2_INTEN0_PS_WAIT_INTEN_MASK       (0x2U)
#define SPT_SCS2_INTEN0_PS_WAIT_INTEN_SHIFT      (1U)
#define SPT_SCS2_INTEN0_PS_WAIT_INTEN_WIDTH      (1U)
#define SPT_SCS2_INTEN0_PS_WAIT_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_PS_WAIT_INTEN_SHIFT)) & SPT_SCS2_INTEN0_PS_WAIT_INTEN_MASK)
#define SPT_SCS2_INTEN0_PS_DEBUG_INTEN_MASK      (0x4U)
#define SPT_SCS2_INTEN0_PS_DEBUG_INTEN_SHIFT     (2U)
#define SPT_SCS2_INTEN0_PS_DEBUG_INTEN_WIDTH     (1U)
#define SPT_SCS2_INTEN0_PS_DEBUG_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_PS_DEBUG_INTEN_SHIFT)) & SPT_SCS2_INTEN0_PS_DEBUG_INTEN_MASK)
#define SPT_SCS2_INTEN0_PS_STOP_INTEN_MASK       (0x8U)
#define SPT_SCS2_INTEN0_PS_STOP_INTEN_SHIFT      (3U)
#define SPT_SCS2_INTEN0_PS_STOP_INTEN_WIDTH      (1U)
#define SPT_SCS2_INTEN0_PS_STOP_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_PS_STOP_INTEN_SHIFT)) & SPT_SCS2_INTEN0_PS_STOP_INTEN_MASK)
#define SPT_SCS2_INTEN0_PS_ASYNCSTOP_INTEN_MASK  (0x10U)
#define SPT_SCS2_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT (4U)
#define SPT_SCS2_INTEN0_PS_ASYNCSTOP_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN0_PS_ASYNCSTOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT)) & SPT_SCS2_INTEN0_PS_ASYNCSTOP_INTEN_MASK)
#define SPT_SCS2_INTEN0_PS_RUN_INTEN_MASK        (0x20U)
#define SPT_SCS2_INTEN0_PS_RUN_INTEN_SHIFT       (5U)
#define SPT_SCS2_INTEN0_PS_RUN_INTEN_WIDTH       (1U)
#define SPT_SCS2_INTEN0_PS_RUN_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_PS_RUN_INTEN_SHIFT)) & SPT_SCS2_INTEN0_PS_RUN_INTEN_MASK)
#define SPT_SCS2_INTEN0_MD_HALT_INTEN_MASK       (0x40U)
#define SPT_SCS2_INTEN0_MD_HALT_INTEN_SHIFT      (6U)
#define SPT_SCS2_INTEN0_MD_HALT_INTEN_WIDTH      (1U)
#define SPT_SCS2_INTEN0_MD_HALT_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_MD_HALT_INTEN_SHIFT)) & SPT_SCS2_INTEN0_MD_HALT_INTEN_MASK)
#define SPT_SCS2_INTEN0_MD_STEP_ONCE_INTEN_MASK  (0x80U)
#define SPT_SCS2_INTEN0_MD_STEP_ONCE_INTEN_SHIFT (7U)
#define SPT_SCS2_INTEN0_MD_STEP_ONCE_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN0_MD_STEP_ONCE_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_MD_STEP_ONCE_INTEN_SHIFT)) & SPT_SCS2_INTEN0_MD_STEP_ONCE_INTEN_MASK)
#define SPT_SCS2_INTEN0_MD_STEP_JUMP_INTEN_MASK  (0x100U)
#define SPT_SCS2_INTEN0_MD_STEP_JUMP_INTEN_SHIFT (8U)
#define SPT_SCS2_INTEN0_MD_STEP_JUMP_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN0_MD_STEP_JUMP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_MD_STEP_JUMP_INTEN_SHIFT)) & SPT_SCS2_INTEN0_MD_STEP_JUMP_INTEN_MASK)
#define SPT_SCS2_INTEN0_MD_JAM_INTEN_MASK        (0x200U)
#define SPT_SCS2_INTEN0_MD_JAM_INTEN_SHIFT       (9U)
#define SPT_SCS2_INTEN0_MD_JAM_INTEN_WIDTH       (1U)
#define SPT_SCS2_INTEN0_MD_JAM_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_MD_JAM_INTEN_SHIFT)) & SPT_SCS2_INTEN0_MD_JAM_INTEN_MASK)
#define SPT_SCS2_INTEN0_STEP_ONCE_OVR_INTEN_MASK (0x400U)
#define SPT_SCS2_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT (10U)
#define SPT_SCS2_INTEN0_STEP_ONCE_OVR_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN0_STEP_ONCE_OVR_INTEN(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT)) & SPT_SCS2_INTEN0_STEP_ONCE_OVR_INTEN_MASK)
#define SPT_SCS2_INTEN0_STEP_JUMP_OVR_INTEN_MASK (0x800U)
#define SPT_SCS2_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT (11U)
#define SPT_SCS2_INTEN0_STEP_JUMP_OVR_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN0_STEP_JUMP_OVR_INTEN(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT)) & SPT_SCS2_INTEN0_STEP_JUMP_OVR_INTEN_MASK)
#define SPT_SCS2_INTEN0_JAM_OVR_INTEN_MASK       (0x1000U)
#define SPT_SCS2_INTEN0_JAM_OVR_INTEN_SHIFT      (12U)
#define SPT_SCS2_INTEN0_JAM_OVR_INTEN_WIDTH      (1U)
#define SPT_SCS2_INTEN0_JAM_OVR_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_JAM_OVR_INTEN_SHIFT)) & SPT_SCS2_INTEN0_JAM_OVR_INTEN_MASK)
#define SPT_SCS2_INTEN0_BKPT0_OCC_INTEN_MASK     (0x2000U)
#define SPT_SCS2_INTEN0_BKPT0_OCC_INTEN_SHIFT    (13U)
#define SPT_SCS2_INTEN0_BKPT0_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS2_INTEN0_BKPT0_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_BKPT0_OCC_INTEN_SHIFT)) & SPT_SCS2_INTEN0_BKPT0_OCC_INTEN_MASK)
#define SPT_SCS2_INTEN0_BKPT1_OCC_INTEN_MASK     (0x4000U)
#define SPT_SCS2_INTEN0_BKPT1_OCC_INTEN_SHIFT    (14U)
#define SPT_SCS2_INTEN0_BKPT1_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS2_INTEN0_BKPT1_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_BKPT1_OCC_INTEN_SHIFT)) & SPT_SCS2_INTEN0_BKPT1_OCC_INTEN_MASK)
#define SPT_SCS2_INTEN0_BKPT2_OCC_INTEN_MASK     (0x8000U)
#define SPT_SCS2_INTEN0_BKPT2_OCC_INTEN_SHIFT    (15U)
#define SPT_SCS2_INTEN0_BKPT2_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS2_INTEN0_BKPT2_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_BKPT2_OCC_INTEN_SHIFT)) & SPT_SCS2_INTEN0_BKPT2_OCC_INTEN_MASK)
#define SPT_SCS2_INTEN0_BKPT3_OCC_INTEN_MASK     (0x10000U)
#define SPT_SCS2_INTEN0_BKPT3_OCC_INTEN_SHIFT    (16U)
#define SPT_SCS2_INTEN0_BKPT3_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS2_INTEN0_BKPT3_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN0_BKPT3_OCC_INTEN_SHIFT)) & SPT_SCS2_INTEN0_BKPT3_OCC_INTEN_MASK)
/*! @} */

/*! @name SCS2_INTEN1 - SCS Interrupt Enable Register 1 */
/*! @{ */
#define SPT_SCS2_INTEN1_ILL_OPCODE_INTEN_MASK    (0x1U)
#define SPT_SCS2_INTEN1_ILL_OPCODE_INTEN_SHIFT   (0U)
#define SPT_SCS2_INTEN1_ILL_OPCODE_INTEN_WIDTH   (1U)
#define SPT_SCS2_INTEN1_ILL_OPCODE_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_ILL_OPCODE_INTEN_SHIFT)) & SPT_SCS2_INTEN1_ILL_OPCODE_INTEN_MASK)
#define SPT_SCS2_INTEN1_ILL_LOOP_INTEN_MASK      (0x2U)
#define SPT_SCS2_INTEN1_ILL_LOOP_INTEN_SHIFT     (1U)
#define SPT_SCS2_INTEN1_ILL_LOOP_INTEN_WIDTH     (1U)
#define SPT_SCS2_INTEN1_ILL_LOOP_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_ILL_LOOP_INTEN_SHIFT)) & SPT_SCS2_INTEN1_ILL_LOOP_INTEN_MASK)
#define SPT_SCS2_INTEN1_ILL_0CNTLOOP_INTEN_MASK  (0x4U)
#define SPT_SCS2_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT (2U)
#define SPT_SCS2_INTEN1_ILL_0CNTLOOP_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN1_ILL_0CNTLOOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT)) & SPT_SCS2_INTEN1_ILL_0CNTLOOP_INTEN_MASK)
#define SPT_SCS2_INTEN1_ILL_NEXT_INTEN_MASK      (0x8U)
#define SPT_SCS2_INTEN1_ILL_NEXT_INTEN_SHIFT     (3U)
#define SPT_SCS2_INTEN1_ILL_NEXT_INTEN_WIDTH     (1U)
#define SPT_SCS2_INTEN1_ILL_NEXT_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_ILL_NEXT_INTEN_SHIFT)) & SPT_SCS2_INTEN1_ILL_NEXT_INTEN_MASK)
#define SPT_SCS2_INTEN1_ILL_SET_INTEN_MASK       (0x10U)
#define SPT_SCS2_INTEN1_ILL_SET_INTEN_SHIFT      (4U)
#define SPT_SCS2_INTEN1_ILL_SET_INTEN_WIDTH      (1U)
#define SPT_SCS2_INTEN1_ILL_SET_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_ILL_SET_INTEN_SHIFT)) & SPT_SCS2_INTEN1_ILL_SET_INTEN_MASK)
#define SPT_SCS2_INTEN1_ILL_GET_INTEN_MASK       (0x20U)
#define SPT_SCS2_INTEN1_ILL_GET_INTEN_SHIFT      (5U)
#define SPT_SCS2_INTEN1_ILL_GET_INTEN_WIDTH      (1U)
#define SPT_SCS2_INTEN1_ILL_GET_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_ILL_GET_INTEN_SHIFT)) & SPT_SCS2_INTEN1_ILL_GET_INTEN_MASK)
#define SPT_SCS2_INTEN1_ILL_ADD_INTEN_MASK       (0x40U)
#define SPT_SCS2_INTEN1_ILL_ADD_INTEN_SHIFT      (6U)
#define SPT_SCS2_INTEN1_ILL_ADD_INTEN_WIDTH      (1U)
#define SPT_SCS2_INTEN1_ILL_ADD_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_ILL_ADD_INTEN_SHIFT)) & SPT_SCS2_INTEN1_ILL_ADD_INTEN_MASK)
#define SPT_SCS2_INTEN1_JAM_ILL_OPCODE_INTEN_MASK (0x80U)
#define SPT_SCS2_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT (7U)
#define SPT_SCS2_INTEN1_JAM_ILL_OPCODE_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN1_JAM_ILL_OPCODE_INTEN(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT)) & SPT_SCS2_INTEN1_JAM_ILL_OPCODE_INTEN_MASK)
#define SPT_SCS2_INTEN1_JAM_ILL_SYNC_INTEN_MASK  (0x100U)
#define SPT_SCS2_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT (8U)
#define SPT_SCS2_INTEN1_JAM_ILL_SYNC_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN1_JAM_ILL_SYNC_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT)) & SPT_SCS2_INTEN1_JAM_ILL_SYNC_INTEN_MASK)
#define SPT_SCS2_INTEN1_JAM_ILL_LOOP_INTEN_MASK  (0x200U)
#define SPT_SCS2_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT (9U)
#define SPT_SCS2_INTEN1_JAM_ILL_LOOP_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN1_JAM_ILL_LOOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT)) & SPT_SCS2_INTEN1_JAM_ILL_LOOP_INTEN_MASK)
#define SPT_SCS2_INTEN1_JAM_ILL_NEXT_INTEN_MASK  (0x400U)
#define SPT_SCS2_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT (10U)
#define SPT_SCS2_INTEN1_JAM_ILL_NEXT_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN1_JAM_ILL_NEXT_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT)) & SPT_SCS2_INTEN1_JAM_ILL_NEXT_INTEN_MASK)
#define SPT_SCS2_INTEN1_JAM_ILL_JUMP_INTEN_MASK  (0x800U)
#define SPT_SCS2_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT (11U)
#define SPT_SCS2_INTEN1_JAM_ILL_JUMP_INTEN_WIDTH (1U)
#define SPT_SCS2_INTEN1_JAM_ILL_JUMP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT)) & SPT_SCS2_INTEN1_JAM_ILL_JUMP_INTEN_MASK)
/*! @} */

/*! @name SCS2_PDMA_TRANSFER_COUNT_STATUS - SCS PDMA Transfer Count Status */
/*! @{ */
#define SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK (0xFFFFU)
#define SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT (0U)
#define SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_WIDTH (16U)
#define SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT)) & SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK)
#define SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK (0xFFFF0000U)
#define SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT (16U)
#define SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_WIDTH (16U)
#define SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT)) & SPT_SCS2_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK)
/*! @} */

/*! @name SCS2_PDMA_FMTB_EXP_ADDR_STATUS - SCS PDMA formatB Exponent Address status Register */
/*! @{ */
#define SPT_SCS2_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS2_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT (0U)
#define SPT_SCS2_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_WIDTH (32U)
#define SPT_SCS2_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS2_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT)) & SPT_SCS2_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK)
/*! @} */

/*! @name SCS3_JAM_INST0 - SCSa Jamming Instruction0 Register */
/*! @{ */
#define SPT_SCS3_JAM_INST0_JAM_INST_31_0_MASK    (0xFFFFFFFFU)
#define SPT_SCS3_JAM_INST0_JAM_INST_31_0_SHIFT   (0U)
#define SPT_SCS3_JAM_INST0_JAM_INST_31_0_WIDTH   (32U)
#define SPT_SCS3_JAM_INST0_JAM_INST_31_0(x)      (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_JAM_INST0_JAM_INST_31_0_SHIFT)) & SPT_SCS3_JAM_INST0_JAM_INST_31_0_MASK)
/*! @} */

/*! @name SCS3_JAM_INST1 - SCSa Jamming Instruction1 Register */
/*! @{ */
#define SPT_SCS3_JAM_INST1_JAM_INST_63_32_MASK   (0xFFFFFFFFU)
#define SPT_SCS3_JAM_INST1_JAM_INST_63_32_SHIFT  (0U)
#define SPT_SCS3_JAM_INST1_JAM_INST_63_32_WIDTH  (32U)
#define SPT_SCS3_JAM_INST1_JAM_INST_63_32(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_JAM_INST1_JAM_INST_63_32_SHIFT)) & SPT_SCS3_JAM_INST1_JAM_INST_63_32_MASK)
/*! @} */

/*! @name SCS3_JAM_INST2 - SCSa Jamming Instruction2 Register */
/*! @{ */
#define SPT_SCS3_JAM_INST2_JAM_INST_95_64_MASK   (0xFFFFFFFFU)
#define SPT_SCS3_JAM_INST2_JAM_INST_95_64_SHIFT  (0U)
#define SPT_SCS3_JAM_INST2_JAM_INST_95_64_WIDTH  (32U)
#define SPT_SCS3_JAM_INST2_JAM_INST_95_64(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_JAM_INST2_JAM_INST_95_64_SHIFT)) & SPT_SCS3_JAM_INST2_JAM_INST_95_64_MASK)
/*! @} */

/*! @name SCS3_JAM_INST3 - SCSa Jamming Instruction3 Register */
/*! @{ */
#define SPT_SCS3_JAM_INST3_JAM_INST_127_96_MASK  (0xFFFFFFFFU)
#define SPT_SCS3_JAM_INST3_JAM_INST_127_96_SHIFT (0U)
#define SPT_SCS3_JAM_INST3_JAM_INST_127_96_WIDTH (32U)
#define SPT_SCS3_JAM_INST3_JAM_INST_127_96(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_JAM_INST3_JAM_INST_127_96_SHIFT)) & SPT_SCS3_JAM_INST3_JAM_INST_127_96_MASK)
/*! @} */

/*! @name SCS3_CURR_INST_ADDR - SCSa Current Instruction Addr Register */
/*! @{ */
#define SPT_SCS3_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS3_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT (0U)
#define SPT_SCS3_CURR_INST_ADDR_CURRENT_INST_ADDR_WIDTH (32U)
#define SPT_SCS3_CURR_INST_ADDR_CURRENT_INST_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_CURR_INST_ADDR_CURRENT_INST_ADDR_SHIFT)) & SPT_SCS3_CURR_INST_ADDR_CURRENT_INST_ADDR_MASK)
/*! @} */

/*! @name SCS3_CURR_INST0 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS3_CURR_INST0_CURR_INST_31_0_MASK  (0xFFFFFFFFU)
#define SPT_SCS3_CURR_INST0_CURR_INST_31_0_SHIFT (0U)
#define SPT_SCS3_CURR_INST0_CURR_INST_31_0_WIDTH (32U)
#define SPT_SCS3_CURR_INST0_CURR_INST_31_0(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_CURR_INST0_CURR_INST_31_0_SHIFT)) & SPT_SCS3_CURR_INST0_CURR_INST_31_0_MASK)
/*! @} */

/*! @name SCS3_CURR_INST1 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS3_CURR_INST1_CURR_INST_63_32_MASK (0xFFFFFFFFU)
#define SPT_SCS3_CURR_INST1_CURR_INST_63_32_SHIFT (0U)
#define SPT_SCS3_CURR_INST1_CURR_INST_63_32_WIDTH (32U)
#define SPT_SCS3_CURR_INST1_CURR_INST_63_32(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_CURR_INST1_CURR_INST_63_32_SHIFT)) & SPT_SCS3_CURR_INST1_CURR_INST_63_32_MASK)
/*! @} */

/*! @name SCS3_CURR_INST2 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS3_CURR_INST2_CURR_INST_95_64_MASK (0xFFFFFFFFU)
#define SPT_SCS3_CURR_INST2_CURR_INST_95_64_SHIFT (0U)
#define SPT_SCS3_CURR_INST2_CURR_INST_95_64_WIDTH (32U)
#define SPT_SCS3_CURR_INST2_CURR_INST_95_64(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_CURR_INST2_CURR_INST_95_64_SHIFT)) & SPT_SCS3_CURR_INST2_CURR_INST_95_64_MASK)
/*! @} */

/*! @name SCS3_CURR_INST3 - SCSa Current Instruction Register */
/*! @{ */
#define SPT_SCS3_CURR_INST3_CURR_INST_127_96_MASK (0xFFFFFFFFU)
#define SPT_SCS3_CURR_INST3_CURR_INST_127_96_SHIFT (0U)
#define SPT_SCS3_CURR_INST3_CURR_INST_127_96_WIDTH (32U)
#define SPT_SCS3_CURR_INST3_CURR_INST_127_96(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_CURR_INST3_CURR_INST_127_96_SHIFT)) & SPT_SCS3_CURR_INST3_CURR_INST_127_96_MASK)
/*! @} */

/*! @name SCS3_LOOPCNTR01 - Loop Counter 0 and 1 Register */
/*! @{ */
#define SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR0_MASK  (0xFFFFU)
#define SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR0_SHIFT (0U)
#define SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR0_WIDTH (16U)
#define SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR0(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR0_SHIFT)) & SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR0_MASK)
#define SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR1_MASK  (0xFFFF0000U)
#define SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR1_SHIFT (16U)
#define SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR1_WIDTH (16U)
#define SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR1(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR1_SHIFT)) & SPT_SCS3_LOOPCNTR01_SCS_LOOP_CNTR1_MASK)
/*! @} */

/*! @name SCS3_LOOPCNTR23 - Loop Counter 2 and 3 Register */
/*! @{ */
#define SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR2_MASK  (0xFFFFU)
#define SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR2_SHIFT (0U)
#define SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR2_WIDTH (16U)
#define SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR2(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR2_SHIFT)) & SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR2_MASK)
#define SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR3_MASK  (0xFFFF0000U)
#define SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR3_SHIFT (16U)
#define SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR3_WIDTH (16U)
#define SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR3(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR3_SHIFT)) & SPT_SCS3_LOOPCNTR23_SCS_LOOP_CNTR3_MASK)
/*! @} */

/*! @name SCS3_ERR_INST_ADDR - SCSa Error Instruction Addr Register */
/*! @{ */
#define SPT_SCS3_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS3_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_SHIFT (0U)
#define SPT_SCS3_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_WIDTH (32U)
#define SPT_SCS3_ERR_INST_ADDR_SCS_ERROR_INST_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_SHIFT)) & SPT_SCS3_ERR_INST_ADDR_SCS_ERROR_INST_ADDR_MASK)
/*! @} */

/*! @name SCS3_ERR_INST0 -  */
/*! @{ */
#define SPT_SCS3_ERR_INST0_SCS_ERR_INST_31_0_MASK (0xFFFFFFFFU)
#define SPT_SCS3_ERR_INST0_SCS_ERR_INST_31_0_SHIFT (0U)
#define SPT_SCS3_ERR_INST0_SCS_ERR_INST_31_0_WIDTH (32U)
#define SPT_SCS3_ERR_INST0_SCS_ERR_INST_31_0(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_ERR_INST0_SCS_ERR_INST_31_0_SHIFT)) & SPT_SCS3_ERR_INST0_SCS_ERR_INST_31_0_MASK)
/*! @} */

/*! @name SCS3_ERR_INST1 -  */
/*! @{ */
#define SPT_SCS3_ERR_INST1_SCS_ERR_INST_63_32_MASK (0xFFFFFFFFU)
#define SPT_SCS3_ERR_INST1_SCS_ERR_INST_63_32_SHIFT (0U)
#define SPT_SCS3_ERR_INST1_SCS_ERR_INST_63_32_WIDTH (32U)
#define SPT_SCS3_ERR_INST1_SCS_ERR_INST_63_32(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_ERR_INST1_SCS_ERR_INST_63_32_SHIFT)) & SPT_SCS3_ERR_INST1_SCS_ERR_INST_63_32_MASK)
/*! @} */

/*! @name SCS3_ERR_INST2 -  */
/*! @{ */
#define SPT_SCS3_ERR_INST2_SCS_ERR_INST_95_64_MASK (0xFFFFFFFFU)
#define SPT_SCS3_ERR_INST2_SCS_ERR_INST_95_64_SHIFT (0U)
#define SPT_SCS3_ERR_INST2_SCS_ERR_INST_95_64_WIDTH (32U)
#define SPT_SCS3_ERR_INST2_SCS_ERR_INST_95_64(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_ERR_INST2_SCS_ERR_INST_95_64_SHIFT)) & SPT_SCS3_ERR_INST2_SCS_ERR_INST_95_64_MASK)
/*! @} */

/*! @name SCS3_ERR_INST3 -  */
/*! @{ */
#define SPT_SCS3_ERR_INST3_SCS_ERR_INST_127_96_MASK (0xFFFFFFFFU)
#define SPT_SCS3_ERR_INST3_SCS_ERR_INST_127_96_SHIFT (0U)
#define SPT_SCS3_ERR_INST3_SCS_ERR_INST_127_96_WIDTH (32U)
#define SPT_SCS3_ERR_INST3_SCS_ERR_INST_127_96(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_ERR_INST3_SCS_ERR_INST_127_96_SHIFT)) & SPT_SCS3_ERR_INST3_SCS_ERR_INST_127_96_MASK)
/*! @} */

/*! @name SCS3_STATUS0 - SCSa General Status 0 Register */
/*! @{ */
#define SPT_SCS3_STATUS0_PS_START_MASK           (0x1U)
#define SPT_SCS3_STATUS0_PS_START_SHIFT          (0U)
#define SPT_SCS3_STATUS0_PS_START_WIDTH          (1U)
#define SPT_SCS3_STATUS0_PS_START(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_PS_START_SHIFT)) & SPT_SCS3_STATUS0_PS_START_MASK)
#define SPT_SCS3_STATUS0_PS_WAIT_MASK            (0x2U)
#define SPT_SCS3_STATUS0_PS_WAIT_SHIFT           (1U)
#define SPT_SCS3_STATUS0_PS_WAIT_WIDTH           (1U)
#define SPT_SCS3_STATUS0_PS_WAIT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_PS_WAIT_SHIFT)) & SPT_SCS3_STATUS0_PS_WAIT_MASK)
#define SPT_SCS3_STATUS0_PS_DEBUG_MASK           (0x4U)
#define SPT_SCS3_STATUS0_PS_DEBUG_SHIFT          (2U)
#define SPT_SCS3_STATUS0_PS_DEBUG_WIDTH          (1U)
#define SPT_SCS3_STATUS0_PS_DEBUG(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_PS_DEBUG_SHIFT)) & SPT_SCS3_STATUS0_PS_DEBUG_MASK)
#define SPT_SCS3_STATUS0_PS_STOP_MASK            (0x8U)
#define SPT_SCS3_STATUS0_PS_STOP_SHIFT           (3U)
#define SPT_SCS3_STATUS0_PS_STOP_WIDTH           (1U)
#define SPT_SCS3_STATUS0_PS_STOP(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_PS_STOP_SHIFT)) & SPT_SCS3_STATUS0_PS_STOP_MASK)
#define SPT_SCS3_STATUS0_PS_ASYNCSTOP_MASK       (0x10U)
#define SPT_SCS3_STATUS0_PS_ASYNCSTOP_SHIFT      (4U)
#define SPT_SCS3_STATUS0_PS_ASYNCSTOP_WIDTH      (1U)
#define SPT_SCS3_STATUS0_PS_ASYNCSTOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_PS_ASYNCSTOP_SHIFT)) & SPT_SCS3_STATUS0_PS_ASYNCSTOP_MASK)
#define SPT_SCS3_STATUS0_PS_RUN_MASK             (0x20U)
#define SPT_SCS3_STATUS0_PS_RUN_SHIFT            (5U)
#define SPT_SCS3_STATUS0_PS_RUN_WIDTH            (1U)
#define SPT_SCS3_STATUS0_PS_RUN(x)               (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_PS_RUN_SHIFT)) & SPT_SCS3_STATUS0_PS_RUN_MASK)
#define SPT_SCS3_STATUS0_MD_HALT_MASK            (0x40U)
#define SPT_SCS3_STATUS0_MD_HALT_SHIFT           (6U)
#define SPT_SCS3_STATUS0_MD_HALT_WIDTH           (1U)
#define SPT_SCS3_STATUS0_MD_HALT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_MD_HALT_SHIFT)) & SPT_SCS3_STATUS0_MD_HALT_MASK)
#define SPT_SCS3_STATUS0_MD_STEP_ONCE_MASK       (0x80U)
#define SPT_SCS3_STATUS0_MD_STEP_ONCE_SHIFT      (7U)
#define SPT_SCS3_STATUS0_MD_STEP_ONCE_WIDTH      (1U)
#define SPT_SCS3_STATUS0_MD_STEP_ONCE(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_MD_STEP_ONCE_SHIFT)) & SPT_SCS3_STATUS0_MD_STEP_ONCE_MASK)
#define SPT_SCS3_STATUS0_MD_STEP_JUMP_MASK       (0x100U)
#define SPT_SCS3_STATUS0_MD_STEP_JUMP_SHIFT      (8U)
#define SPT_SCS3_STATUS0_MD_STEP_JUMP_WIDTH      (1U)
#define SPT_SCS3_STATUS0_MD_STEP_JUMP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_MD_STEP_JUMP_SHIFT)) & SPT_SCS3_STATUS0_MD_STEP_JUMP_MASK)
#define SPT_SCS3_STATUS0_MD_JAM_MASK             (0x200U)
#define SPT_SCS3_STATUS0_MD_JAM_SHIFT            (9U)
#define SPT_SCS3_STATUS0_MD_JAM_WIDTH            (1U)
#define SPT_SCS3_STATUS0_MD_JAM(x)               (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_MD_JAM_SHIFT)) & SPT_SCS3_STATUS0_MD_JAM_MASK)
#define SPT_SCS3_STATUS0_STEP_ONCE_OVR_MASK      (0x400U)
#define SPT_SCS3_STATUS0_STEP_ONCE_OVR_SHIFT     (10U)
#define SPT_SCS3_STATUS0_STEP_ONCE_OVR_WIDTH     (1U)
#define SPT_SCS3_STATUS0_STEP_ONCE_OVR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_STEP_ONCE_OVR_SHIFT)) & SPT_SCS3_STATUS0_STEP_ONCE_OVR_MASK)
#define SPT_SCS3_STATUS0_STEP_JUMP_OVR_MASK      (0x800U)
#define SPT_SCS3_STATUS0_STEP_JUMP_OVR_SHIFT     (11U)
#define SPT_SCS3_STATUS0_STEP_JUMP_OVR_WIDTH     (1U)
#define SPT_SCS3_STATUS0_STEP_JUMP_OVR(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_STEP_JUMP_OVR_SHIFT)) & SPT_SCS3_STATUS0_STEP_JUMP_OVR_MASK)
#define SPT_SCS3_STATUS0_JAM_OVR_MASK            (0x1000U)
#define SPT_SCS3_STATUS0_JAM_OVR_SHIFT           (12U)
#define SPT_SCS3_STATUS0_JAM_OVR_WIDTH           (1U)
#define SPT_SCS3_STATUS0_JAM_OVR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_JAM_OVR_SHIFT)) & SPT_SCS3_STATUS0_JAM_OVR_MASK)
#define SPT_SCS3_STATUS0_BKPT0_OCC_MASK          (0x2000U)
#define SPT_SCS3_STATUS0_BKPT0_OCC_SHIFT         (13U)
#define SPT_SCS3_STATUS0_BKPT0_OCC_WIDTH         (1U)
#define SPT_SCS3_STATUS0_BKPT0_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_BKPT0_OCC_SHIFT)) & SPT_SCS3_STATUS0_BKPT0_OCC_MASK)
#define SPT_SCS3_STATUS0_BKPT1_OCC_MASK          (0x4000U)
#define SPT_SCS3_STATUS0_BKPT1_OCC_SHIFT         (14U)
#define SPT_SCS3_STATUS0_BKPT1_OCC_WIDTH         (1U)
#define SPT_SCS3_STATUS0_BKPT1_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_BKPT1_OCC_SHIFT)) & SPT_SCS3_STATUS0_BKPT1_OCC_MASK)
#define SPT_SCS3_STATUS0_BKPT2_OCC_MASK          (0x8000U)
#define SPT_SCS3_STATUS0_BKPT2_OCC_SHIFT         (15U)
#define SPT_SCS3_STATUS0_BKPT2_OCC_WIDTH         (1U)
#define SPT_SCS3_STATUS0_BKPT2_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_BKPT2_OCC_SHIFT)) & SPT_SCS3_STATUS0_BKPT2_OCC_MASK)
#define SPT_SCS3_STATUS0_BKPT3_OCC_MASK          (0x10000U)
#define SPT_SCS3_STATUS0_BKPT3_OCC_SHIFT         (16U)
#define SPT_SCS3_STATUS0_BKPT3_OCC_WIDTH         (1U)
#define SPT_SCS3_STATUS0_BKPT3_OCC(x)            (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS0_BKPT3_OCC_SHIFT)) & SPT_SCS3_STATUS0_BKPT3_OCC_MASK)
/*! @} */

/*! @name SCS3_STATUS1 - SCSa General Status 1 Register */
/*! @{ */
#define SPT_SCS3_STATUS1_ILL_OPCODE_MASK         (0x1U)
#define SPT_SCS3_STATUS1_ILL_OPCODE_SHIFT        (0U)
#define SPT_SCS3_STATUS1_ILL_OPCODE_WIDTH        (1U)
#define SPT_SCS3_STATUS1_ILL_OPCODE(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_ILL_OPCODE_SHIFT)) & SPT_SCS3_STATUS1_ILL_OPCODE_MASK)
#define SPT_SCS3_STATUS1_ILL_LOOP_MASK           (0x2U)
#define SPT_SCS3_STATUS1_ILL_LOOP_SHIFT          (1U)
#define SPT_SCS3_STATUS1_ILL_LOOP_WIDTH          (1U)
#define SPT_SCS3_STATUS1_ILL_LOOP(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_ILL_LOOP_SHIFT)) & SPT_SCS3_STATUS1_ILL_LOOP_MASK)
#define SPT_SCS3_STATUS1_ILL_0CNTLOOP_MASK       (0x4U)
#define SPT_SCS3_STATUS1_ILL_0CNTLOOP_SHIFT      (2U)
#define SPT_SCS3_STATUS1_ILL_0CNTLOOP_WIDTH      (1U)
#define SPT_SCS3_STATUS1_ILL_0CNTLOOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_ILL_0CNTLOOP_SHIFT)) & SPT_SCS3_STATUS1_ILL_0CNTLOOP_MASK)
#define SPT_SCS3_STATUS1_ILL_NEXT_MASK           (0x8U)
#define SPT_SCS3_STATUS1_ILL_NEXT_SHIFT          (3U)
#define SPT_SCS3_STATUS1_ILL_NEXT_WIDTH          (1U)
#define SPT_SCS3_STATUS1_ILL_NEXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_ILL_NEXT_SHIFT)) & SPT_SCS3_STATUS1_ILL_NEXT_MASK)
#define SPT_SCS3_STATUS1_ILL_SET_MASK            (0x10U)
#define SPT_SCS3_STATUS1_ILL_SET_SHIFT           (4U)
#define SPT_SCS3_STATUS1_ILL_SET_WIDTH           (1U)
#define SPT_SCS3_STATUS1_ILL_SET(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_ILL_SET_SHIFT)) & SPT_SCS3_STATUS1_ILL_SET_MASK)
#define SPT_SCS3_STATUS1_ILL_GET_MASK            (0x20U)
#define SPT_SCS3_STATUS1_ILL_GET_SHIFT           (5U)
#define SPT_SCS3_STATUS1_ILL_GET_WIDTH           (1U)
#define SPT_SCS3_STATUS1_ILL_GET(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_ILL_GET_SHIFT)) & SPT_SCS3_STATUS1_ILL_GET_MASK)
#define SPT_SCS3_STATUS1_ILL_ADD_MASK            (0x40U)
#define SPT_SCS3_STATUS1_ILL_ADD_SHIFT           (6U)
#define SPT_SCS3_STATUS1_ILL_ADD_WIDTH           (1U)
#define SPT_SCS3_STATUS1_ILL_ADD(x)              (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_ILL_ADD_SHIFT)) & SPT_SCS3_STATUS1_ILL_ADD_MASK)
#define SPT_SCS3_STATUS1_JAM_ILL_OPCODE_MASK     (0x80U)
#define SPT_SCS3_STATUS1_JAM_ILL_OPCODE_SHIFT    (7U)
#define SPT_SCS3_STATUS1_JAM_ILL_OPCODE_WIDTH    (1U)
#define SPT_SCS3_STATUS1_JAM_ILL_OPCODE(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_JAM_ILL_OPCODE_SHIFT)) & SPT_SCS3_STATUS1_JAM_ILL_OPCODE_MASK)
#define SPT_SCS3_STATUS1_JAM_ILL_SYNC_MASK       (0x100U)
#define SPT_SCS3_STATUS1_JAM_ILL_SYNC_SHIFT      (8U)
#define SPT_SCS3_STATUS1_JAM_ILL_SYNC_WIDTH      (1U)
#define SPT_SCS3_STATUS1_JAM_ILL_SYNC(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_JAM_ILL_SYNC_SHIFT)) & SPT_SCS3_STATUS1_JAM_ILL_SYNC_MASK)
#define SPT_SCS3_STATUS1_JAM_ILL_LOOP_MASK       (0x200U)
#define SPT_SCS3_STATUS1_JAM_ILL_LOOP_SHIFT      (9U)
#define SPT_SCS3_STATUS1_JAM_ILL_LOOP_WIDTH      (1U)
#define SPT_SCS3_STATUS1_JAM_ILL_LOOP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_JAM_ILL_LOOP_SHIFT)) & SPT_SCS3_STATUS1_JAM_ILL_LOOP_MASK)
#define SPT_SCS3_STATUS1_JAM_ILL_NEXT_MASK       (0x400U)
#define SPT_SCS3_STATUS1_JAM_ILL_NEXT_SHIFT      (10U)
#define SPT_SCS3_STATUS1_JAM_ILL_NEXT_WIDTH      (1U)
#define SPT_SCS3_STATUS1_JAM_ILL_NEXT(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_JAM_ILL_NEXT_SHIFT)) & SPT_SCS3_STATUS1_JAM_ILL_NEXT_MASK)
#define SPT_SCS3_STATUS1_JAM_ILL_JUMP_MASK       (0x800U)
#define SPT_SCS3_STATUS1_JAM_ILL_JUMP_SHIFT      (11U)
#define SPT_SCS3_STATUS1_JAM_ILL_JUMP_WIDTH      (1U)
#define SPT_SCS3_STATUS1_JAM_ILL_JUMP(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS1_JAM_ILL_JUMP_SHIFT)) & SPT_SCS3_STATUS1_JAM_ILL_JUMP_MASK)
/*! @} */

/*! @name SCS3_STATUS2 - SCSa General Status2 Register */
/*! @{ */
#define SPT_SCS3_STATUS2_WAITREG_SW_MASK         (0xFFFFU)
#define SPT_SCS3_STATUS2_WAITREG_SW_SHIFT        (0U)
#define SPT_SCS3_STATUS2_WAITREG_SW_WIDTH        (16U)
#define SPT_SCS3_STATUS2_WAITREG_SW(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS2_WAITREG_SW_SHIFT)) & SPT_SCS3_STATUS2_WAITREG_SW_MASK)
#define SPT_SCS3_STATUS2_WAITREG_EVT_NUMBER_MASK (0x7F0000U)
#define SPT_SCS3_STATUS2_WAITREG_EVT_NUMBER_SHIFT (16U)
#define SPT_SCS3_STATUS2_WAITREG_EVT_NUMBER_WIDTH (7U)
#define SPT_SCS3_STATUS2_WAITREG_EVT_NUMBER(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS2_WAITREG_EVT_NUMBER_SHIFT)) & SPT_SCS3_STATUS2_WAITREG_EVT_NUMBER_MASK)
#define SPT_SCS3_STATUS2_WAITREG_EVT_TYPE_MASK   (0x60000000U)
#define SPT_SCS3_STATUS2_WAITREG_EVT_TYPE_SHIFT  (29U)
#define SPT_SCS3_STATUS2_WAITREG_EVT_TYPE_WIDTH  (2U)
#define SPT_SCS3_STATUS2_WAITREG_EVT_TYPE(x)     (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS2_WAITREG_EVT_TYPE_SHIFT)) & SPT_SCS3_STATUS2_WAITREG_EVT_TYPE_MASK)
/*! @} */

/*! @name SCS3_STATUS3 - SCSa General Status 3 Register */
/*! @{ */
#define SPT_SCS3_STATUS3_LOOP_DEPTH_MASK         (0x7U)
#define SPT_SCS3_STATUS3_LOOP_DEPTH_SHIFT        (0U)
#define SPT_SCS3_STATUS3_LOOP_DEPTH_WIDTH        (3U)
#define SPT_SCS3_STATUS3_LOOP_DEPTH(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS3_LOOP_DEPTH_SHIFT)) & SPT_SCS3_STATUS3_LOOP_DEPTH_MASK)
#define SPT_SCS3_STATUS3_PROC_STATE_MASK         (0x78U)
#define SPT_SCS3_STATUS3_PROC_STATE_SHIFT        (3U)
#define SPT_SCS3_STATUS3_PROC_STATE_WIDTH        (4U)
#define SPT_SCS3_STATUS3_PROC_STATE(x)           (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_STATUS3_PROC_STATE_SHIFT)) & SPT_SCS3_STATUS3_PROC_STATE_MASK)
/*! @} */

/*! @name SCS3_INTEN0 - SCS Interrupt Enable Register 0 */
/*! @{ */
#define SPT_SCS3_INTEN0_PS_START_INTEN_MASK      (0x1U)
#define SPT_SCS3_INTEN0_PS_START_INTEN_SHIFT     (0U)
#define SPT_SCS3_INTEN0_PS_START_INTEN_WIDTH     (1U)
#define SPT_SCS3_INTEN0_PS_START_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_PS_START_INTEN_SHIFT)) & SPT_SCS3_INTEN0_PS_START_INTEN_MASK)
#define SPT_SCS3_INTEN0_PS_WAIT_INTEN_MASK       (0x2U)
#define SPT_SCS3_INTEN0_PS_WAIT_INTEN_SHIFT      (1U)
#define SPT_SCS3_INTEN0_PS_WAIT_INTEN_WIDTH      (1U)
#define SPT_SCS3_INTEN0_PS_WAIT_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_PS_WAIT_INTEN_SHIFT)) & SPT_SCS3_INTEN0_PS_WAIT_INTEN_MASK)
#define SPT_SCS3_INTEN0_PS_DEBUG_INTEN_MASK      (0x4U)
#define SPT_SCS3_INTEN0_PS_DEBUG_INTEN_SHIFT     (2U)
#define SPT_SCS3_INTEN0_PS_DEBUG_INTEN_WIDTH     (1U)
#define SPT_SCS3_INTEN0_PS_DEBUG_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_PS_DEBUG_INTEN_SHIFT)) & SPT_SCS3_INTEN0_PS_DEBUG_INTEN_MASK)
#define SPT_SCS3_INTEN0_PS_STOP_INTEN_MASK       (0x8U)
#define SPT_SCS3_INTEN0_PS_STOP_INTEN_SHIFT      (3U)
#define SPT_SCS3_INTEN0_PS_STOP_INTEN_WIDTH      (1U)
#define SPT_SCS3_INTEN0_PS_STOP_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_PS_STOP_INTEN_SHIFT)) & SPT_SCS3_INTEN0_PS_STOP_INTEN_MASK)
#define SPT_SCS3_INTEN0_PS_ASYNCSTOP_INTEN_MASK  (0x10U)
#define SPT_SCS3_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT (4U)
#define SPT_SCS3_INTEN0_PS_ASYNCSTOP_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN0_PS_ASYNCSTOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_PS_ASYNCSTOP_INTEN_SHIFT)) & SPT_SCS3_INTEN0_PS_ASYNCSTOP_INTEN_MASK)
#define SPT_SCS3_INTEN0_PS_RUN_INTEN_MASK        (0x20U)
#define SPT_SCS3_INTEN0_PS_RUN_INTEN_SHIFT       (5U)
#define SPT_SCS3_INTEN0_PS_RUN_INTEN_WIDTH       (1U)
#define SPT_SCS3_INTEN0_PS_RUN_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_PS_RUN_INTEN_SHIFT)) & SPT_SCS3_INTEN0_PS_RUN_INTEN_MASK)
#define SPT_SCS3_INTEN0_MD_HALT_INTEN_MASK       (0x40U)
#define SPT_SCS3_INTEN0_MD_HALT_INTEN_SHIFT      (6U)
#define SPT_SCS3_INTEN0_MD_HALT_INTEN_WIDTH      (1U)
#define SPT_SCS3_INTEN0_MD_HALT_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_MD_HALT_INTEN_SHIFT)) & SPT_SCS3_INTEN0_MD_HALT_INTEN_MASK)
#define SPT_SCS3_INTEN0_MD_STEP_ONCE_INTEN_MASK  (0x80U)
#define SPT_SCS3_INTEN0_MD_STEP_ONCE_INTEN_SHIFT (7U)
#define SPT_SCS3_INTEN0_MD_STEP_ONCE_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN0_MD_STEP_ONCE_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_MD_STEP_ONCE_INTEN_SHIFT)) & SPT_SCS3_INTEN0_MD_STEP_ONCE_INTEN_MASK)
#define SPT_SCS3_INTEN0_MD_STEP_JUMP_INTEN_MASK  (0x100U)
#define SPT_SCS3_INTEN0_MD_STEP_JUMP_INTEN_SHIFT (8U)
#define SPT_SCS3_INTEN0_MD_STEP_JUMP_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN0_MD_STEP_JUMP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_MD_STEP_JUMP_INTEN_SHIFT)) & SPT_SCS3_INTEN0_MD_STEP_JUMP_INTEN_MASK)
#define SPT_SCS3_INTEN0_MD_JAM_INTEN_MASK        (0x200U)
#define SPT_SCS3_INTEN0_MD_JAM_INTEN_SHIFT       (9U)
#define SPT_SCS3_INTEN0_MD_JAM_INTEN_WIDTH       (1U)
#define SPT_SCS3_INTEN0_MD_JAM_INTEN(x)          (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_MD_JAM_INTEN_SHIFT)) & SPT_SCS3_INTEN0_MD_JAM_INTEN_MASK)
#define SPT_SCS3_INTEN0_STEP_ONCE_OVR_INTEN_MASK (0x400U)
#define SPT_SCS3_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT (10U)
#define SPT_SCS3_INTEN0_STEP_ONCE_OVR_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN0_STEP_ONCE_OVR_INTEN(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_STEP_ONCE_OVR_INTEN_SHIFT)) & SPT_SCS3_INTEN0_STEP_ONCE_OVR_INTEN_MASK)
#define SPT_SCS3_INTEN0_STEP_JUMP_OVR_INTEN_MASK (0x800U)
#define SPT_SCS3_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT (11U)
#define SPT_SCS3_INTEN0_STEP_JUMP_OVR_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN0_STEP_JUMP_OVR_INTEN(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_STEP_JUMP_OVR_INTEN_SHIFT)) & SPT_SCS3_INTEN0_STEP_JUMP_OVR_INTEN_MASK)
#define SPT_SCS3_INTEN0_JAM_OVR_INTEN_MASK       (0x1000U)
#define SPT_SCS3_INTEN0_JAM_OVR_INTEN_SHIFT      (12U)
#define SPT_SCS3_INTEN0_JAM_OVR_INTEN_WIDTH      (1U)
#define SPT_SCS3_INTEN0_JAM_OVR_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_JAM_OVR_INTEN_SHIFT)) & SPT_SCS3_INTEN0_JAM_OVR_INTEN_MASK)
#define SPT_SCS3_INTEN0_BKPT0_OCC_INTEN_MASK     (0x2000U)
#define SPT_SCS3_INTEN0_BKPT0_OCC_INTEN_SHIFT    (13U)
#define SPT_SCS3_INTEN0_BKPT0_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS3_INTEN0_BKPT0_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_BKPT0_OCC_INTEN_SHIFT)) & SPT_SCS3_INTEN0_BKPT0_OCC_INTEN_MASK)
#define SPT_SCS3_INTEN0_BKPT1_OCC_INTEN_MASK     (0x4000U)
#define SPT_SCS3_INTEN0_BKPT1_OCC_INTEN_SHIFT    (14U)
#define SPT_SCS3_INTEN0_BKPT1_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS3_INTEN0_BKPT1_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_BKPT1_OCC_INTEN_SHIFT)) & SPT_SCS3_INTEN0_BKPT1_OCC_INTEN_MASK)
#define SPT_SCS3_INTEN0_BKPT2_OCC_INTEN_MASK     (0x8000U)
#define SPT_SCS3_INTEN0_BKPT2_OCC_INTEN_SHIFT    (15U)
#define SPT_SCS3_INTEN0_BKPT2_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS3_INTEN0_BKPT2_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_BKPT2_OCC_INTEN_SHIFT)) & SPT_SCS3_INTEN0_BKPT2_OCC_INTEN_MASK)
#define SPT_SCS3_INTEN0_BKPT3_OCC_INTEN_MASK     (0x10000U)
#define SPT_SCS3_INTEN0_BKPT3_OCC_INTEN_SHIFT    (16U)
#define SPT_SCS3_INTEN0_BKPT3_OCC_INTEN_WIDTH    (1U)
#define SPT_SCS3_INTEN0_BKPT3_OCC_INTEN(x)       (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN0_BKPT3_OCC_INTEN_SHIFT)) & SPT_SCS3_INTEN0_BKPT3_OCC_INTEN_MASK)
/*! @} */

/*! @name SCS3_INTEN1 - SCS Interrupt Enable Register 1 */
/*! @{ */
#define SPT_SCS3_INTEN1_ILL_OPCODE_INTEN_MASK    (0x1U)
#define SPT_SCS3_INTEN1_ILL_OPCODE_INTEN_SHIFT   (0U)
#define SPT_SCS3_INTEN1_ILL_OPCODE_INTEN_WIDTH   (1U)
#define SPT_SCS3_INTEN1_ILL_OPCODE_INTEN(x)      (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_ILL_OPCODE_INTEN_SHIFT)) & SPT_SCS3_INTEN1_ILL_OPCODE_INTEN_MASK)
#define SPT_SCS3_INTEN1_ILL_LOOP_INTEN_MASK      (0x2U)
#define SPT_SCS3_INTEN1_ILL_LOOP_INTEN_SHIFT     (1U)
#define SPT_SCS3_INTEN1_ILL_LOOP_INTEN_WIDTH     (1U)
#define SPT_SCS3_INTEN1_ILL_LOOP_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_ILL_LOOP_INTEN_SHIFT)) & SPT_SCS3_INTEN1_ILL_LOOP_INTEN_MASK)
#define SPT_SCS3_INTEN1_ILL_0CNTLOOP_INTEN_MASK  (0x4U)
#define SPT_SCS3_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT (2U)
#define SPT_SCS3_INTEN1_ILL_0CNTLOOP_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN1_ILL_0CNTLOOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_ILL_0CNTLOOP_INTEN_SHIFT)) & SPT_SCS3_INTEN1_ILL_0CNTLOOP_INTEN_MASK)
#define SPT_SCS3_INTEN1_ILL_NEXT_INTEN_MASK      (0x8U)
#define SPT_SCS3_INTEN1_ILL_NEXT_INTEN_SHIFT     (3U)
#define SPT_SCS3_INTEN1_ILL_NEXT_INTEN_WIDTH     (1U)
#define SPT_SCS3_INTEN1_ILL_NEXT_INTEN(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_ILL_NEXT_INTEN_SHIFT)) & SPT_SCS3_INTEN1_ILL_NEXT_INTEN_MASK)
#define SPT_SCS3_INTEN1_ILL_SET_INTEN_MASK       (0x10U)
#define SPT_SCS3_INTEN1_ILL_SET_INTEN_SHIFT      (4U)
#define SPT_SCS3_INTEN1_ILL_SET_INTEN_WIDTH      (1U)
#define SPT_SCS3_INTEN1_ILL_SET_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_ILL_SET_INTEN_SHIFT)) & SPT_SCS3_INTEN1_ILL_SET_INTEN_MASK)
#define SPT_SCS3_INTEN1_ILL_GET_INTEN_MASK       (0x20U)
#define SPT_SCS3_INTEN1_ILL_GET_INTEN_SHIFT      (5U)
#define SPT_SCS3_INTEN1_ILL_GET_INTEN_WIDTH      (1U)
#define SPT_SCS3_INTEN1_ILL_GET_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_ILL_GET_INTEN_SHIFT)) & SPT_SCS3_INTEN1_ILL_GET_INTEN_MASK)
#define SPT_SCS3_INTEN1_ILL_ADD_INTEN_MASK       (0x40U)
#define SPT_SCS3_INTEN1_ILL_ADD_INTEN_SHIFT      (6U)
#define SPT_SCS3_INTEN1_ILL_ADD_INTEN_WIDTH      (1U)
#define SPT_SCS3_INTEN1_ILL_ADD_INTEN(x)         (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_ILL_ADD_INTEN_SHIFT)) & SPT_SCS3_INTEN1_ILL_ADD_INTEN_MASK)
#define SPT_SCS3_INTEN1_JAM_ILL_OPCODE_INTEN_MASK (0x80U)
#define SPT_SCS3_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT (7U)
#define SPT_SCS3_INTEN1_JAM_ILL_OPCODE_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN1_JAM_ILL_OPCODE_INTEN(x)  (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_JAM_ILL_OPCODE_INTEN_SHIFT)) & SPT_SCS3_INTEN1_JAM_ILL_OPCODE_INTEN_MASK)
#define SPT_SCS3_INTEN1_JAM_ILL_SYNC_INTEN_MASK  (0x100U)
#define SPT_SCS3_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT (8U)
#define SPT_SCS3_INTEN1_JAM_ILL_SYNC_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN1_JAM_ILL_SYNC_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_JAM_ILL_SYNC_INTEN_SHIFT)) & SPT_SCS3_INTEN1_JAM_ILL_SYNC_INTEN_MASK)
#define SPT_SCS3_INTEN1_JAM_ILL_LOOP_INTEN_MASK  (0x200U)
#define SPT_SCS3_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT (9U)
#define SPT_SCS3_INTEN1_JAM_ILL_LOOP_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN1_JAM_ILL_LOOP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_JAM_ILL_LOOP_INTEN_SHIFT)) & SPT_SCS3_INTEN1_JAM_ILL_LOOP_INTEN_MASK)
#define SPT_SCS3_INTEN1_JAM_ILL_NEXT_INTEN_MASK  (0x400U)
#define SPT_SCS3_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT (10U)
#define SPT_SCS3_INTEN1_JAM_ILL_NEXT_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN1_JAM_ILL_NEXT_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_JAM_ILL_NEXT_INTEN_SHIFT)) & SPT_SCS3_INTEN1_JAM_ILL_NEXT_INTEN_MASK)
#define SPT_SCS3_INTEN1_JAM_ILL_JUMP_INTEN_MASK  (0x800U)
#define SPT_SCS3_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT (11U)
#define SPT_SCS3_INTEN1_JAM_ILL_JUMP_INTEN_WIDTH (1U)
#define SPT_SCS3_INTEN1_JAM_ILL_JUMP_INTEN(x)    (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_INTEN1_JAM_ILL_JUMP_INTEN_SHIFT)) & SPT_SCS3_INTEN1_JAM_ILL_JUMP_INTEN_MASK)
/*! @} */

/*! @name SCS3_PDMA_TRANSFER_COUNT_STATUS - SCS PDMA Transfer Count Status */
/*! @{ */
#define SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK (0xFFFFU)
#define SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT (0U)
#define SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_WIDTH (16U)
#define SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_SHIFT)) & SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_TRANSFER_COUNT_MASK)
#define SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK (0xFFFF0000U)
#define SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT (16U)
#define SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_WIDTH (16U)
#define SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_SHIFT)) & SPT_SCS3_PDMA_TRANSFER_COUNT_STATUS_AGGR_DATA_COUNT_MASK)
/*! @} */

/*! @name SCS3_PDMA_FMTB_EXP_ADDR_STATUS - SCS PDMA formatB Exponent Address status Register */
/*! @{ */
#define SPT_SCS3_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK (0xFFFFFFFFU)
#define SPT_SCS3_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT (0U)
#define SPT_SCS3_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_WIDTH (32U)
#define SPT_SCS3_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR(x) (((uint32_t)(((uint32_t)(x)) << SPT_SCS3_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_SHIFT)) & SPT_SCS3_PDMA_FMTB_EXP_ADDR_STATUS_EXPN_ADDR_MASK)
/*! @} */

/*! @name SPR_0_15_CTRL_REG - DSP WLU interface has unconditional access to all Work Registers and SPRs(0:9). */
/*! @{ */
#define SPT_SPR_0_15_CTRL_REG_SPR0_LCK_MASK      (0x1U)
#define SPT_SPR_0_15_CTRL_REG_SPR0_LCK_SHIFT     (0U)
#define SPT_SPR_0_15_CTRL_REG_SPR0_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR0_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR0_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR0_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR0_ACC_CTRL_MASK (0x2U)
#define SPT_SPR_0_15_CTRL_REG_SPR0_ACC_CTRL_SHIFT (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR0_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR0_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR0_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR0_ACC_CTRL_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR1_LCK_MASK      (0x4U)
#define SPT_SPR_0_15_CTRL_REG_SPR1_LCK_SHIFT     (2U)
#define SPT_SPR_0_15_CTRL_REG_SPR1_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR1_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR1_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR1_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR1_ACC_CTRL_MASK (0x8U)
#define SPT_SPR_0_15_CTRL_REG_SPR1_ACC_CTRL_SHIFT (3U)
#define SPT_SPR_0_15_CTRL_REG_SPR1_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR1_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR1_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR1_ACC_CTRL_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR2_LCK_MASK      (0x10U)
#define SPT_SPR_0_15_CTRL_REG_SPR2_LCK_SHIFT     (4U)
#define SPT_SPR_0_15_CTRL_REG_SPR2_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR2_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR2_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR2_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR2_ACC_CTRL_MASK (0x20U)
#define SPT_SPR_0_15_CTRL_REG_SPR2_ACC_CTRL_SHIFT (5U)
#define SPT_SPR_0_15_CTRL_REG_SPR2_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR2_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR2_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR2_ACC_CTRL_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR3_LCK_MASK      (0x40U)
#define SPT_SPR_0_15_CTRL_REG_SPR3_LCK_SHIFT     (6U)
#define SPT_SPR_0_15_CTRL_REG_SPR3_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR3_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR3_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR3_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR3_ACC_CTRL_MASK (0x80U)
#define SPT_SPR_0_15_CTRL_REG_SPR3_ACC_CTRL_SHIFT (7U)
#define SPT_SPR_0_15_CTRL_REG_SPR3_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR3_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR3_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR3_ACC_CTRL_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR4_LCK_MASK      (0x100U)
#define SPT_SPR_0_15_CTRL_REG_SPR4_LCK_SHIFT     (8U)
#define SPT_SPR_0_15_CTRL_REG_SPR4_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR4_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR4_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR4_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR4_ACC_CTRL_MASK (0x200U)
#define SPT_SPR_0_15_CTRL_REG_SPR4_ACC_CTRL_SHIFT (9U)
#define SPT_SPR_0_15_CTRL_REG_SPR4_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR4_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR4_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR4_ACC_CTRL_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR5_LCK_MASK      (0x400U)
#define SPT_SPR_0_15_CTRL_REG_SPR5_LCK_SHIFT     (10U)
#define SPT_SPR_0_15_CTRL_REG_SPR5_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR5_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR5_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR5_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR5_ACC_CTRL_MASK (0x800U)
#define SPT_SPR_0_15_CTRL_REG_SPR5_ACC_CTRL_SHIFT (11U)
#define SPT_SPR_0_15_CTRL_REG_SPR5_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR5_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR5_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR5_ACC_CTRL_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR6_LCK_MASK      (0x1000U)
#define SPT_SPR_0_15_CTRL_REG_SPR6_LCK_SHIFT     (12U)
#define SPT_SPR_0_15_CTRL_REG_SPR6_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR6_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR6_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR6_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR6_ACC_CTRL_MASK (0x2000U)
#define SPT_SPR_0_15_CTRL_REG_SPR6_ACC_CTRL_SHIFT (13U)
#define SPT_SPR_0_15_CTRL_REG_SPR6_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR6_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR6_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR6_ACC_CTRL_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR7_LCK_MASK      (0x4000U)
#define SPT_SPR_0_15_CTRL_REG_SPR7_LCK_SHIFT     (14U)
#define SPT_SPR_0_15_CTRL_REG_SPR7_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR7_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR7_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR7_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR7_ACC_CTRL_MASK (0x8000U)
#define SPT_SPR_0_15_CTRL_REG_SPR7_ACC_CTRL_SHIFT (15U)
#define SPT_SPR_0_15_CTRL_REG_SPR7_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR7_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR7_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR7_ACC_CTRL_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR8_LCK_MASK      (0x10000U)
#define SPT_SPR_0_15_CTRL_REG_SPR8_LCK_SHIFT     (16U)
#define SPT_SPR_0_15_CTRL_REG_SPR8_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR8_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR8_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR8_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR8_ACC_CTRL_MASK (0x20000U)
#define SPT_SPR_0_15_CTRL_REG_SPR8_ACC_CTRL_SHIFT (17U)
#define SPT_SPR_0_15_CTRL_REG_SPR8_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR8_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR8_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR8_ACC_CTRL_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR9_LCK_MASK      (0x40000U)
#define SPT_SPR_0_15_CTRL_REG_SPR9_LCK_SHIFT     (18U)
#define SPT_SPR_0_15_CTRL_REG_SPR9_LCK_WIDTH     (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR9_LCK(x)        (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR9_LCK_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR9_LCK_MASK)
#define SPT_SPR_0_15_CTRL_REG_SPR9_ACC_CTRL_MASK (0x80000U)
#define SPT_SPR_0_15_CTRL_REG_SPR9_ACC_CTRL_SHIFT (19U)
#define SPT_SPR_0_15_CTRL_REG_SPR9_ACC_CTRL_WIDTH (1U)
#define SPT_SPR_0_15_CTRL_REG_SPR9_ACC_CTRL(x)   (((uint32_t)(((uint32_t)(x)) << SPT_SPR_0_15_CTRL_REG_SPR9_ACC_CTRL_SHIFT)) & SPT_SPR_0_15_CTRL_REG_SPR9_ACC_CTRL_MASK)
/*! @} */

/*! @name SPR0_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR0_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR0_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR0_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR0_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR0_RE_RE_SPR_SHIFT)) & SPT_SPR0_RE_RE_SPR_MASK)
#define SPT_SPR0_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR0_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR0_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR0_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR0_RE_SIGN_EXT_SHIFT)) & SPT_SPR0_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR0_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR0_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR0_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR0_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR0_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR0_IM_IM_SPR_SHIFT)) & SPT_SPR0_IM_IM_SPR_MASK)
#define SPT_SPR0_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR0_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR0_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR0_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR0_IM_SIGN_EXT_SHIFT)) & SPT_SPR0_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR1_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR1_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR1_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR1_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR1_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR1_RE_RE_SPR_SHIFT)) & SPT_SPR1_RE_RE_SPR_MASK)
#define SPT_SPR1_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR1_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR1_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR1_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR1_RE_SIGN_EXT_SHIFT)) & SPT_SPR1_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR1_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR1_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR1_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR1_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR1_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR1_IM_IM_SPR_SHIFT)) & SPT_SPR1_IM_IM_SPR_MASK)
#define SPT_SPR1_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR1_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR1_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR1_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR1_IM_SIGN_EXT_SHIFT)) & SPT_SPR1_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR2_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR2_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR2_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR2_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR2_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR2_RE_RE_SPR_SHIFT)) & SPT_SPR2_RE_RE_SPR_MASK)
#define SPT_SPR2_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR2_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR2_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR2_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR2_RE_SIGN_EXT_SHIFT)) & SPT_SPR2_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR2_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR2_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR2_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR2_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR2_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR2_IM_IM_SPR_SHIFT)) & SPT_SPR2_IM_IM_SPR_MASK)
#define SPT_SPR2_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR2_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR2_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR2_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR2_IM_SIGN_EXT_SHIFT)) & SPT_SPR2_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR3_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR3_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR3_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR3_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR3_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR3_RE_RE_SPR_SHIFT)) & SPT_SPR3_RE_RE_SPR_MASK)
#define SPT_SPR3_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR3_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR3_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR3_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR3_RE_SIGN_EXT_SHIFT)) & SPT_SPR3_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR3_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR3_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR3_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR3_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR3_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR3_IM_IM_SPR_SHIFT)) & SPT_SPR3_IM_IM_SPR_MASK)
#define SPT_SPR3_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR3_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR3_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR3_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR3_IM_SIGN_EXT_SHIFT)) & SPT_SPR3_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR4_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR4_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR4_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR4_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR4_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR4_RE_RE_SPR_SHIFT)) & SPT_SPR4_RE_RE_SPR_MASK)
#define SPT_SPR4_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR4_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR4_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR4_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR4_RE_SIGN_EXT_SHIFT)) & SPT_SPR4_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR4_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR4_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR4_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR4_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR4_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR4_IM_IM_SPR_SHIFT)) & SPT_SPR4_IM_IM_SPR_MASK)
#define SPT_SPR4_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR4_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR4_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR4_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR4_IM_SIGN_EXT_SHIFT)) & SPT_SPR4_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR5_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR5_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR5_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR5_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR5_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR5_RE_RE_SPR_SHIFT)) & SPT_SPR5_RE_RE_SPR_MASK)
#define SPT_SPR5_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR5_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR5_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR5_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR5_RE_SIGN_EXT_SHIFT)) & SPT_SPR5_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR5_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR5_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR5_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR5_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR5_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR5_IM_IM_SPR_SHIFT)) & SPT_SPR5_IM_IM_SPR_MASK)
#define SPT_SPR5_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR5_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR5_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR5_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR5_IM_SIGN_EXT_SHIFT)) & SPT_SPR5_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR6_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR6_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR6_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR6_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR6_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR6_RE_RE_SPR_SHIFT)) & SPT_SPR6_RE_RE_SPR_MASK)
#define SPT_SPR6_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR6_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR6_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR6_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR6_RE_SIGN_EXT_SHIFT)) & SPT_SPR6_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR6_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR6_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR6_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR6_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR6_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR6_IM_IM_SPR_SHIFT)) & SPT_SPR6_IM_IM_SPR_MASK)
#define SPT_SPR6_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR6_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR6_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR6_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR6_IM_SIGN_EXT_SHIFT)) & SPT_SPR6_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR7_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR7_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR7_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR7_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR7_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR7_RE_RE_SPR_SHIFT)) & SPT_SPR7_RE_RE_SPR_MASK)
#define SPT_SPR7_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR7_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR7_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR7_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR7_RE_SIGN_EXT_SHIFT)) & SPT_SPR7_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR7_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR7_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR7_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR7_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR7_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR7_IM_IM_SPR_SHIFT)) & SPT_SPR7_IM_IM_SPR_MASK)
#define SPT_SPR7_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR7_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR7_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR7_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR7_IM_SIGN_EXT_SHIFT)) & SPT_SPR7_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR8_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR8_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR8_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR8_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR8_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR8_RE_RE_SPR_SHIFT)) & SPT_SPR8_RE_RE_SPR_MASK)
#define SPT_SPR8_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR8_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR8_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR8_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR8_RE_SIGN_EXT_SHIFT)) & SPT_SPR8_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR8_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR8_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR8_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR8_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR8_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR8_IM_IM_SPR_SHIFT)) & SPT_SPR8_IM_IM_SPR_MASK)
#define SPT_SPR8_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR8_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR8_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR8_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR8_IM_SIGN_EXT_SHIFT)) & SPT_SPR8_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR9_RE - Special-purpose Register */
/*! @{ */
#define SPT_SPR9_RE_RE_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR9_RE_RE_SPR_SHIFT                 (0U)
#define SPT_SPR9_RE_RE_SPR_WIDTH                 (24U)
#define SPT_SPR9_RE_RE_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR9_RE_RE_SPR_SHIFT)) & SPT_SPR9_RE_RE_SPR_MASK)
#define SPT_SPR9_RE_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR9_RE_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR9_RE_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR9_RE_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR9_RE_SIGN_EXT_SHIFT)) & SPT_SPR9_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name SPR9_IM - Special-purpose Register */
/*! @{ */
#define SPT_SPR9_IM_IM_SPR_MASK                  (0xFFFFFFU)
#define SPT_SPR9_IM_IM_SPR_SHIFT                 (0U)
#define SPT_SPR9_IM_IM_SPR_WIDTH                 (24U)
#define SPT_SPR9_IM_IM_SPR(x)                    (((uint32_t)(((uint32_t)(x)) << SPT_SPR9_IM_IM_SPR_SHIFT)) & SPT_SPR9_IM_IM_SPR_MASK)
#define SPT_SPR9_IM_SIGN_EXT_MASK                (0xFF000000U)
#define SPT_SPR9_IM_SIGN_EXT_SHIFT               (24U)
#define SPT_SPR9_IM_SIGN_EXT_WIDTH               (8U)
#define SPT_SPR9_IM_SIGN_EXT(x)                  (((uint32_t)(((uint32_t)(x)) << SPT_SPR9_IM_SIGN_EXT_SHIFT)) & SPT_SPR9_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR0_RE - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR0_RE_RE_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR0_RE_RE_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR0_RE_RE_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR0_RE_RE_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR0_RE_RE_HW_SPR_SHIFT)) & SPT_HW_SPR0_RE_RE_HW_SPR_MASK)
#define SPT_HW_SPR0_RE_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR0_RE_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR0_RE_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR0_RE_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR0_RE_SIGN_EXT_SHIFT)) & SPT_HW_SPR0_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR0_IM - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR0_IM_IM_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR0_IM_IM_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR0_IM_IM_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR0_IM_IM_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR0_IM_IM_HW_SPR_SHIFT)) & SPT_HW_SPR0_IM_IM_HW_SPR_MASK)
#define SPT_HW_SPR0_IM_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR0_IM_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR0_IM_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR0_IM_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR0_IM_SIGN_EXT_SHIFT)) & SPT_HW_SPR0_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR1_RE - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR1_RE_RE_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR1_RE_RE_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR1_RE_RE_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR1_RE_RE_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR1_RE_RE_HW_SPR_SHIFT)) & SPT_HW_SPR1_RE_RE_HW_SPR_MASK)
#define SPT_HW_SPR1_RE_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR1_RE_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR1_RE_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR1_RE_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR1_RE_SIGN_EXT_SHIFT)) & SPT_HW_SPR1_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR1_IM - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR1_IM_IM_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR1_IM_IM_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR1_IM_IM_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR1_IM_IM_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR1_IM_IM_HW_SPR_SHIFT)) & SPT_HW_SPR1_IM_IM_HW_SPR_MASK)
#define SPT_HW_SPR1_IM_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR1_IM_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR1_IM_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR1_IM_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR1_IM_SIGN_EXT_SHIFT)) & SPT_HW_SPR1_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR2_RE - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR2_RE_RE_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR2_RE_RE_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR2_RE_RE_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR2_RE_RE_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR2_RE_RE_HW_SPR_SHIFT)) & SPT_HW_SPR2_RE_RE_HW_SPR_MASK)
#define SPT_HW_SPR2_RE_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR2_RE_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR2_RE_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR2_RE_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR2_RE_SIGN_EXT_SHIFT)) & SPT_HW_SPR2_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR2_IM - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR2_IM_IM_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR2_IM_IM_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR2_IM_IM_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR2_IM_IM_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR2_IM_IM_HW_SPR_SHIFT)) & SPT_HW_SPR2_IM_IM_HW_SPR_MASK)
#define SPT_HW_SPR2_IM_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR2_IM_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR2_IM_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR2_IM_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR2_IM_SIGN_EXT_SHIFT)) & SPT_HW_SPR2_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR3_RE - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR3_RE_RE_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR3_RE_RE_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR3_RE_RE_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR3_RE_RE_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR3_RE_RE_HW_SPR_SHIFT)) & SPT_HW_SPR3_RE_RE_HW_SPR_MASK)
#define SPT_HW_SPR3_RE_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR3_RE_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR3_RE_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR3_RE_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR3_RE_SIGN_EXT_SHIFT)) & SPT_HW_SPR3_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR3_IM - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR3_IM_IM_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR3_IM_IM_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR3_IM_IM_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR3_IM_IM_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR3_IM_IM_HW_SPR_SHIFT)) & SPT_HW_SPR3_IM_IM_HW_SPR_MASK)
#define SPT_HW_SPR3_IM_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR3_IM_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR3_IM_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR3_IM_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR3_IM_SIGN_EXT_SHIFT)) & SPT_HW_SPR3_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR4_RE - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR4_RE_RE_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR4_RE_RE_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR4_RE_RE_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR4_RE_RE_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR4_RE_RE_HW_SPR_SHIFT)) & SPT_HW_SPR4_RE_RE_HW_SPR_MASK)
#define SPT_HW_SPR4_RE_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR4_RE_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR4_RE_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR4_RE_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR4_RE_SIGN_EXT_SHIFT)) & SPT_HW_SPR4_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR4_IM - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR4_IM_IM_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR4_IM_IM_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR4_IM_IM_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR4_IM_IM_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR4_IM_IM_HW_SPR_SHIFT)) & SPT_HW_SPR4_IM_IM_HW_SPR_MASK)
#define SPT_HW_SPR4_IM_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR4_IM_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR4_IM_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR4_IM_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR4_IM_SIGN_EXT_SHIFT)) & SPT_HW_SPR4_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR5_RE - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR5_RE_RE_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR5_RE_RE_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR5_RE_RE_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR5_RE_RE_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR5_RE_RE_HW_SPR_SHIFT)) & SPT_HW_SPR5_RE_RE_HW_SPR_MASK)
#define SPT_HW_SPR5_RE_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR5_RE_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR5_RE_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR5_RE_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR5_RE_SIGN_EXT_SHIFT)) & SPT_HW_SPR5_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name HW_SPR5_IM - Hardware Accelerator Special-purpose Register */
/*! @{ */
#define SPT_HW_SPR5_IM_IM_HW_SPR_MASK            (0xFFFFFFU)
#define SPT_HW_SPR5_IM_IM_HW_SPR_SHIFT           (0U)
#define SPT_HW_SPR5_IM_IM_HW_SPR_WIDTH           (24U)
#define SPT_HW_SPR5_IM_IM_HW_SPR(x)              (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR5_IM_IM_HW_SPR_SHIFT)) & SPT_HW_SPR5_IM_IM_HW_SPR_MASK)
#define SPT_HW_SPR5_IM_SIGN_EXT_MASK             (0xFF000000U)
#define SPT_HW_SPR5_IM_SIGN_EXT_SHIFT            (24U)
#define SPT_HW_SPR5_IM_SIGN_EXT_WIDTH            (8U)
#define SPT_HW_SPR5_IM_SIGN_EXT(x)               (((uint32_t)(((uint32_t)(x)) << SPT_HW_SPR5_IM_SIGN_EXT_SHIFT)) & SPT_HW_SPR5_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR0_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR0_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR0_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR0_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR0_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR0_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR0_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR0_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR0_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR0_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR0_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR0_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR0_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR0_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR0_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR0_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR0_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR0_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR0_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR0_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR0_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR0_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR0_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR0_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR0_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR0_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR1_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR1_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR1_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR1_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR1_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR1_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR1_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR1_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR1_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR1_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR1_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR1_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR1_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR1_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR1_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR1_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR1_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR1_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR1_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR1_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR1_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR1_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR1_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR1_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR1_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR1_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR2_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR2_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR2_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR2_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR2_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR2_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR2_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR2_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR2_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR2_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR2_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR2_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR2_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR2_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR2_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR2_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR2_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR2_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR2_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR2_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR2_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR2_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR2_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR2_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR2_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR2_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR3_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR3_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR3_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR3_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR3_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR3_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR3_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR3_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR3_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR3_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR3_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR3_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR3_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR3_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR3_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR3_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR3_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR3_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR3_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR3_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR3_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR3_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR3_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR3_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR3_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR3_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR4_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR4_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR4_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR4_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR4_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR4_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR4_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR4_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR4_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR4_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR4_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR4_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR4_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR4_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR4_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR4_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR4_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR4_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR4_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR4_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR4_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR4_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR4_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR4_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR4_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR4_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR5_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR5_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR5_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR5_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR5_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR5_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR5_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR5_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR5_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR5_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR5_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR5_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR5_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR5_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR5_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR5_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR5_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR5_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR5_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR5_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR5_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR5_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR5_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR5_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR5_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR5_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR6_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR6_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR6_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR6_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR6_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR6_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR6_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR6_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR6_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR6_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR6_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR6_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR6_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR6_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR6_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR6_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR6_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR6_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR6_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR6_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR6_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR6_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR6_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR6_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR6_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR6_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR7_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR7_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR7_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR7_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR7_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR7_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR7_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR7_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR7_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR7_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR7_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR7_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR7_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR7_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR7_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR7_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR7_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR7_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR7_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR7_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR7_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR7_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR7_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR7_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR7_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR7_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR8_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR8_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR8_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR8_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR8_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR8_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR8_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR8_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR8_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR8_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR8_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR8_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR8_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR8_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR8_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR8_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR8_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR8_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR8_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR8_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR8_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR8_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR8_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR8_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR8_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR8_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR9_RE - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR9_RE_RE_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR9_RE_RE_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR9_RE_RE_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR9_RE_RE_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR9_RE_RE_EVT_SPR_SHIFT)) & SPT_EVT_SPR9_RE_RE_EVT_SPR_MASK)
#define SPT_EVT_SPR9_RE_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR9_RE_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR9_RE_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR9_RE_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR9_RE_SIGN_EXT_SHIFT)) & SPT_EVT_SPR9_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name EVT_SPR9_IM - EXT EVT WAIT Special-purpose Register */
/*! @{ */
#define SPT_EVT_SPR9_IM_IM_EVT_SPR_MASK          (0xFFFFFFU)
#define SPT_EVT_SPR9_IM_IM_EVT_SPR_SHIFT         (0U)
#define SPT_EVT_SPR9_IM_IM_EVT_SPR_WIDTH         (24U)
#define SPT_EVT_SPR9_IM_IM_EVT_SPR(x)            (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR9_IM_IM_EVT_SPR_SHIFT)) & SPT_EVT_SPR9_IM_IM_EVT_SPR_MASK)
#define SPT_EVT_SPR9_IM_SIGN_EXT_MASK            (0xFF000000U)
#define SPT_EVT_SPR9_IM_SIGN_EXT_SHIFT           (24U)
#define SPT_EVT_SPR9_IM_SIGN_EXT_WIDTH           (8U)
#define SPT_EVT_SPR9_IM_SIGN_EXT(x)              (((uint32_t)(((uint32_t)(x)) << SPT_EVT_SPR9_IM_SIGN_EXT_SHIFT)) & SPT_EVT_SPR9_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR0_RE - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR0_RE_RE_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR0_RE_RE_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR0_RE_RE_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR0_RE_RE_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR0_RE_RE_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR0_RE_RE_CHRP_SPR_MASK)
#define SPT_CHRP_SPR0_RE_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR0_RE_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR0_RE_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR0_RE_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR0_RE_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR0_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR0_IM - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR0_IM_IM_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR0_IM_IM_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR0_IM_IM_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR0_IM_IM_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR0_IM_IM_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR0_IM_IM_CHRP_SPR_MASK)
#define SPT_CHRP_SPR0_IM_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR0_IM_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR0_IM_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR0_IM_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR0_IM_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR0_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR1_RE - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR1_RE_RE_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR1_RE_RE_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR1_RE_RE_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR1_RE_RE_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR1_RE_RE_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR1_RE_RE_CHRP_SPR_MASK)
#define SPT_CHRP_SPR1_RE_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR1_RE_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR1_RE_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR1_RE_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR1_RE_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR1_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR1_IM - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR1_IM_IM_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR1_IM_IM_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR1_IM_IM_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR1_IM_IM_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR1_IM_IM_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR1_IM_IM_CHRP_SPR_MASK)
#define SPT_CHRP_SPR1_IM_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR1_IM_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR1_IM_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR1_IM_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR1_IM_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR1_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR2_RE - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR2_RE_RE_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR2_RE_RE_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR2_RE_RE_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR2_RE_RE_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR2_RE_RE_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR2_RE_RE_CHRP_SPR_MASK)
#define SPT_CHRP_SPR2_RE_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR2_RE_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR2_RE_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR2_RE_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR2_RE_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR2_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR2_IM - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR2_IM_IM_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR2_IM_IM_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR2_IM_IM_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR2_IM_IM_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR2_IM_IM_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR2_IM_IM_CHRP_SPR_MASK)
#define SPT_CHRP_SPR2_IM_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR2_IM_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR2_IM_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR2_IM_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR2_IM_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR2_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR3_RE - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR3_RE_RE_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR3_RE_RE_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR3_RE_RE_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR3_RE_RE_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR3_RE_RE_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR3_RE_RE_CHRP_SPR_MASK)
#define SPT_CHRP_SPR3_RE_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR3_RE_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR3_RE_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR3_RE_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR3_RE_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR3_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR3_IM - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR3_IM_IM_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR3_IM_IM_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR3_IM_IM_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR3_IM_IM_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR3_IM_IM_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR3_IM_IM_CHRP_SPR_MASK)
#define SPT_CHRP_SPR3_IM_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR3_IM_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR3_IM_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR3_IM_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR3_IM_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR3_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR4_RE - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR4_RE_RE_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR4_RE_RE_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR4_RE_RE_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR4_RE_RE_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR4_RE_RE_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR4_RE_RE_CHRP_SPR_MASK)
#define SPT_CHRP_SPR4_RE_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR4_RE_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR4_RE_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR4_RE_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR4_RE_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR4_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR4_IM - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR4_IM_IM_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR4_IM_IM_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR4_IM_IM_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR4_IM_IM_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR4_IM_IM_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR4_IM_IM_CHRP_SPR_MASK)
#define SPT_CHRP_SPR4_IM_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR4_IM_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR4_IM_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR4_IM_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR4_IM_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR4_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR5_RE - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR5_RE_RE_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR5_RE_RE_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR5_RE_RE_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR5_RE_RE_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR5_RE_RE_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR5_RE_RE_CHRP_SPR_MASK)
#define SPT_CHRP_SPR5_RE_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR5_RE_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR5_RE_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR5_RE_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR5_RE_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR5_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR5_IM - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR5_IM_IM_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR5_IM_IM_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR5_IM_IM_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR5_IM_IM_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR5_IM_IM_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR5_IM_IM_CHRP_SPR_MASK)
#define SPT_CHRP_SPR5_IM_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR5_IM_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR5_IM_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR5_IM_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR5_IM_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR5_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR6_RE - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR6_RE_RE_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR6_RE_RE_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR6_RE_RE_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR6_RE_RE_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR6_RE_RE_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR6_RE_RE_CHRP_SPR_MASK)
#define SPT_CHRP_SPR6_RE_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR6_RE_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR6_RE_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR6_RE_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR6_RE_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR6_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR6_IM - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR6_IM_IM_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR6_IM_IM_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR6_IM_IM_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR6_IM_IM_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR6_IM_IM_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR6_IM_IM_CHRP_SPR_MASK)
#define SPT_CHRP_SPR6_IM_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR6_IM_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR6_IM_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR6_IM_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR6_IM_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR6_IM_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR7_RE - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR7_RE_RE_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR7_RE_RE_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR7_RE_RE_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR7_RE_RE_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR7_RE_RE_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR7_RE_RE_CHRP_SPR_MASK)
#define SPT_CHRP_SPR7_RE_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR7_RE_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR7_RE_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR7_RE_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR7_RE_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR7_RE_SIGN_EXT_MASK)
/*! @} */

/*! @name CHRP_SPR7_IM - Chirp Special-purpose Register */
/*! @{ */
#define SPT_CHRP_SPR7_IM_IM_CHRP_SPR_MASK        (0xFFFFFFU)
#define SPT_CHRP_SPR7_IM_IM_CHRP_SPR_SHIFT       (0U)
#define SPT_CHRP_SPR7_IM_IM_CHRP_SPR_WIDTH       (24U)
#define SPT_CHRP_SPR7_IM_IM_CHRP_SPR(x)          (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR7_IM_IM_CHRP_SPR_SHIFT)) & SPT_CHRP_SPR7_IM_IM_CHRP_SPR_MASK)
#define SPT_CHRP_SPR7_IM_SIGN_EXT_MASK           (0xFF000000U)
#define SPT_CHRP_SPR7_IM_SIGN_EXT_SHIFT          (24U)
#define SPT_CHRP_SPR7_IM_SIGN_EXT_WIDTH          (8U)
#define SPT_CHRP_SPR7_IM_SIGN_EXT(x)             (((uint32_t)(((uint32_t)(x)) << SPT_CHRP_SPR7_IM_SIGN_EXT_SHIFT)) & SPT_CHRP_SPR7_IM_SIGN_EXT_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SPT_Register_Masks */

/*!
 * @}
 */ /* end of group SPT_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_SPT_H_) */
