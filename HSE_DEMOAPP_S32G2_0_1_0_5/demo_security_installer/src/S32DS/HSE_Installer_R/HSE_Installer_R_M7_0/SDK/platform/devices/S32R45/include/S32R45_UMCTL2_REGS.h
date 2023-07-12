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
 * @file S32R45_UMCTL2_REGS.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_UMCTL2_REGS
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
#if !defined(S32R45_UMCTL2_REGS_H_)  /* Check if memory map has not been already included */
#define S32R45_UMCTL2_REGS_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- UMCTL2_REGS Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UMCTL2_REGS_Peripheral_Access_Layer UMCTL2_REGS Peripheral Access Layer
 * @{
 */

/** UMCTL2_REGS - Register Layout Typedef */
typedef struct {
  __IO uint32_t MSTR;                              /**< Master, offset: 0x0 */
  __I  uint32_t STAT;                              /**< Operating mode status, offset: 0x4 */
  uint8_t RESERVED_0[8];
  __IO uint32_t MRCTRL0;                           /**< Mode Register read/write control 0, offset: 0x10 */
  __IO uint32_t MRCTRL1;                           /**< Mode Register Read/Write Control 1, offset: 0x14 */
  __I  uint32_t MRSTAT;                            /**< Mode Register Read/Write Status, offset: 0x18 */
  __IO uint32_t MRCTRL2;                           /**< Mode Register Read/Write Control 2, offset: 0x1C */
  __IO uint32_t DERATEEN;                          /**< Temperature derate enable, offset: 0x20 */
  __IO uint32_t DERATEINT;                         /**< Temperature derate interval, offset: 0x24 */
  uint8_t RESERVED_1[4];
  __IO uint32_t DERATECTL;                         /**< Temperature derate control, offset: 0x2C */
  __IO uint32_t PWRCTL;                            /**< Low power control, offset: 0x30 */
  __IO uint32_t PWRTMG;                            /**< Low Power Timing, offset: 0x34 */
  __IO uint32_t HWLPCTL;                           /**< Hardware low power control, offset: 0x38 */
  uint8_t RESERVED_2[20];
  __IO uint32_t RFSHCTL0;                          /**< Refresh Control 0, offset: 0x50 */
  __IO uint32_t RFSHCTL1;                          /**< Refresh control 1, offset: 0x54 */
  uint8_t RESERVED_3[8];
  __IO uint32_t RFSHCTL3;                          /**< Refresh Control 3, offset: 0x60 */
  __IO uint32_t RFSHTMG;                           /**< Refresh Timing, offset: 0x64 */
  __IO uint32_t RFSHTMG1;                          /**< Refresh timing 1, offset: 0x68 */
  uint8_t RESERVED_4[4];
  __IO uint32_t ECCCFG0;                           /**< ECC Configuration 0, offset: 0x70 */
  __IO uint32_t ECCCFG1;                           /**< ECC Configuration 1, offset: 0x74 */
  __I  uint32_t ECCSTAT;                           /**< SECDED ECC Status, offset: 0x78 */
  __IO uint32_t ECCCTL;                            /**< ECC Control, offset: 0x7C */
  __I  uint32_t ECCERRCNT;                         /**< ECC Error Counter, offset: 0x80 */
  __I  uint32_t ECCCADDR0;                         /**< ECC Corrected Error Address 0, offset: 0x84 */
  __I  uint32_t ECCCADDR1;                         /**< ECC Corrected Error Address 1, offset: 0x88 */
  __I  uint32_t ECCCSYN0;                          /**< ECC Corrected Syndrome 0, offset: 0x8C */
  __I  uint32_t ECCCSYN1;                          /**< ECC Corrected Syndrome 1, offset: 0x90 */
  __I  uint32_t ECCCSYN2;                          /**< ECC Corrected Syndrome 2, offset: 0x94 */
  __I  uint32_t ECCBITMASK0;                       /**< ECC Corrected Data Bit Mask 0, offset: 0x98 */
  __I  uint32_t ECCBITMASK1;                       /**< ECC Corrected Data Bit Mask 1, offset: 0x9C */
  __I  uint32_t ECCBITMASK2;                       /**< ECC Corrected Data Bit Mask 2, offset: 0xA0 */
  __I  uint32_t ECCUADDR0;                         /**< ECC Uncorrected Error Address 0, offset: 0xA4 */
  __I  uint32_t ECCUADDR1;                         /**< ECC Uncorrected Error Address 1, offset: 0xA8 */
  __I  uint32_t ECCUSYN0;                          /**< ECC Uncorrected Syndrome 0, offset: 0xAC */
  __I  uint32_t ECCUSYN1;                          /**< ECC Uncorrected Syndrome 1, offset: 0xB0 */
  __I  uint32_t ECCUSYN2;                          /**< ECC Uncorrected Syndrome 2, offset: 0xB4 */
  __IO uint32_t ECCPOISONADDR0;                    /**< ECC Data Poisoning Address 0, offset: 0xB8 */
  __IO uint32_t ECCPOISONADDR1;                    /**< ECC Data Poisoning Address 1, offset: 0xBC */
  __IO uint32_t CRCPARCTL0;                        /**< CRC Parity Control 0, offset: 0xC0 */
  __IO uint32_t CRCPARCTL1;                        /**< CRC Parity Control 1, offset: 0xC4 */
  uint8_t RESERVED_5[4];
  __I  uint32_t CRCPARSTAT;                        /**< CRC Parity Status, offset: 0xCC */
  __IO uint32_t INIT0;                             /**< DRAM Initialization 0, offset: 0xD0 */
  __IO uint32_t INIT1;                             /**< DRAM Initialization 1, offset: 0xD4 */
  __IO uint32_t INIT2;                             /**< DRAM Initialization 2, offset: 0xD8 */
  __IO uint32_t INIT3;                             /**< DRAM Initialization 3, offset: 0xDC */
  __IO uint32_t INIT4;                             /**< DRAM Initialization 4, offset: 0xE0 */
  __IO uint32_t INIT5;                             /**< DRAM Initialization 5, offset: 0xE4 */
  __IO uint32_t INIT6;                             /**< DRAM Initialization 6, offset: 0xE8 */
  __IO uint32_t INIT7;                             /**< DRAM Initialization 7, offset: 0xEC */
  __IO uint32_t DIMMCTL;                           /**< DIMM Control, offset: 0xF0 */
  __IO uint32_t RANKCTL;                           /**< Rank Control, offset: 0xF4 */
  uint8_t RESERVED_6[8];
  __IO uint32_t DRAMTMG0;                          /**< DRAM Timing 0, offset: 0x100 */
  __IO uint32_t DRAMTMG1;                          /**< DRAM Timing 1, offset: 0x104 */
  __IO uint32_t DRAMTMG2;                          /**< DRAM Timing 2, offset: 0x108 */
  __IO uint32_t DRAMTMG3;                          /**< DRAM Timing 3, offset: 0x10C */
  __IO uint32_t DRAMTMG4;                          /**< DRAM Timing 4, offset: 0x110 */
  __IO uint32_t DRAMTMG5;                          /**< DRAM Timing 5, offset: 0x114 */
  __IO uint32_t DRAMTMG6;                          /**< DRAM Timing 6, offset: 0x118 */
  __IO uint32_t DRAMTMG7;                          /**< DRAM Timing 7, offset: 0x11C */
  __IO uint32_t DRAMTMG8;                          /**< DRAM Timing 8, offset: 0x120 */
  __IO uint32_t DRAMTMG9;                          /**< DRAM Timing 9, offset: 0x124 */
  __IO uint32_t DRAMTMG10;                         /**< DRAM Timing 10, offset: 0x128 */
  __IO uint32_t DRAMTMG11;                         /**< DRAM Timing 11, offset: 0x12C */
  __IO uint32_t DRAMTMG12;                         /**< DRAM Timing 12, offset: 0x130 */
  __IO uint32_t DRAMTMG13;                         /**< DRAM Timing 13, offset: 0x134 */
  __IO uint32_t DRAMTMG14;                         /**< DRAM Timing 14, offset: 0x138 */
  __IO uint32_t DRAMTMG15;                         /**< DRAM Timing 15, offset: 0x13C */
  uint8_t RESERVED_7[64];
  __IO uint32_t ZQCTL0;                            /**< ZQ Control 0, offset: 0x180 */
  __IO uint32_t ZQCTL1;                            /**< ZQ Control 1, offset: 0x184 */
  __IO uint32_t ZQCTL2;                            /**< ZQ Control 2, offset: 0x188 */
  __I  uint32_t ZQSTAT;                            /**< ZQ Status, offset: 0x18C */
  __IO uint32_t DFITMG0;                           /**< DFI Timing 0, offset: 0x190 */
  __IO uint32_t DFITMG1;                           /**< DFI Timing 1, offset: 0x194 */
  __IO uint32_t DFILPCFG0;                         /**< DFI Low Power Configuration 0, offset: 0x198 */
  __IO uint32_t DFILPCFG1;                         /**< DFI Low Power Configuration 1, offset: 0x19C */
  __IO uint32_t DFIUPD0;                           /**< DFI Update 0, offset: 0x1A0 */
  __IO uint32_t DFIUPD1;                           /**< DFI Update 1, offset: 0x1A4 */
  __IO uint32_t DFIUPD2;                           /**< DFI Update 2, offset: 0x1A8 */
  uint8_t RESERVED_8[4];
  __IO uint32_t DFIMISC;                           /**< DFI Miscellaneous Control, offset: 0x1B0 */
  __IO uint32_t DFITMG2;                           /**< DFI Timing 2, offset: 0x1B4 */
  __IO uint32_t DFITMG3;                           /**< DFI Timing 3, offset: 0x1B8 */
  __I  uint32_t DFISTAT;                           /**< DFI Status, offset: 0x1BC */
  __IO uint32_t DBICTL;                            /**< DM/DBI Control, offset: 0x1C0 */
  __IO uint32_t DFIPHYMSTR;                        /**< DFI PHY Master, offset: 0x1C4 */
  uint8_t RESERVED_9[56];
  __IO uint32_t ADDRMAP0;                          /**< Address Map 0, offset: 0x200 */
  __IO uint32_t ADDRMAP1;                          /**< Address Map 1, offset: 0x204 */
  __IO uint32_t ADDRMAP2;                          /**< Address Map 2, offset: 0x208 */
  __IO uint32_t ADDRMAP3;                          /**< Address Map 3, offset: 0x20C */
  __IO uint32_t ADDRMAP4;                          /**< Address Map 4, offset: 0x210 */
  __IO uint32_t ADDRMAP5;                          /**< Address Map 5, offset: 0x214 */
  __IO uint32_t ADDRMAP6;                          /**< Address Map 6, offset: 0x218 */
  __IO uint32_t ADDRMAP7;                          /**< Address Map 7, offset: 0x21C */
  __IO uint32_t ADDRMAP8;                          /**< Address Map 8, offset: 0x220 */
  __IO uint32_t ADDRMAP9;                          /**< Address Map 9, offset: 0x224 */
  __IO uint32_t ADDRMAP10;                         /**< Address Map 10, offset: 0x228 */
  __IO uint32_t ADDRMAP11;                         /**< Address Map 11, offset: 0x22C */
  uint8_t RESERVED_10[16];
  __IO uint32_t ODTCFG;                            /**< ODT Configuration, offset: 0x240 */
  __IO uint32_t ODTMAP;                            /**< ODT/Rank Map, offset: 0x244 */
  uint8_t RESERVED_11[8];
  __IO uint32_t SCHED;                             /**< Scheduler Control, offset: 0x250 */
  __IO uint32_t SCHED1;                            /**< Scheduler Control 1, offset: 0x254 */
  uint8_t RESERVED_12[4];
  __IO uint32_t PERFHPR1;                          /**< High Priority Read CAM 1, offset: 0x25C */
  uint8_t RESERVED_13[4];
  __IO uint32_t PERFLPR1;                          /**< Low Priority Read CAM 1, offset: 0x264 */
  uint8_t RESERVED_14[4];
  __IO uint32_t PERFWR1;                           /**< Write CAM 1, offset: 0x26C */
  uint8_t RESERVED_15[144];
  __IO uint32_t DBG0;                              /**< Debug 0, offset: 0x300 */
  __IO uint32_t DBG1;                              /**< Debug 1, offset: 0x304 */
  __I  uint32_t DBGCAM;                            /**< CAM Debug, offset: 0x308 */
  __IO uint32_t DBGCMD;                            /**< Command Debug, offset: 0x30C */
  __I  uint32_t DBGSTAT;                           /**< Status Debug, offset: 0x310 */
  uint8_t RESERVED_16[4];
  __I  uint32_t DBGCAM1;                           /**< CAM Debug 1, offset: 0x318 */
  uint8_t RESERVED_17[4];
  __IO uint32_t SWCTL;                             /**< Software Register Programming Control Enable, offset: 0x320 */
  __I  uint32_t SWSTAT;                            /**< Software Register Programming Control Status, offset: 0x324 */
  uint8_t RESERVED_18[8];
  __IO uint32_t OCPARCFG0;                         /**< On-Chip Parity Configuration 0, offset: 0x330 */
  __IO uint32_t OCPARCFG1;                         /**< On-Chip Parity Configuration 1, offset: 0x334 */
  __I  uint32_t OCPARSTAT0;                        /**< On-Chip Parity Status 0, offset: 0x338 */
  __I  uint32_t OCPARSTAT1;                        /**< On-Chip Parity Status 1, offset: 0x33C */
  __I  uint32_t OCPARSTAT2;                        /**< On-Chip Parity Status 2, offset: 0x340 */
  uint8_t RESERVED_19[40];
  __IO uint32_t POISONCFG;                         /**< AXI Poison Configuration, offset: 0x36C */
  __I  uint32_t POISONSTAT;                        /**< AXI Poison Status, offset: 0x370 */
  __IO uint32_t ADVECCINDEX;                       /**< Advanced ECC Index, offset: 0x374 */
  uint8_t RESERVED_20[4];
  __IO uint32_t ECCPOISONPAT0;                     /**< ECC Poison Pattern 0, offset: 0x37C */
  uint8_t RESERVED_21[4];
  __IO uint32_t ECCPOISONPAT2;                     /**< ECC Poison Pattern 2, offset: 0x384 */
  __I  uint32_t ECCAPSTAT;                         /**< Address protection within ECC Status, offset: 0x388 */
  uint8_t RESERVED_22[52];
  __IO uint32_t REGPARCFG;                         /**< Register Parity Configuration, offset: 0x3C0 */
  __I  uint32_t REGPARSTAT;                        /**< Register Parity Status, offset: 0x3C4 */
  uint8_t RESERVED_23[24];
  __IO uint32_t OCCAPCFG;                          /**< On-Chip command/Address Protection Configuration, offset: 0x3E0 */
  __I  uint32_t OCCAPSTAT;                         /**< On-Chip command/Address Protection Status, offset: 0x3E4 */
  __IO uint32_t OCCAPCFG1;                         /**< On-Chip command/Address Protection Configuration 1, offset: 0x3E8 */
  __I  uint32_t OCCAPSTAT1;                        /**< On-Chip command/Address Protection Status 1, offset: 0x3EC */
  __I  uint32_t DERATESTAT;                        /**< Temperature Derate Status, offset: 0x3F0 */
} UMCTL2_REGS_Type, *UMCTL2_REGS_MemMapPtr;

/** Number of instances of the UMCTL2_REGS module. */
#define UMCTL2_REGS_INSTANCE_COUNT               (1u)

/* UMCTL2_REGS - Peripheral instance base addresses */
/** Peripheral UMCTL2_REGS base address */
#define UMCTL2_REGS_BASE                         (0x403C0000u)
/** Peripheral UMCTL2_REGS base pointer */
#define UMCTL2_REGS                              ((UMCTL2_REGS_Type *)UMCTL2_REGS_BASE)
/** Array initializer of UMCTL2_REGS peripheral base addresses */
#define UMCTL2_REGS_BASE_ADDRS                   { UMCTL2_REGS_BASE }
/** Array initializer of UMCTL2_REGS peripheral base pointers */
#define UMCTL2_REGS_BASE_PTRS                    { UMCTL2_REGS }

/* ----------------------------------------------------------------------------
   -- UMCTL2_REGS Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup UMCTL2_REGS_Register_Masks UMCTL2_REGS Register Masks
 * @{
 */

/*! @name MSTR - Master */
/*! @{ */
#define UMCTL2_REGS_MSTR_ddr3_MASK               (0x1U)
#define UMCTL2_REGS_MSTR_ddr3_SHIFT              (0U)
#define UMCTL2_REGS_MSTR_ddr3_WIDTH              (1U)
#define UMCTL2_REGS_MSTR_ddr3(x)                 (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_ddr3_SHIFT)) & UMCTL2_REGS_MSTR_ddr3_MASK)
#define UMCTL2_REGS_MSTR_lpddr2_MASK             (0x4U)
#define UMCTL2_REGS_MSTR_lpddr2_SHIFT            (2U)
#define UMCTL2_REGS_MSTR_lpddr2_WIDTH            (1U)
#define UMCTL2_REGS_MSTR_lpddr2(x)               (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_lpddr2_SHIFT)) & UMCTL2_REGS_MSTR_lpddr2_MASK)
#define UMCTL2_REGS_MSTR_lpddr3_MASK             (0x8U)
#define UMCTL2_REGS_MSTR_lpddr3_SHIFT            (3U)
#define UMCTL2_REGS_MSTR_lpddr3_WIDTH            (1U)
#define UMCTL2_REGS_MSTR_lpddr3(x)               (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_lpddr3_SHIFT)) & UMCTL2_REGS_MSTR_lpddr3_MASK)
#define UMCTL2_REGS_MSTR_ddr4_MASK               (0x10U)
#define UMCTL2_REGS_MSTR_ddr4_SHIFT              (4U)
#define UMCTL2_REGS_MSTR_ddr4_WIDTH              (1U)
#define UMCTL2_REGS_MSTR_ddr4(x)                 (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_ddr4_SHIFT)) & UMCTL2_REGS_MSTR_ddr4_MASK)
#define UMCTL2_REGS_MSTR_lpddr4_MASK             (0x20U)
#define UMCTL2_REGS_MSTR_lpddr4_SHIFT            (5U)
#define UMCTL2_REGS_MSTR_lpddr4_WIDTH            (1U)
#define UMCTL2_REGS_MSTR_lpddr4(x)               (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_lpddr4_SHIFT)) & UMCTL2_REGS_MSTR_lpddr4_MASK)
#define UMCTL2_REGS_MSTR_burstchop_MASK          (0x200U)
#define UMCTL2_REGS_MSTR_burstchop_SHIFT         (9U)
#define UMCTL2_REGS_MSTR_burstchop_WIDTH         (1U)
#define UMCTL2_REGS_MSTR_burstchop(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_burstchop_SHIFT)) & UMCTL2_REGS_MSTR_burstchop_MASK)
#define UMCTL2_REGS_MSTR_en_2t_timing_mode_MASK  (0x400U)
#define UMCTL2_REGS_MSTR_en_2t_timing_mode_SHIFT (10U)
#define UMCTL2_REGS_MSTR_en_2t_timing_mode_WIDTH (1U)
#define UMCTL2_REGS_MSTR_en_2t_timing_mode(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_en_2t_timing_mode_SHIFT)) & UMCTL2_REGS_MSTR_en_2t_timing_mode_MASK)
#define UMCTL2_REGS_MSTR_geardown_mode_MASK      (0x800U)
#define UMCTL2_REGS_MSTR_geardown_mode_SHIFT     (11U)
#define UMCTL2_REGS_MSTR_geardown_mode_WIDTH     (1U)
#define UMCTL2_REGS_MSTR_geardown_mode(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_geardown_mode_SHIFT)) & UMCTL2_REGS_MSTR_geardown_mode_MASK)
#define UMCTL2_REGS_MSTR_data_bus_width_MASK     (0x3000U)
#define UMCTL2_REGS_MSTR_data_bus_width_SHIFT    (12U)
#define UMCTL2_REGS_MSTR_data_bus_width_WIDTH    (2U)
#define UMCTL2_REGS_MSTR_data_bus_width(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_data_bus_width_SHIFT)) & UMCTL2_REGS_MSTR_data_bus_width_MASK)
#define UMCTL2_REGS_MSTR_dll_off_mode_MASK       (0x8000U)
#define UMCTL2_REGS_MSTR_dll_off_mode_SHIFT      (15U)
#define UMCTL2_REGS_MSTR_dll_off_mode_WIDTH      (1U)
#define UMCTL2_REGS_MSTR_dll_off_mode(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_dll_off_mode_SHIFT)) & UMCTL2_REGS_MSTR_dll_off_mode_MASK)
#define UMCTL2_REGS_MSTR_burst_rdwr_MASK         (0xF0000U)
#define UMCTL2_REGS_MSTR_burst_rdwr_SHIFT        (16U)
#define UMCTL2_REGS_MSTR_burst_rdwr_WIDTH        (4U)
#define UMCTL2_REGS_MSTR_burst_rdwr(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_burst_rdwr_SHIFT)) & UMCTL2_REGS_MSTR_burst_rdwr_MASK)
#define UMCTL2_REGS_MSTR_active_ranks_MASK       (0xF000000U)
#define UMCTL2_REGS_MSTR_active_ranks_SHIFT      (24U)
#define UMCTL2_REGS_MSTR_active_ranks_WIDTH      (4U)
#define UMCTL2_REGS_MSTR_active_ranks(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_active_ranks_SHIFT)) & UMCTL2_REGS_MSTR_active_ranks_MASK)
#define UMCTL2_REGS_MSTR_device_config_MASK      (0xC0000000U)
#define UMCTL2_REGS_MSTR_device_config_SHIFT     (30U)
#define UMCTL2_REGS_MSTR_device_config_WIDTH     (2U)
#define UMCTL2_REGS_MSTR_device_config(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MSTR_device_config_SHIFT)) & UMCTL2_REGS_MSTR_device_config_MASK)
/*! @} */

/*! @name STAT - Operating mode status */
/*! @{ */
#define UMCTL2_REGS_STAT_operating_mode_MASK     (0x7U)
#define UMCTL2_REGS_STAT_operating_mode_SHIFT    (0U)
#define UMCTL2_REGS_STAT_operating_mode_WIDTH    (3U)
#define UMCTL2_REGS_STAT_operating_mode(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_STAT_operating_mode_SHIFT)) & UMCTL2_REGS_STAT_operating_mode_MASK)
#define UMCTL2_REGS_STAT_selfref_type_MASK       (0x30U)
#define UMCTL2_REGS_STAT_selfref_type_SHIFT      (4U)
#define UMCTL2_REGS_STAT_selfref_type_WIDTH      (2U)
#define UMCTL2_REGS_STAT_selfref_type(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_STAT_selfref_type_SHIFT)) & UMCTL2_REGS_STAT_selfref_type_MASK)
#define UMCTL2_REGS_STAT_selfref_state_MASK      (0x300U)
#define UMCTL2_REGS_STAT_selfref_state_SHIFT     (8U)
#define UMCTL2_REGS_STAT_selfref_state_WIDTH     (2U)
#define UMCTL2_REGS_STAT_selfref_state(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_STAT_selfref_state_SHIFT)) & UMCTL2_REGS_STAT_selfref_state_MASK)
#define UMCTL2_REGS_STAT_selfref_cam_not_empty_MASK (0x1000U)
#define UMCTL2_REGS_STAT_selfref_cam_not_empty_SHIFT (12U)
#define UMCTL2_REGS_STAT_selfref_cam_not_empty_WIDTH (1U)
#define UMCTL2_REGS_STAT_selfref_cam_not_empty(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_STAT_selfref_cam_not_empty_SHIFT)) & UMCTL2_REGS_STAT_selfref_cam_not_empty_MASK)
/*! @} */

/*! @name MRCTRL0 - Mode Register read/write control 0 */
/*! @{ */
#define UMCTL2_REGS_MRCTRL0_mr_type_MASK         (0x1U)
#define UMCTL2_REGS_MRCTRL0_mr_type_SHIFT        (0U)
#define UMCTL2_REGS_MRCTRL0_mr_type_WIDTH        (1U)
#define UMCTL2_REGS_MRCTRL0_mr_type(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL0_mr_type_SHIFT)) & UMCTL2_REGS_MRCTRL0_mr_type_MASK)
#define UMCTL2_REGS_MRCTRL0_mpr_en_MASK          (0x2U)
#define UMCTL2_REGS_MRCTRL0_mpr_en_SHIFT         (1U)
#define UMCTL2_REGS_MRCTRL0_mpr_en_WIDTH         (1U)
#define UMCTL2_REGS_MRCTRL0_mpr_en(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL0_mpr_en_SHIFT)) & UMCTL2_REGS_MRCTRL0_mpr_en_MASK)
#define UMCTL2_REGS_MRCTRL0_pda_en_MASK          (0x4U)
#define UMCTL2_REGS_MRCTRL0_pda_en_SHIFT         (2U)
#define UMCTL2_REGS_MRCTRL0_pda_en_WIDTH         (1U)
#define UMCTL2_REGS_MRCTRL0_pda_en(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL0_pda_en_SHIFT)) & UMCTL2_REGS_MRCTRL0_pda_en_MASK)
#define UMCTL2_REGS_MRCTRL0_sw_init_int_MASK     (0x8U)
#define UMCTL2_REGS_MRCTRL0_sw_init_int_SHIFT    (3U)
#define UMCTL2_REGS_MRCTRL0_sw_init_int_WIDTH    (1U)
#define UMCTL2_REGS_MRCTRL0_sw_init_int(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL0_sw_init_int_SHIFT)) & UMCTL2_REGS_MRCTRL0_sw_init_int_MASK)
#define UMCTL2_REGS_MRCTRL0_mr_rank_MASK         (0x30U)
#define UMCTL2_REGS_MRCTRL0_mr_rank_SHIFT        (4U)
#define UMCTL2_REGS_MRCTRL0_mr_rank_WIDTH        (2U)
#define UMCTL2_REGS_MRCTRL0_mr_rank(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL0_mr_rank_SHIFT)) & UMCTL2_REGS_MRCTRL0_mr_rank_MASK)
#define UMCTL2_REGS_MRCTRL0_mr_addr_MASK         (0xF000U)
#define UMCTL2_REGS_MRCTRL0_mr_addr_SHIFT        (12U)
#define UMCTL2_REGS_MRCTRL0_mr_addr_WIDTH        (4U)
#define UMCTL2_REGS_MRCTRL0_mr_addr(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL0_mr_addr_SHIFT)) & UMCTL2_REGS_MRCTRL0_mr_addr_MASK)
#define UMCTL2_REGS_MRCTRL0_pba_mode_MASK        (0x40000000U)
#define UMCTL2_REGS_MRCTRL0_pba_mode_SHIFT       (30U)
#define UMCTL2_REGS_MRCTRL0_pba_mode_WIDTH       (1U)
#define UMCTL2_REGS_MRCTRL0_pba_mode(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL0_pba_mode_SHIFT)) & UMCTL2_REGS_MRCTRL0_pba_mode_MASK)
#define UMCTL2_REGS_MRCTRL0_mr_wr_MASK           (0x80000000U)
#define UMCTL2_REGS_MRCTRL0_mr_wr_SHIFT          (31U)
#define UMCTL2_REGS_MRCTRL0_mr_wr_WIDTH          (1U)
#define UMCTL2_REGS_MRCTRL0_mr_wr(x)             (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL0_mr_wr_SHIFT)) & UMCTL2_REGS_MRCTRL0_mr_wr_MASK)
/*! @} */

/*! @name MRCTRL1 - Mode Register Read/Write Control 1 */
/*! @{ */
#define UMCTL2_REGS_MRCTRL1_mr_data_MASK         (0x3FFFFU)
#define UMCTL2_REGS_MRCTRL1_mr_data_SHIFT        (0U)
#define UMCTL2_REGS_MRCTRL1_mr_data_WIDTH        (18U)
#define UMCTL2_REGS_MRCTRL1_mr_data(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL1_mr_data_SHIFT)) & UMCTL2_REGS_MRCTRL1_mr_data_MASK)
/*! @} */

/*! @name MRSTAT - Mode Register Read/Write Status */
/*! @{ */
#define UMCTL2_REGS_MRSTAT_mr_wr_busy_MASK       (0x1U)
#define UMCTL2_REGS_MRSTAT_mr_wr_busy_SHIFT      (0U)
#define UMCTL2_REGS_MRSTAT_mr_wr_busy_WIDTH      (1U)
#define UMCTL2_REGS_MRSTAT_mr_wr_busy(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRSTAT_mr_wr_busy_SHIFT)) & UMCTL2_REGS_MRSTAT_mr_wr_busy_MASK)
#define UMCTL2_REGS_MRSTAT_pda_done_MASK         (0x100U)
#define UMCTL2_REGS_MRSTAT_pda_done_SHIFT        (8U)
#define UMCTL2_REGS_MRSTAT_pda_done_WIDTH        (1U)
#define UMCTL2_REGS_MRSTAT_pda_done(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRSTAT_pda_done_SHIFT)) & UMCTL2_REGS_MRSTAT_pda_done_MASK)
/*! @} */

/*! @name MRCTRL2 - Mode Register Read/Write Control 2 */
/*! @{ */
#define UMCTL2_REGS_MRCTRL2_mr_device_sel_MASK   (0xFFFFFFFFU)
#define UMCTL2_REGS_MRCTRL2_mr_device_sel_SHIFT  (0U)
#define UMCTL2_REGS_MRCTRL2_mr_device_sel_WIDTH  (32U)
#define UMCTL2_REGS_MRCTRL2_mr_device_sel(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_MRCTRL2_mr_device_sel_SHIFT)) & UMCTL2_REGS_MRCTRL2_mr_device_sel_MASK)
/*! @} */

/*! @name DERATEEN - Temperature derate enable */
/*! @{ */
#define UMCTL2_REGS_DERATEEN_derate_enable_MASK  (0x1U)
#define UMCTL2_REGS_DERATEEN_derate_enable_SHIFT (0U)
#define UMCTL2_REGS_DERATEEN_derate_enable_WIDTH (1U)
#define UMCTL2_REGS_DERATEEN_derate_enable(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DERATEEN_derate_enable_SHIFT)) & UMCTL2_REGS_DERATEEN_derate_enable_MASK)
#define UMCTL2_REGS_DERATEEN_derate_value_MASK   (0x6U)
#define UMCTL2_REGS_DERATEEN_derate_value_SHIFT  (1U)
#define UMCTL2_REGS_DERATEEN_derate_value_WIDTH  (2U)
#define UMCTL2_REGS_DERATEEN_derate_value(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DERATEEN_derate_value_SHIFT)) & UMCTL2_REGS_DERATEEN_derate_value_MASK)
#define UMCTL2_REGS_DERATEEN_derate_byte_MASK    (0xF0U)
#define UMCTL2_REGS_DERATEEN_derate_byte_SHIFT   (4U)
#define UMCTL2_REGS_DERATEEN_derate_byte_WIDTH   (4U)
#define UMCTL2_REGS_DERATEEN_derate_byte(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DERATEEN_derate_byte_SHIFT)) & UMCTL2_REGS_DERATEEN_derate_byte_MASK)
#define UMCTL2_REGS_DERATEEN_rc_derate_value_MASK (0x700U)
#define UMCTL2_REGS_DERATEEN_rc_derate_value_SHIFT (8U)
#define UMCTL2_REGS_DERATEEN_rc_derate_value_WIDTH (3U)
#define UMCTL2_REGS_DERATEEN_rc_derate_value(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DERATEEN_rc_derate_value_SHIFT)) & UMCTL2_REGS_DERATEEN_rc_derate_value_MASK)
/*! @} */

/*! @name DERATEINT - Temperature derate interval */
/*! @{ */
#define UMCTL2_REGS_DERATEINT_mr4_read_interval_MASK (0xFFFFFFFFU)
#define UMCTL2_REGS_DERATEINT_mr4_read_interval_SHIFT (0U)
#define UMCTL2_REGS_DERATEINT_mr4_read_interval_WIDTH (32U)
#define UMCTL2_REGS_DERATEINT_mr4_read_interval(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DERATEINT_mr4_read_interval_SHIFT)) & UMCTL2_REGS_DERATEINT_mr4_read_interval_MASK)
/*! @} */

/*! @name DERATECTL - Temperature derate control */
/*! @{ */
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_en_MASK (0x1U)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_en_SHIFT (0U)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_en_WIDTH (1U)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_en_SHIFT)) & UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_en_MASK)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_clr_MASK (0x2U)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_clr_SHIFT (1U)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_clr_SHIFT)) & UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_clr_MASK)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_force_MASK (0x4U)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_force_SHIFT (2U)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_force_WIDTH (1U)
#define UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_force_SHIFT)) & UMCTL2_REGS_DERATECTL_derate_temp_limit_intr_force_MASK)
/*! @} */

/*! @name PWRCTL - Low power control */
/*! @{ */
#define UMCTL2_REGS_PWRCTL_selfref_en_MASK       (0x1U)
#define UMCTL2_REGS_PWRCTL_selfref_en_SHIFT      (0U)
#define UMCTL2_REGS_PWRCTL_selfref_en_WIDTH      (1U)
#define UMCTL2_REGS_PWRCTL_selfref_en(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRCTL_selfref_en_SHIFT)) & UMCTL2_REGS_PWRCTL_selfref_en_MASK)
#define UMCTL2_REGS_PWRCTL_powerdown_en_MASK     (0x2U)
#define UMCTL2_REGS_PWRCTL_powerdown_en_SHIFT    (1U)
#define UMCTL2_REGS_PWRCTL_powerdown_en_WIDTH    (1U)
#define UMCTL2_REGS_PWRCTL_powerdown_en(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRCTL_powerdown_en_SHIFT)) & UMCTL2_REGS_PWRCTL_powerdown_en_MASK)
#define UMCTL2_REGS_PWRCTL_deeppowerdown_en_MASK (0x4U)
#define UMCTL2_REGS_PWRCTL_deeppowerdown_en_SHIFT (2U)
#define UMCTL2_REGS_PWRCTL_deeppowerdown_en_WIDTH (1U)
#define UMCTL2_REGS_PWRCTL_deeppowerdown_en(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRCTL_deeppowerdown_en_SHIFT)) & UMCTL2_REGS_PWRCTL_deeppowerdown_en_MASK)
#define UMCTL2_REGS_PWRCTL_en_dfi_dram_clk_disable_MASK (0x8U)
#define UMCTL2_REGS_PWRCTL_en_dfi_dram_clk_disable_SHIFT (3U)
#define UMCTL2_REGS_PWRCTL_en_dfi_dram_clk_disable_WIDTH (1U)
#define UMCTL2_REGS_PWRCTL_en_dfi_dram_clk_disable(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRCTL_en_dfi_dram_clk_disable_SHIFT)) & UMCTL2_REGS_PWRCTL_en_dfi_dram_clk_disable_MASK)
#define UMCTL2_REGS_PWRCTL_mpsm_en_MASK          (0x10U)
#define UMCTL2_REGS_PWRCTL_mpsm_en_SHIFT         (4U)
#define UMCTL2_REGS_PWRCTL_mpsm_en_WIDTH         (1U)
#define UMCTL2_REGS_PWRCTL_mpsm_en(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRCTL_mpsm_en_SHIFT)) & UMCTL2_REGS_PWRCTL_mpsm_en_MASK)
#define UMCTL2_REGS_PWRCTL_selfref_sw_MASK       (0x20U)
#define UMCTL2_REGS_PWRCTL_selfref_sw_SHIFT      (5U)
#define UMCTL2_REGS_PWRCTL_selfref_sw_WIDTH      (1U)
#define UMCTL2_REGS_PWRCTL_selfref_sw(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRCTL_selfref_sw_SHIFT)) & UMCTL2_REGS_PWRCTL_selfref_sw_MASK)
#define UMCTL2_REGS_PWRCTL_stay_in_selfref_MASK  (0x40U)
#define UMCTL2_REGS_PWRCTL_stay_in_selfref_SHIFT (6U)
#define UMCTL2_REGS_PWRCTL_stay_in_selfref_WIDTH (1U)
#define UMCTL2_REGS_PWRCTL_stay_in_selfref(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRCTL_stay_in_selfref_SHIFT)) & UMCTL2_REGS_PWRCTL_stay_in_selfref_MASK)
#define UMCTL2_REGS_PWRCTL_dis_cam_drain_selfref_MASK (0x80U)
#define UMCTL2_REGS_PWRCTL_dis_cam_drain_selfref_SHIFT (7U)
#define UMCTL2_REGS_PWRCTL_dis_cam_drain_selfref_WIDTH (1U)
#define UMCTL2_REGS_PWRCTL_dis_cam_drain_selfref(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRCTL_dis_cam_drain_selfref_SHIFT)) & UMCTL2_REGS_PWRCTL_dis_cam_drain_selfref_MASK)
#define UMCTL2_REGS_PWRCTL_lpddr4_sr_allowed_MASK (0x100U)
#define UMCTL2_REGS_PWRCTL_lpddr4_sr_allowed_SHIFT (8U)
#define UMCTL2_REGS_PWRCTL_lpddr4_sr_allowed_WIDTH (1U)
#define UMCTL2_REGS_PWRCTL_lpddr4_sr_allowed(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRCTL_lpddr4_sr_allowed_SHIFT)) & UMCTL2_REGS_PWRCTL_lpddr4_sr_allowed_MASK)
/*! @} */

/*! @name PWRTMG - Low Power Timing */
/*! @{ */
#define UMCTL2_REGS_PWRTMG_powerdown_to_x32_MASK (0x1FU)
#define UMCTL2_REGS_PWRTMG_powerdown_to_x32_SHIFT (0U)
#define UMCTL2_REGS_PWRTMG_powerdown_to_x32_WIDTH (5U)
#define UMCTL2_REGS_PWRTMG_powerdown_to_x32(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRTMG_powerdown_to_x32_SHIFT)) & UMCTL2_REGS_PWRTMG_powerdown_to_x32_MASK)
#define UMCTL2_REGS_PWRTMG_t_dpd_x4096_MASK      (0xFF00U)
#define UMCTL2_REGS_PWRTMG_t_dpd_x4096_SHIFT     (8U)
#define UMCTL2_REGS_PWRTMG_t_dpd_x4096_WIDTH     (8U)
#define UMCTL2_REGS_PWRTMG_t_dpd_x4096(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRTMG_t_dpd_x4096_SHIFT)) & UMCTL2_REGS_PWRTMG_t_dpd_x4096_MASK)
#define UMCTL2_REGS_PWRTMG_selfref_to_x32_MASK   (0xFF0000U)
#define UMCTL2_REGS_PWRTMG_selfref_to_x32_SHIFT  (16U)
#define UMCTL2_REGS_PWRTMG_selfref_to_x32_WIDTH  (8U)
#define UMCTL2_REGS_PWRTMG_selfref_to_x32(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PWRTMG_selfref_to_x32_SHIFT)) & UMCTL2_REGS_PWRTMG_selfref_to_x32_MASK)
/*! @} */

/*! @name HWLPCTL - Hardware low power control */
/*! @{ */
#define UMCTL2_REGS_HWLPCTL_hw_lp_en_MASK        (0x1U)
#define UMCTL2_REGS_HWLPCTL_hw_lp_en_SHIFT       (0U)
#define UMCTL2_REGS_HWLPCTL_hw_lp_en_WIDTH       (1U)
#define UMCTL2_REGS_HWLPCTL_hw_lp_en(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_HWLPCTL_hw_lp_en_SHIFT)) & UMCTL2_REGS_HWLPCTL_hw_lp_en_MASK)
#define UMCTL2_REGS_HWLPCTL_hw_lp_exit_idle_en_MASK (0x2U)
#define UMCTL2_REGS_HWLPCTL_hw_lp_exit_idle_en_SHIFT (1U)
#define UMCTL2_REGS_HWLPCTL_hw_lp_exit_idle_en_WIDTH (1U)
#define UMCTL2_REGS_HWLPCTL_hw_lp_exit_idle_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_HWLPCTL_hw_lp_exit_idle_en_SHIFT)) & UMCTL2_REGS_HWLPCTL_hw_lp_exit_idle_en_MASK)
#define UMCTL2_REGS_HWLPCTL_hw_lp_idle_x32_MASK  (0xFFF0000U)
#define UMCTL2_REGS_HWLPCTL_hw_lp_idle_x32_SHIFT (16U)
#define UMCTL2_REGS_HWLPCTL_hw_lp_idle_x32_WIDTH (12U)
#define UMCTL2_REGS_HWLPCTL_hw_lp_idle_x32(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_HWLPCTL_hw_lp_idle_x32_SHIFT)) & UMCTL2_REGS_HWLPCTL_hw_lp_idle_x32_MASK)
/*! @} */

/*! @name RFSHCTL0 - Refresh Control 0 */
/*! @{ */
#define UMCTL2_REGS_RFSHCTL0_per_bank_refresh_MASK (0x4U)
#define UMCTL2_REGS_RFSHCTL0_per_bank_refresh_SHIFT (2U)
#define UMCTL2_REGS_RFSHCTL0_per_bank_refresh_WIDTH (1U)
#define UMCTL2_REGS_RFSHCTL0_per_bank_refresh(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHCTL0_per_bank_refresh_SHIFT)) & UMCTL2_REGS_RFSHCTL0_per_bank_refresh_MASK)
#define UMCTL2_REGS_RFSHCTL0_refresh_burst_MASK  (0x3F0U)
#define UMCTL2_REGS_RFSHCTL0_refresh_burst_SHIFT (4U)
#define UMCTL2_REGS_RFSHCTL0_refresh_burst_WIDTH (6U)
#define UMCTL2_REGS_RFSHCTL0_refresh_burst(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHCTL0_refresh_burst_SHIFT)) & UMCTL2_REGS_RFSHCTL0_refresh_burst_MASK)
#define UMCTL2_REGS_RFSHCTL0_refresh_to_x1_x32_MASK (0x1F000U)
#define UMCTL2_REGS_RFSHCTL0_refresh_to_x1_x32_SHIFT (12U)
#define UMCTL2_REGS_RFSHCTL0_refresh_to_x1_x32_WIDTH (5U)
#define UMCTL2_REGS_RFSHCTL0_refresh_to_x1_x32(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHCTL0_refresh_to_x1_x32_SHIFT)) & UMCTL2_REGS_RFSHCTL0_refresh_to_x1_x32_MASK)
#define UMCTL2_REGS_RFSHCTL0_refresh_margin_MASK (0xF00000U)
#define UMCTL2_REGS_RFSHCTL0_refresh_margin_SHIFT (20U)
#define UMCTL2_REGS_RFSHCTL0_refresh_margin_WIDTH (4U)
#define UMCTL2_REGS_RFSHCTL0_refresh_margin(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHCTL0_refresh_margin_SHIFT)) & UMCTL2_REGS_RFSHCTL0_refresh_margin_MASK)
/*! @} */

/*! @name RFSHCTL1 - Refresh control 1 */
/*! @{ */
#define UMCTL2_REGS_RFSHCTL1_refresh_timer0_start_value_x32_MASK (0xFFFU)
#define UMCTL2_REGS_RFSHCTL1_refresh_timer0_start_value_x32_SHIFT (0U)
#define UMCTL2_REGS_RFSHCTL1_refresh_timer0_start_value_x32_WIDTH (12U)
#define UMCTL2_REGS_RFSHCTL1_refresh_timer0_start_value_x32(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHCTL1_refresh_timer0_start_value_x32_SHIFT)) & UMCTL2_REGS_RFSHCTL1_refresh_timer0_start_value_x32_MASK)
#define UMCTL2_REGS_RFSHCTL1_refresh_timer1_start_value_x32_MASK (0xFFF0000U)
#define UMCTL2_REGS_RFSHCTL1_refresh_timer1_start_value_x32_SHIFT (16U)
#define UMCTL2_REGS_RFSHCTL1_refresh_timer1_start_value_x32_WIDTH (12U)
#define UMCTL2_REGS_RFSHCTL1_refresh_timer1_start_value_x32(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHCTL1_refresh_timer1_start_value_x32_SHIFT)) & UMCTL2_REGS_RFSHCTL1_refresh_timer1_start_value_x32_MASK)
/*! @} */

/*! @name RFSHCTL3 - Refresh Control 3 */
/*! @{ */
#define UMCTL2_REGS_RFSHCTL3_dis_auto_refresh_MASK (0x1U)
#define UMCTL2_REGS_RFSHCTL3_dis_auto_refresh_SHIFT (0U)
#define UMCTL2_REGS_RFSHCTL3_dis_auto_refresh_WIDTH (1U)
#define UMCTL2_REGS_RFSHCTL3_dis_auto_refresh(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHCTL3_dis_auto_refresh_SHIFT)) & UMCTL2_REGS_RFSHCTL3_dis_auto_refresh_MASK)
#define UMCTL2_REGS_RFSHCTL3_refresh_update_level_MASK (0x2U)
#define UMCTL2_REGS_RFSHCTL3_refresh_update_level_SHIFT (1U)
#define UMCTL2_REGS_RFSHCTL3_refresh_update_level_WIDTH (1U)
#define UMCTL2_REGS_RFSHCTL3_refresh_update_level(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHCTL3_refresh_update_level_SHIFT)) & UMCTL2_REGS_RFSHCTL3_refresh_update_level_MASK)
#define UMCTL2_REGS_RFSHCTL3_refresh_mode_MASK   (0x70U)
#define UMCTL2_REGS_RFSHCTL3_refresh_mode_SHIFT  (4U)
#define UMCTL2_REGS_RFSHCTL3_refresh_mode_WIDTH  (3U)
#define UMCTL2_REGS_RFSHCTL3_refresh_mode(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHCTL3_refresh_mode_SHIFT)) & UMCTL2_REGS_RFSHCTL3_refresh_mode_MASK)
/*! @} */

/*! @name RFSHTMG - Refresh Timing */
/*! @{ */
#define UMCTL2_REGS_RFSHTMG_t_rfc_min_MASK       (0x3FFU)
#define UMCTL2_REGS_RFSHTMG_t_rfc_min_SHIFT      (0U)
#define UMCTL2_REGS_RFSHTMG_t_rfc_min_WIDTH      (10U)
#define UMCTL2_REGS_RFSHTMG_t_rfc_min(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHTMG_t_rfc_min_SHIFT)) & UMCTL2_REGS_RFSHTMG_t_rfc_min_MASK)
#define UMCTL2_REGS_RFSHTMG_lpddr3_trefbw_en_MASK (0x8000U)
#define UMCTL2_REGS_RFSHTMG_lpddr3_trefbw_en_SHIFT (15U)
#define UMCTL2_REGS_RFSHTMG_lpddr3_trefbw_en_WIDTH (1U)
#define UMCTL2_REGS_RFSHTMG_lpddr3_trefbw_en(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHTMG_lpddr3_trefbw_en_SHIFT)) & UMCTL2_REGS_RFSHTMG_lpddr3_trefbw_en_MASK)
#define UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_x32_MASK (0xFFF0000U)
#define UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_x32_SHIFT (16U)
#define UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_x32_WIDTH (12U)
#define UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_x32(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_x32_SHIFT)) & UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_x32_MASK)
#define UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_sel_MASK (0x80000000U)
#define UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_sel_SHIFT (31U)
#define UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_sel_WIDTH (1U)
#define UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_sel(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_sel_SHIFT)) & UMCTL2_REGS_RFSHTMG_t_rfc_nom_x1_sel_MASK)
/*! @} */

/*! @name RFSHTMG1 - Refresh timing 1 */
/*! @{ */
#define UMCTL2_REGS_RFSHTMG1_t_pbr2pbr_MASK      (0xFF0000U)
#define UMCTL2_REGS_RFSHTMG1_t_pbr2pbr_SHIFT     (16U)
#define UMCTL2_REGS_RFSHTMG1_t_pbr2pbr_WIDTH     (8U)
#define UMCTL2_REGS_RFSHTMG1_t_pbr2pbr(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RFSHTMG1_t_pbr2pbr_SHIFT)) & UMCTL2_REGS_RFSHTMG1_t_pbr2pbr_MASK)
/*! @} */

/*! @name ECCCFG0 - ECC Configuration 0 */
/*! @{ */
#define UMCTL2_REGS_ECCCFG0_ecc_mode_MASK        (0x7U)
#define UMCTL2_REGS_ECCCFG0_ecc_mode_SHIFT       (0U)
#define UMCTL2_REGS_ECCCFG0_ecc_mode_WIDTH       (3U)
#define UMCTL2_REGS_ECCCFG0_ecc_mode(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG0_ecc_mode_SHIFT)) & UMCTL2_REGS_ECCCFG0_ecc_mode_MASK)
#define UMCTL2_REGS_ECCCFG0_dis_scrub_MASK       (0x10U)
#define UMCTL2_REGS_ECCCFG0_dis_scrub_SHIFT      (4U)
#define UMCTL2_REGS_ECCCFG0_dis_scrub_WIDTH      (1U)
#define UMCTL2_REGS_ECCCFG0_dis_scrub(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG0_dis_scrub_SHIFT)) & UMCTL2_REGS_ECCCFG0_dis_scrub_MASK)
#define UMCTL2_REGS_ECCCFG0_ecc_ap_en_MASK       (0x40U)
#define UMCTL2_REGS_ECCCFG0_ecc_ap_en_SHIFT      (6U)
#define UMCTL2_REGS_ECCCFG0_ecc_ap_en_WIDTH      (1U)
#define UMCTL2_REGS_ECCCFG0_ecc_ap_en(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG0_ecc_ap_en_SHIFT)) & UMCTL2_REGS_ECCCFG0_ecc_ap_en_MASK)
#define UMCTL2_REGS_ECCCFG0_ecc_region_map_MASK  (0x7F00U)
#define UMCTL2_REGS_ECCCFG0_ecc_region_map_SHIFT (8U)
#define UMCTL2_REGS_ECCCFG0_ecc_region_map_WIDTH (7U)
#define UMCTL2_REGS_ECCCFG0_ecc_region_map(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG0_ecc_region_map_SHIFT)) & UMCTL2_REGS_ECCCFG0_ecc_region_map_MASK)
#define UMCTL2_REGS_ECCCFG0_blk_channel_idle_time_x32_MASK (0x3F0000U)
#define UMCTL2_REGS_ECCCFG0_blk_channel_idle_time_x32_SHIFT (16U)
#define UMCTL2_REGS_ECCCFG0_blk_channel_idle_time_x32_WIDTH (6U)
#define UMCTL2_REGS_ECCCFG0_blk_channel_idle_time_x32(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG0_blk_channel_idle_time_x32_SHIFT)) & UMCTL2_REGS_ECCCFG0_blk_channel_idle_time_x32_MASK)
#define UMCTL2_REGS_ECCCFG0_ecc_ap_err_threshold_MASK (0x7000000U)
#define UMCTL2_REGS_ECCCFG0_ecc_ap_err_threshold_SHIFT (24U)
#define UMCTL2_REGS_ECCCFG0_ecc_ap_err_threshold_WIDTH (3U)
#define UMCTL2_REGS_ECCCFG0_ecc_ap_err_threshold(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG0_ecc_ap_err_threshold_SHIFT)) & UMCTL2_REGS_ECCCFG0_ecc_ap_err_threshold_MASK)
#define UMCTL2_REGS_ECCCFG0_ecc_region_map_granu_MASK (0xC0000000U)
#define UMCTL2_REGS_ECCCFG0_ecc_region_map_granu_SHIFT (30U)
#define UMCTL2_REGS_ECCCFG0_ecc_region_map_granu_WIDTH (2U)
#define UMCTL2_REGS_ECCCFG0_ecc_region_map_granu(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG0_ecc_region_map_granu_SHIFT)) & UMCTL2_REGS_ECCCFG0_ecc_region_map_granu_MASK)
/*! @} */

/*! @name ECCCFG1 - ECC Configuration 1 */
/*! @{ */
#define UMCTL2_REGS_ECCCFG1_data_poison_en_MASK  (0x1U)
#define UMCTL2_REGS_ECCCFG1_data_poison_en_SHIFT (0U)
#define UMCTL2_REGS_ECCCFG1_data_poison_en_WIDTH (1U)
#define UMCTL2_REGS_ECCCFG1_data_poison_en(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG1_data_poison_en_SHIFT)) & UMCTL2_REGS_ECCCFG1_data_poison_en_MASK)
#define UMCTL2_REGS_ECCCFG1_data_poison_bit_MASK (0x2U)
#define UMCTL2_REGS_ECCCFG1_data_poison_bit_SHIFT (1U)
#define UMCTL2_REGS_ECCCFG1_data_poison_bit_WIDTH (1U)
#define UMCTL2_REGS_ECCCFG1_data_poison_bit(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG1_data_poison_bit_SHIFT)) & UMCTL2_REGS_ECCCFG1_data_poison_bit_MASK)
#define UMCTL2_REGS_ECCCFG1_ecc_region_parity_lock_MASK (0x10U)
#define UMCTL2_REGS_ECCCFG1_ecc_region_parity_lock_SHIFT (4U)
#define UMCTL2_REGS_ECCCFG1_ecc_region_parity_lock_WIDTH (1U)
#define UMCTL2_REGS_ECCCFG1_ecc_region_parity_lock(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG1_ecc_region_parity_lock_SHIFT)) & UMCTL2_REGS_ECCCFG1_ecc_region_parity_lock_MASK)
#define UMCTL2_REGS_ECCCFG1_ecc_region_waste_lock_MASK (0x20U)
#define UMCTL2_REGS_ECCCFG1_ecc_region_waste_lock_SHIFT (5U)
#define UMCTL2_REGS_ECCCFG1_ecc_region_waste_lock_WIDTH (1U)
#define UMCTL2_REGS_ECCCFG1_ecc_region_waste_lock(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG1_ecc_region_waste_lock_SHIFT)) & UMCTL2_REGS_ECCCFG1_ecc_region_waste_lock_MASK)
#define UMCTL2_REGS_ECCCFG1_blk_channel_active_term_MASK (0x80U)
#define UMCTL2_REGS_ECCCFG1_blk_channel_active_term_SHIFT (7U)
#define UMCTL2_REGS_ECCCFG1_blk_channel_active_term_WIDTH (1U)
#define UMCTL2_REGS_ECCCFG1_blk_channel_active_term(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG1_blk_channel_active_term_SHIFT)) & UMCTL2_REGS_ECCCFG1_blk_channel_active_term_MASK)
#define UMCTL2_REGS_ECCCFG1_active_blk_channel_MASK (0xF00U)
#define UMCTL2_REGS_ECCCFG1_active_blk_channel_SHIFT (8U)
#define UMCTL2_REGS_ECCCFG1_active_blk_channel_WIDTH (4U)
#define UMCTL2_REGS_ECCCFG1_active_blk_channel(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCFG1_active_blk_channel_SHIFT)) & UMCTL2_REGS_ECCCFG1_active_blk_channel_MASK)
/*! @} */

/*! @name ECCSTAT - SECDED ECC Status */
/*! @{ */
#define UMCTL2_REGS_ECCSTAT_ecc_corrected_bit_num_MASK (0x7FU)
#define UMCTL2_REGS_ECCSTAT_ecc_corrected_bit_num_SHIFT (0U)
#define UMCTL2_REGS_ECCSTAT_ecc_corrected_bit_num_WIDTH (7U)
#define UMCTL2_REGS_ECCSTAT_ecc_corrected_bit_num(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCSTAT_ecc_corrected_bit_num_SHIFT)) & UMCTL2_REGS_ECCSTAT_ecc_corrected_bit_num_MASK)
#define UMCTL2_REGS_ECCSTAT_ecc_corrected_err_MASK (0x100U)
#define UMCTL2_REGS_ECCSTAT_ecc_corrected_err_SHIFT (8U)
#define UMCTL2_REGS_ECCSTAT_ecc_corrected_err_WIDTH (1U)
#define UMCTL2_REGS_ECCSTAT_ecc_corrected_err(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCSTAT_ecc_corrected_err_SHIFT)) & UMCTL2_REGS_ECCSTAT_ecc_corrected_err_MASK)
#define UMCTL2_REGS_ECCSTAT_ecc_uncorrected_err_MASK (0x10000U)
#define UMCTL2_REGS_ECCSTAT_ecc_uncorrected_err_SHIFT (16U)
#define UMCTL2_REGS_ECCSTAT_ecc_uncorrected_err_WIDTH (1U)
#define UMCTL2_REGS_ECCSTAT_ecc_uncorrected_err(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCSTAT_ecc_uncorrected_err_SHIFT)) & UMCTL2_REGS_ECCSTAT_ecc_uncorrected_err_MASK)
/*! @} */

/*! @name ECCCTL - ECC Control */
/*! @{ */
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_clr_MASK (0x1U)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_clr_SHIFT (0U)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_clr_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_corrected_err_clr_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_corrected_err_clr_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_clr_MASK (0x2U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_clr_SHIFT (1U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_clr_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_clr_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_clr_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_corr_err_cnt_clr_MASK (0x4U)
#define UMCTL2_REGS_ECCCTL_ecc_corr_err_cnt_clr_SHIFT (2U)
#define UMCTL2_REGS_ECCCTL_ecc_corr_err_cnt_clr_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_corr_err_cnt_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_corr_err_cnt_clr_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_corr_err_cnt_clr_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_uncorr_err_cnt_clr_MASK (0x8U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorr_err_cnt_clr_SHIFT (3U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorr_err_cnt_clr_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorr_err_cnt_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_uncorr_err_cnt_clr_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_uncorr_err_cnt_clr_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_clr_MASK (0x10U)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_clr_SHIFT (4U)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_clr_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_clr_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_en_MASK (0x100U)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_en_SHIFT (8U)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_en_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_en_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_en_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_en_MASK (0x200U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_en_SHIFT (9U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_en_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_en_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_en_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_en_MASK (0x400U)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_en_SHIFT (10U)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_en_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_en_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_en_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_force_MASK (0x10000U)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_force_SHIFT (16U)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_force_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_force_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_corrected_err_intr_force_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_force_MASK (0x20000U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_force_SHIFT (17U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_force_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_force_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_uncorrected_err_intr_force_MASK)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_force_MASK (0x40000U)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_force_SHIFT (18U)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_force_WIDTH (1U)
#define UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_force_SHIFT)) & UMCTL2_REGS_ECCCTL_ecc_ap_err_intr_force_MASK)
/*! @} */

/*! @name ECCERRCNT - ECC Error Counter */
/*! @{ */
#define UMCTL2_REGS_ECCERRCNT_ecc_corr_err_cnt_MASK (0xFFFFU)
#define UMCTL2_REGS_ECCERRCNT_ecc_corr_err_cnt_SHIFT (0U)
#define UMCTL2_REGS_ECCERRCNT_ecc_corr_err_cnt_WIDTH (16U)
#define UMCTL2_REGS_ECCERRCNT_ecc_corr_err_cnt(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCERRCNT_ecc_corr_err_cnt_SHIFT)) & UMCTL2_REGS_ECCERRCNT_ecc_corr_err_cnt_MASK)
#define UMCTL2_REGS_ECCERRCNT_ecc_uncorr_err_cnt_MASK (0xFFFF0000U)
#define UMCTL2_REGS_ECCERRCNT_ecc_uncorr_err_cnt_SHIFT (16U)
#define UMCTL2_REGS_ECCERRCNT_ecc_uncorr_err_cnt_WIDTH (16U)
#define UMCTL2_REGS_ECCERRCNT_ecc_uncorr_err_cnt(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCERRCNT_ecc_uncorr_err_cnt_SHIFT)) & UMCTL2_REGS_ECCERRCNT_ecc_uncorr_err_cnt_MASK)
/*! @} */

/*! @name ECCCADDR0 - ECC Corrected Error Address 0 */
/*! @{ */
#define UMCTL2_REGS_ECCCADDR0_ecc_corr_row_MASK  (0x3FFFFU)
#define UMCTL2_REGS_ECCCADDR0_ecc_corr_row_SHIFT (0U)
#define UMCTL2_REGS_ECCCADDR0_ecc_corr_row_WIDTH (18U)
#define UMCTL2_REGS_ECCCADDR0_ecc_corr_row(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCADDR0_ecc_corr_row_SHIFT)) & UMCTL2_REGS_ECCCADDR0_ecc_corr_row_MASK)
#define UMCTL2_REGS_ECCCADDR0_ecc_corr_rank_MASK (0x1000000U)
#define UMCTL2_REGS_ECCCADDR0_ecc_corr_rank_SHIFT (24U)
#define UMCTL2_REGS_ECCCADDR0_ecc_corr_rank_WIDTH (1U)
#define UMCTL2_REGS_ECCCADDR0_ecc_corr_rank(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCADDR0_ecc_corr_rank_SHIFT)) & UMCTL2_REGS_ECCCADDR0_ecc_corr_rank_MASK)
/*! @} */

/*! @name ECCCADDR1 - ECC Corrected Error Address 1 */
/*! @{ */
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_col_MASK  (0xFFFU)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_col_SHIFT (0U)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_col_WIDTH (12U)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_col(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCADDR1_ecc_corr_col_SHIFT)) & UMCTL2_REGS_ECCCADDR1_ecc_corr_col_MASK)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_bank_MASK (0x70000U)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_bank_SHIFT (16U)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_bank_WIDTH (3U)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_bank(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCADDR1_ecc_corr_bank_SHIFT)) & UMCTL2_REGS_ECCCADDR1_ecc_corr_bank_MASK)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_bg_MASK   (0x3000000U)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_bg_SHIFT  (24U)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_bg_WIDTH  (2U)
#define UMCTL2_REGS_ECCCADDR1_ecc_corr_bg(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCADDR1_ecc_corr_bg_SHIFT)) & UMCTL2_REGS_ECCCADDR1_ecc_corr_bg_MASK)
/*! @} */

/*! @name ECCCSYN0 - ECC Corrected Syndrome 0 */
/*! @{ */
#define UMCTL2_REGS_ECCCSYN0_ecc_corr_syndromes_31_0_MASK (0xFFFFFFFFU)
#define UMCTL2_REGS_ECCCSYN0_ecc_corr_syndromes_31_0_SHIFT (0U)
#define UMCTL2_REGS_ECCCSYN0_ecc_corr_syndromes_31_0_WIDTH (32U)
#define UMCTL2_REGS_ECCCSYN0_ecc_corr_syndromes_31_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCSYN0_ecc_corr_syndromes_31_0_SHIFT)) & UMCTL2_REGS_ECCCSYN0_ecc_corr_syndromes_31_0_MASK)
/*! @} */

/*! @name ECCCSYN1 - ECC Corrected Syndrome 1 */
/*! @{ */
#define UMCTL2_REGS_ECCCSYN1_ecc_corr_syndromes_63_32_MASK (0xFFFFFFFFU)
#define UMCTL2_REGS_ECCCSYN1_ecc_corr_syndromes_63_32_SHIFT (0U)
#define UMCTL2_REGS_ECCCSYN1_ecc_corr_syndromes_63_32_WIDTH (32U)
#define UMCTL2_REGS_ECCCSYN1_ecc_corr_syndromes_63_32(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCSYN1_ecc_corr_syndromes_63_32_SHIFT)) & UMCTL2_REGS_ECCCSYN1_ecc_corr_syndromes_63_32_MASK)
/*! @} */

/*! @name ECCCSYN2 - ECC Corrected Syndrome 2 */
/*! @{ */
#define UMCTL2_REGS_ECCCSYN2_ecc_corr_syndromes_71_64_MASK (0xFFU)
#define UMCTL2_REGS_ECCCSYN2_ecc_corr_syndromes_71_64_SHIFT (0U)
#define UMCTL2_REGS_ECCCSYN2_ecc_corr_syndromes_71_64_WIDTH (8U)
#define UMCTL2_REGS_ECCCSYN2_ecc_corr_syndromes_71_64(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCCSYN2_ecc_corr_syndromes_71_64_SHIFT)) & UMCTL2_REGS_ECCCSYN2_ecc_corr_syndromes_71_64_MASK)
/*! @} */

/*! @name ECCBITMASK0 - ECC Corrected Data Bit Mask 0 */
/*! @{ */
#define UMCTL2_REGS_ECCBITMASK0_ecc_corr_bit_mask_31_0_MASK (0xFFFFFFFFU)
#define UMCTL2_REGS_ECCBITMASK0_ecc_corr_bit_mask_31_0_SHIFT (0U)
#define UMCTL2_REGS_ECCBITMASK0_ecc_corr_bit_mask_31_0_WIDTH (32U)
#define UMCTL2_REGS_ECCBITMASK0_ecc_corr_bit_mask_31_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCBITMASK0_ecc_corr_bit_mask_31_0_SHIFT)) & UMCTL2_REGS_ECCBITMASK0_ecc_corr_bit_mask_31_0_MASK)
/*! @} */

/*! @name ECCBITMASK1 - ECC Corrected Data Bit Mask 1 */
/*! @{ */
#define UMCTL2_REGS_ECCBITMASK1_ecc_corr_bit_mask_63_32_MASK (0xFFFFFFFFU)
#define UMCTL2_REGS_ECCBITMASK1_ecc_corr_bit_mask_63_32_SHIFT (0U)
#define UMCTL2_REGS_ECCBITMASK1_ecc_corr_bit_mask_63_32_WIDTH (32U)
#define UMCTL2_REGS_ECCBITMASK1_ecc_corr_bit_mask_63_32(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCBITMASK1_ecc_corr_bit_mask_63_32_SHIFT)) & UMCTL2_REGS_ECCBITMASK1_ecc_corr_bit_mask_63_32_MASK)
/*! @} */

/*! @name ECCBITMASK2 - ECC Corrected Data Bit Mask 2 */
/*! @{ */
#define UMCTL2_REGS_ECCBITMASK2_ecc_corr_bit_mask_71_64_MASK (0xFFU)
#define UMCTL2_REGS_ECCBITMASK2_ecc_corr_bit_mask_71_64_SHIFT (0U)
#define UMCTL2_REGS_ECCBITMASK2_ecc_corr_bit_mask_71_64_WIDTH (8U)
#define UMCTL2_REGS_ECCBITMASK2_ecc_corr_bit_mask_71_64(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCBITMASK2_ecc_corr_bit_mask_71_64_SHIFT)) & UMCTL2_REGS_ECCBITMASK2_ecc_corr_bit_mask_71_64_MASK)
/*! @} */

/*! @name ECCUADDR0 - ECC Uncorrected Error Address 0 */
/*! @{ */
#define UMCTL2_REGS_ECCUADDR0_ecc_uncorr_row_MASK (0x3FFFFU)
#define UMCTL2_REGS_ECCUADDR0_ecc_uncorr_row_SHIFT (0U)
#define UMCTL2_REGS_ECCUADDR0_ecc_uncorr_row_WIDTH (18U)
#define UMCTL2_REGS_ECCUADDR0_ecc_uncorr_row(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCUADDR0_ecc_uncorr_row_SHIFT)) & UMCTL2_REGS_ECCUADDR0_ecc_uncorr_row_MASK)
#define UMCTL2_REGS_ECCUADDR0_ecc_uncorr_rank_MASK (0x1000000U)
#define UMCTL2_REGS_ECCUADDR0_ecc_uncorr_rank_SHIFT (24U)
#define UMCTL2_REGS_ECCUADDR0_ecc_uncorr_rank_WIDTH (1U)
#define UMCTL2_REGS_ECCUADDR0_ecc_uncorr_rank(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCUADDR0_ecc_uncorr_rank_SHIFT)) & UMCTL2_REGS_ECCUADDR0_ecc_uncorr_rank_MASK)
/*! @} */

/*! @name ECCUADDR1 - ECC Uncorrected Error Address 1 */
/*! @{ */
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_col_MASK (0xFFFU)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_col_SHIFT (0U)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_col_WIDTH (12U)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_col(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCUADDR1_ecc_uncorr_col_SHIFT)) & UMCTL2_REGS_ECCUADDR1_ecc_uncorr_col_MASK)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bank_MASK (0x70000U)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bank_SHIFT (16U)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bank_WIDTH (3U)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bank(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bank_SHIFT)) & UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bank_MASK)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bg_MASK (0x3000000U)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bg_SHIFT (24U)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bg_WIDTH (2U)
#define UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bg(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bg_SHIFT)) & UMCTL2_REGS_ECCUADDR1_ecc_uncorr_bg_MASK)
/*! @} */

/*! @name ECCUSYN0 - ECC Uncorrected Syndrome 0 */
/*! @{ */
#define UMCTL2_REGS_ECCUSYN0_ecc_uncorr_syndromes_31_0_MASK (0xFFFFFFFFU)
#define UMCTL2_REGS_ECCUSYN0_ecc_uncorr_syndromes_31_0_SHIFT (0U)
#define UMCTL2_REGS_ECCUSYN0_ecc_uncorr_syndromes_31_0_WIDTH (32U)
#define UMCTL2_REGS_ECCUSYN0_ecc_uncorr_syndromes_31_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCUSYN0_ecc_uncorr_syndromes_31_0_SHIFT)) & UMCTL2_REGS_ECCUSYN0_ecc_uncorr_syndromes_31_0_MASK)
/*! @} */

/*! @name ECCUSYN1 - ECC Uncorrected Syndrome 1 */
/*! @{ */
#define UMCTL2_REGS_ECCUSYN1_ecc_uncorr_syndromes_63_32_MASK (0xFFFFFFFFU)
#define UMCTL2_REGS_ECCUSYN1_ecc_uncorr_syndromes_63_32_SHIFT (0U)
#define UMCTL2_REGS_ECCUSYN1_ecc_uncorr_syndromes_63_32_WIDTH (32U)
#define UMCTL2_REGS_ECCUSYN1_ecc_uncorr_syndromes_63_32(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCUSYN1_ecc_uncorr_syndromes_63_32_SHIFT)) & UMCTL2_REGS_ECCUSYN1_ecc_uncorr_syndromes_63_32_MASK)
/*! @} */

/*! @name ECCUSYN2 - ECC Uncorrected Syndrome 2 */
/*! @{ */
#define UMCTL2_REGS_ECCUSYN2_ecc_uncorr_syndromes_71_64_MASK (0xFFU)
#define UMCTL2_REGS_ECCUSYN2_ecc_uncorr_syndromes_71_64_SHIFT (0U)
#define UMCTL2_REGS_ECCUSYN2_ecc_uncorr_syndromes_71_64_WIDTH (8U)
#define UMCTL2_REGS_ECCUSYN2_ecc_uncorr_syndromes_71_64(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCUSYN2_ecc_uncorr_syndromes_71_64_SHIFT)) & UMCTL2_REGS_ECCUSYN2_ecc_uncorr_syndromes_71_64_MASK)
/*! @} */

/*! @name ECCPOISONADDR0 - ECC Data Poisoning Address 0 */
/*! @{ */
#define UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_col_MASK (0xFFFU)
#define UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_col_SHIFT (0U)
#define UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_col_WIDTH (12U)
#define UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_col(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_col_SHIFT)) & UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_col_MASK)
#define UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_rank_MASK (0x1000000U)
#define UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_rank_SHIFT (24U)
#define UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_rank_WIDTH (1U)
#define UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_rank(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_rank_SHIFT)) & UMCTL2_REGS_ECCPOISONADDR0_ecc_poison_rank_MASK)
/*! @} */

/*! @name ECCPOISONADDR1 - ECC Data Poisoning Address 1 */
/*! @{ */
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_row_MASK (0x3FFFFU)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_row_SHIFT (0U)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_row_WIDTH (18U)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_row(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_row_SHIFT)) & UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_row_MASK)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bank_MASK (0x7000000U)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bank_SHIFT (24U)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bank_WIDTH (3U)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bank(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bank_SHIFT)) & UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bank_MASK)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bg_MASK (0x30000000U)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bg_SHIFT (28U)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bg_WIDTH (2U)
#define UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bg(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bg_SHIFT)) & UMCTL2_REGS_ECCPOISONADDR1_ecc_poison_bg_MASK)
/*! @} */

/*! @name CRCPARCTL0 - CRC Parity Control 0 */
/*! @{ */
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_en_MASK (0x1U)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_en_SHIFT (0U)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_en_WIDTH (1U)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_en_SHIFT)) & UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_en_MASK)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_clr_MASK (0x2U)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_clr_SHIFT (1U)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_clr_WIDTH (1U)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_clr_SHIFT)) & UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_int_clr_MASK)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_cnt_clr_MASK (0x4U)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_cnt_clr_SHIFT (2U)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_cnt_clr_WIDTH (1U)
#define UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_cnt_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_cnt_clr_SHIFT)) & UMCTL2_REGS_CRCPARCTL0_dfi_alert_err_cnt_clr_MASK)
/*! @} */

/*! @name CRCPARCTL1 - CRC Parity Control 1 */
/*! @{ */
#define UMCTL2_REGS_CRCPARCTL1_parity_enable_MASK (0x1U)
#define UMCTL2_REGS_CRCPARCTL1_parity_enable_SHIFT (0U)
#define UMCTL2_REGS_CRCPARCTL1_parity_enable_WIDTH (1U)
#define UMCTL2_REGS_CRCPARCTL1_parity_enable(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_CRCPARCTL1_parity_enable_SHIFT)) & UMCTL2_REGS_CRCPARCTL1_parity_enable_MASK)
#define UMCTL2_REGS_CRCPARCTL1_crc_enable_MASK   (0x10U)
#define UMCTL2_REGS_CRCPARCTL1_crc_enable_SHIFT  (4U)
#define UMCTL2_REGS_CRCPARCTL1_crc_enable_WIDTH  (1U)
#define UMCTL2_REGS_CRCPARCTL1_crc_enable(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_CRCPARCTL1_crc_enable_SHIFT)) & UMCTL2_REGS_CRCPARCTL1_crc_enable_MASK)
#define UMCTL2_REGS_CRCPARCTL1_crc_inc_dm_MASK   (0x80U)
#define UMCTL2_REGS_CRCPARCTL1_crc_inc_dm_SHIFT  (7U)
#define UMCTL2_REGS_CRCPARCTL1_crc_inc_dm_WIDTH  (1U)
#define UMCTL2_REGS_CRCPARCTL1_crc_inc_dm(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_CRCPARCTL1_crc_inc_dm_SHIFT)) & UMCTL2_REGS_CRCPARCTL1_crc_inc_dm_MASK)
#define UMCTL2_REGS_CRCPARCTL1_caparity_disable_before_sr_MASK (0x1000U)
#define UMCTL2_REGS_CRCPARCTL1_caparity_disable_before_sr_SHIFT (12U)
#define UMCTL2_REGS_CRCPARCTL1_caparity_disable_before_sr_WIDTH (1U)
#define UMCTL2_REGS_CRCPARCTL1_caparity_disable_before_sr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_CRCPARCTL1_caparity_disable_before_sr_SHIFT)) & UMCTL2_REGS_CRCPARCTL1_caparity_disable_before_sr_MASK)
/*! @} */

/*! @name CRCPARSTAT - CRC Parity Status */
/*! @{ */
#define UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_cnt_MASK (0xFFFFU)
#define UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_cnt_SHIFT (0U)
#define UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_cnt_WIDTH (16U)
#define UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_cnt(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_cnt_SHIFT)) & UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_cnt_MASK)
#define UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_int_MASK (0x10000U)
#define UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_int_SHIFT (16U)
#define UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_int_WIDTH (1U)
#define UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_int(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_int_SHIFT)) & UMCTL2_REGS_CRCPARSTAT_dfi_alert_err_int_MASK)
/*! @} */

/*! @name INIT0 - DRAM Initialization 0 */
/*! @{ */
#define UMCTL2_REGS_INIT0_pre_cke_x1024_MASK     (0xFFFU)
#define UMCTL2_REGS_INIT0_pre_cke_x1024_SHIFT    (0U)
#define UMCTL2_REGS_INIT0_pre_cke_x1024_WIDTH    (12U)
#define UMCTL2_REGS_INIT0_pre_cke_x1024(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT0_pre_cke_x1024_SHIFT)) & UMCTL2_REGS_INIT0_pre_cke_x1024_MASK)
#define UMCTL2_REGS_INIT0_post_cke_x1024_MASK    (0x3FF0000U)
#define UMCTL2_REGS_INIT0_post_cke_x1024_SHIFT   (16U)
#define UMCTL2_REGS_INIT0_post_cke_x1024_WIDTH   (10U)
#define UMCTL2_REGS_INIT0_post_cke_x1024(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT0_post_cke_x1024_SHIFT)) & UMCTL2_REGS_INIT0_post_cke_x1024_MASK)
#define UMCTL2_REGS_INIT0_skip_dram_init_MASK    (0xC0000000U)
#define UMCTL2_REGS_INIT0_skip_dram_init_SHIFT   (30U)
#define UMCTL2_REGS_INIT0_skip_dram_init_WIDTH   (2U)
#define UMCTL2_REGS_INIT0_skip_dram_init(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT0_skip_dram_init_SHIFT)) & UMCTL2_REGS_INIT0_skip_dram_init_MASK)
/*! @} */

/*! @name INIT1 - DRAM Initialization 1 */
/*! @{ */
#define UMCTL2_REGS_INIT1_pre_ocd_x32_MASK       (0xFU)
#define UMCTL2_REGS_INIT1_pre_ocd_x32_SHIFT      (0U)
#define UMCTL2_REGS_INIT1_pre_ocd_x32_WIDTH      (4U)
#define UMCTL2_REGS_INIT1_pre_ocd_x32(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT1_pre_ocd_x32_SHIFT)) & UMCTL2_REGS_INIT1_pre_ocd_x32_MASK)
#define UMCTL2_REGS_INIT1_dram_rstn_x1024_MASK   (0x1FF0000U)
#define UMCTL2_REGS_INIT1_dram_rstn_x1024_SHIFT  (16U)
#define UMCTL2_REGS_INIT1_dram_rstn_x1024_WIDTH  (9U)
#define UMCTL2_REGS_INIT1_dram_rstn_x1024(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT1_dram_rstn_x1024_SHIFT)) & UMCTL2_REGS_INIT1_dram_rstn_x1024_MASK)
/*! @} */

/*! @name INIT2 - DRAM Initialization 2 */
/*! @{ */
#define UMCTL2_REGS_INIT2_min_stable_clock_x1_MASK (0xFU)
#define UMCTL2_REGS_INIT2_min_stable_clock_x1_SHIFT (0U)
#define UMCTL2_REGS_INIT2_min_stable_clock_x1_WIDTH (4U)
#define UMCTL2_REGS_INIT2_min_stable_clock_x1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT2_min_stable_clock_x1_SHIFT)) & UMCTL2_REGS_INIT2_min_stable_clock_x1_MASK)
#define UMCTL2_REGS_INIT2_idle_after_reset_x32_MASK (0xFF00U)
#define UMCTL2_REGS_INIT2_idle_after_reset_x32_SHIFT (8U)
#define UMCTL2_REGS_INIT2_idle_after_reset_x32_WIDTH (8U)
#define UMCTL2_REGS_INIT2_idle_after_reset_x32(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT2_idle_after_reset_x32_SHIFT)) & UMCTL2_REGS_INIT2_idle_after_reset_x32_MASK)
/*! @} */

/*! @name INIT3 - DRAM Initialization 3 */
/*! @{ */
#define UMCTL2_REGS_INIT3_emr_MASK               (0xFFFFU)
#define UMCTL2_REGS_INIT3_emr_SHIFT              (0U)
#define UMCTL2_REGS_INIT3_emr_WIDTH              (16U)
#define UMCTL2_REGS_INIT3_emr(x)                 (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT3_emr_SHIFT)) & UMCTL2_REGS_INIT3_emr_MASK)
#define UMCTL2_REGS_INIT3_mr_MASK                (0xFFFF0000U)
#define UMCTL2_REGS_INIT3_mr_SHIFT               (16U)
#define UMCTL2_REGS_INIT3_mr_WIDTH               (16U)
#define UMCTL2_REGS_INIT3_mr(x)                  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT3_mr_SHIFT)) & UMCTL2_REGS_INIT3_mr_MASK)
/*! @} */

/*! @name INIT4 - DRAM Initialization 4 */
/*! @{ */
#define UMCTL2_REGS_INIT4_emr3_MASK              (0xFFFFU)
#define UMCTL2_REGS_INIT4_emr3_SHIFT             (0U)
#define UMCTL2_REGS_INIT4_emr3_WIDTH             (16U)
#define UMCTL2_REGS_INIT4_emr3(x)                (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT4_emr3_SHIFT)) & UMCTL2_REGS_INIT4_emr3_MASK)
#define UMCTL2_REGS_INIT4_emr2_MASK              (0xFFFF0000U)
#define UMCTL2_REGS_INIT4_emr2_SHIFT             (16U)
#define UMCTL2_REGS_INIT4_emr2_WIDTH             (16U)
#define UMCTL2_REGS_INIT4_emr2(x)                (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT4_emr2_SHIFT)) & UMCTL2_REGS_INIT4_emr2_MASK)
/*! @} */

/*! @name INIT5 - DRAM Initialization 5 */
/*! @{ */
#define UMCTL2_REGS_INIT5_max_auto_init_x1024_MASK (0x3FFU)
#define UMCTL2_REGS_INIT5_max_auto_init_x1024_SHIFT (0U)
#define UMCTL2_REGS_INIT5_max_auto_init_x1024_WIDTH (10U)
#define UMCTL2_REGS_INIT5_max_auto_init_x1024(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT5_max_auto_init_x1024_SHIFT)) & UMCTL2_REGS_INIT5_max_auto_init_x1024_MASK)
#define UMCTL2_REGS_INIT5_dev_zqinit_x32_MASK    (0xFF0000U)
#define UMCTL2_REGS_INIT5_dev_zqinit_x32_SHIFT   (16U)
#define UMCTL2_REGS_INIT5_dev_zqinit_x32_WIDTH   (8U)
#define UMCTL2_REGS_INIT5_dev_zqinit_x32(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT5_dev_zqinit_x32_SHIFT)) & UMCTL2_REGS_INIT5_dev_zqinit_x32_MASK)
/*! @} */

/*! @name INIT6 - DRAM Initialization 6 */
/*! @{ */
#define UMCTL2_REGS_INIT6_mr5_MASK               (0xFFFFU)
#define UMCTL2_REGS_INIT6_mr5_SHIFT              (0U)
#define UMCTL2_REGS_INIT6_mr5_WIDTH              (16U)
#define UMCTL2_REGS_INIT6_mr5(x)                 (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT6_mr5_SHIFT)) & UMCTL2_REGS_INIT6_mr5_MASK)
#define UMCTL2_REGS_INIT6_mr4_MASK               (0xFFFF0000U)
#define UMCTL2_REGS_INIT6_mr4_SHIFT              (16U)
#define UMCTL2_REGS_INIT6_mr4_WIDTH              (16U)
#define UMCTL2_REGS_INIT6_mr4(x)                 (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT6_mr4_SHIFT)) & UMCTL2_REGS_INIT6_mr4_MASK)
/*! @} */

/*! @name INIT7 - DRAM Initialization 7 */
/*! @{ */
#define UMCTL2_REGS_INIT7_mr6_MASK               (0xFFFFU)
#define UMCTL2_REGS_INIT7_mr6_SHIFT              (0U)
#define UMCTL2_REGS_INIT7_mr6_WIDTH              (16U)
#define UMCTL2_REGS_INIT7_mr6(x)                 (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT7_mr6_SHIFT)) & UMCTL2_REGS_INIT7_mr6_MASK)
#define UMCTL2_REGS_INIT7_mr22_MASK              (0xFFFF0000U)
#define UMCTL2_REGS_INIT7_mr22_SHIFT             (16U)
#define UMCTL2_REGS_INIT7_mr22_WIDTH             (16U)
#define UMCTL2_REGS_INIT7_mr22(x)                (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_INIT7_mr22_SHIFT)) & UMCTL2_REGS_INIT7_mr22_MASK)
/*! @} */

/*! @name DIMMCTL - DIMM Control */
/*! @{ */
#define UMCTL2_REGS_DIMMCTL_dimm_stagger_cs_en_MASK (0x1U)
#define UMCTL2_REGS_DIMMCTL_dimm_stagger_cs_en_SHIFT (0U)
#define UMCTL2_REGS_DIMMCTL_dimm_stagger_cs_en_WIDTH (1U)
#define UMCTL2_REGS_DIMMCTL_dimm_stagger_cs_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_dimm_stagger_cs_en_SHIFT)) & UMCTL2_REGS_DIMMCTL_dimm_stagger_cs_en_MASK)
#define UMCTL2_REGS_DIMMCTL_dimm_addr_mirr_en_MASK (0x2U)
#define UMCTL2_REGS_DIMMCTL_dimm_addr_mirr_en_SHIFT (1U)
#define UMCTL2_REGS_DIMMCTL_dimm_addr_mirr_en_WIDTH (1U)
#define UMCTL2_REGS_DIMMCTL_dimm_addr_mirr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_dimm_addr_mirr_en_SHIFT)) & UMCTL2_REGS_DIMMCTL_dimm_addr_mirr_en_MASK)
#define UMCTL2_REGS_DIMMCTL_dimm_output_inv_en_MASK (0x4U)
#define UMCTL2_REGS_DIMMCTL_dimm_output_inv_en_SHIFT (2U)
#define UMCTL2_REGS_DIMMCTL_dimm_output_inv_en_WIDTH (1U)
#define UMCTL2_REGS_DIMMCTL_dimm_output_inv_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_dimm_output_inv_en_SHIFT)) & UMCTL2_REGS_DIMMCTL_dimm_output_inv_en_MASK)
#define UMCTL2_REGS_DIMMCTL_mrs_a17_en_MASK      (0x8U)
#define UMCTL2_REGS_DIMMCTL_mrs_a17_en_SHIFT     (3U)
#define UMCTL2_REGS_DIMMCTL_mrs_a17_en_WIDTH     (1U)
#define UMCTL2_REGS_DIMMCTL_mrs_a17_en(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_mrs_a17_en_SHIFT)) & UMCTL2_REGS_DIMMCTL_mrs_a17_en_MASK)
#define UMCTL2_REGS_DIMMCTL_mrs_bg1_en_MASK      (0x10U)
#define UMCTL2_REGS_DIMMCTL_mrs_bg1_en_SHIFT     (4U)
#define UMCTL2_REGS_DIMMCTL_mrs_bg1_en_WIDTH     (1U)
#define UMCTL2_REGS_DIMMCTL_mrs_bg1_en(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_mrs_bg1_en_SHIFT)) & UMCTL2_REGS_DIMMCTL_mrs_bg1_en_MASK)
#define UMCTL2_REGS_DIMMCTL_dimm_dis_bg_mirroring_MASK (0x20U)
#define UMCTL2_REGS_DIMMCTL_dimm_dis_bg_mirroring_SHIFT (5U)
#define UMCTL2_REGS_DIMMCTL_dimm_dis_bg_mirroring_WIDTH (1U)
#define UMCTL2_REGS_DIMMCTL_dimm_dis_bg_mirroring(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_dimm_dis_bg_mirroring_SHIFT)) & UMCTL2_REGS_DIMMCTL_dimm_dis_bg_mirroring_MASK)
#define UMCTL2_REGS_DIMMCTL_lrdimm_bcom_cmd_prot_MASK (0x40U)
#define UMCTL2_REGS_DIMMCTL_lrdimm_bcom_cmd_prot_SHIFT (6U)
#define UMCTL2_REGS_DIMMCTL_lrdimm_bcom_cmd_prot_WIDTH (1U)
#define UMCTL2_REGS_DIMMCTL_lrdimm_bcom_cmd_prot(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_lrdimm_bcom_cmd_prot_SHIFT)) & UMCTL2_REGS_DIMMCTL_lrdimm_bcom_cmd_prot_MASK)
#define UMCTL2_REGS_DIMMCTL_rcd_weak_drive_MASK  (0x1000U)
#define UMCTL2_REGS_DIMMCTL_rcd_weak_drive_SHIFT (12U)
#define UMCTL2_REGS_DIMMCTL_rcd_weak_drive_WIDTH (1U)
#define UMCTL2_REGS_DIMMCTL_rcd_weak_drive(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_rcd_weak_drive_SHIFT)) & UMCTL2_REGS_DIMMCTL_rcd_weak_drive_MASK)
#define UMCTL2_REGS_DIMMCTL_rcd_a_output_disabled_MASK (0x2000U)
#define UMCTL2_REGS_DIMMCTL_rcd_a_output_disabled_SHIFT (13U)
#define UMCTL2_REGS_DIMMCTL_rcd_a_output_disabled_WIDTH (1U)
#define UMCTL2_REGS_DIMMCTL_rcd_a_output_disabled(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_rcd_a_output_disabled_SHIFT)) & UMCTL2_REGS_DIMMCTL_rcd_a_output_disabled_MASK)
#define UMCTL2_REGS_DIMMCTL_rcd_b_output_disabled_MASK (0x4000U)
#define UMCTL2_REGS_DIMMCTL_rcd_b_output_disabled_SHIFT (14U)
#define UMCTL2_REGS_DIMMCTL_rcd_b_output_disabled_WIDTH (1U)
#define UMCTL2_REGS_DIMMCTL_rcd_b_output_disabled(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DIMMCTL_rcd_b_output_disabled_SHIFT)) & UMCTL2_REGS_DIMMCTL_rcd_b_output_disabled_MASK)
/*! @} */

/*! @name RANKCTL - Rank Control */
/*! @{ */
#define UMCTL2_REGS_RANKCTL_max_rank_rd_MASK     (0xFU)
#define UMCTL2_REGS_RANKCTL_max_rank_rd_SHIFT    (0U)
#define UMCTL2_REGS_RANKCTL_max_rank_rd_WIDTH    (4U)
#define UMCTL2_REGS_RANKCTL_max_rank_rd(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RANKCTL_max_rank_rd_SHIFT)) & UMCTL2_REGS_RANKCTL_max_rank_rd_MASK)
#define UMCTL2_REGS_RANKCTL_diff_rank_rd_gap_MASK (0xF0U)
#define UMCTL2_REGS_RANKCTL_diff_rank_rd_gap_SHIFT (4U)
#define UMCTL2_REGS_RANKCTL_diff_rank_rd_gap_WIDTH (4U)
#define UMCTL2_REGS_RANKCTL_diff_rank_rd_gap(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RANKCTL_diff_rank_rd_gap_SHIFT)) & UMCTL2_REGS_RANKCTL_diff_rank_rd_gap_MASK)
#define UMCTL2_REGS_RANKCTL_diff_rank_wr_gap_MASK (0xF00U)
#define UMCTL2_REGS_RANKCTL_diff_rank_wr_gap_SHIFT (8U)
#define UMCTL2_REGS_RANKCTL_diff_rank_wr_gap_WIDTH (4U)
#define UMCTL2_REGS_RANKCTL_diff_rank_wr_gap(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_RANKCTL_diff_rank_wr_gap_SHIFT)) & UMCTL2_REGS_RANKCTL_diff_rank_wr_gap_MASK)
/*! @} */

/*! @name DRAMTMG0 - DRAM Timing 0 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG0_t_ras_min_MASK      (0x3FU)
#define UMCTL2_REGS_DRAMTMG0_t_ras_min_SHIFT     (0U)
#define UMCTL2_REGS_DRAMTMG0_t_ras_min_WIDTH     (6U)
#define UMCTL2_REGS_DRAMTMG0_t_ras_min(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG0_t_ras_min_SHIFT)) & UMCTL2_REGS_DRAMTMG0_t_ras_min_MASK)
#define UMCTL2_REGS_DRAMTMG0_t_ras_max_MASK      (0x7F00U)
#define UMCTL2_REGS_DRAMTMG0_t_ras_max_SHIFT     (8U)
#define UMCTL2_REGS_DRAMTMG0_t_ras_max_WIDTH     (7U)
#define UMCTL2_REGS_DRAMTMG0_t_ras_max(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG0_t_ras_max_SHIFT)) & UMCTL2_REGS_DRAMTMG0_t_ras_max_MASK)
#define UMCTL2_REGS_DRAMTMG0_t_faw_MASK          (0x3F0000U)
#define UMCTL2_REGS_DRAMTMG0_t_faw_SHIFT         (16U)
#define UMCTL2_REGS_DRAMTMG0_t_faw_WIDTH         (6U)
#define UMCTL2_REGS_DRAMTMG0_t_faw(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG0_t_faw_SHIFT)) & UMCTL2_REGS_DRAMTMG0_t_faw_MASK)
#define UMCTL2_REGS_DRAMTMG0_wr2pre_MASK         (0x7F000000U)
#define UMCTL2_REGS_DRAMTMG0_wr2pre_SHIFT        (24U)
#define UMCTL2_REGS_DRAMTMG0_wr2pre_WIDTH        (7U)
#define UMCTL2_REGS_DRAMTMG0_wr2pre(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG0_wr2pre_SHIFT)) & UMCTL2_REGS_DRAMTMG0_wr2pre_MASK)
/*! @} */

/*! @name DRAMTMG1 - DRAM Timing 1 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG1_t_rc_MASK           (0x7FU)
#define UMCTL2_REGS_DRAMTMG1_t_rc_SHIFT          (0U)
#define UMCTL2_REGS_DRAMTMG1_t_rc_WIDTH          (7U)
#define UMCTL2_REGS_DRAMTMG1_t_rc(x)             (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG1_t_rc_SHIFT)) & UMCTL2_REGS_DRAMTMG1_t_rc_MASK)
#define UMCTL2_REGS_DRAMTMG1_rd2pre_MASK         (0x3F00U)
#define UMCTL2_REGS_DRAMTMG1_rd2pre_SHIFT        (8U)
#define UMCTL2_REGS_DRAMTMG1_rd2pre_WIDTH        (6U)
#define UMCTL2_REGS_DRAMTMG1_rd2pre(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG1_rd2pre_SHIFT)) & UMCTL2_REGS_DRAMTMG1_rd2pre_MASK)
#define UMCTL2_REGS_DRAMTMG1_t_xp_MASK           (0x1F0000U)
#define UMCTL2_REGS_DRAMTMG1_t_xp_SHIFT          (16U)
#define UMCTL2_REGS_DRAMTMG1_t_xp_WIDTH          (5U)
#define UMCTL2_REGS_DRAMTMG1_t_xp(x)             (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG1_t_xp_SHIFT)) & UMCTL2_REGS_DRAMTMG1_t_xp_MASK)
/*! @} */

/*! @name DRAMTMG2 - DRAM Timing 2 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG2_wr2rd_MASK          (0x3FU)
#define UMCTL2_REGS_DRAMTMG2_wr2rd_SHIFT         (0U)
#define UMCTL2_REGS_DRAMTMG2_wr2rd_WIDTH         (6U)
#define UMCTL2_REGS_DRAMTMG2_wr2rd(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG2_wr2rd_SHIFT)) & UMCTL2_REGS_DRAMTMG2_wr2rd_MASK)
#define UMCTL2_REGS_DRAMTMG2_rd2wr_MASK          (0x3F00U)
#define UMCTL2_REGS_DRAMTMG2_rd2wr_SHIFT         (8U)
#define UMCTL2_REGS_DRAMTMG2_rd2wr_WIDTH         (6U)
#define UMCTL2_REGS_DRAMTMG2_rd2wr(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG2_rd2wr_SHIFT)) & UMCTL2_REGS_DRAMTMG2_rd2wr_MASK)
#define UMCTL2_REGS_DRAMTMG2_read_latency_MASK   (0x3F0000U)
#define UMCTL2_REGS_DRAMTMG2_read_latency_SHIFT  (16U)
#define UMCTL2_REGS_DRAMTMG2_read_latency_WIDTH  (6U)
#define UMCTL2_REGS_DRAMTMG2_read_latency(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG2_read_latency_SHIFT)) & UMCTL2_REGS_DRAMTMG2_read_latency_MASK)
#define UMCTL2_REGS_DRAMTMG2_write_latency_MASK  (0x3F000000U)
#define UMCTL2_REGS_DRAMTMG2_write_latency_SHIFT (24U)
#define UMCTL2_REGS_DRAMTMG2_write_latency_WIDTH (6U)
#define UMCTL2_REGS_DRAMTMG2_write_latency(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG2_write_latency_SHIFT)) & UMCTL2_REGS_DRAMTMG2_write_latency_MASK)
/*! @} */

/*! @name DRAMTMG3 - DRAM Timing 3 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG3_t_mod_MASK          (0x3FFU)
#define UMCTL2_REGS_DRAMTMG3_t_mod_SHIFT         (0U)
#define UMCTL2_REGS_DRAMTMG3_t_mod_WIDTH         (10U)
#define UMCTL2_REGS_DRAMTMG3_t_mod(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG3_t_mod_SHIFT)) & UMCTL2_REGS_DRAMTMG3_t_mod_MASK)
#define UMCTL2_REGS_DRAMTMG3_t_mrd_MASK          (0x3F000U)
#define UMCTL2_REGS_DRAMTMG3_t_mrd_SHIFT         (12U)
#define UMCTL2_REGS_DRAMTMG3_t_mrd_WIDTH         (6U)
#define UMCTL2_REGS_DRAMTMG3_t_mrd(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG3_t_mrd_SHIFT)) & UMCTL2_REGS_DRAMTMG3_t_mrd_MASK)
#define UMCTL2_REGS_DRAMTMG3_t_mrw_MASK          (0x3FF00000U)
#define UMCTL2_REGS_DRAMTMG3_t_mrw_SHIFT         (20U)
#define UMCTL2_REGS_DRAMTMG3_t_mrw_WIDTH         (10U)
#define UMCTL2_REGS_DRAMTMG3_t_mrw(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG3_t_mrw_SHIFT)) & UMCTL2_REGS_DRAMTMG3_t_mrw_MASK)
/*! @} */

/*! @name DRAMTMG4 - DRAM Timing 4 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG4_t_rp_MASK           (0x1FU)
#define UMCTL2_REGS_DRAMTMG4_t_rp_SHIFT          (0U)
#define UMCTL2_REGS_DRAMTMG4_t_rp_WIDTH          (5U)
#define UMCTL2_REGS_DRAMTMG4_t_rp(x)             (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG4_t_rp_SHIFT)) & UMCTL2_REGS_DRAMTMG4_t_rp_MASK)
#define UMCTL2_REGS_DRAMTMG4_t_rrd_MASK          (0xF00U)
#define UMCTL2_REGS_DRAMTMG4_t_rrd_SHIFT         (8U)
#define UMCTL2_REGS_DRAMTMG4_t_rrd_WIDTH         (4U)
#define UMCTL2_REGS_DRAMTMG4_t_rrd(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG4_t_rrd_SHIFT)) & UMCTL2_REGS_DRAMTMG4_t_rrd_MASK)
#define UMCTL2_REGS_DRAMTMG4_t_ccd_MASK          (0xF0000U)
#define UMCTL2_REGS_DRAMTMG4_t_ccd_SHIFT         (16U)
#define UMCTL2_REGS_DRAMTMG4_t_ccd_WIDTH         (4U)
#define UMCTL2_REGS_DRAMTMG4_t_ccd(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG4_t_ccd_SHIFT)) & UMCTL2_REGS_DRAMTMG4_t_ccd_MASK)
#define UMCTL2_REGS_DRAMTMG4_t_rcd_MASK          (0x1F000000U)
#define UMCTL2_REGS_DRAMTMG4_t_rcd_SHIFT         (24U)
#define UMCTL2_REGS_DRAMTMG4_t_rcd_WIDTH         (5U)
#define UMCTL2_REGS_DRAMTMG4_t_rcd(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG4_t_rcd_SHIFT)) & UMCTL2_REGS_DRAMTMG4_t_rcd_MASK)
/*! @} */

/*! @name DRAMTMG5 - DRAM Timing 5 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG5_t_cke_MASK          (0x1FU)
#define UMCTL2_REGS_DRAMTMG5_t_cke_SHIFT         (0U)
#define UMCTL2_REGS_DRAMTMG5_t_cke_WIDTH         (5U)
#define UMCTL2_REGS_DRAMTMG5_t_cke(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG5_t_cke_SHIFT)) & UMCTL2_REGS_DRAMTMG5_t_cke_MASK)
#define UMCTL2_REGS_DRAMTMG5_t_ckesr_MASK        (0x3F00U)
#define UMCTL2_REGS_DRAMTMG5_t_ckesr_SHIFT       (8U)
#define UMCTL2_REGS_DRAMTMG5_t_ckesr_WIDTH       (6U)
#define UMCTL2_REGS_DRAMTMG5_t_ckesr(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG5_t_ckesr_SHIFT)) & UMCTL2_REGS_DRAMTMG5_t_ckesr_MASK)
#define UMCTL2_REGS_DRAMTMG5_t_cksre_MASK        (0xF0000U)
#define UMCTL2_REGS_DRAMTMG5_t_cksre_SHIFT       (16U)
#define UMCTL2_REGS_DRAMTMG5_t_cksre_WIDTH       (4U)
#define UMCTL2_REGS_DRAMTMG5_t_cksre(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG5_t_cksre_SHIFT)) & UMCTL2_REGS_DRAMTMG5_t_cksre_MASK)
#define UMCTL2_REGS_DRAMTMG5_t_cksrx_MASK        (0xF000000U)
#define UMCTL2_REGS_DRAMTMG5_t_cksrx_SHIFT       (24U)
#define UMCTL2_REGS_DRAMTMG5_t_cksrx_WIDTH       (4U)
#define UMCTL2_REGS_DRAMTMG5_t_cksrx(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG5_t_cksrx_SHIFT)) & UMCTL2_REGS_DRAMTMG5_t_cksrx_MASK)
/*! @} */

/*! @name DRAMTMG6 - DRAM Timing 6 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG6_t_ckcsx_MASK        (0xFU)
#define UMCTL2_REGS_DRAMTMG6_t_ckcsx_SHIFT       (0U)
#define UMCTL2_REGS_DRAMTMG6_t_ckcsx_WIDTH       (4U)
#define UMCTL2_REGS_DRAMTMG6_t_ckcsx(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG6_t_ckcsx_SHIFT)) & UMCTL2_REGS_DRAMTMG6_t_ckcsx_MASK)
#define UMCTL2_REGS_DRAMTMG6_t_ckdpdx_MASK       (0xF0000U)
#define UMCTL2_REGS_DRAMTMG6_t_ckdpdx_SHIFT      (16U)
#define UMCTL2_REGS_DRAMTMG6_t_ckdpdx_WIDTH      (4U)
#define UMCTL2_REGS_DRAMTMG6_t_ckdpdx(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG6_t_ckdpdx_SHIFT)) & UMCTL2_REGS_DRAMTMG6_t_ckdpdx_MASK)
#define UMCTL2_REGS_DRAMTMG6_t_ckdpde_MASK       (0xF000000U)
#define UMCTL2_REGS_DRAMTMG6_t_ckdpde_SHIFT      (24U)
#define UMCTL2_REGS_DRAMTMG6_t_ckdpde_WIDTH      (4U)
#define UMCTL2_REGS_DRAMTMG6_t_ckdpde(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG6_t_ckdpde_SHIFT)) & UMCTL2_REGS_DRAMTMG6_t_ckdpde_MASK)
/*! @} */

/*! @name DRAMTMG7 - DRAM Timing 7 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG7_t_ckpdx_MASK        (0xFU)
#define UMCTL2_REGS_DRAMTMG7_t_ckpdx_SHIFT       (0U)
#define UMCTL2_REGS_DRAMTMG7_t_ckpdx_WIDTH       (4U)
#define UMCTL2_REGS_DRAMTMG7_t_ckpdx(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG7_t_ckpdx_SHIFT)) & UMCTL2_REGS_DRAMTMG7_t_ckpdx_MASK)
#define UMCTL2_REGS_DRAMTMG7_t_ckpde_MASK        (0xF00U)
#define UMCTL2_REGS_DRAMTMG7_t_ckpde_SHIFT       (8U)
#define UMCTL2_REGS_DRAMTMG7_t_ckpde_WIDTH       (4U)
#define UMCTL2_REGS_DRAMTMG7_t_ckpde(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG7_t_ckpde_SHIFT)) & UMCTL2_REGS_DRAMTMG7_t_ckpde_MASK)
/*! @} */

/*! @name DRAMTMG8 - DRAM Timing 8 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG8_t_xs_x32_MASK       (0x7FU)
#define UMCTL2_REGS_DRAMTMG8_t_xs_x32_SHIFT      (0U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_x32_WIDTH      (7U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_x32(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG8_t_xs_x32_SHIFT)) & UMCTL2_REGS_DRAMTMG8_t_xs_x32_MASK)
#define UMCTL2_REGS_DRAMTMG8_t_xs_dll_x32_MASK   (0x7F00U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_dll_x32_SHIFT  (8U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_dll_x32_WIDTH  (7U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_dll_x32(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG8_t_xs_dll_x32_SHIFT)) & UMCTL2_REGS_DRAMTMG8_t_xs_dll_x32_MASK)
#define UMCTL2_REGS_DRAMTMG8_t_xs_abort_x32_MASK (0x7F0000U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_abort_x32_SHIFT (16U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_abort_x32_WIDTH (7U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_abort_x32(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG8_t_xs_abort_x32_SHIFT)) & UMCTL2_REGS_DRAMTMG8_t_xs_abort_x32_MASK)
#define UMCTL2_REGS_DRAMTMG8_t_xs_fast_x32_MASK  (0x7F000000U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_fast_x32_SHIFT (24U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_fast_x32_WIDTH (7U)
#define UMCTL2_REGS_DRAMTMG8_t_xs_fast_x32(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG8_t_xs_fast_x32_SHIFT)) & UMCTL2_REGS_DRAMTMG8_t_xs_fast_x32_MASK)
/*! @} */

/*! @name DRAMTMG9 - DRAM Timing 9 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG9_wr2rd_s_MASK        (0x3FU)
#define UMCTL2_REGS_DRAMTMG9_wr2rd_s_SHIFT       (0U)
#define UMCTL2_REGS_DRAMTMG9_wr2rd_s_WIDTH       (6U)
#define UMCTL2_REGS_DRAMTMG9_wr2rd_s(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG9_wr2rd_s_SHIFT)) & UMCTL2_REGS_DRAMTMG9_wr2rd_s_MASK)
#define UMCTL2_REGS_DRAMTMG9_t_rrd_s_MASK        (0xF00U)
#define UMCTL2_REGS_DRAMTMG9_t_rrd_s_SHIFT       (8U)
#define UMCTL2_REGS_DRAMTMG9_t_rrd_s_WIDTH       (4U)
#define UMCTL2_REGS_DRAMTMG9_t_rrd_s(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG9_t_rrd_s_SHIFT)) & UMCTL2_REGS_DRAMTMG9_t_rrd_s_MASK)
#define UMCTL2_REGS_DRAMTMG9_t_ccd_s_MASK        (0x70000U)
#define UMCTL2_REGS_DRAMTMG9_t_ccd_s_SHIFT       (16U)
#define UMCTL2_REGS_DRAMTMG9_t_ccd_s_WIDTH       (3U)
#define UMCTL2_REGS_DRAMTMG9_t_ccd_s(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG9_t_ccd_s_SHIFT)) & UMCTL2_REGS_DRAMTMG9_t_ccd_s_MASK)
#define UMCTL2_REGS_DRAMTMG9_ddr4_wr_preamble_MASK (0x40000000U)
#define UMCTL2_REGS_DRAMTMG9_ddr4_wr_preamble_SHIFT (30U)
#define UMCTL2_REGS_DRAMTMG9_ddr4_wr_preamble_WIDTH (1U)
#define UMCTL2_REGS_DRAMTMG9_ddr4_wr_preamble(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG9_ddr4_wr_preamble_SHIFT)) & UMCTL2_REGS_DRAMTMG9_ddr4_wr_preamble_MASK)
/*! @} */

/*! @name DRAMTMG10 - DRAM Timing 10 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG10_t_gear_hold_MASK   (0x3U)
#define UMCTL2_REGS_DRAMTMG10_t_gear_hold_SHIFT  (0U)
#define UMCTL2_REGS_DRAMTMG10_t_gear_hold_WIDTH  (2U)
#define UMCTL2_REGS_DRAMTMG10_t_gear_hold(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG10_t_gear_hold_SHIFT)) & UMCTL2_REGS_DRAMTMG10_t_gear_hold_MASK)
#define UMCTL2_REGS_DRAMTMG10_t_gear_setup_MASK  (0xCU)
#define UMCTL2_REGS_DRAMTMG10_t_gear_setup_SHIFT (2U)
#define UMCTL2_REGS_DRAMTMG10_t_gear_setup_WIDTH (2U)
#define UMCTL2_REGS_DRAMTMG10_t_gear_setup(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG10_t_gear_setup_SHIFT)) & UMCTL2_REGS_DRAMTMG10_t_gear_setup_MASK)
#define UMCTL2_REGS_DRAMTMG10_t_cmd_gear_MASK    (0x1F00U)
#define UMCTL2_REGS_DRAMTMG10_t_cmd_gear_SHIFT   (8U)
#define UMCTL2_REGS_DRAMTMG10_t_cmd_gear_WIDTH   (5U)
#define UMCTL2_REGS_DRAMTMG10_t_cmd_gear(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG10_t_cmd_gear_SHIFT)) & UMCTL2_REGS_DRAMTMG10_t_cmd_gear_MASK)
#define UMCTL2_REGS_DRAMTMG10_t_sync_gear_MASK   (0x1F0000U)
#define UMCTL2_REGS_DRAMTMG10_t_sync_gear_SHIFT  (16U)
#define UMCTL2_REGS_DRAMTMG10_t_sync_gear_WIDTH  (5U)
#define UMCTL2_REGS_DRAMTMG10_t_sync_gear(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG10_t_sync_gear_SHIFT)) & UMCTL2_REGS_DRAMTMG10_t_sync_gear_MASK)
/*! @} */

/*! @name DRAMTMG11 - DRAM Timing 11 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG11_t_ckmpe_MASK       (0x1FU)
#define UMCTL2_REGS_DRAMTMG11_t_ckmpe_SHIFT      (0U)
#define UMCTL2_REGS_DRAMTMG11_t_ckmpe_WIDTH      (5U)
#define UMCTL2_REGS_DRAMTMG11_t_ckmpe(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG11_t_ckmpe_SHIFT)) & UMCTL2_REGS_DRAMTMG11_t_ckmpe_MASK)
#define UMCTL2_REGS_DRAMTMG11_t_mpx_s_MASK       (0x300U)
#define UMCTL2_REGS_DRAMTMG11_t_mpx_s_SHIFT      (8U)
#define UMCTL2_REGS_DRAMTMG11_t_mpx_s_WIDTH      (2U)
#define UMCTL2_REGS_DRAMTMG11_t_mpx_s(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG11_t_mpx_s_SHIFT)) & UMCTL2_REGS_DRAMTMG11_t_mpx_s_MASK)
#define UMCTL2_REGS_DRAMTMG11_t_mpx_lh_MASK      (0x1F0000U)
#define UMCTL2_REGS_DRAMTMG11_t_mpx_lh_SHIFT     (16U)
#define UMCTL2_REGS_DRAMTMG11_t_mpx_lh_WIDTH     (5U)
#define UMCTL2_REGS_DRAMTMG11_t_mpx_lh(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG11_t_mpx_lh_SHIFT)) & UMCTL2_REGS_DRAMTMG11_t_mpx_lh_MASK)
#define UMCTL2_REGS_DRAMTMG11_post_mpsm_gap_x32_MASK (0x7F000000U)
#define UMCTL2_REGS_DRAMTMG11_post_mpsm_gap_x32_SHIFT (24U)
#define UMCTL2_REGS_DRAMTMG11_post_mpsm_gap_x32_WIDTH (7U)
#define UMCTL2_REGS_DRAMTMG11_post_mpsm_gap_x32(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG11_post_mpsm_gap_x32_SHIFT)) & UMCTL2_REGS_DRAMTMG11_post_mpsm_gap_x32_MASK)
/*! @} */

/*! @name DRAMTMG12 - DRAM Timing 12 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG12_t_mrd_pda_MASK     (0x1FU)
#define UMCTL2_REGS_DRAMTMG12_t_mrd_pda_SHIFT    (0U)
#define UMCTL2_REGS_DRAMTMG12_t_mrd_pda_WIDTH    (5U)
#define UMCTL2_REGS_DRAMTMG12_t_mrd_pda(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG12_t_mrd_pda_SHIFT)) & UMCTL2_REGS_DRAMTMG12_t_mrd_pda_MASK)
#define UMCTL2_REGS_DRAMTMG12_t_cmdcke_MASK      (0x30000U)
#define UMCTL2_REGS_DRAMTMG12_t_cmdcke_SHIFT     (16U)
#define UMCTL2_REGS_DRAMTMG12_t_cmdcke_WIDTH     (2U)
#define UMCTL2_REGS_DRAMTMG12_t_cmdcke(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG12_t_cmdcke_SHIFT)) & UMCTL2_REGS_DRAMTMG12_t_cmdcke_MASK)
/*! @} */

/*! @name DRAMTMG13 - DRAM Timing 13 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG13_t_ppd_MASK         (0x7U)
#define UMCTL2_REGS_DRAMTMG13_t_ppd_SHIFT        (0U)
#define UMCTL2_REGS_DRAMTMG13_t_ppd_WIDTH        (3U)
#define UMCTL2_REGS_DRAMTMG13_t_ppd(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG13_t_ppd_SHIFT)) & UMCTL2_REGS_DRAMTMG13_t_ppd_MASK)
#define UMCTL2_REGS_DRAMTMG13_t_ccd_mw_MASK      (0x3F0000U)
#define UMCTL2_REGS_DRAMTMG13_t_ccd_mw_SHIFT     (16U)
#define UMCTL2_REGS_DRAMTMG13_t_ccd_mw_WIDTH     (6U)
#define UMCTL2_REGS_DRAMTMG13_t_ccd_mw(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG13_t_ccd_mw_SHIFT)) & UMCTL2_REGS_DRAMTMG13_t_ccd_mw_MASK)
#define UMCTL2_REGS_DRAMTMG13_odtloff_MASK       (0x7F000000U)
#define UMCTL2_REGS_DRAMTMG13_odtloff_SHIFT      (24U)
#define UMCTL2_REGS_DRAMTMG13_odtloff_WIDTH      (7U)
#define UMCTL2_REGS_DRAMTMG13_odtloff(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG13_odtloff_SHIFT)) & UMCTL2_REGS_DRAMTMG13_odtloff_MASK)
/*! @} */

/*! @name DRAMTMG14 - DRAM Timing 14 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG14_t_xsr_MASK         (0xFFFU)
#define UMCTL2_REGS_DRAMTMG14_t_xsr_SHIFT        (0U)
#define UMCTL2_REGS_DRAMTMG14_t_xsr_WIDTH        (12U)
#define UMCTL2_REGS_DRAMTMG14_t_xsr(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG14_t_xsr_SHIFT)) & UMCTL2_REGS_DRAMTMG14_t_xsr_MASK)
/*! @} */

/*! @name DRAMTMG15 - DRAM Timing 15 */
/*! @{ */
#define UMCTL2_REGS_DRAMTMG15_t_stab_x32_MASK    (0xFFU)
#define UMCTL2_REGS_DRAMTMG15_t_stab_x32_SHIFT   (0U)
#define UMCTL2_REGS_DRAMTMG15_t_stab_x32_WIDTH   (8U)
#define UMCTL2_REGS_DRAMTMG15_t_stab_x32(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG15_t_stab_x32_SHIFT)) & UMCTL2_REGS_DRAMTMG15_t_stab_x32_MASK)
#define UMCTL2_REGS_DRAMTMG15_en_dfi_lp_t_stab_MASK (0x80000000U)
#define UMCTL2_REGS_DRAMTMG15_en_dfi_lp_t_stab_SHIFT (31U)
#define UMCTL2_REGS_DRAMTMG15_en_dfi_lp_t_stab_WIDTH (1U)
#define UMCTL2_REGS_DRAMTMG15_en_dfi_lp_t_stab(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DRAMTMG15_en_dfi_lp_t_stab_SHIFT)) & UMCTL2_REGS_DRAMTMG15_en_dfi_lp_t_stab_MASK)
/*! @} */

/*! @name ZQCTL0 - ZQ Control 0 */
/*! @{ */
#define UMCTL2_REGS_ZQCTL0_t_zq_short_nop_MASK   (0x3FFU)
#define UMCTL2_REGS_ZQCTL0_t_zq_short_nop_SHIFT  (0U)
#define UMCTL2_REGS_ZQCTL0_t_zq_short_nop_WIDTH  (10U)
#define UMCTL2_REGS_ZQCTL0_t_zq_short_nop(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQCTL0_t_zq_short_nop_SHIFT)) & UMCTL2_REGS_ZQCTL0_t_zq_short_nop_MASK)
#define UMCTL2_REGS_ZQCTL0_t_zq_long_nop_MASK    (0x7FF0000U)
#define UMCTL2_REGS_ZQCTL0_t_zq_long_nop_SHIFT   (16U)
#define UMCTL2_REGS_ZQCTL0_t_zq_long_nop_WIDTH   (11U)
#define UMCTL2_REGS_ZQCTL0_t_zq_long_nop(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQCTL0_t_zq_long_nop_SHIFT)) & UMCTL2_REGS_ZQCTL0_t_zq_long_nop_MASK)
#define UMCTL2_REGS_ZQCTL0_dis_mpsmx_zqcl_MASK   (0x10000000U)
#define UMCTL2_REGS_ZQCTL0_dis_mpsmx_zqcl_SHIFT  (28U)
#define UMCTL2_REGS_ZQCTL0_dis_mpsmx_zqcl_WIDTH  (1U)
#define UMCTL2_REGS_ZQCTL0_dis_mpsmx_zqcl(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQCTL0_dis_mpsmx_zqcl_SHIFT)) & UMCTL2_REGS_ZQCTL0_dis_mpsmx_zqcl_MASK)
#define UMCTL2_REGS_ZQCTL0_zq_resistor_shared_MASK (0x20000000U)
#define UMCTL2_REGS_ZQCTL0_zq_resistor_shared_SHIFT (29U)
#define UMCTL2_REGS_ZQCTL0_zq_resistor_shared_WIDTH (1U)
#define UMCTL2_REGS_ZQCTL0_zq_resistor_shared(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQCTL0_zq_resistor_shared_SHIFT)) & UMCTL2_REGS_ZQCTL0_zq_resistor_shared_MASK)
#define UMCTL2_REGS_ZQCTL0_dis_srx_zqcl_MASK     (0x40000000U)
#define UMCTL2_REGS_ZQCTL0_dis_srx_zqcl_SHIFT    (30U)
#define UMCTL2_REGS_ZQCTL0_dis_srx_zqcl_WIDTH    (1U)
#define UMCTL2_REGS_ZQCTL0_dis_srx_zqcl(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQCTL0_dis_srx_zqcl_SHIFT)) & UMCTL2_REGS_ZQCTL0_dis_srx_zqcl_MASK)
#define UMCTL2_REGS_ZQCTL0_dis_auto_zq_MASK      (0x80000000U)
#define UMCTL2_REGS_ZQCTL0_dis_auto_zq_SHIFT     (31U)
#define UMCTL2_REGS_ZQCTL0_dis_auto_zq_WIDTH     (1U)
#define UMCTL2_REGS_ZQCTL0_dis_auto_zq(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQCTL0_dis_auto_zq_SHIFT)) & UMCTL2_REGS_ZQCTL0_dis_auto_zq_MASK)
/*! @} */

/*! @name ZQCTL1 - ZQ Control 1 */
/*! @{ */
#define UMCTL2_REGS_ZQCTL1_t_zq_short_interval_x1024_MASK (0xFFFFFU)
#define UMCTL2_REGS_ZQCTL1_t_zq_short_interval_x1024_SHIFT (0U)
#define UMCTL2_REGS_ZQCTL1_t_zq_short_interval_x1024_WIDTH (20U)
#define UMCTL2_REGS_ZQCTL1_t_zq_short_interval_x1024(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQCTL1_t_zq_short_interval_x1024_SHIFT)) & UMCTL2_REGS_ZQCTL1_t_zq_short_interval_x1024_MASK)
#define UMCTL2_REGS_ZQCTL1_t_zq_reset_nop_MASK   (0x3FF00000U)
#define UMCTL2_REGS_ZQCTL1_t_zq_reset_nop_SHIFT  (20U)
#define UMCTL2_REGS_ZQCTL1_t_zq_reset_nop_WIDTH  (10U)
#define UMCTL2_REGS_ZQCTL1_t_zq_reset_nop(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQCTL1_t_zq_reset_nop_SHIFT)) & UMCTL2_REGS_ZQCTL1_t_zq_reset_nop_MASK)
/*! @} */

/*! @name ZQCTL2 - ZQ Control 2 */
/*! @{ */
#define UMCTL2_REGS_ZQCTL2_zq_reset_MASK         (0x1U)
#define UMCTL2_REGS_ZQCTL2_zq_reset_SHIFT        (0U)
#define UMCTL2_REGS_ZQCTL2_zq_reset_WIDTH        (1U)
#define UMCTL2_REGS_ZQCTL2_zq_reset(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQCTL2_zq_reset_SHIFT)) & UMCTL2_REGS_ZQCTL2_zq_reset_MASK)
/*! @} */

/*! @name ZQSTAT - ZQ Status */
/*! @{ */
#define UMCTL2_REGS_ZQSTAT_zq_reset_busy_MASK    (0x1U)
#define UMCTL2_REGS_ZQSTAT_zq_reset_busy_SHIFT   (0U)
#define UMCTL2_REGS_ZQSTAT_zq_reset_busy_WIDTH   (1U)
#define UMCTL2_REGS_ZQSTAT_zq_reset_busy(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ZQSTAT_zq_reset_busy_SHIFT)) & UMCTL2_REGS_ZQSTAT_zq_reset_busy_MASK)
/*! @} */

/*! @name DFITMG0 - DFI Timing 0 */
/*! @{ */
#define UMCTL2_REGS_DFITMG0_dfi_tphy_wrlat_MASK  (0x3FU)
#define UMCTL2_REGS_DFITMG0_dfi_tphy_wrlat_SHIFT (0U)
#define UMCTL2_REGS_DFITMG0_dfi_tphy_wrlat_WIDTH (6U)
#define UMCTL2_REGS_DFITMG0_dfi_tphy_wrlat(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG0_dfi_tphy_wrlat_SHIFT)) & UMCTL2_REGS_DFITMG0_dfi_tphy_wrlat_MASK)
#define UMCTL2_REGS_DFITMG0_dfi_tphy_wrdata_MASK (0x3F00U)
#define UMCTL2_REGS_DFITMG0_dfi_tphy_wrdata_SHIFT (8U)
#define UMCTL2_REGS_DFITMG0_dfi_tphy_wrdata_WIDTH (6U)
#define UMCTL2_REGS_DFITMG0_dfi_tphy_wrdata(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG0_dfi_tphy_wrdata_SHIFT)) & UMCTL2_REGS_DFITMG0_dfi_tphy_wrdata_MASK)
#define UMCTL2_REGS_DFITMG0_dfi_wrdata_use_dfi_phy_clk_MASK (0x8000U)
#define UMCTL2_REGS_DFITMG0_dfi_wrdata_use_dfi_phy_clk_SHIFT (15U)
#define UMCTL2_REGS_DFITMG0_dfi_wrdata_use_dfi_phy_clk_WIDTH (1U)
#define UMCTL2_REGS_DFITMG0_dfi_wrdata_use_dfi_phy_clk(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG0_dfi_wrdata_use_dfi_phy_clk_SHIFT)) & UMCTL2_REGS_DFITMG0_dfi_wrdata_use_dfi_phy_clk_MASK)
#define UMCTL2_REGS_DFITMG0_dfi_t_rddata_en_MASK (0x7F0000U)
#define UMCTL2_REGS_DFITMG0_dfi_t_rddata_en_SHIFT (16U)
#define UMCTL2_REGS_DFITMG0_dfi_t_rddata_en_WIDTH (7U)
#define UMCTL2_REGS_DFITMG0_dfi_t_rddata_en(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG0_dfi_t_rddata_en_SHIFT)) & UMCTL2_REGS_DFITMG0_dfi_t_rddata_en_MASK)
#define UMCTL2_REGS_DFITMG0_dfi_rddata_use_dfi_phy_clk_MASK (0x800000U)
#define UMCTL2_REGS_DFITMG0_dfi_rddata_use_dfi_phy_clk_SHIFT (23U)
#define UMCTL2_REGS_DFITMG0_dfi_rddata_use_dfi_phy_clk_WIDTH (1U)
#define UMCTL2_REGS_DFITMG0_dfi_rddata_use_dfi_phy_clk(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG0_dfi_rddata_use_dfi_phy_clk_SHIFT)) & UMCTL2_REGS_DFITMG0_dfi_rddata_use_dfi_phy_clk_MASK)
#define UMCTL2_REGS_DFITMG0_dfi_t_ctrl_delay_MASK (0x1F000000U)
#define UMCTL2_REGS_DFITMG0_dfi_t_ctrl_delay_SHIFT (24U)
#define UMCTL2_REGS_DFITMG0_dfi_t_ctrl_delay_WIDTH (5U)
#define UMCTL2_REGS_DFITMG0_dfi_t_ctrl_delay(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG0_dfi_t_ctrl_delay_SHIFT)) & UMCTL2_REGS_DFITMG0_dfi_t_ctrl_delay_MASK)
/*! @} */

/*! @name DFITMG1 - DFI Timing 1 */
/*! @{ */
#define UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_enable_MASK (0x1FU)
#define UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_enable_SHIFT (0U)
#define UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_enable_WIDTH (5U)
#define UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_enable(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_enable_SHIFT)) & UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_enable_MASK)
#define UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_disable_MASK (0x1F00U)
#define UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_disable_SHIFT (8U)
#define UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_disable_WIDTH (5U)
#define UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_disable(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_disable_SHIFT)) & UMCTL2_REGS_DFITMG1_dfi_t_dram_clk_disable_MASK)
#define UMCTL2_REGS_DFITMG1_dfi_t_wrdata_delay_MASK (0x1F0000U)
#define UMCTL2_REGS_DFITMG1_dfi_t_wrdata_delay_SHIFT (16U)
#define UMCTL2_REGS_DFITMG1_dfi_t_wrdata_delay_WIDTH (5U)
#define UMCTL2_REGS_DFITMG1_dfi_t_wrdata_delay(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG1_dfi_t_wrdata_delay_SHIFT)) & UMCTL2_REGS_DFITMG1_dfi_t_wrdata_delay_MASK)
#define UMCTL2_REGS_DFITMG1_dfi_t_parin_lat_MASK (0x3000000U)
#define UMCTL2_REGS_DFITMG1_dfi_t_parin_lat_SHIFT (24U)
#define UMCTL2_REGS_DFITMG1_dfi_t_parin_lat_WIDTH (2U)
#define UMCTL2_REGS_DFITMG1_dfi_t_parin_lat(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG1_dfi_t_parin_lat_SHIFT)) & UMCTL2_REGS_DFITMG1_dfi_t_parin_lat_MASK)
#define UMCTL2_REGS_DFITMG1_dfi_t_cmd_lat_MASK   (0xF0000000U)
#define UMCTL2_REGS_DFITMG1_dfi_t_cmd_lat_SHIFT  (28U)
#define UMCTL2_REGS_DFITMG1_dfi_t_cmd_lat_WIDTH  (4U)
#define UMCTL2_REGS_DFITMG1_dfi_t_cmd_lat(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG1_dfi_t_cmd_lat_SHIFT)) & UMCTL2_REGS_DFITMG1_dfi_t_cmd_lat_MASK)
/*! @} */

/*! @name DFILPCFG0 - DFI Low Power Configuration 0 */
/*! @{ */
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_pd_MASK  (0x1U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_pd_SHIFT (0U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_pd_WIDTH (1U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_pd(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFILPCFG0_dfi_lp_en_pd_SHIFT)) & UMCTL2_REGS_DFILPCFG0_dfi_lp_en_pd_MASK)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_pd_MASK (0xF0U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_pd_SHIFT (4U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_pd_WIDTH (4U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_pd(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_pd_SHIFT)) & UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_pd_MASK)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_sr_MASK  (0x100U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_sr_SHIFT (8U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_sr_WIDTH (1U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_sr(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFILPCFG0_dfi_lp_en_sr_SHIFT)) & UMCTL2_REGS_DFILPCFG0_dfi_lp_en_sr_MASK)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_sr_MASK (0xF000U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_sr_SHIFT (12U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_sr_WIDTH (4U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_sr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_sr_SHIFT)) & UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_sr_MASK)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_dpd_MASK (0x10000U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_dpd_SHIFT (16U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_dpd_WIDTH (1U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_en_dpd(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFILPCFG0_dfi_lp_en_dpd_SHIFT)) & UMCTL2_REGS_DFILPCFG0_dfi_lp_en_dpd_MASK)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_dpd_MASK (0xF00000U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_dpd_SHIFT (20U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_dpd_WIDTH (4U)
#define UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_dpd(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_dpd_SHIFT)) & UMCTL2_REGS_DFILPCFG0_dfi_lp_wakeup_dpd_MASK)
#define UMCTL2_REGS_DFILPCFG0_dfi_tlp_resp_MASK  (0x1F000000U)
#define UMCTL2_REGS_DFILPCFG0_dfi_tlp_resp_SHIFT (24U)
#define UMCTL2_REGS_DFILPCFG0_dfi_tlp_resp_WIDTH (5U)
#define UMCTL2_REGS_DFILPCFG0_dfi_tlp_resp(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFILPCFG0_dfi_tlp_resp_SHIFT)) & UMCTL2_REGS_DFILPCFG0_dfi_tlp_resp_MASK)
/*! @} */

/*! @name DFILPCFG1 - DFI Low Power Configuration 1 */
/*! @{ */
#define UMCTL2_REGS_DFILPCFG1_dfi_lp_en_mpsm_MASK (0x1U)
#define UMCTL2_REGS_DFILPCFG1_dfi_lp_en_mpsm_SHIFT (0U)
#define UMCTL2_REGS_DFILPCFG1_dfi_lp_en_mpsm_WIDTH (1U)
#define UMCTL2_REGS_DFILPCFG1_dfi_lp_en_mpsm(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFILPCFG1_dfi_lp_en_mpsm_SHIFT)) & UMCTL2_REGS_DFILPCFG1_dfi_lp_en_mpsm_MASK)
#define UMCTL2_REGS_DFILPCFG1_dfi_lp_wakeup_mpsm_MASK (0xF0U)
#define UMCTL2_REGS_DFILPCFG1_dfi_lp_wakeup_mpsm_SHIFT (4U)
#define UMCTL2_REGS_DFILPCFG1_dfi_lp_wakeup_mpsm_WIDTH (4U)
#define UMCTL2_REGS_DFILPCFG1_dfi_lp_wakeup_mpsm(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFILPCFG1_dfi_lp_wakeup_mpsm_SHIFT)) & UMCTL2_REGS_DFILPCFG1_dfi_lp_wakeup_mpsm_MASK)
/*! @} */

/*! @name DFIUPD0 - DFI Update 0 */
/*! @{ */
#define UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_min_MASK (0x3FFU)
#define UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_min_SHIFT (0U)
#define UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_min_WIDTH (10U)
#define UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_min(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_min_SHIFT)) & UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_min_MASK)
#define UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_max_MASK (0x3FF0000U)
#define UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_max_SHIFT (16U)
#define UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_max_WIDTH (10U)
#define UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_max(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_max_SHIFT)) & UMCTL2_REGS_DFIUPD0_dfi_t_ctrlup_max_MASK)
#define UMCTL2_REGS_DFIUPD0_ctrlupd_pre_srx_MASK (0x20000000U)
#define UMCTL2_REGS_DFIUPD0_ctrlupd_pre_srx_SHIFT (29U)
#define UMCTL2_REGS_DFIUPD0_ctrlupd_pre_srx_WIDTH (1U)
#define UMCTL2_REGS_DFIUPD0_ctrlupd_pre_srx(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIUPD0_ctrlupd_pre_srx_SHIFT)) & UMCTL2_REGS_DFIUPD0_ctrlupd_pre_srx_MASK)
#define UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_srx_MASK (0x40000000U)
#define UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_srx_SHIFT (30U)
#define UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_srx_WIDTH (1U)
#define UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_srx(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_srx_SHIFT)) & UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_srx_MASK)
#define UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_MASK (0x80000000U)
#define UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_SHIFT (31U)
#define UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_WIDTH (1U)
#define UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_SHIFT)) & UMCTL2_REGS_DFIUPD0_dis_auto_ctrlupd_MASK)
/*! @} */

/*! @name DFIUPD1 - DFI Update 1 */
/*! @{ */
#define UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_max_x1024_MASK (0xFFU)
#define UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_max_x1024_SHIFT (0U)
#define UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_max_x1024_WIDTH (8U)
#define UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_max_x1024(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_max_x1024_SHIFT)) & UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_max_x1024_MASK)
#define UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_min_x1024_MASK (0xFF0000U)
#define UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_min_x1024_SHIFT (16U)
#define UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_min_x1024_WIDTH (8U)
#define UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_min_x1024(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_min_x1024_SHIFT)) & UMCTL2_REGS_DFIUPD1_dfi_t_ctrlupd_interval_min_x1024_MASK)
/*! @} */

/*! @name DFIUPD2 - DFI Update 2 */
/*! @{ */
#define UMCTL2_REGS_DFIUPD2_dfi_phyupd_en_MASK   (0x80000000U)
#define UMCTL2_REGS_DFIUPD2_dfi_phyupd_en_SHIFT  (31U)
#define UMCTL2_REGS_DFIUPD2_dfi_phyupd_en_WIDTH  (1U)
#define UMCTL2_REGS_DFIUPD2_dfi_phyupd_en(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIUPD2_dfi_phyupd_en_SHIFT)) & UMCTL2_REGS_DFIUPD2_dfi_phyupd_en_MASK)
/*! @} */

/*! @name DFIMISC - DFI Miscellaneous Control */
/*! @{ */
#define UMCTL2_REGS_DFIMISC_dfi_init_complete_en_MASK (0x1U)
#define UMCTL2_REGS_DFIMISC_dfi_init_complete_en_SHIFT (0U)
#define UMCTL2_REGS_DFIMISC_dfi_init_complete_en_WIDTH (1U)
#define UMCTL2_REGS_DFIMISC_dfi_init_complete_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIMISC_dfi_init_complete_en_SHIFT)) & UMCTL2_REGS_DFIMISC_dfi_init_complete_en_MASK)
#define UMCTL2_REGS_DFIMISC_phy_dbi_mode_MASK    (0x2U)
#define UMCTL2_REGS_DFIMISC_phy_dbi_mode_SHIFT   (1U)
#define UMCTL2_REGS_DFIMISC_phy_dbi_mode_WIDTH   (1U)
#define UMCTL2_REGS_DFIMISC_phy_dbi_mode(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIMISC_phy_dbi_mode_SHIFT)) & UMCTL2_REGS_DFIMISC_phy_dbi_mode_MASK)
#define UMCTL2_REGS_DFIMISC_dfi_data_cs_polarity_MASK (0x4U)
#define UMCTL2_REGS_DFIMISC_dfi_data_cs_polarity_SHIFT (2U)
#define UMCTL2_REGS_DFIMISC_dfi_data_cs_polarity_WIDTH (1U)
#define UMCTL2_REGS_DFIMISC_dfi_data_cs_polarity(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIMISC_dfi_data_cs_polarity_SHIFT)) & UMCTL2_REGS_DFIMISC_dfi_data_cs_polarity_MASK)
#define UMCTL2_REGS_DFIMISC_dfi_init_start_MASK  (0x20U)
#define UMCTL2_REGS_DFIMISC_dfi_init_start_SHIFT (5U)
#define UMCTL2_REGS_DFIMISC_dfi_init_start_WIDTH (1U)
#define UMCTL2_REGS_DFIMISC_dfi_init_start(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIMISC_dfi_init_start_SHIFT)) & UMCTL2_REGS_DFIMISC_dfi_init_start_MASK)
#define UMCTL2_REGS_DFIMISC_dis_dyn_adr_tri_MASK (0x40U)
#define UMCTL2_REGS_DFIMISC_dis_dyn_adr_tri_SHIFT (6U)
#define UMCTL2_REGS_DFIMISC_dis_dyn_adr_tri_WIDTH (1U)
#define UMCTL2_REGS_DFIMISC_dis_dyn_adr_tri(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIMISC_dis_dyn_adr_tri_SHIFT)) & UMCTL2_REGS_DFIMISC_dis_dyn_adr_tri_MASK)
#define UMCTL2_REGS_DFIMISC_dfi_frequency_MASK   (0x1F00U)
#define UMCTL2_REGS_DFIMISC_dfi_frequency_SHIFT  (8U)
#define UMCTL2_REGS_DFIMISC_dfi_frequency_WIDTH  (5U)
#define UMCTL2_REGS_DFIMISC_dfi_frequency(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIMISC_dfi_frequency_SHIFT)) & UMCTL2_REGS_DFIMISC_dfi_frequency_MASK)
/*! @} */

/*! @name DFITMG2 - DFI Timing 2 */
/*! @{ */
#define UMCTL2_REGS_DFITMG2_dfi_tphy_wrcslat_MASK (0x3FU)
#define UMCTL2_REGS_DFITMG2_dfi_tphy_wrcslat_SHIFT (0U)
#define UMCTL2_REGS_DFITMG2_dfi_tphy_wrcslat_WIDTH (6U)
#define UMCTL2_REGS_DFITMG2_dfi_tphy_wrcslat(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG2_dfi_tphy_wrcslat_SHIFT)) & UMCTL2_REGS_DFITMG2_dfi_tphy_wrcslat_MASK)
#define UMCTL2_REGS_DFITMG2_dfi_tphy_rdcslat_MASK (0x7F00U)
#define UMCTL2_REGS_DFITMG2_dfi_tphy_rdcslat_SHIFT (8U)
#define UMCTL2_REGS_DFITMG2_dfi_tphy_rdcslat_WIDTH (7U)
#define UMCTL2_REGS_DFITMG2_dfi_tphy_rdcslat(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG2_dfi_tphy_rdcslat_SHIFT)) & UMCTL2_REGS_DFITMG2_dfi_tphy_rdcslat_MASK)
/*! @} */

/*! @name DFITMG3 - DFI Timing 3 */
/*! @{ */
#define UMCTL2_REGS_DFITMG3_dfi_t_geardown_delay_MASK (0x1FU)
#define UMCTL2_REGS_DFITMG3_dfi_t_geardown_delay_SHIFT (0U)
#define UMCTL2_REGS_DFITMG3_dfi_t_geardown_delay_WIDTH (5U)
#define UMCTL2_REGS_DFITMG3_dfi_t_geardown_delay(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFITMG3_dfi_t_geardown_delay_SHIFT)) & UMCTL2_REGS_DFITMG3_dfi_t_geardown_delay_MASK)
/*! @} */

/*! @name DFISTAT - DFI Status */
/*! @{ */
#define UMCTL2_REGS_DFISTAT_dfi_init_complete_MASK (0x1U)
#define UMCTL2_REGS_DFISTAT_dfi_init_complete_SHIFT (0U)
#define UMCTL2_REGS_DFISTAT_dfi_init_complete_WIDTH (1U)
#define UMCTL2_REGS_DFISTAT_dfi_init_complete(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFISTAT_dfi_init_complete_SHIFT)) & UMCTL2_REGS_DFISTAT_dfi_init_complete_MASK)
#define UMCTL2_REGS_DFISTAT_dfi_lp_ack_MASK      (0x2U)
#define UMCTL2_REGS_DFISTAT_dfi_lp_ack_SHIFT     (1U)
#define UMCTL2_REGS_DFISTAT_dfi_lp_ack_WIDTH     (1U)
#define UMCTL2_REGS_DFISTAT_dfi_lp_ack(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFISTAT_dfi_lp_ack_SHIFT)) & UMCTL2_REGS_DFISTAT_dfi_lp_ack_MASK)
/*! @} */

/*! @name DBICTL - DM/DBI Control */
/*! @{ */
#define UMCTL2_REGS_DBICTL_dm_en_MASK            (0x1U)
#define UMCTL2_REGS_DBICTL_dm_en_SHIFT           (0U)
#define UMCTL2_REGS_DBICTL_dm_en_WIDTH           (1U)
#define UMCTL2_REGS_DBICTL_dm_en(x)              (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBICTL_dm_en_SHIFT)) & UMCTL2_REGS_DBICTL_dm_en_MASK)
#define UMCTL2_REGS_DBICTL_wr_dbi_en_MASK        (0x2U)
#define UMCTL2_REGS_DBICTL_wr_dbi_en_SHIFT       (1U)
#define UMCTL2_REGS_DBICTL_wr_dbi_en_WIDTH       (1U)
#define UMCTL2_REGS_DBICTL_wr_dbi_en(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBICTL_wr_dbi_en_SHIFT)) & UMCTL2_REGS_DBICTL_wr_dbi_en_MASK)
#define UMCTL2_REGS_DBICTL_rd_dbi_en_MASK        (0x4U)
#define UMCTL2_REGS_DBICTL_rd_dbi_en_SHIFT       (2U)
#define UMCTL2_REGS_DBICTL_rd_dbi_en_WIDTH       (1U)
#define UMCTL2_REGS_DBICTL_rd_dbi_en(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBICTL_rd_dbi_en_SHIFT)) & UMCTL2_REGS_DBICTL_rd_dbi_en_MASK)
/*! @} */

/*! @name DFIPHYMSTR - DFI PHY Master */
/*! @{ */
#define UMCTL2_REGS_DFIPHYMSTR_dfi_phymstr_en_MASK (0x1U)
#define UMCTL2_REGS_DFIPHYMSTR_dfi_phymstr_en_SHIFT (0U)
#define UMCTL2_REGS_DFIPHYMSTR_dfi_phymstr_en_WIDTH (1U)
#define UMCTL2_REGS_DFIPHYMSTR_dfi_phymstr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DFIPHYMSTR_dfi_phymstr_en_SHIFT)) & UMCTL2_REGS_DFIPHYMSTR_dfi_phymstr_en_MASK)
/*! @} */

/*! @name ADDRMAP0 - Address Map 0 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP0_addrmap_cs_bit0_MASK (0x1FU)
#define UMCTL2_REGS_ADDRMAP0_addrmap_cs_bit0_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP0_addrmap_cs_bit0_WIDTH (5U)
#define UMCTL2_REGS_ADDRMAP0_addrmap_cs_bit0(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP0_addrmap_cs_bit0_SHIFT)) & UMCTL2_REGS_ADDRMAP0_addrmap_cs_bit0_MASK)
/*! @} */

/*! @name ADDRMAP1 - Address Map 1 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b0_MASK (0x3FU)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b0_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b0_WIDTH (6U)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b0(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP1_addrmap_bank_b0_SHIFT)) & UMCTL2_REGS_ADDRMAP1_addrmap_bank_b0_MASK)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b1_MASK (0x3F00U)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b1_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b1_WIDTH (6U)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b1(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP1_addrmap_bank_b1_SHIFT)) & UMCTL2_REGS_ADDRMAP1_addrmap_bank_b1_MASK)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b2_MASK (0x3F0000U)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b2_SHIFT (16U)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b2_WIDTH (6U)
#define UMCTL2_REGS_ADDRMAP1_addrmap_bank_b2(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP1_addrmap_bank_b2_SHIFT)) & UMCTL2_REGS_ADDRMAP1_addrmap_bank_b2_MASK)
/*! @} */

/*! @name ADDRMAP2 - Address Map 2 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b2_MASK (0xFU)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b2_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b2_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b2(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP2_addrmap_col_b2_SHIFT)) & UMCTL2_REGS_ADDRMAP2_addrmap_col_b2_MASK)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b3_MASK (0x1F00U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b3_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b3_WIDTH (5U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b3(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP2_addrmap_col_b3_SHIFT)) & UMCTL2_REGS_ADDRMAP2_addrmap_col_b3_MASK)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b4_MASK (0xF0000U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b4_SHIFT (16U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b4_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b4(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP2_addrmap_col_b4_SHIFT)) & UMCTL2_REGS_ADDRMAP2_addrmap_col_b4_MASK)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b5_MASK (0xF000000U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b5_SHIFT (24U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b5_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP2_addrmap_col_b5(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP2_addrmap_col_b5_SHIFT)) & UMCTL2_REGS_ADDRMAP2_addrmap_col_b5_MASK)
/*! @} */

/*! @name ADDRMAP3 - Address Map 3 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b6_MASK (0x1FU)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b6_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b6_WIDTH (5U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b6(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP3_addrmap_col_b6_SHIFT)) & UMCTL2_REGS_ADDRMAP3_addrmap_col_b6_MASK)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b7_MASK (0x1F00U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b7_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b7_WIDTH (5U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b7(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP3_addrmap_col_b7_SHIFT)) & UMCTL2_REGS_ADDRMAP3_addrmap_col_b7_MASK)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b8_MASK (0x1F0000U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b8_SHIFT (16U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b8_WIDTH (5U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b8(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP3_addrmap_col_b8_SHIFT)) & UMCTL2_REGS_ADDRMAP3_addrmap_col_b8_MASK)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b9_MASK (0x1F000000U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b9_SHIFT (24U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b9_WIDTH (5U)
#define UMCTL2_REGS_ADDRMAP3_addrmap_col_b9(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP3_addrmap_col_b9_SHIFT)) & UMCTL2_REGS_ADDRMAP3_addrmap_col_b9_MASK)
/*! @} */

/*! @name ADDRMAP4 - Address Map 4 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP4_addrmap_col_b10_MASK (0x1FU)
#define UMCTL2_REGS_ADDRMAP4_addrmap_col_b10_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP4_addrmap_col_b10_WIDTH (5U)
#define UMCTL2_REGS_ADDRMAP4_addrmap_col_b10(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP4_addrmap_col_b10_SHIFT)) & UMCTL2_REGS_ADDRMAP4_addrmap_col_b10_MASK)
#define UMCTL2_REGS_ADDRMAP4_addrmap_col_b11_MASK (0x1F00U)
#define UMCTL2_REGS_ADDRMAP4_addrmap_col_b11_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP4_addrmap_col_b11_WIDTH (5U)
#define UMCTL2_REGS_ADDRMAP4_addrmap_col_b11(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP4_addrmap_col_b11_SHIFT)) & UMCTL2_REGS_ADDRMAP4_addrmap_col_b11_MASK)
#define UMCTL2_REGS_ADDRMAP4_col_addr_shift_MASK (0x80000000U)
#define UMCTL2_REGS_ADDRMAP4_col_addr_shift_SHIFT (31U)
#define UMCTL2_REGS_ADDRMAP4_col_addr_shift_WIDTH (1U)
#define UMCTL2_REGS_ADDRMAP4_col_addr_shift(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP4_col_addr_shift_SHIFT)) & UMCTL2_REGS_ADDRMAP4_col_addr_shift_MASK)
/*! @} */

/*! @name ADDRMAP5 - Address Map 5 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b0_MASK (0xFU)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b0_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b0_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b0(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP5_addrmap_row_b0_SHIFT)) & UMCTL2_REGS_ADDRMAP5_addrmap_row_b0_MASK)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b1_MASK (0xF00U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b1_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b1_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b1(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP5_addrmap_row_b1_SHIFT)) & UMCTL2_REGS_ADDRMAP5_addrmap_row_b1_MASK)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b2_10_MASK (0xF0000U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b2_10_SHIFT (16U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b2_10_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b2_10(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP5_addrmap_row_b2_10_SHIFT)) & UMCTL2_REGS_ADDRMAP5_addrmap_row_b2_10_MASK)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b11_MASK (0xF000000U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b11_SHIFT (24U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b11_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP5_addrmap_row_b11(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP5_addrmap_row_b11_SHIFT)) & UMCTL2_REGS_ADDRMAP5_addrmap_row_b11_MASK)
/*! @} */

/*! @name ADDRMAP6 - Address Map 6 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b12_MASK (0xFU)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b12_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b12_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b12(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP6_addrmap_row_b12_SHIFT)) & UMCTL2_REGS_ADDRMAP6_addrmap_row_b12_MASK)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b13_MASK (0xF00U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b13_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b13_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b13(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP6_addrmap_row_b13_SHIFT)) & UMCTL2_REGS_ADDRMAP6_addrmap_row_b13_MASK)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b14_MASK (0xF0000U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b14_SHIFT (16U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b14_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b14(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP6_addrmap_row_b14_SHIFT)) & UMCTL2_REGS_ADDRMAP6_addrmap_row_b14_MASK)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b15_MASK (0xF000000U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b15_SHIFT (24U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b15_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP6_addrmap_row_b15(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP6_addrmap_row_b15_SHIFT)) & UMCTL2_REGS_ADDRMAP6_addrmap_row_b15_MASK)
#define UMCTL2_REGS_ADDRMAP6_lpddr4_6gb_12gb_24gb_MASK (0x60000000U)
#define UMCTL2_REGS_ADDRMAP6_lpddr4_6gb_12gb_24gb_SHIFT (29U)
#define UMCTL2_REGS_ADDRMAP6_lpddr4_6gb_12gb_24gb_WIDTH (2U)
#define UMCTL2_REGS_ADDRMAP6_lpddr4_6gb_12gb_24gb(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP6_lpddr4_6gb_12gb_24gb_SHIFT)) & UMCTL2_REGS_ADDRMAP6_lpddr4_6gb_12gb_24gb_MASK)
#define UMCTL2_REGS_ADDRMAP6_lpddr3_6gb_12gb_MASK (0x80000000U)
#define UMCTL2_REGS_ADDRMAP6_lpddr3_6gb_12gb_SHIFT (31U)
#define UMCTL2_REGS_ADDRMAP6_lpddr3_6gb_12gb_WIDTH (1U)
#define UMCTL2_REGS_ADDRMAP6_lpddr3_6gb_12gb(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP6_lpddr3_6gb_12gb_SHIFT)) & UMCTL2_REGS_ADDRMAP6_lpddr3_6gb_12gb_MASK)
/*! @} */

/*! @name ADDRMAP7 - Address Map 7 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP7_addrmap_row_b16_MASK (0xFU)
#define UMCTL2_REGS_ADDRMAP7_addrmap_row_b16_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP7_addrmap_row_b16_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP7_addrmap_row_b16(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP7_addrmap_row_b16_SHIFT)) & UMCTL2_REGS_ADDRMAP7_addrmap_row_b16_MASK)
#define UMCTL2_REGS_ADDRMAP7_addrmap_row_b17_MASK (0xF00U)
#define UMCTL2_REGS_ADDRMAP7_addrmap_row_b17_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP7_addrmap_row_b17_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP7_addrmap_row_b17(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP7_addrmap_row_b17_SHIFT)) & UMCTL2_REGS_ADDRMAP7_addrmap_row_b17_MASK)
/*! @} */

/*! @name ADDRMAP8 - Address Map 8 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP8_addrmap_bg_b0_MASK  (0x3FU)
#define UMCTL2_REGS_ADDRMAP8_addrmap_bg_b0_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP8_addrmap_bg_b0_WIDTH (6U)
#define UMCTL2_REGS_ADDRMAP8_addrmap_bg_b0(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP8_addrmap_bg_b0_SHIFT)) & UMCTL2_REGS_ADDRMAP8_addrmap_bg_b0_MASK)
#define UMCTL2_REGS_ADDRMAP8_addrmap_bg_b1_MASK  (0x3F00U)
#define UMCTL2_REGS_ADDRMAP8_addrmap_bg_b1_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP8_addrmap_bg_b1_WIDTH (6U)
#define UMCTL2_REGS_ADDRMAP8_addrmap_bg_b1(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP8_addrmap_bg_b1_SHIFT)) & UMCTL2_REGS_ADDRMAP8_addrmap_bg_b1_MASK)
/*! @} */

/*! @name ADDRMAP9 - Address Map 9 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b2_MASK (0xFU)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b2_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b2_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b2(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP9_addrmap_row_b2_SHIFT)) & UMCTL2_REGS_ADDRMAP9_addrmap_row_b2_MASK)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b3_MASK (0xF00U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b3_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b3_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b3(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP9_addrmap_row_b3_SHIFT)) & UMCTL2_REGS_ADDRMAP9_addrmap_row_b3_MASK)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b4_MASK (0xF0000U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b4_SHIFT (16U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b4_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b4(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP9_addrmap_row_b4_SHIFT)) & UMCTL2_REGS_ADDRMAP9_addrmap_row_b4_MASK)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b5_MASK (0xF000000U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b5_SHIFT (24U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b5_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP9_addrmap_row_b5(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP9_addrmap_row_b5_SHIFT)) & UMCTL2_REGS_ADDRMAP9_addrmap_row_b5_MASK)
/*! @} */

/*! @name ADDRMAP10 - Address Map 10 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b6_MASK (0xFU)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b6_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b6_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b6(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP10_addrmap_row_b6_SHIFT)) & UMCTL2_REGS_ADDRMAP10_addrmap_row_b6_MASK)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b7_MASK (0xF00U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b7_SHIFT (8U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b7_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b7(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP10_addrmap_row_b7_SHIFT)) & UMCTL2_REGS_ADDRMAP10_addrmap_row_b7_MASK)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b8_MASK (0xF0000U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b8_SHIFT (16U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b8_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b8(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP10_addrmap_row_b8_SHIFT)) & UMCTL2_REGS_ADDRMAP10_addrmap_row_b8_MASK)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b9_MASK (0xF000000U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b9_SHIFT (24U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b9_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP10_addrmap_row_b9(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP10_addrmap_row_b9_SHIFT)) & UMCTL2_REGS_ADDRMAP10_addrmap_row_b9_MASK)
/*! @} */

/*! @name ADDRMAP11 - Address Map 11 */
/*! @{ */
#define UMCTL2_REGS_ADDRMAP11_addrmap_row_b10_MASK (0xFU)
#define UMCTL2_REGS_ADDRMAP11_addrmap_row_b10_SHIFT (0U)
#define UMCTL2_REGS_ADDRMAP11_addrmap_row_b10_WIDTH (4U)
#define UMCTL2_REGS_ADDRMAP11_addrmap_row_b10(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADDRMAP11_addrmap_row_b10_SHIFT)) & UMCTL2_REGS_ADDRMAP11_addrmap_row_b10_MASK)
/*! @} */

/*! @name ODTCFG - ODT Configuration */
/*! @{ */
#define UMCTL2_REGS_ODTCFG_rd_odt_delay_MASK     (0x7CU)
#define UMCTL2_REGS_ODTCFG_rd_odt_delay_SHIFT    (2U)
#define UMCTL2_REGS_ODTCFG_rd_odt_delay_WIDTH    (5U)
#define UMCTL2_REGS_ODTCFG_rd_odt_delay(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ODTCFG_rd_odt_delay_SHIFT)) & UMCTL2_REGS_ODTCFG_rd_odt_delay_MASK)
#define UMCTL2_REGS_ODTCFG_rd_odt_hold_MASK      (0xF00U)
#define UMCTL2_REGS_ODTCFG_rd_odt_hold_SHIFT     (8U)
#define UMCTL2_REGS_ODTCFG_rd_odt_hold_WIDTH     (4U)
#define UMCTL2_REGS_ODTCFG_rd_odt_hold(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ODTCFG_rd_odt_hold_SHIFT)) & UMCTL2_REGS_ODTCFG_rd_odt_hold_MASK)
#define UMCTL2_REGS_ODTCFG_wr_odt_delay_MASK     (0x1F0000U)
#define UMCTL2_REGS_ODTCFG_wr_odt_delay_SHIFT    (16U)
#define UMCTL2_REGS_ODTCFG_wr_odt_delay_WIDTH    (5U)
#define UMCTL2_REGS_ODTCFG_wr_odt_delay(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ODTCFG_wr_odt_delay_SHIFT)) & UMCTL2_REGS_ODTCFG_wr_odt_delay_MASK)
#define UMCTL2_REGS_ODTCFG_wr_odt_hold_MASK      (0xF000000U)
#define UMCTL2_REGS_ODTCFG_wr_odt_hold_SHIFT     (24U)
#define UMCTL2_REGS_ODTCFG_wr_odt_hold_WIDTH     (4U)
#define UMCTL2_REGS_ODTCFG_wr_odt_hold(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ODTCFG_wr_odt_hold_SHIFT)) & UMCTL2_REGS_ODTCFG_wr_odt_hold_MASK)
/*! @} */

/*! @name ODTMAP - ODT/Rank Map */
/*! @{ */
#define UMCTL2_REGS_ODTMAP_rank0_wr_odt_MASK     (0x3U)
#define UMCTL2_REGS_ODTMAP_rank0_wr_odt_SHIFT    (0U)
#define UMCTL2_REGS_ODTMAP_rank0_wr_odt_WIDTH    (2U)
#define UMCTL2_REGS_ODTMAP_rank0_wr_odt(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ODTMAP_rank0_wr_odt_SHIFT)) & UMCTL2_REGS_ODTMAP_rank0_wr_odt_MASK)
#define UMCTL2_REGS_ODTMAP_rank0_rd_odt_MASK     (0x30U)
#define UMCTL2_REGS_ODTMAP_rank0_rd_odt_SHIFT    (4U)
#define UMCTL2_REGS_ODTMAP_rank0_rd_odt_WIDTH    (2U)
#define UMCTL2_REGS_ODTMAP_rank0_rd_odt(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ODTMAP_rank0_rd_odt_SHIFT)) & UMCTL2_REGS_ODTMAP_rank0_rd_odt_MASK)
#define UMCTL2_REGS_ODTMAP_rank1_wr_odt_MASK     (0x300U)
#define UMCTL2_REGS_ODTMAP_rank1_wr_odt_SHIFT    (8U)
#define UMCTL2_REGS_ODTMAP_rank1_wr_odt_WIDTH    (2U)
#define UMCTL2_REGS_ODTMAP_rank1_wr_odt(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ODTMAP_rank1_wr_odt_SHIFT)) & UMCTL2_REGS_ODTMAP_rank1_wr_odt_MASK)
#define UMCTL2_REGS_ODTMAP_rank1_rd_odt_MASK     (0x3000U)
#define UMCTL2_REGS_ODTMAP_rank1_rd_odt_SHIFT    (12U)
#define UMCTL2_REGS_ODTMAP_rank1_rd_odt_WIDTH    (2U)
#define UMCTL2_REGS_ODTMAP_rank1_rd_odt(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ODTMAP_rank1_rd_odt_SHIFT)) & UMCTL2_REGS_ODTMAP_rank1_rd_odt_MASK)
/*! @} */

/*! @name SCHED - Scheduler Control */
/*! @{ */
#define UMCTL2_REGS_SCHED_force_low_pri_n_MASK   (0x1U)
#define UMCTL2_REGS_SCHED_force_low_pri_n_SHIFT  (0U)
#define UMCTL2_REGS_SCHED_force_low_pri_n_WIDTH  (1U)
#define UMCTL2_REGS_SCHED_force_low_pri_n(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_SCHED_force_low_pri_n_SHIFT)) & UMCTL2_REGS_SCHED_force_low_pri_n_MASK)
#define UMCTL2_REGS_SCHED_prefer_write_MASK      (0x2U)
#define UMCTL2_REGS_SCHED_prefer_write_SHIFT     (1U)
#define UMCTL2_REGS_SCHED_prefer_write_WIDTH     (1U)
#define UMCTL2_REGS_SCHED_prefer_write(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_SCHED_prefer_write_SHIFT)) & UMCTL2_REGS_SCHED_prefer_write_MASK)
#define UMCTL2_REGS_SCHED_pageclose_MASK         (0x4U)
#define UMCTL2_REGS_SCHED_pageclose_SHIFT        (2U)
#define UMCTL2_REGS_SCHED_pageclose_WIDTH        (1U)
#define UMCTL2_REGS_SCHED_pageclose(x)           (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_SCHED_pageclose_SHIFT)) & UMCTL2_REGS_SCHED_pageclose_MASK)
#define UMCTL2_REGS_SCHED_lpr_num_entries_MASK   (0x1F00U)
#define UMCTL2_REGS_SCHED_lpr_num_entries_SHIFT  (8U)
#define UMCTL2_REGS_SCHED_lpr_num_entries_WIDTH  (5U)
#define UMCTL2_REGS_SCHED_lpr_num_entries(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_SCHED_lpr_num_entries_SHIFT)) & UMCTL2_REGS_SCHED_lpr_num_entries_MASK)
#define UMCTL2_REGS_SCHED_rdwr_idle_gap_MASK     (0x7F000000U)
#define UMCTL2_REGS_SCHED_rdwr_idle_gap_SHIFT    (24U)
#define UMCTL2_REGS_SCHED_rdwr_idle_gap_WIDTH    (7U)
#define UMCTL2_REGS_SCHED_rdwr_idle_gap(x)       (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_SCHED_rdwr_idle_gap_SHIFT)) & UMCTL2_REGS_SCHED_rdwr_idle_gap_MASK)
/*! @} */

/*! @name SCHED1 - Scheduler Control 1 */
/*! @{ */
#define UMCTL2_REGS_SCHED1_pageclose_timer_MASK  (0xFFU)
#define UMCTL2_REGS_SCHED1_pageclose_timer_SHIFT (0U)
#define UMCTL2_REGS_SCHED1_pageclose_timer_WIDTH (8U)
#define UMCTL2_REGS_SCHED1_pageclose_timer(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_SCHED1_pageclose_timer_SHIFT)) & UMCTL2_REGS_SCHED1_pageclose_timer_MASK)
/*! @} */

/*! @name PERFHPR1 - High Priority Read CAM 1 */
/*! @{ */
#define UMCTL2_REGS_PERFHPR1_hpr_max_starve_MASK (0xFFFFU)
#define UMCTL2_REGS_PERFHPR1_hpr_max_starve_SHIFT (0U)
#define UMCTL2_REGS_PERFHPR1_hpr_max_starve_WIDTH (16U)
#define UMCTL2_REGS_PERFHPR1_hpr_max_starve(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PERFHPR1_hpr_max_starve_SHIFT)) & UMCTL2_REGS_PERFHPR1_hpr_max_starve_MASK)
#define UMCTL2_REGS_PERFHPR1_hpr_xact_run_length_MASK (0xFF000000U)
#define UMCTL2_REGS_PERFHPR1_hpr_xact_run_length_SHIFT (24U)
#define UMCTL2_REGS_PERFHPR1_hpr_xact_run_length_WIDTH (8U)
#define UMCTL2_REGS_PERFHPR1_hpr_xact_run_length(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PERFHPR1_hpr_xact_run_length_SHIFT)) & UMCTL2_REGS_PERFHPR1_hpr_xact_run_length_MASK)
/*! @} */

/*! @name PERFLPR1 - Low Priority Read CAM 1 */
/*! @{ */
#define UMCTL2_REGS_PERFLPR1_lpr_max_starve_MASK (0xFFFFU)
#define UMCTL2_REGS_PERFLPR1_lpr_max_starve_SHIFT (0U)
#define UMCTL2_REGS_PERFLPR1_lpr_max_starve_WIDTH (16U)
#define UMCTL2_REGS_PERFLPR1_lpr_max_starve(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PERFLPR1_lpr_max_starve_SHIFT)) & UMCTL2_REGS_PERFLPR1_lpr_max_starve_MASK)
#define UMCTL2_REGS_PERFLPR1_lpr_xact_run_length_MASK (0xFF000000U)
#define UMCTL2_REGS_PERFLPR1_lpr_xact_run_length_SHIFT (24U)
#define UMCTL2_REGS_PERFLPR1_lpr_xact_run_length_WIDTH (8U)
#define UMCTL2_REGS_PERFLPR1_lpr_xact_run_length(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PERFLPR1_lpr_xact_run_length_SHIFT)) & UMCTL2_REGS_PERFLPR1_lpr_xact_run_length_MASK)
/*! @} */

/*! @name PERFWR1 - Write CAM 1 */
/*! @{ */
#define UMCTL2_REGS_PERFWR1_w_max_starve_MASK    (0xFFFFU)
#define UMCTL2_REGS_PERFWR1_w_max_starve_SHIFT   (0U)
#define UMCTL2_REGS_PERFWR1_w_max_starve_WIDTH   (16U)
#define UMCTL2_REGS_PERFWR1_w_max_starve(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PERFWR1_w_max_starve_SHIFT)) & UMCTL2_REGS_PERFWR1_w_max_starve_MASK)
#define UMCTL2_REGS_PERFWR1_w_xact_run_length_MASK (0xFF000000U)
#define UMCTL2_REGS_PERFWR1_w_xact_run_length_SHIFT (24U)
#define UMCTL2_REGS_PERFWR1_w_xact_run_length_WIDTH (8U)
#define UMCTL2_REGS_PERFWR1_w_xact_run_length(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_PERFWR1_w_xact_run_length_SHIFT)) & UMCTL2_REGS_PERFWR1_w_xact_run_length_MASK)
/*! @} */

/*! @name DBG0 - Debug 0 */
/*! @{ */
#define UMCTL2_REGS_DBG0_dis_wc_MASK             (0x1U)
#define UMCTL2_REGS_DBG0_dis_wc_SHIFT            (0U)
#define UMCTL2_REGS_DBG0_dis_wc_WIDTH            (1U)
#define UMCTL2_REGS_DBG0_dis_wc(x)               (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBG0_dis_wc_SHIFT)) & UMCTL2_REGS_DBG0_dis_wc_MASK)
#define UMCTL2_REGS_DBG0_dis_collision_page_opt_MASK (0x10U)
#define UMCTL2_REGS_DBG0_dis_collision_page_opt_SHIFT (4U)
#define UMCTL2_REGS_DBG0_dis_collision_page_opt_WIDTH (1U)
#define UMCTL2_REGS_DBG0_dis_collision_page_opt(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBG0_dis_collision_page_opt_SHIFT)) & UMCTL2_REGS_DBG0_dis_collision_page_opt_MASK)
/*! @} */

/*! @name DBG1 - Debug 1 */
/*! @{ */
#define UMCTL2_REGS_DBG1_dis_dq_MASK             (0x1U)
#define UMCTL2_REGS_DBG1_dis_dq_SHIFT            (0U)
#define UMCTL2_REGS_DBG1_dis_dq_WIDTH            (1U)
#define UMCTL2_REGS_DBG1_dis_dq(x)               (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBG1_dis_dq_SHIFT)) & UMCTL2_REGS_DBG1_dis_dq_MASK)
#define UMCTL2_REGS_DBG1_dis_hif_MASK            (0x2U)
#define UMCTL2_REGS_DBG1_dis_hif_SHIFT           (1U)
#define UMCTL2_REGS_DBG1_dis_hif_WIDTH           (1U)
#define UMCTL2_REGS_DBG1_dis_hif(x)              (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBG1_dis_hif_SHIFT)) & UMCTL2_REGS_DBG1_dis_hif_MASK)
/*! @} */

/*! @name DBGCAM - CAM Debug */
/*! @{ */
#define UMCTL2_REGS_DBGCAM_dbg_hpr_q_depth_MASK  (0x3FU)
#define UMCTL2_REGS_DBGCAM_dbg_hpr_q_depth_SHIFT (0U)
#define UMCTL2_REGS_DBGCAM_dbg_hpr_q_depth_WIDTH (6U)
#define UMCTL2_REGS_DBGCAM_dbg_hpr_q_depth(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCAM_dbg_hpr_q_depth_SHIFT)) & UMCTL2_REGS_DBGCAM_dbg_hpr_q_depth_MASK)
#define UMCTL2_REGS_DBGCAM_dbg_lpr_q_depth_MASK  (0x3F00U)
#define UMCTL2_REGS_DBGCAM_dbg_lpr_q_depth_SHIFT (8U)
#define UMCTL2_REGS_DBGCAM_dbg_lpr_q_depth_WIDTH (6U)
#define UMCTL2_REGS_DBGCAM_dbg_lpr_q_depth(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCAM_dbg_lpr_q_depth_SHIFT)) & UMCTL2_REGS_DBGCAM_dbg_lpr_q_depth_MASK)
#define UMCTL2_REGS_DBGCAM_dbg_w_q_depth_MASK    (0x3F0000U)
#define UMCTL2_REGS_DBGCAM_dbg_w_q_depth_SHIFT   (16U)
#define UMCTL2_REGS_DBGCAM_dbg_w_q_depth_WIDTH   (6U)
#define UMCTL2_REGS_DBGCAM_dbg_w_q_depth(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCAM_dbg_w_q_depth_SHIFT)) & UMCTL2_REGS_DBGCAM_dbg_w_q_depth_MASK)
#define UMCTL2_REGS_DBGCAM_dbg_stall_MASK        (0x1000000U)
#define UMCTL2_REGS_DBGCAM_dbg_stall_SHIFT       (24U)
#define UMCTL2_REGS_DBGCAM_dbg_stall_WIDTH       (1U)
#define UMCTL2_REGS_DBGCAM_dbg_stall(x)          (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCAM_dbg_stall_SHIFT)) & UMCTL2_REGS_DBGCAM_dbg_stall_MASK)
#define UMCTL2_REGS_DBGCAM_dbg_rd_q_empty_MASK   (0x2000000U)
#define UMCTL2_REGS_DBGCAM_dbg_rd_q_empty_SHIFT  (25U)
#define UMCTL2_REGS_DBGCAM_dbg_rd_q_empty_WIDTH  (1U)
#define UMCTL2_REGS_DBGCAM_dbg_rd_q_empty(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCAM_dbg_rd_q_empty_SHIFT)) & UMCTL2_REGS_DBGCAM_dbg_rd_q_empty_MASK)
#define UMCTL2_REGS_DBGCAM_dbg_wr_q_empty_MASK   (0x4000000U)
#define UMCTL2_REGS_DBGCAM_dbg_wr_q_empty_SHIFT  (26U)
#define UMCTL2_REGS_DBGCAM_dbg_wr_q_empty_WIDTH  (1U)
#define UMCTL2_REGS_DBGCAM_dbg_wr_q_empty(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCAM_dbg_wr_q_empty_SHIFT)) & UMCTL2_REGS_DBGCAM_dbg_wr_q_empty_MASK)
#define UMCTL2_REGS_DBGCAM_rd_data_pipeline_empty_MASK (0x10000000U)
#define UMCTL2_REGS_DBGCAM_rd_data_pipeline_empty_SHIFT (28U)
#define UMCTL2_REGS_DBGCAM_rd_data_pipeline_empty_WIDTH (1U)
#define UMCTL2_REGS_DBGCAM_rd_data_pipeline_empty(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCAM_rd_data_pipeline_empty_SHIFT)) & UMCTL2_REGS_DBGCAM_rd_data_pipeline_empty_MASK)
#define UMCTL2_REGS_DBGCAM_wr_data_pipeline_empty_MASK (0x20000000U)
#define UMCTL2_REGS_DBGCAM_wr_data_pipeline_empty_SHIFT (29U)
#define UMCTL2_REGS_DBGCAM_wr_data_pipeline_empty_WIDTH (1U)
#define UMCTL2_REGS_DBGCAM_wr_data_pipeline_empty(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCAM_wr_data_pipeline_empty_SHIFT)) & UMCTL2_REGS_DBGCAM_wr_data_pipeline_empty_MASK)
/*! @} */

/*! @name DBGCMD - Command Debug */
/*! @{ */
#define UMCTL2_REGS_DBGCMD_rank0_refresh_MASK    (0x1U)
#define UMCTL2_REGS_DBGCMD_rank0_refresh_SHIFT   (0U)
#define UMCTL2_REGS_DBGCMD_rank0_refresh_WIDTH   (1U)
#define UMCTL2_REGS_DBGCMD_rank0_refresh(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCMD_rank0_refresh_SHIFT)) & UMCTL2_REGS_DBGCMD_rank0_refresh_MASK)
#define UMCTL2_REGS_DBGCMD_rank1_refresh_MASK    (0x2U)
#define UMCTL2_REGS_DBGCMD_rank1_refresh_SHIFT   (1U)
#define UMCTL2_REGS_DBGCMD_rank1_refresh_WIDTH   (1U)
#define UMCTL2_REGS_DBGCMD_rank1_refresh(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCMD_rank1_refresh_SHIFT)) & UMCTL2_REGS_DBGCMD_rank1_refresh_MASK)
#define UMCTL2_REGS_DBGCMD_zq_calib_short_MASK   (0x10U)
#define UMCTL2_REGS_DBGCMD_zq_calib_short_SHIFT  (4U)
#define UMCTL2_REGS_DBGCMD_zq_calib_short_WIDTH  (1U)
#define UMCTL2_REGS_DBGCMD_zq_calib_short(x)     (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCMD_zq_calib_short_SHIFT)) & UMCTL2_REGS_DBGCMD_zq_calib_short_MASK)
#define UMCTL2_REGS_DBGCMD_ctrlupd_MASK          (0x20U)
#define UMCTL2_REGS_DBGCMD_ctrlupd_SHIFT         (5U)
#define UMCTL2_REGS_DBGCMD_ctrlupd_WIDTH         (1U)
#define UMCTL2_REGS_DBGCMD_ctrlupd(x)            (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCMD_ctrlupd_SHIFT)) & UMCTL2_REGS_DBGCMD_ctrlupd_MASK)
/*! @} */

/*! @name DBGSTAT - Status Debug */
/*! @{ */
#define UMCTL2_REGS_DBGSTAT_rank0_refresh_busy_MASK (0x1U)
#define UMCTL2_REGS_DBGSTAT_rank0_refresh_busy_SHIFT (0U)
#define UMCTL2_REGS_DBGSTAT_rank0_refresh_busy_WIDTH (1U)
#define UMCTL2_REGS_DBGSTAT_rank0_refresh_busy(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGSTAT_rank0_refresh_busy_SHIFT)) & UMCTL2_REGS_DBGSTAT_rank0_refresh_busy_MASK)
#define UMCTL2_REGS_DBGSTAT_rank1_refresh_busy_MASK (0x2U)
#define UMCTL2_REGS_DBGSTAT_rank1_refresh_busy_SHIFT (1U)
#define UMCTL2_REGS_DBGSTAT_rank1_refresh_busy_WIDTH (1U)
#define UMCTL2_REGS_DBGSTAT_rank1_refresh_busy(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGSTAT_rank1_refresh_busy_SHIFT)) & UMCTL2_REGS_DBGSTAT_rank1_refresh_busy_MASK)
#define UMCTL2_REGS_DBGSTAT_zq_calib_short_busy_MASK (0x10U)
#define UMCTL2_REGS_DBGSTAT_zq_calib_short_busy_SHIFT (4U)
#define UMCTL2_REGS_DBGSTAT_zq_calib_short_busy_WIDTH (1U)
#define UMCTL2_REGS_DBGSTAT_zq_calib_short_busy(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGSTAT_zq_calib_short_busy_SHIFT)) & UMCTL2_REGS_DBGSTAT_zq_calib_short_busy_MASK)
#define UMCTL2_REGS_DBGSTAT_ctrlupd_busy_MASK    (0x20U)
#define UMCTL2_REGS_DBGSTAT_ctrlupd_busy_SHIFT   (5U)
#define UMCTL2_REGS_DBGSTAT_ctrlupd_busy_WIDTH   (1U)
#define UMCTL2_REGS_DBGSTAT_ctrlupd_busy(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGSTAT_ctrlupd_busy_SHIFT)) & UMCTL2_REGS_DBGSTAT_ctrlupd_busy_MASK)
/*! @} */

/*! @name DBGCAM1 - CAM Debug 1 */
/*! @{ */
#define UMCTL2_REGS_DBGCAM1_dbg_wrecc_q_depth_MASK (0x3FU)
#define UMCTL2_REGS_DBGCAM1_dbg_wrecc_q_depth_SHIFT (0U)
#define UMCTL2_REGS_DBGCAM1_dbg_wrecc_q_depth_WIDTH (6U)
#define UMCTL2_REGS_DBGCAM1_dbg_wrecc_q_depth(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DBGCAM1_dbg_wrecc_q_depth_SHIFT)) & UMCTL2_REGS_DBGCAM1_dbg_wrecc_q_depth_MASK)
/*! @} */

/*! @name SWCTL - Software Register Programming Control Enable */
/*! @{ */
#define UMCTL2_REGS_SWCTL_sw_done_MASK           (0x1U)
#define UMCTL2_REGS_SWCTL_sw_done_SHIFT          (0U)
#define UMCTL2_REGS_SWCTL_sw_done_WIDTH          (1U)
#define UMCTL2_REGS_SWCTL_sw_done(x)             (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_SWCTL_sw_done_SHIFT)) & UMCTL2_REGS_SWCTL_sw_done_MASK)
/*! @} */

/*! @name SWSTAT - Software Register Programming Control Status */
/*! @{ */
#define UMCTL2_REGS_SWSTAT_sw_done_ack_MASK      (0x1U)
#define UMCTL2_REGS_SWSTAT_sw_done_ack_SHIFT     (0U)
#define UMCTL2_REGS_SWSTAT_sw_done_ack_WIDTH     (1U)
#define UMCTL2_REGS_SWSTAT_sw_done_ack(x)        (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_SWSTAT_sw_done_ack_SHIFT)) & UMCTL2_REGS_SWSTAT_sw_done_ack_MASK)
/*! @} */

/*! @name OCPARCFG0 - On-Chip Parity Configuration 0 */
/*! @{ */
#define UMCTL2_REGS_OCPARCFG0_oc_parity_en_MASK  (0x1U)
#define UMCTL2_REGS_OCPARCFG0_oc_parity_en_SHIFT (0U)
#define UMCTL2_REGS_OCPARCFG0_oc_parity_en_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_oc_parity_en(x)    (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_oc_parity_en_SHIFT)) & UMCTL2_REGS_OCPARCFG0_oc_parity_en_MASK)
#define UMCTL2_REGS_OCPARCFG0_oc_parity_type_MASK (0x2U)
#define UMCTL2_REGS_OCPARCFG0_oc_parity_type_SHIFT (1U)
#define UMCTL2_REGS_OCPARCFG0_oc_parity_type_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_oc_parity_type(x)  (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_oc_parity_type_SHIFT)) & UMCTL2_REGS_OCPARCFG0_oc_parity_type_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_en_MASK (0x10U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_en_SHIFT (4U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_en_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_en_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_en_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_slverr_en_MASK (0x20U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_slverr_en_SHIFT (5U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_slverr_en_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_slverr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_wdata_slverr_en_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_wdata_slverr_en_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_clr_MASK (0x40U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_clr_SHIFT (6U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_clr_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_clr_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_force_MASK (0x80U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_force_SHIFT (7U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_force_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_force_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_wdata_err_intr_force_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_slverr_en_MASK (0x1000U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_slverr_en_SHIFT (12U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_slverr_en_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_slverr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_rdata_slverr_en_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_rdata_slverr_en_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_en_MASK (0x2000U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_en_SHIFT (13U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_en_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_en_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_en_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_clr_MASK (0x4000U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_clr_SHIFT (14U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_clr_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_clr_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_force_MASK (0x8000U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_force_SHIFT (15U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_force_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_force_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_rdata_err_intr_force_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_addr_slverr_en_MASK (0x100000U)
#define UMCTL2_REGS_OCPARCFG0_par_addr_slverr_en_SHIFT (20U)
#define UMCTL2_REGS_OCPARCFG0_par_addr_slverr_en_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_addr_slverr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_addr_slverr_en_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_addr_slverr_en_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_en_MASK (0x200000U)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_en_SHIFT (21U)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_en_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_en_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_en_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_clr_MASK (0x400000U)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_clr_SHIFT (22U)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_clr_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_clr_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_en_MASK (0x800000U)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_en_SHIFT (23U)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_en_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_en_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_en_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_clr_MASK (0x1000000U)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_clr_SHIFT (24U)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_clr_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_clr_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_force_MASK (0x2000000U)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_force_SHIFT (25U)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_force_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_force_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_waddr_err_intr_force_MASK)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_force_MASK (0x4000000U)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_force_SHIFT (26U)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_force_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_force_SHIFT)) & UMCTL2_REGS_OCPARCFG0_par_raddr_err_intr_force_MASK)
/*! @} */

/*! @name OCPARCFG1 - On-Chip Parity Configuration 1 */
/*! @{ */
#define UMCTL2_REGS_OCPARCFG1_par_poison_en_MASK (0x1U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_en_SHIFT (0U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_en_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_en(x)   (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG1_par_poison_en_SHIFT)) & UMCTL2_REGS_OCPARCFG1_par_poison_en_MASK)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_dfi_MASK (0x4U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_dfi_SHIFT (2U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_dfi_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_dfi(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_dfi_SHIFT)) & UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_dfi_MASK)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_iecc_type_MASK (0x8U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_iecc_type_SHIFT (3U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_iecc_type_WIDTH (1U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_iecc_type(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_iecc_type_SHIFT)) & UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_iecc_type_MASK)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_port_MASK (0xF0U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_port_SHIFT (4U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_port_WIDTH (4U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_port(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_port_SHIFT)) & UMCTL2_REGS_OCPARCFG1_par_poison_loc_rd_port_MASK)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_wr_port_MASK (0xF00U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_wr_port_SHIFT (8U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_wr_port_WIDTH (4U)
#define UMCTL2_REGS_OCPARCFG1_par_poison_loc_wr_port(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARCFG1_par_poison_loc_wr_port_SHIFT)) & UMCTL2_REGS_OCPARCFG1_par_poison_loc_wr_port_MASK)
/*! @} */

/*! @name OCPARSTAT0 - On-Chip Parity Status 0 */
/*! @{ */
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_0_MASK (0x1U)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_0_SHIFT (0U)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_0_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_0_SHIFT)) & UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_0_MASK)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_1_MASK (0x2U)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_1_SHIFT (1U)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_1_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_1_SHIFT)) & UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_1_MASK)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_2_MASK (0x4U)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_2_SHIFT (2U)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_2_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_2_SHIFT)) & UMCTL2_REGS_OCPARSTAT0_par_waddr_err_intr_2_MASK)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_0_MASK (0x10000U)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_0_SHIFT (16U)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_0_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_0_SHIFT)) & UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_0_MASK)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_1_MASK (0x20000U)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_1_SHIFT (17U)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_1_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_1_SHIFT)) & UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_1_MASK)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_2_MASK (0x40000U)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_2_SHIFT (18U)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_2_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_2_SHIFT)) & UMCTL2_REGS_OCPARSTAT0_par_raddr_err_intr_2_MASK)
/*! @} */

/*! @name OCPARSTAT1 - On-Chip Parity Status 1 */
/*! @{ */
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_0_MASK (0x1U)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_0_SHIFT (0U)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_0_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_0_SHIFT)) & UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_0_MASK)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_1_MASK (0x2U)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_1_SHIFT (1U)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_1_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_1_SHIFT)) & UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_1_MASK)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_2_MASK (0x4U)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_2_SHIFT (2U)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_2_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_2_SHIFT)) & UMCTL2_REGS_OCPARSTAT1_par_wdata_in_err_intr_2_MASK)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_0_MASK (0x10000U)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_0_SHIFT (16U)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_0_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_0_SHIFT)) & UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_0_MASK)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_1_MASK (0x20000U)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_1_SHIFT (17U)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_1_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_1_SHIFT)) & UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_1_MASK)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_2_MASK (0x40000U)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_2_SHIFT (18U)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_2_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_2_SHIFT)) & UMCTL2_REGS_OCPARSTAT1_par_rdata_err_intr_2_MASK)
/*! @} */

/*! @name OCPARSTAT2 - On-Chip Parity Status 2 */
/*! @{ */
#define UMCTL2_REGS_OCPARSTAT2_par_wdata_out_err_intr_MASK (0x3U)
#define UMCTL2_REGS_OCPARSTAT2_par_wdata_out_err_intr_SHIFT (0U)
#define UMCTL2_REGS_OCPARSTAT2_par_wdata_out_err_intr_WIDTH (2U)
#define UMCTL2_REGS_OCPARSTAT2_par_wdata_out_err_intr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT2_par_wdata_out_err_intr_SHIFT)) & UMCTL2_REGS_OCPARSTAT2_par_wdata_out_err_intr_MASK)
#define UMCTL2_REGS_OCPARSTAT2_par_rdata_in_err_ecc_intr_MASK (0x10U)
#define UMCTL2_REGS_OCPARSTAT2_par_rdata_in_err_ecc_intr_SHIFT (4U)
#define UMCTL2_REGS_OCPARSTAT2_par_rdata_in_err_ecc_intr_WIDTH (1U)
#define UMCTL2_REGS_OCPARSTAT2_par_rdata_in_err_ecc_intr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCPARSTAT2_par_rdata_in_err_ecc_intr_SHIFT)) & UMCTL2_REGS_OCPARSTAT2_par_rdata_in_err_ecc_intr_MASK)
/*! @} */

/*! @name POISONCFG - AXI Poison Configuration */
/*! @{ */
#define UMCTL2_REGS_POISONCFG_wr_poison_slverr_en_MASK (0x1U)
#define UMCTL2_REGS_POISONCFG_wr_poison_slverr_en_SHIFT (0U)
#define UMCTL2_REGS_POISONCFG_wr_poison_slverr_en_WIDTH (1U)
#define UMCTL2_REGS_POISONCFG_wr_poison_slverr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONCFG_wr_poison_slverr_en_SHIFT)) & UMCTL2_REGS_POISONCFG_wr_poison_slverr_en_MASK)
#define UMCTL2_REGS_POISONCFG_wr_poison_intr_en_MASK (0x10U)
#define UMCTL2_REGS_POISONCFG_wr_poison_intr_en_SHIFT (4U)
#define UMCTL2_REGS_POISONCFG_wr_poison_intr_en_WIDTH (1U)
#define UMCTL2_REGS_POISONCFG_wr_poison_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONCFG_wr_poison_intr_en_SHIFT)) & UMCTL2_REGS_POISONCFG_wr_poison_intr_en_MASK)
#define UMCTL2_REGS_POISONCFG_wr_poison_intr_clr_MASK (0x100U)
#define UMCTL2_REGS_POISONCFG_wr_poison_intr_clr_SHIFT (8U)
#define UMCTL2_REGS_POISONCFG_wr_poison_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_POISONCFG_wr_poison_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONCFG_wr_poison_intr_clr_SHIFT)) & UMCTL2_REGS_POISONCFG_wr_poison_intr_clr_MASK)
#define UMCTL2_REGS_POISONCFG_rd_poison_slverr_en_MASK (0x10000U)
#define UMCTL2_REGS_POISONCFG_rd_poison_slverr_en_SHIFT (16U)
#define UMCTL2_REGS_POISONCFG_rd_poison_slverr_en_WIDTH (1U)
#define UMCTL2_REGS_POISONCFG_rd_poison_slverr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONCFG_rd_poison_slverr_en_SHIFT)) & UMCTL2_REGS_POISONCFG_rd_poison_slverr_en_MASK)
#define UMCTL2_REGS_POISONCFG_rd_poison_intr_en_MASK (0x100000U)
#define UMCTL2_REGS_POISONCFG_rd_poison_intr_en_SHIFT (20U)
#define UMCTL2_REGS_POISONCFG_rd_poison_intr_en_WIDTH (1U)
#define UMCTL2_REGS_POISONCFG_rd_poison_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONCFG_rd_poison_intr_en_SHIFT)) & UMCTL2_REGS_POISONCFG_rd_poison_intr_en_MASK)
#define UMCTL2_REGS_POISONCFG_rd_poison_intr_clr_MASK (0x1000000U)
#define UMCTL2_REGS_POISONCFG_rd_poison_intr_clr_SHIFT (24U)
#define UMCTL2_REGS_POISONCFG_rd_poison_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_POISONCFG_rd_poison_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONCFG_rd_poison_intr_clr_SHIFT)) & UMCTL2_REGS_POISONCFG_rd_poison_intr_clr_MASK)
/*! @} */

/*! @name POISONSTAT - AXI Poison Status */
/*! @{ */
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_0_MASK (0x1U)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_0_SHIFT (0U)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_0_WIDTH (1U)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONSTAT_wr_poison_intr_0_SHIFT)) & UMCTL2_REGS_POISONSTAT_wr_poison_intr_0_MASK)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_1_MASK (0x2U)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_1_SHIFT (1U)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_1_WIDTH (1U)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONSTAT_wr_poison_intr_1_SHIFT)) & UMCTL2_REGS_POISONSTAT_wr_poison_intr_1_MASK)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_2_MASK (0x4U)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_2_SHIFT (2U)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_2_WIDTH (1U)
#define UMCTL2_REGS_POISONSTAT_wr_poison_intr_2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONSTAT_wr_poison_intr_2_SHIFT)) & UMCTL2_REGS_POISONSTAT_wr_poison_intr_2_MASK)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_0_MASK (0x10000U)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_0_SHIFT (16U)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_0_WIDTH (1U)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONSTAT_rd_poison_intr_0_SHIFT)) & UMCTL2_REGS_POISONSTAT_rd_poison_intr_0_MASK)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_1_MASK (0x20000U)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_1_SHIFT (17U)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_1_WIDTH (1U)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_1(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONSTAT_rd_poison_intr_1_SHIFT)) & UMCTL2_REGS_POISONSTAT_rd_poison_intr_1_MASK)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_2_MASK (0x40000U)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_2_SHIFT (18U)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_2_WIDTH (1U)
#define UMCTL2_REGS_POISONSTAT_rd_poison_intr_2(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_POISONSTAT_rd_poison_intr_2_SHIFT)) & UMCTL2_REGS_POISONSTAT_rd_poison_intr_2_MASK)
/*! @} */

/*! @name ADVECCINDEX - Advanced ECC Index */
/*! @{ */
#define UMCTL2_REGS_ADVECCINDEX_ecc_syndrome_sel_MASK (0x7U)
#define UMCTL2_REGS_ADVECCINDEX_ecc_syndrome_sel_SHIFT (0U)
#define UMCTL2_REGS_ADVECCINDEX_ecc_syndrome_sel_WIDTH (3U)
#define UMCTL2_REGS_ADVECCINDEX_ecc_syndrome_sel(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADVECCINDEX_ecc_syndrome_sel_SHIFT)) & UMCTL2_REGS_ADVECCINDEX_ecc_syndrome_sel_MASK)
#define UMCTL2_REGS_ADVECCINDEX_ecc_err_symbol_sel_MASK (0x18U)
#define UMCTL2_REGS_ADVECCINDEX_ecc_err_symbol_sel_SHIFT (3U)
#define UMCTL2_REGS_ADVECCINDEX_ecc_err_symbol_sel_WIDTH (2U)
#define UMCTL2_REGS_ADVECCINDEX_ecc_err_symbol_sel(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADVECCINDEX_ecc_err_symbol_sel_SHIFT)) & UMCTL2_REGS_ADVECCINDEX_ecc_err_symbol_sel_MASK)
#define UMCTL2_REGS_ADVECCINDEX_ecc_poison_beats_sel_MASK (0x1E0U)
#define UMCTL2_REGS_ADVECCINDEX_ecc_poison_beats_sel_SHIFT (5U)
#define UMCTL2_REGS_ADVECCINDEX_ecc_poison_beats_sel_WIDTH (4U)
#define UMCTL2_REGS_ADVECCINDEX_ecc_poison_beats_sel(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ADVECCINDEX_ecc_poison_beats_sel_SHIFT)) & UMCTL2_REGS_ADVECCINDEX_ecc_poison_beats_sel_MASK)
/*! @} */

/*! @name ECCPOISONPAT0 - ECC Poison Pattern 0 */
/*! @{ */
#define UMCTL2_REGS_ECCPOISONPAT0_ecc_poison_data_31_0_MASK (0xFFFFFFFFU)
#define UMCTL2_REGS_ECCPOISONPAT0_ecc_poison_data_31_0_SHIFT (0U)
#define UMCTL2_REGS_ECCPOISONPAT0_ecc_poison_data_31_0_WIDTH (32U)
#define UMCTL2_REGS_ECCPOISONPAT0_ecc_poison_data_31_0(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCPOISONPAT0_ecc_poison_data_31_0_SHIFT)) & UMCTL2_REGS_ECCPOISONPAT0_ecc_poison_data_31_0_MASK)
/*! @} */

/*! @name ECCPOISONPAT2 - ECC Poison Pattern 2 */
/*! @{ */
#define UMCTL2_REGS_ECCPOISONPAT2_ecc_poison_data_71_64_MASK (0xFFU)
#define UMCTL2_REGS_ECCPOISONPAT2_ecc_poison_data_71_64_SHIFT (0U)
#define UMCTL2_REGS_ECCPOISONPAT2_ecc_poison_data_71_64_WIDTH (8U)
#define UMCTL2_REGS_ECCPOISONPAT2_ecc_poison_data_71_64(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCPOISONPAT2_ecc_poison_data_71_64_SHIFT)) & UMCTL2_REGS_ECCPOISONPAT2_ecc_poison_data_71_64_MASK)
/*! @} */

/*! @name ECCAPSTAT - Address protection within ECC Status */
/*! @{ */
#define UMCTL2_REGS_ECCAPSTAT_ecc_ap_err_MASK    (0x1U)
#define UMCTL2_REGS_ECCAPSTAT_ecc_ap_err_SHIFT   (0U)
#define UMCTL2_REGS_ECCAPSTAT_ecc_ap_err_WIDTH   (1U)
#define UMCTL2_REGS_ECCAPSTAT_ecc_ap_err(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_ECCAPSTAT_ecc_ap_err_SHIFT)) & UMCTL2_REGS_ECCAPSTAT_ecc_ap_err_MASK)
/*! @} */

/*! @name REGPARCFG - Register Parity Configuration */
/*! @{ */
#define UMCTL2_REGS_REGPARCFG_reg_par_en_MASK    (0x1U)
#define UMCTL2_REGS_REGPARCFG_reg_par_en_SHIFT   (0U)
#define UMCTL2_REGS_REGPARCFG_reg_par_en_WIDTH   (1U)
#define UMCTL2_REGS_REGPARCFG_reg_par_en(x)      (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_REGPARCFG_reg_par_en_SHIFT)) & UMCTL2_REGS_REGPARCFG_reg_par_en_MASK)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_en_MASK (0x2U)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_en_SHIFT (1U)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_en_WIDTH (1U)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_REGPARCFG_reg_par_err_intr_en_SHIFT)) & UMCTL2_REGS_REGPARCFG_reg_par_err_intr_en_MASK)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_clr_MASK (0x4U)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_clr_SHIFT (2U)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_REGPARCFG_reg_par_err_intr_clr_SHIFT)) & UMCTL2_REGS_REGPARCFG_reg_par_err_intr_clr_MASK)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_force_MASK (0x8U)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_force_SHIFT (3U)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_force_WIDTH (1U)
#define UMCTL2_REGS_REGPARCFG_reg_par_err_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_REGPARCFG_reg_par_err_intr_force_SHIFT)) & UMCTL2_REGS_REGPARCFG_reg_par_err_intr_force_MASK)
#define UMCTL2_REGS_REGPARCFG_reg_par_poison_en_MASK (0x100U)
#define UMCTL2_REGS_REGPARCFG_reg_par_poison_en_SHIFT (8U)
#define UMCTL2_REGS_REGPARCFG_reg_par_poison_en_WIDTH (1U)
#define UMCTL2_REGS_REGPARCFG_reg_par_poison_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_REGPARCFG_reg_par_poison_en_SHIFT)) & UMCTL2_REGS_REGPARCFG_reg_par_poison_en_MASK)
/*! @} */

/*! @name REGPARSTAT - Register Parity Status */
/*! @{ */
#define UMCTL2_REGS_REGPARSTAT_reg_par_err_intr_MASK (0x1U)
#define UMCTL2_REGS_REGPARSTAT_reg_par_err_intr_SHIFT (0U)
#define UMCTL2_REGS_REGPARSTAT_reg_par_err_intr_WIDTH (1U)
#define UMCTL2_REGS_REGPARSTAT_reg_par_err_intr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_REGPARSTAT_reg_par_err_intr_SHIFT)) & UMCTL2_REGS_REGPARSTAT_reg_par_err_intr_MASK)
/*! @} */

/*! @name OCCAPCFG - On-Chip command/Address Protection Configuration */
/*! @{ */
#define UMCTL2_REGS_OCCAPCFG_occap_en_MASK       (0x1U)
#define UMCTL2_REGS_OCCAPCFG_occap_en_SHIFT      (0U)
#define UMCTL2_REGS_OCCAPCFG_occap_en_WIDTH      (1U)
#define UMCTL2_REGS_OCCAPCFG_occap_en(x)         (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG_occap_en_SHIFT)) & UMCTL2_REGS_OCCAPCFG_occap_en_MASK)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_en_MASK (0x10000U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_en_SHIFT (16U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_en_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG_occap_arb_intr_en_SHIFT)) & UMCTL2_REGS_OCCAPCFG_occap_arb_intr_en_MASK)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_clr_MASK (0x20000U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_clr_SHIFT (17U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG_occap_arb_intr_clr_SHIFT)) & UMCTL2_REGS_OCCAPCFG_occap_arb_intr_clr_MASK)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_force_MASK (0x40000U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_force_SHIFT (18U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_force_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG_occap_arb_intr_force_SHIFT)) & UMCTL2_REGS_OCCAPCFG_occap_arb_intr_force_MASK)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_seq_MASK (0x1000000U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_seq_SHIFT (24U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_seq_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_seq(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_seq_SHIFT)) & UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_seq_MASK)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_parallel_MASK (0x2000000U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_parallel_SHIFT (25U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_parallel_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_parallel(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_parallel_SHIFT)) & UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_parallel_MASK)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_err_inj_MASK (0x4000000U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_err_inj_SHIFT (26U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_err_inj_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_err_inj(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_err_inj_SHIFT)) & UMCTL2_REGS_OCCAPCFG_occap_arb_cmp_poison_err_inj_MASK)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_raq_poison_en_MASK (0x8000000U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_raq_poison_en_SHIFT (27U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_raq_poison_en_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG_occap_arb_raq_poison_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG_occap_arb_raq_poison_en_SHIFT)) & UMCTL2_REGS_OCCAPCFG_occap_arb_raq_poison_en_MASK)
/*! @} */

/*! @name OCCAPSTAT - On-Chip command/Address Protection Status */
/*! @{ */
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_err_intr_MASK (0x10000U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_err_intr_SHIFT (16U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_err_intr_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_err_intr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT_occap_arb_err_intr_SHIFT)) & UMCTL2_REGS_OCCAPSTAT_occap_arb_err_intr_MASK)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_complete_MASK (0x20000U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_complete_SHIFT (17U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_complete_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_complete(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_complete_SHIFT)) & UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_complete_MASK)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_seq_err_MASK (0x1000000U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_seq_err_SHIFT (24U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_seq_err_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_seq_err(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_seq_err_SHIFT)) & UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_seq_err_MASK)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_parallel_err_MASK (0x2000000U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_parallel_err_SHIFT (25U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_parallel_err_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_parallel_err(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_parallel_err_SHIFT)) & UMCTL2_REGS_OCCAPSTAT_occap_arb_cmp_poison_parallel_err_MASK)
/*! @} */

/*! @name OCCAPCFG1 - On-Chip command/Address Protection Configuration 1 */
/*! @{ */
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_en_MASK (0x1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_en_SHIFT (0U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_en_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_en_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_en_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_clr_MASK (0x2U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_clr_SHIFT (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_clr_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_clr_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_force_MASK (0x4U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_force_SHIFT (2U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_force_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_force_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_intr_force_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_seq_MASK (0x100U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_seq_SHIFT (8U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_seq_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_seq(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_seq_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_seq_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_parallel_MASK (0x200U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_parallel_SHIFT (9U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_parallel_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_parallel(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_parallel_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_parallel_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_err_inj_MASK (0x400U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_err_inj_SHIFT (10U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_err_inj_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_err_inj(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_err_inj_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_data_poison_err_inj_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_en_MASK (0x10000U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_en_SHIFT (16U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_en_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_en(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_en_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_en_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_clr_MASK (0x20000U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_clr_SHIFT (17U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_clr_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_clr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_clr_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_clr_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_force_MASK (0x40000U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_force_SHIFT (18U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_force_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_force(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_force_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_intr_force_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_seq_MASK (0x1000000U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_seq_SHIFT (24U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_seq_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_seq(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_seq_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_seq_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_parallel_MASK (0x2000000U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_parallel_SHIFT (25U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_parallel_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_parallel(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_parallel_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_parallel_MASK)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_err_inj_MASK (0x4000000U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_err_inj_SHIFT (26U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_err_inj_WIDTH (1U)
#define UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_err_inj(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_err_inj_SHIFT)) & UMCTL2_REGS_OCCAPCFG1_occap_ddrc_ctrl_poison_err_inj_MASK)
/*! @} */

/*! @name OCCAPSTAT1 - On-Chip command/Address Protection Status 1 */
/*! @{ */
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_err_intr_MASK (0x1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_err_intr_SHIFT (0U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_err_intr_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_err_intr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_err_intr_SHIFT)) & UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_err_intr_MASK)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_complete_MASK (0x2U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_complete_SHIFT (1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_complete_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_complete(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_complete_SHIFT)) & UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_complete_MASK)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_seq_err_MASK (0x100U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_seq_err_SHIFT (8U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_seq_err_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_seq_err(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_seq_err_SHIFT)) & UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_seq_err_MASK)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_parallel_err_MASK (0x200U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_parallel_err_SHIFT (9U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_parallel_err_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_parallel_err(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_parallel_err_SHIFT)) & UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_data_poison_parallel_err_MASK)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_err_intr_MASK (0x10000U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_err_intr_SHIFT (16U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_err_intr_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_err_intr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_err_intr_SHIFT)) & UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_err_intr_MASK)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_complete_MASK (0x20000U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_complete_SHIFT (17U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_complete_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_complete(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_complete_SHIFT)) & UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_complete_MASK)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_seq_err_MASK (0x1000000U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_seq_err_SHIFT (24U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_seq_err_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_seq_err(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_seq_err_SHIFT)) & UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_seq_err_MASK)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_parallel_err_MASK (0x2000000U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_parallel_err_SHIFT (25U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_parallel_err_WIDTH (1U)
#define UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_parallel_err(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_parallel_err_SHIFT)) & UMCTL2_REGS_OCCAPSTAT1_occap_ddrc_ctrl_poison_parallel_err_MASK)
/*! @} */

/*! @name DERATESTAT - Temperature Derate Status */
/*! @{ */
#define UMCTL2_REGS_DERATESTAT_derate_temp_limit_intr_MASK (0x1U)
#define UMCTL2_REGS_DERATESTAT_derate_temp_limit_intr_SHIFT (0U)
#define UMCTL2_REGS_DERATESTAT_derate_temp_limit_intr_WIDTH (1U)
#define UMCTL2_REGS_DERATESTAT_derate_temp_limit_intr(x) (((uint32_t)(((uint32_t)(x)) << UMCTL2_REGS_DERATESTAT_derate_temp_limit_intr_SHIFT)) & UMCTL2_REGS_DERATESTAT_derate_temp_limit_intr_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group UMCTL2_REGS_Register_Masks */

/*!
 * @}
 */ /* end of group UMCTL2_REGS_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_UMCTL2_REGS_H_) */
