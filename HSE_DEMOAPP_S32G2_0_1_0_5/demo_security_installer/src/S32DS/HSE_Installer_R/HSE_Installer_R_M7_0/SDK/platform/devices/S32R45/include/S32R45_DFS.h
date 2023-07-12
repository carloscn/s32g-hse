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
 * @file S32R45_DFS.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_DFS
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
#if !defined(S32R45_DFS_H_)  /* Check if memory map has not been already included */
#define S32R45_DFS_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- DFS Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DFS_Peripheral_Access_Layer DFS Peripheral Access Layer
 * @{
 */

/** DFS - Size of Registers Arrays */
#define DFS_DVPORT_COUNT                          6u

/** DFS - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[12];
  __I  uint32_t PORTSR;                            /**< Port status register, offset: 0xC */
  __IO uint32_t PORTLOLSR;                         /**< Port Loss of Lock Status, offset: 0x10 */
  __IO uint32_t PORTRESET;                         /**< Port Reset, offset: 0x14 */
  __IO uint32_t CTL;                               /**< Control, offset: 0x18 */
  __IO uint32_t DVPORT[DFS_DVPORT_COUNT];          /**< Divider for Port 0..Divider for Port 5, array offset: 0x1C, array step: 0x4 */
} DFS_Type, *DFS_MemMapPtr;

/** Number of instances of the DFS module. */
#define DFS_INSTANCE_COUNT                       (2u)

/* DFS - Peripheral instance base addresses */
/** Peripheral CORE_DFS base address */
#define CORE_DFS_BASE                            (0x40054000u)
/** Peripheral CORE_DFS base pointer */
#define CORE_DFS                                 ((DFS_Type *)CORE_DFS_BASE)
/** Peripheral PERIPH_DFS base address */
#define PERIPH_DFS_BASE                          (0x40058000u)
/** Peripheral PERIPH_DFS base pointer */
#define PERIPH_DFS                               ((DFS_Type *)PERIPH_DFS_BASE)
/** Array initializer of DFS peripheral base addresses */
#define DFS_BASE_ADDRS                           { CORE_DFS_BASE, PERIPH_DFS_BASE }
/** Array initializer of DFS peripheral base pointers */
#define DFS_BASE_PTRS                            { CORE_DFS, PERIPH_DFS }

/* ----------------------------------------------------------------------------
   -- DFS Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DFS_Register_Masks DFS Register Masks
 * @{
 */

/*! @name PORTSR - Port status register */
/*! @{ */
#define DFS_PORTSR_PORTSTAT_MASK                 (0x3FU)
#define DFS_PORTSR_PORTSTAT_SHIFT                (0U)
#define DFS_PORTSR_PORTSTAT_WIDTH                (6U)
#define DFS_PORTSR_PORTSTAT(x)                   (((uint32_t)(((uint32_t)(x)) << DFS_PORTSR_PORTSTAT_SHIFT)) & DFS_PORTSR_PORTSTAT_MASK)
/*! @} */

/*! @name PORTLOLSR - Port Loss of Lock Status */
/*! @{ */
#define DFS_PORTLOLSR_LOLF0_MASK                 (0x1U)
#define DFS_PORTLOLSR_LOLF0_SHIFT                (0U)
#define DFS_PORTLOLSR_LOLF0_WIDTH                (1U)
#define DFS_PORTLOLSR_LOLF0(x)                   (((uint32_t)(((uint32_t)(x)) << DFS_PORTLOLSR_LOLF0_SHIFT)) & DFS_PORTLOLSR_LOLF0_MASK)
#define DFS_PORTLOLSR_LOLF1_MASK                 (0x2U)
#define DFS_PORTLOLSR_LOLF1_SHIFT                (1U)
#define DFS_PORTLOLSR_LOLF1_WIDTH                (1U)
#define DFS_PORTLOLSR_LOLF1(x)                   (((uint32_t)(((uint32_t)(x)) << DFS_PORTLOLSR_LOLF1_SHIFT)) & DFS_PORTLOLSR_LOLF1_MASK)
#define DFS_PORTLOLSR_LOLF2_MASK                 (0x4U)
#define DFS_PORTLOLSR_LOLF2_SHIFT                (2U)
#define DFS_PORTLOLSR_LOLF2_WIDTH                (1U)
#define DFS_PORTLOLSR_LOLF2(x)                   (((uint32_t)(((uint32_t)(x)) << DFS_PORTLOLSR_LOLF2_SHIFT)) & DFS_PORTLOLSR_LOLF2_MASK)
#define DFS_PORTLOLSR_LOLF3_MASK                 (0x8U)
#define DFS_PORTLOLSR_LOLF3_SHIFT                (3U)
#define DFS_PORTLOLSR_LOLF3_WIDTH                (1U)
#define DFS_PORTLOLSR_LOLF3(x)                   (((uint32_t)(((uint32_t)(x)) << DFS_PORTLOLSR_LOLF3_SHIFT)) & DFS_PORTLOLSR_LOLF3_MASK)
#define DFS_PORTLOLSR_LOLF4_MASK                 (0x10U)
#define DFS_PORTLOLSR_LOLF4_SHIFT                (4U)
#define DFS_PORTLOLSR_LOLF4_WIDTH                (1U)
#define DFS_PORTLOLSR_LOLF4(x)                   (((uint32_t)(((uint32_t)(x)) << DFS_PORTLOLSR_LOLF4_SHIFT)) & DFS_PORTLOLSR_LOLF4_MASK)
#define DFS_PORTLOLSR_LOLF5_MASK                 (0x20U)
#define DFS_PORTLOLSR_LOLF5_SHIFT                (5U)
#define DFS_PORTLOLSR_LOLF5_WIDTH                (1U)
#define DFS_PORTLOLSR_LOLF5(x)                   (((uint32_t)(((uint32_t)(x)) << DFS_PORTLOLSR_LOLF5_SHIFT)) & DFS_PORTLOLSR_LOLF5_MASK)
/*! @} */

/*! @name PORTRESET - Port Reset */
/*! @{ */
#define DFS_PORTRESET_RESET0_MASK                (0x1U)
#define DFS_PORTRESET_RESET0_SHIFT               (0U)
#define DFS_PORTRESET_RESET0_WIDTH               (1U)
#define DFS_PORTRESET_RESET0(x)                  (((uint32_t)(((uint32_t)(x)) << DFS_PORTRESET_RESET0_SHIFT)) & DFS_PORTRESET_RESET0_MASK)
#define DFS_PORTRESET_RESET1_MASK                (0x2U)
#define DFS_PORTRESET_RESET1_SHIFT               (1U)
#define DFS_PORTRESET_RESET1_WIDTH               (1U)
#define DFS_PORTRESET_RESET1(x)                  (((uint32_t)(((uint32_t)(x)) << DFS_PORTRESET_RESET1_SHIFT)) & DFS_PORTRESET_RESET1_MASK)
#define DFS_PORTRESET_RESET2_MASK                (0x4U)
#define DFS_PORTRESET_RESET2_SHIFT               (2U)
#define DFS_PORTRESET_RESET2_WIDTH               (1U)
#define DFS_PORTRESET_RESET2(x)                  (((uint32_t)(((uint32_t)(x)) << DFS_PORTRESET_RESET2_SHIFT)) & DFS_PORTRESET_RESET2_MASK)
#define DFS_PORTRESET_RESET3_MASK                (0x8U)
#define DFS_PORTRESET_RESET3_SHIFT               (3U)
#define DFS_PORTRESET_RESET3_WIDTH               (1U)
#define DFS_PORTRESET_RESET3(x)                  (((uint32_t)(((uint32_t)(x)) << DFS_PORTRESET_RESET3_SHIFT)) & DFS_PORTRESET_RESET3_MASK)
#define DFS_PORTRESET_RESET4_MASK                (0x10U)
#define DFS_PORTRESET_RESET4_SHIFT               (4U)
#define DFS_PORTRESET_RESET4_WIDTH               (1U)
#define DFS_PORTRESET_RESET4(x)                  (((uint32_t)(((uint32_t)(x)) << DFS_PORTRESET_RESET4_SHIFT)) & DFS_PORTRESET_RESET4_MASK)
#define DFS_PORTRESET_RESET5_MASK                (0x20U)
#define DFS_PORTRESET_RESET5_SHIFT               (5U)
#define DFS_PORTRESET_RESET5_WIDTH               (1U)
#define DFS_PORTRESET_RESET5(x)                  (((uint32_t)(((uint32_t)(x)) << DFS_PORTRESET_RESET5_SHIFT)) & DFS_PORTRESET_RESET5_MASK)
/*! @} */

/*! @name CTL - Control */
/*! @{ */
#define DFS_CTL_DFS_RESET_MASK                   (0x2U)
#define DFS_CTL_DFS_RESET_SHIFT                  (1U)
#define DFS_CTL_DFS_RESET_WIDTH                  (1U)
#define DFS_CTL_DFS_RESET(x)                     (((uint32_t)(((uint32_t)(x)) << DFS_CTL_DFS_RESET_SHIFT)) & DFS_CTL_DFS_RESET_MASK)
/*! @} */

/*! @name DVPORT - Divider for Port 0..Divider for Port 5 */
/*! @{ */
#define DFS_DVPORT_MFN_MASK                      (0x3FU)
#define DFS_DVPORT_MFN_SHIFT                     (0U)
#define DFS_DVPORT_MFN_WIDTH                     (6U)
#define DFS_DVPORT_MFN(x)                        (((uint32_t)(((uint32_t)(x)) << DFS_DVPORT_MFN_SHIFT)) & DFS_DVPORT_MFN_MASK)
#define DFS_DVPORT_MFI_MASK                      (0xFF00U)
#define DFS_DVPORT_MFI_SHIFT                     (8U)
#define DFS_DVPORT_MFI_WIDTH                     (8U)
#define DFS_DVPORT_MFI(x)                        (((uint32_t)(((uint32_t)(x)) << DFS_DVPORT_MFI_SHIFT)) & DFS_DVPORT_MFI_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group DFS_Register_Masks */

/*!
 * @}
 */ /* end of group DFS_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_DFS_H_) */
