/**
 *   @file    hse_host_mac.c
 *
 *   @brief   This file use verify MAC operation
 *   @details This file will generate & verify CMAC & GMAC.
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

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 ==================================================================================================*/

/*************************************************************************************************
* Description:  MAC generate/verify request
************************************************************************************************/
static hseSrvResponse_t HSE_MacReq
(
    const hseAccessMode_t accessMode,
    const hseStreamId_t streamId,
    const hseMacScheme_t macScheme,
    const hseAuthDir_t authDir,
    const hseSGTOption_t inputSgtType,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLen,
    uint8_t *pTag,
    uint32_t *pTagLen
)
{
    uint8_t u8MuChannel;
    hseMacSrv_t* pMacSrv;
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
    pMacSrv = &(pHseSrvDesc->hseSrv.macReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_MAC;
    pMacSrv = &(pHseSrvDesc->hseSrv.macReq);

    pMacSrv->accessMode = accessMode;
    pMacSrv->streamId = streamId;
    pMacSrv->macScheme = macScheme;
    pMacSrv->authDir = authDir;
    pMacSrv->sgtOption = inputSgtType;

    pMacSrv->keyHandle = keyHandle;
    pMacSrv->pInput = PTR_TO_HOST_ADDR(pInput);
    pMacSrv->inputLength = inputLen;
    pMacSrv->pTag = PTR_TO_HOST_ADDR(pTag);
    pMacSrv->pTagLength = PTR_TO_HOST_ADDR(pTagLen);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 ==================================================================================================*/

/*************************************************************************************************
* Description:  CMAC (AES) request
************************************************************************************************/
hseSrvResponse_t HSE_Cmac
(
    const hseAuthDir_t authDir,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLen,
    uint8_t *pTag,
    uint32_t *pTagLen
)
{
    hseMacScheme_t macScheme = {
        .macAlgo = HSE_MAC_ALGO_CMAC,
        .sch.cmac.cipherAlgo = HSE_CIPHER_ALGO_AES
    };
    return HSE_MacReq(HSE_ACCESS_MODE_ONE_PASS, 0U, macScheme, authDir, HSE_SGT_OPTION_NONE,
        keyHandle, pInput, inputLen, pTag, pTagLen);
}

/*************************************************************************************************
* Description:  GMAC (AES) request
************************************************************************************************/
hseSrvResponse_t HSE_Gmac
(
    const hseAuthDir_t authDir,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLen,
    const uint8_t *pIv,
    const uint32_t ivLen,
    uint8_t *pTag,
    uint32_t *pTagLen
)
{
    hseMacScheme_t macScheme = {
        .macAlgo = HSE_MAC_ALGO_GMAC,
        .sch.gmac.pIV = PTR_TO_HOST_ADDR(pIv),
        .sch.gmac.ivLength = ivLen,
    };
    return HSE_MacReq(HSE_ACCESS_MODE_ONE_PASS, 0U, macScheme, authDir, HSE_SGT_OPTION_NONE,
        keyHandle, pInput, inputLen, pTag, pTagLen);
}

/*************************************************************************************************
* Description:  HMAC request
************************************************************************************************/
hseSrvResponse_t HSE_Hmac
(
    const hseAuthDir_t authDir,
    const hseHashAlgo_t hashAlgo,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLen,
    uint8_t *pTag,
    uint32_t *pTagLen
)
{
    hseMacScheme_t macScheme = {
        .macAlgo = HSE_MAC_ALGO_HMAC,
        .sch.hmac.hashAlgo = hashAlgo,
    };
    return HSE_MacReq(HSE_ACCESS_MODE_ONE_PASS, 0U, macScheme, authDir, HSE_SGT_OPTION_NONE,
        keyHandle, pInput, inputLen, pTag, pTagLen);
}

/*************************************************************************************************
* Description:  XCBC MAC (AES128) request
************************************************************************************************/
hseSrvResponse_t HSE_XCbcMac
(
    const hseAuthDir_t authDir,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLen,
    uint8_t *pTag,
    uint32_t *pTagLen
)
{
    hseMacScheme_t macScheme = {
        .macAlgo = HSE_MAC_ALGO_XCBC_MAC,
        .sch.cmac.cipherAlgo = HSE_CIPHER_ALGO_AES
    };
    return HSE_MacReq(HSE_ACCESS_MODE_ONE_PASS, 0U, macScheme, authDir, HSE_SGT_OPTION_NONE,
        keyHandle, pInput, inputLen, pTag, pTagLen);
}

/*************************************************************************************************
* Description:  CMAC fast generate/verify request
************************************************************************************************/
hseSrvResponse_t HSE_FastCmac
(
    const hseAuthDir_t authDir,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputBitLen,
    uint8_t *pTag,
    uint8_t _tagBitLen
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseFastCMACSrv_t *pFastCMacSrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pFastCMacSrv = &(pHseSrvDesc->hseSrv.fastCmacReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId           = HSE_SRV_ID_FAST_CMAC;
    pFastCMacSrv->authDir        = authDir;
    pFastCMacSrv->keyHandle      = keyHandle;
    pFastCMacSrv->pInput         = PTR_TO_HOST_ADDR(pInput);
    pFastCMacSrv->inputBitLength = inputBitLen;
    pFastCMacSrv->pTag           = PTR_TO_HOST_ADDR(pTag);
    pFastCMacSrv->tagBitLength   = _tagBitLen;

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

#ifdef __cplusplus
}
#endif

/** @} */
