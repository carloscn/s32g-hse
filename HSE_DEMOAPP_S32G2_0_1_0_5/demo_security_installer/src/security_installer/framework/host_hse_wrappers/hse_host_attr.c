/**
*   @file    hse_host_attr.c
*
*   @brief   This file implements wrappers for set/get HSE attribute services.
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
 * Description: Sets the specified HSE attribute
 ******************************************************************************/
hseSrvResponse_t HSE_SetAttribute
(
    hseAttrId_t attrId,
    uint32_t attrLen,
    void *pAttr
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t* pHseSrvDesc;
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
    pHseSrvDesc->srvId                      = HSE_SRV_ID_SET_ATTR;
    pHseSrvDesc->hseSrv.setAttrReq.attrId   = attrId;
    pHseSrvDesc->hseSrv.setAttrReq.attrLen  = attrLen;
    pHseSrvDesc->hseSrv.setAttrReq.pAttr    = PTR_TO_HOST_ADDR(pAttr);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Description: Gets the specified HSE attribute
 ******************************************************************************/
hseSrvResponse_t HSE_GetAttribute
(
    hseAttrId_t attrId,
    uint32_t attrLen,
    void *pAttr
)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t* pHseSrvDesc;
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
    pHseSrvDesc->srvId                      = HSE_SRV_ID_GET_ATTR;
    pHseSrvDesc->hseSrv.getAttrReq.attrId   = attrId;
    pHseSrvDesc->hseSrv.getAttrReq.attrLen  = attrLen;
    pHseSrvDesc->hseSrv.getAttrReq.pAttr    = PTR_TO_HOST_ADDR(pAttr);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Description: Sets/Gets the attribute on specified MU instance and channel
 ******************************************************************************/
hseSrvResponse_t HSE_SetGetAttrByMu
(
    hseAttrId_t attrId,
    uint32_t attrLen,
    void *pAttr,
    bool_t bSet,
    uint8_t u8MuInstance,
    uint8_t u8MuChannel
)
{
    hseSrvDescriptor_t* pHseSrvDesc;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[u8MuInstance][u8MuChannel];
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId                      = (bSet) ? HSE_SRV_ID_SET_ATTR : HSE_SRV_ID_GET_ATTR;
    if(TRUE == bSet)
    {
        pHseSrvDesc->hseSrv.setAttrReq.attrId   = attrId;
        pHseSrvDesc->hseSrv.setAttrReq.attrLen  = attrLen;
        pHseSrvDesc->hseSrv.setAttrReq.pAttr    = PTR_TO_HOST_ADDR(pAttr);
    }
    else
    {
        pHseSrvDesc->hseSrv.getAttrReq.attrId   = attrId;
        pHseSrvDesc->hseSrv.getAttrReq.attrLen  = attrLen;
        pHseSrvDesc->hseSrv.getAttrReq.pAttr    = PTR_TO_HOST_ADDR(pAttr);
    }

    /* Send the request synchronously */
    srvResponse = HSE_Send(u8MuInstance, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
    return srvResponse;
}

#ifdef __cplusplus
}
#endif

/** @} */
