/**
*   @file    hse_host_km_utils.c
*
*   @brief   This file implements wrappers for key mgmt utils services (i.e. get key info, erase key, etc.).
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
* Description:  Retrieve the key info
************************************************************************************************/
hseSrvResponse_t HSE_GetKeyInfo
(
    hseKeyHandle_t keyHandle,
    hseKeyInfo_t* reqKeyInfo
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
    pHseSrvDesc->srvId = HSE_SRV_ID_GET_KEY_INFO;
    pHseSrvDesc->hseSrv.getKeyInfoReq.keyHandle = keyHandle;
    pHseSrvDesc->hseSrv.getKeyInfoReq.pKeyInfo = PTR_TO_HOST_ADDR(reqKeyInfo);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

/*************************************************************************************************
* Description:  Erase one key by handle / more keys by option (sym / asym / all RAM/NVM)
*   NOTE:       Use keyHandle = HSE_INVALID_KEY_HANDLE to delete more then one key
************************************************************************************************/
hseSrvResponse_t HSE_EraseKey
(
    hseKeyHandle_t        keyHandle,
    hseEraseKeyOptions_t  eraseKeyOptions
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
    pHseSrvDesc->srvId = HSE_SRV_ID_ERASE_KEY;
    pHseSrvDesc->hseSrv.eraseKeyReq.keyHandle = keyHandle;
    pHseSrvDesc->hseSrv.eraseKeyReq.eraseKeyOptions = eraseKeyOptions;

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

#ifdef __cplusplus
}
#endif

/** @} */

