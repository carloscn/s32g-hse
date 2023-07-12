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
 * @file S32R45_ddr_subsystem.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_ddr_subsystem
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
#if !defined(S32R45_ddr_subsystem_H_)  /* Check if memory map has not been already included */
#define S32R45_ddr_subsystem_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- ddr_subsystem Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ddr_subsystem_Peripheral_Access_Layer ddr_subsystem Peripheral Access Layer
 * @{
 */

/** ddr_subsystem - Register Layout Typedef */
typedef struct {
  __IO uint32_t REG_GRP0;                          /**< DDR SS Reg, offset: 0x0 */
} ddr_subsystem_Type, *ddr_subsystem_MemMapPtr;

/** Number of instances of the ddr_subsystem module. */
#define ddr_subsystem_INSTANCE_COUNT             (1u)

/* ddr_subsystem - Peripheral instance base addresses */
/** Peripheral DDR_SUBSYSTEM base address */
#define DDR_SUBSYSTEM_BASE                       (0x403D0000u)
/** Peripheral DDR_SUBSYSTEM base pointer */
#define DDR_SUBSYSTEM                            ((ddr_subsystem_Type *)DDR_SUBSYSTEM_BASE)
/** Array initializer of ddr_subsystem peripheral base addresses */
#define ddr_subsystem_BASE_ADDRS                 { DDR_SUBSYSTEM_BASE }
/** Array initializer of ddr_subsystem peripheral base pointers */
#define ddr_subsystem_BASE_PTRS                  { DDR_SUBSYSTEM }

/* ----------------------------------------------------------------------------
   -- ddr_subsystem Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ddr_subsystem_Register_Masks ddr_subsystem Register Masks
 * @{
 */

/*! @name REG_GRP0 - DDR SS Reg */
/*! @{ */
#define ddr_subsystem_REG_GRP0_dfi1_enabled_MASK (0x1U)
#define ddr_subsystem_REG_GRP0_dfi1_enabled_SHIFT (0U)
#define ddr_subsystem_REG_GRP0_dfi1_enabled_WIDTH (1U)
#define ddr_subsystem_REG_GRP0_dfi1_enabled(x)   (((uint32_t)(((uint32_t)(x)) << ddr_subsystem_REG_GRP0_dfi1_enabled_SHIFT)) & ddr_subsystem_REG_GRP0_dfi1_enabled_MASK)
#define ddr_subsystem_REG_GRP0_axi_parity_en_MASK (0x1FF0U)
#define ddr_subsystem_REG_GRP0_axi_parity_en_SHIFT (4U)
#define ddr_subsystem_REG_GRP0_axi_parity_en_WIDTH (9U)
#define ddr_subsystem_REG_GRP0_axi_parity_en(x)  (((uint32_t)(((uint32_t)(x)) << ddr_subsystem_REG_GRP0_axi_parity_en_SHIFT)) & ddr_subsystem_REG_GRP0_axi_parity_en_MASK)
#define ddr_subsystem_REG_GRP0_axi_parity_type_MASK (0x1FF0000U)
#define ddr_subsystem_REG_GRP0_axi_parity_type_SHIFT (16U)
#define ddr_subsystem_REG_GRP0_axi_parity_type_WIDTH (9U)
#define ddr_subsystem_REG_GRP0_axi_parity_type(x) (((uint32_t)(((uint32_t)(x)) << ddr_subsystem_REG_GRP0_axi_parity_type_SHIFT)) & ddr_subsystem_REG_GRP0_axi_parity_type_MASK)
#define ddr_subsystem_REG_GRP0_core_clk_disable_MASK (0x8000000U)
#define ddr_subsystem_REG_GRP0_core_clk_disable_SHIFT (27U)
#define ddr_subsystem_REG_GRP0_core_clk_disable_WIDTH (1U)
#define ddr_subsystem_REG_GRP0_core_clk_disable(x) (((uint32_t)(((uint32_t)(x)) << ddr_subsystem_REG_GRP0_core_clk_disable_SHIFT)) & ddr_subsystem_REG_GRP0_core_clk_disable_MASK)
#define ddr_subsystem_REG_GRP0_aclk_0_disable_MASK (0x10000000U)
#define ddr_subsystem_REG_GRP0_aclk_0_disable_SHIFT (28U)
#define ddr_subsystem_REG_GRP0_aclk_0_disable_WIDTH (1U)
#define ddr_subsystem_REG_GRP0_aclk_0_disable(x) (((uint32_t)(((uint32_t)(x)) << ddr_subsystem_REG_GRP0_aclk_0_disable_SHIFT)) & ddr_subsystem_REG_GRP0_aclk_0_disable_MASK)
#define ddr_subsystem_REG_GRP0_aclk_1_disable_MASK (0x20000000U)
#define ddr_subsystem_REG_GRP0_aclk_1_disable_SHIFT (29U)
#define ddr_subsystem_REG_GRP0_aclk_1_disable_WIDTH (1U)
#define ddr_subsystem_REG_GRP0_aclk_1_disable(x) (((uint32_t)(((uint32_t)(x)) << ddr_subsystem_REG_GRP0_aclk_1_disable_SHIFT)) & ddr_subsystem_REG_GRP0_aclk_1_disable_MASK)
#define ddr_subsystem_REG_GRP0_aclk_2_disable_MASK (0x40000000U)
#define ddr_subsystem_REG_GRP0_aclk_2_disable_SHIFT (30U)
#define ddr_subsystem_REG_GRP0_aclk_2_disable_WIDTH (1U)
#define ddr_subsystem_REG_GRP0_aclk_2_disable(x) (((uint32_t)(((uint32_t)(x)) << ddr_subsystem_REG_GRP0_aclk_2_disable_SHIFT)) & ddr_subsystem_REG_GRP0_aclk_2_disable_MASK)
#define ddr_subsystem_REG_GRP0_ddr_ss_pub_reg_deco_int_en_MASK (0x80000000U)
#define ddr_subsystem_REG_GRP0_ddr_ss_pub_reg_deco_int_en_SHIFT (31U)
#define ddr_subsystem_REG_GRP0_ddr_ss_pub_reg_deco_int_en_WIDTH (1U)
#define ddr_subsystem_REG_GRP0_ddr_ss_pub_reg_deco_int_en(x) (((uint32_t)(((uint32_t)(x)) << ddr_subsystem_REG_GRP0_ddr_ss_pub_reg_deco_int_en_SHIFT)) & ddr_subsystem_REG_GRP0_ddr_ss_pub_reg_deco_int_en_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group ddr_subsystem_Register_Masks */

/*!
 * @}
 */ /* end of group ddr_subsystem_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_ddr_subsystem_H_) */
