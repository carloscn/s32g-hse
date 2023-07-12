/**
*   @file    hse_host_otfad.c
*
*   @brief   This file implements wrappers for OTFAD services.
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

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*************************************************************************************************
* Description:   Installs an OTFAD context (updates or adds a new entry)
************************************************************************************************/
hseSrvResponse_t HSE_OtfadInstallCtx
(
    uint8_t otfadIdx,
    hseOtfadContext_t *pInput
)
{
    uint8_t u8MuChannel;
    hseInstallOtfadContextSrv_t* pInstallOtfadContextSrv;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Alloc free descriptor */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pInstallOtfadContextSrv = &(pHseSrvDesc->hseSrv.installOtfadReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId                      = HSE_SRV_ID_INSTALL_OTFAD_CTX;
    pInstallOtfadContextSrv->otfadIdx       = otfadIdx;
    pInstallOtfadContextSrv->pOtfadCtxEntry = PTR_TO_HOST_ADDR(pInput);

    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

/*************************************************************************************************
*  Description: Activates the OTFAD context using an already installed OTFAD entry
************************************************************************************************/
hseSrvResponse_t HSE_OtfadActivateCtx
(
    uint8_t otfadIdx
)
{
    uint8_t u8MuChannel;
    hseActivateOtfadContextSrv_t* pActivateOtfadContextSrv;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Alloc free descriptor */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pActivateOtfadContextSrv = &(pHseSrvDesc->hseSrv.activateOtfadReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId          = HSE_SRV_ID_ACTIVATE_OTFAD_CTX;
    pActivateOtfadContextSrv->otfadIdx = otfadIdx;

    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

/*************************************************************************************************
*  Description: Extracts the OTFAD context parameters previously configured
************************************************************************************************/
hseSrvResponse_t HSE_OtfadGetCtx
(
    uint8_t otfadIdx,
    hseOtfadContext_t *pOutput
)
{

    uint8_t u8MuChannel;
    hseGetOtfadContextSrv_t* pGetOtfadContextSrv;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Alloc free descriptor */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pGetOtfadContextSrv = &(pHseSrvDesc->hseSrv.getOtfadCtxReq);
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId             = HSE_SRV_ID_GET_OTFAD_CTX;
    pGetOtfadContextSrv->otfadIdx      = otfadIdx;
    pGetOtfadContextSrv->pOtfadContext = PTR_TO_HOST_ADDR(pOutput);

    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

#ifdef __cplusplus
}
#endif

