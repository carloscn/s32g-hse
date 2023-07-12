/**
*   @file    hse_she.c
*
*   @brief   Example of HSE SHE services.
*   @details Examples of how to load, export keys and perform basic cryptographic operations.
*
*   @addtogroup hse_she
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
#include "hse_host_mac.h"
#include "hse_host_she.h"
#include "hse_host_cipher.h"
#include "string.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                 LOCAL MACROS and CONSTANTS
==================================================================================================*/
#define BUFF_LEN                       (256U)

/* Test vectors for AES ECB Encryption/Decryption using a NVM key */
static const uint8_t aesEcbPlaintext[] =
{
    0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff
};

static const uint8_t aesEcbCiphertext[] =
{
    0x37, 0xe0, 0xfa, 0x5c, 0xd3, 0xff, 0x69, 0x7b, 0x0a, 0xbb, 0xa0, 0xa9, 0xe7, 0x93, 0xa2, 0x79
};

/* Test vectors for AES CBC Encryption/Decryption a NVM key */
static const uint8_t aesCbcPlaintext[] =
{
    0x6b, 0xc1, 0xbe, 0xe2, 0x2e, 0x40, 0x9f, 0x96, 0xe9, 0x3d, 0x7e, 0x11, 0x73, 0x93, 0x17, 0x2a,
    0xae, 0x2d, 0x8a, 0x57, 0x1e, 0x03, 0xac, 0x9c, 0x9e, 0xb7, 0x6f, 0xac, 0x45, 0xaf, 0x8e, 0x51
};

static const uint8_t aesCbcCiphertext[] =
{
    0x76, 0x49, 0xAB, 0xAC, 0x81, 0x19, 0xB2, 0x46, 0xCE, 0xE9, 0x8E, 0x9B, 0x12, 0xE9, 0x19, 0x7D,
    0x50, 0x86, 0xcb, 0x9b, 0x50, 0x72, 0x19, 0xee, 0x95, 0xdb, 0x11, 0x3a, 0x91, 0x76, 0x78, 0xb2
};

static const uint8_t aesCbcIV[] =
{
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
};

/* Test vectors for AES ECB Encryption/Decryption using a RAM key */
static const uint8_t plaintextRamKey[] =
{
    0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff
};

static const uint8_t ciphertextRamKey[] =
{
    0x69, 0xc4, 0xe0, 0xd8, 0x6a, 0x7b, 0x04, 0x30, 0xd8, 0xcd, 0xb7, 0x80, 0x70, 0xb4, 0xc5, 0x5a
};

/* Test vectors for CMAC generation/verification */
static const uint8_t aesCmacMessage[] =
{
    0x6b, 0xc1, 0xbe, 0xe2, 0x2e, 0x40, 0x9f, 0x96, 0xe9, 0x3d, 0x7e, 0x11, 0x73, 0x93, 0x17, 0x2a
};

static const uint8_t aesCmacTag[] =
{
    0x07, 0x0a, 0x16, 0xb4, 0x6b, 0x4d, 0x41, 0x44, 0xf7, 0x9b, 0xdd, 0x9d, 0xd0, 0x4a, 0x28, 0x7c
};



/* Keys loaded in SHE key slots. */
static const uint8_t sheAesEcbKey[] =
{
    0x1c, 0x2e, 0x33, 0x16, 0x03, 0x1e, 0x22, 0xc2, 0xab, 0xf7, 0x21, 0x68, 0x54, 0x66, 0x21, 0x32
};

static const uint8_t sheAesCbcKey[] =
{
    0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c
};

static const uint8_t sheCmacKey[] =
{
    0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c
};

static const uint8_t ramKey[] =
{
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x00C, 0x0D, 0x0E, 0x0F
};

static const uint8_t IV[] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const uint32_t aesCbcPlaintextLength = ARRAY_SIZE(aesCbcPlaintext);
static const uint32_t aesEcbPlaintextLength = ARRAY_SIZE(aesEcbPlaintext);
static const uint32_t plaintextRamKeyLength = ARRAY_SIZE(plaintextRamKey);
static const uint32_t aesCmacMessageLength = ARRAY_SIZE(aesCmacMessage);
static const uint32_t aesCmacTagLength = ARRAY_SIZE(aesCmacTag);

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

static uint8_t testOutput[BUFF_LEN] =
{
    0x00
};

exampleState_t gLoadKeysExample = NOT_RUN;
exampleState_t gLoadPlainKeyExample = NOT_RUN;
exampleState_t gSheExportKeyExample = NOT_RUN;
exampleState_t gSheCryptoExample = NOT_RUN;

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/* MASTER_ECU_KEY - slot index 1 */
const uint8_t sheMasterEcuKey[] =
{
    0x00, 0x01, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
};
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/* Array to get the Key Handle Value for Key IDs */
extern uint32_t sheKeyCatalog[15];

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*******************************************************************************
 * Description: Configures the SHE key catalog and loads a number of keys that
 *              are used for AES CBC/ECB.
 ******************************************************************************/
static void HSE_SheLoadKeys_Example(void)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;
    uint8_t emptySlotValue[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    gLoadKeysExample = RUNNING;

    /* Load MASTER_ECU_KEY - SLOT INDEX 1 */
    srvResponse = HSE_SheLoadKey(emptySlotValue, sheMasterEcuKey, SHE_MASTER_ECU_KEY_ENTRY, SHE_MASTER_ECU_KEY_ENTRY, 0x01, 0x00, 0x00);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    /* Load an NVM key for AES ECB operations - SLOT INDEX 4 */
    srvResponse = HSE_SheLoadKey(sheMasterEcuKey, sheAesEcbKey, SHE_MASTER_ECU_KEY_ENTRY, SHE_AES_ECB_KEY_ENTRY, 0x01, 0x00, 0x00);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    /* Load an NVM key for AES CBC operations - SLOT INDEX 5 */
    srvResponse = HSE_SheLoadKey(sheMasterEcuKey, sheAesCbcKey, SHE_MASTER_ECU_KEY_ENTRY, SHE_AES_CBC_KEY_ENTRY, 0x01, 0x00, 0x00);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    /* Load an NVM key for CMAC generation and verification - SLOT INDEX 6 */
    srvResponse = HSE_SheLoadKey(sheMasterEcuKey, sheCmacKey, SHE_MASTER_ECU_KEY_ENTRY, SHE_CMAC_KEY_ENTRY, 0x01, 0x04, 0x00);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    gLoadKeysExample = PASSED;
    _printf("HSE_SheLoadKeys_Example: OK\n");
    return;
exit:
    gLoadKeysExample = FAILED;
}

/*******************************************************************************
 * Description: Load a RAM plain key without encryption and verification of the key.
 *              AES enc/dec operations using the RAM key from the SHE key catalog
 ******************************************************************************/
static void HSE_SheLoadPlainKey_Example(void)
{
    hseSrvResponse_t hseResponse;

    gLoadPlainKeyExample = RUNNING;

    /* Load the plain key in RAM */
    hseResponse = HSE_SheLoadPlainKey(ramKey);
    if (HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }

    /* Encrypt the given plaintext with the key pointed by the SHE_RAM_KEY_ENTRY */
    memset(testOutput, 0, BUFF_LEN);

    hseResponse = HSE_AesEncrypt(HSE_CIPHER_BLOCK_MODE_ECB, sheKeyCatalog[SHE_RAM_KEY_ENTRY], IV, plaintextRamKey, plaintextRamKeyLength, testOutput);
    if((HSE_SRV_RSP_OK != hseResponse) || (0 != memcmp(testOutput, ciphertextRamKey, plaintextRamKeyLength)))
    {
        goto exit;
    }
    hseResponse = HSE_AesDecrypt(HSE_CIPHER_BLOCK_MODE_ECB, sheKeyCatalog[SHE_RAM_KEY_ENTRY], IV, ciphertextRamKey, plaintextRamKeyLength, testOutput);
    if((HSE_SRV_RSP_OK != hseResponse) || (0 != memcmp(testOutput, plaintextRamKey, plaintextRamKeyLength)))
    {
        goto exit;
    }

    gLoadPlainKeyExample = PASSED;
    _printf("HSE_SheLoadPlainKey_Example: OK\n");
    return;
exit:
    gLoadPlainKeyExample = FAILED;
}

/*******************************************************************************
 * Description: The function exports the RAM_KEY into a format protected by SECRET_KEY.
 ******************************************************************************/
static void HSE_SheExportKey_Example(void)
{
    hseSrvResponse_t srvResponse;
    uint8_t M1[SHE_BLOCK_SIZE];
    uint8_t M2[SHE_BLOCK_SIZE * 2];
    uint8_t M3[SHE_BLOCK_SIZE];
    uint8_t M4[SHE_BLOCK_SIZE * 2];
    uint8_t M5[SHE_BLOCK_SIZE];
    uint8_t M4_t[SHE_BLOCK_SIZE * 2] = { 0U };
    uint8_t M5_t[SHE_BLOCK_SIZE] = { 0U };

    gSheExportKeyExample = RUNNING;

    srvResponse = SheGet_M1_M2_M3(sheAesCbcKey, (uint8_t *) ramKey, SHE_RAM_KEY_ENTRY, SHE_AES_CBC_KEY_ENTRY, 0x00, 0x00, M1, M2, M3);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    srvResponse = HSE_SheLoadKeyReq(0x00, M1, M2, M3, M4, M5);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    /* A RAM_KEY can only be exported if it was written into SHE in plaintext, hence the key can not be exported. */
    srvResponse = HSE_SheExportRamKey(M1, M2, M3, M4_t, M5_t);
    if(HSE_SRV_RSP_KEY_INVALID != srvResponse)
    {
        goto exit;
    }

    srvResponse = HSE_SheLoadPlainKey(ramKey);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    srvResponse = HSE_SheExportRamKey(M1, M2, M3, M4_t, M5_t);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    gSheExportKeyExample = PASSED;
    _printf("HSE_SheExportKey_Example: OK\n");
    return;
exit:
    gSheExportKeyExample = FAILED;
}

/*******************************************************************************
 * Description: AES enc/dec + CMAC gen/ver operations using the keys loaded in SHE key catalog
 ******************************************************************************/
static void HSE_SheCrypto_Example(void)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    gSheCryptoExample = RUNNING;

    /* ECB Encrypt/Decrypt */
    memset(testOutput, 0, BUFF_LEN);

    srvResponse = HSE_AesEncrypt(HSE_CIPHER_BLOCK_MODE_ECB, sheKeyCatalog[SHE_AES_ECB_KEY_ENTRY], IV, aesEcbPlaintext, aesEcbPlaintextLength, testOutput);
    if((HSE_SRV_RSP_OK != srvResponse) || (0 != memcmp(testOutput, aesEcbCiphertext, aesEcbPlaintextLength)))
    {
        goto exit;
    }
    srvResponse = HSE_AesDecrypt(HSE_CIPHER_BLOCK_MODE_ECB, sheKeyCatalog[SHE_AES_ECB_KEY_ENTRY], IV, aesEcbCiphertext, aesEcbPlaintextLength, testOutput);
    if((HSE_SRV_RSP_OK != srvResponse) || (0 != memcmp(testOutput, aesEcbPlaintext, aesEcbPlaintextLength)))
    {
        goto exit;
    }


    /* CBC Encrypt/Decrypt */
    memset(testOutput, 0, BUFF_LEN);

    srvResponse = HSE_AesEncrypt(HSE_CIPHER_BLOCK_MODE_CBC, sheKeyCatalog[SHE_AES_CBC_KEY_ENTRY], aesCbcIV, aesCbcPlaintext, aesCbcPlaintextLength, testOutput);
    if((HSE_SRV_RSP_OK != srvResponse) || (0 != memcmp(testOutput, aesCbcCiphertext, aesCbcPlaintextLength)))
    {
        goto exit;
    }
    srvResponse = HSE_AesDecrypt(HSE_CIPHER_BLOCK_MODE_CBC, sheKeyCatalog[SHE_AES_CBC_KEY_ENTRY], aesCbcIV, aesCbcCiphertext, aesCbcPlaintextLength, testOutput);
    if((HSE_SRV_RSP_OK != srvResponse) || (0 != memcmp(testOutput, aesCbcPlaintext, aesCbcPlaintextLength)))
    {
        goto exit;
    }


    /* CMAC Generate/Verify */
    memset(testOutput, 0, BUFF_LEN);

    srvResponse = HSE_FastCmac(HSE_AUTH_DIR_GENERATE, sheKeyCatalog[SHE_CMAC_KEY_ENTRY], aesCmacMessage, aesCmacMessageLength * 8U, testOutput, aesCmacTagLength * 8U);
    if((HSE_SRV_RSP_OK != srvResponse) || (0 != memcmp(testOutput, aesCmacTag, aesCmacTagLength)))
    {
        goto exit;
    }
    srvResponse = HSE_FastCmac(HSE_AUTH_DIR_VERIFY, sheKeyCatalog[SHE_CMAC_KEY_ENTRY], aesCmacMessage, aesCmacMessageLength * 8U, testOutput, aesCmacTagLength * 8U);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    gSheCryptoExample = PASSED;
    _printf("HSE_SheCrypto_Example: OK\n");
    return;
exit:
    gSheCryptoExample = FAILED;
}


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*
    Function: HSE_She

    @brief    HSE_She services examples
    @detailed Examples for SHE key import and cryptographic operations using SHE keys.
 */
void HSE_She(void)
{
    HSE_SheLoadKeys_Example();

    HSE_SheLoadPlainKey_Example();

    HSE_SheExportKey_Example();

    HSE_SheCrypto_Example();
}

#ifdef __cplusplus
}
#endif

/** @} */
