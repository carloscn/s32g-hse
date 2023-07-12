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
 * @file S32R45_DIRU.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45_DIRU
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
#if !defined(S32R45_DIRU_H_)  /* Check if memory map has not been already included */
#define S32R45_DIRU_H_

#include "S32R45_COMMON.h"

/* ----------------------------------------------------------------------------
   -- DIRU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DIRU_Peripheral_Access_Layer DIRU Peripheral Access Layer
 * @{
 */

/** DIRU - Register Layout Typedef */
typedef struct {
  uint8_t RESERVED_0[4];
  __I  uint32_t DIRUTA;                            /**< DIRU Transaction Activity, offset: 0x4 */
  uint8_t RESERVED_1[8];
  __IO uint32_t DIRUSFE;                           /**< DIRU Snoop Filtering Enable, offset: 0x10 */
  uint8_t RESERVED_2[44];
  __IO uint32_t DIRUCASE0;                         /**< DIRU Caching Agent Snoop Enable, offset: 0x40 */
  uint8_t RESERVED_3[12];
  __I  uint32_t DIRUCASA0;                         /**< DIRU Caching Agent Snoop Activity, offset: 0x50 */
  uint8_t RESERVED_4[44];
  __IO uint32_t DIRUSFMC;                          /**< DIRU Snoop Filter Maintenance Control, offset: 0x80 */
  __I  uint32_t DIRUSFMA;                          /**< DIRU Snoop Filter Maintenance Activity, offset: 0x84 */
  __IO uint32_t DIRUSFMLR0;                        /**< DIRU Snoop Filter Maintenance Location Register 0, offset: 0x88 */
  __IO uint32_t DIRUSFMLR1;                        /**< DIRU Snoop Filter Maintenance Location Register 1, offset: 0x8C */
  uint8_t RESERVED_5[112];
  __IO uint32_t DIRUCEC;                           /**< DIRU Correctable Error Control, offset: 0x100 */
  __IO uint32_t DIRUCES;                           /**< DIRU Correctable Error Status, offset: 0x104 */
  __IO uint32_t DIRUCELR0;                         /**< DIRU Correctable Error Location Register 0, offset: 0x108 */
  __IO uint32_t DIRUCELR1;                         /**< DIRU Correctable Error Location Register 1, offset: 0x10C */
  uint8_t RESERVED_6[20];
  __IO uint32_t DIRUCESA;                          /**< DIRU Correctable Error Status Alias, offset: 0x124 */
  uint8_t RESERVED_7[24];
  __IO uint32_t DIRUUEC;                           /**< DIRU Uncorrectable Error Control, offset: 0x140 */
  __IO uint32_t DIRUUES;                           /**< DIRU Uncorrectable Error Status, offset: 0x144 */
  __IO uint32_t DIRUUELR0;                         /**< DIRU Uncorrectable Error Location Register 0, offset: 0x148 */
  __IO uint32_t DIRUUELR1;                         /**< DIRU Uncorrectable Error Location Register 1, offset: 0x14C */
  uint8_t RESERVED_8[20];
  __IO uint32_t DIRUUESA;                          /**< DIRU Uncorrectable Error Status Alias, offset: 0x164 */
  uint8_t RESERVED_9[3732];
  __I  uint32_t DIRUID;                            /**< DIRU Identification Register, offset: 0xFFC */
} DIRU_Type, *DIRU_MemMapPtr;

/** Number of instances of the DIRU module. */
#define DIRU_INSTANCE_COUNT                      (1u)

/* DIRU - Peripheral instance base addresses */
/** Peripheral DIRU base address */
#define DIRU_BASE                                (0x50480000u)
/** Peripheral DIRU base pointer */
#define DIRU                                     ((DIRU_Type *)DIRU_BASE)
/** Array initializer of DIRU peripheral base addresses */
#define DIRU_BASE_ADDRS                          { DIRU_BASE }
/** Array initializer of DIRU peripheral base pointers */
#define DIRU_BASE_PTRS                           { DIRU }

/* ----------------------------------------------------------------------------
   -- DIRU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DIRU_Register_Masks DIRU Register Masks
 * @{
 */

/*! @name DIRUTA - DIRU Transaction Activity */
/*! @{ */
#define DIRU_DIRUTA_TRANSACTV_MASK               (0x1U)
#define DIRU_DIRUTA_TRANSACTV_SHIFT              (0U)
#define DIRU_DIRUTA_TRANSACTV_WIDTH              (1U)
#define DIRU_DIRUTA_TRANSACTV(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUTA_TRANSACTV_SHIFT)) & DIRU_DIRUTA_TRANSACTV_MASK)
/*! @} */

/*! @name DIRUSFE - DIRU Snoop Filtering Enable */
/*! @{ */
#define DIRU_DIRUSFE_SFEN0_MASK                  (0x1U)
#define DIRU_DIRUSFE_SFEN0_SHIFT                 (0U)
#define DIRU_DIRUSFE_SFEN0_WIDTH                 (1U)
#define DIRU_DIRUSFE_SFEN0(x)                    (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUSFE_SFEN0_SHIFT)) & DIRU_DIRUSFE_SFEN0_MASK)
/*! @} */

/*! @name DIRUCASE0 - DIRU Caching Agent Snoop Enable */
/*! @{ */
#define DIRU_DIRUCASE0_CASNPEN0_MASK             (0x1U)
#define DIRU_DIRUCASE0_CASNPEN0_SHIFT            (0U)
#define DIRU_DIRUCASE0_CASNPEN0_WIDTH            (1U)
#define DIRU_DIRUCASE0_CASNPEN0(x)               (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCASE0_CASNPEN0_SHIFT)) & DIRU_DIRUCASE0_CASNPEN0_MASK)
#define DIRU_DIRUCASE0_CASNPEN1_MASK             (0x2U)
#define DIRU_DIRUCASE0_CASNPEN1_SHIFT            (1U)
#define DIRU_DIRUCASE0_CASNPEN1_WIDTH            (1U)
#define DIRU_DIRUCASE0_CASNPEN1(x)               (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCASE0_CASNPEN1_SHIFT)) & DIRU_DIRUCASE0_CASNPEN1_MASK)
/*! @} */

/*! @name DIRUCASA0 - DIRU Caching Agent Snoop Activity */
/*! @{ */
#define DIRU_DIRUCASA0_CASNPACTV0_MASK           (0x1U)
#define DIRU_DIRUCASA0_CASNPACTV0_SHIFT          (0U)
#define DIRU_DIRUCASA0_CASNPACTV0_WIDTH          (1U)
#define DIRU_DIRUCASA0_CASNPACTV0(x)             (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCASA0_CASNPACTV0_SHIFT)) & DIRU_DIRUCASA0_CASNPACTV0_MASK)
#define DIRU_DIRUCASA0_CASNPACTV1_MASK           (0x2U)
#define DIRU_DIRUCASA0_CASNPACTV1_SHIFT          (1U)
#define DIRU_DIRUCASA0_CASNPACTV1_WIDTH          (1U)
#define DIRU_DIRUCASA0_CASNPACTV1(x)             (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCASA0_CASNPACTV1_SHIFT)) & DIRU_DIRUCASA0_CASNPACTV1_MASK)
/*! @} */

/*! @name DIRUSFMC - DIRU Snoop Filter Maintenance Control */
/*! @{ */
#define DIRU_DIRUSFMC_SFMNTOP_MASK               (0xFU)
#define DIRU_DIRUSFMC_SFMNTOP_SHIFT              (0U)
#define DIRU_DIRUSFMC_SFMNTOP_WIDTH              (4U)
#define DIRU_DIRUSFMC_SFMNTOP(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUSFMC_SFMNTOP_SHIFT)) & DIRU_DIRUSFMC_SFMNTOP_MASK)
#define DIRU_DIRUSFMC_SFID_MASK                  (0x1F0000U)
#define DIRU_DIRUSFMC_SFID_SHIFT                 (16U)
#define DIRU_DIRUSFMC_SFID_WIDTH                 (5U)
#define DIRU_DIRUSFMC_SFID(x)                    (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUSFMC_SFID_SHIFT)) & DIRU_DIRUSFMC_SFID_MASK)
#define DIRU_DIRUSFMC_SFSECATTR_MASK             (0x200000U)
#define DIRU_DIRUSFMC_SFSECATTR_SHIFT            (21U)
#define DIRU_DIRUSFMC_SFSECATTR_WIDTH            (1U)
#define DIRU_DIRUSFMC_SFSECATTR(x)               (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUSFMC_SFSECATTR_SHIFT)) & DIRU_DIRUSFMC_SFSECATTR_MASK)
/*! @} */

/*! @name DIRUSFMA - DIRU Snoop Filter Maintenance Activity */
/*! @{ */
#define DIRU_DIRUSFMA_MNTOPACTV_MASK             (0x1U)
#define DIRU_DIRUSFMA_MNTOPACTV_SHIFT            (0U)
#define DIRU_DIRUSFMA_MNTOPACTV_WIDTH            (1U)
#define DIRU_DIRUSFMA_MNTOPACTV(x)               (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUSFMA_MNTOPACTV_SHIFT)) & DIRU_DIRUSFMA_MNTOPACTV_MASK)
/*! @} */

/*! @name DIRUSFMLR0 - DIRU Snoop Filter Maintenance Location Register 0 */
/*! @{ */
#define DIRU_DIRUSFMLR0_MNTSET_MASK              (0xFFFFFU)
#define DIRU_DIRUSFMLR0_MNTSET_SHIFT             (0U)
#define DIRU_DIRUSFMLR0_MNTSET_WIDTH             (20U)
#define DIRU_DIRUSFMLR0_MNTSET(x)                (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUSFMLR0_MNTSET_SHIFT)) & DIRU_DIRUSFMLR0_MNTSET_MASK)
#define DIRU_DIRUSFMLR0_MNTWAY_MASK              (0x3F00000U)
#define DIRU_DIRUSFMLR0_MNTWAY_SHIFT             (20U)
#define DIRU_DIRUSFMLR0_MNTWAY_WIDTH             (6U)
#define DIRU_DIRUSFMLR0_MNTWAY(x)                (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUSFMLR0_MNTWAY_SHIFT)) & DIRU_DIRUSFMLR0_MNTWAY_MASK)
#define DIRU_DIRUSFMLR0_MNTWORD_MASK             (0xFC000000U)
#define DIRU_DIRUSFMLR0_MNTWORD_SHIFT            (26U)
#define DIRU_DIRUSFMLR0_MNTWORD_WIDTH            (6U)
#define DIRU_DIRUSFMLR0_MNTWORD(x)               (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUSFMLR0_MNTWORD_SHIFT)) & DIRU_DIRUSFMLR0_MNTWORD_MASK)
/*! @} */

/*! @name DIRUSFMLR1 - DIRU Snoop Filter Maintenance Location Register 1 */
/*! @{ */
#define DIRU_DIRUSFMLR1_MNTADDR_MASK             (0xFFFU)
#define DIRU_DIRUSFMLR1_MNTADDR_SHIFT            (0U)
#define DIRU_DIRUSFMLR1_MNTADDR_WIDTH            (12U)
#define DIRU_DIRUSFMLR1_MNTADDR(x)               (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUSFMLR1_MNTADDR_SHIFT)) & DIRU_DIRUSFMLR1_MNTADDR_MASK)
/*! @} */

/*! @name DIRUCEC - DIRU Correctable Error Control */
/*! @{ */
#define DIRU_DIRUCEC_ERRDETEN_MASK               (0x1U)
#define DIRU_DIRUCEC_ERRDETEN_SHIFT              (0U)
#define DIRU_DIRUCEC_ERRDETEN_WIDTH              (1U)
#define DIRU_DIRUCEC_ERRDETEN(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCEC_ERRDETEN_SHIFT)) & DIRU_DIRUCEC_ERRDETEN_MASK)
#define DIRU_DIRUCEC_ERRINTEN_MASK               (0x2U)
#define DIRU_DIRUCEC_ERRINTEN_SHIFT              (1U)
#define DIRU_DIRUCEC_ERRINTEN_WIDTH              (1U)
#define DIRU_DIRUCEC_ERRINTEN(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCEC_ERRINTEN_SHIFT)) & DIRU_DIRUCEC_ERRINTEN_MASK)
#define DIRU_DIRUCEC_ERRTHRESHOLD_MASK           (0xFF0U)
#define DIRU_DIRUCEC_ERRTHRESHOLD_SHIFT          (4U)
#define DIRU_DIRUCEC_ERRTHRESHOLD_WIDTH          (8U)
#define DIRU_DIRUCEC_ERRTHRESHOLD(x)             (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCEC_ERRTHRESHOLD_SHIFT)) & DIRU_DIRUCEC_ERRTHRESHOLD_MASK)
/*! @} */

/*! @name DIRUCES - DIRU Correctable Error Status */
/*! @{ */
#define DIRU_DIRUCES_ERRVLD_MASK                 (0x1U)
#define DIRU_DIRUCES_ERRVLD_SHIFT                (0U)
#define DIRU_DIRUCES_ERRVLD_WIDTH                (1U)
#define DIRU_DIRUCES_ERRVLD(x)                   (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCES_ERRVLD_SHIFT)) & DIRU_DIRUCES_ERRVLD_MASK)
#define DIRU_DIRUCES_ERROVF_MASK                 (0x2U)
#define DIRU_DIRUCES_ERROVF_SHIFT                (1U)
#define DIRU_DIRUCES_ERROVF_WIDTH                (1U)
#define DIRU_DIRUCES_ERROVF(x)                   (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCES_ERROVF_SHIFT)) & DIRU_DIRUCES_ERROVF_MASK)
#define DIRU_DIRUCES_ERRCOUNT_MASK               (0xFF0U)
#define DIRU_DIRUCES_ERRCOUNT_SHIFT              (4U)
#define DIRU_DIRUCES_ERRCOUNT_WIDTH              (8U)
#define DIRU_DIRUCES_ERRCOUNT(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCES_ERRCOUNT_SHIFT)) & DIRU_DIRUCES_ERRCOUNT_MASK)
#define DIRU_DIRUCES_ERRTYPE_MASK                (0xF000U)
#define DIRU_DIRUCES_ERRTYPE_SHIFT               (12U)
#define DIRU_DIRUCES_ERRTYPE_WIDTH               (4U)
#define DIRU_DIRUCES_ERRTYPE(x)                  (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCES_ERRTYPE_SHIFT)) & DIRU_DIRUCES_ERRTYPE_MASK)
#define DIRU_DIRUCES_ERRINFO_MASK                (0xFF0000U)
#define DIRU_DIRUCES_ERRINFO_SHIFT               (16U)
#define DIRU_DIRUCES_ERRINFO_WIDTH               (8U)
#define DIRU_DIRUCES_ERRINFO(x)                  (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCES_ERRINFO_SHIFT)) & DIRU_DIRUCES_ERRINFO_MASK)
/*! @} */

/*! @name DIRUCELR0 - DIRU Correctable Error Location Register 0 */
/*! @{ */
#define DIRU_DIRUCELR0_ERRENTRY_MASK             (0xFFFFFU)
#define DIRU_DIRUCELR0_ERRENTRY_SHIFT            (0U)
#define DIRU_DIRUCELR0_ERRENTRY_WIDTH            (20U)
#define DIRU_DIRUCELR0_ERRENTRY(x)               (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCELR0_ERRENTRY_SHIFT)) & DIRU_DIRUCELR0_ERRENTRY_MASK)
#define DIRU_DIRUCELR0_ERRWAY_MASK               (0x3F00000U)
#define DIRU_DIRUCELR0_ERRWAY_SHIFT              (20U)
#define DIRU_DIRUCELR0_ERRWAY_WIDTH              (6U)
#define DIRU_DIRUCELR0_ERRWAY(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCELR0_ERRWAY_SHIFT)) & DIRU_DIRUCELR0_ERRWAY_MASK)
#define DIRU_DIRUCELR0_ERRWORD_MASK              (0xFC000000U)
#define DIRU_DIRUCELR0_ERRWORD_SHIFT             (26U)
#define DIRU_DIRUCELR0_ERRWORD_WIDTH             (6U)
#define DIRU_DIRUCELR0_ERRWORD(x)                (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCELR0_ERRWORD_SHIFT)) & DIRU_DIRUCELR0_ERRWORD_MASK)
/*! @} */

/*! @name DIRUCELR1 - DIRU Correctable Error Location Register 1 */
/*! @{ */
#define DIRU_DIRUCELR1_ERRADDR_MASK              (0xFFFU)
#define DIRU_DIRUCELR1_ERRADDR_SHIFT             (0U)
#define DIRU_DIRUCELR1_ERRADDR_WIDTH             (12U)
#define DIRU_DIRUCELR1_ERRADDR(x)                (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCELR1_ERRADDR_SHIFT)) & DIRU_DIRUCELR1_ERRADDR_MASK)
/*! @} */

/*! @name DIRUCESA - DIRU Correctable Error Status Alias */
/*! @{ */
#define DIRU_DIRUCESA_ERRVLD_MASK                (0x1U)
#define DIRU_DIRUCESA_ERRVLD_SHIFT               (0U)
#define DIRU_DIRUCESA_ERRVLD_WIDTH               (1U)
#define DIRU_DIRUCESA_ERRVLD(x)                  (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCESA_ERRVLD_SHIFT)) & DIRU_DIRUCESA_ERRVLD_MASK)
#define DIRU_DIRUCESA_ERROVF_MASK                (0x2U)
#define DIRU_DIRUCESA_ERROVF_SHIFT               (1U)
#define DIRU_DIRUCESA_ERROVF_WIDTH               (1U)
#define DIRU_DIRUCESA_ERROVF(x)                  (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCESA_ERROVF_SHIFT)) & DIRU_DIRUCESA_ERROVF_MASK)
#define DIRU_DIRUCESA_ERRCOUNT_MASK              (0xFF0U)
#define DIRU_DIRUCESA_ERRCOUNT_SHIFT             (4U)
#define DIRU_DIRUCESA_ERRCOUNT_WIDTH             (8U)
#define DIRU_DIRUCESA_ERRCOUNT(x)                (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCESA_ERRCOUNT_SHIFT)) & DIRU_DIRUCESA_ERRCOUNT_MASK)
#define DIRU_DIRUCESA_ERRTYPE_MASK               (0xF000U)
#define DIRU_DIRUCESA_ERRTYPE_SHIFT              (12U)
#define DIRU_DIRUCESA_ERRTYPE_WIDTH              (4U)
#define DIRU_DIRUCESA_ERRTYPE(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCESA_ERRTYPE_SHIFT)) & DIRU_DIRUCESA_ERRTYPE_MASK)
#define DIRU_DIRUCESA_ERRINFO_MASK               (0xFF0000U)
#define DIRU_DIRUCESA_ERRINFO_SHIFT              (16U)
#define DIRU_DIRUCESA_ERRINFO_WIDTH              (8U)
#define DIRU_DIRUCESA_ERRINFO(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUCESA_ERRINFO_SHIFT)) & DIRU_DIRUCESA_ERRINFO_MASK)
/*! @} */

/*! @name DIRUUEC - DIRU Uncorrectable Error Control */
/*! @{ */
#define DIRU_DIRUUEC_ERRDETEN_MASK               (0x1U)
#define DIRU_DIRUUEC_ERRDETEN_SHIFT              (0U)
#define DIRU_DIRUUEC_ERRDETEN_WIDTH              (1U)
#define DIRU_DIRUUEC_ERRDETEN(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUEC_ERRDETEN_SHIFT)) & DIRU_DIRUUEC_ERRDETEN_MASK)
#define DIRU_DIRUUEC_ERRINTEN_MASK               (0x2U)
#define DIRU_DIRUUEC_ERRINTEN_SHIFT              (1U)
#define DIRU_DIRUUEC_ERRINTEN_WIDTH              (1U)
#define DIRU_DIRUUEC_ERRINTEN(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUEC_ERRINTEN_SHIFT)) & DIRU_DIRUUEC_ERRINTEN_MASK)
#define DIRU_DIRUUEC_ERRTHRESHOLD_MASK           (0xFF0U)
#define DIRU_DIRUUEC_ERRTHRESHOLD_SHIFT          (4U)
#define DIRU_DIRUUEC_ERRTHRESHOLD_WIDTH          (8U)
#define DIRU_DIRUUEC_ERRTHRESHOLD(x)             (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUEC_ERRTHRESHOLD_SHIFT)) & DIRU_DIRUUEC_ERRTHRESHOLD_MASK)
/*! @} */

/*! @name DIRUUES - DIRU Uncorrectable Error Status */
/*! @{ */
#define DIRU_DIRUUES_ERRVLD_MASK                 (0x1U)
#define DIRU_DIRUUES_ERRVLD_SHIFT                (0U)
#define DIRU_DIRUUES_ERRVLD_WIDTH                (1U)
#define DIRU_DIRUUES_ERRVLD(x)                   (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUES_ERRVLD_SHIFT)) & DIRU_DIRUUES_ERRVLD_MASK)
#define DIRU_DIRUUES_ERROVF_MASK                 (0x2U)
#define DIRU_DIRUUES_ERROVF_SHIFT                (1U)
#define DIRU_DIRUUES_ERROVF_WIDTH                (1U)
#define DIRU_DIRUUES_ERROVF(x)                   (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUES_ERROVF_SHIFT)) & DIRU_DIRUUES_ERROVF_MASK)
#define DIRU_DIRUUES_ERRCOUNT_MASK               (0xFF0U)
#define DIRU_DIRUUES_ERRCOUNT_SHIFT              (4U)
#define DIRU_DIRUUES_ERRCOUNT_WIDTH              (8U)
#define DIRU_DIRUUES_ERRCOUNT(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUES_ERRCOUNT_SHIFT)) & DIRU_DIRUUES_ERRCOUNT_MASK)
#define DIRU_DIRUUES_ERRTYPE_MASK                (0xF000U)
#define DIRU_DIRUUES_ERRTYPE_SHIFT               (12U)
#define DIRU_DIRUUES_ERRTYPE_WIDTH               (4U)
#define DIRU_DIRUUES_ERRTYPE(x)                  (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUES_ERRTYPE_SHIFT)) & DIRU_DIRUUES_ERRTYPE_MASK)
#define DIRU_DIRUUES_ERRINFO_MASK                (0xFF0000U)
#define DIRU_DIRUUES_ERRINFO_SHIFT               (16U)
#define DIRU_DIRUUES_ERRINFO_WIDTH               (8U)
#define DIRU_DIRUUES_ERRINFO(x)                  (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUES_ERRINFO_SHIFT)) & DIRU_DIRUUES_ERRINFO_MASK)
/*! @} */

/*! @name DIRUUELR0 - DIRU Uncorrectable Error Location Register 0 */
/*! @{ */
#define DIRU_DIRUUELR0_ERRENTRY_MASK             (0xFFFFFU)
#define DIRU_DIRUUELR0_ERRENTRY_SHIFT            (0U)
#define DIRU_DIRUUELR0_ERRENTRY_WIDTH            (20U)
#define DIRU_DIRUUELR0_ERRENTRY(x)               (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUELR0_ERRENTRY_SHIFT)) & DIRU_DIRUUELR0_ERRENTRY_MASK)
#define DIRU_DIRUUELR0_ERRWAY_MASK               (0x3F00000U)
#define DIRU_DIRUUELR0_ERRWAY_SHIFT              (20U)
#define DIRU_DIRUUELR0_ERRWAY_WIDTH              (6U)
#define DIRU_DIRUUELR0_ERRWAY(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUELR0_ERRWAY_SHIFT)) & DIRU_DIRUUELR0_ERRWAY_MASK)
#define DIRU_DIRUUELR0_ERRWORD_MASK              (0xFC000000U)
#define DIRU_DIRUUELR0_ERRWORD_SHIFT             (26U)
#define DIRU_DIRUUELR0_ERRWORD_WIDTH             (6U)
#define DIRU_DIRUUELR0_ERRWORD(x)                (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUELR0_ERRWORD_SHIFT)) & DIRU_DIRUUELR0_ERRWORD_MASK)
/*! @} */

/*! @name DIRUUELR1 - DIRU Uncorrectable Error Location Register 1 */
/*! @{ */
#define DIRU_DIRUUELR1_ERRADDR_MASK              (0xFFFU)
#define DIRU_DIRUUELR1_ERRADDR_SHIFT             (0U)
#define DIRU_DIRUUELR1_ERRADDR_WIDTH             (12U)
#define DIRU_DIRUUELR1_ERRADDR(x)                (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUELR1_ERRADDR_SHIFT)) & DIRU_DIRUUELR1_ERRADDR_MASK)
/*! @} */

/*! @name DIRUUESA - DIRU Uncorrectable Error Status Alias */
/*! @{ */
#define DIRU_DIRUUESA_ERRVLD_MASK                (0x1U)
#define DIRU_DIRUUESA_ERRVLD_SHIFT               (0U)
#define DIRU_DIRUUESA_ERRVLD_WIDTH               (1U)
#define DIRU_DIRUUESA_ERRVLD(x)                  (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUESA_ERRVLD_SHIFT)) & DIRU_DIRUUESA_ERRVLD_MASK)
#define DIRU_DIRUUESA_ERROVF_MASK                (0x2U)
#define DIRU_DIRUUESA_ERROVF_SHIFT               (1U)
#define DIRU_DIRUUESA_ERROVF_WIDTH               (1U)
#define DIRU_DIRUUESA_ERROVF(x)                  (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUESA_ERROVF_SHIFT)) & DIRU_DIRUUESA_ERROVF_MASK)
#define DIRU_DIRUUESA_ERRCOUNT_MASK              (0xFF0U)
#define DIRU_DIRUUESA_ERRCOUNT_SHIFT             (4U)
#define DIRU_DIRUUESA_ERRCOUNT_WIDTH             (8U)
#define DIRU_DIRUUESA_ERRCOUNT(x)                (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUESA_ERRCOUNT_SHIFT)) & DIRU_DIRUUESA_ERRCOUNT_MASK)
#define DIRU_DIRUUESA_ERRTYPE_MASK               (0xF000U)
#define DIRU_DIRUUESA_ERRTYPE_SHIFT              (12U)
#define DIRU_DIRUUESA_ERRTYPE_WIDTH              (4U)
#define DIRU_DIRUUESA_ERRTYPE(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUESA_ERRTYPE_SHIFT)) & DIRU_DIRUUESA_ERRTYPE_MASK)
#define DIRU_DIRUUESA_ERRINFO_MASK               (0xFF0000U)
#define DIRU_DIRUUESA_ERRINFO_SHIFT              (16U)
#define DIRU_DIRUUESA_ERRINFO_WIDTH              (8U)
#define DIRU_DIRUUESA_ERRINFO(x)                 (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUUESA_ERRINFO_SHIFT)) & DIRU_DIRUUESA_ERRINFO_MASK)
/*! @} */

/*! @name DIRUID - DIRU Identification Register */
/*! @{ */
#define DIRU_DIRUID_IMPLVER_MASK                 (0xFFU)
#define DIRU_DIRUID_IMPLVER_SHIFT                (0U)
#define DIRU_DIRUID_IMPLVER_WIDTH                (8U)
#define DIRU_DIRUID_IMPLVER(x)                   (((uint32_t)(((uint32_t)(x)) << DIRU_DIRUID_IMPLVER_SHIFT)) & DIRU_DIRUID_IMPLVER_MASK)
/*! @} */

/*!
 * @}
 */ /* end of group DIRU_Register_Masks */

/*!
 * @}
 */ /* end of group DIRU_Peripheral_Access_Layer */

#endif  /* #if !defined(S32R45_DIRU_H_) */
