/**
 *   @file    hse_host_sign.h
 *
 *   @brief   This file use verify signature operation
 *   @details This file will generate & verify signatures.
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
#ifndef HSE_HOST_SIGN_H
#define HSE_HOST_SIGN_H

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
* Description:  ECDSA GEN/VER with hash done in ONE_SHOT (or not at all, depending on bInputIsHashed - pre-hashed)
************************************************************************************************/
hseSrvResponse_t HSE_Ecdsa
(
    const hseAuthDir_t authDir,
    const hseHashAlgo_t hashAlgo,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLength,
    const bool_t bInputIsHashed,
    uint8_t *pR,
    uint8_t *pS,
    uint32_t *pRLen,
    uint32_t *pSLen
);

/*************************************************************************************************
* Description:  EDDSA GEN/VER with hash done in ONE_SHOT (or not at all, depending on bInputIsHashed - pre-hashed)
************************************************************************************************/
hseSrvResponse_t HSE_Eddsa
(
    const hseAuthDir_t authDir,
    const bool_t bHashEddsa,
    const uint8_t* pUserContext,
    const uint8_t userContextLength,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLength,
    const bool_t bInputIsHashed,
    uint8_t *pR,
    uint8_t *pS,
    uint32_t *pRLen,
    uint32_t *pSLen
);

/*************************************************************************************************
* Description:  RSA PSS GEN/VER with hash done in ONE_SHOT (or not at all, depending on bInputIsHashed - pre-hashed)
************************************************************************************************/
hseSrvResponse_t HSE_RsaPss
(
    const hseAuthDir_t authDir,
    const hseHashAlgo_t hashAlgo,
    const uint32_t saltLength,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLength,
    const bool_t bInputIsHashed,
    uint8_t *pSignature,
    uint32_t *pSignLen
);

/*************************************************************************************************
* Description:  RSA PKCS 1V15 GEN/VER with hash done in ONE_SHOT (or not at all, depending on bInputIsHashed - pre-hashed)
************************************************************************************************/
hseSrvResponse_t HSE_RsaPkcs1v15
(
    const hseAuthDir_t authDir,
    const hseHashAlgo_t hashAlgo,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLength,
    const bool_t bInputIsHashed,
    uint8_t *pSignature,
    uint32_t *pSignLen
);

#ifdef __cplusplus
}
#endif

#endif /* HSE_HOST_SIGN_H */

/** @} */

