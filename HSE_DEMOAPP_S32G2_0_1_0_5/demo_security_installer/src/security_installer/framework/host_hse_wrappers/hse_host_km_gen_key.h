/**
*   @file    hse_host_gen_key.h
*
*   @brief   This file implements wrappers for key generation service (AES/ECC/RSA) and ECDH.
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
#ifndef HSE_HOST_KM_GEN_KEY_H
#define HSE_HOST_KM_GEN_KEY_H

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
* Description:  Generate a Shared Secret via ECDH
************************************************************************************************/
hseSrvResponse_t HSE_Ecdh
(
    hseKeyHandle_t privKeyHandle,
    hseKeyHandle_t pubKeyHandle,
    hseKeyHandle_t targetKeyHandle
);

/*************************************************************************************************
* Description:  Generate a symmetric random key
************************************************************************************************/
hseSrvResponse_t HSE_GenerateSymKey
(
    hseKeyHandle_t keyHandle,
    hseKeyInfo_t keyInfo
);

/*************************************************************************************************
* Description:  Generate an ECC key pair on the curve specified by key info
************************************************************************************************/
hseSrvResponse_t HSE_GenerateEccKey
(
    hseKeyHandle_t keyHandle,
    hseKeyInfo_t keyInfo,
    uint8_t *pGeneratedPub
);

/*************************************************************************************************
* Description:  Generate a RSA key pair with the given public exponent e
************************************************************************************************/
hseSrvResponse_t HSE_GenerateRsaKey
(
    hseKeyHandle_t keyHandle,
    hseKeyInfo_t keyInfo,
    uint32_t eLen,
    uint8_t *pE,
    uint8_t *pN
);

#ifdef __cplusplus
}
#endif

#endif /* HSE_HOST_KM_GEN_KEY_H */

/** @} */

