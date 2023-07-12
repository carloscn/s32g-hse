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
 * @file S32R45_VSPA_VCPU_Go_ctrl_and_stat.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA_VCPU_Go_ctrl_and_stat
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
#if !defined(S32R45_VSPA_VCPU_Go_ctrl_and_stat_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_VCPU_Go_ctrl_and_stat_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA_VCPU_Go_ctrl_and_stat Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_VCPU_Go_ctrl_and_stat_Peripheral_Access_Layer VSPA_VCPU_Go_ctrl_and_stat Peripheral Access Layer
 * @{
 */

/** VSPA_VCPU_Go_ctrl_and_stat - Size of Registers Arrays */
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_FLAGS_COUNT 2u
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_GOEN_COUNT 2u

/** VSPA_VCPU_Go_ctrl_and_stat - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[40];
  __IO uint32_t EXT_GO_ENA;                        /**< External Go Enable, offset: 0x28 */
  __IO uint32_t EXT_GO_STAT;                       /**< External Go Status, offset: 0x2C */
  uint8_t RESERVED_1[48];
  __IO uint32_t AXISLV_FLAGS[VSPA_VCPU_Go_ctrl_and_stat_AXISLV_FLAGS_COUNT]; /**< AXI Slave flags register a, array offset: 0x60, array step: 0x4 */
  __IO uint32_t AXISLV_GOEN[VSPA_VCPU_Go_ctrl_and_stat_AXISLV_GOEN_COUNT]; /**< AXI Slave Go Enable register a, array offset: 0x68, array step: 0x4 */
  uint8_t RESERVED_2[272];
  __IO uint32_t VCPU_GO_ADDR;                      /**< VCPU Go Address, offset: 0x180 */
  __IO uint32_t VCPU_GO_STACK;                     /**< VCPU Go Stack, offset: 0x184 */
} VSPA_VCPU_Go_ctrl_and_stat_Type, *VSPA_VCPU_Go_ctrl_and_stat_MemMapPtr;

/** Number of instances of the VSPA_VCPU_Go_ctrl_and_stat module. */
#define VSPA_VCPU_Go_ctrl_and_stat_INSTANCE_COUNT (2u)

/* VSPA_VCPU_Go_ctrl_and_stat - Peripheral instance base addresses */
/** Peripheral LAX_0_VCPU_Go_ctrl_and_stat base address */
#define LAX_0_VCPU_Go_ctrl_and_stat_BASE         (0x44028000u)
/** Peripheral LAX_0_VCPU_Go_ctrl_and_stat base pointer */
#define LAX_0_VCPU_Go_ctrl_and_stat              ((VSPA_VCPU_Go_ctrl_and_stat_Type *)LAX_0_VCPU_Go_ctrl_and_stat_BASE)
/** Peripheral LAX_1_VCPU_Go_ctrl_and_stat base address */
#define LAX_1_VCPU_Go_ctrl_and_stat_BASE         (0x44029000u)
/** Peripheral LAX_1_VCPU_Go_ctrl_and_stat base pointer */
#define LAX_1_VCPU_Go_ctrl_and_stat              ((VSPA_VCPU_Go_ctrl_and_stat_Type *)LAX_1_VCPU_Go_ctrl_and_stat_BASE)
/** Array initializer of VSPA_VCPU_Go_ctrl_and_stat peripheral base addresses */
#define VSPA_VCPU_Go_ctrl_and_stat_BASE_ADDRS    { LAX_0_VCPU_Go_ctrl_and_stat_BASE, LAX_1_VCPU_Go_ctrl_and_stat_BASE }
/** Array initializer of VSPA_VCPU_Go_ctrl_and_stat peripheral base pointers */
#define VSPA_VCPU_Go_ctrl_and_stat_BASE_PTRS     { LAX_0_VCPU_Go_ctrl_and_stat, LAX_1_VCPU_Go_ctrl_and_stat }

/* ----------------------------------------------------------------------------
   -- VSPA_VCPU_Go_ctrl_and_stat Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_VCPU_Go_ctrl_and_stat_Register_Masks VSPA_VCPU_Go_ctrl_and_stat Register Masks
 * @{
 */

/*! @name EXT_GO_ENA - External Go Enable */
/*! @{ */
#define VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_ENA_ext_go_ena_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_ENA_ext_go_ena_SHIFT (0U)
#define VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_ENA_ext_go_ena_WIDTH (32U)
#define VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_ENA_ext_go_ena(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_ENA_ext_go_ena_SHIFT)) & VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_ENA_ext_go_ena_MASK)
/*! @} */

/*! @name EXT_GO_STAT - External Go Status */
/*! @{ */
#define VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_STAT_ext_go_stat_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_STAT_ext_go_stat_SHIFT (0U)
#define VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_STAT_ext_go_stat_WIDTH (32U)
#define VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_STAT_ext_go_stat(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_STAT_ext_go_stat_SHIFT)) & VSPA_VCPU_Go_ctrl_and_stat_EXT_GO_STAT_ext_go_stat_MASK)
/*! @} */

/*! @name AXISLV_FLAGS - AXI Slave flags register a */
/*! @{ */
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_FLAGS_axislv_flagn_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_FLAGS_axislv_flagn_SHIFT (0U)
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_FLAGS_axislv_flagn_WIDTH (32U)
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_FLAGS_axislv_flagn(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Go_ctrl_and_stat_AXISLV_FLAGS_axislv_flagn_SHIFT)) & VSPA_VCPU_Go_ctrl_and_stat_AXISLV_FLAGS_axislv_flagn_MASK)
/*! @} */

/*! @name AXISLV_GOEN - AXI Slave Go Enable register a */
/*! @{ */
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_GOEN_axislv_goenn_MASK (0xFFFFFFFFU)
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_GOEN_axislv_goenn_SHIFT (0U)
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_GOEN_axislv_goenn_WIDTH (32U)
#define VSPA_VCPU_Go_ctrl_and_stat_AXISLV_GOEN_axislv_goenn(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Go_ctrl_and_stat_AXISLV_GOEN_axislv_goenn_SHIFT)) & VSPA_VCPU_Go_ctrl_and_stat_AXISLV_GOEN_axislv_goenn_MASK)
/*! @} */

/*! @name VCPU_GO_ADDR - VCPU Go Address */
/*! @{ */
#define VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_ADDR_vcpu_go_addr_MASK (0x1FFFFFEU)
#define VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_ADDR_vcpu_go_addr_SHIFT (1U)
#define VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_ADDR_vcpu_go_addr_WIDTH (24U)
#define VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_ADDR_vcpu_go_addr(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_ADDR_vcpu_go_addr_SHIFT)) & VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_ADDR_vcpu_go_addr_MASK)
/*! @} */

/*! @name VCPU_GO_STACK - VCPU Go Stack */
/*! @{ */
#define VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_STACK_vcpu_go_stack_MASK (0xFFFFFU)
#define VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_STACK_vcpu_go_stack_SHIFT (0U)
#define VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_STACK_vcpu_go_stack_WIDTH (20U)
#define VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_STACK_vcpu_go_stack(x) (((uint32_t)(((uint32_t)(x)) << VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_STACK_vcpu_go_stack_SHIFT)) & VSPA_VCPU_Go_ctrl_and_stat_VCPU_GO_STACK_vcpu_go_stack_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_VCPU_Go_ctrl_and_stat_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_VCPU_Go_ctrl_and_stat_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_VCPU_Go_ctrl_and_stat_H_) */
