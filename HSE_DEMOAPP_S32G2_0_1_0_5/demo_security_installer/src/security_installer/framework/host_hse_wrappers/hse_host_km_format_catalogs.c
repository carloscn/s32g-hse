/**
*   @file    hse_host_km_format_catalogs.c
*
*   @brief   This file implements wrappers for key catalogs format HSE service.
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
#include "global_defs.h"        /* Defines the catalogs configuration: HSE_NVM_KEY_CATALOG_CFG and HSE_RAM_KEY_CATALOG_CFG */

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 ==================================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 ==================================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 ==================================================================================================*/

/**< @brief The NVM containers used to format the HSE key catalogs */
static const hseKeyGroupCfgEntry_t gNvmCatalog[] __attribute__((aligned)) = {HSE_NVM_KEY_CATALOG_CFG};
/**< @brief The RAM containers used to format the HSE key catalogs */
static const hseKeyGroupCfgEntry_t gRamCatalog[] __attribute__((aligned)) = {HSE_RAM_KEY_CATALOG_CFG};

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
* Description:  Formats the key catalogs (first step in configuring the key catalogs).
************************************************************************************************/
hseSrvResponse_t HSE_FormatKeyCatalogs(void)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseFormatKeyCatalogsSrv_t *pFormatKeyCatalogsReq;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    pFormatKeyCatalogsReq = &pHseSrvDesc->hseSrv.formatKeyCatalogsReq;
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId  = HSE_SRV_ID_FORMAT_KEY_CATALOGS;
    /* Use the default catalog configurations to format the NVM and RAM catalogs */
    pFormatKeyCatalogsReq->pNvmKeyCatalogCfg = PTR_TO_HOST_ADDR(gNvmCatalog);
    pFormatKeyCatalogsReq->pRamKeyCatalogCfg = PTR_TO_HOST_ADDR(gRamCatalog);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);

exit:
    return srvResponse;
}

#ifdef __cplusplus
}
#endif

/** @} */

