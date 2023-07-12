/**
*   @file    hse_host_aead.c
*
*   @brief   This file contains tests of AEAD services: CCM, GCM.
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

#include "hse_host.h"
#include "string.h"

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
* Description:  AEAD one shot request
************************************************************************************************/
static hseSrvResponse_t HSE_AeadReq_OneShot
(
    const hseAuthCipherMode_t mode,
    const hseCipherDir_t cipherDir,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pIv,
    const uint32_t ivLen,
    const uint8_t *pAad,
    const uint32_t aadLen,
    const uint8_t *pInput,
    const uint32_t inputLen,
    const uint32_t tagLen,
    uint8_t *pTag,
    uint8_t *pOutput
)
{
    uint8_t u8MuChannel;
    hseAeadSrv_t *pAeadSrv;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if(HSE_INVALID_CHANNEL == u8MuChannel)
        goto exit;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pAeadSrv = &(pHseSrvDesc->hseSrv.aeadReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_AEAD;
    pAeadSrv->accessMode = HSE_ACCESS_MODE_ONE_PASS;
    pAeadSrv->authCipherMode = mode;
    pAeadSrv->cipherDir = cipherDir;
    pAeadSrv->keyHandle = keyHandle;
    pAeadSrv->pIV = PTR_TO_HOST_ADDR(pIv);
    pAeadSrv->ivLength = ivLen;
    pAeadSrv->pAAD = PTR_TO_HOST_ADDR(pAad);
    pAeadSrv->aadLength = aadLen;
    pAeadSrv->pInput = PTR_TO_HOST_ADDR(pInput);
    pAeadSrv->inputLength = inputLen;
    pAeadSrv->tagLength = tagLen;
    pAeadSrv->pTag = PTR_TO_HOST_ADDR(pTag);
    pAeadSrv->pOutput = PTR_TO_HOST_ADDR(pOutput);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 ==================================================================================================*/

/*************************************************************************************************
* Description:  AEAD GCM Encrypt
************************************************************************************************/
hseSrvResponse_t HSE_AeadGcmEncrypt
(
    const hseKeyHandle_t keyHandle,
    const uint8_t *pIv,
    const uint32_t ivLen,
    const uint8_t *pAad,
    const uint32_t aadLen,
    const uint8_t *pInput,
    const uint32_t inputLen,
    const uint32_t tagLen,
    uint8_t *pTag,
    uint8_t *pOutput
)
{
    return HSE_AeadReq_OneShot(HSE_AUTH_CIPHER_MODE_GCM, HSE_CIPHER_DIR_ENCRYPT, keyHandle,
        pIv, ivLen, pAad, aadLen, pInput, inputLen, tagLen, pTag, pOutput);
}

/*************************************************************************************************
* Description:  AEAD GCM Decrypt
************************************************************************************************/
hseSrvResponse_t HSE_AeadGcmDecrypt
(
    const hseKeyHandle_t keyHandle,
    const uint8_t *pIv,
    const uint32_t ivLen,
    const uint8_t *pAad,
    const uint32_t aadLen,
    const uint8_t *pInput,
    const uint32_t inputLen,
    const uint32_t tagLen,
    uint8_t *pTag,
    uint8_t *pOutput
)
{
    return HSE_AeadReq_OneShot(HSE_AUTH_CIPHER_MODE_GCM, HSE_CIPHER_DIR_DECRYPT, keyHandle,
        pIv, ivLen, pAad, aadLen, pInput, inputLen, tagLen, pTag, pOutput);
}

#ifdef __cplusplus
}
#endif

/** @} */

