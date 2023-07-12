/**
*   @file    hse_host_gen_key.c
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

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 ==================================================================================================*/

/*************************************************************************************************
* Description:  Generate a Shared Secret via ECDH
************************************************************************************************/
hseSrvResponse_t HSE_Ecdh
(
    hseKeyHandle_t privKeyHandle,
    hseKeyHandle_t pubKeyHandle,
    hseKeyHandle_t targetKeyHandle
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseDHComputeSharedSecretSrv_t *pDhSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pDhSrv = &(pHseSrvDesc->hseSrv.dhComputeSecretReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_DH_COMPUTE_SHARED_SECRET;
    pDhSrv->privKeyHandle = privKeyHandle;
    pDhSrv->peerPubKeyHandle = pubKeyHandle;
    pDhSrv->targetKeyHandle = targetKeyHandle;

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

/*************************************************************************************************
* Description:  Generate a symmetric random key
************************************************************************************************/
hseSrvResponse_t HSE_GenerateSymKey
(
    hseKeyHandle_t keyHandle,
    hseKeyInfo_t keyInfo
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyGenerateSrv_t* pKeyGenSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pKeyGenSrv = &(pHseSrvDesc->hseSrv.keyGenReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_GENERATE;
    pKeyGenSrv->keyGenScheme = HSE_KEY_GEN_SYM_RANDOM_KEY;
    pKeyGenSrv->targetKeyHandle = keyHandle;
    pKeyGenSrv->keyInfo = keyInfo;

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

/*************************************************************************************************
* Description:  Generate an ECC key pair on the curve specified by key info
************************************************************************************************/
hseSrvResponse_t HSE_GenerateEccKey
(
    hseKeyHandle_t keyHandle,
    hseKeyInfo_t keyInfo,
    uint8_t *pGeneratedPub
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyGenerateSrv_t* pKeyGenSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on u8MuInstance */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if(HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pKeyGenSrv = &(pHseSrvDesc->hseSrv.keyGenReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_GENERATE;
    pKeyGenSrv->keyGenScheme = HSE_KEY_GEN_ECC_KEY_PAIR;
    pKeyGenSrv->targetKeyHandle = keyHandle;
    pKeyGenSrv->keyInfo = keyInfo;
    /* ECC public key can be returned into an output buffer (optional) */
    pKeyGenSrv->sch.eccKey.pPubKey = PTR_TO_HOST_ADDR(pGeneratedPub);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

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
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyGenerateSrv_t* pKeyGenSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pKeyGenSrv = &(pHseSrvDesc->hseSrv.keyGenReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_GENERATE;
    pKeyGenSrv->keyGenScheme = HSE_KEY_GEN_RSA_KEY_PAIR;
    pKeyGenSrv->targetKeyHandle = keyHandle;
    pKeyGenSrv->keyInfo = keyInfo;
    /* Public exponenet e must be provided */
    pKeyGenSrv->sch.rsaKey.pubExpLength = eLen;
    pKeyGenSrv->sch.rsaKey.pPubExp = PTR_TO_HOST_ADDR(pE);
    /* RSA modulus can be returned into an output buffer (optional) */
    pKeyGenSrv->sch.rsaKey.pModulus = PTR_TO_HOST_ADDR(pN);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

#ifdef __cplusplus
}
#endif

/** @} */

