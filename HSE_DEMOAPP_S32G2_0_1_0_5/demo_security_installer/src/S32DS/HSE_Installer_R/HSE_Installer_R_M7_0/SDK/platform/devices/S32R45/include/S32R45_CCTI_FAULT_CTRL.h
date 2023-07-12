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
 * @file S32R45_CCTI_fault_ctrl.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_CCTI_fault_ctrl
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
#if !defined(S32R45_CCTI_fault_ctrl_H_)  /* Check if memory map has not been already included */
#define S32R45_CCTI_fault_ctrl_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CCTI_fault_ctrl Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCTI_fault_ctrl_Peripheral_Access_Layer CCTI_fault_ctrl Peripheral Access Layer
 * @{
 */

/** CCTI_fault_ctrl - Size of Registers Arrays */
#define CCTI_fault_ctrl_MF_COUNT                  4u
#define CCTI_fault_ctrl_LF_COUNT                  4u

/** CCTI_fault_ctrl - Register Layout Typedef */
typedef struct {
  __I  uint32_t COREID;                            /**< Core ID, offset: 0x0 */
  __I  uint32_t REVISIONID;                        /**< Revision ID, offset: 0x4 */
  __I  uint32_t MISSION_FAULT[CCTI_fault_ctrl_MF_COUNT]; /**< Mission Fault 0..Mission Fault 3, array offset: 0x8, array step: 0x4 */
  __I  uint32_t LATENT_FAULT[CCTI_fault_ctrl_LF_COUNT]; /**< Latent Fault 0..Latent Fault 3, array offset: 0x18, array step: 0x4 */
  __I  uint32_t FAULTS;                            /**< Faults, offset: 0x28 */
  __IO uint32_t INTEN;                             /**< Interrupt Enable, offset: 0x2C */
  __IO uint32_t INTCLR;                            /**< Interrupt Clear, offset: 0x30 */
  __IO uint32_t BISTCTL;                           /**< BIST Control, offset: 0x34 */
  __I  uint32_t BIST_DONE;                         /**< BIST Done, offset: 0x38 */
  __IO uint32_t BIST_TO1;                          /**< BIST Timeout 1, offset: 0x3C */
  __IO uint32_t BIST_TO2;                          /**< BIST Timeout 2, offset: 0x40 */
} CCTI_fault_ctrl_Type, *CCTI_fault_ctrl_MemMapPtr;

/** Number of instances of the CCTI_fault_ctrl module. */
#define CCTI_fault_ctrl_INSTANCE_COUNT           (1u)

/* CCTI_fault_ctrl - Peripheral instance base addresses */
/** Peripheral CCTI_FAULT_CTRL base address */
#define CCTI_FAULT_CTRL_BASE                     (0x50500000u)
/** Peripheral CCTI_FAULT_CTRL base pointer */
#define CCTI_FAULT_CTRL                          ((CCTI_fault_ctrl_Type *)CCTI_FAULT_CTRL_BASE)
/** Array initializer of CCTI_fault_ctrl peripheral base addresses */
#define CCTI_fault_ctrl_BASE_ADDRS               { CCTI_FAULT_CTRL_BASE }
/** Array initializer of CCTI_fault_ctrl peripheral base pointers */
#define CCTI_fault_ctrl_BASE_PTRS                { CCTI_FAULT_CTRL }

/* ----------------------------------------------------------------------------
   -- CCTI_fault_ctrl Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCTI_fault_ctrl_Register_Masks CCTI_fault_ctrl Register Masks
 * @{
 */

/*! @name COREID - Core ID */
/*! @{ */
#define CCTI_fault_ctrl_COREID_CORETYPEID_MASK   (0xFFU)
#define CCTI_fault_ctrl_COREID_CORETYPEID_SHIFT  (0U)
#define CCTI_fault_ctrl_COREID_CORETYPEID_WIDTH  (8U)
#define CCTI_fault_ctrl_COREID_CORETYPEID(x)     (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_COREID_CORETYPEID_SHIFT)) & CCTI_fault_ctrl_COREID_CORETYPEID_MASK)
#define CCTI_fault_ctrl_COREID_CORECHECKSUM_MASK (0xFFFFFF00U)
#define CCTI_fault_ctrl_COREID_CORECHECKSUM_SHIFT (8U)
#define CCTI_fault_ctrl_COREID_CORECHECKSUM_WIDTH (24U)
#define CCTI_fault_ctrl_COREID_CORECHECKSUM(x)   (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_COREID_CORECHECKSUM_SHIFT)) & CCTI_fault_ctrl_COREID_CORECHECKSUM_MASK)
/*! @} */

/*! @name REVISIONID - Revision ID */
/*! @{ */
#define CCTI_fault_ctrl_REVISIONID_USERID_MASK   (0xFFU)
#define CCTI_fault_ctrl_REVISIONID_USERID_SHIFT  (0U)
#define CCTI_fault_ctrl_REVISIONID_USERID_WIDTH  (8U)
#define CCTI_fault_ctrl_REVISIONID_USERID(x)     (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_REVISIONID_USERID_SHIFT)) & CCTI_fault_ctrl_REVISIONID_USERID_MASK)
#define CCTI_fault_ctrl_REVISIONID_NOCID_MASK    (0xFFFFFF00U)
#define CCTI_fault_ctrl_REVISIONID_NOCID_SHIFT   (8U)
#define CCTI_fault_ctrl_REVISIONID_NOCID_WIDTH   (24U)
#define CCTI_fault_ctrl_REVISIONID_NOCID(x)      (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_REVISIONID_NOCID_SHIFT)) & CCTI_fault_ctrl_REVISIONID_NOCID_MASK)
/*! @} */

/*! @name MISSION_FAULT - Mission Fault 0..Mission Fault 3 */
/*! @{ */
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT0_MASK (0xFFFFFFFFU)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT0_SHIFT (0U)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT0_WIDTH (32U)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT0(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT0_SHIFT)) & CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT0_MASK)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT1_MASK (0xFFFFFFFFU)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT1_SHIFT (0U)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT1_WIDTH (32U)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT1(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT1_SHIFT)) & CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT1_MASK)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT2_MASK (0xFFFFFFFFU)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT2_SHIFT (0U)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT2_WIDTH (32U)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT2(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT2_SHIFT)) & CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT2_MASK)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT3_MASK (0xFFFFFFFFU)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT3_SHIFT (0U)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT3_WIDTH (32U)
#define CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT3(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT3_SHIFT)) & CCTI_fault_ctrl_MISSION_FAULT_MISSIONFAULT3_MASK)
/*! @} */

/*! @name LATENT_FAULT - Latent Fault 0..Latent Fault 3 */
/*! @{ */
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT0_MASK (0xFFFFFFFFU)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT0_SHIFT (0U)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT0_WIDTH (32U)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT0(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT0_SHIFT)) & CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT0_MASK)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT1_MASK (0xFFFFFFFFU)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT1_SHIFT (0U)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT1_WIDTH (32U)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT1(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT1_SHIFT)) & CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT1_MASK)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT2_MASK (0xFFFFFFFFU)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT2_SHIFT (0U)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT2_WIDTH (32U)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT2(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT2_SHIFT)) & CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT2_MASK)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT3_MASK (0xFFFFFFFFU)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT3_SHIFT (0U)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT3_WIDTH (32U)
#define CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT3(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT3_SHIFT)) & CCTI_fault_ctrl_LATENT_FAULT_LATENTFAULT3_MASK)
/*! @} */

/*! @name FAULTS - Faults */
/*! @{ */
#define CCTI_fault_ctrl_FAULTS_LATENTFAULT_MASK  (0x1U)
#define CCTI_fault_ctrl_FAULTS_LATENTFAULT_SHIFT (0U)
#define CCTI_fault_ctrl_FAULTS_LATENTFAULT_WIDTH (1U)
#define CCTI_fault_ctrl_FAULTS_LATENTFAULT(x)    (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_FAULTS_LATENTFAULT_SHIFT)) & CCTI_fault_ctrl_FAULTS_LATENTFAULT_MASK)
#define CCTI_fault_ctrl_FAULTS_MISSIONFAULT_MASK (0x2U)
#define CCTI_fault_ctrl_FAULTS_MISSIONFAULT_SHIFT (1U)
#define CCTI_fault_ctrl_FAULTS_MISSIONFAULT_WIDTH (1U)
#define CCTI_fault_ctrl_FAULTS_MISSIONFAULT(x)   (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_FAULTS_MISSIONFAULT_SHIFT)) & CCTI_fault_ctrl_FAULTS_MISSIONFAULT_MASK)
/*! @} */

/*! @name INTEN - Interrupt Enable */
/*! @{ */
#define CCTI_fault_ctrl_INTEN_BISTDONEEN_MASK    (0x1U)
#define CCTI_fault_ctrl_INTEN_BISTDONEEN_SHIFT   (0U)
#define CCTI_fault_ctrl_INTEN_BISTDONEEN_WIDTH   (1U)
#define CCTI_fault_ctrl_INTEN_BISTDONEEN(x)      (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_INTEN_BISTDONEEN_SHIFT)) & CCTI_fault_ctrl_INTEN_BISTDONEEN_MASK)
#define CCTI_fault_ctrl_INTEN_MISSIONFAULTEN_MASK (0x2U)
#define CCTI_fault_ctrl_INTEN_MISSIONFAULTEN_SHIFT (1U)
#define CCTI_fault_ctrl_INTEN_MISSIONFAULTEN_WIDTH (1U)
#define CCTI_fault_ctrl_INTEN_MISSIONFAULTEN(x)  (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_INTEN_MISSIONFAULTEN_SHIFT)) & CCTI_fault_ctrl_INTEN_MISSIONFAULTEN_MASK)
/*! @} */

/*! @name INTCLR - Interrupt Clear */
/*! @{ */
#define CCTI_fault_ctrl_INTCLR_LATENTFAULTCLR_MASK (0x1U)
#define CCTI_fault_ctrl_INTCLR_LATENTFAULTCLR_SHIFT (0U)
#define CCTI_fault_ctrl_INTCLR_LATENTFAULTCLR_WIDTH (1U)
#define CCTI_fault_ctrl_INTCLR_LATENTFAULTCLR(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_INTCLR_LATENTFAULTCLR_SHIFT)) & CCTI_fault_ctrl_INTCLR_LATENTFAULTCLR_MASK)
#define CCTI_fault_ctrl_INTCLR_MISSIONFAULTCLR_MASK (0x2U)
#define CCTI_fault_ctrl_INTCLR_MISSIONFAULTCLR_SHIFT (1U)
#define CCTI_fault_ctrl_INTCLR_MISSIONFAULTCLR_WIDTH (1U)
#define CCTI_fault_ctrl_INTCLR_MISSIONFAULTCLR(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_INTCLR_MISSIONFAULTCLR_SHIFT)) & CCTI_fault_ctrl_INTCLR_MISSIONFAULTCLR_MASK)
/*! @} */

/*! @name BISTCTL - BIST Control */
/*! @{ */
#define CCTI_fault_ctrl_BISTCTL_BISTSTART_MASK   (0x1U)
#define CCTI_fault_ctrl_BISTCTL_BISTSTART_SHIFT  (0U)
#define CCTI_fault_ctrl_BISTCTL_BISTSTART_WIDTH  (1U)
#define CCTI_fault_ctrl_BISTCTL_BISTSTART(x)     (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_BISTCTL_BISTSTART_SHIFT)) & CCTI_fault_ctrl_BISTCTL_BISTSTART_MASK)
#define CCTI_fault_ctrl_BISTCTL_BISTDONECLR_MASK (0x2U)
#define CCTI_fault_ctrl_BISTCTL_BISTDONECLR_SHIFT (1U)
#define CCTI_fault_ctrl_BISTCTL_BISTDONECLR_WIDTH (1U)
#define CCTI_fault_ctrl_BISTCTL_BISTDONECLR(x)   (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_BISTCTL_BISTDONECLR_SHIFT)) & CCTI_fault_ctrl_BISTCTL_BISTDONECLR_MASK)
/*! @} */

/*! @name BIST_DONE - BIST Done */
/*! @{ */
#define CCTI_fault_ctrl_BIST_DONE_BISTDONE_MASK  (0x1U)
#define CCTI_fault_ctrl_BIST_DONE_BISTDONE_SHIFT (0U)
#define CCTI_fault_ctrl_BIST_DONE_BISTDONE_WIDTH (1U)
#define CCTI_fault_ctrl_BIST_DONE_BISTDONE(x)    (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_BIST_DONE_BISTDONE_SHIFT)) & CCTI_fault_ctrl_BIST_DONE_BISTDONE_MASK)
#define CCTI_fault_ctrl_BIST_DONE_MISSIONMODE_MASK (0x2U)
#define CCTI_fault_ctrl_BIST_DONE_MISSIONMODE_SHIFT (1U)
#define CCTI_fault_ctrl_BIST_DONE_MISSIONMODE_WIDTH (1U)
#define CCTI_fault_ctrl_BIST_DONE_MISSIONMODE(x) (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_BIST_DONE_MISSIONMODE_SHIFT)) & CCTI_fault_ctrl_BIST_DONE_MISSIONMODE_MASK)
/*! @} */

/*! @name BIST_TO1 - BIST Timeout 1 */
/*! @{ */
#define CCTI_fault_ctrl_BIST_TO1_BISTTO1_MASK    (0xFFFFU)
#define CCTI_fault_ctrl_BIST_TO1_BISTTO1_SHIFT   (0U)
#define CCTI_fault_ctrl_BIST_TO1_BISTTO1_WIDTH   (16U)
#define CCTI_fault_ctrl_BIST_TO1_BISTTO1(x)      (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_BIST_TO1_BISTTO1_SHIFT)) & CCTI_fault_ctrl_BIST_TO1_BISTTO1_MASK)
/*! @} */

/*! @name BIST_TO2 - BIST Timeout 2 */
/*! @{ */
#define CCTI_fault_ctrl_BIST_TO2_BISTTO2_MASK    (0xFFU)
#define CCTI_fault_ctrl_BIST_TO2_BISTTO2_SHIFT   (0U)
#define CCTI_fault_ctrl_BIST_TO2_BISTTO2_WIDTH   (8U)
#define CCTI_fault_ctrl_BIST_TO2_BISTTO2(x)      (((uint32_t)(((uint32_t)(x)) << CCTI_fault_ctrl_BIST_TO2_BISTTO2_SHIFT)) & CCTI_fault_ctrl_BIST_TO2_BISTTO2_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CCTI_fault_ctrl_Register_Masks */

/*!
 * @}
 */ /* end of group CCTI_fault_ctrl_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_CCTI_fault_ctrl_H_) */
