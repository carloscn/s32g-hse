/**
*   @file    hse_host_cipher.h
*
*   @brief   This file contains wrappers definitions for cipher services.
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
#ifndef HSE_HOST_CIPHER_H
#define HSE_HOST_CIPHER_H

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

/*******************************************************************************
 * Description: AES encryption request
 ******************************************************************************/
hseSrvResponse_t HSE_AesEncrypt
(
    hseCipherBlockMode_t cipherBlockMode,
    hseKeyHandle_t keyHandle,
    const uint8_t *pIV,
    const uint8_t* pInput,
    uint32_t inputLength,
    uint8_t* pOutput
);

/*******************************************************************************
 * Description: AES decryption request
 ******************************************************************************/
hseSrvResponse_t HSE_AesDecrypt
(
    hseCipherBlockMode_t cipherBlockMode,
    hseKeyHandle_t keyHandle,
    const uint8_t *pIV,
    const uint8_t* pInput,
    uint32_t inputLength,
    uint8_t* pOutput
);

/*******************************************************************************
 * Description: Description: AES encryption/decryption streaming start request
 ******************************************************************************/
hseSrvResponse_t HSE_AesStreamStart
(
    hseCipherBlockMode_t cipherBlockMode,
    hseStreamId_t  streamID,
    hseCipherDir_t cipherDir,
    hseSGTOption_t inputSgtType,
    hseKeyHandle_t keyHandle,
    const uint8_t *pIV,
    const uint8_t* pInput,
    uint32_t inputLength,
    uint8_t* pOutput
);

/*******************************************************************************
 * Description: Description: AES encryption/decryption streaming update/finish request
 ******************************************************************************/
hseSrvResponse_t HSE_AesStreamUpdateFinish
(
    hseAccessMode_t accessMode,
    hseStreamId_t  streamID,
    hseSGTOption_t inputSgtType,
    const uint8_t* pInput,
    uint32_t inputLength,
    uint8_t* pOutput
);

#ifdef __cplusplus
}
#endif

#endif /* HSE_HOST_CIPHER_H */

/** @} */
