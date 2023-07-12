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
 * @file S32R45_ACCEL_PLL.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_ACCEL_PLL
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
#if !defined(S32R45_ACCEL_PLL_H_)  /* Check if memory map has not been already included */
#define S32R45_ACCEL_PLL_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- ACCEL_PLL Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ACCEL_PLL_Peripheral_Access_Layer ACCEL_PLL Peripheral Access Layer
 * @{
 */

/** ACCEL_PLL - Size of Registers Arrays */
#define ACCEL_PLL_PLLODIV_COUNT                   2u

/** ACCEL_PLL - Register Layout Typedef */
typedef struct {
  __IO uint32_t PLLCR;                             /**< PLL Control Register, offset: 0x0 */
  __IO uint32_t PLLSR;                             /**< PLL status register, offset: 0x4 */
  __IO uint32_t PLLDV;                             /**< PLL Divider, offset: 0x8 */
  __IO uint32_t PLLFM;                             /**< PLL Frequency Modulation, offset: 0xC */
  __IO uint32_t PLLFD;                             /**< PLL Fractional Divider, offset: 0x10 */
  uint8_t RESERVED_0[12];
  __IO uint32_t PLLCLKMUX;                         /**< PLL Clock Multiplexer, offset: 0x20 */
  uint8_t RESERVED_1[92];
  __IO uint32_t PLLODIV[ACCEL_PLL_PLLODIV_COUNT];  /**< PLL Output Divider, array offset: 0x80, array step: 0x4 */
} ACCEL_PLL_Type, *ACCEL_PLL_MemMapPtr;

/** Number of instances of the ACCEL_PLL module. */
#define ACCEL_PLL_INSTANCE_COUNT                 (1u)

/* ACCEL_PLL - Peripheral instance base addresses */
/** Peripheral ACCEL_PLL base address */
#define ACCEL_PLL_BASE                           (0x40040000u)
/** Peripheral ACCEL_PLL base pointer */
#define ACCEL_PLL                                ((ACCEL_PLL_Type *)ACCEL_PLL_BASE)
/** Array initializer of ACCEL_PLL peripheral base addresses */
#define ACCEL_PLL_BASE_ADDRS                     { ACCEL_PLL_BASE }
/** Array initializer of ACCEL_PLL peripheral base pointers */
#define ACCEL_PLL_BASE_PTRS                      { ACCEL_PLL }

/* ----------------------------------------------------------------------------
   -- ACCEL_PLL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ACCEL_PLL_Register_Masks ACCEL_PLL Register Masks
 * @{
 */

/*! @name PLLCR - PLL Control Register */
/*! @{ */
#define ACCEL_PLL_PLLCR_PLLPD_MASK               (0x80000000U)
#define ACCEL_PLL_PLLCR_PLLPD_SHIFT              (31U)
#define ACCEL_PLL_PLLCR_PLLPD_WIDTH              (1U)
#define ACCEL_PLL_PLLCR_PLLPD(x)                 (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLCR_PLLPD_SHIFT)) & ACCEL_PLL_PLLCR_PLLPD_MASK)
/*! @} */

/*! @name PLLSR - PLL status register */
/*! @{ */
#define ACCEL_PLL_PLLSR_LOCK_MASK                (0x4U)
#define ACCEL_PLL_PLLSR_LOCK_SHIFT               (2U)
#define ACCEL_PLL_PLLSR_LOCK_WIDTH               (1U)
#define ACCEL_PLL_PLLSR_LOCK(x)                  (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLSR_LOCK_SHIFT)) & ACCEL_PLL_PLLSR_LOCK_MASK)
#define ACCEL_PLL_PLLSR_LOL_MASK                 (0x8U)
#define ACCEL_PLL_PLLSR_LOL_SHIFT                (3U)
#define ACCEL_PLL_PLLSR_LOL_WIDTH                (1U)
#define ACCEL_PLL_PLLSR_LOL(x)                   (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLSR_LOL_SHIFT)) & ACCEL_PLL_PLLSR_LOL_MASK)
/*! @} */

/*! @name PLLDV - PLL Divider */
/*! @{ */
#define ACCEL_PLL_PLLDV_MFI_MASK                 (0xFFU)
#define ACCEL_PLL_PLLDV_MFI_SHIFT                (0U)
#define ACCEL_PLL_PLLDV_MFI_WIDTH                (8U)
#define ACCEL_PLL_PLLDV_MFI(x)                   (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLDV_MFI_SHIFT)) & ACCEL_PLL_PLLDV_MFI_MASK)
#define ACCEL_PLL_PLLDV_RDIV_MASK                (0x7000U)
#define ACCEL_PLL_PLLDV_RDIV_SHIFT               (12U)
#define ACCEL_PLL_PLLDV_RDIV_WIDTH               (3U)
#define ACCEL_PLL_PLLDV_RDIV(x)                  (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLDV_RDIV_SHIFT)) & ACCEL_PLL_PLLDV_RDIV_MASK)
/*! @} */

/*! @name PLLFM - PLL Frequency Modulation */
/*! @{ */
#define ACCEL_PLL_PLLFM_STEPNO_MASK              (0x7FFU)
#define ACCEL_PLL_PLLFM_STEPNO_SHIFT             (0U)
#define ACCEL_PLL_PLLFM_STEPNO_WIDTH             (11U)
#define ACCEL_PLL_PLLFM_STEPNO(x)                (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLFM_STEPNO_SHIFT)) & ACCEL_PLL_PLLFM_STEPNO_MASK)
#define ACCEL_PLL_PLLFM_STEPSIZE_MASK            (0x3FF0000U)
#define ACCEL_PLL_PLLFM_STEPSIZE_SHIFT           (16U)
#define ACCEL_PLL_PLLFM_STEPSIZE_WIDTH           (10U)
#define ACCEL_PLL_PLLFM_STEPSIZE(x)              (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLFM_STEPSIZE_SHIFT)) & ACCEL_PLL_PLLFM_STEPSIZE_MASK)
#define ACCEL_PLL_PLLFM_SPREADCTL_MASK           (0x20000000U)
#define ACCEL_PLL_PLLFM_SPREADCTL_SHIFT          (29U)
#define ACCEL_PLL_PLLFM_SPREADCTL_WIDTH          (1U)
#define ACCEL_PLL_PLLFM_SPREADCTL(x)             (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLFM_SPREADCTL_SHIFT)) & ACCEL_PLL_PLLFM_SPREADCTL_MASK)
#define ACCEL_PLL_PLLFM_SSCGBYP_MASK             (0x40000000U)
#define ACCEL_PLL_PLLFM_SSCGBYP_SHIFT            (30U)
#define ACCEL_PLL_PLLFM_SSCGBYP_WIDTH            (1U)
#define ACCEL_PLL_PLLFM_SSCGBYP(x)               (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLFM_SSCGBYP_SHIFT)) & ACCEL_PLL_PLLFM_SSCGBYP_MASK)
/*! @} */

/*! @name PLLFD - PLL Fractional Divider */
/*! @{ */
#define ACCEL_PLL_PLLFD_MFN_MASK                 (0x7FFFU)
#define ACCEL_PLL_PLLFD_MFN_SHIFT                (0U)
#define ACCEL_PLL_PLLFD_MFN_WIDTH                (15U)
#define ACCEL_PLL_PLLFD_MFN(x)                   (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLFD_MFN_SHIFT)) & ACCEL_PLL_PLLFD_MFN_MASK)
#define ACCEL_PLL_PLLFD_SDMEN_MASK               (0x40000000U)
#define ACCEL_PLL_PLLFD_SDMEN_SHIFT              (30U)
#define ACCEL_PLL_PLLFD_SDMEN_WIDTH              (1U)
#define ACCEL_PLL_PLLFD_SDMEN(x)                 (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLFD_SDMEN_SHIFT)) & ACCEL_PLL_PLLFD_SDMEN_MASK)
/*! @} */

/*! @name PLLCLKMUX - PLL Clock Multiplexer */
/*! @{ */
#define ACCEL_PLL_PLLCLKMUX_REFCLKSEL_MASK       (0x1U)
#define ACCEL_PLL_PLLCLKMUX_REFCLKSEL_SHIFT      (0U)
#define ACCEL_PLL_PLLCLKMUX_REFCLKSEL_WIDTH      (1U)
#define ACCEL_PLL_PLLCLKMUX_REFCLKSEL(x)         (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLCLKMUX_REFCLKSEL_SHIFT)) & ACCEL_PLL_PLLCLKMUX_REFCLKSEL_MASK)
/*! @} */

/*! @name PLLODIV - PLL Output Divider */
/*! @{ */
#define ACCEL_PLL_PLLODIV_DIV_MASK               (0xFF0000U)
#define ACCEL_PLL_PLLODIV_DIV_SHIFT              (16U)
#define ACCEL_PLL_PLLODIV_DIV_WIDTH              (8U)
#define ACCEL_PLL_PLLODIV_DIV(x)                 (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLODIV_DIV_SHIFT)) & ACCEL_PLL_PLLODIV_DIV_MASK)
#define ACCEL_PLL_PLLODIV_DE_MASK                (0x80000000U)
#define ACCEL_PLL_PLLODIV_DE_SHIFT               (31U)
#define ACCEL_PLL_PLLODIV_DE_WIDTH               (1U)
#define ACCEL_PLL_PLLODIV_DE(x)                  (((uint32_t)(((uint32_t)(x)) << ACCEL_PLL_PLLODIV_DE_SHIFT)) & ACCEL_PLL_PLLODIV_DE_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group ACCEL_PLL_Register_Masks */

/*!
 * @}
 */ /* end of group ACCEL_PLL_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_ACCEL_PLL_H_) */
