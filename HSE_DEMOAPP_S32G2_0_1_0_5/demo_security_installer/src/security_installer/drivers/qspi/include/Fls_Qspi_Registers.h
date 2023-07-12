/**
*   @file    Reg_eSys_FLASHC.h
*   @version
*
*   @brief   AUTOSAR Fls - Defines used to access the Flash registers.
*   @details This file contains defines used to access the Flash registers.
*
*   @addtogroup FLS
*   @{
*/
/*==================================================================================================
 *   Project              : AUTOSAR 4.4 MCAL
 *   Platform             : CORTEXM
 *   Peripheral           : IPV_QSPI
 *   Dependencies         : none
 *
 *   Autosar Version      : 4.4.0
 *   Autosar Revision     : ASR_REL_4_4_REV_0000
 *   Autosar Conf.Variant :
 *   SW Version           : 0.8.0
 *   Build Version        : S32XX_MCAL_0_8_0_EAR_ASR_REL_4_4_REV_0000_20191025
 *
 *   (c) Copyright 2006-2016 Freescale Semiconductor, Inc.
*       Copyright 2017-2019 NXP
 *   All Rights Reserved.
==================================================================================================*/

#ifndef FLS_QSPI_REGISTERS_H
#define FLS_QSPI_REGISTERS_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
#define QSPI_0_BASEADDR                 ((uint32)0x40134000UL)

/* IPV_QSPI's versions */

/* QSPI registers byte offsets */
#define QSPI_MCR_OFFSET_U32                 ((uint32) 0x000UL)
#define QSPI_IPCR_OFFSET_U32                ((uint32) 0x008UL)
#define QSPI_FLSHCR_OFFSET_U32              ((uint32) 0x00CUL)
#define QSPI_BUFXCR_OFFSET_U32              ((uint32) 0x010UL)
#define QSPI_BUF0CR_OFFSET_U32              ((uint32) 0x010UL)
#define QSPI_BUF1CR_OFFSET_U32              ((uint32) 0x014UL)
#define QSPI_BUF2CR_OFFSET_U32              ((uint32) 0x018UL)
#define QSPI_BUF3CR_OFFSET_U32              ((uint32) 0x01CUL)
#define QSPI_BFGENCR_OFFSET_U32             ((uint32) 0x020UL)
#define QSPI_SOCCR_OFFSET_U32               ((uint32) 0x024UL)
#define QSPI_BUFXIND_OFFSET_U32             ((uint32) 0x030UL)
#define QSPI_BUF0IND_OFFSET_U32             ((uint32) 0x030UL)
#define QSPI_BUF1IND_OFFSET_U32             ((uint32) 0x034UL)
#define QSPI_BUF2IND_OFFSET_U32             ((uint32) 0x038UL)
#define QSPI_AWRCR_OFFSET_U32               ((uint32) 0x050UL)
#define QSPI_DLLCRA_OFFSET_U32              ((uint32) 0x060UL)
#define QSPI_DLLCRB_OFFSET_U32              ((uint32) 0x064UL)
#define QSPI_SFAR_OFFSET_U32                ((uint32) 0x100UL)
#define QSPI_SFACR_OFFSET_U32               ((uint32) 0x104UL)
#define QSPI_SMPR_OFFSET_U32                ((uint32) 0x108UL)
#define QSPI_RBSR_OFFSET_U32                ((uint32) 0x10CUL)
#define QSPI_RBCT_OFFSET_U32                ((uint32) 0x110UL)
#define QSPI_AWRSR_OFFSET_U32               ((uint32) 0x120UL)
#define QSPI_DLLSR_OFFSET_U32               ((uint32) 0x12CUL)
#define QSPI_DLCR_OFFSET_U32                ((uint32) 0x130UL)
#define QSPI_DLCR_FA_OFFSET_U32             ((uint32) 0x134UL)
#define QSPI_DLCR_FB_OFFSET_U32             ((uint32) 0x138UL)
#define QSPI_TBSR_OFFSET_U32                ((uint32) 0x150UL)
#define QSPI_TBDR_OFFSET_U32                ((uint32) 0x154UL)
#define QSPI_TBCT_OFFSET_U32                ((uint32) 0x158UL)
#define QSPI_SR_OFFSET_U32                  ((uint32) 0x15CUL)
#define QSPI_FR_OFFSET_U32                  ((uint32) 0x160UL)
#define QSPI_RSER_OFFSET_U32                ((uint32) 0x164UL)
#define QSPI_SPNDST_OFFSET_U32              ((uint32) 0x168UL)
#define QSPI_SPTRCLR_OFFSET_U32             ((uint32) 0x16CUL)
#define QSPI_SFA1AD_OFFSET_U32              ((uint32) 0x180UL)
#define QSPI_SFA2AD_OFFSET_U32              ((uint32) 0x184UL)
#define QSPI_SFB1AD_OFFSET_U32              ((uint32) 0x188UL)
#define QSPI_SFB2AD_OFFSET_U32              ((uint32) 0x18CUL)
#define QSPI_DLPR_OFFSET_U32                ((uint32) 0x190UL)
#define QSPI_FAILA_ADDR_OFFSET_U32          ((uint32) 0x194UL)
#define QSPI_FAILB_ADDR_OFFSET_U32          ((uint32) 0x198UL)
#define QSPI_RBDR_OFFSET_U32                ((uint32) 0x200UL)
#define QSPI_LUTKEY_OFFSET_U32              ((uint32) 0x300UL)
#define QSPI_LCKCR_OFFSET_U32               ((uint32) 0x304UL)
#define QSPI_LUT_OFFSET_U32                 ((uint32) 0x310UL)

/* RX BUFFER - AHB interface base address through ARDBx registers. */
#define QSPI_0_ARDB_BASEADDR_U32            ((uint32) 0x41000000UL)
/* Base address of AHB BUFFER. */
#define QSPI_0_AHB_BASEADDR_U32             ((uint32) 0x00000000UL)

/* QSPI registers word offsets */
#define QSPI_MCR_WORD_OFFSET_U32            ((uint32) 0x000UL)
#define QSPI_IPCR_WORD_OFFSET_U32           ((uint32) 0x002UL)
#define QSPI_FLSHCR_WORD_OFFSET_U32         ((uint32) 0x003UL)
#define QSPI_BUFXCR_WORD_OFFSET_U32         ((uint32) 0x004UL)
#define QSPI_BUF0CR_WORD_OFFSET_U32         ((uint32) 0x004UL)
#define QSPI_BUF1CR_WORD_OFFSET_U32         ((uint32) 0x005UL)
#define QSPI_BUF2CR_WORD_OFFSET_U32         ((uint32) 0x006UL)
#define QSPI_BUF3CR_WORD_OFFSET_U32         ((uint32) 0x007UL)
#define QSPI_BFGENCR_WORD_OFFSET_U32        ((uint32) 0x008UL)
#define QSPI_SOCCR_WORD_OFFSET_U32          ((uint32) 0x009UL)
#define QSPI_BUFXIND_WORD_OFFSET_U32        ((uint32) 0x00CUL)
#define QSPI_BUF0IND_WORD_OFFSET_U32        ((uint32) 0x00CUL)
#define QSPI_BUF1IND_WORD_OFFSET_U32        ((uint32) 0x00DUL)
#define QSPI_BUF2IND_WORD_OFFSET_U32        ((uint32) 0x00EUL)
#define QSPI_SFAR_WORD_OFFSET_U32           ((uint32) 0x040UL)
#define QSPI_SFACR_WORD_OFFSET_U32          ((uint32) 0x041UL)
#define QSPI_SMPR_WORD_OFFSET_U32           ((uint32) 0x042UL)
#define QSPI_RBSR_WORD_OFFSET_U32           ((uint32) 0x043UL)
#define QSPI_RBCT_WORD_OFFSET_U32           ((uint32) 0x044UL)
#define QSPI_TBSR_WORD_OFFSET_U32           ((uint32) 0x054UL)
#define QSPI_TBDR_WORD_OFFSET_U32           ((uint32) 0x055UL)
#define QSPI_TBCT_WORD_OFFSET_U32           ((uint32) 0x056UL)
#define QSPI_SR_WORD_OFFSET_U32             ((uint32) 0x057UL)
#define QSPI_FR_WORD_OFFSET_U32             ((uint32) 0x058UL)
#define QSPI_RSER_WORD_OFFSET_U32           ((uint32) 0x059UL)
#define QSPI_SPNDST_WORD_OFFSET_U32         ((uint32) 0x05AUL)
#define QSPI_SPTRCLR_WORD_OFFSET_U32        ((uint32) 0x05BUL)
#define QSPI_SFA1AD_WORD_OFFSET_U32         ((uint32) 0x060UL)
#define QSPI_SFA2AD_WORD_OFFSET_U32         ((uint32) 0x061UL)
#define QSPI_SFB1AD_WORD_OFFSET_U32         ((uint32) 0x062UL)
#define QSPI_SFB2AD_WORD_OFFSET_U32         ((uint32) 0x063UL)
#define QSPI_DLPR_WORD_OFFSET_U32           ((uint32) 0x064UL)
#define QSPI_RBDR_WORD_OFFSET_U32           ((uint32) 0x080UL)
#define QSPI_LUTKEY_WORD_OFFSET_U32         ((uint32) 0x0C0UL)
#define QSPI_LCKCR_WORD_OFFSET_U32          ((uint32) 0x0C1UL)
#define QSPI_LUT_WORD_OFFSET_U32            ((uint32) 0x0C4UL)


#define QSPI_MCR_CK2_DCARS_FB_U32               ((uint32) 0x80000000UL)  /* CK2_DCARS_FB - CK2 DDR center align read strobe for Flash B           QSPI_MCR[31] */
#define QSPI_MCR_CKN_FB_EN_U32                  ((uint32) 0x40000000UL)  /* CKN_FB_EN - Enable clock on differential CKN pad of Flash B          QSPI_MCR[30] */
#define QSPI_MCR_DQS_FB_SEL_MASK_U32            ((uint32) 0x30000000UL)  /* CKN_FB_EN - It selects DQS clock for sampling read data at Flash B QuadSPI port  QSPI_MCR[28-29] */
#define QSPI_MCR_DQS_FB_SEL_SHIFT_U32           (28U)
#define QSPI_MCR_CK2_DCARS_FA_U32               ((uint32) 0x08000000UL)  /* CK2_DCARS_FA - CK2 DDR center align read strobe for Flash A           QSPI_MCR[27] */
#define QSPI_MCR_CKN_FA_EN_U32                  ((uint32) 0x04000000UL)  /* CKN_FA_EN - Enable clock on differential CKN pad of Flash A          QSPI_MCR[26] */
#define QSPI_MCR_DQS_FA_SEL_MASK_U32            ((uint32) 0x03000000UL)  /* CKN_FA_EN - It selects DQS clock for sampling read data at Flash B QuadSPI port  QSPI_MCR[24-25] */
#define QSPI_MCR_DQS_FA_SEL_SHIFT_U32           (24U)                    /* Bit: selects DQS clock for sampling read data at Flash A QuadSPI port */
#define QSPI_MCR_MDIS_U32                       ((uint32) 0x00004000UL)  /* MDIS - Module Disable.           QSPI_MCR[14] */
#define QSPI_MCR_DDR_EN_U32                     ((uint32) 0x00000080UL)  /* DDR_EN - DDR mode enable.        QSPI_MCR[7] */
#define QSPI_MCR_DQS_EN_U32                     ((uint32) 0x00000040UL)  /* DQS_EN - DQS enable.             QSPI_MCR[6] */
#define QSPI_MCR_DQS_LAT_EN_U32                 ((uint32) 0x00000020UL)  /* DQS_LAT_EN - DQS Latency enable. QSPI_MCR[5] */
#define QSPI_MCR_END_MASK_U32                   ((uint32) 0x0000000CUL)  /* END_CFG - Endianness. QSPI_MCR[3:2] */
#define QSPI_MCR_END_SHIFT_U32                  (2U)                     /* Bit position of Endianness configuration inside QSPI_MCR. */
#define QSPI_MCR_CLR_TXF_U32                    ((uint32) 0x00000800UL)  /* Clear TX FIFO. Invalidates the TX Buffer.*/
#define QSPI_MCR_CLR_RXF_U32                    ((uint32) 0x00000400UL)  /* Clear RX FIFO. Invalidates the RX Buffer.*/
#define QSPI_MCR_SWRSTHD_U32                    ((uint32) 0x00000002UL)  /* MCR[1] - Software reset for AHB domain. */
#define QSPI_MCR_SWRSTSD_U32                    ((uint32) 0x00000001UL)  /* MCR[0] - Software reset for serial flash domain. */


#define QSPI_MCR_DQS_MODE_INT_U32               ((uint32) 0x01000000UL)  /* SCLKCFG[0] - DQS Mode select.    QSPI_MCR[24] */
#define QSPI_MCR_REF_CLK_SEL_U32                ((uint32) 0x04000000UL)  /* SCLKCFG[2] - DQS Mode select.    QSPI_MCR[26] */
#define QSPI_MCR_COARSE_DLY_MASK_U32            ((uint32) 0xE0000000UL)  /* SCLKCFG[7:5] - DQS coarse delay. QSPI_MCR[31:29] */

#define QSPI_MCR_ISD3FB_U32                     ((uint32) 0x00080000UL)  /* Idle Signal Drive IOFB[3] Flash B. */
#define QSPI_MCR_ISD2FB_U32                     ((uint32) 0x00040000UL)  /* Idle Signal Drive IOFB[2] Flash B. */
#define QSPI_MCR_ISD3FA_U32                     ((uint32) 0x00020000UL)  /* Idle Signal Drive IOFA[3] Flash A. */
#define QSPI_MCR_ISD2FA_U32                     ((uint32) 0x00010000UL)  /* Idle Signal Drive IOFA[2] Flash A. */


#define QSPI_SMPR_DLLFSMPFB_MASK_U32            ((uint32) 0x70000000UL)  /* SMPR[28:30] - Selects the Nth tap provided by Fb slave delay-chain. */
#define QSPI_SMPR_DLLFSMPFB_SHIFT_U32           ((uint32) 28UL)          /* SMPR[28:30] - Selects the Nth tap provided by Fb slave delay-chain. */
#define QSPI_SMPR_DLLFSMPFA_MASK_U32            ((uint32) 0x07000000UL)  /* SMPR[24:26] - Selects the Nth tap provided by Fa slave delay-chain. */
#define QSPI_SMPR_DLLFSMPFA_SHIFT_U32           ((uint32) 24UL)          /* SMPR[24:26] - Selects the Nth tap provided by Fa slave delay-chain. */
#define QSPI_SMPR_DDRSMP_MASK_U32               ((uint32) 0x00070000UL)  /* SMPR[18:16] - DDR Sampling point. */
#define QSPI_SMPR_DDRSMP_SHIFT_U32              (16U)                    /* Bit position of DDRSMP field. */
#define QSPI_SMPR_FSPHS_U32                     ((uint32) 0x00000020UL)  /* FSPHS - Full Speed Phase selection for SDR instructions and DQS DDR mode.    QSPI_SMPR[5] */
#define QSPI_SMPR_FSDLY_U32                     ((uint32) 0x00000040UL)  /* FSDLY - Full Speed Delay selection for SDR instructions and DQS DDR mode.    QSPI_SMPR[6] */

#define QSPI_FLSHCR_TDH_MASK_U32                ((uint32) 0x00030000UL)  /* TDH - Serial flash data in hold time.   QSPI_FLSHCR[17:16] */
#define QSPI_FLSHCR_TDH_SHIFT_U32               (16U)                    /* TDH - Serial flash data in hold time.   QSPI_FLSHCR[17:16] */
#define QSPI_FLSHCR_TCSH_MASK_U32               ((uint32) 0x00000F00UL)  /* TCSH - Serial flash CS hold time.   QSPI_FLSHCR[11:8] */
#define QSPI_FLSHCR_TCSH_SHIFT_U32              (8U)                     /* TCSH - Serial flash CS hold time.   QSPI_FLSHCR[11:8] */
#define QSPI_FLSHCR_TCSS_MASK_U32               ((uint32) 0x0000000FUL)  /* TCSS - Serial flash CS setup time.   QSPI_FLSHCR[3:0] */
#define QSPI_FLSHCR_TCSS_SHIFT_U32              (0U)                     /* TCSS - Serial flash CS setup time.   QSPI_FLSHCR[3:0] */

#define QSPI_RBCT_RXBRD_MASK_U32                ((uint32) 0x100UL)
#define QSPI_BUFxCR_MSTRID_MASK_U32             ((uint32) 0x00000001FUL)

#define QSPI_BUFxCR_ADATSZ_MASK_U32             ((uint32) 0x0000FF00UL)
#define QSPI_BUFxCR_ADATSZ_SHIFT_U32            ((uint32) 8UL)
#define QSPI_BUF3CR_ALLMST_MASK_U32             ((uint32) 0x80000000UL)  /* BUF3CR[31] - All master enable */

#define QSPI_LCKCR_MASK_U32                     ((uint32) 0x00000003UL)
#define QSPI_LCKCR_LOCKED_U32                   ((uint32) 0x00000001UL)
#define QSPI_LCKCR_UNLOCKED_U32                 ((uint32) 0x00000002UL)

#define QSPI_DLLCRA_MASK_U32                    ((uint32) 0xFFFFFFFFUL)
#define QSPI_DLLCRB_MASK_U32                    ((uint32) 0xFFFFFFFFUL)

#define QSPI_LUT_KEY_VALUE_U32                  ((uint32) 0x5AF05AF0UL)  /* The key to lock or unlock the LUT. */

#define QSPI_SR_BUSY_U32                        ((uint32) 0x00000001UL)  /* Module Busy. BUSY == 1 when module is busy. */
#define QSPI_SR_RXWE_U32                        ((uint32) 0x00010000UL)  /* RX Buffer Watermark Exceeded. RXWE == 1 when the number of valid entries in the RX Buffer exceeds the number given in the QSPI_RBCT[WMRK] field. */

#define QSPI_FR_TBFF_U32                        ((uint32) 0x08000000UL)  /* FR[27] TX Buffer Fill Flag. */
#define QSPI_FR_TBUF_U32                        ((uint32) 0x04000000UL)  /* FR[26] TX Buffer Underrun Flag. */
#define QSPI_FR_ILLINE_U32                      ((uint32) 0x00800000UL)  /* FR[23] Illegal Instruction Error Flag */
#define QSPI_FR_RBOF_U32                        ((uint32) 0x00020000UL)  /* FR[17] RX Buffer Overflow Flag. */
#define QSPI_FR_RBDF_U32                        ((uint32) 0x00010000UL)  /* FR[16] RX Buffer Drain Flag. Writting 1 POPs WMRK+1 entries from the RXBuffer. */

#define QSPI_FR_AAEF_MASK_U32                        ((uint32) 0x00008000UL)  /* FR[15] AHB abort error flag. */
#define QSPI_FR_AIBSEF_MASK_U32                      ((uint32) 0x00002000UL)  /* FR[13] AHB illegal burst size error flag. */
#define QSPI_FR_IUEF_MASK_U32                        ((uint32) 0x00000800UL)  /* FR[11] IP Command Usage Error Flag - parallel mode. */

#define QSPI_FR_AITEF_MASK_U32                       ((uint32) 0x00004000UL)  /* FR[14] AHB Illegal transaction error flag. */
#define QSPI_FR_ABOF_MASK_U32                        ((uint32) 0x00001000UL)  /* FR[12] AHB Buffer Overflow Flag. */
#define QSPI_FR_CRCAEF_MASK_U32                      ((uint32) 0x00000400UL)  /* FR[10] CRC or ECC error for flash A Flag. */
#define QSPI_FR_IPAEF_MASK_U32                       ((uint32) 0x00000080UL)  /* FR[7] IP Command Trigger during AHB Access Error Flag. */
#define QSPI_FR_IPIEF_MASK_U32                       ((uint32) 0x00000040UL)  /* FR[6] IP Command Trigger could not be executed Error Flag.*/
#define QSPI_FR_TFF_MASK_U32                         ((uint32) 0x00000001UL)  /* FR[0] IP Command Transaction Finished Flag. */


#define QSPI_RSER_DLPFIE_MASK_U32                    ((uint32) 0x80000000UL) /* RSER[31] Data Learning Pattern Failure Interrupt enable. */
#define QSPI_RSER_TBFIE_MASK_U32                     ((uint32) 0x08000000UL) /* RSER[27] TX Buffer Fill Interrupt Enable. */
#define QSPI_RSER_TBUIE_MASK_U32                     ((uint32) 0x04000000UL) /* RSER[26] TX Buffer Underrun Interrupt Enable. */
#define QSPI_RSER_TBFDE_MASK_U32                     ((uint32) 0x02000000UL) /* RSER[25] TX Buffer Fill DMA Enable. */
#define QSPI_RSER_ILLINIE_MASK_U32                   ((uint32) 0x00800000UL) /* RSER[23] Illegal Instruction Error Interrupt Enable. */
#define QSPI_RSER_RBDDE_MASK_U32                     ((uint32) 0x00200000UL) /* RSER[21] RX Buffer Drain DMA Enable. */
#define QSPI_RSER_RBOIE_MASK_U32                     ((uint32) 0x00020000UL) /* RSER[17] RX Buffer Overflow Interrupt Enable. */
#define QSPI_RSER_RBDIE_MASK_U32                     ((uint32) 0x00010000UL) /* RSER[16] RX Buffer Drain Interrupt Enable. */
#define QSPI_RSER_ABSEIE_MASK_U32                    ((uint32) 0x00008000UL) /* RSER[15] AHB Sequence Error Interrupt Enable. */
#define QSPI_RSER_AITIE_MASK_U32                     ((uint32) 0x00004000UL) /* RSER[14] AHB Illegal transaction interrupt enable. */
#define QSPI_RSER_AIBSIE_MASK_U32                    ((uint32) 0x00002000UL) /* RSER[13] AHB Illegal Burst Size Interrupt Enable. */
#define QSPI_RSER_ABOIE_MASK_U32                     ((uint32) 0x00001000UL) /* RSER[12] AHB Buffer Overflow Interrupt Enable. */
#define QSPI_RSER_IUEIE_MASK_U32                     ((uint32) 0x00000800UL) /* RSER[11] IP Command Usage Error Interrupt Enable. */
#define QSPI_RSER_IPAEIE_MASK_U32                    ((uint32) 0x00000080UL) /* RSER[7]  IP Command Trigger during AHB Access Error Interrupt Enable. */
#define QSPI_RSER_IPIEIE_MASK_U32                    ((uint32) 0x00000040UL) /* RSER[6]  IP Command Trigger during IP Access Error Interrupt Enable. */
#define QSPI_RSER_IPGEIE_MASK_U32                    ((uint32) 0x00000010UL) /* RSER[4]  IP Command Trigger during AHB Grant Error Interrupt Enable. */
#define QSPI_RSER_TFIE_MASK_U32                      ((uint32) 0x00000001UL) /* RSER[0]  Transaction Finished Interrupt Enable. */

#define QSPI_RBCT_WMRK_MASK_U32                      ((uint32) 0x0000007FUL)  /* RBCT[6:0] - WMRK bitifield mask. */
#define QSPI_RBCT_WMRK_SHIFT_U32                     ((uint32) 0x00000000UL)  /* RBCT[6:0] - WMRK bitifield position shift. */
#define QSPI_RBCT_WMRK_VALUE_U32                     (0U)                     /* Set the Watermark level. Expect 1 word(4byte entries)*/

#define QSPI_IPCR_SEQID_MASK_U32                ((uint32) 0xF000000UL)   /* IPCR[27:24] SEQID field. */
#define QSPI_IPCR_SEQID_SHIFT_U32               (24U)
#define QSPI_IPCR_IDATSZ_MASK_U32               ((uint32) 0x000FFFFUL)   /* IPCR[15:0] IDATSZ field. */
#define QSPI_IPCR_IDATSZ_SHIFT_U32              (0U)
#define QSPI_IPCR_PAR_EN_SHIFT_U32              (16U)                    /* IPCR[16] PAR_EN bit. */

#define QSPI_LUT_INSTR0_OPER0_OFFSET_U32        ((uint32) 0UL)           /* [INSTR0|PAD0|OPRND0] = LUTx[15:0]*/
#define QSPI_LUT_INSTR0_OPER0_MASK_U32          ((uint32) 0x0000FFFFUL)
#define QSPI_LUT_INSTR1_OPER1_OFFSET_U32        ((uint32) 16UL)          /* [INSTR1|PAD1|OPRND1] = LUTx[31:16]*/
#define QSPI_LUT_INSTR1_OPER1_MASK_U32          ((uint32) 0xFFFF0000UL)

#define QSPI_RBSR_RDBFL_MASK_U32                ((uint32) 0x00003F00UL)  /* RBSR[13:8] */
#define QSPI_RBSR_RDBFL_SHIFT_U32               (8U)

#define QSPI_SPTRCLR_IPPTRC_MASK_U32            ((uint32) 0x00000100UL)  /* SPTRCLR[8] IP Pointer Clear */
#define QSPI_SPTRCLR_BFPTRC_MASK_U32            ((uint32) 0x00000001UL)  /* SPTRCLR[0] Buffer Pointer Clear */

#define QSPI_DLLCRx_EN_MASK_U32                 ((uint32) 0x80000000UL)  /* DLLCRx[31] DLL enable */
#define QSPI_DLLCRx_EN_SHIFT_U32                (31U)                    /* DLLCRx[31] DLL enable */
#define QSPI_DLLCRx_FREQ_EN_MASK_U32            ((uint32) 0x40000000UL)  /* DLLCRx[30] Frequency enable */
#define QSPI_DLLCRx_FREQ_EN_SHIFT_U32           (30U)                    /* DLLCRx[30] Frequency enable */
#define QSPI_DLLCRx_REF_CNT_MASK_U32            ((uint32) 0x0F000000UL)  /* DLLCRx[24] reference counter mask */
#define QSPI_DLLCRx_REF_CNT_SHIFT_U32           (24U)                    /* DLLCRx[24] reference counter shift */
#define QSPI_DLLCRx_RES_MASK_U32                ((uint32) 0x00F00000UL)  /* DLLCRx[20] DLL resolution mask */
#define QSPI_DLLCRx_RES_SHIFT_U32               (20U)                    /* DLLCRx[20] DLL resolution shift */
#define QSPI_DLLCRx_SLV_FINE_OFFSET_MASK_U32    ((uint32) 0x000F0000UL)  /* DLLCRx[16] Fine offset delay elements in incoming DQS mask */
#define QSPI_DLLCRx_SLV_FINE_OFFSET_SHIFT_U32   (16U)                    /* DLLCRx[16] Fine offset delay elements in incoming DQS shift */
#define QSPI_DLLCRx_SLV_DLY_OFFSET_MASK_U32     ((uint32) 0x00007000UL)  /* DLLCRx[12-14] T/16 offset delay elements in incoming DQS mask*/
#define QSPI_DLLCRx_SLV_DLY_OFFSET_SHIFT_U32    (12U)                    /* DLLCRx[12-14] T/16 offset delay elements in incoming DQS shift*/
#define QSPI_DLLCRx_SLV_DLY_COARSE_MASK_U32     ((uint32) 0x00000F00UL)  /* DLLCRx[8-11] Delay elements in each delay tap */
#define QSPI_DLLCRx_SLV_DLY_COARSE_SHIFT_U32    (8U)                     /* DLLCRx[8-11] Delay elements in each delay tap  */
#define QSPI_DLLCRx_SLV_DLY_FINE_MASK_U32       ((uint32) 0x000000E0UL)  /* DLLCRx[5-7] Fine Delay */
#define QSPI_DLLCRx_SLV_DLY_FINE_SHIFT_U32      (5U)                     /* DLLCRx[5-7] Fine Delay */
#define QSPI_DLLCRx_SLV_AUTO_UPDATE_MASK_U32    ((uint32) 0x00000008UL)  /* DLLCRx[3] Slave chain update */
#define QSPI_DLLCRx_SLV_AUTO_UPDATE_SHIFT_U32   (3U)                     /* DLLCRx[3] Slave chain update */
#define QSPI_DLLCRx_SLV_EN_MASK_U32             ((uint32) 0x00000004UL)  /* DLLCRx[2] Slave enable */
#define QSPI_DLLCRx_SLV_EN_SHIFT_U32            (2U)                     /* DLLCRx[2] Slave enable */
#define QSPI_DLLCRx_SLV_DLL_BYPASS_MASK_U32     ((uint32) 0x00000002UL)  /* DLLCRx[1] Slave DLL Bypass */
#define QSPI_DLLCRx_SLV_DLL_BYPASS_SHIFT_U32    (1U)                     /* DLLCRx[1] Slave DLL Bypass */
#define QSPI_DLLCRx_SLV_UPD_MASK_U32            ((uint32) 0x00000001UL)  /* DLLCRx[0] Slave update */
#define QSPI_DLLCRx_SLV_UPD_SHIFT_U32           (0U)                     /* DLLCRx[0] Slave update */

#define QSPI_DLLCRx_REF_CNT_DEFAULT_U32         ((uint32) 0x01000000UL)  /* DLLCRx[24] reference counter default */
#define QSPI_DLLCRx_RES_DEFAULT_U32             ((uint32) 0x00200000UL)  /* DLLCRx[20] DLL resolution default */

#define QSPI_DLLSR_DLLA_LOCK_U32                ((uint32) 0x00008000UL)  /* DLLSR[31] DLL A lock status */
#define QSPI_DLLSR_SLVA_LOCK_U32                ((uint32) 0x00004000UL)  /* DLLSR[31] High frequency slave delay chain locked */
#define QSPI_DLLSR_DLLA_RANGE_ERR_U32           ((uint32) 0x00002000UL)  /* DLLSR[31] DLL master delay chain */
#define QSPI_DLLSR_DLLA_FINE_UNDERFLOW_U32      ((uint32) 0x00002000UL)  /* DLLSR[31] Fine delay chain underflow */


#define QSPI_BFGENCR_SEQID_MASK_U32             ((uint32) 0x0000F000UL)  /* BFGENCR[15:12] */
#define QSPI_BFGENCR_SEQID_SHIFT_U32            (12U)
#define QSPI_BFGENCR_PAR_EN_SHIFT_U32           (16U)                    /* BFGENCR[16] PAR_EN bit. */

#define QSPI_AWRCR_PPW_WR_DIS_U32               ((uint32) 0x00008000UL)  /* AWRCR[15] PPW_WR_DIS bit. */
#define QSPI_AWRCR_PPW_RD_DIS_U32               ((uint32) 0x00004000UL)  /* AWRCR[14] PPW_RD_DIS bit. */

#define QSPI_SFACR_BYTE_SWAP_U32                ((uint32) 0x00020000UL)  /* SFACR[17] BYTE_SWAP bit. */
#define QSPI_SFACR_WA_U32                       ((uint32) 0x00010000UL)  /* SFACR[16] WA bit. */
#define QSPI_SFACR_CAS_MASK_U32                 ((uint32) 0x0000000FUL)  /* SFACR[3:0] CAS bit. */
#define QSPI_SFACR_CAS_SHIFT_U32                (0U)
#define QSPI_SFACR_PPWB_MASK_U32                ((uint32) 0x00001F00UL)  /* SFACR[12:8] PPWB bit. */
#define QSPI_SFACR_PPWB_SHIFT_U32               (8U)

#define QSPI_QSPI_0_AMBA_BASE_U32               ((uint32) 0x00000000UL)
#define QSPI_QSPI_1_AMBA_BASE_U32               ((uint32) 0x00000000UL)

#define QSPI_RXBUFFER_AHBBUS_MAX_SIZE_BYTES_U32       (512U)          /* Maximum size of RX Buffer using AHB bus in bytes, 128 entries x 4bytes each.*/
#define QSPI_RXBUFFER_IPBUS_MAX_SIZE_BYTES_U32        (256U)          /* Maximum size of RX Buffer using IP bus in bytes, 64 entries x 4bytes each.*/
#define QSPI_TXBUFFER_MAX_SIZE_BYTES_U32        (1024U)          /* Maximum size of TX Buffer in bytes, N entries x 4bytes each.*/
#define QSPI_TXBUFFER_MAX_SIZE_WORDS_U32        (256U)          /* Maximum size of TX Buffer in words(entries), N entries x 4bytes each.*/
#define QSPI_AHBTRANSFER_MAX_SIZE_BYTES_U32     (512U)          /* Maximum size of AHB write (Once the data reaches upto this watermark (512byte), transaction at flash interface is initiated).*/

#define QSPI_TXBUFFER_MIN_SIZE_BYTES_U32        (16U)           /* Minimum size of TX Buffer in bytes, 4 entries x 4bytes each.*/
#define QSPI_TXBUFFER_MIN_SIZE_WORDS_U32        (4U)            /* Minimum size of TX Buffer in words(entries), 4 entries x 4bytes each.*/

#define QSPI_PARALLEL_MODE_ENABLED              (1U)
#define QSPI_PARALLEL_MODE_DISABLED             (0U)

/********* LUT instruction type ************/
#define FLS_LUT_INSTR_STOP          (0U)
#define FLS_LUT_INSTR_CMD           (1U)
#define FLS_LUT_INSTR_ADDR          (2U)
#define FLS_LUT_INSTR_DUMMY         (3U)
#define FLS_LUT_INSTR_MODE          (4U)
#define FLS_LUT_INSTR_MODE2         (5U)
#define FLS_LUT_INSTR_MODE4         (6U)
#define FLS_LUT_INSTR_READ          (7U)
#define FLS_LUT_INSTR_WRITE         (8U)
#define FLS_LUT_INSTR_JMP_ON_CS     (9U)
#define FLS_LUT_INSTR_ADDR_DDR      (10U)
#define FLS_LUT_INSTR_MODE_DDR      (11U)
#define FLS_LUT_INSTR_MODE2_DDR     (12U)
#define FLS_LUT_INSTR_MODE4_DDR     (13U)
#define FLS_LUT_INSTR_READ_DDR      (14U)
#define FLS_LUT_INSTR_WRITE_DDR     (15U)
#define FLS_LUT_INSTR_DATA_LEARN    (16U)
#define FLS_LUT_INSTR_CMD_DDR       (17U)
#define FLS_LUT_INSTR_CADDR         (18U)
#define FLS_LUT_INSTR_CADDR_DDR     (19U)

#define FLS_LUT_OPER_16BIT_ADDR     (16U)
#define FLS_LUT_OPER_24BIT_ADDR     (24U)
#define FLS_LUT_OPER_32BIT_ADDR     (32U)


#define FLS_LUT_HYPER_WRITE_MEM_WRAP    (0x00U)
#define FLS_LUT_HYPER_WRITE_MEM_LINEAR  (0x20U)
#define FLS_LUT_HYPER_WRITE_REG_WRAP    (0x40U)
#define FLS_LUT_HYPER_WRITE_REG_LINEAR  (0x60U)
#define FLS_LUT_HYPER_READ_MEM_WRAP     (0x80U)
#define FLS_LUT_HYPER_READ_MEM_LINEAR   (0xA0U)
#define FLS_LUT_HYPER_READ_REG_WRAP     (0xC0U)
#define FLS_LUT_HYPER_READ_REG_LINEAR   (0xE0U)
#define FLS_LUT_HYPER_NOP               (0x00U)

#define FLS_LUT_SEQ_ID_0_U      (0U)
#define FLS_LUT_SEQ_ID_1_U      (1U)
#define FLS_LUT_SEQ_ID_2_U      (2U)
#define FLS_LUT_SEQ_ID_3_U      (3U)
#define FLS_LUT_SEQ_ID_4_U      (4U)
#define FLS_LUT_SEQ_ID_5_U      (5U)
#define FLS_LUT_SEQ_ID_6_U      (6U)
#define FLS_LUT_SEQ_ID_7_U      (7U)
#define FLS_LUT_SEQ_ID_8_U      (8U)
#define FLS_LUT_SEQ_ID_9_U      (9U)
#define FLS_LUT_SEQ_ID_10_U     (10U)
#define FLS_LUT_SEQ_ID_11_U     (11U)
#define FLS_LUT_SEQ_ID_12_U     (12U)
#define FLS_LUT_SEQ_ID_13_U     (13U)
#define FLS_LUT_SEQ_ID_14_U     (14U)
#define FLS_LUT_SEQ_ID_15_U     (15U)       /* The last LUT, reserved for Hyperflash volatile commands loading. */

#define FLS_LUT_VALUE_U32       (0U)       /* To clear all previous LUT values*/
#define FLS_NO_OF_LUTS_U8       (80U)

#define FLS_HYPERF_TYPE_1_ADDR_U32        ((uint32) 0xAAAUL)   /* Byte address 0xAAA will be sent to Hyperflash memory as 0x555, when WA bit is set. */
#define FLS_HYPERF_TYPE_2_ADDR_U32        ((uint32) 0x554UL)   /* Byte address 0x554 will be sent to Hyperflash memory as 0x2AA, when WA bit is set. */
#define FLS_HYPERF_TYPE_3_ADDR_U32        ((uint32) 0xAAUL)    /* Byte address 0xAA will be sent to Hyperflash memory as 0x55, when WA bit is set. */
#define FLS_HYPERF_TYPE_4_ADDR_U32        ((uint32) 0x0UL)     /* Byte address 0x0 will be sent to Hyperflash memory as 0x0, when WA bit is set. */



#define FLS_HYPERF_STATUS_REG_READ_ID_U8    (0x70U)
#define FLS_HYPERF_SECTOR_ERASE_ID_U8       (0x30U)
#define FLS_HYPERF_WRITE_BUFFER_ID_U8       (0x25U)

#define FLS_HYPERF_LINE_SIZE_U32    ((uint32)512UL) /* Each hypeflash line is 512 bytes long. */
#define Fls_READ_CONFIG_MODE_U8    3U  /* SPI, STR OPI, DTR OPI*/

#ifdef __cplusplus
}
#endif

#endif /*FLS_QSPI_REGISTERS_H*/

/** @} */
