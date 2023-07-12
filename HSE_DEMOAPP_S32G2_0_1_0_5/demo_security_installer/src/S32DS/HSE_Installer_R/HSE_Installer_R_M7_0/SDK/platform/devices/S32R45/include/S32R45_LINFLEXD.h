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
 * @file S32R45_LINFLEXD.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_LINFLEXD
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
#if !defined(S32R45_LINFLEXD_H_)  /* Check if memory map has not been already included */
#define S32R45_LINFLEXD_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- LINFLEXD Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LINFLEXD_Peripheral_Access_Layer LINFLEXD Peripheral Access Layer
 * @{
 */

/** LINFLEXD - Register Layout Typedef */
typedef struct {
  __IO uint32_t LINCR1;                            /**< LIN Control Register 1, offset: 0x0 */
  __IO uint32_t LINIER;                            /**< LIN Interrupt Enable Register, offset: 0x4 */
  __IO uint32_t LINSR;                             /**< LIN Status Register, offset: 0x8 */
  __IO uint32_t LINESR;                            /**< LIN Error Status Register, offset: 0xC */
  __IO uint32_t UARTCR;                            /**< UART Mode Control Register, offset: 0x10 */
  __IO uint32_t UARTSR;                            /**< UART Mode Status Register, offset: 0x14 */
  __IO uint32_t LINTCSR;                           /**< LIN Time-Out Control Status Register, offset: 0x18 */
  __IO uint32_t LINOCR;                            /**< LIN Output Compare Register, offset: 0x1C */
  __IO uint32_t LINTOCR;                           /**< LIN Time-Out Control Register, offset: 0x20 */
  __IO uint32_t LINFBRR;                           /**< LIN Fractional Baud Rate Register, offset: 0x24 */
  __IO uint32_t LINIBRR;                           /**< LIN Integer Baud Rate Register, offset: 0x28 */
  __IO uint32_t LINCFR;                            /**< LIN Checksum Field Register, offset: 0x2C */
  __IO uint32_t LINCR2;                            /**< LIN Control Register 2, offset: 0x30 */
  __IO uint32_t BIDR;                              /**< Buffer Identifier Register, offset: 0x34 */
  __IO uint32_t BDRL;                              /**< Buffer Data Register Least Significant, offset: 0x38 */
  __IO uint32_t BDRM;                              /**< Buffer Data Register Most Significant, offset: 0x3C */
  uint8_t RESERVED_0[12];
  __IO uint32_t GCR;                               /**< Global Control Register, offset: 0x4C */
  __IO uint32_t UARTPTO;                           /**< UART Preset Timeout Register, offset: 0x50 */
  __I  uint32_t UARTCTO;                           /**< UART Current Timeout Register, offset: 0x54 */
  __IO uint32_t DMATXE;                            /**< DMA Tx Enable Register, offset: 0x58 */
  __IO uint32_t DMARXE;                            /**< DMA Rx Enable Register, offset: 0x5C */
} LINFlexD_Type, *LINFlexD_MemMapPtr;

/** Number of instances of the LINFlexD module. */
#define LINFlexD_INSTANCE_COUNT                  (2u)

/* LINFlexD - Peripheral instance base addresses */
/** Peripheral LINFlexD_0 base address */
#define LINFlexD_0_BASE                          (0x401C8000u)
/** Peripheral LINFlexD_0 base pointer */
#define LINFlexD_0                               ((LINFlexD_Type *)LINFlexD_0_BASE)
/** Peripheral LINFlexD_1 base address */
#define LINFlexD_1_BASE                          (0x401CC000u)
/** Peripheral LINFlexD_1 base pointer */
#define LINFlexD_1                               ((LINFlexD_Type *)LINFlexD_1_BASE)
/** Array initializer of LINFlexD peripheral base addresses */
#define LINFlexD_BASE_ADDRS                      { LINFlexD_0_BASE, LINFlexD_1_BASE }
/** Array initializer of LINFlexD peripheral base pointers */
#define LINFlexD_BASE_PTRS                       { LINFlexD_0, LINFlexD_1 }

/* ----------------------------------------------------------------------------
   -- LINFlexD Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LINFlexD_Register_Masks LINFlexD Register Masks
 * @{
 */

/*! @name LINCR1 - LIN Control Register 1 */
/*! @{ */
#define LINFlexD_LINCR1_INIT_MASK                (0x1U)
#define LINFlexD_LINCR1_INIT_SHIFT               (0U)
#define LINFlexD_LINCR1_INIT_WIDTH               (1U)
#define LINFlexD_LINCR1_INIT(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_INIT_SHIFT)) & LINFlexD_LINCR1_INIT_MASK)
#define LINFlexD_LINCR1_SLEEP_MASK               (0x2U)
#define LINFlexD_LINCR1_SLEEP_SHIFT              (1U)
#define LINFlexD_LINCR1_SLEEP_WIDTH              (1U)
#define LINFlexD_LINCR1_SLEEP(x)                 (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_SLEEP_SHIFT)) & LINFlexD_LINCR1_SLEEP_MASK)
#define LINFlexD_LINCR1_RBLM_MASK                (0x4U)
#define LINFlexD_LINCR1_RBLM_SHIFT               (2U)
#define LINFlexD_LINCR1_RBLM_WIDTH               (1U)
#define LINFlexD_LINCR1_RBLM(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_RBLM_SHIFT)) & LINFlexD_LINCR1_RBLM_MASK)
#define LINFlexD_LINCR1_SSBL_MASK                (0x8U)
#define LINFlexD_LINCR1_SSBL_SHIFT               (3U)
#define LINFlexD_LINCR1_SSBL_WIDTH               (1U)
#define LINFlexD_LINCR1_SSBL(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_SSBL_SHIFT)) & LINFlexD_LINCR1_SSBL_MASK)
#define LINFlexD_LINCR1_MME_MASK                 (0x10U)
#define LINFlexD_LINCR1_MME_SHIFT                (4U)
#define LINFlexD_LINCR1_MME_WIDTH                (1U)
#define LINFlexD_LINCR1_MME(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_MME_SHIFT)) & LINFlexD_LINCR1_MME_MASK)
#define LINFlexD_LINCR1_LBKM_MASK                (0x20U)
#define LINFlexD_LINCR1_LBKM_SHIFT               (5U)
#define LINFlexD_LINCR1_LBKM_WIDTH               (1U)
#define LINFlexD_LINCR1_LBKM(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_LBKM_SHIFT)) & LINFlexD_LINCR1_LBKM_MASK)
#define LINFlexD_LINCR1_MBL_MASK                 (0xF00U)
#define LINFlexD_LINCR1_MBL_SHIFT                (8U)
#define LINFlexD_LINCR1_MBL_WIDTH                (4U)
#define LINFlexD_LINCR1_MBL(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_MBL_SHIFT)) & LINFlexD_LINCR1_MBL_MASK)
#define LINFlexD_LINCR1_AUTOWU_MASK              (0x1000U)
#define LINFlexD_LINCR1_AUTOWU_SHIFT             (12U)
#define LINFlexD_LINCR1_AUTOWU_WIDTH             (1U)
#define LINFlexD_LINCR1_AUTOWU(x)                (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_AUTOWU_SHIFT)) & LINFlexD_LINCR1_AUTOWU_MASK)
#define LINFlexD_LINCR1_CFD_MASK                 (0x4000U)
#define LINFlexD_LINCR1_CFD_SHIFT                (14U)
#define LINFlexD_LINCR1_CFD_WIDTH                (1U)
#define LINFlexD_LINCR1_CFD(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_CFD_SHIFT)) & LINFlexD_LINCR1_CFD_MASK)
#define LINFlexD_LINCR1_CCD_MASK                 (0x8000U)
#define LINFlexD_LINCR1_CCD_SHIFT                (15U)
#define LINFlexD_LINCR1_CCD_WIDTH                (1U)
#define LINFlexD_LINCR1_CCD(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_CCD_SHIFT)) & LINFlexD_LINCR1_CCD_MASK)
#define LINFlexD_LINCR1_NLSE_MASK                (0x10000U)
#define LINFlexD_LINCR1_NLSE_SHIFT               (16U)
#define LINFlexD_LINCR1_NLSE_WIDTH               (1U)
#define LINFlexD_LINCR1_NLSE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR1_NLSE_SHIFT)) & LINFlexD_LINCR1_NLSE_MASK)
/*! @} */

/*! @name LINIER - LIN Interrupt Enable Register */
/*! @{ */
#define LINFlexD_LINIER_HRIE_MASK                (0x1U)
#define LINFlexD_LINIER_HRIE_SHIFT               (0U)
#define LINFlexD_LINIER_HRIE_WIDTH               (1U)
#define LINFlexD_LINIER_HRIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_HRIE_SHIFT)) & LINFlexD_LINIER_HRIE_MASK)
#define LINFlexD_LINIER_DTIE_MASK                (0x2U)
#define LINFlexD_LINIER_DTIE_SHIFT               (1U)
#define LINFlexD_LINIER_DTIE_WIDTH               (1U)
#define LINFlexD_LINIER_DTIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_DTIE_SHIFT)) & LINFlexD_LINIER_DTIE_MASK)
#define LINFlexD_LINIER_DRIE_MASK                (0x4U)
#define LINFlexD_LINIER_DRIE_SHIFT               (2U)
#define LINFlexD_LINIER_DRIE_WIDTH               (1U)
#define LINFlexD_LINIER_DRIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_DRIE_SHIFT)) & LINFlexD_LINIER_DRIE_MASK)
#define LINFlexD_LINIER_TOIE_MASK                (0x8U)
#define LINFlexD_LINIER_TOIE_SHIFT               (3U)
#define LINFlexD_LINIER_TOIE_WIDTH               (1U)
#define LINFlexD_LINIER_TOIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_TOIE_SHIFT)) & LINFlexD_LINIER_TOIE_MASK)
#define LINFlexD_LINIER_WUIE_MASK                (0x20U)
#define LINFlexD_LINIER_WUIE_SHIFT               (5U)
#define LINFlexD_LINIER_WUIE_WIDTH               (1U)
#define LINFlexD_LINIER_WUIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_WUIE_SHIFT)) & LINFlexD_LINIER_WUIE_MASK)
#define LINFlexD_LINIER_LSIE_MASK                (0x40U)
#define LINFlexD_LINIER_LSIE_SHIFT               (6U)
#define LINFlexD_LINIER_LSIE_WIDTH               (1U)
#define LINFlexD_LINIER_LSIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_LSIE_SHIFT)) & LINFlexD_LINIER_LSIE_MASK)
#define LINFlexD_LINIER_BOIE_MASK                (0x80U)
#define LINFlexD_LINIER_BOIE_SHIFT               (7U)
#define LINFlexD_LINIER_BOIE_WIDTH               (1U)
#define LINFlexD_LINIER_BOIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_BOIE_SHIFT)) & LINFlexD_LINIER_BOIE_MASK)
#define LINFlexD_LINIER_FEIE_MASK                (0x100U)
#define LINFlexD_LINIER_FEIE_SHIFT               (8U)
#define LINFlexD_LINIER_FEIE_WIDTH               (1U)
#define LINFlexD_LINIER_FEIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_FEIE_SHIFT)) & LINFlexD_LINIER_FEIE_MASK)
#define LINFlexD_LINIER_HEIE_MASK                (0x800U)
#define LINFlexD_LINIER_HEIE_SHIFT               (11U)
#define LINFlexD_LINIER_HEIE_WIDTH               (1U)
#define LINFlexD_LINIER_HEIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_HEIE_SHIFT)) & LINFlexD_LINIER_HEIE_MASK)
#define LINFlexD_LINIER_CEIE_MASK                (0x1000U)
#define LINFlexD_LINIER_CEIE_SHIFT               (12U)
#define LINFlexD_LINIER_CEIE_WIDTH               (1U)
#define LINFlexD_LINIER_CEIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_CEIE_SHIFT)) & LINFlexD_LINIER_CEIE_MASK)
#define LINFlexD_LINIER_BEIE_MASK                (0x2000U)
#define LINFlexD_LINIER_BEIE_SHIFT               (13U)
#define LINFlexD_LINIER_BEIE_WIDTH               (1U)
#define LINFlexD_LINIER_BEIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_BEIE_SHIFT)) & LINFlexD_LINIER_BEIE_MASK)
#define LINFlexD_LINIER_OCIE_MASK                (0x4000U)
#define LINFlexD_LINIER_OCIE_SHIFT               (14U)
#define LINFlexD_LINIER_OCIE_WIDTH               (1U)
#define LINFlexD_LINIER_OCIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_OCIE_SHIFT)) & LINFlexD_LINIER_OCIE_MASK)
#define LINFlexD_LINIER_SZIE_MASK                (0x8000U)
#define LINFlexD_LINIER_SZIE_SHIFT               (15U)
#define LINFlexD_LINIER_SZIE_WIDTH               (1U)
#define LINFlexD_LINIER_SZIE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIER_SZIE_SHIFT)) & LINFlexD_LINIER_SZIE_MASK)
/*! @} */

/*! @name LINSR - LIN Status Register */
/*! @{ */
#define LINFlexD_LINSR_HRF_MASK                  (0x1U)
#define LINFlexD_LINSR_HRF_SHIFT                 (0U)
#define LINFlexD_LINSR_HRF_WIDTH                 (1U)
#define LINFlexD_LINSR_HRF(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_HRF_SHIFT)) & LINFlexD_LINSR_HRF_MASK)
#define LINFlexD_LINSR_DTF_MASK                  (0x2U)
#define LINFlexD_LINSR_DTF_SHIFT                 (1U)
#define LINFlexD_LINSR_DTF_WIDTH                 (1U)
#define LINFlexD_LINSR_DTF(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_DTF_SHIFT)) & LINFlexD_LINSR_DTF_MASK)
#define LINFlexD_LINSR_DRF_MASK                  (0x4U)
#define LINFlexD_LINSR_DRF_SHIFT                 (2U)
#define LINFlexD_LINSR_DRF_WIDTH                 (1U)
#define LINFlexD_LINSR_DRF(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_DRF_SHIFT)) & LINFlexD_LINSR_DRF_MASK)
#define LINFlexD_LINSR_WUF_MASK                  (0x20U)
#define LINFlexD_LINSR_WUF_SHIFT                 (5U)
#define LINFlexD_LINSR_WUF_WIDTH                 (1U)
#define LINFlexD_LINSR_WUF(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_WUF_SHIFT)) & LINFlexD_LINSR_WUF_MASK)
#define LINFlexD_LINSR_RDI_MASK                  (0x40U)
#define LINFlexD_LINSR_RDI_SHIFT                 (6U)
#define LINFlexD_LINSR_RDI_WIDTH                 (1U)
#define LINFlexD_LINSR_RDI(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_RDI_SHIFT)) & LINFlexD_LINSR_RDI_MASK)
#define LINFlexD_LINSR_RXBUSY_MASK               (0x80U)
#define LINFlexD_LINSR_RXBUSY_SHIFT              (7U)
#define LINFlexD_LINSR_RXBUSY_WIDTH              (1U)
#define LINFlexD_LINSR_RXBUSY(x)                 (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_RXBUSY_SHIFT)) & LINFlexD_LINSR_RXBUSY_MASK)
#define LINFlexD_LINSR_DRBNE_MASK                (0x100U)
#define LINFlexD_LINSR_DRBNE_SHIFT               (8U)
#define LINFlexD_LINSR_DRBNE_WIDTH               (1U)
#define LINFlexD_LINSR_DRBNE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_DRBNE_SHIFT)) & LINFlexD_LINSR_DRBNE_MASK)
#define LINFlexD_LINSR_RMB_MASK                  (0x200U)
#define LINFlexD_LINSR_RMB_SHIFT                 (9U)
#define LINFlexD_LINSR_RMB_WIDTH                 (1U)
#define LINFlexD_LINSR_RMB(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_RMB_SHIFT)) & LINFlexD_LINSR_RMB_MASK)
#define LINFlexD_LINSR_LINS_MASK                 (0xF000U)
#define LINFlexD_LINSR_LINS_SHIFT                (12U)
#define LINFlexD_LINSR_LINS_WIDTH                (4U)
#define LINFlexD_LINSR_LINS(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_LINS_SHIFT)) & LINFlexD_LINSR_LINS_MASK)
#define LINFlexD_LINSR_RDC_MASK                  (0x70000U)
#define LINFlexD_LINSR_RDC_SHIFT                 (16U)
#define LINFlexD_LINSR_RDC_WIDTH                 (3U)
#define LINFlexD_LINSR_RDC(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINSR_RDC_SHIFT)) & LINFlexD_LINSR_RDC_MASK)
/*! @} */

/*! @name LINESR - LIN Error Status Register */
/*! @{ */
#define LINFlexD_LINESR_NF_MASK                  (0x1U)
#define LINFlexD_LINESR_NF_SHIFT                 (0U)
#define LINFlexD_LINESR_NF_WIDTH                 (1U)
#define LINFlexD_LINESR_NF(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_NF_SHIFT)) & LINFlexD_LINESR_NF_MASK)
#define LINFlexD_LINESR_BOF_MASK                 (0x80U)
#define LINFlexD_LINESR_BOF_SHIFT                (7U)
#define LINFlexD_LINESR_BOF_WIDTH                (1U)
#define LINFlexD_LINESR_BOF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_BOF_SHIFT)) & LINFlexD_LINESR_BOF_MASK)
#define LINFlexD_LINESR_FEF_MASK                 (0x100U)
#define LINFlexD_LINESR_FEF_SHIFT                (8U)
#define LINFlexD_LINESR_FEF_WIDTH                (1U)
#define LINFlexD_LINESR_FEF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_FEF_SHIFT)) & LINFlexD_LINESR_FEF_MASK)
#define LINFlexD_LINESR_IDPEF_MASK               (0x200U)
#define LINFlexD_LINESR_IDPEF_SHIFT              (9U)
#define LINFlexD_LINESR_IDPEF_WIDTH              (1U)
#define LINFlexD_LINESR_IDPEF(x)                 (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_IDPEF_SHIFT)) & LINFlexD_LINESR_IDPEF_MASK)
#define LINFlexD_LINESR_SDEF_MASK                (0x400U)
#define LINFlexD_LINESR_SDEF_SHIFT               (10U)
#define LINFlexD_LINESR_SDEF_WIDTH               (1U)
#define LINFlexD_LINESR_SDEF(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_SDEF_SHIFT)) & LINFlexD_LINESR_SDEF_MASK)
#define LINFlexD_LINESR_SFEF_MASK                (0x800U)
#define LINFlexD_LINESR_SFEF_SHIFT               (11U)
#define LINFlexD_LINESR_SFEF_WIDTH               (1U)
#define LINFlexD_LINESR_SFEF(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_SFEF_SHIFT)) & LINFlexD_LINESR_SFEF_MASK)
#define LINFlexD_LINESR_CEF_MASK                 (0x1000U)
#define LINFlexD_LINESR_CEF_SHIFT                (12U)
#define LINFlexD_LINESR_CEF_WIDTH                (1U)
#define LINFlexD_LINESR_CEF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_CEF_SHIFT)) & LINFlexD_LINESR_CEF_MASK)
#define LINFlexD_LINESR_BEF_MASK                 (0x2000U)
#define LINFlexD_LINESR_BEF_SHIFT                (13U)
#define LINFlexD_LINESR_BEF_WIDTH                (1U)
#define LINFlexD_LINESR_BEF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_BEF_SHIFT)) & LINFlexD_LINESR_BEF_MASK)
#define LINFlexD_LINESR_OCF_MASK                 (0x4000U)
#define LINFlexD_LINESR_OCF_SHIFT                (14U)
#define LINFlexD_LINESR_OCF_WIDTH                (1U)
#define LINFlexD_LINESR_OCF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_OCF_SHIFT)) & LINFlexD_LINESR_OCF_MASK)
#define LINFlexD_LINESR_SZF_MASK                 (0x8000U)
#define LINFlexD_LINESR_SZF_SHIFT                (15U)
#define LINFlexD_LINESR_SZF_WIDTH                (1U)
#define LINFlexD_LINESR_SZF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINESR_SZF_SHIFT)) & LINFlexD_LINESR_SZF_MASK)
/*! @} */

/*! @name UARTCR - UART Mode Control Register */
/*! @{ */
#define LINFlexD_UARTCR_UART_MASK                (0x1U)
#define LINFlexD_UARTCR_UART_SHIFT               (0U)
#define LINFlexD_UARTCR_UART_WIDTH               (1U)
#define LINFlexD_UARTCR_UART(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_UART_SHIFT)) & LINFlexD_UARTCR_UART_MASK)
#define LINFlexD_UARTCR_WL0_MASK                 (0x2U)
#define LINFlexD_UARTCR_WL0_SHIFT                (1U)
#define LINFlexD_UARTCR_WL0_WIDTH                (1U)
#define LINFlexD_UARTCR_WL0(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_WL0_SHIFT)) & LINFlexD_UARTCR_WL0_MASK)
#define LINFlexD_UARTCR_PCE_MASK                 (0x4U)
#define LINFlexD_UARTCR_PCE_SHIFT                (2U)
#define LINFlexD_UARTCR_PCE_WIDTH                (1U)
#define LINFlexD_UARTCR_PCE(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_PCE_SHIFT)) & LINFlexD_UARTCR_PCE_MASK)
#define LINFlexD_UARTCR_PC0_MASK                 (0x8U)
#define LINFlexD_UARTCR_PC0_SHIFT                (3U)
#define LINFlexD_UARTCR_PC0_WIDTH                (1U)
#define LINFlexD_UARTCR_PC0(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_PC0_SHIFT)) & LINFlexD_UARTCR_PC0_MASK)
#define LINFlexD_UARTCR_TxEn_MASK                (0x10U)
#define LINFlexD_UARTCR_TxEn_SHIFT               (4U)
#define LINFlexD_UARTCR_TxEn_WIDTH               (1U)
#define LINFlexD_UARTCR_TxEn(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_TxEn_SHIFT)) & LINFlexD_UARTCR_TxEn_MASK)
#define LINFlexD_UARTCR_RxEn_MASK                (0x20U)
#define LINFlexD_UARTCR_RxEn_SHIFT               (5U)
#define LINFlexD_UARTCR_RxEn_WIDTH               (1U)
#define LINFlexD_UARTCR_RxEn(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_RxEn_SHIFT)) & LINFlexD_UARTCR_RxEn_MASK)
#define LINFlexD_UARTCR_PC1_MASK                 (0x40U)
#define LINFlexD_UARTCR_PC1_SHIFT                (6U)
#define LINFlexD_UARTCR_PC1_WIDTH                (1U)
#define LINFlexD_UARTCR_PC1(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_PC1_SHIFT)) & LINFlexD_UARTCR_PC1_MASK)
#define LINFlexD_UARTCR_WL1_MASK                 (0x80U)
#define LINFlexD_UARTCR_WL1_SHIFT                (7U)
#define LINFlexD_UARTCR_WL1_WIDTH                (1U)
#define LINFlexD_UARTCR_WL1(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_WL1_SHIFT)) & LINFlexD_UARTCR_WL1_MASK)
#define LINFlexD_UARTCR_TFBM_MASK                (0x100U)
#define LINFlexD_UARTCR_TFBM_SHIFT               (8U)
#define LINFlexD_UARTCR_TFBM_WIDTH               (1U)
#define LINFlexD_UARTCR_TFBM(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_TFBM_SHIFT)) & LINFlexD_UARTCR_TFBM_MASK)
#define LINFlexD_UARTCR_RFBM_MASK                (0x200U)
#define LINFlexD_UARTCR_RFBM_SHIFT               (9U)
#define LINFlexD_UARTCR_RFBM_WIDTH               (1U)
#define LINFlexD_UARTCR_RFBM(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_RFBM_SHIFT)) & LINFlexD_UARTCR_RFBM_MASK)
#define LINFlexD_UARTCR_RDFL_RFC_MASK            (0x1C00U)
#define LINFlexD_UARTCR_RDFL_RFC_SHIFT           (10U)
#define LINFlexD_UARTCR_RDFL_RFC_WIDTH           (3U)
#define LINFlexD_UARTCR_RDFL_RFC(x)              (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_RDFL_RFC_SHIFT)) & LINFlexD_UARTCR_RDFL_RFC_MASK)
#define LINFlexD_UARTCR_TDFL_TFC_MASK            (0xE000U)
#define LINFlexD_UARTCR_TDFL_TFC_SHIFT           (13U)
#define LINFlexD_UARTCR_TDFL_TFC_WIDTH           (3U)
#define LINFlexD_UARTCR_TDFL_TFC(x)              (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_TDFL_TFC_SHIFT)) & LINFlexD_UARTCR_TDFL_TFC_MASK)
#define LINFlexD_UARTCR_SBUR_MASK                (0x60000U)
#define LINFlexD_UARTCR_SBUR_SHIFT               (17U)
#define LINFlexD_UARTCR_SBUR_WIDTH               (2U)
#define LINFlexD_UARTCR_SBUR(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_SBUR_SHIFT)) & LINFlexD_UARTCR_SBUR_MASK)
#define LINFlexD_UARTCR_DTU_PCETX_MASK           (0x80000U)
#define LINFlexD_UARTCR_DTU_PCETX_SHIFT          (19U)
#define LINFlexD_UARTCR_DTU_PCETX_WIDTH          (1U)
#define LINFlexD_UARTCR_DTU_PCETX(x)             (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_DTU_PCETX_SHIFT)) & LINFlexD_UARTCR_DTU_PCETX_MASK)
#define LINFlexD_UARTCR_NEF_MASK                 (0x700000U)
#define LINFlexD_UARTCR_NEF_SHIFT                (20U)
#define LINFlexD_UARTCR_NEF_WIDTH                (3U)
#define LINFlexD_UARTCR_NEF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_NEF_SHIFT)) & LINFlexD_UARTCR_NEF_MASK)
#define LINFlexD_UARTCR_ROSE_MASK                (0x800000U)
#define LINFlexD_UARTCR_ROSE_SHIFT               (23U)
#define LINFlexD_UARTCR_ROSE_WIDTH               (1U)
#define LINFlexD_UARTCR_ROSE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_ROSE_SHIFT)) & LINFlexD_UARTCR_ROSE_MASK)
#define LINFlexD_UARTCR_OSR_MASK                 (0xF000000U)
#define LINFlexD_UARTCR_OSR_SHIFT                (24U)
#define LINFlexD_UARTCR_OSR_WIDTH                (4U)
#define LINFlexD_UARTCR_OSR(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_OSR_SHIFT)) & LINFlexD_UARTCR_OSR_MASK)
#define LINFlexD_UARTCR_CSP_MASK                 (0x70000000U)
#define LINFlexD_UARTCR_CSP_SHIFT                (28U)
#define LINFlexD_UARTCR_CSP_WIDTH                (3U)
#define LINFlexD_UARTCR_CSP(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_CSP_SHIFT)) & LINFlexD_UARTCR_CSP_MASK)
#define LINFlexD_UARTCR_MIS_MASK                 (0x80000000U)
#define LINFlexD_UARTCR_MIS_SHIFT                (31U)
#define LINFlexD_UARTCR_MIS_WIDTH                (1U)
#define LINFlexD_UARTCR_MIS(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCR_MIS_SHIFT)) & LINFlexD_UARTCR_MIS_MASK)
/*! @} */

/*! @name UARTSR - UART Mode Status Register */
/*! @{ */
#define LINFlexD_UARTSR_NF_MASK                  (0x1U)
#define LINFlexD_UARTSR_NF_SHIFT                 (0U)
#define LINFlexD_UARTSR_NF_WIDTH                 (1U)
#define LINFlexD_UARTSR_NF(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_NF_SHIFT)) & LINFlexD_UARTSR_NF_MASK)
#define LINFlexD_UARTSR_DTFTFF_MASK              (0x2U)
#define LINFlexD_UARTSR_DTFTFF_SHIFT             (1U)
#define LINFlexD_UARTSR_DTFTFF_WIDTH             (1U)
#define LINFlexD_UARTSR_DTFTFF(x)                (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_DTFTFF_SHIFT)) & LINFlexD_UARTSR_DTFTFF_MASK)
#define LINFlexD_UARTSR_DRFRFE_MASK              (0x4U)
#define LINFlexD_UARTSR_DRFRFE_SHIFT             (2U)
#define LINFlexD_UARTSR_DRFRFE_WIDTH             (1U)
#define LINFlexD_UARTSR_DRFRFE(x)                (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_DRFRFE_SHIFT)) & LINFlexD_UARTSR_DRFRFE_MASK)
#define LINFlexD_UARTSR_TO_MASK                  (0x8U)
#define LINFlexD_UARTSR_TO_SHIFT                 (3U)
#define LINFlexD_UARTSR_TO_WIDTH                 (1U)
#define LINFlexD_UARTSR_TO(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_TO_SHIFT)) & LINFlexD_UARTSR_TO_MASK)
#define LINFlexD_UARTSR_RFNE_MASK                (0x10U)
#define LINFlexD_UARTSR_RFNE_SHIFT               (4U)
#define LINFlexD_UARTSR_RFNE_WIDTH               (1U)
#define LINFlexD_UARTSR_RFNE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_RFNE_SHIFT)) & LINFlexD_UARTSR_RFNE_MASK)
#define LINFlexD_UARTSR_WUF_MASK                 (0x20U)
#define LINFlexD_UARTSR_WUF_SHIFT                (5U)
#define LINFlexD_UARTSR_WUF_WIDTH                (1U)
#define LINFlexD_UARTSR_WUF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_WUF_SHIFT)) & LINFlexD_UARTSR_WUF_MASK)
#define LINFlexD_UARTSR_RDI_MASK                 (0x40U)
#define LINFlexD_UARTSR_RDI_SHIFT                (6U)
#define LINFlexD_UARTSR_RDI_WIDTH                (1U)
#define LINFlexD_UARTSR_RDI(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_RDI_SHIFT)) & LINFlexD_UARTSR_RDI_MASK)
#define LINFlexD_UARTSR_BOF_MASK                 (0x80U)
#define LINFlexD_UARTSR_BOF_SHIFT                (7U)
#define LINFlexD_UARTSR_BOF_WIDTH                (1U)
#define LINFlexD_UARTSR_BOF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_BOF_SHIFT)) & LINFlexD_UARTSR_BOF_MASK)
#define LINFlexD_UARTSR_FEF_MASK                 (0x100U)
#define LINFlexD_UARTSR_FEF_SHIFT                (8U)
#define LINFlexD_UARTSR_FEF_WIDTH                (1U)
#define LINFlexD_UARTSR_FEF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_FEF_SHIFT)) & LINFlexD_UARTSR_FEF_MASK)
#define LINFlexD_UARTSR_RMB_MASK                 (0x200U)
#define LINFlexD_UARTSR_RMB_SHIFT                (9U)
#define LINFlexD_UARTSR_RMB_WIDTH                (1U)
#define LINFlexD_UARTSR_RMB(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_RMB_SHIFT)) & LINFlexD_UARTSR_RMB_MASK)
#define LINFlexD_UARTSR_PE_MASK                  (0x3C00U)
#define LINFlexD_UARTSR_PE_SHIFT                 (10U)
#define LINFlexD_UARTSR_PE_WIDTH                 (4U)
#define LINFlexD_UARTSR_PE(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_PE_SHIFT)) & LINFlexD_UARTSR_PE_MASK)
#define LINFlexD_UARTSR_OCF_MASK                 (0x4000U)
#define LINFlexD_UARTSR_OCF_SHIFT                (14U)
#define LINFlexD_UARTSR_OCF_WIDTH                (1U)
#define LINFlexD_UARTSR_OCF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_OCF_SHIFT)) & LINFlexD_UARTSR_OCF_MASK)
#define LINFlexD_UARTSR_SZF_MASK                 (0x8000U)
#define LINFlexD_UARTSR_SZF_SHIFT                (15U)
#define LINFlexD_UARTSR_SZF_WIDTH                (1U)
#define LINFlexD_UARTSR_SZF(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTSR_SZF_SHIFT)) & LINFlexD_UARTSR_SZF_MASK)
/*! @} */

/*! @name LINTCSR - LIN Time-Out Control Status Register */
/*! @{ */
#define LINFlexD_LINTCSR_CNT_MASK                (0xFFU)
#define LINFlexD_LINTCSR_CNT_SHIFT               (0U)
#define LINFlexD_LINTCSR_CNT_WIDTH               (8U)
#define LINFlexD_LINTCSR_CNT(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINTCSR_CNT_SHIFT)) & LINFlexD_LINTCSR_CNT_MASK)
#define LINFlexD_LINTCSR_TOCE_MASK               (0x100U)
#define LINFlexD_LINTCSR_TOCE_SHIFT              (8U)
#define LINFlexD_LINTCSR_TOCE_WIDTH              (1U)
#define LINFlexD_LINTCSR_TOCE(x)                 (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINTCSR_TOCE_SHIFT)) & LINFlexD_LINTCSR_TOCE_MASK)
#define LINFlexD_LINTCSR_IOT_MASK                (0x200U)
#define LINFlexD_LINTCSR_IOT_SHIFT               (9U)
#define LINFlexD_LINTCSR_IOT_WIDTH               (1U)
#define LINFlexD_LINTCSR_IOT(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINTCSR_IOT_SHIFT)) & LINFlexD_LINTCSR_IOT_MASK)
#define LINFlexD_LINTCSR_MODE_MASK               (0x400U)
#define LINFlexD_LINTCSR_MODE_SHIFT              (10U)
#define LINFlexD_LINTCSR_MODE_WIDTH              (1U)
#define LINFlexD_LINTCSR_MODE(x)                 (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINTCSR_MODE_SHIFT)) & LINFlexD_LINTCSR_MODE_MASK)
/*! @} */

/*! @name LINOCR - LIN Output Compare Register */
/*! @{ */
#define LINFlexD_LINOCR_OC1_MASK                 (0xFFU)
#define LINFlexD_LINOCR_OC1_SHIFT                (0U)
#define LINFlexD_LINOCR_OC1_WIDTH                (8U)
#define LINFlexD_LINOCR_OC1(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINOCR_OC1_SHIFT)) & LINFlexD_LINOCR_OC1_MASK)
#define LINFlexD_LINOCR_OC2_MASK                 (0xFF00U)
#define LINFlexD_LINOCR_OC2_SHIFT                (8U)
#define LINFlexD_LINOCR_OC2_WIDTH                (8U)
#define LINFlexD_LINOCR_OC2(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINOCR_OC2_SHIFT)) & LINFlexD_LINOCR_OC2_MASK)
/*! @} */

/*! @name LINTOCR - LIN Time-Out Control Register */
/*! @{ */
#define LINFlexD_LINTOCR_HTO_MASK                (0x7FU)
#define LINFlexD_LINTOCR_HTO_SHIFT               (0U)
#define LINFlexD_LINTOCR_HTO_WIDTH               (7U)
#define LINFlexD_LINTOCR_HTO(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINTOCR_HTO_SHIFT)) & LINFlexD_LINTOCR_HTO_MASK)
#define LINFlexD_LINTOCR_RTO_MASK                (0xF00U)
#define LINFlexD_LINTOCR_RTO_SHIFT               (8U)
#define LINFlexD_LINTOCR_RTO_WIDTH               (4U)
#define LINFlexD_LINTOCR_RTO(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINTOCR_RTO_SHIFT)) & LINFlexD_LINTOCR_RTO_MASK)
/*! @} */

/*! @name LINFBRR - LIN Fractional Baud Rate Register */
/*! @{ */
#define LINFlexD_LINFBRR_FBR_MASK                (0xFU)
#define LINFlexD_LINFBRR_FBR_SHIFT               (0U)
#define LINFlexD_LINFBRR_FBR_WIDTH               (4U)
#define LINFlexD_LINFBRR_FBR(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINFBRR_FBR_SHIFT)) & LINFlexD_LINFBRR_FBR_MASK)
/*! @} */

/*! @name LINIBRR - LIN Integer Baud Rate Register */
/*! @{ */
#define LINFlexD_LINIBRR_IBR_MASK                (0xFFFFFU)
#define LINFlexD_LINIBRR_IBR_SHIFT               (0U)
#define LINFlexD_LINIBRR_IBR_WIDTH               (20U)
#define LINFlexD_LINIBRR_IBR(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINIBRR_IBR_SHIFT)) & LINFlexD_LINIBRR_IBR_MASK)
/*! @} */

/*! @name LINCFR - LIN Checksum Field Register */
/*! @{ */
#define LINFlexD_LINCFR_CF_MASK                  (0xFFU)
#define LINFlexD_LINCFR_CF_SHIFT                 (0U)
#define LINFlexD_LINCFR_CF_WIDTH                 (8U)
#define LINFlexD_LINCFR_CF(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCFR_CF_SHIFT)) & LINFlexD_LINCFR_CF_MASK)
/*! @} */

/*! @name LINCR2 - LIN Control Register 2 */
/*! @{ */
#define LINFlexD_LINCR2_HTRQ_MASK                (0x100U)
#define LINFlexD_LINCR2_HTRQ_SHIFT               (8U)
#define LINFlexD_LINCR2_HTRQ_WIDTH               (1U)
#define LINFlexD_LINCR2_HTRQ(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR2_HTRQ_SHIFT)) & LINFlexD_LINCR2_HTRQ_MASK)
#define LINFlexD_LINCR2_ABRQ_MASK                (0x200U)
#define LINFlexD_LINCR2_ABRQ_SHIFT               (9U)
#define LINFlexD_LINCR2_ABRQ_WIDTH               (1U)
#define LINFlexD_LINCR2_ABRQ(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR2_ABRQ_SHIFT)) & LINFlexD_LINCR2_ABRQ_MASK)
#define LINFlexD_LINCR2_DTRQ_MASK                (0x400U)
#define LINFlexD_LINCR2_DTRQ_SHIFT               (10U)
#define LINFlexD_LINCR2_DTRQ_WIDTH               (1U)
#define LINFlexD_LINCR2_DTRQ(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR2_DTRQ_SHIFT)) & LINFlexD_LINCR2_DTRQ_MASK)
#define LINFlexD_LINCR2_DDRQ_MASK                (0x800U)
#define LINFlexD_LINCR2_DDRQ_SHIFT               (11U)
#define LINFlexD_LINCR2_DDRQ_WIDTH               (1U)
#define LINFlexD_LINCR2_DDRQ(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR2_DDRQ_SHIFT)) & LINFlexD_LINCR2_DDRQ_MASK)
#define LINFlexD_LINCR2_WURQ_MASK                (0x1000U)
#define LINFlexD_LINCR2_WURQ_SHIFT               (12U)
#define LINFlexD_LINCR2_WURQ_WIDTH               (1U)
#define LINFlexD_LINCR2_WURQ(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR2_WURQ_SHIFT)) & LINFlexD_LINCR2_WURQ_MASK)
#define LINFlexD_LINCR2_IOPE_MASK                (0x2000U)
#define LINFlexD_LINCR2_IOPE_SHIFT               (13U)
#define LINFlexD_LINCR2_IOPE_WIDTH               (1U)
#define LINFlexD_LINCR2_IOPE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR2_IOPE_SHIFT)) & LINFlexD_LINCR2_IOPE_MASK)
#define LINFlexD_LINCR2_IOBE_MASK                (0x4000U)
#define LINFlexD_LINCR2_IOBE_SHIFT               (14U)
#define LINFlexD_LINCR2_IOBE_WIDTH               (1U)
#define LINFlexD_LINCR2_IOBE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR2_IOBE_SHIFT)) & LINFlexD_LINCR2_IOBE_MASK)
#define LINFlexD_LINCR2_TBDE_MASK                (0x8000U)
#define LINFlexD_LINCR2_TBDE_SHIFT               (15U)
#define LINFlexD_LINCR2_TBDE_WIDTH               (1U)
#define LINFlexD_LINCR2_TBDE(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_LINCR2_TBDE_SHIFT)) & LINFlexD_LINCR2_TBDE_MASK)
/*! @} */

/*! @name BIDR - Buffer Identifier Register */
/*! @{ */
#define LINFlexD_BIDR_ID_MASK                    (0x3FU)
#define LINFlexD_BIDR_ID_SHIFT                   (0U)
#define LINFlexD_BIDR_ID_WIDTH                   (6U)
#define LINFlexD_BIDR_ID(x)                      (((uint32_t)(((uint32_t)(x)) << LINFlexD_BIDR_ID_SHIFT)) & LINFlexD_BIDR_ID_MASK)
#define LINFlexD_BIDR_CCS_MASK                   (0x100U)
#define LINFlexD_BIDR_CCS_SHIFT                  (8U)
#define LINFlexD_BIDR_CCS_WIDTH                  (1U)
#define LINFlexD_BIDR_CCS(x)                     (((uint32_t)(((uint32_t)(x)) << LINFlexD_BIDR_CCS_SHIFT)) & LINFlexD_BIDR_CCS_MASK)
#define LINFlexD_BIDR_DIR_MASK                   (0x200U)
#define LINFlexD_BIDR_DIR_SHIFT                  (9U)
#define LINFlexD_BIDR_DIR_WIDTH                  (1U)
#define LINFlexD_BIDR_DIR(x)                     (((uint32_t)(((uint32_t)(x)) << LINFlexD_BIDR_DIR_SHIFT)) & LINFlexD_BIDR_DIR_MASK)
#define LINFlexD_BIDR_DFL_MASK                   (0x1C00U)
#define LINFlexD_BIDR_DFL_SHIFT                  (10U)
#define LINFlexD_BIDR_DFL_WIDTH                  (3U)
#define LINFlexD_BIDR_DFL(x)                     (((uint32_t)(((uint32_t)(x)) << LINFlexD_BIDR_DFL_SHIFT)) & LINFlexD_BIDR_DFL_MASK)
/*! @} */

/*! @name BDRL - Buffer Data Register Least Significant */
/*! @{ */
#define LINFlexD_BDRL_DATA0_MASK                 (0xFFU)
#define LINFlexD_BDRL_DATA0_SHIFT                (0U)
#define LINFlexD_BDRL_DATA0_WIDTH                (8U)
#define LINFlexD_BDRL_DATA0(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_BDRL_DATA0_SHIFT)) & LINFlexD_BDRL_DATA0_MASK)
#define LINFlexD_BDRL_DATA1_MASK                 (0xFF00U)
#define LINFlexD_BDRL_DATA1_SHIFT                (8U)
#define LINFlexD_BDRL_DATA1_WIDTH                (8U)
#define LINFlexD_BDRL_DATA1(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_BDRL_DATA1_SHIFT)) & LINFlexD_BDRL_DATA1_MASK)
#define LINFlexD_BDRL_DATA2_MASK                 (0xFF0000U)
#define LINFlexD_BDRL_DATA2_SHIFT                (16U)
#define LINFlexD_BDRL_DATA2_WIDTH                (8U)
#define LINFlexD_BDRL_DATA2(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_BDRL_DATA2_SHIFT)) & LINFlexD_BDRL_DATA2_MASK)
#define LINFlexD_BDRL_DATA3_MASK                 (0xFF000000U)
#define LINFlexD_BDRL_DATA3_SHIFT                (24U)
#define LINFlexD_BDRL_DATA3_WIDTH                (8U)
#define LINFlexD_BDRL_DATA3(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_BDRL_DATA3_SHIFT)) & LINFlexD_BDRL_DATA3_MASK)
/*! @} */

/*! @name BDRM - Buffer Data Register Most Significant */
/*! @{ */
#define LINFlexD_BDRM_DATA4_MASK                 (0xFFU)
#define LINFlexD_BDRM_DATA4_SHIFT                (0U)
#define LINFlexD_BDRM_DATA4_WIDTH                (8U)
#define LINFlexD_BDRM_DATA4(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_BDRM_DATA4_SHIFT)) & LINFlexD_BDRM_DATA4_MASK)
#define LINFlexD_BDRM_DATA5_MASK                 (0xFF00U)
#define LINFlexD_BDRM_DATA5_SHIFT                (8U)
#define LINFlexD_BDRM_DATA5_WIDTH                (8U)
#define LINFlexD_BDRM_DATA5(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_BDRM_DATA5_SHIFT)) & LINFlexD_BDRM_DATA5_MASK)
#define LINFlexD_BDRM_DATA6_MASK                 (0xFF0000U)
#define LINFlexD_BDRM_DATA6_SHIFT                (16U)
#define LINFlexD_BDRM_DATA6_WIDTH                (8U)
#define LINFlexD_BDRM_DATA6(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_BDRM_DATA6_SHIFT)) & LINFlexD_BDRM_DATA6_MASK)
#define LINFlexD_BDRM_DATA7_MASK                 (0xFF000000U)
#define LINFlexD_BDRM_DATA7_SHIFT                (24U)
#define LINFlexD_BDRM_DATA7_WIDTH                (8U)
#define LINFlexD_BDRM_DATA7(x)                   (((uint32_t)(((uint32_t)(x)) << LINFlexD_BDRM_DATA7_SHIFT)) & LINFlexD_BDRM_DATA7_MASK)
/*! @} */

/*! @name GCR - Global Control Register */
/*! @{ */
#define LINFlexD_GCR_SR_MASK                     (0x1U)
#define LINFlexD_GCR_SR_SHIFT                    (0U)
#define LINFlexD_GCR_SR_WIDTH                    (1U)
#define LINFlexD_GCR_SR(x)                       (((uint32_t)(((uint32_t)(x)) << LINFlexD_GCR_SR_SHIFT)) & LINFlexD_GCR_SR_MASK)
#define LINFlexD_GCR_STOP_MASK                   (0x2U)
#define LINFlexD_GCR_STOP_SHIFT                  (1U)
#define LINFlexD_GCR_STOP_WIDTH                  (1U)
#define LINFlexD_GCR_STOP(x)                     (((uint32_t)(((uint32_t)(x)) << LINFlexD_GCR_STOP_SHIFT)) & LINFlexD_GCR_STOP_MASK)
#define LINFlexD_GCR_RDLIS_MASK                  (0x4U)
#define LINFlexD_GCR_RDLIS_SHIFT                 (2U)
#define LINFlexD_GCR_RDLIS_WIDTH                 (1U)
#define LINFlexD_GCR_RDLIS(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_GCR_RDLIS_SHIFT)) & LINFlexD_GCR_RDLIS_MASK)
#define LINFlexD_GCR_TDLIS_MASK                  (0x8U)
#define LINFlexD_GCR_TDLIS_SHIFT                 (3U)
#define LINFlexD_GCR_TDLIS_WIDTH                 (1U)
#define LINFlexD_GCR_TDLIS(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_GCR_TDLIS_SHIFT)) & LINFlexD_GCR_TDLIS_MASK)
#define LINFlexD_GCR_RDFBM_MASK                  (0x10U)
#define LINFlexD_GCR_RDFBM_SHIFT                 (4U)
#define LINFlexD_GCR_RDFBM_WIDTH                 (1U)
#define LINFlexD_GCR_RDFBM(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_GCR_RDFBM_SHIFT)) & LINFlexD_GCR_RDFBM_MASK)
#define LINFlexD_GCR_TDFBM_MASK                  (0x20U)
#define LINFlexD_GCR_TDFBM_SHIFT                 (5U)
#define LINFlexD_GCR_TDFBM_WIDTH                 (1U)
#define LINFlexD_GCR_TDFBM(x)                    (((uint32_t)(((uint32_t)(x)) << LINFlexD_GCR_TDFBM_SHIFT)) & LINFlexD_GCR_TDFBM_MASK)
/*! @} */

/*! @name UARTPTO - UART Preset Timeout Register */
/*! @{ */
#define LINFlexD_UARTPTO_PTO_MASK                (0xFFFU)
#define LINFlexD_UARTPTO_PTO_SHIFT               (0U)
#define LINFlexD_UARTPTO_PTO_WIDTH               (12U)
#define LINFlexD_UARTPTO_PTO(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTPTO_PTO_SHIFT)) & LINFlexD_UARTPTO_PTO_MASK)
/*! @} */

/*! @name UARTCTO - UART Current Timeout Register */
/*! @{ */
#define LINFlexD_UARTCTO_CTO_MASK                (0xFFFU)
#define LINFlexD_UARTCTO_CTO_SHIFT               (0U)
#define LINFlexD_UARTCTO_CTO_WIDTH               (12U)
#define LINFlexD_UARTCTO_CTO(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_UARTCTO_CTO_SHIFT)) & LINFlexD_UARTCTO_CTO_MASK)
/*! @} */

/*! @name DMATXE - DMA Tx Enable Register */
/*! @{ */
#define LINFlexD_DMATXE_DTE0_MASK                (0x1U)
#define LINFlexD_DMATXE_DTE0_SHIFT               (0U)
#define LINFlexD_DMATXE_DTE0_WIDTH               (1U)
#define LINFlexD_DMATXE_DTE0(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_DMATXE_DTE0_SHIFT)) & LINFlexD_DMATXE_DTE0_MASK)
/*! @} */

/*! @name DMARXE - DMA Rx Enable Register */
/*! @{ */
#define LINFlexD_DMARXE_DRE0_MASK                (0x1U)
#define LINFlexD_DMARXE_DRE0_SHIFT               (0U)
#define LINFlexD_DMARXE_DRE0_WIDTH               (1U)
#define LINFlexD_DMARXE_DRE0(x)                  (((uint32_t)(((uint32_t)(x)) << LINFlexD_DMARXE_DRE0_SHIFT)) & LINFlexD_DMARXE_DRE0_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group LINFLEXD_Register_Masks */

/*!
 * @}
 */ /* end of group LINFLEXD_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_LINFLEXD_H_) */
