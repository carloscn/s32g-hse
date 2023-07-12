/**
*   @file    hse_get_version.c
*
*   @brief   Example of HSE service - get version
*   @details Example of simplest HSE service - get FW version.
*
*   @addtogroup [HSE_GET_VERSION]
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
#include "hse_host.h"
#include "hse_host_attr.h"
#include "installer_services.h"

#include <string.h>

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/

#if defined(HSE_FW_0_8_1_COMPATIBLE) || defined(HSE_FW_0_8_2_COMPATIBLE)
    #undef  HSE_SRV_ID_GET_ATTR
    #define HSE_SRV_ID_GET_ATTR                 (0x00000002UL)
#endif

#define SIUL2_0_BASE            (0x4009C000UL)
#define SIUL2_0_MIDR1_OFFSET    (0x04UL)
#define SIUL2_0_MIDR2_OFFSET    (0x08UL)
#define REV_MAJOR_MASK          (0xF0UL)
#define REV_MAJOR_SHIFT         (4UL)
#define REV_MINOR_MASK          (0x0FUL)

#define PLATFORM_REV_MAJOR      (((*(volatile uint32_t*)(SIUL2_0_BASE + SIUL2_0_MIDR1_OFFSET)) & REV_MAJOR_MASK) >> REV_MAJOR_SHIFT)

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL VARIABLES
 * ===============================================================================================*/

hseAttrFwVersion_t gHseFwVersion = {0};
exampleState_t gGetVersionExample = NOT_RUN;

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 * ===============================================================================================*/

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/

/*************************************************************************************************
 * Description: Example of HSE service - get FW version
*************************************************************************************************/
void HSE_GetVersion_Example(void)
{
    uint8_t u8MuChannel;
    hseSrvDescriptor_t* pHseSrvDesc;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    gGetVersionExample = RUNNING;

    /* Get a free channel on MU0 */
    u8MuChannel = HSE_AllocateFreeChannel(MU0);
    if(HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto failed;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    /* Fill the service descriptor */
    pHseSrvDesc->srvId                      = HSE_SRV_ID_GET_ATTR;
    pHseSrvDesc->hseSrv.getAttrReq.attrId   = HSE_FW_VERSION_ATTR_ID;
    pHseSrvDesc->hseSrv.getAttrReq.attrLen  = sizeof(hseAttrFwVersion_t);
    pHseSrvDesc->hseSrv.getAttrReq.pAttr    = PTR_TO_HOST_ADDR(&gHseFwVersion);

    /* Send the request synchronously */
    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto failed;
    }

    /* The HSE FW version is now in `gHseFwVersion`.
     * The sequence of steps above is equivalent with calling `HSE_GetAttribute` function from `hse_host_attr.c`:
     *      HSE_GetAttribute(HSE_SRV_ID_GET_ATTR, sizeof(hseAttrFwVersion_t), &gHseFwVersion);
     */

    _printf("\nHSE FW Version: %d.%d.%d_%d.%d.%d\n",
        gHseFwVersion.reserved, gHseFwVersion.socTypeId, gHseFwVersion.fwTypeId,
        gHseFwVersion.majorVersion, gHseFwVersion.minorVersion, gHseFwVersion.patchVersion);

    {
        bool_t bIsBlue = ( ((ADDR_NOT_NULL(IVT.pHSE)) && (IS_IMAGE_BLUE(IVT.pHSE)) &&
            ( ((REV_MAJOR_2 <= S32_GetRevision()) && (HSE_FW_PARTITION_PRIMARY == HSE_GetPartition())) || (REV_MAJOR_1 == S32_GetRevision()) )) ||
            ((ADDR_NOT_NULL(IVT.pHSE_bck)) && (IS_IMAGE_BLUE(IVT.pHSE_bck)) && (REV_MAJOR_2 <= S32_GetRevision()) && (HSE_FW_PARTITION_BACKUP == HSE_GetPartition())) )
            ? TRUE : FALSE;

        _printf("HSE FW Image: %s\n", bIsBlue ? "Blue" : "Pink");
    }

    gGetVersionExample = PASSED;
    return;

failed:
    gGetVersionExample = FAILED;
}

/*************************************************************************************************
 * Description: Utility function to verify whether the ADK/P is programmed or not
*************************************************************************************************/
bool_t HSE_IsAdkpProgrammed(void)
{
    hseAttrApplDebugKey_t adkpHash;

    return (HSE_SRV_RSP_OK == HSE_GetAttribute(HSE_APP_DEBUG_KEY_ATTR_ID, sizeof(hseAttrApplDebugKey_t), &adkpHash[0U]));
}

/*************************************************************************************************
 * Description: Utility function to Platform revision
*************************************************************************************************/
uint32_t S32_GetRevision(void)
{
    return PLATFORM_REV_MAJOR;
}

/*************************************************************************************************
 * Description: Get HSE FW partition (whether booted from primary or backup image)
*************************************************************************************************/
uint8_t HSE_GetPartition(void)
{
    hseAttrFwPartition_t partition;

    if (HSE_SRV_RSP_OK != HSE_GetAttribute(HSE_FW_PARTITION_ATTR_ID, sizeof(hseAttrFwPartition_t), &partition)) {
        partition = 0U; /* error */
    }
    return partition;
}

/*************************************************************************************************
 * Description: Decode HSE Status from MU FSR
*************************************************************************************************/
void HSE_Status(void)
{
#ifdef UART_SUPPORT
    uint8_t i;
    char status[][40] = {
#if !defined(HSE_FW_0_8_1_COMPATIBLE)
        "",
        "HSE_SHE_STATUS_SECURE_BOOT",
        "HSE_SHE_STATUS_SECURE_BOOT_INIT",
        "HSE_SHE_STATUS_SECURE_BOOT_FINISHED",
        "HSE_SHE_STATUS_SECURE_BOOT_OK",
        "HSE_STATUS_RNG_INIT_OK",
        "HSE_STATUS_HOST_DEBUGGER_ACTIVE",
        "HSE_STATUS_HSE_DEBUGGER_ACTIVE",
        "HSE_STATUS_INIT_OK",
        "HSE_STATUS_INSTALL_OK",
        "HSE_STATUS_BOOT_OK",
        "HSE_STATUS_CUST_SUPER_USER",
        "HSE_STATUS_OEM_SUPER_USER",
        "HSE_STATUS_PUBLISH_SYS_IMAGE",
        "HSE_STATUS_PRIMARY_SYS_IMAGE",
        "HSE_STATUS_BACKUP_SYS_IMAGE",
#else
        "HSE_STATUS_INIT_OK",
        "HSE_STATUS_RNG_INIT_OK",
        "HSE_STATUS_INSTALL_OK",
        "HSE_STATUS_BOOT_OK",
        "HSE_STATUS_HOST_DEBUGGER_ACTIVE",
        "HSE_STATUS_CUST_SUPER_USER",
        "HSE_STATUS_OEM_SUPER_USER",
        "",
        "",
        "",
        "",
        "",
        "HSE_STATUS_PUBLISH_SYS_IMAGE",
#endif /* ! defined(HSE_FW_0_8_1_COMPATIBLE) */
    };

    _printf("HSE FW up and running! Status:\n");
    for (i = 0U; i < 16U; ++i)
        if(CHECK_HSE_STATUS((1UL << i)))
            _printf("\t%s\n", status[i]);

#endif /* UART_SUPPORT */
}

#ifdef __cplusplus
}
#endif

/** @} */
