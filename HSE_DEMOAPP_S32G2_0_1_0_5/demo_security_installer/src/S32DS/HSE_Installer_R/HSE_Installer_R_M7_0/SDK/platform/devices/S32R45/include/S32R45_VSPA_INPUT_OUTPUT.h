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
 * @file S32R45_VSPA_Input_output.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_VSPA_Input_output
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
#if !defined(S32R45_VSPA_Input_output_H_)  /* Check if memory map has not been already included */
#define S32R45_VSPA_Input_output_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- VSPA_Input_output Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Input_output_Peripheral_Access_Layer VSPA_Input_output Peripheral Access Layer
 * @{
 */

/** VSPA_Input_output - Size of Registers Arrays */
#define VSPA_Input_output_GP_IN_COUNT             8u
#define VSPA_Input_output_GP_OUT_COUNT            20u

/** VSPA_Input_output - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[112];
  __I  uint32_t PLAT_IN_0;                         /**< Platform Input, offset: 0x70 */
  uint8_t RESERVED_1[12];
  __IO uint32_t PLAT_OUT_0;                        /**< Platform Output, offset: 0x80 */
  uint8_t RESERVED_2[1148];
  __I  uint32_t GP_IN[VSPA_Input_output_GP_IN_COUNT]; /**< General Purpose Input registers [8 registers], array offset: 0x500, array step: 0x4 */
  uint8_t RESERVED_3[96];
  __IO uint32_t GP_OUT[VSPA_Input_output_GP_OUT_COUNT]; /**< General Purpose Output registers [20 registers], array offset: 0x580, array step: 0x4 */
} VSPA_Input_output_Type, *VSPA_Input_output_MemMapPtr;

/** Number of instances of the VSPA_Input_output module. */
#define VSPA_Input_output_INSTANCE_COUNT         (2u)

/* VSPA_Input_output - Peripheral instance base addresses */
/** Peripheral LAX_0_Input_output base address */
#define LAX_0_Input_output_BASE                  (0x44028000u)
/** Peripheral LAX_0_Input_output base pointer */
#define LAX_0_Input_output                       ((VSPA_Input_output_Type *)LAX_0_Input_output_BASE)
/** Peripheral LAX_1_Input_output base address */
#define LAX_1_Input_output_BASE                  (0x44029000u)
/** Peripheral LAX_1_Input_output base pointer */
#define LAX_1_Input_output                       ((VSPA_Input_output_Type *)LAX_1_Input_output_BASE)
/** Array initializer of VSPA_Input_output peripheral base addresses */
#define VSPA_Input_output_BASE_ADDRS             { LAX_0_Input_output_BASE, LAX_1_Input_output_BASE }
/** Array initializer of VSPA_Input_output peripheral base pointers */
#define VSPA_Input_output_BASE_PTRS              { LAX_0_Input_output, LAX_1_Input_output }

/* ----------------------------------------------------------------------------
   -- VSPA_Input_output Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup VSPA_Input_output_Register_Masks VSPA_Input_output Register Masks
 * @{
 */

/*! @name PLAT_IN_0 - Platform Input */
/*! @{ */
#define VSPA_Input_output_PLAT_IN_0_plat_in_MASK (0xFFFFFFFFU)
#define VSPA_Input_output_PLAT_IN_0_plat_in_SHIFT (0U)
#define VSPA_Input_output_PLAT_IN_0_plat_in_WIDTH (32U)
#define VSPA_Input_output_PLAT_IN_0_plat_in(x)   (((uint32_t)(((uint32_t)(x)) << VSPA_Input_output_PLAT_IN_0_plat_in_SHIFT)) & VSPA_Input_output_PLAT_IN_0_plat_in_MASK)
/*! @} */

/*! @name PLAT_OUT_0 - Platform Output */
/*! @{ */
#define VSPA_Input_output_PLAT_OUT_0_plat_out_MASK (0xFFFFFFFFU)
#define VSPA_Input_output_PLAT_OUT_0_plat_out_SHIFT (0U)
#define VSPA_Input_output_PLAT_OUT_0_plat_out_WIDTH (32U)
#define VSPA_Input_output_PLAT_OUT_0_plat_out(x) (((uint32_t)(((uint32_t)(x)) << VSPA_Input_output_PLAT_OUT_0_plat_out_SHIFT)) & VSPA_Input_output_PLAT_OUT_0_plat_out_MASK)
/*! @} */

/*! @name GP_IN - General Purpose Input registers [8 registers] */
/*! @{ */
#define VSPA_Input_output_GP_IN_gp_in_data_MASK  (0xFFFFFFFFU)
#define VSPA_Input_output_GP_IN_gp_in_data_SHIFT (0U)
#define VSPA_Input_output_GP_IN_gp_in_data_WIDTH (32U)
#define VSPA_Input_output_GP_IN_gp_in_data(x)    (((uint32_t)(((uint32_t)(x)) << VSPA_Input_output_GP_IN_gp_in_data_SHIFT)) & VSPA_Input_output_GP_IN_gp_in_data_MASK)
/*! @} */

/*! @name GP_OUT - General Purpose Output registers [20 registers] */
/*! @{ */
#define VSPA_Input_output_GP_OUT_gp_out_data_MASK (0xFFFFFFFFU)
#define VSPA_Input_output_GP_OUT_gp_out_data_SHIFT (0U)
#define VSPA_Input_output_GP_OUT_gp_out_data_WIDTH (32U)
#define VSPA_Input_output_GP_OUT_gp_out_data(x)  (((uint32_t)(((uint32_t)(x)) << VSPA_Input_output_GP_OUT_gp_out_data_SHIFT)) & VSPA_Input_output_GP_OUT_gp_out_data_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group VSPA_Input_output_Register_Masks */

/*!
 * @}
 */ /* end of group VSPA_Input_output_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_VSPA_Input_output_H_) */
