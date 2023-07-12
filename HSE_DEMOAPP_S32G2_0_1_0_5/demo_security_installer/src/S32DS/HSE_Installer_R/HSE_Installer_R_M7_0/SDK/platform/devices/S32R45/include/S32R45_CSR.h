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
 * @file S32R45_CSR.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_CSR
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
#if !defined(S32R45_CSR_H_)  /* Check if memory map has not been already included */
#define S32R45_CSR_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- CSR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CSR_Peripheral_Access_Layer CSR Peripheral Access Layer
 * @{
 */

/** CSR - Size of Registers Arrays */
#define CSR_CSSFIDR_COUNT                         32u

/** CSR - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[64];
  __IO uint32_t CSADSE0;                           /**< Coherent Subsystem ACE DVM Snoop Enable, offset: 0x40 */
  uint8_t RESERVED_1[12];
  __I  uint32_t CSADSA;                            /**< Coherent Subsystem ACE DVM Snoop Activity, offset: 0x50 */
  uint8_t RESERVED_2[172];
  __I  uint32_t CSCEIS0;                           /**< Coherent Subsystem Correctable Error Interrupt Status, offset: 0x100 */
  uint8_t RESERVED_3[8];
  __I  uint32_t CSCEIS3;                           /**< Coherent Subsystem Correctable Error Interrupt Status, offset: 0x10C */
  __I  uint32_t CSCEIS4;                           /**< Coherent Subsystem Correctable Error Interrupt Status, offset: 0x110 */
  uint8_t RESERVED_4[4];
  __I  uint32_t CSCEIS6;                           /**< Coherent Subsystem Correctable Error Interrupt Status, offset: 0x118 */
  uint8_t RESERVED_5[36];
  __I  uint32_t CSUEIS0;                           /**< Coherent Subsystem Uncorrectable Error Interrupt Status, offset: 0x140 */
  uint8_t RESERVED_6[8];
  __I  uint32_t CSUEIS3;                           /**< Coherent Subsystem Uncorrectable Error Interrupt Status, offset: 0x14C */
  __I  uint32_t CSUEIS4;                           /**< Coherent Subsystem Uncorrectable Error Interrupt Status, offset: 0x150 */
  uint8_t RESERVED_7[4];
  __I  uint32_t CSUEIS6;                           /**< Coherent Subsystem Uncorrectable Error Interrupt Status, offset: 0x158 */
  uint8_t RESERVED_8[3492];
  __I  uint32_t CSSFIDR[CSR_CSSFIDR_COUNT];        /**< Coherent Subsystem Snoop Filter Identification, array offset: 0xF00, array step: 0x4 */
  uint8_t RESERVED_9[120];
  __I  uint32_t CSUID;                             /**< Coherent Subsystem Unit Identification, offset: 0xFF8 */
  __I  uint32_t CSID;                              /**< Coherent Subsystem Identification, offset: 0xFFC */
} CSR_Type, *CSR_MemMapPtr;

/** Number of instances of the CSR module. */
#define CSR_INSTANCE_COUNT                       (1u)

/* CSR - Peripheral instance base addresses */
/** Peripheral CSR base address */
#define CSR_BASE                                 (0x504FF000u)
/** Peripheral CSR base pointer */
#define CSR_IP                                   ((CSR_Type *)CSR_BASE)
/** Array initializer of CSR peripheral base addresses */
#define CSR_BASE_ADDRS                           { CSR_BASE }
/** Array initializer of CSR peripheral base pointers */
#define CSR_BASE_PTRS                            { CSR_IP }

/* ----------------------------------------------------------------------------
   -- CSR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CSR_Register_Masks CSR Register Masks
 * @{
 */

/*! @name CSADSE0 - Coherent Subsystem ACE DVM Snoop Enable */
/*! @{ */
#define CSR_CSADSE0_DVMSNPEN0_MASK               (0x1U)
#define CSR_CSADSE0_DVMSNPEN0_SHIFT              (0U)
#define CSR_CSADSE0_DVMSNPEN0_WIDTH              (1U)
#define CSR_CSADSE0_DVMSNPEN0(x)                 (((uint32_t)(((uint32_t)(x)) << CSR_CSADSE0_DVMSNPEN0_SHIFT)) & CSR_CSADSE0_DVMSNPEN0_MASK)
#define CSR_CSADSE0_DVMSNPEN1_MASK               (0x2U)
#define CSR_CSADSE0_DVMSNPEN1_SHIFT              (1U)
#define CSR_CSADSE0_DVMSNPEN1_WIDTH              (1U)
#define CSR_CSADSE0_DVMSNPEN1(x)                 (((uint32_t)(((uint32_t)(x)) << CSR_CSADSE0_DVMSNPEN1_SHIFT)) & CSR_CSADSE0_DVMSNPEN1_MASK)
/*! @} */

/*! @name CSADSA - Coherent Subsystem ACE DVM Snoop Activity */
/*! @{ */
#define CSR_CSADSA_DVMSNPACTV0_MASK              (0x1U)
#define CSR_CSADSA_DVMSNPACTV0_SHIFT             (0U)
#define CSR_CSADSA_DVMSNPACTV0_WIDTH             (1U)
#define CSR_CSADSA_DVMSNPACTV0(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSADSA_DVMSNPACTV0_SHIFT)) & CSR_CSADSA_DVMSNPACTV0_MASK)
#define CSR_CSADSA_DVMSNPACTV1_MASK              (0x2U)
#define CSR_CSADSA_DVMSNPACTV1_SHIFT             (1U)
#define CSR_CSADSA_DVMSNPACTV1_WIDTH             (1U)
#define CSR_CSADSA_DVMSNPACTV1(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSADSA_DVMSNPACTV1_SHIFT)) & CSR_CSADSA_DVMSNPACTV1_MASK)
/*! @} */

/*! @name CSCEIS0 - Coherent Subsystem Correctable Error Interrupt Status */
/*! @{ */
#define CSR_CSCEIS0_ERRINTVLD0_MASK              (0x1U)
#define CSR_CSCEIS0_ERRINTVLD0_SHIFT             (0U)
#define CSR_CSCEIS0_ERRINTVLD0_WIDTH             (1U)
#define CSR_CSCEIS0_ERRINTVLD0(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSCEIS0_ERRINTVLD0_SHIFT)) & CSR_CSCEIS0_ERRINTVLD0_MASK)
#define CSR_CSCEIS0_ERRINTVLD1_MASK              (0x2U)
#define CSR_CSCEIS0_ERRINTVLD1_SHIFT             (1U)
#define CSR_CSCEIS0_ERRINTVLD1_WIDTH             (1U)
#define CSR_CSCEIS0_ERRINTVLD1(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSCEIS0_ERRINTVLD1_SHIFT)) & CSR_CSCEIS0_ERRINTVLD1_MASK)
/*! @} */

/*! @name CSCEIS3 - Coherent Subsystem Correctable Error Interrupt Status */
/*! @{ */
#define CSR_CSCEIS3_ERRINTVLD0_MASK              (0x1U)
#define CSR_CSCEIS3_ERRINTVLD0_SHIFT             (0U)
#define CSR_CSCEIS3_ERRINTVLD0_WIDTH             (1U)
#define CSR_CSCEIS3_ERRINTVLD0(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSCEIS3_ERRINTVLD0_SHIFT)) & CSR_CSCEIS3_ERRINTVLD0_MASK)
#define CSR_CSCEIS3_ERRINTVLD1_MASK              (0x2U)
#define CSR_CSCEIS3_ERRINTVLD1_SHIFT             (1U)
#define CSR_CSCEIS3_ERRINTVLD1_WIDTH             (1U)
#define CSR_CSCEIS3_ERRINTVLD1(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSCEIS3_ERRINTVLD1_SHIFT)) & CSR_CSCEIS3_ERRINTVLD1_MASK)
/*! @} */

/*! @name CSCEIS4 - Coherent Subsystem Correctable Error Interrupt Status */
/*! @{ */
#define CSR_CSCEIS4_ERRINTVLD0_MASK              (0x1U)
#define CSR_CSCEIS4_ERRINTVLD0_SHIFT             (0U)
#define CSR_CSCEIS4_ERRINTVLD0_WIDTH             (1U)
#define CSR_CSCEIS4_ERRINTVLD0(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSCEIS4_ERRINTVLD0_SHIFT)) & CSR_CSCEIS4_ERRINTVLD0_MASK)
/*! @} */

/*! @name CSCEIS6 - Coherent Subsystem Correctable Error Interrupt Status */
/*! @{ */
#define CSR_CSCEIS6_ERRINTVLD0_MASK              (0x1U)
#define CSR_CSCEIS6_ERRINTVLD0_SHIFT             (0U)
#define CSR_CSCEIS6_ERRINTVLD0_WIDTH             (1U)
#define CSR_CSCEIS6_ERRINTVLD0(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSCEIS6_ERRINTVLD0_SHIFT)) & CSR_CSCEIS6_ERRINTVLD0_MASK)
/*! @} */

/*! @name CSUEIS0 - Coherent Subsystem Uncorrectable Error Interrupt Status */
/*! @{ */
#define CSR_CSUEIS0_ERRINTVLD0_MASK              (0x1U)
#define CSR_CSUEIS0_ERRINTVLD0_SHIFT             (0U)
#define CSR_CSUEIS0_ERRINTVLD0_WIDTH             (1U)
#define CSR_CSUEIS0_ERRINTVLD0(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSUEIS0_ERRINTVLD0_SHIFT)) & CSR_CSUEIS0_ERRINTVLD0_MASK)
#define CSR_CSUEIS0_ERRINTVLD1_MASK              (0x2U)
#define CSR_CSUEIS0_ERRINTVLD1_SHIFT             (1U)
#define CSR_CSUEIS0_ERRINTVLD1_WIDTH             (1U)
#define CSR_CSUEIS0_ERRINTVLD1(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSUEIS0_ERRINTVLD1_SHIFT)) & CSR_CSUEIS0_ERRINTVLD1_MASK)
/*! @} */

/*! @name CSUEIS3 - Coherent Subsystem Uncorrectable Error Interrupt Status */
/*! @{ */
#define CSR_CSUEIS3_ERRINTVLD0_MASK              (0x1U)
#define CSR_CSUEIS3_ERRINTVLD0_SHIFT             (0U)
#define CSR_CSUEIS3_ERRINTVLD0_WIDTH             (1U)
#define CSR_CSUEIS3_ERRINTVLD0(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSUEIS3_ERRINTVLD0_SHIFT)) & CSR_CSUEIS3_ERRINTVLD0_MASK)
#define CSR_CSUEIS3_ERRINTVLD1_MASK              (0x2U)
#define CSR_CSUEIS3_ERRINTVLD1_SHIFT             (1U)
#define CSR_CSUEIS3_ERRINTVLD1_WIDTH             (1U)
#define CSR_CSUEIS3_ERRINTVLD1(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSUEIS3_ERRINTVLD1_SHIFT)) & CSR_CSUEIS3_ERRINTVLD1_MASK)
/*! @} */

/*! @name CSUEIS4 - Coherent Subsystem Uncorrectable Error Interrupt Status */
/*! @{ */
#define CSR_CSUEIS4_ERRINTVLD0_MASK              (0x1U)
#define CSR_CSUEIS4_ERRINTVLD0_SHIFT             (0U)
#define CSR_CSUEIS4_ERRINTVLD0_WIDTH             (1U)
#define CSR_CSUEIS4_ERRINTVLD0(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSUEIS4_ERRINTVLD0_SHIFT)) & CSR_CSUEIS4_ERRINTVLD0_MASK)
/*! @} */

/*! @name CSUEIS6 - Coherent Subsystem Uncorrectable Error Interrupt Status */
/*! @{ */
#define CSR_CSUEIS6_ERRINTVLD0_MASK              (0x1U)
#define CSR_CSUEIS6_ERRINTVLD0_SHIFT             (0U)
#define CSR_CSUEIS6_ERRINTVLD0_WIDTH             (1U)
#define CSR_CSUEIS6_ERRINTVLD0(x)                (((uint32_t)(((uint32_t)(x)) << CSR_CSUEIS6_ERRINTVLD0_SHIFT)) & CSR_CSUEIS6_ERRINTVLD0_MASK)
/*! @} */

/*! @name CSSFIDR - Coherent Subsystem Snoop Filter Identification */
/*! @{ */
#define CSR_CSSFIDR_NUMSETS_MASK                 (0xFFFFFU)
#define CSR_CSSFIDR_NUMSETS_SHIFT                (0U)
#define CSR_CSSFIDR_NUMSETS_WIDTH                (20U)
#define CSR_CSSFIDR_NUMSETS(x)                   (((uint32_t)(((uint32_t)(x)) << CSR_CSSFIDR_NUMSETS_SHIFT)) & CSR_CSSFIDR_NUMSETS_MASK)
#define CSR_CSSFIDR_NUMWAYS_MASK                 (0x3F00000U)
#define CSR_CSSFIDR_NUMWAYS_SHIFT                (20U)
#define CSR_CSSFIDR_NUMWAYS_WIDTH                (6U)
#define CSR_CSSFIDR_NUMWAYS(x)                   (((uint32_t)(((uint32_t)(x)) << CSR_CSSFIDR_NUMWAYS_SHIFT)) & CSR_CSSFIDR_NUMWAYS_MASK)
#define CSR_CSSFIDR_TYPE_MASK                    (0x1C000000U)
#define CSR_CSSFIDR_TYPE_SHIFT                   (26U)
#define CSR_CSSFIDR_TYPE_WIDTH                   (3U)
#define CSR_CSSFIDR_TYPE(x)                      (((uint32_t)(((uint32_t)(x)) << CSR_CSSFIDR_TYPE_SHIFT)) & CSR_CSSFIDR_TYPE_MASK)
/*! @} */

/*! @name CSUID - Coherent Subsystem Unit Identification */
/*! @{ */
#define CSR_CSUID_NUMCAIUS_MASK                  (0x7FU)
#define CSR_CSUID_NUMCAIUS_SHIFT                 (0U)
#define CSR_CSUID_NUMCAIUS_WIDTH                 (7U)
#define CSR_CSUID_NUMCAIUS(x)                    (((uint32_t)(((uint32_t)(x)) << CSR_CSUID_NUMCAIUS_SHIFT)) & CSR_CSUID_NUMCAIUS_MASK)
#define CSR_CSUID_NUMNCBUS_MASK                  (0x3F00U)
#define CSR_CSUID_NUMNCBUS_SHIFT                 (8U)
#define CSR_CSUID_NUMNCBUS_WIDTH                 (6U)
#define CSR_CSUID_NUMNCBUS(x)                    (((uint32_t)(((uint32_t)(x)) << CSR_CSUID_NUMNCBUS_SHIFT)) & CSR_CSUID_NUMNCBUS_MASK)
#define CSR_CSUID_NUMDIRUS_MASK                  (0x3F0000U)
#define CSR_CSUID_NUMDIRUS_SHIFT                 (16U)
#define CSR_CSUID_NUMDIRUS_WIDTH                 (6U)
#define CSR_CSUID_NUMDIRUS(x)                    (((uint32_t)(((uint32_t)(x)) << CSR_CSUID_NUMDIRUS_SHIFT)) & CSR_CSUID_NUMDIRUS_MASK)
#define CSR_CSUID_NUMCMIUS_MASK                  (0x3F000000U)
#define CSR_CSUID_NUMCMIUS_SHIFT                 (24U)
#define CSR_CSUID_NUMCMIUS_WIDTH                 (6U)
#define CSR_CSUID_NUMCMIUS(x)                    (((uint32_t)(((uint32_t)(x)) << CSR_CSUID_NUMCMIUS_SHIFT)) & CSR_CSUID_NUMCMIUS_MASK)
/*! @} */

/*! @name CSID - Coherent Subsystem Identification */
/*! @{ */
#define CSR_CSID_RELVER_MASK                     (0xFFU)
#define CSR_CSID_RELVER_SHIFT                    (0U)
#define CSR_CSID_RELVER_WIDTH                    (8U)
#define CSR_CSID_RELVER(x)                       (((uint32_t)(((uint32_t)(x)) << CSR_CSID_RELVER_SHIFT)) & CSR_CSID_RELVER_MASK)
#define CSR_CSID_DIRCLOFFSET_MASK                (0x700U)
#define CSR_CSID_DIRCLOFFSET_SHIFT               (8U)
#define CSR_CSID_DIRCLOFFSET_WIDTH               (3U)
#define CSR_CSID_DIRCLOFFSET(x)                  (((uint32_t)(((uint32_t)(x)) << CSR_CSID_DIRCLOFFSET_SHIFT)) & CSR_CSID_DIRCLOFFSET_MASK)
#define CSR_CSID_NUMSFS_MASK                     (0x7C0000U)
#define CSR_CSID_NUMSFS_SHIFT                    (18U)
#define CSR_CSID_NUMSFS_WIDTH                    (5U)
#define CSR_CSID_NUMSFS(x)                       (((uint32_t)(((uint32_t)(x)) << CSR_CSID_NUMSFS_SHIFT)) & CSR_CSID_NUMSFS_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group CSR_Register_Masks */

/*!
 * @}
 */ /* end of group CSR_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_CSR_H_) */
