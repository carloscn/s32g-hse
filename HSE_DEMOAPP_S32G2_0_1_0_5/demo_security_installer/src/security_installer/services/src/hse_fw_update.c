/**
*   @file    hse_fw_update.c
*
*   @brief   HSE FW update services.
*   @details Updates the HSE FW (generating the blue image from a new image / running image).
*
*   @addtogroup [APP_HSE_FW_UPDATE]
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
#include "installer_services.h"
#include "mc_me.h"
#include "config.h"
#include "Fls_Qspi_Api.h"

#include "flash.h"

#include <string.h>

#if defined(APP_HSE_FW_UPDATE) || defined(APP_HSE_FW_INSTALL_SEC_BOOT)

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 * ===============================================================================================*/

static uint32_t hseFwSize = 0UL;

#if defined(HSE_NEW_PINK_IMG)
    /* The address where the new pink image can be found - conversion to Blue Image in-place */
    /* Can be customized with different address (SRAM/QSPI) */
    /* For older FW (0.8.1/0.8.2) different address should be set (in-place conversion not supported) */
    #if ! (defined(HSE_FW_0_8_1_COMPATIBLE) || defined(HSE_FW_0_8_2_COMPATIBLE))
        #define HSE_NEW_PINK_FWIMG_ADDR &gBuffer[0U]
    #else
        #define HSE_NEW_PINK_FWIMG_ADDR ((uint8_t *)0x34200000UL)
    #endif
    #define HSE_NEW_PINK_FWIMG_LEN  hseFwSize
#else
    #define HSE_NEW_PINK_FWIMG_ADDR NULL
    #define HSE_NEW_PINK_FWIMG_LEN  0UL
#endif

#if defined(PINK_TO_BLUE)
/* The address from which the updated FW will be loaded - buffer where Blue Image will be generated */
static uint8_t *pHseFw = &gBuffer[0];
#else
static uint8_t *pHseFw = HSE_NEW_PINK_FWIMG_ADDR;
#endif

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
    Function: GetHseFwSize

    @brief    Calculate the HSE FW size by reading the header information.
    @details  Raw binary size at offset 0xC + header&/tag sizes depending whether is a Pink/Blue image.
 */
static uint32_t GetHseFwSize(uint32_t pAddr)
{
    uint32_t size = 0UL;

    ASSERT(ADDR_NOT_NULL(pAddr));

    if(IS_IMAGE_PINK(pAddr)) {
        size = ((uint32_t *)pAddr)[3U] + HSE_FW_PINK_IMAGE_HEADER_SIZE;
        if(REV_MAJOR_2 <= S32_GetRevision()) {
            size += HSE_FW_PINK_IMAGE_REV2_TAG_SIZE;
        }
    } else if(IS_IMAGE_BLUE(pAddr)) {
        size = ((uint32_t *)pAddr)[3U] + HSE_FW_BLUE_IMAGE_HEADER_SIZE + HSE_FW_BLUE_IMAGE_TAG_SIZE;
    }

    ASSERT(size > 0UL);
    return size;
}

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/

/*
    Function: DoHseFwUpdate

    @brief    Conditions for performig HSE FW update
    @detailed :
        1. If address and length given for a new HSE FW pink image ->
            generates HSE blue image and place it to primary, copying current FW image to backup
        2. Current FW is pink ->
            generates HSE blue image and place it to primary, doing a backup.
        Blue image enable a faster booting sequence.
 */
bool_t DoHseFwUpdate(void)
{
#if defined(HSE_NEW_PINK_IMG)
    return IS_IMAGE_PINK(HSE_NEW_PINK_FWIMG_ADDR);
#else
    return IS_IMAGE_PINK(IVT.pHSE);
#endif
}

/*
    Function: HSE_UpdateFW

    @brief    Update the HSE FW with a new pink image or with generated blue image
    @detailed Update the HSE FW with a new pink image or with generated blue image to be used at next reset.
              Converting the image to blue format enables faster booting sequence.
 */
void HSE_UpdateFW(void)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;
    (void)srvResponse;

    #if defined(HSE_NEW_PINK_IMG)
    {
        /* Get the size of the new pink image */
        hseFwSize = GetHseFwSize((uintptr_t)HSE_NEW_PINK_FWIMG_ADDR);
    }
    #else /* Just Pink->Blue conversion of current image */
    {
        /* Get the HSE FW size of currently running image */
        srvResponse = HSE_GetAttribute(HSE_FW_SIZE_ATTR_ID, sizeof(uint32_t), &hseFwSize);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);
    }
    #endif /* HSE_NEW_PINK_IMG */

    /* Ensure FW size does not exceed maximum */
    ASSERT(hseFwSize <= MAX_HSE_FW_IMG_SIZE);

    #if defined(PINK_TO_BLUE)
    {
        uint32_t bufLen = sizeof(gBuffer);

        /* Generate the Blue image from FW pink image into SYS_RAM buffer */
        srvResponse = HSE_GenerateBlueImage(HSE_NEW_PINK_FWIMG_ADDR, HSE_NEW_PINK_FWIMG_LEN, gBuffer, &bufLen);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Update the FW size to the newly generated Blue Image */
        hseFwSize = bufLen;
    }
    #endif /* PINK_TO_BLUE */

    /* Save the new (pink/blue) image to flash (and backup the old image if necessary) */
    #if defined(FLASH_SUPPORT)
    {
        /* Check if BACKUP location is configured and save previous FW image */
        if( (ADDR_NOT_NULL(IVT.pHSE_bck)) &&
            ( ((REV_MAJOR_2 <= S32_GetRevision()) && (HSE_FW_PARTITION_PRIMARY == HSE_GetPartition())) ||
              (REV_MAJOR_1 == S32_GetRevision()) ) )
        {
            /* Backup primary image */
            ASSERT(FLASH_OP_OK == Flash_WriteData_FromFlash(IVT.pHSE_bck, IVT.pHSE, GetHseFwSize(IVT.pHSE)));
        }

        /* Save the new FW image to primary location */
        ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(IVT.pHSE, pHseFw, hseFwSize));
    }
    #endif
}

#endif /* defined(APP_HSE_FW_UPDATE) || defined(APP_HSE_FW_INSTALL_SEC_BOOT) */

#ifdef __cplusplus
}
#endif

/** @} */
