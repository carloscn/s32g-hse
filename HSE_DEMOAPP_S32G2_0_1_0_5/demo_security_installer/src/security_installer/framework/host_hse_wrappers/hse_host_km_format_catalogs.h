/**
*   @file    hse_host_km_format_catalogs.h
*
*   @brief   This file implements wrappers for key catalogs format HSE service.
*
*   @addtogroup [HOST_FRAMEWORK]
*   @{
*/
/*==================================================================================================
*
*   Copyright 2019-2021 NXP
*
*   This software is owned or controlled by NXP and may only be used strictly in accordance with
*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
*   activating and/or otherwise using the software, you are agreeing that you have read, and that
*   you agree to comply with and are bound by, such license terms. If you do not agree to
*   be bound by the applicable license terms, then you may not retain, install, activate or
*   otherwise use the software.
==================================================================================================*/
#ifndef HSE_HOST_KM_FORMAT_CATALOGS_H
#define HSE_HOST_KM_FORMAT_CATALOGS_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "hse_interface.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

/*************************************************************************************************
* Description:  Formats the key catalogs (first step in configuring the key catalogs).
************************************************************************************************/
hseSrvResponse_t HSE_FormatKeyCatalogs(void);

#ifdef __cplusplus
}
#endif

#endif /* HSE_HOST_KM_FORMAT_CATALOGS_H */

/** @} */

