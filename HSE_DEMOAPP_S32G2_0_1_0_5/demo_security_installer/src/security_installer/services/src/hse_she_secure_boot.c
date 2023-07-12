/**
*   @file    hse_she_secure_boot.c
*
*   @brief   Secure Boot configuration as per SHE specification.
*   @details Contains definitions of HSE services used for configuring SHE based Secure Boot.
*
*   @addtogroup [SECURE_BOOT]
*   @{
*/
/*==================================================================================================
*
*   Copyright 2021 NXP
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
#include "hse_host_cipher.h"
#include "hse_host_sign.h"
#include "hse_host_she.h"
#include "hse_host_sys_img.h"
#include "hse_mu.h"
#include "installer_services.h"
#include "mc_me.h"
#include "config.h"
#include "Fls_Qspi_Api.h"

#include "flash.h"

#include <string.h>

#if defined(APP_HSE_FW_INSTALL_SEC_BOOT)

#if defined(USE_SHE_SECURE_BOOT)

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/

#define BOOT_IMG_TAG_LEN                      (16UL)

#define SMR_PRIMARY_CODE_ENTRY_IND            (0U)
#define SMR_PRIMARY_MAP                       (1UL << SMR_PRIMARY_CODE_ENTRY_IND)

#define CR_M7_0_ENTRY_IND                     (0U)

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL VARIABLES
 * ===============================================================================================*/

/* Key used for SHE secure boot */
static uint8_t sheBootMacKey[]=
{ 0x0f, 0x0e, 0x0d, 0x0c, 0x0b, 0x0a, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x00 };

/*==================================================================================================
 *                                      GLOBAL CONSTANTS
 * ===============================================================================================*/

extern const uint8_t sheMasterEcuKey[];

/*==================================================================================================
 *                                      GLOBAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 * ===============================================================================================*/

static void HSE_ConfigCoreResetEntry(uint32_t primarySmrMap, uint32_t pPrimaryStartAddr,
    uint32_t altSmrMap, uint32_t pAlternateStartAddr);
static void HSE_ConfigPrimarySmrForShe(uint32_t pSrc, uint32_t pDest, uint32_t len);

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 * ===============================================================================================*/

/*
    Function: HSE_ConfigPrimarySmrForShe
    @brief    Installing the primary SMR for SHE
 */
static void HSE_ConfigPrimarySmrForShe(uint32_t pSrc, uint32_t pDest, uint32_t len)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;
    /* An empty slot key value used as MASTER_ECU_KEY authentification key for an empy master key slot. */
    uint8_t emptySlotValue[] ={ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    /* Configure a SMR entry for Advanced Secure Boot */
    hseSmrEntry_t smrEntry = {
        .configFlags = (HSE_SMR_CFG_FLAG_QSPI_FLASH|HSE_SMR_CFG_FLAG_INSTALL_AUTH),     /* Indicate that APP is in QSPI and verification should be done on provided signature */
        .pSmrDest = pDest,                                                              /* Indicate where to copy app code before boot and authentication (SRAM address) */

        /* Reference to the SHE_BOOT_MAC_KEY - triggers SHE based secure boot */
        .authKeyHandle = NVM_SHE_BOOT_KEY_HANDLE,

        /* Provide input and signature of the SMR to be verified */
        .pSmrSrc = pSrc,                                                                /* Start of APP code (the source address in external flash - QSPI) */
        .smrSize = len,                                                                 /* Length of APP code */

        .smrDecrypt.decryptKeyHandle = HSE_SMR_DECRYPT_KEY_HANDLE_NOT_USED,             /* Plain SMR, encryption not used. */
    };

    /* Load MASTER_ECU_KEY */
    srvResponse = HSE_SheLoadKey(emptySlotValue, sheMasterEcuKey, SHE_MASTER_ECU_KEY_ENTRY, SHE_MASTER_ECU_KEY_ENTRY, 0x01, 0x00, 0x00);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
    /* Load BOOT_MAC_KEY */
    srvResponse = HSE_SheLoadKey(sheMasterEcuKey, sheBootMacKey, SHE_MASTER_ECU_KEY_ENTRY, SHE_BOOT_MAC_KEY_ENTRY, 0x01, 0x00, 0x00);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);

    /* Install SMR Entry */
    srvResponse = HSE_InstallSmrEntry(SMR_PRIMARY_CODE_ENTRY_IND, &smrEntry, (uint8_t *)pSrc, len, NULL, NULL, 0U, 0U, NULL, NULL);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}

/*
    Function: HSE_ConfigCoreResetEntry
    @brief    Installing the core reset entry for M7_0
 */
static void HSE_ConfigCoreResetEntry(uint32_t primarySmrMap, uint32_t pPrimaryStartAddr, uint32_t altSmrMap, uint32_t pAlternateStartAddr)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Configure a CR entry for Advanced Secure Boot */
    hseCrEntry_t crEntry = {
        .coreId = HSE_APP_CORE0,                            /* Define the behavior for core 0 - M7_0 */
        .preBootSmrMap = primarySmrMap,                     /* Tie it to the verification of primary SMR previously installed (index 0) */
        .pPassReset = pPrimaryStartAddr,                    /* Entry point - address of the first instruction */
        .altPreBootSmrMap = altSmrMap,                      /* Alternative SMR map - Tie it to the verification of alternate SMR previously installed (index 1) */
        .pAltReset = pAlternateStartAddr,                   /* Alternative resset address - address of the first instruction in case it boots from Alternate SMR */
        .crSanction = HSE_CR_SANCTION_KEEP_CORE_IN_RESET,   /* Sanction in case both SMR(s) verifications fail - keep core in reset */
        .startOption = HSE_CR_AUTO_START,                   /* The core will be started by HSE automatically at init time */
    };

    /* Install CR Entry */
    srvResponse = HSE_InstallCoreResetEntry(CR_M7_0_ENTRY_IND, &crEntry);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}


/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/


/*
    Function: HSE_ConfigSheSecureBoot
    @brief    Configure SHE Secure Boot
    @detailed Installs master key, boot MAC key and installs SMR/CR entry.
*/
void HSE_ConfigSheSecureBoot(void)
{
    uint32_t primarySmrMap = 0UL;
    uint32_t pPrimaryStartAddr = 0UL;

    /* Install the SMR for primary code image */
    if(ADDR_NOT_NULL(IVT.pApp))
    {
        hseAppHeader_t *pAppHeader = (hseAppHeader_t *)IVT.pApp;
        uint32_t pAppSource = IVT.pApp + sizeof(hseAppHeader_t);
        uint32_t pAppDest = pAppHeader->pAppDestAddres;
        uint32_t codeLen = pAppHeader->codeLength;
        pPrimaryStartAddr = pAppHeader->pAppStartEntry;
        primarySmrMap = SMR_PRIMARY_MAP;

        HSE_ConfigPrimarySmrForShe(pAppSource, pAppDest, codeLen);
    }

    /* Install the Core Reset entry linked with the installed SMR */
    HSE_ConfigCoreResetEntry(primarySmrMap, pPrimaryStartAddr, 0UL, 0UL);
}


#endif /* USE_SHE_SECURE_BOOT */

#endif /* APP_HSE_FW_INSTALL_SEC_BOOT */

#ifdef __cplusplus
}
#endif

/** @} */
