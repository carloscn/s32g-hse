/**
 *   @file    hse_host_sign.c
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
#ifdef __cplusplus
extern "C"
{
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

/*************************************************************************************************
* Description:  Generic Signature generation/verification HSE request
************************************************************************************************/
static hseSrvResponse_t HSE_SignReq
(
    const hseAuthDir_t authDir,
    const hseAccessMode_t accessMode,
    const hseSignScheme_t signScheme,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLength,
    const bool_t bInputIsHashed,
    uint8_t *pSign0,
    uint8_t *pSign1,
    uint32_t *pSignLen0,
    uint32_t *pSignLen1
);

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 ==================================================================================================*/

/*************************************************************************************************
* Description:  Generic Signature generation/verification HSE request
************************************************************************************************/
static hseSrvResponse_t HSE_SignReq
(
    const hseAuthDir_t authDir,
    const hseAccessMode_t accessMode,
    const hseSignScheme_t signScheme,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLength,
    const bool_t bInputIsHashed,
    uint8_t *pSign0,
    uint8_t *pSign1,
    uint32_t *pSignLen0,
    uint32_t *pSignLen1
)
{
    uint8_t u8MuChannel;
    hseSignSrv_t* pSignSrv;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pSignSrv = &(pHseSrvDesc->hseSrv.signReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_SIGN;
    pSignSrv->authDir = authDir;
    pSignSrv->accessMode = accessMode;
    pSignSrv->signScheme = signScheme;

    pSignSrv->keyHandle = keyHandle;
    pSignSrv->pInput = PTR_TO_HOST_ADDR(pInput);
    pSignSrv->inputLength = inputLength;
    pSignSrv->bInputIsHashed = bInputIsHashed;
    pSignSrv->pSignature[0] = PTR_TO_HOST_ADDR(pSign0);
    pSignSrv->pSignature[1] = PTR_TO_HOST_ADDR(pSign1);
    pSignSrv->pSignatureLength[0] = PTR_TO_HOST_ADDR(pSignLen0);
    pSignSrv->pSignatureLength[1] = PTR_TO_HOST_ADDR(pSignLen1);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
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
)
{
    /* Declare the sign scheme for ECDSA */
    hseSignScheme_t signScheme = {
        .signSch = HSE_SIGN_ECDSA,
        .sch.ecdsa.hashAlgo = hashAlgo
    };

    /* Send the request */
    return HSE_SignReq(authDir, HSE_ACCESS_MODE_ONE_PASS, signScheme,
        keyHandle, pInput, inputLength, bInputIsHashed, pR, pS, pRLen, pSLen);
}

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
)
{
    /* Declare the sign scheme for EDDSA */
    hseSignScheme_t signScheme = {
        .signSch = HSE_SIGN_EDDSA,
        .sch.eddsa.bHashEddsa = bHashEddsa,
        .sch.eddsa.pContext = PTR_TO_HOST_ADDR(pUserContext),
        .sch.eddsa.contextLength = userContextLength
    };

    /* Send the request */
    return HSE_SignReq(authDir, HSE_ACCESS_MODE_ONE_PASS, signScheme,
        keyHandle, pInput, inputLength, bInputIsHashed, pR, pS, pRLen, pSLen);
}

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
)
{
    /* Declare the sign scheme for RSA PSS */
    hseSignScheme_t signScheme = {
        .signSch = HSE_SIGN_RSASSA_PSS,
        .sch.rsaPss.hashAlgo = hashAlgo,
        .sch.rsaPss.saltLength = saltLength
    };

    /* Send the request */
    return HSE_SignReq(authDir, HSE_ACCESS_MODE_ONE_PASS, signScheme,
        keyHandle, pInput, inputLength, bInputIsHashed, pSignature, NULL, pSignLen, NULL);
}

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
)
{
    /* Declare the sign scheme for RSA PKCS 1v15 */
    hseSignScheme_t signScheme = {
        .signSch = HSE_SIGN_RSASSA_PKCS1_V15,
        .sch.rsaPss.hashAlgo = hashAlgo,
    };

    /* Send the request */
    return HSE_SignReq(authDir, HSE_ACCESS_MODE_ONE_PASS, signScheme,
        keyHandle, pInput, inputLength, bInputIsHashed, pSignature, NULL, pSignLen, NULL);
}

#ifdef __cplusplus
}
#endif

/** @} */

