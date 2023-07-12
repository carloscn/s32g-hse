/**
*   @file    hse_secure_boot.c
*
*   @brief   Secure Boot configuration.
*   @details Contains definitions of HSE services used for configuring (Advanced/Basic) Secure Boot.
*
*   @addtogroup [SECURE_BOOT]
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

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/

#define IVT_BOOT_CFG_WORD_BOOT_SEQ_POS            (3UL)
#define IVT_BOOT_CFG_WORD_BOOT_SEQ                (1UL << IVT_BOOT_CFG_WORD_BOOT_SEQ_POS)

#define BOOT_IMG_TAG_LEN                          (16UL)

#if defined(USE_ADVANCED_SECURE_BOOT)
    #define HSE_SMR_ENTRY_CMAC_TAG_LENGTH         (16U)
    #define M7_1_START_ADDR                       (0x34180000UL) /* Entry point for M7_1 */

    #define SMR_EMPTY_MAP                         (0U)
    #define SMR_PRIMARY_CODE_ENTRY_IND            (0U)
    #define SMR_PRIMARY_MAP                       (1UL << SMR_PRIMARY_CODE_ENTRY_IND)
    #define SMR_BACKUP_CODE_ENTRY_IND             (1U)
    #define SMR_BACKUP_MAP                        (1UL << SMR_BACKUP_CODE_ENTRY_IND)
    #define SMR_CR_ON_DEMAND_ENTRY_IND            (2U)
    #define SMR_CR_ON_DEMAND_MAP                  (1UL << SMR_CR_ON_DEMAND_ENTRY_IND)

    #define CR_M7_0_ENTRY_IND                     (0U)
    #define CR_M7_1_ENTRY_IND                     (1U)
#endif

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL VARIABLES
 * ===============================================================================================*/

static hseAttrSmrCoreStatus_t coreStatus = {0U};

#if defined(USE_ADVANCED_SECURE_BOOT)
/* ECC NIST-P256 Key Pair */
uint8_t eccP256BootKeyPub[] =
{
    /*Qx*/
    0xd6, 0x60, 0x62, 0x71, 0x13, 0x1e, 0x7e, 0x7e, 0x61, 0x7a, 0x81, 0xaa, 0x11, 0xf0, 0x9e, 0x7e,
    0xd5, 0x63, 0x11, 0x82, 0x88, 0x23, 0x36, 0x7a, 0x86, 0x9b, 0x45, 0x40, 0x40, 0xb3, 0xf9, 0x05,
    /*Qy*/
    0xcf, 0x48, 0x97, 0x76, 0x61, 0x31, 0xaa, 0x8b, 0x7f, 0x80, 0x45, 0x3a, 0x15, 0xbf, 0x90, 0xf7,
    0x51, 0x78, 0x78, 0x57, 0x9d, 0x5a, 0x4f, 0x97, 0x3a, 0xea, 0x5b, 0xb1, 0x15, 0x42, 0xe0, 0x7f
};
uint8_t eccP256BootKeyPriv[] =
{
    /*k*/
    0x00, 0xd0, 0x07, 0xe1, 0xb9, 0xaf, 0xcc, 0x31, 0x2e, 0xec, 0x9c, 0xec, 0xff, 0xa0, 0x28, 0x07,
    0x52, 0xbb, 0xd1, 0x95, 0x31, 0x82, 0xed, 0xef, 0x12, 0xf3, 0xfc, 0x36, 0x6e, 0x8f, 0x43, 0x56
};
/* RSA 2048 Key Pair */
static uint8_t rsa2048BootKeyN[] =
{ 0xcc, 0x83, 0x0b, 0x10, 0xc5, 0xf2, 0xa6, 0x2d, 0xd5, 0xd7, 0x07, 0x55, 0x4f, 0x14, 0x9b, 0x6f, 0x52, 0x94, 0xe4, 0x82, 0x88, 0x9d, 0x8a, 0x48, 0xe7, 0x5e, 0x25, 0x39, 0x08, 0xcf, 0xb6, 0x4e, 0x4d, 0xf4, 0xae, 0x22, 0x5e, 0xee, 0x00, 0x31, 0x9e, 0xe7, 0x89, 0xc1, 0xba, 0x57, 0x21, 0xef, 0x0a, 0x64, 0x9a, 0x8c, 0xd4, 0x01, 0x8b, 0x1d, 0xe0, 0xaf, 0x06, 0xbb, 0xd7, 0x7a, 0xd3, 0x28, 0x94, 0xb0, 0x36, 0xb2, 0x1e, 0xc7, 0x29, 0xbb, 0xd1, 0x09, 0x7b, 0x34, 0xf2, 0x0e, 0x07, 0x0e, 0xbb, 0x29, 0xf9, 0x18, 0xda, 0xb1, 0x02, 0xe0, 0x60, 0x4f, 0x19, 0x19, 0xc4, 0x58, 0x05, 0x80, 0xbf, 0x69, 0x2e, 0xad, 0x54, 0x14, 0x05, 0x39, 0x4d, 0xa0, 0xa9, 0xad, 0x79, 0x1a, 0xe8, 0x39, 0xd0, 0xae, 0x60, 0x4b, 0x48, 0x0b, 0x5d, 0xe5, 0xe9, 0x0f, 0x88, 0xa4, 0xdc, 0x14, 0x43, 0x4f, 0xb6, 0x9c, 0xa9, 0xb4, 0x05, 0xc7, 0xe9, 0xc0, 0x4a, 0x70, 0x85, 0x51, 0x5c, 0x8a, 0x21, 0x85, 0x2a, 0x61, 0xf6, 0xd3, 0x6e, 0xd7, 0x66, 0x23, 0x81, 0x4c, 0x42, 0x3b, 0xcc, 0x4f, 0x22, 0xea, 0xfb, 0xa0, 0x95, 0x46, 0x14, 0x60, 0x2b, 0xa5, 0xe9, 0x48, 0xaa, 0x75, 0x31, 0x07, 0xb3, 0x14, 0xad, 0x1c, 0xe6, 0x94, 0xea, 0x99, 0xf0, 0x90, 0xbc, 0xb4, 0xe2, 0x00, 0x74, 0x1a, 0xf5, 0x44, 0x5f, 0xfa, 0x55, 0xc9, 0x76, 0x34, 0x80, 0xea, 0x6c, 0xee, 0x5d, 0xac, 0x0b, 0xe3, 0x0c, 0x31, 0xe7, 0xd1, 0xc5, 0xeb, 0xae, 0x20, 0x6a, 0x3c, 0x2d, 0x59, 0x55, 0xca, 0x29, 0x17, 0xa7, 0x4b, 0xec, 0x76, 0xea, 0xe0, 0x29, 0x37, 0x67, 0xf0, 0x09, 0x0f, 0x92, 0x93, 0x92, 0x46, 0x1a, 0x6d, 0x86, 0x89, 0x6c, 0x9e, 0xce, 0x56, 0xad, 0xa9, 0x12, 0xe6, 0x79, 0x56, 0x6c, 0x23, 0x67, 0x29 };
static uint8_t rsa2048BootKeyE[] =
{ 0x01, 0x00, 0x01 };
static uint8_t rsa2048BootKeyD[] =
{ 0x4b, 0x60, 0x85, 0x44, 0x92, 0x60, 0xe3, 0xe5, 0x02, 0xea, 0xf5, 0x35, 0xf9, 0x26, 0xb4, 0x3f, 0x6c, 0xa5, 0x9a, 0x2f, 0x8e, 0x60, 0xda, 0x66, 0x12, 0x78, 0xbd, 0xa9, 0x6e, 0xd8, 0xf7, 0xed, 0x96, 0x87, 0xf7, 0x62, 0x8d, 0xb0, 0x94, 0xfb, 0xb5, 0x00, 0xcb, 0xe2, 0x4e, 0x66, 0xed, 0x07, 0xe8, 0xc1, 0xb9, 0xc0, 0xec, 0x27, 0x01, 0x7a, 0x6a, 0xa4, 0xb8, 0x0b, 0xa5, 0xd9, 0x0c, 0x58, 0xe9, 0xac, 0xa5, 0x0c, 0x33, 0x91, 0xde, 0x8c, 0xed, 0xf7, 0xdb, 0xa4, 0x61, 0x0e, 0xd0, 0x85, 0x1a, 0x70, 0xd6, 0xf1, 0xd5, 0x30, 0xe6, 0xc9, 0x82, 0x55, 0xc4, 0xff, 0x9d, 0x41, 0x80, 0x0d, 0xba, 0xfe, 0xee, 0x88, 0x4d, 0xf3, 0xef, 0x14, 0xf6, 0xca, 0x9f, 0x9f, 0x63, 0x82, 0x8a, 0x53, 0x3c, 0xd9, 0xf8, 0x7d, 0xe6, 0xb8, 0xe1, 0xcb, 0xea, 0x81, 0xa2, 0x30, 0x79, 0x39, 0x32, 0xb1, 0x56, 0xca, 0x0e, 0x9d, 0xbe, 0xe5, 0x3d, 0x02, 0x09, 0x2f, 0x4c, 0xa0, 0x68, 0x43, 0x04, 0xd6, 0xad, 0xe8, 0x26, 0xd8, 0x32, 0x7c, 0x8d, 0x68, 0x73, 0x7d, 0xdb, 0x00, 0xf0, 0x63, 0x37, 0xc6, 0x1d, 0x63, 0xc1, 0x0e, 0x57, 0x4f, 0xeb, 0xcf, 0x22, 0x96, 0xaf, 0x1f, 0xdc, 0xf4, 0x7a, 0x96, 0xc3, 0xfd, 0xb9, 0x18, 0xe7, 0x5f, 0x2c, 0x43, 0x05, 0xad, 0xa4, 0x20, 0x84, 0x60, 0x04, 0x48, 0x54, 0xd2, 0x0c, 0x45, 0x45, 0xb1, 0x5f, 0xac, 0x59, 0x0a, 0xff, 0xc7, 0x7d, 0x9f, 0x47, 0xca, 0xa6, 0x04, 0xe5, 0xc7, 0xa4, 0x05, 0xd9, 0x07, 0x75, 0xd0, 0x0f, 0xef, 0x70, 0x8b, 0x8c, 0xca, 0x73, 0x2b, 0x78, 0xc4, 0x9c, 0x2d, 0xab, 0x84, 0xb7, 0x24, 0x05, 0x4a, 0x04, 0xce, 0x41, 0x7b, 0x32, 0xcf, 0x9e, 0x5c, 0x1a, 0x4c, 0x1a, 0x27, 0x1d, 0x19, 0x96, 0x47, 0x5b, 0x21, 0xd5, 0x81 };
/* AES key for M7_1 dummy code authentication in plain */
static uint8_t aesCmacAuthKey[] =
{ 0x1f, 0x32, 0x87, 0x0a, 0x2e, 0x59, 0x55, 0xec, 0xc4, 0xee, 0x2f, 0xfb, 0x57, 0x49, 0xb1, 0x6b };
/* AES key and IV for M7_1 dummy code encryption */
static uint8_t aesCtrKey[] =
{ 0x0e, 0x09, 0xf5, 0xf0, 0x17, 0x22, 0x09, 0xb8, 0x9b, 0xa1, 0xfb, 0xf7, 0x8e, 0x58, 0x50, 0x6e };
static const uint8_t aesCtrIV[] =
{ 0xd0, 0x0e, 0x02, 0x4d, 0x52, 0x51, 0xaa, 0xb5, 0xd2, 0x6d, 0x01, 0x0e, 0xb2, 0xa6, 0xd2, 0x9e };
/* Code for M7_1 on demand secure boot example */
static const uint32_t dummyCode[] =
{
    /* Infinite loop program */
    0x00000000, (M7_1_START_ADDR + 0x25UL), 0x00000000, 0x00000000,
    0x00000000, 0x00000000,                 0x00000000, 0x00000000,
    0x00000000, 0xFFFEF7FF,                 0x00000000, 0x00000000,
    /* My secret code tag */
	0x20794d20, 0x72636573,                 0x63207465, 0x2065646f
};
#endif /* defined(USE_ADVANCED_SECURE_BOOT) */

/*==================================================================================================
 *                                      GLOBAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 * ===============================================================================================*/

static void HSE_ConfigSecureBoot(void);
static void UpdateIvt(void);

#if defined(USE_ADVANCED_SECURE_BOOT)
    static void HSE_ConfigCoreResetEntry(uint32_t primarySmrMap, uint32_t pPrimaryStartAddr,
                                         uint32_t altSmrMap, uint32_t pAlternateStartAddr);
    static void HSE_ConfigAdvancedSecureBoot_M7_0(void);
    static void HSE_ConfigAdvancedSecureBoot_M7_1(void);
    static void HSE_ConfigPrimarySmr(uint32_t pSrc, uint32_t pDest, uint32_t len);
    static void HSE_ConfigAlternateSmr(uint32_t pSrc, uint32_t pDest, uint32_t len);
    static void HSE_ConfigEncryptedSmr(uint32_t pSrc, uint32_t pDest, uint32_t len);
    static void HSE_ConfigOnDemandCoreResetEntry(uint32_t primarySmrMap, uint32_t pPrimaryStartAddr);
#elif defined(USE_BASIC_SECURE_BOOT)
    static void HSE_ConfigBasicSecureBoot(void);
#endif /* defined(USE_ADVANCED_SECURE_BOOT) */

#if defined(USE_DCD_SELFTEST)
static void HSE_SignImages(void);
#endif /* defined(USE_DCD_SELFTEST) */

#if defined(USE_BASIC_SECURE_BOOT) || defined(USE_DCD_SELFTEST)
static void HSE_SignBootImageAndBackup
(
    const uint8_t headerTag,
    const uint32_t pImg,
    const uint32_t pImgTagAddr,
    const uint32_t pImgBackup,
    const uint32_t pImgBackupTagAddr
);
#endif /* defined(USE_BASIC_SECURE_BOOT) || defined(USE_DCD_SELFTEST) */

#if defined(USE_SHE_SECURE_BOOT)
extern void HSE_ConfigSheSecureBoot(void);
#endif /* USE_SHE_SECURE_BOOT */

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 * ===============================================================================================*/

/*
    Function: HSE_ConfigSecureBoot
    @brief    HSE secure boot configuration - ASB/BSB
 */
static void HSE_ConfigSecureBoot(void)
{
#if defined(USE_BASIC_SECURE_BOOT)

    /* Sign the application image using a ADK/P */
    HSE_ConfigBasicSecureBoot();

#else /* ASB/SHE_SB */

    /* Check whether HSE is configured (SYS_IMG is present) */
    if(! (CHECK_HSE_STATUS(HSE_STATUS_INSTALL_OK)) )
        HSE_Config();

    #if defined(USE_ADVANCED_SECURE_BOOT)
    /* Install SMR/CR entries for M7_0 core */
    HSE_ConfigAdvancedSecureBoot_M7_0();
    /* Install SMR/CR entries for M7_1 core */
    HSE_ConfigAdvancedSecureBoot_M7_1();
    #elif defined(USE_SHE_SECURE_BOOT)
    /* Install SMR/CR entries */
    HSE_ConfigSheSecureBoot();
    #endif /* USE_ADVANCED_SECURE_BOOT || USE_SHE_SECURE_BOOT */

    /* Save HSE updated configuration to NVM */
    HSE_SaveConfiguration();

#endif /* BSB/ASB/SHE_SB */
}

#if defined(USE_ADVANCED_SECURE_BOOT)

/*
    Function: HSE_ConfigAdvancedSecureBoot_M7_0
    @brief    Configure Advanced Secure Boot for M7_0 core
    @detailed Installs boot key, Authenticates APP and Installs SMR/CR entries
*/
static void HSE_ConfigAdvancedSecureBoot_M7_0(void)
{
    uint32_t primarySmrMap = 0UL;
    uint32_t alternateSmrMap = 0UL;
    uint32_t pPrimaryStartAddr = 0UL;
    uint32_t pAlternateStartAddr = 0UL;

    /* IMPORTANT: The advanced secure boot application does not need to have the application header.
    *       In this case, for easier manipulation of application start address, entry point, length and tag address,
    *       the application bootloader from BSB (basic secure boot) is used.
    *       Also the address can be independent of IVT (not need to be specified in IVT).
    */

    /* Install the SMR for primary code image */
    if(ADDR_NOT_NULL(IVT.pApp))
    {
        hseAppHeader_t *pAppHeader = (hseAppHeader_t *)IVT.pApp;
        uint32_t pAppSource = IVT.pApp + sizeof(hseAppHeader_t);
        uint32_t pAppDest = pAppHeader->pAppDestAddres;
        uint32_t codeLen = pAppHeader->codeLength;
        pPrimaryStartAddr = pAppHeader->pAppStartEntry;
        primarySmrMap = SMR_PRIMARY_MAP;

        HSE_ConfigPrimarySmr(pAppSource, pAppDest, codeLen);
    }

    /* Install the SMR for backup code image */
    if(ADDR_NOT_NULL(IVT.pApp_bck))
    {
        hseAppHeader_t *pAppHeader = (hseAppHeader_t *)IVT.pApp_bck;
        uint32_t pAppSource = IVT.pApp_bck + sizeof(hseAppHeader_t);
        uint32_t pAppDest = pAppHeader->pAppDestAddres;
        uint32_t codeLen = pAppHeader->codeLength;
        pAlternateStartAddr = pAppHeader->pAppStartEntry;
        alternateSmrMap = SMR_BACKUP_MAP;

        HSE_ConfigAlternateSmr(pAppSource, pAppDest, codeLen);
    }

    /* Install the Core Reset entry linked with the installed SMR */
    HSE_ConfigCoreResetEntry(primarySmrMap, pPrimaryStartAddr, alternateSmrMap, pAlternateStartAddr);
}

/*
    Function: HSE_ConfigAdvancedSecureBoot_M7_1
    @brief    Configure Advanced Secure Boot for M7_1 core
    @detailed Installs an encrypted SMR and a CR entry for M7_1 core
              The encrypted SMR source address is between the Application Bootloader and
              Application Bootloader Backup. An offset should be considered after the Application Bootloader
              for the max signature length to cover the largest signature area after the code area.
*/
static void HSE_ConfigAdvancedSecureBoot_M7_1(void)
{
    uint32_t pEncryptedSmrStartAddr = 0UL;
    uint32_t encryptedSmrMap = 0UL;
    uint32_t reservedLen = BITS_TO_BYTES(HSE_MAX_RSA_KEY_BITS_LEN); /* Reserved for max signature length */

    /* Install the encrypted SMR entry */
    if(ADDR_NOT_NULL(IVT.pApp))
    {
        hseAppHeader_t *pAppHeader = (hseAppHeader_t *)IVT.pApp;
        uint32_t pAppSource = ALIGN_TOP((IVT.pApp + sizeof(hseAppHeader_t) + pAppHeader->codeLength + reservedLen),
                                         FLASH_PAGE_SIZE);
        uint32_t pAppDest = M7_1_START_ADDR;
        uint32_t codeLen = sizeof(dummyCode);
        pEncryptedSmrStartAddr = pAppDest;
        encryptedSmrMap = SMR_CR_ON_DEMAND_MAP;

        HSE_ConfigEncryptedSmr(pAppSource, pAppDest, codeLen);
    }

    /* Install the On Demand Core Reset entry */
    HSE_ConfigOnDemandCoreResetEntry(encryptedSmrMap, pEncryptedSmrStartAddr);
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

/*
    Function: HSE_ConfigOnDemandCoreResetEntry
    @brief    Installing the on demand core reset entry for M7_1
 */
static void HSE_ConfigOnDemandCoreResetEntry(uint32_t crOnDemandSmrMap, uint32_t pCrOnDemandStartAddr)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Configure a CR entry for Advanced Secure Boot */
    hseCrEntry_t crEntry = {
        .coreId = HSE_APP_CORE1,                            /* Define the behavior for core 1 - M7_1 */
        .preBootSmrMap = crOnDemandSmrMap,                  /* Tie it to the verification of alternate SMR previously installed (index 1) */
        .pPassReset = pCrOnDemandStartAddr,                 /* Entry point - address of the first instruction */
        .crSanction = HSE_CR_SANCTION_KEEP_CORE_IN_RESET,   /* Sanction in case both SMR(s) verifications fail - keep core in reset */
        .startOption = HSE_CR_ON_DEMAND                     /* The core will be started on demand by request to HSE */
        /* No backup or post_boot entries linked to this CR */
    };

    /* Install CR Entry */
    srvResponse = HSE_InstallCoreResetEntry(CR_M7_1_ENTRY_IND, &crEntry);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}


/*
    Function: HSE_ConfigPrimarySmr
    @brief    Installing the primary SMR
 */
static void HSE_ConfigPrimarySmr(uint32_t pSrc, uint32_t pDest, uint32_t len)
{
    uint8_t signR[BITS_TO_BYTES(HSE_MAX_ECC_KEY_BITS_LEN)] = {0};
    uint8_t signS[BITS_TO_BYTES(HSE_MAX_ECC_KEY_BITS_LEN)] = {0};
    uint32_t rLen = BITS_TO_BYTES(HSE_MAX_ECC_KEY_BITS_LEN);
    uint32_t sLen = BITS_TO_BYTES(HSE_MAX_ECC_KEY_BITS_LEN);
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* In this example the signature will be programmed in QSPI after the BSB tag location (16 bytes after end of the code). */
    uint32_t pSignAddr = pSrc + len + BOOT_IMG_TAG_LEN;

    /* Configure a SMR entry for Advanced Secure Boot */
    hseSmrEntry_t smrEntry = {
        .configFlags = (HSE_SMR_CFG_FLAG_QSPI_FLASH|HSE_SMR_CFG_FLAG_INSTALL_AUTH),     /* Indicate that APP is in QSPI and verification should be done on provided signature */
        .pSmrDest = pDest,                                                              /* Indicate where to copy app code before boot and authentication (SRAM address) */

        /* Provide key and authentication scheme used for verification - ECDSA with SHA256 is used */
        .authKeyHandle = NVM_ECC_BOOT_KEY_HANDLE,
        .authScheme.sigScheme.signSch = HSE_SIGN_ECDSA,
        .authScheme.sigScheme.sch.ecdsa.hashAlgo = HSE_HASH_ALGO_SHA2_256,

        /* Provide input and signature of the SMR to be verified */
        .pSmrSrc = pSrc,                                                                /* Start of APP code (the source address in external flash - QSPI) */
        .smrSize = len,                                                                 /* Length of APP code */
        .pInstAuthTag[0] = pSignAddr,                                                   /* Location of the signature - (S component) | Can be anywhere in flash; */
        .pInstAuthTag[1] = (pSignAddr + BITS_TO_BYTES(HSE_MAX_ECC_KEY_BITS_LEN)),       /* Location of the signature - (R component) | Can be anywhere in flash;
                                                                                           In this example it will be programmed after the S component (for which max len is reserved) */
        .smrDecrypt.decryptKeyHandle = HSE_SMR_DECRYPT_KEY_HANDLE_NOT_USED,             /* Plain SMR, encryption not used. */
    };

    /* Install the BOOT key - used for SMR authentication */
    srvResponse = HSE_ImportEccKey(NVM_ECC_BOOT_KEY_HANDLE, HSE_KEY_TYPE_ECC_PUB,
        (HSE_KF_USAGE_VERIFY), HSE_EC_SEC_SECP256R1, eccP256BootKeyPub, NULL);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);

    /* Generate and program the signature over application bootloader using HSE.
     * This step can be skipped if SMR is already programmed signed in flash */
    {
        /* Install a copy of BOOT key in RAM (pair) used for SMR authentication */
        srvResponse = HSE_ImportEccKey(RAM_ECC_PAIR_KEY_HANDLE, HSE_KEY_TYPE_ECC_PAIR,
            (HSE_KF_USAGE_SIGN | HSE_KF_USAGE_VERIFY), HSE_EC_SEC_SECP256R1,
            eccP256BootKeyPub, eccP256BootKeyPriv);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Authenticate APP using HSE */
        srvResponse = HSE_Ecdsa(HSE_AUTH_DIR_GENERATE, HSE_HASH_ALGO_SHA2_256,
            RAM_ECC_PAIR_KEY_HANDLE, (uint8_t *)pSrc, len,
            FALSE, signR, signS, &rLen, &sLen);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Program the App signature(s) to FLASH */
        #if defined(FLASH_SUPPORT)
        ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(pSignAddr,
            &signR[0], rLen));
        ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(pSignAddr +
            BITS_TO_BYTES(HSE_MAX_ECC_KEY_BITS_LEN), &signS[0], sLen));
        #endif
    }

    /* Install SMR Entry */
    srvResponse = HSE_InstallSmrEntry(SMR_PRIMARY_CODE_ENTRY_IND, &smrEntry, (uint8_t *)pSrc,
        len, signR, signS, rLen, sLen, NULL, NULL);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}

/*
    Function: HSE_ConfigAlternateSmr
    @brief    Installing the alternate (backup) SMR
 */
static void HSE_ConfigAlternateSmr(uint32_t pSrc, uint32_t pDest, uint32_t len)
{
    uint8_t sign[BITS_TO_BYTES(HSE_MAX_RSA_KEY_BITS_LEN)] = {0};
    uint32_t signLen = BITS_TO_BYTES(HSE_MAX_RSA_KEY_BITS_LEN);
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* In this example the signature will be programmed in QSPI after the BSB tag location (16 bytes after end of the code). */
    uint32_t pSignAddr = pSrc + len + BOOT_IMG_TAG_LEN;

    /* Configure a SMR entry for Advanced Secure Boot */
    hseSmrEntry_t smrEntry = {
        .configFlags = (HSE_SMR_CFG_FLAG_QSPI_FLASH|HSE_SMR_CFG_FLAG_INSTALL_AUTH),     /* Indicate that APP is in QSPI and verification should be done on provided signature */
        .pSmrDest = pDest,                                                              /* Indicate where to copy app code before boot and authentication (SRAM address) */

        /* Provide key and authentication scheme used for verification - RSA PKCS1v15 with SHA256 is used */
        .authKeyHandle = NVM_RSA2048_BOOT_KEY_HANDLE,
        .authScheme.sigScheme.signSch = HSE_SIGN_RSASSA_PKCS1_V15,
        .authScheme.sigScheme.sch.rsaPkcs1v15.hashAlgo = HSE_HASH_ALGO_SHA2_256,

        /* Provide input and signature of the SMR to be verified */
        .pSmrSrc = pSrc,                                                                /* Start of APP code (the source address in external flash - QSPI) */
        .smrSize = len,                                                                 /* Length of APP code */
        .pInstAuthTag[0] = pSignAddr,                                                   /* Location of the RSA signature | Can be anywhere in flash; */
        .smrDecrypt.decryptKeyHandle = HSE_SMR_DECRYPT_KEY_HANDLE_NOT_USED,             /* Plain SMR, encryption not used. */
    };

    /* Install the BOOT key - used for SMR authentication */
    srvResponse = HSE_ImportRsaKey(NVM_RSA2048_BOOT_KEY_HANDLE,
        HSE_KEY_TYPE_RSA_PUB, (HSE_KF_USAGE_VERIFY),
        rsa2048BootKeyN, ARRAY_SIZE(rsa2048BootKeyN),
        rsa2048BootKeyE, ARRAY_SIZE(rsa2048BootKeyE), NULL);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);

    /* Generate and program the signature over application bootloader using HSE.
     * This step can be skipped if SMR is already programmed signed in flash */
    {
        /* Install a copy of BOOT key (pair) used for SMR authentication */
        srvResponse = HSE_ImportRsaKey(NVM_RSA2048_BOOT_COPY_KEY_HANDLE,
            HSE_KEY_TYPE_RSA_PAIR, (HSE_KF_USAGE_SIGN | HSE_KF_USAGE_VERIFY),
            rsa2048BootKeyN, ARRAY_SIZE(rsa2048BootKeyN),
            rsa2048BootKeyE, ARRAY_SIZE(rsa2048BootKeyE), rsa2048BootKeyD);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Authenticate APP using HSE */
        srvResponse = HSE_RsaPkcs1v15(HSE_AUTH_DIR_GENERATE, HSE_HASH_ALGO_SHA2_256,
            NVM_RSA2048_BOOT_COPY_KEY_HANDLE, (uint8_t *)pSrc, len, FALSE, sign, &signLen);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Consistency check on key pair - verify generated signature */
        srvResponse = HSE_RsaPkcs1v15(HSE_AUTH_DIR_VERIFY, HSE_HASH_ALGO_SHA2_256,
            NVM_RSA2048_BOOT_KEY_HANDLE, (uint8_t *)pSrc, len, FALSE, sign, &signLen);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Program the App signature(s) to FLASH */
        #if defined(FLASH_SUPPORT)
        ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(pSignAddr, &sign[0], signLen));
        #endif
    }

    /* Install SMR Entry */
    srvResponse = HSE_InstallSmrEntry(SMR_BACKUP_CODE_ENTRY_IND, &smrEntry, (uint8_t *)pSrc,
        len, sign, NULL, signLen, 0UL, NULL, NULL);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}

/*
    Function: HSE_ConfigEncryptedSmr
    @brief    Installing the encrypted SMR (for M7_1)
 */
static void HSE_ConfigEncryptedSmr(uint32_t pSrc, uint32_t pDest, uint32_t len)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;
    uint8_t authTag[HSE_SMR_ENTRY_CMAC_TAG_LENGTH] = {0};
    uint32_t authTagLen = HSE_SMR_ENTRY_CMAC_TAG_LENGTH;

    /* In this example the signature will be programmed in QSPI after the code area. */
    uint32_t pAuthTagAddr = ALIGN_TOP((pSrc + len), 16);

    /* Configure an encrypted SMR entry for Advanced Secure Boot */
    hseSmrEntry_t smrEntry = {
        .configFlags = (HSE_SMR_CFG_FLAG_QSPI_FLASH | HSE_SMR_CFG_FLAG_INSTALL_AUTH),     /* Indicate that verification should be done on provided signature */
        .pSmrDest = pDest,                                                                /* Indicate where to copy code before boot and authentication (SRAM address) */

        /* Provide key and authentication scheme used for verification */
        .authKeyHandle = NVM_ENCRYPTED_SMR_AUTH_KEY_HANDLE,
        .authScheme.macScheme.macAlgo = HSE_MAC_ALGO_CMAC,
        .authScheme.macScheme.sch.cmac.cipherAlgo = HSE_CIPHER_ALGO_AES,

        /* Provide input and signature of the SMR to be verified */
        .pSmrSrc = pSrc,                                                                /* Start of APP code (the source address in external flash - QSPI) */
        .smrSize = len,                                                                 /* Length of APP code */
        .pInstAuthTag[0] = pAuthTagAddr,                                                /* Location of the CMAC signature | Can be anywhere in flash */
        .smrDecrypt.decryptKeyHandle = NVM_ENCRYPTED_SMR_DECRYPT_KEY_HANDLE,            /* Enabling encryption by providing the SMR decryption key handle */
        .smrDecrypt.pGmacTag = NULL_HOST_ADDR                                           /* Tag used for GCM. If it set NULL, AES-CTR (instead of GCM) is used for decryption */
    };

    /* Install a key used for SMR authentication */
    srvResponse = HSE_ImportSymKey(NVM_ENCRYPTED_SMR_AUTH_KEY_HANDLE, HSE_KEY_TYPE_AES,
            (HSE_KF_USAGE_VERIFY), aesCmacAuthKey, ARRAY_SIZE(aesCmacAuthKey));
    ASSERT(HSE_SRV_RSP_OK == srvResponse);

    /* Install a key used for SMR decrypt */
    srvResponse = HSE_ImportSymKey(NVM_ENCRYPTED_SMR_DECRYPT_KEY_HANDLE, HSE_KEY_TYPE_AES,
            (HSE_KF_USAGE_SMR_DECRYPT), aesCtrKey, ARRAY_SIZE(aesCtrKey));
    ASSERT(HSE_SRV_RSP_OK == srvResponse);

    /* Generate and program the signature over the code for On Demand Core Reset using HSE.
     * This step can be skipped if SMR is already programmed signed in flash */
    {
        /* Install a copy of the key used for SMR authentication */
        srvResponse = HSE_ImportSymKey(RAM_ENCRYPTED_SMR_AUTH_KEY_HANDLE, HSE_KEY_TYPE_AES,
                (HSE_KF_USAGE_SIGN | HSE_KF_USAGE_VERIFY), aesCmacAuthKey, ARRAY_SIZE(aesCmacAuthKey));
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Install a copy of the key used for SMR decrypt */
        srvResponse = HSE_ImportSymKey(RAM_ENCRYPTED_SMR_ENCRYPT_KEY_HANDLE, HSE_KEY_TYPE_AES,
                (HSE_KF_USAGE_ENCRYPT), aesCtrKey, ARRAY_SIZE(aesCtrKey));
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Authenticate the code for On Demand Core Reset using HSE */
        srvResponse = HSE_Cmac(HSE_AUTH_DIR_GENERATE, RAM_ENCRYPTED_SMR_AUTH_KEY_HANDLE,
            (uint8_t *)&dummyCode[0], len, (uint8_t *)authTag, (uint32_t *)&authTagLen);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Program the code signature to FLASH */
        #if defined(FLASH_SUPPORT)
        ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(pAuthTagAddr, &authTag[0], HSE_SMR_ENTRY_CMAC_TAG_LENGTH));
        #endif

        /* Encrypt the code for On Demand Core Reset using HSE */
        srvResponse = HSE_AesEncrypt(HSE_CIPHER_BLOCK_MODE_CTR, RAM_ENCRYPTED_SMR_ENCRYPT_KEY_HANDLE,
                (uint8_t*)&aesCtrIV[0], (uint8_t *)&dummyCode[0], len, (uint8_t *)&dummyCode[0]);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Program the App to FLASH */
        #if defined(FLASH_SUPPORT)
        ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(pSrc, (uint8_t *)&dummyCode[0], len));
        #endif
    }

    /* Install SMR Entry */
    srvResponse = HSE_InstallSmrEntry(SMR_CR_ON_DEMAND_ENTRY_IND, &smrEntry, (uint8_t *)pSrc,
        len, authTag, NULL, authTagLen, 0UL, (uint8_t*)&aesCtrIV[0], NULL);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}

#endif /* USE_ADVANCED_SECURE_BOOT */



/*
    Function: HSE_ConfigBasicSecureBoot

    @brief    Generates APP TAG for BSB
    @detailed Authenticate the application using a device specific key
*/
#if defined(USE_BASIC_SECURE_BOOT)
static void HSE_ConfigBasicSecureBoot(void)
{
    uint32_t pAppTagAddr = IVT.pApp + sizeof(hseAppHeader_t) + ((hseAppHeader_t *)IVT.pApp)->codeLength;
    uint32_t pAppBackupTagAddr = IVT.pApp_bck + sizeof(hseAppHeader_t) + ((hseAppHeader_t *)IVT.pApp_bck)->codeLength;

    /* IMPORTANT: ADK/P must be programmed beforehand (AppBL will be signed with a key derived from ADK/P).
                  Check in hse_fuses.c file for an example on how to program ADK/P.
     */
    if(! HSE_IsAdkpProgrammed()) {
        _printf("NOTE: In order to sign the AppBL for BSB the ADK/P must be programmed.\n");
        return;
    }

    /* Sign application (and backup) using BootData Sign/Verify services */
    HSE_SignBootImageAndBackup(HEADER_APP_TAG, IVT.pApp, pAppTagAddr, IVT.pApp_bck, pAppBackupTagAddr);
}
#endif /* USE_BASIC_SECURE_BOOT */

#if defined(USE_BASIC_SECURE_BOOT) || defined(USE_DCD_SELFTEST)
/*
    Function: HSE_SignBootImageAndBackup
    @brief    Helper for signing and verifying boot images (DCD/SelfTest/App in BSB primary and backup)
*/
static void HSE_SignBootImageAndBackup
(
    const uint8_t headerTag,
    const uint32_t pImg,
    const uint32_t pImgTagAddr,
    const uint32_t pImgBackup,
    const uint32_t pImgBackupTagAddr
)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;
    uint8_t tag[BOOT_IMG_TAG_LEN] = {0U};

    /* Check if PRIMARY image is set */
    if(ADDR_NOT_NULL(pImg))
    {
        /* Header tag sanity check */
        ASSERT(headerTag == *((uint8_t *)pImg));

        /* Sign the primary image - 16 bytes MAC */
        srvResponse = HSE_SignBootImage((uint8_t *)pImg, BOOT_IMG_TAG_LEN, tag);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Program the Tag */
        #if defined(FLASH_SUPPORT)
        ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(pImgTagAddr, tag, BOOT_IMG_TAG_LEN));
        #endif

        /* Verify the Tag was generated and programmed correctly */
        ASSERT(HSE_SRV_RSP_OK == (srvResponse = HSE_VerifyBootImage((uint8_t *)pImg)));
    }

    /* Check if BACKUP image is set */
    if(ADDR_NOT_NULL(pImgBackup))
    {
        /* Header tag sanity check */
        ASSERT(headerTag == *((uint8_t *)pImgBackup));

        /* Sign the primary image - 16 bytes MAC */
        srvResponse = HSE_SignBootImage((uint8_t *)pImgBackup, BOOT_IMG_TAG_LEN, tag);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);

        /* Program the Tag */
        #if defined(FLASH_SUPPORT)
        ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(pImgBackupTagAddr, tag, BOOT_IMG_TAG_LEN));
        #endif

        /* Verify the Tag was generated and programmed correctly */
        ASSERT(HSE_SRV_RSP_OK == (srvResponse = HSE_VerifyBootImage((uint8_t *)pImgBackup)));
    }
}
#endif /* defined(USE_BASIC_SECURE_BOOT) || defined(USE_DCD_SELFTEST) */

#if defined(USE_DCD_SELFTEST)
/*
    Function: HSE_SignImages
    @brief    Signing of DCD/SelfTest images that are configured in IVT (primary and backup)
*/
static void HSE_SignImages(void)
{
    hseIvtDcdHdr_t *pImgHeader;
    hseIvtDcdHdr_t *pImgBackupHeader;
    uint16_t imgLen;
    uint16_t imgBackupLen;

    /* IMPORTANT: DCD/SelfTest tags will be written in the 16 bytes after the image (defined by the length provided in the header)
     *            These should be cleared as current example does not erase the area before programming it to flash
     *            On CUT 2.0 ADK/P must be programmed beforehand (IVT/DCD/ST will be signed with a key derived from ADK/P).
     *            Check in hse_fuses.c file for an example on how to do it.
     */
    if( (REV_MAJOR_2 <= S32_GetRevision()) && (! HSE_IsAdkpProgrammed()) ) {
        _printf("NOTE: On rev 2 the ADK/P must be programmed in order to sign IVT/DCD/ST\n");
        return;
    }

    /* Sign SELF_TEST (and backup) using BootData Sign/Verify services */
    pImgHeader = (hseIvtDcdHdr_t *)IVT.pSelfTest;
    pImgBackupHeader = (hseIvtDcdHdr_t *)IVT.pSelfTest_bck;

    if(ADDR_NOT_NULL(IVT.pSelfTest))
        imgLen = (pImgHeader->len[0] << 8U) | (pImgHeader->len[1]);
    if(ADDR_NOT_NULL(IVT.pSelfTest_bck))
        imgBackupLen = (pImgBackupHeader->len[0] << 8U) | (pImgBackupHeader->len[1]);

    HSE_SignBootImageAndBackup(HEADER_SELFTEST_TAG, IVT.pSelfTest, IVT.pSelfTest + imgLen,
        IVT.pSelfTest_bck, IVT.pSelfTest_bck + imgBackupLen);

    /* Sign DCD (and backup) using BootData Sign/Verify services */
    pImgHeader = (hseIvtDcdHdr_t *)IVT.pDCD;
    pImgBackupHeader = (hseIvtDcdHdr_t *)IVT.pDCD_bck;

    if(ADDR_NOT_NULL(IVT.pDCD))
        imgLen = (pImgHeader->len[0] << 8U) | (pImgHeader->len[1]);
    if(ADDR_NOT_NULL(IVT.pDCD_bck))
        imgBackupLen = (pImgBackupHeader->len[0] << 8U) | (pImgBackupHeader->len[1]);

    HSE_SignBootImageAndBackup(HEADER_DCD_TAG, IVT.pDCD, IVT.pDCD + imgLen,
        IVT.pDCD_bck, IVT.pDCD_bck + imgBackupLen);
}

#endif /* defined(USE_DCD_SELFTEST) */

/*
    Function: UpdateIvt
    @brief    Enable Secure Boot by signing the IVT and by setting BOOT_SEQ bit
*/
static void UpdateIvt(void)
{
    hseSrvResponse_t srvResponse;

    /* Set BOOT_SEQ bit */
    IVT.bootCfgWord |= (1UL << 3UL);

    /* Sign the updated IVT - on rev 2, only if ADK/P is programmed */
    if( (REV_MAJOR_1 == S32_GetRevision()) ||
        ((REV_MAJOR_2 <= S32_GetRevision()) && (HSE_IsAdkpProgrammed())) ) {
        srvResponse = HSE_SignBootImage((uint8_t *)&IVT, BOOT_IMG_TAG_LEN, (uint8_t *)&IVT.GMAC[0]);
        ASSERT(HSE_SRV_RSP_OK == srvResponse);
    }

    /* Program updated IVT with secure boot enabled GMAC Tag */
    #if defined(FLASH_SUPPORT)
    ASSERT(FLASH_OP_OK == Flash_WriteData_FromRam(IVT_ADDRESS, (uint8_t *)&IVT, sizeof(IVT)));
    #endif
}

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/

/*
    Function: IsSecureBootEnabled
    @brief    Checks if current IVT configuration does not have the secure boot set (BOOT_SEQ = 0)
    @detailed Verify if the BOOT_SEQ bit is cleared to determine whether secure boot configuration is needed
*/
bool_t IsSecureBootEnabled(void)
{
    return (IVT_BOOT_CFG_WORD_BOOT_SEQ == (IVT.bootCfgWord & IVT_BOOT_CFG_WORD_BOOT_SEQ));
}

/*
    Function: HSE_EnableSecureBoot
    @brief    Secure Boot configuration examples
    @detailed Example HSE services usage for secure boot enablement (SMR/CR entries install / BSB tag generation,
              DCD/SelfTest images signing of FW Blue Image generation from new/current FW pink image)
 */
void HSE_EnableSecureBoot(void)
{
    /* Configure Secure Boot */
    HSE_ConfigSecureBoot();

    /* Transform the current image to blue format (if necessary) */
    #if defined(PINK_TO_BLUE)
    if(DoHseFwUpdate())
    {
        HSE_UpdateFW();
    }
    #endif /* PINK_TO_BLUE */

    /* Sign DCD/Selftest images */
    #if defined(USE_DCD_SELFTEST)
    HSE_SignImages();
    #endif /* USE_DCD_SELFTEST */

    /* Enable secure boot by updating the IVT */
    UpdateIvt();

    _printf("HSE_EnableSecureBoot: OK\n");
}

/*
    Function: HSE_OnDemandSecureBoot_M7_1

    @brief    On demand core reset example
    @detailed Example HSE services usage for on demand core reset
 */
#if defined(USE_ADVANCED_SECURE_BOOT)
void HSE_OnDemandSecureBoot_M7_1(void)
{
    /* Perform the on demand core reset  */
    HSE_OnDemandCoreReset(CR_M7_1_ENTRY_IND);
}
#endif /* USE_ADVANCED_SECURE_BOOT */

/*************************************************************************************************
 * Description: The Status of Cores booted and SMR(s) verified by HSE
*************************************************************************************************/
void HSE_GetCoreStatus(void)
{
    ASSERT(HSE_SRV_RSP_OK == HSE_GetAttribute(HSE_SMR_CORE_BOOT_STATUS_ATTR_ID, sizeof(hseAttrSmrCoreStatus_t), &coreStatus));
}

#endif /* APP_HSE_FW_INSTALL_SEC_BOOT */

#ifdef __cplusplus
}
#endif

/** @} */
