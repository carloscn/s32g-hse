/**
*   @file    hse_host_hash.c
*
*   @brief   This file implements wrappers for hash services.
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
 * Description:	Hash request
 ******************************************************************************/
static hseSrvResponse_t HSE_HashReq
(
    hseAccessMode_t accessMode,
    hseStreamId_t streamId,
    hseHashAlgo_t hashAlgo,
    hseSGTOption_t inputSgtType,
    const uint8_t *pInput,
    uint32_t inputLen,
    uint8_t *pHash,
    uint32_t *pHashLen
);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*******************************************************************************
 * Description: Hash request
 ******************************************************************************/
static hseSrvResponse_t HSE_HashReq
(
    hseAccessMode_t accessMode,
    hseStreamId_t streamId,
    hseHashAlgo_t hashAlgo,
    hseSGTOption_t inputSgtType,
    const uint8_t *pInput,
    uint32_t inputLen,
    uint8_t *pHash,
    uint32_t *pHashLen
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseHashSrv_t *pHashSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pHashSrv = &(pHseSrvDesc->hseSrv.hashReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId              = HSE_SRV_ID_HASH;
    pHashSrv->accessMode            = accessMode;
    pHashSrv->hashAlgo              = hashAlgo;
    pHashSrv->inputLength           = inputLen;
    pHashSrv->sgtOption             = inputSgtType;
    pHashSrv->streamId              = streamId;

    pHashSrv->pInput                = PTR_TO_HOST_ADDR(pInput);
    pHashSrv->pHashLength           = PTR_TO_HOST_ADDR(pHashLen);
    pHashSrv->pHash                 = PTR_TO_HOST_ADDR(pHash);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*******************************************************************************
 * Description: HSE Hash request
 ******************************************************************************/
hseSrvResponse_t HSE_Hash
(
    hseHashAlgo_t hashAlgo,
    hseSGTOption_t inputSgtType,
    const uint8_t *pInput,
    uint32_t inputLen,
    uint8_t *pHash,
    uint32_t *pHashLen
)
{
    return HSE_HashReq(HSE_ACCESS_MODE_ONE_PASS, 0U, hashAlgo, inputSgtType,
        pInput, inputLen, pHash, pHashLen);
}

#ifdef __cplusplus
}
#endif
