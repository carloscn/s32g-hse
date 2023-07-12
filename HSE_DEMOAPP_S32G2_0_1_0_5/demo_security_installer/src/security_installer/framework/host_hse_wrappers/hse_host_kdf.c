/**
 *   @file    hse_host_kdf.c
 *
 *   @brief   This file containts wrappers for KDF services
 *   @details
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

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 ==================================================================================================*/

/*******************************************************************************
 * Description: Copy a symmetric key (AES/HMAC) from a SHARED_SECRET slot (output of KDF)
 ******************************************************************************/
hseSrvResponse_t HSE_KeyDeriveCopyKey
(
    hseKeyHandle_t      keyHandle,
    uint16_t            startOffset,
    hseKeyHandle_t      targetKeyHandle,
    hseKeyInfo_t        keyInfo
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveCopyKeySrv_t *pExtractKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pExtractKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveCopyKeyReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE_COPY;
    pExtractKeySrv->keyHandle = keyHandle;
    pExtractKeySrv->startOffset = startOffset;
    pExtractKeySrv->targetKeyHandle = targetKeyHandle;
    pExtractKeySrv->keyInfo = keyInfo;

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

/*******************************************************************************
 *
 * Description: Key derivation functions / scheme
 *
 ******************************************************************************/

hseSrvResponse_t HSE_KeyDeriveIKEv2
(
    hseKdfIKEV2Scheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_IKEV2;
    memcpy(&pDeriveKeySrv->sch.IKEv2, pKdfScheme, sizeof(hseKdfIKEV2Scheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

hseSrvResponse_t HSE_KdfISO_KDF1
(
    hseKdfISO18033_KDF1Scheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_ISO18033_KDF1;
    memcpy(&pDeriveKeySrv->sch.ISO18033_KDF1, pKdfScheme, sizeof(hseKdfISO18033_KDF1Scheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

hseSrvResponse_t HSE_KdfISO_KDF2
(
    hseKdfISO18033_KDF2Scheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_ISO18033_KDF2;
    memcpy(&pDeriveKeySrv->sch.ISO18033_KDF2, pKdfScheme, sizeof(hseKdfISO18033_KDF2Scheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

hseSrvResponse_t HSE_KdfNXP_KDF
(
    hseKdfNxpGenericScheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_NXP_GENERIC;
    memcpy(&pDeriveKeySrv->sch.nxpGeneric, pKdfScheme, sizeof(hseKdfNxpGenericScheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}


hseSrvResponse_t HSE_KdfSP800_56COneStepHSE_K
(
    hseKdfSP800_56COneStepScheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_SP800_56C_ONE_STEP;
    memcpy(&pDeriveKeySrv->sch.SP800_56COneStep, pKdfScheme, sizeof(hseKdfSP800_56COneStepScheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

hseSrvResponse_t HSE_KdfANS_X963
(
    hseKdfANSX963Scheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_ANS_X963;
    memcpy(&pDeriveKeySrv->sch.ANS_X963, pKdfScheme, sizeof(hseKdfANSX963Scheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

hseSrvResponse_t HSE_KdfSP800_108
(
    hseKdfSP800_108Scheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_SP800_108;
    memcpy(&pDeriveKeySrv->sch.SP800_108, pKdfScheme, sizeof(hseKdfSP800_108Scheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

hseSrvResponse_t HSE_KdfExtract_Step
(
    hseKdfExtractStepScheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_EXTRACT_STEP;
    memcpy(&pDeriveKeySrv->sch.extractStep, pKdfScheme, sizeof(hseKdfExtractStepScheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

hseSrvResponse_t HSE_PBKDF2
(
    hsePBKDF2Scheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_PBKDF2HMAC;
    memcpy(&pDeriveKeySrv->sch.PBKDF2, pKdfScheme, sizeof(hsePBKDF2Scheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

hseSrvResponse_t HSE_TLS12_PRF
(
    hseKdfTLS12PrfScheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_TLS12PRF;
    memcpy(&pDeriveKeySrv->sch.TLS12Prf, pKdfScheme, sizeof(hseKdfTLS12PrfScheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

hseSrvResponse_t HSE_HKDF
(
    hseHKDF_ExpandScheme_t *pKdfScheme
)
{
    hseSrvDescriptor_t *pHseSrvDesc;
    hseKeyDeriveSrv_t *pDeriveKeySrv;;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][MU_CH1];
    pDeriveKeySrv = &(pHseSrvDesc->hseSrv.keyDeriveReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_KEY_DERIVE;
    pDeriveKeySrv->kdfAlgo = HSE_KDF_ALGO_HKDF_EXPAND;
    memcpy(&pDeriveKeySrv->sch.HKDF_Expand, pKdfScheme, sizeof(hseHKDF_ExpandScheme_t));

    /* Send the request synchronously */
    return HSE_Send(MU0, MU_CH1, gSyncTxOptions, pHseSrvDesc);
}

#ifdef __cplusplus
}
#endif

/** @} */

