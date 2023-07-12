/**
*   @file    hse_host_boot.c
*
*   @brief   This file implements wrappers for secure boot configuration and HSE FW blue image conversion.
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

#include "hse_host.h"
#include "string.h"
#include "config.h"

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
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

/*******************************************************************************
 * Description: Verifies a SMR entry at run-time.
 ******************************************************************************/
hseSrvResponse_t HSE_SmrVerify
(
    const uint8_t entryIndex
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseSmrVerifySrv_t *pSmrVerify;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pSmrVerify = &(pHseSrvDesc->hseSrv.smrVerifyReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_SMR_VERIFY;
    pSmrVerify->entryIndex = entryIndex;

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Description: Installs a SMR entry used for Advanced Secure Boot.
 ******************************************************************************/
hseSrvResponse_t HSE_InstallSmrEntry
(
    const uint8_t entryIndex,
    const hseSmrEntry_t *pSmrEntry,
    const uint8_t *pData,
    const uint32_t dataLen,
    const uint8_t *pSign0,
    const uint8_t *pSign1,
    const uint16_t signLen0,
    const uint16_t signLen1,
    const uint8_t *pIV,
    const uint8_t *pGmacTag
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseSmrEntryInstallSrv_t *pSmrEntryInstall;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pSmrEntryInstall = &(pHseSrvDesc->hseSrv.smrEntryInstallReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_SMR_ENTRY_INSTALL;
    pSmrEntryInstall->accessMode = HSE_ACCESS_MODE_ONE_PASS;
    pSmrEntryInstall->entryIndex = entryIndex;
    pSmrEntryInstall->pSmrEntry = PTR_TO_HOST_ADDR(pSmrEntry);

    pSmrEntryInstall->pSmrData = PTR_TO_HOST_ADDR(pData);
    pSmrEntryInstall->smrDataLength = dataLen;
    pSmrEntryInstall->pAuthTag[0] = PTR_TO_HOST_ADDR(pSign0);
    pSmrEntryInstall->pAuthTag[1] = PTR_TO_HOST_ADDR(pSign1);
    pSmrEntryInstall->authTagLength[0] = signLen0;
    pSmrEntryInstall->authTagLength[1] = signLen1;
    pSmrEntryInstall->cipher.pIV = PTR_TO_HOST_ADDR(pIV);
    pSmrEntryInstall->cipher.pGmacTag = PTR_TO_HOST_ADDR(pGmacTag);


    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Description: Installs a core reset entry used for Advanced Secure Boot.
 ******************************************************************************/
hseSrvResponse_t HSE_InstallCoreResetEntry
(
    const uint8_t entryIndex,
    const hseCrEntry_t *pCrEntry
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseCrEntryInstallSrv_t *pCrEntryInstallSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pCrEntryInstallSrv = &(pHseSrvDesc->hseSrv.crEntryInstallReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_CORE_RESET_ENTRY_INSTALL;
    pCrEntryInstallSrv->crEntryIndex = entryIndex;
    pCrEntryInstallSrv->pCrEntry = PTR_TO_HOST_ADDR(pCrEntry);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Description: Perform a on demand core reset used for Advanced Secure Boot.
 ******************************************************************************/
hseSrvResponse_t HSE_OnDemandCoreReset
(
    const uint8_t entryIndex
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseCrOnDemandBootSrv_t *pCrOnDemandBootSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pCrOnDemandBootSrv = &(pHseSrvDesc->hseSrv.crOnDemandBootReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_ON_DEMAND_CORE_RESET;
    pCrOnDemandBootSrv->crEntryIndex = entryIndex;

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Description: Signs IVT/DCD/SelfTest images or Application image for Basic Secure Boot (AppBSB)
 ******************************************************************************/
hseSrvResponse_t HSE_SignBootImage
(
    const uint8_t *pInImage,
    const uint32_t inTagLength,
    uint8_t *pOutTagAddr
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseBootDataImageSignSrv_t *pBootDataImgSignSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pBootDataImgSignSrv = &(pHseSrvDesc->hseSrv.bootDataImageSignReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_BOOT_DATA_IMAGE_SIGN;
    pBootDataImgSignSrv->pInImage = PTR_TO_HOST_ADDR(pInImage);
    pBootDataImgSignSrv->inTagLength = inTagLength;
    pBootDataImgSignSrv->pOutTagAddr = PTR_TO_HOST_ADDR(pOutTagAddr);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Description: Verifies the MAC, generated over IVT/DCD/SelfTest/AppBSB images via hseBootDataImageSign Service
 ******************************************************************************/
hseSrvResponse_t HSE_VerifyBootImage
(
    const uint8_t *pInImage
)
{
    uint8_t u8MuChannel;
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
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_BOOT_DATA_IMAGE_VERIFY;
    pHseSrvDesc->hseSrv.bootDataImageSigVerifyReq.pInImage = PTR_TO_HOST_ADDR(pInImage);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Description: Generates the HSE FW Blue Image from a new Pink Image or from current HSE FW running (when newFwPinkImgLen = 0)
 ******************************************************************************/
hseSrvResponse_t HSE_GenerateBlueImage
(
    const uint8_t *pNewHseFwPinkImg,
    const uint32_t newFwPinkImgLen,
    uint8_t *pHseFwBlueImg,
    uint32_t *pHseFwBlueImgLen
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseFirmwareUpdateSrv_t *pFwUpdateSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pFwUpdateSrv = &(pHseSrvDesc->hseSrv.firmwareUpdateReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_FIRMWARE_UPDATE;
    pFwUpdateSrv->pInFwFile = PTR_TO_HOST_ADDR(pNewHseFwPinkImg);
    pFwUpdateSrv->inFwFileLength = newFwPinkImgLen;

    #if ! (defined(HSE_FW_0_8_1_COMPATIBLE) || defined(HSE_FW_0_8_2_COMPATIBLE))
    pFwUpdateSrv->pOutFwBuffer = PTR_TO_HOST_ADDR(pHseFwBlueImg);
    pFwUpdateSrv->pFwBufferLength = PTR_TO_HOST_ADDR(pHseFwBlueImgLen);
    #else
    pFwUpdateSrv->pFwBufferLength = *pHseFwBlueImgLen;
    *(((uint32_t *)&(pFwUpdateSrv->pOutFwBuffer)) - 1U) = PTR_TO_HOST_ADDR(pHseFwBlueImg);
    #endif

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

#ifdef __cplusplus
}
#endif

/** @} */
