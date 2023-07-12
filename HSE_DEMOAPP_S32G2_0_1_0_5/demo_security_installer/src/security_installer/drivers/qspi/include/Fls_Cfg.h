/**
*   @file    Fls_Cfg.h
*   @implements Fls_Cfg.h_Artifact
*   @version 0.4.5
*
*   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
*   @details Definitions of all pre-compile configuration parameters.
*
*   @addtogroup FLS
*   @{
*/
/*==================================================================================================
 *   Project              : AUTOSAR 4.4 MCAL
 *   Platform             : CORTEXM
 *   Peripheral           : IPV_QSPI
 *   Dependencies         : none
 *
 *   Autosar Version      : 4.4.0
 *   Autosar Revision     : ASR_REL_4_4_REV_0000
 *   Autosar Conf.Variant :
 *   SW Version           : 0.8.0
 *   Build Version        : S32XX_MCAL_0_8_0_EAR_ASR_REL_4_4_REV_0000_20191025
 *
 *   (c) Copyright 2006-2016 Freescale Semiconductor, Inc.
*       Copyright 2017-2019 NXP
 *   All Rights Reserved.
==================================================================================================*/

#ifndef FLS_CFG_H
#define FLS_CFG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fls_Qspi_Type.h"

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
/* to avoid endloop in while */
#define FLS_TIMEOUT_VALUE           (50000U)

/* The contents of an erased flash memory cell */
#define FLS_ERASED_VALUE            (0xffffffffU)

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

typedef struct
{
    /**
    * @brief pointer to array containing last logical address of each configured sector
    */
    const  Fls_AddressType  (*paSectorEndAddr)[];
    /**
    * @brief pointer to array containing program size of each configured sector
    */
    const  Fls_LengthType  (*paSectorProgSize)[];
    /**
    * @brief Pointer to array containing the configured hardware start address of each external sector.
    */
    const  uint32  (*paSectorHwAddress)[];

    /** @brief  Pointer to configuration structure of QSPI. */
    const Fls_QspiCfgConfigType  *pFlsQspiCfgConfig;

} Fls_ConfigType;

/*==================================================================================================
                                 GLOBAL const ANT DECLARATIONS
==================================================================================================*/
/* Declaration of post-build configuration set structure */

extern Fls_ConfigType  FlsConfigSet_VS_0_DLL_BYPASS_SDR;
extern Fls_ConfigType  FlsConfigSet_VS_0_DLL_MANUAL_SDR;
extern Fls_ConfigType  FlsConfigSet_VS_0_DLL_AUTO_UPDATE_SDR;
extern Fls_ConfigType  FlsConfigSet_VS_0_DLL_BYPASS_DDR;
extern Fls_ConfigType  FlsConfigSet_VS_0_DLL_MANUAL_DDR;
extern Fls_ConfigType  FlsConfigSet_VS_0_DLL_AUTO_UPDATE_DDR;

#ifdef __cplusplus
}
#endif

#endif /* FLS_CFG_H */

