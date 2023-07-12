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
 * @file S32R45_USDHC.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_USDHC
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
#if !defined(S32R45_USDHC_H_)  /* Check if memory map has not been already included */
#define S32R45_USDHC_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- USDHC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup USDHC_Peripheral_Access_Layer USDHC Peripheral Access Layer
 * @{
 */

/** USDHC - Register Layout Typedef */
typedef struct {
  __IO uint32_t S_ADDR;                            /**< DMA System Address, offset: 0x0 */
  __IO uint32_t BLK_ATT;                           /**< Block Attributes, offset: 0x4 */
  __IO uint32_t CMD_ARG;                           /**< Command Argument, offset: 0x8 */
  __IO uint32_t CMD_XFR_TYP;                       /**< Command Transfer Type, offset: 0xC */
  __I  uint32_t CMD_RSP0;                          /**< Command Response0, offset: 0x10 */
  __I  uint32_t CMD_RSP1;                          /**< Command Response1, offset: 0x14 */
  __I  uint32_t CMD_RSP2;                          /**< Command Response2, offset: 0x18 */
  __I  uint32_t CMD_RSP3;                          /**< Command Response3, offset: 0x1C */
  __IO uint32_t DATA_BUFF_ACC_PORT;                /**< Data Buffer Access Port, offset: 0x20 */
  __I  uint32_t PRES_STATE;                        /**< Present State, offset: 0x24 */
  __IO uint32_t PROT_CTRL;                         /**< Protocol Control, offset: 0x28 */
  __IO uint32_t SYS_CTRL;                          /**< System Control, offset: 0x2C */
  __IO uint32_t INT_STATUS;                        /**< Interrupt Status, offset: 0x30 */
  __IO uint32_t INT_STATUS_EN;                     /**< Interrupt Status Enable, offset: 0x34 */
  __IO uint32_t INT_SIGNAL_EN;                     /**< Interrupt Signal Enable, offset: 0x38 */
  __I  uint32_t AUTOCMD12_ERR_STATUS;              /**< Auto CMD12 Error Status, offset: 0x3C */
  __I  uint32_t HOST_CTRL_CAP;                     /**< Host Controller Capabilities, offset: 0x40 */
  __IO uint32_t WTMK_LVL;                          /**< Watermark Level, offset: 0x44 */
  __IO uint32_t MIX_CTRL;                          /**< Mixer Control, offset: 0x48 */
  uint8_t RESERVED_0[4];
  __O  uint32_t FORCE_EVENT;                       /**< Force Event, offset: 0x50 */
  __I  uint32_t ADMA_ERR_STATUS;                   /**< ADMA Error Status, offset: 0x54 */
  __IO uint32_t ADMA_SYS_ADDR;                     /**< ADMA System Address, offset: 0x58 */
  uint8_t RESERVED_1[100];
  __IO uint32_t VEND_SPEC;                         /**< Vendor Specific Register, offset: 0xC0 */
  __IO uint32_t MMC_BOOT;                          /**< MMC Boot, offset: 0xC4 */
  __IO uint32_t VEND_SPEC2;                        /**< Vendor Specific 2 Register, offset: 0xC8 */
} uSDHC_Type, *uSDHC_MemMapPtr;

/** Number of instances of the uSDHC module. */
#define uSDHC_INSTANCE_COUNT                     (1u)

/* uSDHC - Peripheral instance base addresses */
/** Peripheral uSDHC base address */
#define uSDHC_BASE                               (0x402F0000u)
/** Peripheral uSDHC base pointer */
#define uSDHC                                    ((uSDHC_Type *)uSDHC_BASE)
/** Array initializer of uSDHC peripheral base addresses */
#define uSDHC_BASE_ADDRS                         { uSDHC_BASE }
/** Array initializer of uSDHC peripheral base pointers */
#define uSDHC_BASE_PTRS                          { uSDHC }
/** Interrupt vectors for the uSDHC peripheral type */
#define uSDHC_IRQS                               { USDHC_IRQn }

/* ----------------------------------------------------------------------------
   -- uSDHC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup uSDHC_Register_Masks uSDHC Register Masks
 * @{
 */

/*! @name DS_ADDR - DMA System Address */
/*! @{ */
#define uSDHC_DS_ADDR_DS_ADDR_MASK               (0xFFFFFFFFU)
#define uSDHC_DS_ADDR_DS_ADDR_SHIFT              (0U)
#define uSDHC_DS_ADDR_DS_ADDR_WIDTH              (32U)
#define uSDHC_DS_ADDR_DS_ADDR(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_DS_ADDR_DS_ADDR_SHIFT)) & uSDHC_DS_ADDR_DS_ADDR_MASK)
/*! @} */

/*! @name BLK_ATT - Block Attributes */
/*! @{ */
#define uSDHC_BLK_ATT_BLKSIZE_MASK               (0x1FFFU)
#define uSDHC_BLK_ATT_BLKSIZE_SHIFT              (0U)
#define uSDHC_BLK_ATT_BLKSIZE_WIDTH              (13U)
#define uSDHC_BLK_ATT_BLKSIZE(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_BLK_ATT_BLKSIZE_SHIFT)) & uSDHC_BLK_ATT_BLKSIZE_MASK)
#define uSDHC_BLK_ATT_BLKCNT_MASK                (0xFFFF0000U)
#define uSDHC_BLK_ATT_BLKCNT_SHIFT               (16U)
#define uSDHC_BLK_ATT_BLKCNT_WIDTH               (16U)
#define uSDHC_BLK_ATT_BLKCNT(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_BLK_ATT_BLKCNT_SHIFT)) & uSDHC_BLK_ATT_BLKCNT_MASK)
/*! @} */

/*! @name CMD_ARG - Command Argument */
/*! @{ */
#define uSDHC_CMD_ARG_CMDARG_MASK                (0xFFFFFFFFU)
#define uSDHC_CMD_ARG_CMDARG_SHIFT               (0U)
#define uSDHC_CMD_ARG_CMDARG_WIDTH               (32U)
#define uSDHC_CMD_ARG_CMDARG(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_ARG_CMDARG_SHIFT)) & uSDHC_CMD_ARG_CMDARG_MASK)
/*! @} */

/*! @name CMD_XFR_TYP - Command Transfer Type */
/*! @{ */
#define uSDHC_CMD_XFR_TYP_RSPTYP_MASK            (0x30000U)
#define uSDHC_CMD_XFR_TYP_RSPTYP_SHIFT           (16U)
#define uSDHC_CMD_XFR_TYP_RSPTYP_WIDTH           (2U)
#define uSDHC_CMD_XFR_TYP_RSPTYP(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_XFR_TYP_RSPTYP_SHIFT)) & uSDHC_CMD_XFR_TYP_RSPTYP_MASK)
#define uSDHC_CMD_XFR_TYP_CCCEN_MASK             (0x80000U)
#define uSDHC_CMD_XFR_TYP_CCCEN_SHIFT            (19U)
#define uSDHC_CMD_XFR_TYP_CCCEN_WIDTH            (1U)
#define uSDHC_CMD_XFR_TYP_CCCEN(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_XFR_TYP_CCCEN_SHIFT)) & uSDHC_CMD_XFR_TYP_CCCEN_MASK)
#define uSDHC_CMD_XFR_TYP_CICEN_MASK             (0x100000U)
#define uSDHC_CMD_XFR_TYP_CICEN_SHIFT            (20U)
#define uSDHC_CMD_XFR_TYP_CICEN_WIDTH            (1U)
#define uSDHC_CMD_XFR_TYP_CICEN(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_XFR_TYP_CICEN_SHIFT)) & uSDHC_CMD_XFR_TYP_CICEN_MASK)
#define uSDHC_CMD_XFR_TYP_DPSEL_MASK             (0x200000U)
#define uSDHC_CMD_XFR_TYP_DPSEL_SHIFT            (21U)
#define uSDHC_CMD_XFR_TYP_DPSEL_WIDTH            (1U)
#define uSDHC_CMD_XFR_TYP_DPSEL(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_XFR_TYP_DPSEL_SHIFT)) & uSDHC_CMD_XFR_TYP_DPSEL_MASK)
#define uSDHC_CMD_XFR_TYP_CMDTYP_MASK            (0xC00000U)
#define uSDHC_CMD_XFR_TYP_CMDTYP_SHIFT           (22U)
#define uSDHC_CMD_XFR_TYP_CMDTYP_WIDTH           (2U)
#define uSDHC_CMD_XFR_TYP_CMDTYP(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_XFR_TYP_CMDTYP_SHIFT)) & uSDHC_CMD_XFR_TYP_CMDTYP_MASK)
#define uSDHC_CMD_XFR_TYP_CMDINX_MASK            (0x3F000000U)
#define uSDHC_CMD_XFR_TYP_CMDINX_SHIFT           (24U)
#define uSDHC_CMD_XFR_TYP_CMDINX_WIDTH           (6U)
#define uSDHC_CMD_XFR_TYP_CMDINX(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_XFR_TYP_CMDINX_SHIFT)) & uSDHC_CMD_XFR_TYP_CMDINX_MASK)
/*! @} */

/*! @name CMD_RSP0 - Command Response0 */
/*! @{ */
#define uSDHC_CMD_RSP0_CMDRSP0_MASK              (0xFFFFFFFFU)
#define uSDHC_CMD_RSP0_CMDRSP0_SHIFT             (0U)
#define uSDHC_CMD_RSP0_CMDRSP0_WIDTH             (32U)
#define uSDHC_CMD_RSP0_CMDRSP0(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_RSP0_CMDRSP0_SHIFT)) & uSDHC_CMD_RSP0_CMDRSP0_MASK)
/*! @} */

/*! @name CMD_RSP1 - Command Response1 */
/*! @{ */
#define uSDHC_CMD_RSP1_CMDRSP1_MASK              (0xFFFFFFFFU)
#define uSDHC_CMD_RSP1_CMDRSP1_SHIFT             (0U)
#define uSDHC_CMD_RSP1_CMDRSP1_WIDTH             (32U)
#define uSDHC_CMD_RSP1_CMDRSP1(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_RSP1_CMDRSP1_SHIFT)) & uSDHC_CMD_RSP1_CMDRSP1_MASK)
/*! @} */

/*! @name CMD_RSP2 - Command Response2 */
/*! @{ */
#define uSDHC_CMD_RSP2_CMDRSP2_MASK              (0xFFFFFFFFU)
#define uSDHC_CMD_RSP2_CMDRSP2_SHIFT             (0U)
#define uSDHC_CMD_RSP2_CMDRSP2_WIDTH             (32U)
#define uSDHC_CMD_RSP2_CMDRSP2(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_RSP2_CMDRSP2_SHIFT)) & uSDHC_CMD_RSP2_CMDRSP2_MASK)
/*! @} */

/*! @name CMD_RSP3 - Command Response3 */
/*! @{ */
#define uSDHC_CMD_RSP3_CMDRSP3_MASK              (0xFFFFFFFFU)
#define uSDHC_CMD_RSP3_CMDRSP3_SHIFT             (0U)
#define uSDHC_CMD_RSP3_CMDRSP3_WIDTH             (32U)
#define uSDHC_CMD_RSP3_CMDRSP3(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_CMD_RSP3_CMDRSP3_SHIFT)) & uSDHC_CMD_RSP3_CMDRSP3_MASK)
/*! @} */

/*! @name DATA_BUFF_ACC_PORT - Data Buffer Access Port */
/*! @{ */
#define uSDHC_DATA_BUFF_ACC_PORT_DATCONT_MASK    (0xFFFFFFFFU)
#define uSDHC_DATA_BUFF_ACC_PORT_DATCONT_SHIFT   (0U)
#define uSDHC_DATA_BUFF_ACC_PORT_DATCONT_WIDTH   (32U)
#define uSDHC_DATA_BUFF_ACC_PORT_DATCONT(x)      (((uint32_t)(((uint32_t)(x)) << uSDHC_DATA_BUFF_ACC_PORT_DATCONT_SHIFT)) & uSDHC_DATA_BUFF_ACC_PORT_DATCONT_MASK)
/*! @} */

/*! @name PRES_STATE - Present State */
/*! @{ */
#define uSDHC_PRES_STATE_CIHB_MASK               (0x1U)
#define uSDHC_PRES_STATE_CIHB_SHIFT              (0U)
#define uSDHC_PRES_STATE_CIHB_WIDTH              (1U)
#define uSDHC_PRES_STATE_CIHB(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_CIHB_SHIFT)) & uSDHC_PRES_STATE_CIHB_MASK)
#define uSDHC_PRES_STATE_CDIHB_MASK              (0x2U)
#define uSDHC_PRES_STATE_CDIHB_SHIFT             (1U)
#define uSDHC_PRES_STATE_CDIHB_WIDTH             (1U)
#define uSDHC_PRES_STATE_CDIHB(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_CDIHB_SHIFT)) & uSDHC_PRES_STATE_CDIHB_MASK)
#define uSDHC_PRES_STATE_DLA_MASK                (0x4U)
#define uSDHC_PRES_STATE_DLA_SHIFT               (2U)
#define uSDHC_PRES_STATE_DLA_WIDTH               (1U)
#define uSDHC_PRES_STATE_DLA(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_DLA_SHIFT)) & uSDHC_PRES_STATE_DLA_MASK)
#define uSDHC_PRES_STATE_SDSTB_MASK              (0x8U)
#define uSDHC_PRES_STATE_SDSTB_SHIFT             (3U)
#define uSDHC_PRES_STATE_SDSTB_WIDTH             (1U)
#define uSDHC_PRES_STATE_SDSTB(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_SDSTB_SHIFT)) & uSDHC_PRES_STATE_SDSTB_MASK)
#define uSDHC_PRES_STATE_IPGOFF_MASK             (0x10U)
#define uSDHC_PRES_STATE_IPGOFF_SHIFT            (4U)
#define uSDHC_PRES_STATE_IPGOFF_WIDTH            (1U)
#define uSDHC_PRES_STATE_IPGOFF(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_IPGOFF_SHIFT)) & uSDHC_PRES_STATE_IPGOFF_MASK)
#define uSDHC_PRES_STATE_HCKOFF_MASK             (0x20U)
#define uSDHC_PRES_STATE_HCKOFF_SHIFT            (5U)
#define uSDHC_PRES_STATE_HCKOFF_WIDTH            (1U)
#define uSDHC_PRES_STATE_HCKOFF(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_HCKOFF_SHIFT)) & uSDHC_PRES_STATE_HCKOFF_MASK)
#define uSDHC_PRES_STATE_PEROFF_MASK             (0x40U)
#define uSDHC_PRES_STATE_PEROFF_SHIFT            (6U)
#define uSDHC_PRES_STATE_PEROFF_WIDTH            (1U)
#define uSDHC_PRES_STATE_PEROFF(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_PEROFF_SHIFT)) & uSDHC_PRES_STATE_PEROFF_MASK)
#define uSDHC_PRES_STATE_SDOFF_MASK              (0x80U)
#define uSDHC_PRES_STATE_SDOFF_SHIFT             (7U)
#define uSDHC_PRES_STATE_SDOFF_WIDTH             (1U)
#define uSDHC_PRES_STATE_SDOFF(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_SDOFF_SHIFT)) & uSDHC_PRES_STATE_SDOFF_MASK)
#define uSDHC_PRES_STATE_WTA_MASK                (0x100U)
#define uSDHC_PRES_STATE_WTA_SHIFT               (8U)
#define uSDHC_PRES_STATE_WTA_WIDTH               (1U)
#define uSDHC_PRES_STATE_WTA(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_WTA_SHIFT)) & uSDHC_PRES_STATE_WTA_MASK)
#define uSDHC_PRES_STATE_RTA_MASK                (0x200U)
#define uSDHC_PRES_STATE_RTA_SHIFT               (9U)
#define uSDHC_PRES_STATE_RTA_WIDTH               (1U)
#define uSDHC_PRES_STATE_RTA(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_RTA_SHIFT)) & uSDHC_PRES_STATE_RTA_MASK)
#define uSDHC_PRES_STATE_BWEN_MASK               (0x400U)
#define uSDHC_PRES_STATE_BWEN_SHIFT              (10U)
#define uSDHC_PRES_STATE_BWEN_WIDTH              (1U)
#define uSDHC_PRES_STATE_BWEN(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_BWEN_SHIFT)) & uSDHC_PRES_STATE_BWEN_MASK)
#define uSDHC_PRES_STATE_BREN_MASK               (0x800U)
#define uSDHC_PRES_STATE_BREN_SHIFT              (11U)
#define uSDHC_PRES_STATE_BREN_WIDTH              (1U)
#define uSDHC_PRES_STATE_BREN(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_BREN_SHIFT)) & uSDHC_PRES_STATE_BREN_MASK)
#define uSDHC_PRES_STATE_CINST_MASK              (0x10000U)
#define uSDHC_PRES_STATE_CINST_SHIFT             (16U)
#define uSDHC_PRES_STATE_CINST_WIDTH             (1U)
#define uSDHC_PRES_STATE_CINST(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_CINST_SHIFT)) & uSDHC_PRES_STATE_CINST_MASK)
#define uSDHC_PRES_STATE_CDPL_MASK               (0x40000U)
#define uSDHC_PRES_STATE_CDPL_SHIFT              (18U)
#define uSDHC_PRES_STATE_CDPL_WIDTH              (1U)
#define uSDHC_PRES_STATE_CDPL(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_CDPL_SHIFT)) & uSDHC_PRES_STATE_CDPL_MASK)
#define uSDHC_PRES_STATE_WPSPL_MASK              (0x80000U)
#define uSDHC_PRES_STATE_WPSPL_SHIFT             (19U)
#define uSDHC_PRES_STATE_WPSPL_WIDTH             (1U)
#define uSDHC_PRES_STATE_WPSPL(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_WPSPL_SHIFT)) & uSDHC_PRES_STATE_WPSPL_MASK)
#define uSDHC_PRES_STATE_CLSL_MASK               (0x800000U)
#define uSDHC_PRES_STATE_CLSL_SHIFT              (23U)
#define uSDHC_PRES_STATE_CLSL_WIDTH              (1U)
#define uSDHC_PRES_STATE_CLSL(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_CLSL_SHIFT)) & uSDHC_PRES_STATE_CLSL_MASK)
#define uSDHC_PRES_STATE_DLSL_MASK               (0xFF000000U)
#define uSDHC_PRES_STATE_DLSL_SHIFT              (24U)
#define uSDHC_PRES_STATE_DLSL_WIDTH              (8U)
#define uSDHC_PRES_STATE_DLSL(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_PRES_STATE_DLSL_SHIFT)) & uSDHC_PRES_STATE_DLSL_MASK)
/*! @} */

/*! @name PROT_CTRL - Protocol Control */
/*! @{ */
#define uSDHC_PROT_CTRL_DTW_MASK                 (0x6U)
#define uSDHC_PROT_CTRL_DTW_SHIFT                (1U)
#define uSDHC_PROT_CTRL_DTW_WIDTH                (2U)
#define uSDHC_PROT_CTRL_DTW(x)                   (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_DTW_SHIFT)) & uSDHC_PROT_CTRL_DTW_MASK)
#define uSDHC_PROT_CTRL_D3CD_MASK                (0x8U)
#define uSDHC_PROT_CTRL_D3CD_SHIFT               (3U)
#define uSDHC_PROT_CTRL_D3CD_WIDTH               (1U)
#define uSDHC_PROT_CTRL_D3CD(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_D3CD_SHIFT)) & uSDHC_PROT_CTRL_D3CD_MASK)
#define uSDHC_PROT_CTRL_EMODE_MASK               (0x30U)
#define uSDHC_PROT_CTRL_EMODE_SHIFT              (4U)
#define uSDHC_PROT_CTRL_EMODE_WIDTH              (2U)
#define uSDHC_PROT_CTRL_EMODE(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_EMODE_SHIFT)) & uSDHC_PROT_CTRL_EMODE_MASK)
#define uSDHC_PROT_CTRL_CDTL_MASK                (0x40U)
#define uSDHC_PROT_CTRL_CDTL_SHIFT               (6U)
#define uSDHC_PROT_CTRL_CDTL_WIDTH               (1U)
#define uSDHC_PROT_CTRL_CDTL(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_CDTL_SHIFT)) & uSDHC_PROT_CTRL_CDTL_MASK)
#define uSDHC_PROT_CTRL_CDSS_MASK                (0x80U)
#define uSDHC_PROT_CTRL_CDSS_SHIFT               (7U)
#define uSDHC_PROT_CTRL_CDSS_WIDTH               (1U)
#define uSDHC_PROT_CTRL_CDSS(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_CDSS_SHIFT)) & uSDHC_PROT_CTRL_CDSS_MASK)
#define uSDHC_PROT_CTRL_DMASEL_MASK              (0x300U)
#define uSDHC_PROT_CTRL_DMASEL_SHIFT             (8U)
#define uSDHC_PROT_CTRL_DMASEL_WIDTH             (2U)
#define uSDHC_PROT_CTRL_DMASEL(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_DMASEL_SHIFT)) & uSDHC_PROT_CTRL_DMASEL_MASK)
#define uSDHC_PROT_CTRL_SABGREQ_MASK             (0x10000U)
#define uSDHC_PROT_CTRL_SABGREQ_SHIFT            (16U)
#define uSDHC_PROT_CTRL_SABGREQ_WIDTH            (1U)
#define uSDHC_PROT_CTRL_SABGREQ(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_SABGREQ_SHIFT)) & uSDHC_PROT_CTRL_SABGREQ_MASK)
#define uSDHC_PROT_CTRL_CREQ_MASK                (0x20000U)
#define uSDHC_PROT_CTRL_CREQ_SHIFT               (17U)
#define uSDHC_PROT_CTRL_CREQ_WIDTH               (1U)
#define uSDHC_PROT_CTRL_CREQ(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_CREQ_SHIFT)) & uSDHC_PROT_CTRL_CREQ_MASK)
#define uSDHC_PROT_CTRL_RWCTL_MASK               (0x40000U)
#define uSDHC_PROT_CTRL_RWCTL_SHIFT              (18U)
#define uSDHC_PROT_CTRL_RWCTL_WIDTH              (1U)
#define uSDHC_PROT_CTRL_RWCTL(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_RWCTL_SHIFT)) & uSDHC_PROT_CTRL_RWCTL_MASK)
#define uSDHC_PROT_CTRL_IABG_MASK                (0x80000U)
#define uSDHC_PROT_CTRL_IABG_SHIFT               (19U)
#define uSDHC_PROT_CTRL_IABG_WIDTH               (1U)
#define uSDHC_PROT_CTRL_IABG(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_IABG_SHIFT)) & uSDHC_PROT_CTRL_IABG_MASK)
#define uSDHC_PROT_CTRL_RD_DONE_NO_8CLK_MASK     (0x100000U)
#define uSDHC_PROT_CTRL_RD_DONE_NO_8CLK_SHIFT    (20U)
#define uSDHC_PROT_CTRL_RD_DONE_NO_8CLK_WIDTH    (1U)
#define uSDHC_PROT_CTRL_RD_DONE_NO_8CLK(x)       (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_RD_DONE_NO_8CLK_SHIFT)) & uSDHC_PROT_CTRL_RD_DONE_NO_8CLK_MASK)
#define uSDHC_PROT_CTRL_WECINT_MASK              (0x1000000U)
#define uSDHC_PROT_CTRL_WECINT_SHIFT             (24U)
#define uSDHC_PROT_CTRL_WECINT_WIDTH             (1U)
#define uSDHC_PROT_CTRL_WECINT(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_WECINT_SHIFT)) & uSDHC_PROT_CTRL_WECINT_MASK)
#define uSDHC_PROT_CTRL_WECINS_MASK              (0x2000000U)
#define uSDHC_PROT_CTRL_WECINS_SHIFT             (25U)
#define uSDHC_PROT_CTRL_WECINS_WIDTH             (1U)
#define uSDHC_PROT_CTRL_WECINS(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_WECINS_SHIFT)) & uSDHC_PROT_CTRL_WECINS_MASK)
#define uSDHC_PROT_CTRL_WECRM_MASK               (0x4000000U)
#define uSDHC_PROT_CTRL_WECRM_SHIFT              (26U)
#define uSDHC_PROT_CTRL_WECRM_WIDTH              (1U)
#define uSDHC_PROT_CTRL_WECRM(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_WECRM_SHIFT)) & uSDHC_PROT_CTRL_WECRM_MASK)
#define uSDHC_PROT_CTRL_NON_EXACT_BLK_RD_MASK    (0x40000000U)
#define uSDHC_PROT_CTRL_NON_EXACT_BLK_RD_SHIFT   (30U)
#define uSDHC_PROT_CTRL_NON_EXACT_BLK_RD_WIDTH   (1U)
#define uSDHC_PROT_CTRL_NON_EXACT_BLK_RD(x)      (((uint32_t)(((uint32_t)(x)) << uSDHC_PROT_CTRL_NON_EXACT_BLK_RD_SHIFT)) & uSDHC_PROT_CTRL_NON_EXACT_BLK_RD_MASK)
/*! @} */

/*! @name SYS_CTRL - System Control */
/*! @{ */
#define uSDHC_SYS_CTRL_DVS_MASK                  (0xF0U)
#define uSDHC_SYS_CTRL_DVS_SHIFT                 (4U)
#define uSDHC_SYS_CTRL_DVS_WIDTH                 (4U)
#define uSDHC_SYS_CTRL_DVS(x)                    (((uint32_t)(((uint32_t)(x)) << uSDHC_SYS_CTRL_DVS_SHIFT)) & uSDHC_SYS_CTRL_DVS_MASK)
#define uSDHC_SYS_CTRL_SDCLKFS_MASK              (0xFF00U)
#define uSDHC_SYS_CTRL_SDCLKFS_SHIFT             (8U)
#define uSDHC_SYS_CTRL_SDCLKFS_WIDTH             (8U)
#define uSDHC_SYS_CTRL_SDCLKFS(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_SYS_CTRL_SDCLKFS_SHIFT)) & uSDHC_SYS_CTRL_SDCLKFS_MASK)
#define uSDHC_SYS_CTRL_DTOCV_MASK                (0xF0000U)
#define uSDHC_SYS_CTRL_DTOCV_SHIFT               (16U)
#define uSDHC_SYS_CTRL_DTOCV_WIDTH               (4U)
#define uSDHC_SYS_CTRL_DTOCV(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_SYS_CTRL_DTOCV_SHIFT)) & uSDHC_SYS_CTRL_DTOCV_MASK)
#define uSDHC_SYS_CTRL_IPP_RST_N_MASK            (0x800000U)
#define uSDHC_SYS_CTRL_IPP_RST_N_SHIFT           (23U)
#define uSDHC_SYS_CTRL_IPP_RST_N_WIDTH           (1U)
#define uSDHC_SYS_CTRL_IPP_RST_N(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_SYS_CTRL_IPP_RST_N_SHIFT)) & uSDHC_SYS_CTRL_IPP_RST_N_MASK)
#define uSDHC_SYS_CTRL_RSTA_MASK                 (0x1000000U)
#define uSDHC_SYS_CTRL_RSTA_SHIFT                (24U)
#define uSDHC_SYS_CTRL_RSTA_WIDTH                (1U)
#define uSDHC_SYS_CTRL_RSTA(x)                   (((uint32_t)(((uint32_t)(x)) << uSDHC_SYS_CTRL_RSTA_SHIFT)) & uSDHC_SYS_CTRL_RSTA_MASK)
#define uSDHC_SYS_CTRL_RSTC_MASK                 (0x2000000U)
#define uSDHC_SYS_CTRL_RSTC_SHIFT                (25U)
#define uSDHC_SYS_CTRL_RSTC_WIDTH                (1U)
#define uSDHC_SYS_CTRL_RSTC(x)                   (((uint32_t)(((uint32_t)(x)) << uSDHC_SYS_CTRL_RSTC_SHIFT)) & uSDHC_SYS_CTRL_RSTC_MASK)
#define uSDHC_SYS_CTRL_RSTD_MASK                 (0x4000000U)
#define uSDHC_SYS_CTRL_RSTD_SHIFT                (26U)
#define uSDHC_SYS_CTRL_RSTD_WIDTH                (1U)
#define uSDHC_SYS_CTRL_RSTD(x)                   (((uint32_t)(((uint32_t)(x)) << uSDHC_SYS_CTRL_RSTD_SHIFT)) & uSDHC_SYS_CTRL_RSTD_MASK)
#define uSDHC_SYS_CTRL_INITA_MASK                (0x8000000U)
#define uSDHC_SYS_CTRL_INITA_SHIFT               (27U)
#define uSDHC_SYS_CTRL_INITA_WIDTH               (1U)
#define uSDHC_SYS_CTRL_INITA(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_SYS_CTRL_INITA_SHIFT)) & uSDHC_SYS_CTRL_INITA_MASK)
/*! @} */

/*! @name INT_STATUS - Interrupt Status */
/*! @{ */
#define uSDHC_INT_STATUS_CC_MASK                 (0x1U)
#define uSDHC_INT_STATUS_CC_SHIFT                (0U)
#define uSDHC_INT_STATUS_CC_WIDTH                (1U)
#define uSDHC_INT_STATUS_CC(x)                   (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_CC_SHIFT)) & uSDHC_INT_STATUS_CC_MASK)
#define uSDHC_INT_STATUS_TC_MASK                 (0x2U)
#define uSDHC_INT_STATUS_TC_SHIFT                (1U)
#define uSDHC_INT_STATUS_TC_WIDTH                (1U)
#define uSDHC_INT_STATUS_TC(x)                   (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_TC_SHIFT)) & uSDHC_INT_STATUS_TC_MASK)
#define uSDHC_INT_STATUS_BGE_MASK                (0x4U)
#define uSDHC_INT_STATUS_BGE_SHIFT               (2U)
#define uSDHC_INT_STATUS_BGE_WIDTH               (1U)
#define uSDHC_INT_STATUS_BGE(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_BGE_SHIFT)) & uSDHC_INT_STATUS_BGE_MASK)
#define uSDHC_INT_STATUS_DINT_MASK               (0x8U)
#define uSDHC_INT_STATUS_DINT_SHIFT              (3U)
#define uSDHC_INT_STATUS_DINT_WIDTH              (1U)
#define uSDHC_INT_STATUS_DINT(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_DINT_SHIFT)) & uSDHC_INT_STATUS_DINT_MASK)
#define uSDHC_INT_STATUS_BWR_MASK                (0x10U)
#define uSDHC_INT_STATUS_BWR_SHIFT               (4U)
#define uSDHC_INT_STATUS_BWR_WIDTH               (1U)
#define uSDHC_INT_STATUS_BWR(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_BWR_SHIFT)) & uSDHC_INT_STATUS_BWR_MASK)
#define uSDHC_INT_STATUS_BRR_MASK                (0x20U)
#define uSDHC_INT_STATUS_BRR_SHIFT               (5U)
#define uSDHC_INT_STATUS_BRR_WIDTH               (1U)
#define uSDHC_INT_STATUS_BRR(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_BRR_SHIFT)) & uSDHC_INT_STATUS_BRR_MASK)
#define uSDHC_INT_STATUS_CINS_MASK               (0x40U)
#define uSDHC_INT_STATUS_CINS_SHIFT              (6U)
#define uSDHC_INT_STATUS_CINS_WIDTH              (1U)
#define uSDHC_INT_STATUS_CINS(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_CINS_SHIFT)) & uSDHC_INT_STATUS_CINS_MASK)
#define uSDHC_INT_STATUS_CRM_MASK                (0x80U)
#define uSDHC_INT_STATUS_CRM_SHIFT               (7U)
#define uSDHC_INT_STATUS_CRM_WIDTH               (1U)
#define uSDHC_INT_STATUS_CRM(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_CRM_SHIFT)) & uSDHC_INT_STATUS_CRM_MASK)
#define uSDHC_INT_STATUS_CINT_MASK               (0x100U)
#define uSDHC_INT_STATUS_CINT_SHIFT              (8U)
#define uSDHC_INT_STATUS_CINT_WIDTH              (1U)
#define uSDHC_INT_STATUS_CINT(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_CINT_SHIFT)) & uSDHC_INT_STATUS_CINT_MASK)
#define uSDHC_INT_STATUS_CTOE_MASK               (0x10000U)
#define uSDHC_INT_STATUS_CTOE_SHIFT              (16U)
#define uSDHC_INT_STATUS_CTOE_WIDTH              (1U)
#define uSDHC_INT_STATUS_CTOE(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_CTOE_SHIFT)) & uSDHC_INT_STATUS_CTOE_MASK)
#define uSDHC_INT_STATUS_CCE_MASK                (0x20000U)
#define uSDHC_INT_STATUS_CCE_SHIFT               (17U)
#define uSDHC_INT_STATUS_CCE_WIDTH               (1U)
#define uSDHC_INT_STATUS_CCE(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_CCE_SHIFT)) & uSDHC_INT_STATUS_CCE_MASK)
#define uSDHC_INT_STATUS_CEBE_MASK               (0x40000U)
#define uSDHC_INT_STATUS_CEBE_SHIFT              (18U)
#define uSDHC_INT_STATUS_CEBE_WIDTH              (1U)
#define uSDHC_INT_STATUS_CEBE(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_CEBE_SHIFT)) & uSDHC_INT_STATUS_CEBE_MASK)
#define uSDHC_INT_STATUS_CIE_MASK                (0x80000U)
#define uSDHC_INT_STATUS_CIE_SHIFT               (19U)
#define uSDHC_INT_STATUS_CIE_WIDTH               (1U)
#define uSDHC_INT_STATUS_CIE(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_CIE_SHIFT)) & uSDHC_INT_STATUS_CIE_MASK)
#define uSDHC_INT_STATUS_DTOE_MASK               (0x100000U)
#define uSDHC_INT_STATUS_DTOE_SHIFT              (20U)
#define uSDHC_INT_STATUS_DTOE_WIDTH              (1U)
#define uSDHC_INT_STATUS_DTOE(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_DTOE_SHIFT)) & uSDHC_INT_STATUS_DTOE_MASK)
#define uSDHC_INT_STATUS_DCE_MASK                (0x200000U)
#define uSDHC_INT_STATUS_DCE_SHIFT               (21U)
#define uSDHC_INT_STATUS_DCE_WIDTH               (1U)
#define uSDHC_INT_STATUS_DCE(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_DCE_SHIFT)) & uSDHC_INT_STATUS_DCE_MASK)
#define uSDHC_INT_STATUS_DEBE_MASK               (0x400000U)
#define uSDHC_INT_STATUS_DEBE_SHIFT              (22U)
#define uSDHC_INT_STATUS_DEBE_WIDTH              (1U)
#define uSDHC_INT_STATUS_DEBE(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_DEBE_SHIFT)) & uSDHC_INT_STATUS_DEBE_MASK)
#define uSDHC_INT_STATUS_AC12E_MASK              (0x1000000U)
#define uSDHC_INT_STATUS_AC12E_SHIFT             (24U)
#define uSDHC_INT_STATUS_AC12E_WIDTH             (1U)
#define uSDHC_INT_STATUS_AC12E(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_AC12E_SHIFT)) & uSDHC_INT_STATUS_AC12E_MASK)
#define uSDHC_INT_STATUS_DMAE_MASK               (0x10000000U)
#define uSDHC_INT_STATUS_DMAE_SHIFT              (28U)
#define uSDHC_INT_STATUS_DMAE_WIDTH              (1U)
#define uSDHC_INT_STATUS_DMAE(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_DMAE_SHIFT)) & uSDHC_INT_STATUS_DMAE_MASK)
/*! @} */

/*! @name INT_STATUS_EN - Interrupt Status Enable */
/*! @{ */
#define uSDHC_INT_STATUS_EN_CCSEN_MASK           (0x1U)
#define uSDHC_INT_STATUS_EN_CCSEN_SHIFT          (0U)
#define uSDHC_INT_STATUS_EN_CCSEN_WIDTH          (1U)
#define uSDHC_INT_STATUS_EN_CCSEN(x)             (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_CCSEN_SHIFT)) & uSDHC_INT_STATUS_EN_CCSEN_MASK)
#define uSDHC_INT_STATUS_EN_TCSEN_MASK           (0x2U)
#define uSDHC_INT_STATUS_EN_TCSEN_SHIFT          (1U)
#define uSDHC_INT_STATUS_EN_TCSEN_WIDTH          (1U)
#define uSDHC_INT_STATUS_EN_TCSEN(x)             (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_TCSEN_SHIFT)) & uSDHC_INT_STATUS_EN_TCSEN_MASK)
#define uSDHC_INT_STATUS_EN_BGESEN_MASK          (0x4U)
#define uSDHC_INT_STATUS_EN_BGESEN_SHIFT         (2U)
#define uSDHC_INT_STATUS_EN_BGESEN_WIDTH         (1U)
#define uSDHC_INT_STATUS_EN_BGESEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_BGESEN_SHIFT)) & uSDHC_INT_STATUS_EN_BGESEN_MASK)
#define uSDHC_INT_STATUS_EN_DINTSEN_MASK         (0x8U)
#define uSDHC_INT_STATUS_EN_DINTSEN_SHIFT        (3U)
#define uSDHC_INT_STATUS_EN_DINTSEN_WIDTH        (1U)
#define uSDHC_INT_STATUS_EN_DINTSEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_DINTSEN_SHIFT)) & uSDHC_INT_STATUS_EN_DINTSEN_MASK)
#define uSDHC_INT_STATUS_EN_BWRSEN_MASK          (0x10U)
#define uSDHC_INT_STATUS_EN_BWRSEN_SHIFT         (4U)
#define uSDHC_INT_STATUS_EN_BWRSEN_WIDTH         (1U)
#define uSDHC_INT_STATUS_EN_BWRSEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_BWRSEN_SHIFT)) & uSDHC_INT_STATUS_EN_BWRSEN_MASK)
#define uSDHC_INT_STATUS_EN_BRRSEN_MASK          (0x20U)
#define uSDHC_INT_STATUS_EN_BRRSEN_SHIFT         (5U)
#define uSDHC_INT_STATUS_EN_BRRSEN_WIDTH         (1U)
#define uSDHC_INT_STATUS_EN_BRRSEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_BRRSEN_SHIFT)) & uSDHC_INT_STATUS_EN_BRRSEN_MASK)
#define uSDHC_INT_STATUS_EN_CINSSEN_MASK         (0x40U)
#define uSDHC_INT_STATUS_EN_CINSSEN_SHIFT        (6U)
#define uSDHC_INT_STATUS_EN_CINSSEN_WIDTH        (1U)
#define uSDHC_INT_STATUS_EN_CINSSEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_CINSSEN_SHIFT)) & uSDHC_INT_STATUS_EN_CINSSEN_MASK)
#define uSDHC_INT_STATUS_EN_CRMSEN_MASK          (0x80U)
#define uSDHC_INT_STATUS_EN_CRMSEN_SHIFT         (7U)
#define uSDHC_INT_STATUS_EN_CRMSEN_WIDTH         (1U)
#define uSDHC_INT_STATUS_EN_CRMSEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_CRMSEN_SHIFT)) & uSDHC_INT_STATUS_EN_CRMSEN_MASK)
#define uSDHC_INT_STATUS_EN_CINTSEN_MASK         (0x100U)
#define uSDHC_INT_STATUS_EN_CINTSEN_SHIFT        (8U)
#define uSDHC_INT_STATUS_EN_CINTSEN_WIDTH        (1U)
#define uSDHC_INT_STATUS_EN_CINTSEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_CINTSEN_SHIFT)) & uSDHC_INT_STATUS_EN_CINTSEN_MASK)
#define uSDHC_INT_STATUS_EN_CTOESEN_MASK         (0x10000U)
#define uSDHC_INT_STATUS_EN_CTOESEN_SHIFT        (16U)
#define uSDHC_INT_STATUS_EN_CTOESEN_WIDTH        (1U)
#define uSDHC_INT_STATUS_EN_CTOESEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_CTOESEN_SHIFT)) & uSDHC_INT_STATUS_EN_CTOESEN_MASK)
#define uSDHC_INT_STATUS_EN_CCESEN_MASK          (0x20000U)
#define uSDHC_INT_STATUS_EN_CCESEN_SHIFT         (17U)
#define uSDHC_INT_STATUS_EN_CCESEN_WIDTH         (1U)
#define uSDHC_INT_STATUS_EN_CCESEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_CCESEN_SHIFT)) & uSDHC_INT_STATUS_EN_CCESEN_MASK)
#define uSDHC_INT_STATUS_EN_CEBESEN_MASK         (0x40000U)
#define uSDHC_INT_STATUS_EN_CEBESEN_SHIFT        (18U)
#define uSDHC_INT_STATUS_EN_CEBESEN_WIDTH        (1U)
#define uSDHC_INT_STATUS_EN_CEBESEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_CEBESEN_SHIFT)) & uSDHC_INT_STATUS_EN_CEBESEN_MASK)
#define uSDHC_INT_STATUS_EN_CIESEN_MASK          (0x80000U)
#define uSDHC_INT_STATUS_EN_CIESEN_SHIFT         (19U)
#define uSDHC_INT_STATUS_EN_CIESEN_WIDTH         (1U)
#define uSDHC_INT_STATUS_EN_CIESEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_CIESEN_SHIFT)) & uSDHC_INT_STATUS_EN_CIESEN_MASK)
#define uSDHC_INT_STATUS_EN_DTOESEN_MASK         (0x100000U)
#define uSDHC_INT_STATUS_EN_DTOESEN_SHIFT        (20U)
#define uSDHC_INT_STATUS_EN_DTOESEN_WIDTH        (1U)
#define uSDHC_INT_STATUS_EN_DTOESEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_DTOESEN_SHIFT)) & uSDHC_INT_STATUS_EN_DTOESEN_MASK)
#define uSDHC_INT_STATUS_EN_DCESEN_MASK          (0x200000U)
#define uSDHC_INT_STATUS_EN_DCESEN_SHIFT         (21U)
#define uSDHC_INT_STATUS_EN_DCESEN_WIDTH         (1U)
#define uSDHC_INT_STATUS_EN_DCESEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_DCESEN_SHIFT)) & uSDHC_INT_STATUS_EN_DCESEN_MASK)
#define uSDHC_INT_STATUS_EN_DEBESEN_MASK         (0x400000U)
#define uSDHC_INT_STATUS_EN_DEBESEN_SHIFT        (22U)
#define uSDHC_INT_STATUS_EN_DEBESEN_WIDTH        (1U)
#define uSDHC_INT_STATUS_EN_DEBESEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_DEBESEN_SHIFT)) & uSDHC_INT_STATUS_EN_DEBESEN_MASK)
#define uSDHC_INT_STATUS_EN_AC12ESEN_MASK        (0x1000000U)
#define uSDHC_INT_STATUS_EN_AC12ESEN_SHIFT       (24U)
#define uSDHC_INT_STATUS_EN_AC12ESEN_WIDTH       (1U)
#define uSDHC_INT_STATUS_EN_AC12ESEN(x)          (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_AC12ESEN_SHIFT)) & uSDHC_INT_STATUS_EN_AC12ESEN_MASK)
#define uSDHC_INT_STATUS_EN_DMAESEN_MASK         (0x10000000U)
#define uSDHC_INT_STATUS_EN_DMAESEN_SHIFT        (28U)
#define uSDHC_INT_STATUS_EN_DMAESEN_WIDTH        (1U)
#define uSDHC_INT_STATUS_EN_DMAESEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_STATUS_EN_DMAESEN_SHIFT)) & uSDHC_INT_STATUS_EN_DMAESEN_MASK)
/*! @} */

/*! @name INT_SIGNAL_EN - Interrupt Signal Enable */
/*! @{ */
#define uSDHC_INT_SIGNAL_EN_CCIEN_MASK           (0x1U)
#define uSDHC_INT_SIGNAL_EN_CCIEN_SHIFT          (0U)
#define uSDHC_INT_SIGNAL_EN_CCIEN_WIDTH          (1U)
#define uSDHC_INT_SIGNAL_EN_CCIEN(x)             (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_CCIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_CCIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_TCIEN_MASK           (0x2U)
#define uSDHC_INT_SIGNAL_EN_TCIEN_SHIFT          (1U)
#define uSDHC_INT_SIGNAL_EN_TCIEN_WIDTH          (1U)
#define uSDHC_INT_SIGNAL_EN_TCIEN(x)             (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_TCIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_TCIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_BGEIEN_MASK          (0x4U)
#define uSDHC_INT_SIGNAL_EN_BGEIEN_SHIFT         (2U)
#define uSDHC_INT_SIGNAL_EN_BGEIEN_WIDTH         (1U)
#define uSDHC_INT_SIGNAL_EN_BGEIEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_BGEIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_BGEIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_DINTIEN_MASK         (0x8U)
#define uSDHC_INT_SIGNAL_EN_DINTIEN_SHIFT        (3U)
#define uSDHC_INT_SIGNAL_EN_DINTIEN_WIDTH        (1U)
#define uSDHC_INT_SIGNAL_EN_DINTIEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_DINTIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_DINTIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_BWRIEN_MASK          (0x10U)
#define uSDHC_INT_SIGNAL_EN_BWRIEN_SHIFT         (4U)
#define uSDHC_INT_SIGNAL_EN_BWRIEN_WIDTH         (1U)
#define uSDHC_INT_SIGNAL_EN_BWRIEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_BWRIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_BWRIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_BRRIEN_MASK          (0x20U)
#define uSDHC_INT_SIGNAL_EN_BRRIEN_SHIFT         (5U)
#define uSDHC_INT_SIGNAL_EN_BRRIEN_WIDTH         (1U)
#define uSDHC_INT_SIGNAL_EN_BRRIEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_BRRIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_BRRIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_CINSIEN_MASK         (0x40U)
#define uSDHC_INT_SIGNAL_EN_CINSIEN_SHIFT        (6U)
#define uSDHC_INT_SIGNAL_EN_CINSIEN_WIDTH        (1U)
#define uSDHC_INT_SIGNAL_EN_CINSIEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_CINSIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_CINSIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_CRMIEN_MASK          (0x80U)
#define uSDHC_INT_SIGNAL_EN_CRMIEN_SHIFT         (7U)
#define uSDHC_INT_SIGNAL_EN_CRMIEN_WIDTH         (1U)
#define uSDHC_INT_SIGNAL_EN_CRMIEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_CRMIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_CRMIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_CINTIEN_MASK         (0x100U)
#define uSDHC_INT_SIGNAL_EN_CINTIEN_SHIFT        (8U)
#define uSDHC_INT_SIGNAL_EN_CINTIEN_WIDTH        (1U)
#define uSDHC_INT_SIGNAL_EN_CINTIEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_CINTIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_CINTIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_CTOEIEN_MASK         (0x10000U)
#define uSDHC_INT_SIGNAL_EN_CTOEIEN_SHIFT        (16U)
#define uSDHC_INT_SIGNAL_EN_CTOEIEN_WIDTH        (1U)
#define uSDHC_INT_SIGNAL_EN_CTOEIEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_CTOEIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_CTOEIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_CCEIEN_MASK          (0x20000U)
#define uSDHC_INT_SIGNAL_EN_CCEIEN_SHIFT         (17U)
#define uSDHC_INT_SIGNAL_EN_CCEIEN_WIDTH         (1U)
#define uSDHC_INT_SIGNAL_EN_CCEIEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_CCEIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_CCEIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_CEBEIEN_MASK         (0x40000U)
#define uSDHC_INT_SIGNAL_EN_CEBEIEN_SHIFT        (18U)
#define uSDHC_INT_SIGNAL_EN_CEBEIEN_WIDTH        (1U)
#define uSDHC_INT_SIGNAL_EN_CEBEIEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_CEBEIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_CEBEIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_CIEIEN_MASK          (0x80000U)
#define uSDHC_INT_SIGNAL_EN_CIEIEN_SHIFT         (19U)
#define uSDHC_INT_SIGNAL_EN_CIEIEN_WIDTH         (1U)
#define uSDHC_INT_SIGNAL_EN_CIEIEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_CIEIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_CIEIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_DTOEIEN_MASK         (0x100000U)
#define uSDHC_INT_SIGNAL_EN_DTOEIEN_SHIFT        (20U)
#define uSDHC_INT_SIGNAL_EN_DTOEIEN_WIDTH        (1U)
#define uSDHC_INT_SIGNAL_EN_DTOEIEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_DTOEIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_DTOEIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_DCEIEN_MASK          (0x200000U)
#define uSDHC_INT_SIGNAL_EN_DCEIEN_SHIFT         (21U)
#define uSDHC_INT_SIGNAL_EN_DCEIEN_WIDTH         (1U)
#define uSDHC_INT_SIGNAL_EN_DCEIEN(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_DCEIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_DCEIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_DEBEIEN_MASK         (0x400000U)
#define uSDHC_INT_SIGNAL_EN_DEBEIEN_SHIFT        (22U)
#define uSDHC_INT_SIGNAL_EN_DEBEIEN_WIDTH        (1U)
#define uSDHC_INT_SIGNAL_EN_DEBEIEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_DEBEIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_DEBEIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_AC12EIEN_MASK        (0x1000000U)
#define uSDHC_INT_SIGNAL_EN_AC12EIEN_SHIFT       (24U)
#define uSDHC_INT_SIGNAL_EN_AC12EIEN_WIDTH       (1U)
#define uSDHC_INT_SIGNAL_EN_AC12EIEN(x)          (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_AC12EIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_AC12EIEN_MASK)
#define uSDHC_INT_SIGNAL_EN_DMAEIEN_MASK         (0x10000000U)
#define uSDHC_INT_SIGNAL_EN_DMAEIEN_SHIFT        (28U)
#define uSDHC_INT_SIGNAL_EN_DMAEIEN_WIDTH        (1U)
#define uSDHC_INT_SIGNAL_EN_DMAEIEN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_INT_SIGNAL_EN_DMAEIEN_SHIFT)) & uSDHC_INT_SIGNAL_EN_DMAEIEN_MASK)
/*! @} */

/*! @name AUTOCMD12_ERR_STATUS - Auto CMD12 Error Status */
/*! @{ */
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12NE_MASK   (0x1U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12NE_SHIFT  (0U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12NE_WIDTH  (1U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12NE(x)     (((uint32_t)(((uint32_t)(x)) << uSDHC_AUTOCMD12_ERR_STATUS_AC12NE_SHIFT)) & uSDHC_AUTOCMD12_ERR_STATUS_AC12NE_MASK)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12TOE_MASK  (0x2U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12TOE_SHIFT (1U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12TOE_WIDTH (1U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12TOE(x)    (((uint32_t)(((uint32_t)(x)) << uSDHC_AUTOCMD12_ERR_STATUS_AC12TOE_SHIFT)) & uSDHC_AUTOCMD12_ERR_STATUS_AC12TOE_MASK)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12EBE_MASK  (0x4U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12EBE_SHIFT (2U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12EBE_WIDTH (1U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12EBE(x)    (((uint32_t)(((uint32_t)(x)) << uSDHC_AUTOCMD12_ERR_STATUS_AC12EBE_SHIFT)) & uSDHC_AUTOCMD12_ERR_STATUS_AC12EBE_MASK)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12CE_MASK   (0x8U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12CE_SHIFT  (3U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12CE_WIDTH  (1U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12CE(x)     (((uint32_t)(((uint32_t)(x)) << uSDHC_AUTOCMD12_ERR_STATUS_AC12CE_SHIFT)) & uSDHC_AUTOCMD12_ERR_STATUS_AC12CE_MASK)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12IE_MASK   (0x10U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12IE_SHIFT  (4U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12IE_WIDTH  (1U)
#define uSDHC_AUTOCMD12_ERR_STATUS_AC12IE(x)     (((uint32_t)(((uint32_t)(x)) << uSDHC_AUTOCMD12_ERR_STATUS_AC12IE_SHIFT)) & uSDHC_AUTOCMD12_ERR_STATUS_AC12IE_MASK)
#define uSDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_MASK (0x80U)
#define uSDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_SHIFT (7U)
#define uSDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_WIDTH (1U)
#define uSDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E(x)  (((uint32_t)(((uint32_t)(x)) << uSDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_SHIFT)) & uSDHC_AUTOCMD12_ERR_STATUS_CNIBAC12E_MASK)
/*! @} */

/*! @name HOST_CTRL_CAP - Host Controller Capabilities */
/*! @{ */
#define uSDHC_HOST_CTRL_CAP_SDR50_SUPPORT_MASK   (0x1U)
#define uSDHC_HOST_CTRL_CAP_SDR50_SUPPORT_SHIFT  (0U)
#define uSDHC_HOST_CTRL_CAP_SDR50_SUPPORT_WIDTH  (1U)
#define uSDHC_HOST_CTRL_CAP_SDR50_SUPPORT(x)     (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_SDR50_SUPPORT_SHIFT)) & uSDHC_HOST_CTRL_CAP_SDR50_SUPPORT_MASK)
#define uSDHC_HOST_CTRL_CAP_DDR50_SUPPORT_MASK   (0x4U)
#define uSDHC_HOST_CTRL_CAP_DDR50_SUPPORT_SHIFT  (2U)
#define uSDHC_HOST_CTRL_CAP_DDR50_SUPPORT_WIDTH  (1U)
#define uSDHC_HOST_CTRL_CAP_DDR50_SUPPORT(x)     (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_DDR50_SUPPORT_SHIFT)) & uSDHC_HOST_CTRL_CAP_DDR50_SUPPORT_MASK)
#define uSDHC_HOST_CTRL_CAP_MBL_MASK             (0x70000U)
#define uSDHC_HOST_CTRL_CAP_MBL_SHIFT            (16U)
#define uSDHC_HOST_CTRL_CAP_MBL_WIDTH            (3U)
#define uSDHC_HOST_CTRL_CAP_MBL(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_MBL_SHIFT)) & uSDHC_HOST_CTRL_CAP_MBL_MASK)
#define uSDHC_HOST_CTRL_CAP_ADMAS_MASK           (0x100000U)
#define uSDHC_HOST_CTRL_CAP_ADMAS_SHIFT          (20U)
#define uSDHC_HOST_CTRL_CAP_ADMAS_WIDTH          (1U)
#define uSDHC_HOST_CTRL_CAP_ADMAS(x)             (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_ADMAS_SHIFT)) & uSDHC_HOST_CTRL_CAP_ADMAS_MASK)
#define uSDHC_HOST_CTRL_CAP_HSS_MASK             (0x200000U)
#define uSDHC_HOST_CTRL_CAP_HSS_SHIFT            (21U)
#define uSDHC_HOST_CTRL_CAP_HSS_WIDTH            (1U)
#define uSDHC_HOST_CTRL_CAP_HSS(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_HSS_SHIFT)) & uSDHC_HOST_CTRL_CAP_HSS_MASK)
#define uSDHC_HOST_CTRL_CAP_DMAS_MASK            (0x400000U)
#define uSDHC_HOST_CTRL_CAP_DMAS_SHIFT           (22U)
#define uSDHC_HOST_CTRL_CAP_DMAS_WIDTH           (1U)
#define uSDHC_HOST_CTRL_CAP_DMAS(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_DMAS_SHIFT)) & uSDHC_HOST_CTRL_CAP_DMAS_MASK)
#define uSDHC_HOST_CTRL_CAP_SRS_MASK             (0x800000U)
#define uSDHC_HOST_CTRL_CAP_SRS_SHIFT            (23U)
#define uSDHC_HOST_CTRL_CAP_SRS_WIDTH            (1U)
#define uSDHC_HOST_CTRL_CAP_SRS(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_SRS_SHIFT)) & uSDHC_HOST_CTRL_CAP_SRS_MASK)
#define uSDHC_HOST_CTRL_CAP_VS33_MASK            (0x1000000U)
#define uSDHC_HOST_CTRL_CAP_VS33_SHIFT           (24U)
#define uSDHC_HOST_CTRL_CAP_VS33_WIDTH           (1U)
#define uSDHC_HOST_CTRL_CAP_VS33(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_VS33_SHIFT)) & uSDHC_HOST_CTRL_CAP_VS33_MASK)
#define uSDHC_HOST_CTRL_CAP_VS30_MASK            (0x2000000U)
#define uSDHC_HOST_CTRL_CAP_VS30_SHIFT           (25U)
#define uSDHC_HOST_CTRL_CAP_VS30_WIDTH           (1U)
#define uSDHC_HOST_CTRL_CAP_VS30(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_VS30_SHIFT)) & uSDHC_HOST_CTRL_CAP_VS30_MASK)
#define uSDHC_HOST_CTRL_CAP_VS18_MASK            (0x4000000U)
#define uSDHC_HOST_CTRL_CAP_VS18_SHIFT           (26U)
#define uSDHC_HOST_CTRL_CAP_VS18_WIDTH           (1U)
#define uSDHC_HOST_CTRL_CAP_VS18(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_HOST_CTRL_CAP_VS18_SHIFT)) & uSDHC_HOST_CTRL_CAP_VS18_MASK)
/*! @} */

/*! @name WTMK_LVL - Watermark Level */
/*! @{ */
#define uSDHC_WTMK_LVL_RD_WML_MASK               (0xFFU)
#define uSDHC_WTMK_LVL_RD_WML_SHIFT              (0U)
#define uSDHC_WTMK_LVL_RD_WML_WIDTH              (8U)
#define uSDHC_WTMK_LVL_RD_WML(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_WTMK_LVL_RD_WML_SHIFT)) & uSDHC_WTMK_LVL_RD_WML_MASK)
#define uSDHC_WTMK_LVL_WR_WML_MASK               (0xFF0000U)
#define uSDHC_WTMK_LVL_WR_WML_SHIFT              (16U)
#define uSDHC_WTMK_LVL_WR_WML_WIDTH              (8U)
#define uSDHC_WTMK_LVL_WR_WML(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_WTMK_LVL_WR_WML_SHIFT)) & uSDHC_WTMK_LVL_WR_WML_MASK)
/*! @} */

/*! @name MIX_CTRL - Mixer Control */
/*! @{ */
#define uSDHC_MIX_CTRL_DMAEN_MASK                (0x1U)
#define uSDHC_MIX_CTRL_DMAEN_SHIFT               (0U)
#define uSDHC_MIX_CTRL_DMAEN_WIDTH               (1U)
#define uSDHC_MIX_CTRL_DMAEN(x)                  (((uint32_t)(((uint32_t)(x)) << uSDHC_MIX_CTRL_DMAEN_SHIFT)) & uSDHC_MIX_CTRL_DMAEN_MASK)
#define uSDHC_MIX_CTRL_BCEN_MASK                 (0x2U)
#define uSDHC_MIX_CTRL_BCEN_SHIFT                (1U)
#define uSDHC_MIX_CTRL_BCEN_WIDTH                (1U)
#define uSDHC_MIX_CTRL_BCEN(x)                   (((uint32_t)(((uint32_t)(x)) << uSDHC_MIX_CTRL_BCEN_SHIFT)) & uSDHC_MIX_CTRL_BCEN_MASK)
#define uSDHC_MIX_CTRL_AC12EN_MASK               (0x4U)
#define uSDHC_MIX_CTRL_AC12EN_SHIFT              (2U)
#define uSDHC_MIX_CTRL_AC12EN_WIDTH              (1U)
#define uSDHC_MIX_CTRL_AC12EN(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_MIX_CTRL_AC12EN_SHIFT)) & uSDHC_MIX_CTRL_AC12EN_MASK)
#define uSDHC_MIX_CTRL_DDR_EN_MASK               (0x8U)
#define uSDHC_MIX_CTRL_DDR_EN_SHIFT              (3U)
#define uSDHC_MIX_CTRL_DDR_EN_WIDTH              (1U)
#define uSDHC_MIX_CTRL_DDR_EN(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_MIX_CTRL_DDR_EN_SHIFT)) & uSDHC_MIX_CTRL_DDR_EN_MASK)
#define uSDHC_MIX_CTRL_DTDSEL_MASK               (0x10U)
#define uSDHC_MIX_CTRL_DTDSEL_SHIFT              (4U)
#define uSDHC_MIX_CTRL_DTDSEL_WIDTH              (1U)
#define uSDHC_MIX_CTRL_DTDSEL(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_MIX_CTRL_DTDSEL_SHIFT)) & uSDHC_MIX_CTRL_DTDSEL_MASK)
#define uSDHC_MIX_CTRL_MSBSEL_MASK               (0x20U)
#define uSDHC_MIX_CTRL_MSBSEL_SHIFT              (5U)
#define uSDHC_MIX_CTRL_MSBSEL_WIDTH              (1U)
#define uSDHC_MIX_CTRL_MSBSEL(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_MIX_CTRL_MSBSEL_SHIFT)) & uSDHC_MIX_CTRL_MSBSEL_MASK)
#define uSDHC_MIX_CTRL_NIBBLE_POS_MASK           (0x40U)
#define uSDHC_MIX_CTRL_NIBBLE_POS_SHIFT          (6U)
#define uSDHC_MIX_CTRL_NIBBLE_POS_WIDTH          (1U)
#define uSDHC_MIX_CTRL_NIBBLE_POS(x)             (((uint32_t)(((uint32_t)(x)) << uSDHC_MIX_CTRL_NIBBLE_POS_SHIFT)) & uSDHC_MIX_CTRL_NIBBLE_POS_MASK)
#define uSDHC_MIX_CTRL_AC23EN_MASK               (0x80U)
#define uSDHC_MIX_CTRL_AC23EN_SHIFT              (7U)
#define uSDHC_MIX_CTRL_AC23EN_WIDTH              (1U)
#define uSDHC_MIX_CTRL_AC23EN(x)                 (((uint32_t)(((uint32_t)(x)) << uSDHC_MIX_CTRL_AC23EN_SHIFT)) & uSDHC_MIX_CTRL_AC23EN_MASK)
/*! @} */

/*! @name FORCE_EVENT - Force Event */
/*! @{ */
#define uSDHC_FORCE_EVENT_FEVTAC12NE_MASK        (0x1U)
#define uSDHC_FORCE_EVENT_FEVTAC12NE_SHIFT       (0U)
#define uSDHC_FORCE_EVENT_FEVTAC12NE_WIDTH       (1U)
#define uSDHC_FORCE_EVENT_FEVTAC12NE(x)          (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTAC12NE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTAC12NE_MASK)
#define uSDHC_FORCE_EVENT_FEVTAC12TOE_MASK       (0x2U)
#define uSDHC_FORCE_EVENT_FEVTAC12TOE_SHIFT      (1U)
#define uSDHC_FORCE_EVENT_FEVTAC12TOE_WIDTH      (1U)
#define uSDHC_FORCE_EVENT_FEVTAC12TOE(x)         (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTAC12TOE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTAC12TOE_MASK)
#define uSDHC_FORCE_EVENT_FEVTAC12CE_MASK        (0x4U)
#define uSDHC_FORCE_EVENT_FEVTAC12CE_SHIFT       (2U)
#define uSDHC_FORCE_EVENT_FEVTAC12CE_WIDTH       (1U)
#define uSDHC_FORCE_EVENT_FEVTAC12CE(x)          (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTAC12CE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTAC12CE_MASK)
#define uSDHC_FORCE_EVENT_FEVTAC12EBE_MASK       (0x8U)
#define uSDHC_FORCE_EVENT_FEVTAC12EBE_SHIFT      (3U)
#define uSDHC_FORCE_EVENT_FEVTAC12EBE_WIDTH      (1U)
#define uSDHC_FORCE_EVENT_FEVTAC12EBE(x)         (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTAC12EBE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTAC12EBE_MASK)
#define uSDHC_FORCE_EVENT_FEVTAC12IE_MASK        (0x10U)
#define uSDHC_FORCE_EVENT_FEVTAC12IE_SHIFT       (4U)
#define uSDHC_FORCE_EVENT_FEVTAC12IE_WIDTH       (1U)
#define uSDHC_FORCE_EVENT_FEVTAC12IE(x)          (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTAC12IE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTAC12IE_MASK)
#define uSDHC_FORCE_EVENT_FEVTCNIBAC12E_MASK     (0x80U)
#define uSDHC_FORCE_EVENT_FEVTCNIBAC12E_SHIFT    (7U)
#define uSDHC_FORCE_EVENT_FEVTCNIBAC12E_WIDTH    (1U)
#define uSDHC_FORCE_EVENT_FEVTCNIBAC12E(x)       (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTCNIBAC12E_SHIFT)) & uSDHC_FORCE_EVENT_FEVTCNIBAC12E_MASK)
#define uSDHC_FORCE_EVENT_FEVTCTOE_MASK          (0x10000U)
#define uSDHC_FORCE_EVENT_FEVTCTOE_SHIFT         (16U)
#define uSDHC_FORCE_EVENT_FEVTCTOE_WIDTH         (1U)
#define uSDHC_FORCE_EVENT_FEVTCTOE(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTCTOE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTCTOE_MASK)
#define uSDHC_FORCE_EVENT_FEVTCCE_MASK           (0x20000U)
#define uSDHC_FORCE_EVENT_FEVTCCE_SHIFT          (17U)
#define uSDHC_FORCE_EVENT_FEVTCCE_WIDTH          (1U)
#define uSDHC_FORCE_EVENT_FEVTCCE(x)             (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTCCE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTCCE_MASK)
#define uSDHC_FORCE_EVENT_FEVTCEBE_MASK          (0x40000U)
#define uSDHC_FORCE_EVENT_FEVTCEBE_SHIFT         (18U)
#define uSDHC_FORCE_EVENT_FEVTCEBE_WIDTH         (1U)
#define uSDHC_FORCE_EVENT_FEVTCEBE(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTCEBE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTCEBE_MASK)
#define uSDHC_FORCE_EVENT_FEVTCIE_MASK           (0x80000U)
#define uSDHC_FORCE_EVENT_FEVTCIE_SHIFT          (19U)
#define uSDHC_FORCE_EVENT_FEVTCIE_WIDTH          (1U)
#define uSDHC_FORCE_EVENT_FEVTCIE(x)             (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTCIE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTCIE_MASK)
#define uSDHC_FORCE_EVENT_FEVTDTOE_MASK          (0x100000U)
#define uSDHC_FORCE_EVENT_FEVTDTOE_SHIFT         (20U)
#define uSDHC_FORCE_EVENT_FEVTDTOE_WIDTH         (1U)
#define uSDHC_FORCE_EVENT_FEVTDTOE(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTDTOE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTDTOE_MASK)
#define uSDHC_FORCE_EVENT_FEVTDCE_MASK           (0x200000U)
#define uSDHC_FORCE_EVENT_FEVTDCE_SHIFT          (21U)
#define uSDHC_FORCE_EVENT_FEVTDCE_WIDTH          (1U)
#define uSDHC_FORCE_EVENT_FEVTDCE(x)             (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTDCE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTDCE_MASK)
#define uSDHC_FORCE_EVENT_FEVTDEBE_MASK          (0x400000U)
#define uSDHC_FORCE_EVENT_FEVTDEBE_SHIFT         (22U)
#define uSDHC_FORCE_EVENT_FEVTDEBE_WIDTH         (1U)
#define uSDHC_FORCE_EVENT_FEVTDEBE(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTDEBE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTDEBE_MASK)
#define uSDHC_FORCE_EVENT_FEVTAC12E_MASK         (0x1000000U)
#define uSDHC_FORCE_EVENT_FEVTAC12E_SHIFT        (24U)
#define uSDHC_FORCE_EVENT_FEVTAC12E_WIDTH        (1U)
#define uSDHC_FORCE_EVENT_FEVTAC12E(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTAC12E_SHIFT)) & uSDHC_FORCE_EVENT_FEVTAC12E_MASK)
#define uSDHC_FORCE_EVENT_FEVTDMAE_MASK          (0x10000000U)
#define uSDHC_FORCE_EVENT_FEVTDMAE_SHIFT         (28U)
#define uSDHC_FORCE_EVENT_FEVTDMAE_WIDTH         (1U)
#define uSDHC_FORCE_EVENT_FEVTDMAE(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTDMAE_SHIFT)) & uSDHC_FORCE_EVENT_FEVTDMAE_MASK)
#define uSDHC_FORCE_EVENT_FEVTCINT_MASK          (0x80000000U)
#define uSDHC_FORCE_EVENT_FEVTCINT_SHIFT         (31U)
#define uSDHC_FORCE_EVENT_FEVTCINT_WIDTH         (1U)
#define uSDHC_FORCE_EVENT_FEVTCINT(x)            (((uint32_t)(((uint32_t)(x)) << uSDHC_FORCE_EVENT_FEVTCINT_SHIFT)) & uSDHC_FORCE_EVENT_FEVTCINT_MASK)
/*! @} */

/*! @name ADMA_ERR_STATUS - ADMA Error Status */
/*! @{ */
#define uSDHC_ADMA_ERR_STATUS_ADMAES_MASK        (0x3U)
#define uSDHC_ADMA_ERR_STATUS_ADMAES_SHIFT       (0U)
#define uSDHC_ADMA_ERR_STATUS_ADMAES_WIDTH       (2U)
#define uSDHC_ADMA_ERR_STATUS_ADMAES(x)          (((uint32_t)(((uint32_t)(x)) << uSDHC_ADMA_ERR_STATUS_ADMAES_SHIFT)) & uSDHC_ADMA_ERR_STATUS_ADMAES_MASK)
#define uSDHC_ADMA_ERR_STATUS_ADMALME_MASK       (0x4U)
#define uSDHC_ADMA_ERR_STATUS_ADMALME_SHIFT      (2U)
#define uSDHC_ADMA_ERR_STATUS_ADMALME_WIDTH      (1U)
#define uSDHC_ADMA_ERR_STATUS_ADMALME(x)         (((uint32_t)(((uint32_t)(x)) << uSDHC_ADMA_ERR_STATUS_ADMALME_SHIFT)) & uSDHC_ADMA_ERR_STATUS_ADMALME_MASK)
#define uSDHC_ADMA_ERR_STATUS_ADMADCE_MASK       (0x8U)
#define uSDHC_ADMA_ERR_STATUS_ADMADCE_SHIFT      (3U)
#define uSDHC_ADMA_ERR_STATUS_ADMADCE_WIDTH      (1U)
#define uSDHC_ADMA_ERR_STATUS_ADMADCE(x)         (((uint32_t)(((uint32_t)(x)) << uSDHC_ADMA_ERR_STATUS_ADMADCE_SHIFT)) & uSDHC_ADMA_ERR_STATUS_ADMADCE_MASK)
/*! @} */

/*! @name ADMA_SYS_ADDR - ADMA System Address */
/*! @{ */
#define uSDHC_ADMA_SYS_ADDR_ADS_ADDR_MASK        (0xFFFFFFFCU)
#define uSDHC_ADMA_SYS_ADDR_ADS_ADDR_SHIFT       (2U)
#define uSDHC_ADMA_SYS_ADDR_ADS_ADDR_WIDTH       (30U)
#define uSDHC_ADMA_SYS_ADDR_ADS_ADDR(x)          (((uint32_t)(((uint32_t)(x)) << uSDHC_ADMA_SYS_ADDR_ADS_ADDR_SHIFT)) & uSDHC_ADMA_SYS_ADDR_ADS_ADDR_MASK)
/*! @} */

/*! @name VEND_SPEC - Vendor Specific Register */
/*! @{ */
#define uSDHC_VEND_SPEC_VSELECT_MASK             (0x2U)
#define uSDHC_VEND_SPEC_VSELECT_SHIFT            (1U)
#define uSDHC_VEND_SPEC_VSELECT_WIDTH            (1U)
#define uSDHC_VEND_SPEC_VSELECT(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_VEND_SPEC_VSELECT_SHIFT)) & uSDHC_VEND_SPEC_VSELECT_MASK)
#define uSDHC_VEND_SPEC_CONFLICT_CHK_EN_MASK     (0x4U)
#define uSDHC_VEND_SPEC_CONFLICT_CHK_EN_SHIFT    (2U)
#define uSDHC_VEND_SPEC_CONFLICT_CHK_EN_WIDTH    (1U)
#define uSDHC_VEND_SPEC_CONFLICT_CHK_EN(x)       (((uint32_t)(((uint32_t)(x)) << uSDHC_VEND_SPEC_CONFLICT_CHK_EN_SHIFT)) & uSDHC_VEND_SPEC_CONFLICT_CHK_EN_MASK)
#define uSDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN_MASK  (0x8U)
#define uSDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN_SHIFT (3U)
#define uSDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN_WIDTH (1U)
#define uSDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN(x)    (((uint32_t)(((uint32_t)(x)) << uSDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN_SHIFT)) & uSDHC_VEND_SPEC_AC12_WR_CHKBUSY_EN_MASK)
#define uSDHC_VEND_SPEC_FRC_SDCLK_ON_MASK        (0x100U)
#define uSDHC_VEND_SPEC_FRC_SDCLK_ON_SHIFT       (8U)
#define uSDHC_VEND_SPEC_FRC_SDCLK_ON_WIDTH       (1U)
#define uSDHC_VEND_SPEC_FRC_SDCLK_ON(x)          (((uint32_t)(((uint32_t)(x)) << uSDHC_VEND_SPEC_FRC_SDCLK_ON_SHIFT)) & uSDHC_VEND_SPEC_FRC_SDCLK_ON_MASK)
#define uSDHC_VEND_SPEC_CRC_CHK_DIS_MASK         (0x8000U)
#define uSDHC_VEND_SPEC_CRC_CHK_DIS_SHIFT        (15U)
#define uSDHC_VEND_SPEC_CRC_CHK_DIS_WIDTH        (1U)
#define uSDHC_VEND_SPEC_CRC_CHK_DIS(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_VEND_SPEC_CRC_CHK_DIS_SHIFT)) & uSDHC_VEND_SPEC_CRC_CHK_DIS_MASK)
#define uSDHC_VEND_SPEC_CMD_BYTE_EN_MASK         (0x80000000U)
#define uSDHC_VEND_SPEC_CMD_BYTE_EN_SHIFT        (31U)
#define uSDHC_VEND_SPEC_CMD_BYTE_EN_WIDTH        (1U)
#define uSDHC_VEND_SPEC_CMD_BYTE_EN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_VEND_SPEC_CMD_BYTE_EN_SHIFT)) & uSDHC_VEND_SPEC_CMD_BYTE_EN_MASK)
/*! @} */

/*! @name MMC_BOOT - MMC Boot */
/*! @{ */
#define uSDHC_MMC_BOOT_DTOCV_ACK_MASK            (0xFU)
#define uSDHC_MMC_BOOT_DTOCV_ACK_SHIFT           (0U)
#define uSDHC_MMC_BOOT_DTOCV_ACK_WIDTH           (4U)
#define uSDHC_MMC_BOOT_DTOCV_ACK(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_MMC_BOOT_DTOCV_ACK_SHIFT)) & uSDHC_MMC_BOOT_DTOCV_ACK_MASK)
#define uSDHC_MMC_BOOT_BOOT_ACK_MASK             (0x10U)
#define uSDHC_MMC_BOOT_BOOT_ACK_SHIFT            (4U)
#define uSDHC_MMC_BOOT_BOOT_ACK_WIDTH            (1U)
#define uSDHC_MMC_BOOT_BOOT_ACK(x)               (((uint32_t)(((uint32_t)(x)) << uSDHC_MMC_BOOT_BOOT_ACK_SHIFT)) & uSDHC_MMC_BOOT_BOOT_ACK_MASK)
#define uSDHC_MMC_BOOT_BOOT_MODE_MASK            (0x20U)
#define uSDHC_MMC_BOOT_BOOT_MODE_SHIFT           (5U)
#define uSDHC_MMC_BOOT_BOOT_MODE_WIDTH           (1U)
#define uSDHC_MMC_BOOT_BOOT_MODE(x)              (((uint32_t)(((uint32_t)(x)) << uSDHC_MMC_BOOT_BOOT_MODE_SHIFT)) & uSDHC_MMC_BOOT_BOOT_MODE_MASK)
#define uSDHC_MMC_BOOT_BOOT_EN_MASK              (0x40U)
#define uSDHC_MMC_BOOT_BOOT_EN_SHIFT             (6U)
#define uSDHC_MMC_BOOT_BOOT_EN_WIDTH             (1U)
#define uSDHC_MMC_BOOT_BOOT_EN(x)                (((uint32_t)(((uint32_t)(x)) << uSDHC_MMC_BOOT_BOOT_EN_SHIFT)) & uSDHC_MMC_BOOT_BOOT_EN_MASK)
#define uSDHC_MMC_BOOT_AUTO_SABG_EN_MASK         (0x80U)
#define uSDHC_MMC_BOOT_AUTO_SABG_EN_SHIFT        (7U)
#define uSDHC_MMC_BOOT_AUTO_SABG_EN_WIDTH        (1U)
#define uSDHC_MMC_BOOT_AUTO_SABG_EN(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_MMC_BOOT_AUTO_SABG_EN_SHIFT)) & uSDHC_MMC_BOOT_AUTO_SABG_EN_MASK)
#define uSDHC_MMC_BOOT_DISABLE_TIME_OUT_MASK     (0x100U)
#define uSDHC_MMC_BOOT_DISABLE_TIME_OUT_SHIFT    (8U)
#define uSDHC_MMC_BOOT_DISABLE_TIME_OUT_WIDTH    (1U)
#define uSDHC_MMC_BOOT_DISABLE_TIME_OUT(x)       (((uint32_t)(((uint32_t)(x)) << uSDHC_MMC_BOOT_DISABLE_TIME_OUT_SHIFT)) & uSDHC_MMC_BOOT_DISABLE_TIME_OUT_MASK)
#define uSDHC_MMC_BOOT_BOOT_BLK_CNT_MASK         (0xFFFF0000U)
#define uSDHC_MMC_BOOT_BOOT_BLK_CNT_SHIFT        (16U)
#define uSDHC_MMC_BOOT_BOOT_BLK_CNT_WIDTH        (16U)
#define uSDHC_MMC_BOOT_BOOT_BLK_CNT(x)           (((uint32_t)(((uint32_t)(x)) << uSDHC_MMC_BOOT_BOOT_BLK_CNT_SHIFT)) & uSDHC_MMC_BOOT_BOOT_BLK_CNT_MASK)
/*! @} */

/*! @name VEND_SPEC2 - Vendor Specific 2 Register */
/*! @{ */
#define uSDHC_VEND_SPEC2_CARD_INT_D3_TEST_MASK   (0x8U)
#define uSDHC_VEND_SPEC2_CARD_INT_D3_TEST_SHIFT  (3U)
#define uSDHC_VEND_SPEC2_CARD_INT_D3_TEST_WIDTH  (1U)
#define uSDHC_VEND_SPEC2_CARD_INT_D3_TEST(x)     (((uint32_t)(((uint32_t)(x)) << uSDHC_VEND_SPEC2_CARD_INT_D3_TEST_SHIFT)) & uSDHC_VEND_SPEC2_CARD_INT_D3_TEST_MASK)
#define uSDHC_VEND_SPEC2_ACMD23_ARGU2_EN_MASK    (0x1000U)
#define uSDHC_VEND_SPEC2_ACMD23_ARGU2_EN_SHIFT   (12U)
#define uSDHC_VEND_SPEC2_ACMD23_ARGU2_EN_WIDTH   (1U)
#define uSDHC_VEND_SPEC2_ACMD23_ARGU2_EN(x)      (((uint32_t)(((uint32_t)(x)) << uSDHC_VEND_SPEC2_ACMD23_ARGU2_EN_SHIFT)) & uSDHC_VEND_SPEC2_ACMD23_ARGU2_EN_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group USDHC_Register_Masks */

/*!
 * @}
 */ /* end of group USDHC_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_USDHC_H_) */
