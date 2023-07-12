/**
*   @file    hse_host_sys_image.c
*
*   @brief   This file implements wrappers for SYS image services (Publish / Get size).
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

/*************************************************************************************************
* Description:  Get the SYS Image Size
************************************************************************************************/
hseSrvResponse_t HSE_SysImgGetSize
(
    uint32_t *pSize
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
    pHseSrvDesc->srvId = HSE_SRV_ID_GET_SYS_IMAGE_SIZE;
    pHseSrvDesc->hseSrv.getSysImageSizeReq.pSysImageSize = PTR_TO_HOST_ADDR(pSize);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

/*************************************************************************************************
* Description:  Publish SYS Image
************************************************************************************************/
hseSrvResponse_t HSE_SysImgPublish
(
    const hsePublishOptions_t publishOptions,
    uint32_t *pPublishOffset,
    uint8_t *pBuf,
    uint32_t *pBufLen
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hsePublishSysImageSrv_t *pPublishSysImageSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pPublishSysImageSrv = &pHseSrvDesc->hseSrv.publishSysImageReq;
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId = HSE_SRV_ID_PUBLISH_SYS_IMAGE;
    pPublishSysImageSrv->publishOptions = publishOptions;
    pPublishSysImageSrv->pPublishOffset = PTR_TO_HOST_ADDR(pPublishOffset);
    pPublishSysImageSrv->pBuff          = PTR_TO_HOST_ADDR(pBuf);
    pPublishSysImageSrv->pBuffLength    = PTR_TO_HOST_ADDR(pBufLen);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

#ifdef __cplusplus
}
#endif

/** @} */

