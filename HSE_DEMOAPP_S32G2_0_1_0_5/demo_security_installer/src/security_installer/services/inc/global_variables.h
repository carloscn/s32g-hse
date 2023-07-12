/**
*   @file    global_variables.h
*
*   @brief   Contains the global variables.
*   @details This file contains the definitions for global variables
             used to install the security features on a device.
*
*   @addtogroup security_installer
*   @{
*/
/*==================================================================================================
*
*   Copyright 2019-2020 NXP
*
*   This software is owned or controlled by NXP and may only be used strictly in accordance with
*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
*   activating and/or otherwise using the software, you are agreeing that you have read, and that
*   you agree to comply with and are bound by, such license terms. If you do not agree to
*   be bound by the applicable license terms, then you may not retain, install, activate or
*   otherwise use the software.
==================================================================================================*/

#ifndef GLOBAL_VARIABLES_H
#define GLOBAL_VARIABLES_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "config.h"
#include "global_defs.h"
#include "global_types.h"

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

extern ivt_t IVT;

/**< @brief Global AES 128 Provision Key */
extern uint8_t gAES128ProvisionKey[16];

/**< @brief Global AES 128 Provision Key Info */
extern hseKeyInfo_t gAES128ProvisionKeyInfo;

/**< @brief Global AES 128 Authorization Key */
extern uint8_t gAES128AuthorizationKey[16];

/**< @brief Global AES 128 Authorization Key Info */
extern hseKeyInfo_t gAES128AuthorizationKeyInfo;

/**< @brief Global multi-purpose buffer */
extern uint8_t gBuffer[BUFFER_SIZE];

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* GLOBAL_VARIABLES_H */

/** @} */
