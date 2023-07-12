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
 * @file S32R45_SERDES_GPR.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_SERDES_GPR
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
#if !defined(S32R45_SERDES_GPR_H_)  /* Check if memory map has not been already included */
#define S32R45_SERDES_GPR_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- SERDES_GPR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SERDES_GPR_Peripheral_Access_Layer SERDES_GPR Peripheral Access Layer
 * @{
 */

/** SERDES_GPR - Register Layout Typedef */
typedef struct {
  __IO uint32_t PCIE_CONFIG_0;                     /**< PCIE Configuration 0, offset: 0x0 */
} SERDES_GPR_Type, *SERDES_GPR_MemMapPtr;

/** Number of instances of the SERDES_GPR module. */
#define SERDES_GPR_INSTANCE_COUNT                (2u)

/* SERDES_GPR - Peripheral instance base addresses */
/** Peripheral SERDES_0_GPR base address */
#define SERDES_0_GPR_BASE                        (0x4007C500u)
/** Peripheral SERDES_0_GPR base pointer */
#define SERDES_0_GPR                             ((SERDES_GPR_Type *)SERDES_0_GPR_BASE)
/** Peripheral SERDES_1_GPR base address */
#define SERDES_1_GPR_BASE                        (0x4007CB00u)
/** Peripheral SERDES_1_GPR base pointer */
#define SERDES_1_GPR                             ((SERDES_GPR_Type *)SERDES_1_GPR_BASE)
/** Array initializer of SERDES_GPR peripheral base addresses */
#define SERDES_GPR_BASE_ADDRS                    { SERDES_0_GPR_BASE, SERDES_1_GPR_BASE }
/** Array initializer of SERDES_GPR peripheral base pointers */
#define SERDES_GPR_BASE_PTRS                     { SERDES_0_GPR, SERDES_1_GPR }

/* ----------------------------------------------------------------------------
   -- SERDES_GPR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SERDES_GPR_Register_Masks SERDES_GPR Register Masks
 * @{
 */

/*! @name PCIE_CONFIG_0 - PCIE Configuration 0 */
/*! @{ */
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_araddrp_err_MASK (0x1U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_araddrp_err_SHIFT (0U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_araddrp_err_WIDTH (1U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_araddrp_err(x) (((uint32_t)(((uint32_t)(x)) << SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_araddrp_err_SHIFT)) & SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_araddrp_err_MASK)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_awaddrp_err_MASK (0x2U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_awaddrp_err_SHIFT (1U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_awaddrp_err_WIDTH (1U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_awaddrp_err(x) (((uint32_t)(((uint32_t)(x)) << SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_awaddrp_err_SHIFT)) & SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_awaddrp_err_MASK)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_wdatap_err_MASK (0x4U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_wdatap_err_SHIFT (2U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_wdatap_err_WIDTH (1U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_wdatap_err(x) (((uint32_t)(((uint32_t)(x)) << SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_wdatap_err_SHIFT)) & SERDES_GPR_PCIE_CONFIG_0_parity_chk_mstr_wdatap_err_MASK)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_slv_rdatap_err_MASK (0x8U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_slv_rdatap_err_SHIFT (3U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_slv_rdatap_err_WIDTH (1U)
#define SERDES_GPR_PCIE_CONFIG_0_parity_chk_slv_rdatap_err(x) (((uint32_t)(((uint32_t)(x)) << SERDES_GPR_PCIE_CONFIG_0_parity_chk_slv_rdatap_err_SHIFT)) & SERDES_GPR_PCIE_CONFIG_0_parity_chk_slv_rdatap_err_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group SERDES_GPR_Register_Masks */

/*!
 * @}
 */ /* end of group SERDES_GPR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_SERDES_GPR_H_) */
