/**
*   @file    hse_config.c
*
*   @brief   Example of HSE configuration
*   @details Example of services used for configuring HSE persistent attributes and key catalogs.
*
*   @addtogroup [HSE_CONFIG]
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
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "global_variables.h"
#include "hse_host_attr.h"
#include "hse_host_boot.h"
#include "hse_host_km_format_catalogs.h"
#include "hse_host_km_import_key.h"
#include "hse_host_mac.h"
#include "hse_host_sys_img.h"
#include "hse_mu.h"
#include "installer_services.h"
#include "config.h"
#include "Fls_Qspi_Api.h"

#include "flash.h"

#include <string.h>

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 * ===============================================================================================*/

/* MU configuration */
/* Shared memory enabled - HSE service descriptors used from shared memory (check the `hse_host.h` file) */
#if defined(HSE_ENABLE_SHARED_MEM)

/* MU configuration with XRDC configured for shared memory, divided equally
 * among all MU instances (having allocated 4kB for each)
 */
static const hseAttrMUConfig_t hseMuXrdcConfig = {
    .muInstances = {
        {
            .muConfig = HSE_MU_ACTIVATED,
            .xrdcDomainId = 0U,
            .sharedMemChunkSize = 4096U
        },
        {
            .muConfig = HSE_MU_ACTIVATED,
            .xrdcDomainId = 0U,
            .sharedMemChunkSize = 4096U
        },
        {
            .muConfig = HSE_MU_ACTIVATED,
            .xrdcDomainId = 0U,
            .sharedMemChunkSize = 4096U
        },
        {
            .muConfig = HSE_MU_ACTIVATED,
            .xrdcDomainId = 0U,
            .sharedMemChunkSize = 4096U
        }
    }
};
#else

/* MU configuration to enable all MU instances without XRDC configured - default configuration */
static const hseAttrMUConfig_t hseMuXrdcConfig = {
    .muInstances = {
        {
            .muConfig = HSE_MU_ACTIVATED,
            .xrdcDomainId = 0U,
            .sharedMemChunkSize = 0U
        },
        {
            .muConfig = HSE_MU_ACTIVATED,
            .xrdcDomainId = 0U,
            .sharedMemChunkSize = 0U
        },
        {
            .muConfig = HSE_MU_ACTIVATED,
            .xrdcDomainId = 0U,
            .sharedMemChunkSize = 0U
        },
        {
            .muConfig = HSE_MU_ACTIVATED,
            .xrdcDomainId = 0U,
            .sharedMemChunkSize = 0U
        }
    }
};
#endif /* defined(HSE_ENABLE_SHARED_MEM) */

/*==================================================================================================
 *                                      LOCAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 * ===============================================================================================*/

/*
    Function: HSE_ConfigNvmAttributes
    @brief    Example of configuring HSE NVM attributes
    @detailed Configure MU instances that will be active and allocate SHARED_RAM / MU (split done via XRDC)
              (Optional) Extended Security Polices can be configured (StartAsUser)
              These attributes will be part of the SYS_IMG
 */
static void HSE_ConfigNvmAttributes(void)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Define which MU instances are activated and configure XRDC over SHARED_RAM */
    srvResponse = HSE_SetAttribute(HSE_MU_CONFIG_ATTR_ID, sizeof(hseAttrMUConfig_t), (void *)&hseMuXrdcConfig);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);

    /* (Optional) - Start as user */
}

/*
    Function: HSE_ConfigKeyCatalogs
    @brief    Format key catalogs
    @detailed Example of key catalog format HSE service which defines the layout of the Key store memory space:
                (number of slots, number of keys/slot, key types, usage/MU and ownership).
              Key catalogs format will be part of the SYS_IMG that proides persistency of HSE configuration
 */
static void HSE_ConfigKeyCatalogs(void)
{
    hseSrvResponse_t srvResponse;

    /* Format HSE key catalogs */
    ASSERT(HSE_SRV_RSP_OK == (srvResponse = HSE_FormatKeyCatalogs()));
    (void)srvResponse;
}

/*
    Function: HSE_InstallNvmKeys
    @brief    NVM keys installation example
    @detailed Example of key catalog format HSE service which defines the layout of the Key store memory space:
              (number of slots, number of keys/slot, key types, usage/MU and ownership).
              NVM keys will be part of the SYS_IMG.
 */
static void HSE_InstallNvmKeys(void)
{
    hseSrvResponse_t srvResponse;

    /* Import Provisioning key */
    srvResponse = HSE_ImportSymKey(NVM_AES128_PROVISION_KEY, HSE_KEY_TYPE_AES,
        (HSE_KF_USAGE_KEY_PROVISION | HSE_KF_USAGE_SIGN | HSE_KF_USAGE_VERIFY |
        HSE_KF_USAGE_ENCRYPT | HSE_KF_USAGE_DECRYPT),
        gAES128ProvisionKey, ARRAY_SIZE(gAES128ProvisionKey));
    ASSERT(HSE_SRV_RSP_OK == srvResponse);

    /* Import Authorization key */
    srvResponse = HSE_ImportSymKey(NVM_AES128_AUTHORIZATION_KEY, HSE_KEY_TYPE_AES,
        (HSE_KF_USAGE_AUTHORIZATION | HSE_KF_USAGE_VERIFY),
        gAES128AuthorizationKey, ARRAY_SIZE(gAES128AuthorizationKey));
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/

/*
    Function: HSE_SaveConfiguration
    @brief    Example of SYS_IMG handling
    @detailed Example of perserving HSE persistency across multiple sessions using SYS_IMG services
 */
void HSE_SaveConfiguration(void)
{
    uint32_t sysImageSize = 0UL;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Check whether updates were done in HSE configuration */
    if(! CHECK_HSE_STATUS(HSE_STATUS_PUBLISH_SYS_IMAGE) )
        return;

    /* Get the HSE configuration (AKA SYS_IMG) into SYS_RAM buffer */
    {
        uint32_t offsetInSysImg = 0UL;
        uint32_t buffLength = NUM_OF_ELEMS(gBuffer);

        /* Get SYS_IMG size and ensure buffer is big enough */
        srvResponse = HSE_SysImgGetSize(&sysImageSize);
        ASSERT((HSE_SRV_RSP_OK == srvResponse) && (sysImageSize <= buffLength));

        /* Clear buffer */
        memset(&gBuffer, 0x0, sizeof(gBuffer));

        /* Get the SYS_IMG */
        srvResponse = HSE_SysImgPublish(HSE_PUBLISH_ALL_DATA_SETS,
            &offsetInSysImg, &gBuffer[0], &buffLength);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);
    }

    /* Save configuration to flash (and backup the old configuration if necessary) */
    #if defined(FLASH_SUPPORT)
    {
        /* Check if at least SYS_IMG primary location is configured in IVT */
        ASSERT(ADDR_NOT_NULL(IVT.pSysImage));

        /* Check if BACKUP location is configured and save previous configuration */
        /* Do not overwrite backup image if HSE loaded it instead of primary sys-img (might be corrupted) */
        if( (ADDR_NOT_NULL(IVT.pSysImage_bck)) && (! (CHECK_HSE_STATUS(HSE_STATUS_BACKUP_SYS_IMAGE))) )
        {
            /* Backup primary image */
            ASSERT(FLASH_OP_OK == Flash_WriteData_FromFlash(IVT.pSysImage_bck, IVT.pSysImage, MAX_SYS_IMG_SIZE));
        }

        /* Save current configuration to primary location */
        ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(IVT.pSysImage, &gBuffer[0], sysImageSize));
    }
    #endif
}

/*
    Function: HSE_Config
    @brief    Example of configuring HSE services
    @detailed Configure NVM attributes, key catalogs, install NVM keys and handle SYS_IMG
 */
void HSE_Config(void)
{
    HSE_ConfigNvmAttributes();

    HSE_ConfigKeyCatalogs();

    HSE_InstallNvmKeys();

    HSE_SaveConfiguration();

    #if defined(FLASH_SUPPORT)
    _printf("HSE_Config: OK; Flash support: YES\n");
    #else
    _printf("HSE_Config: OK; Flash support: NO\n");
    #endif
}

#ifdef __cplusplus
}
#endif

/** @} */
