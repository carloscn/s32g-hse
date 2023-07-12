/**
*   @file    hse_host_cipher.c
*
*   @brief   This file implements wrappers for cipher services.
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
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/

#include "string.h"
#include "hse_host.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*******************************************************************************
 * Description:	AES cipher request
 ******************************************************************************/
static hseSrvResponse_t HSE_AesCipherReq
(
    hseAccessMode_t accessMode,
    hseStreamId_t streamId,
    hseCipherBlockMode_t cipherBlockMode,
    hseCipherDir_t cipherDir,
    hseSGTOption_t inputSgtType,
    hseKeyHandle_t keyHandle,
    const uint8_t *pIV,
    const uint8_t *pInput,
    uint32_t inputLength,
    uint8_t *pOutput
);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*******************************************************************************
 * Description: AES cipher request
 ******************************************************************************/
static hseSrvResponse_t HSE_AesCipherReq
(
    hseAccessMode_t accessMode,
    hseStreamId_t streamId,
    hseCipherBlockMode_t cipherBlockMode,
    hseCipherDir_t cipherDir,
    hseSGTOption_t inputSgtType,
    hseKeyHandle_t keyHandle,
    const uint8_t *pIV,
    const uint8_t *pInput,
    uint32_t inputLength,
    uint8_t *pOutput
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseSymCipherSrv_t *pSymCipherReq;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pSymCipherReq = &(pHseSrvDesc->hseSrv.symCipherReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId              = HSE_SRV_ID_SYM_CIPHER;
    pSymCipherReq->accessMode       = accessMode;
    pSymCipherReq->cipherAlgo       = HSE_CIPHER_ALGO_AES;
    pSymCipherReq->cipherBlockMode  = cipherBlockMode;
    pSymCipherReq->cipherDir        = cipherDir;
    pSymCipherReq->sgtOption        = inputSgtType;
    pSymCipherReq->streamId         = streamId;

    pSymCipherReq->keyHandle        = keyHandle;
    pSymCipherReq->pIV              = PTR_TO_HOST_ADDR(pIV);
    pSymCipherReq->pInput           = PTR_TO_HOST_ADDR(pInput);
    pSymCipherReq->inputLength      = inputLength;
    pSymCipherReq->pOutput          = PTR_TO_HOST_ADDR(pOutput);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
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
)
{
    return HSE_AesCipherReq(
        HSE_ACCESS_MODE_ONE_PASS, 0U, cipherBlockMode, HSE_CIPHER_DIR_ENCRYPT, HSE_SGT_OPTION_NONE,
        keyHandle, pIV, pInput, inputLength, pOutput
    );
}

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
)
{
    return HSE_AesCipherReq(
        HSE_ACCESS_MODE_ONE_PASS, 0U, cipherBlockMode, HSE_CIPHER_DIR_DECRYPT, HSE_SGT_OPTION_NONE,
        keyHandle, pIV, pInput, inputLength, pOutput
    );
}

/*******************************************************************************
 * Description: AES encryption/decryption streaming start request
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
)
{
    return HSE_AesCipherReq(
        HSE_ACCESS_MODE_START, streamID, cipherBlockMode, cipherDir, inputSgtType,
        keyHandle, pIV, pInput, inputLength, pOutput
    );
}

/*******************************************************************************
 * Description: AES encryption/decryption streaming update/finish request
 ******************************************************************************/
hseSrvResponse_t HSE_AesStreamUpdateFinish
(
    hseAccessMode_t accessMode,
    hseStreamId_t  streamID,
    hseSGTOption_t inputSgtType,
    const uint8_t* pInput,
    uint32_t inputLength,
    uint8_t* pOutput
)
{
    return HSE_AesCipherReq(
        accessMode, streamID, 0U, 0U, inputSgtType, 0UL, NULL, pInput, inputLength, pOutput
    );
}

#ifdef __cplusplus
}
#endif

