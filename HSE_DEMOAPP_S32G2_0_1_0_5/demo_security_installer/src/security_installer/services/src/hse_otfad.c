/**
*   @file    hse_otfad.c
*
*   @brief   Example of HSE OTFAD services.
*   @details Examples of how to install, activate and get an OTFAD context.
*
*   @addtogroup hse_otfad
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
#include "hse_host_aead.h"
#include "hse_host_cipher.h"
#include "hse_host_kdf.h"
#include "hse_host_attr.h"
#include "hse_host_km_gen_key.h"
#include "hse_host_km_import_key.h"
#include "hse_host_km_utils.h"
#include "hse_host_mac.h"
#include "hse_host_otfad.h"
#include "hse_host_sys_authorization.h"
#include "timer.h"
#include "flash.h"
#include "string.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                 LOCAL MACROS and CONSTANTS
==================================================================================================*/

#define SWAP_32_BYTE(x) ((((x) & 0xFF000000) >> 24) | (((x) & 0x00FF0000) >>  8) |  \
                        (((x) & 0x0000FF00) <<  8) | (((x) & 0x000000FF) << 24))

#define GET_HIGH_WORD(x, swap) (uint64_t)((swap == TRUE ? SWAP_32_BYTE((uint32_t)(x >> 32)) : (x >> 32)))
#define GET_LOW_WORD(x, swap)  (uint64_t)((swap == TRUE ? SWAP_32_BYTE((uint32_t) x) : ((uint32_t) x)))

#define OTFAD_CTX0_CTR_FIXED_NONCE                    (0xA2657210UL)
#define OTFAD_CTX1_CTR_FIXED_NONCE                    (0x6B006211UL)
#define OTFAD_CTX2_CTR_FIXED_NONCE                    (0x3BBB5912UL)
#define OTFAD_CTX3_CTR_FIXED_NONCE                    (0xB8174113UL)

/*
    Ensure these fields are in sync with the OTFAD encryption script output (e.g. using enc_bin.py)
*/

/* The start address for the OTFAD region. The end address is  located at OTFAD_REGION_START_ADDR + sizeof(inputPlainImage). */
#define OTFAD_REGION_START_ADDR 0x00130000UL

#define OTFAD_ALIGNED_1K        (1024UL)
#define OTFAD_ENC_BLOCK         (16U)

static uint32_t ivFixedNounce[4] = {    OTFAD_CTX0_CTR_FIXED_NONCE, \
                                        OTFAD_CTX1_CTR_FIXED_NONCE, \
                                        OTFAD_CTX2_CTR_FIXED_NONCE, \
                                        OTFAD_CTX3_CTR_FIXED_NONCE  };

/* OTFAD AES-128 key. */
static const uint8_t otfadKey[] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F };
/* OTFAD IV (configurable by user - only 4 bytes). */
static const uint8_t otfadIv[] = { 0x11, 0x22, 0x33, 0x44 };

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/* RAM buffer used for data transfer from RAM to FLASH/RAM */
static uint8_t tempEncBuff[OTFAD_ALIGNED_1K];

static uint8_t inputPlainImage[OTFAD_ALIGNED_1K] = {

    0x54, 0x68, 0x69, 0x73, 0x20, 0x63, 0x6F, 0x6E, 0x74, 0x65, 0x6E, 0x74, 0x20, 0x69, 0x73, 0x20, 0x64, 0x65, 0x63, 0x72, 0x79, 0x70, 0x74, 0x65, 0x64, 0x20, 0x77, 0x68, 0x65, 0x6E, 0x20, 0x74,
    0x68, 0x65, 0x20, 0x4F, 0x54, 0x46, 0x41, 0x44, 0x20, 0x72, 0x65, 0x67, 0x69, 0x6F, 0x6E, 0x20, 0x69, 0x73, 0x20, 0x61, 0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x65, 0x64, 0x2E, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,

};

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

exampleState_t gOtfadEncryptExample = NOT_RUN;
exampleState_t gOtfadExample = NOT_RUN;

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*******************************************************************************
 * Description: Swap 16 bytes according to OTFAD input format.
 *  ------- INPUT_BUFFER -------  | ------- OUTPUT_BUFFER -------
 *                                |
 *       0x54686973_2063676E      |      0x6E676320_73696854
 ******************************************************************************/
static void App_Swap_16Bytes(uint8_t *pInput, uint8_t *pOutputBuf)
{
    uint64_t *pFormatInput = (uint64_t *) pInput;
    uint64_t *pTempBuff = (uint64_t *) pOutputBuf;

    *pTempBuff = (uint64_t)(GET_HIGH_WORD(*pFormatInput,TRUE) | (GET_LOW_WORD(*pFormatInput,TRUE) << 32));
    pFormatInput++;
    *(pTempBuff + 1) = (uint64_t)(GET_HIGH_WORD(*pFormatInput,TRUE) | (GET_LOW_WORD(*pFormatInput,TRUE) << 32));
}

/*******************************************************************************
 * Description: OTFAD AES CTR encrypt image example
 ******************************************************************************/
static hseSrvResponse_t HSE_Otfad_AES_Encrypt(hseKeyHandle_t aesOtfadKeyHandle, uint8_t *pInput, uint8_t *internalBuff, uint32_t inputLength, uint32_t *pIV)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;
    uint8_t tempAesBuf[16] = { 0 };

    for (uint32_t i = 0; i < inputLength; i += OTFAD_ENC_BLOCK)
	{
        /* Format the input plain image according to OTFAD format.
           16 byte chunks from the input image are swapped and stored
           in a 16 bytes temp buffer each iteration. */
        App_Swap_16Bytes(pInput + i, tempAesBuf);

        srvResponse = HSE_AesEncrypt(HSE_CIPHER_BLOCK_MODE_CTR, aesOtfadKeyHandle,
                (uint8_t *) pIV, (uint8_t *) tempAesBuf, OTFAD_ENC_BLOCK, internalBuff + i);

        if(HSE_SRV_RSP_OK != srvResponse)
        {
            goto exit;
        }

        /* Swap the counter value and add 16 each iteration and then swap back the counter value */
        *(pIV + 3) = SWAP_32_BYTE(SWAP_32_BYTE(*(pIV + 3)) + OTFAD_ENC_BLOCK);

        /* Format the output AES-CTR encrypted image according to OTFAD format */
        App_Swap_16Bytes(internalBuff + i, internalBuff + i);

    }

exit:
    return srvResponse;
}

/*******************************************************************************
 * Description: OTFAD encrypt image example
 ******************************************************************************/
static void HSE_Otfad_Encrypt(uint8_t otfadIdx, hseOtfadContext_t *pCtx, uint8_t *pInput, uint8_t *pOutput)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;
    hseKeyHandle_t aesOtfadKeyHandle = pCtx->keyHandle;
    uint32_t *userIV = (uint32_t *) pCtx->iv;
    uint32_t fullIV[4] = {
        ivFixedNounce[otfadIdx],
        *userIV,
        ivFixedNounce[otfadIdx] ^ (*userIV),
        SWAP_32_BYTE(pCtx->startAddress)
    };
    uint32_t plainImageSize = pCtx->endAddress - pCtx->startAddress + 1;

    gOtfadEncryptExample = RUNNING;

    ASSERT(0UL == (plainImageSize % OTFAD_ALIGNED_1K));

    /* Import the AES key in NVM for OTFAD region encryption */
    srvResponse = HSE_ImportSymKey(aesOtfadKeyHandle, HSE_KEY_TYPE_AES, HSE_KF_USAGE_ENCRYPT, otfadKey, ARRAY_SIZE(otfadKey));
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    /* Encrypt 1 KB block each iteration */
    for(uint32_t i = 0; i < plainImageSize/OTFAD_ALIGNED_1K; i++)
    {
        srvResponse = HSE_Otfad_AES_Encrypt(aesOtfadKeyHandle, pInput, tempEncBuff, OTFAD_ALIGNED_1K, &fullIV[0]);
        if(HSE_SRV_RSP_OK != srvResponse)
        {
            goto exit;
        }

        /* Write the encrypted content either to flash or to RAM memory */
        if(NULL == pOutput)
        {
            Flash_WriteData_FromRam(pCtx->startAddress + (i * OTFAD_ALIGNED_1K), &tempEncBuff[0], OTFAD_ALIGNED_1K);
        }
        else
        {
            memcpy(pOutput + (i * OTFAD_ALIGNED_1K), &tempEncBuff[0], OTFAD_ALIGNED_1K);
        }
    }

    gOtfadEncryptExample = PASSED;
    _printf("HSE_Otfad_Encrypt: OK\n");
    return;
exit:
    gOtfadEncryptExample = FAILED;
}
/*******************************************************************************
 * Description: OTFAD example on how to install and activate a context
 ******************************************************************************/
static void HSE_Otfad_Example(void)
{
    uint8_t otfadIdx;
    hseOtfadContext_t otfadCtxEntry;
    hseOtfadContext_t otfadCtxEntryFromHse;
    hseOtfadCtxStatus_t otfadStatus;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    gOtfadExample = RUNNING;

    /*
        OTFAD configuration
    */

    /* Import the AES key in NVM for OTFAD region decryption */
    srvResponse = HSE_ImportSymKey(NVM_OTFAD_AES128_KEY, HSE_KEY_TYPE_AES, HSE_KF_USAGE_DECRYPT, otfadKey, ARRAY_SIZE(otfadKey));
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    /* Will work with first entry of the OTFAD table (out of a total of 4) - index 0 */
    otfadIdx = 0U;

    /* Fill OTFAD context data. */
    otfadCtxEntry.keyHandle      = NVM_OTFAD_AES128_KEY;            /* Key used for decryption (must be installed in HSE) */
    otfadCtxEntry.startAddress   = OTFAD_REGION_START_ADDR;         /* Start address of the region in QSPI */
    otfadCtxEntry.endAddress     = OTFAD_REGION_START_ADDR + sizeof(inputPlainImage) - 1;  /* End address of the region in QSPI */
    otfadCtxEntry.activateOnBoot = HSE_OTFAD_CTX_ACTIVE_ON_BOOT;    /* Tell HSE to activate at start-up */
    otfadCtxEntry.smrFlags       = 0x0U;                            /* Not linked with SMR */
    memcpy(otfadCtxEntry.iv, otfadIv, sizeof(otfadIv));             /* Copy the IV (only 4 bytes configurable by user) */

    /* Install the OTFAD context */
    srvResponse = HSE_OtfadInstallCtx(otfadIdx, &otfadCtxEntry);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }
    /* Get OTFAD context status and confirm it is INSTALLED */
    srvResponse = HSE_GetAttribute(HSE_OTFAD_CTX_STATUS_ATTR_ID, sizeof(hseOtfadCtxStatus_t), &otfadStatus);
    if( (HSE_SRV_RSP_OK != srvResponse) ||
        (HSE_OTFAD_CTX_INSTALLED != otfadStatus.OtfadCtxStatus[otfadIdx]) )
    {
        goto exit;
    }


    /*
        OTFAD activation and usage
    */

    /* Activate the OTFAD context */
    srvResponse = HSE_OtfadActivateCtx(otfadIdx);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }
    /* Get the OTFAD context status and confirm it is ACTIVE */
    srvResponse = HSE_GetAttribute(HSE_OTFAD_CTX_STATUS_ATTR_ID, sizeof(hseOtfadCtxStatus_t), &otfadStatus);
    if( (HSE_SRV_RSP_OK != srvResponse) ||
        (HSE_OTFAD_CTX_ACTIVE != otfadStatus.OtfadCtxStatus[otfadIdx]) )
    {
        goto exit;
    }

    /* Get the OTFAD context just configured and confirm that matches with the desired configuration */
    srvResponse = HSE_OtfadGetCtx(otfadIdx, &otfadCtxEntryFromHse);
    if( (HSE_SRV_RSP_OK != srvResponse) ||
        (0 != memcmp(&otfadCtxEntryFromHse, &otfadCtxEntry, sizeof(hseOtfadContext_t))) )
    {
        goto exit;
    }

    /*
        With OTFAD being ACTIVE, the region between OTFAD_REGION_START_ADDR and OTFAD_REGION_END_ADDR
        is now decrypted on-the-fly.
    */

    gOtfadExample = PASSED;
    _printf("HSE_Otfad_Example: OK\n");
    return;
exit:
    gOtfadExample = FAILED;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*
    Function: HSE_Otfad

    @brief    HSE_Otfad services examples
    @detailed Example for installing and activating an OTFAD context.
 */
void HSE_Otfad(void)
{
    uint8_t outputRamBuffer[OTFAD_ALIGNED_1K];
    hseOtfadContext_t otfadCtx = {
        .keyHandle      = NVM_OTFAD_AES128_KEY,
        .iv             = {0x11, 0x22, 0x33, 0x44},
        .startAddress   = OTFAD_REGION_START_ADDR,
        .endAddress     = OTFAD_REGION_START_ADDR + sizeof(inputPlainImage) - 1
    };
    uint8_t *pOtfadStartAddress = (uint8_t *) otfadCtx.startAddress;

    /* Encrypt the image and write the result to RAM */
    HSE_Otfad_Encrypt(0U, &otfadCtx, inputPlainImage, outputRamBuffer);

    /* Encrypt the image and write the result to flash */
    HSE_Otfad_Encrypt(0U, &otfadCtx, inputPlainImage, NULL);

    /* Check if the encrypted content from RAM is the same as in flash */
    ASSERT(0 == memcmp(pOtfadStartAddress, outputRamBuffer, sizeof(outputRamBuffer)));

    /* So far, the content starting from OTFAD_REGION_START_ADDR till OTFAD_REGION_START_ADDR + sizeof(inputPlainImage) - 1
       is encrypted. */

    HSE_Otfad_Example();

    /* So far, the content starting from OTFAD_REGION_START_ADDR till OTFAD_REGION_START_ADDR + sizeof(inputPlainImage) - 1
       is decrypted on the fly. */

    /* Check if the decrypted content from flash using OTFAD is the same as the input plain image. */
    ASSERT(0 == memcmp(pOtfadStartAddress, inputPlainImage, sizeof(inputPlainImage)));

}


#ifdef __cplusplus
}
#endif

/** @} */
