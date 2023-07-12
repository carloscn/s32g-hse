/**
*   @file    hse_host_she.c
*
*   @brief   This file implements wrappers for SHE services.
*
*   @addtogroup [HOST_FRAMEWORK]
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
==================================================================================================*/

#include "string.h"
#include "hse_host.h"
#include "hse_host_hash.h"
#include "hse_host_she.h"
#include "hse_host_cipher.h"
#include "hse_host_mac.h"
#include "global_defs.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/* Constants defined by SHE standard */
static const uint8_t key_update_enc_c[] =
{
    0x01, 0x01, 0x53, 0x48, 0x45, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0
};

static const uint8_t key_update_mac_c[] =
{
    0x01, 0x02, 0x53, 0x48, 0x45, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0
};

static const uint8_t uid[] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Initialization vector for AES CBC/ECB */
static const uint8_t IV[] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/* Array to get the Key Handle Value for Key IDs */
uint32_t sheKeyCatalog[15] = {
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_ROM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)0U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)0U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)1U),
    HSE_INVALID_KEY_HANDLE,
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)2U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)3U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)4U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)5U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)6U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)7U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)8U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)9U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)10U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)11U),
    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, (hseKeyGroupIdx_t)0U, (hseKeySlotIdx_t)0)
};

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/*******************************************************************************
 * Function:    SheGet_M1_M2_M3
 * Description: Generation of the messages M1,M2 and M3 according to SHE protocol
 ******************************************************************************/
hseSrvResponse_t SheGet_M1_M2_M3
(
    const uint8_t* pAuthKey,
    const uint8_t* pKeyNew,
    uint8_t KeyId,
    uint8_t AuthId,
    uint32_t count_val,
    uint8_t flag_val,
    uint8_t* pM1,
    uint8_t* pM2,
    uint8_t* pM3
)
{
    hseSrvResponse_t srvResponse;
    uint8_t tempM1[SHE_BLOCK_SIZE];
    uint8_t tempM2[SHE_BLOCK_SIZE * 2];
    uint8_t tempM3[SHE_BLOCK_SIZE];
    uint8_t M2_t[SHE_BLOCK_SIZE * 2];
    uint8_t M3_t[SHE_BLOCK_SIZE * 3];

    uint8_t K1[SHE_BLOCK_SIZE];
    uint8_t K2[SHE_BLOCK_SIZE];
    uint32_t outLen;
    uint8_t plaintext[SHE_BLOCK_SIZE * 2];
    uint8_t i = 0;

    /* Generate K1 - KDF(KAuthID, KEY_UPDATE_ENC_C) */
    for(i = 0; i < SHE_BLOCK_SIZE; i++)
    {
        plaintext[i] = pAuthKey[i];
    }
    for(i = SHE_BLOCK_SIZE; i < SHE_BLOCK_SIZE * 2; i++)
    {
        plaintext[i] = key_update_enc_c[i - SHE_BLOCK_SIZE];
    }
    outLen = ARRAY_SIZE(K1);
    /* Call Miyaguchi-Preneel compression function to get K1 */
    srvResponse =  HSE_Hash(HSE_HASH_ALGO_MP, HSE_SGT_OPTION_NONE, plaintext, SHE_BLOCK_SIZE * 2, K1, &outLen);

    if(HSE_SRV_RSP_OK != srvResponse)
    {
        return srvResponse;
    }

    /*Generate K2 - KDF(KAuthID,KEY_UPDATE_MAC_C) */
    for(i = 0; i < SHE_BLOCK_SIZE; i++)
    {
        plaintext[i] = pAuthKey[i];
    }
    for(i = SHE_BLOCK_SIZE; i < SHE_BLOCK_SIZE * 2; i++)
    {
        plaintext[i] = key_update_mac_c[i - SHE_BLOCK_SIZE];
    }
    outLen = ARRAY_SIZE(K2);
    /* Call Miyaguchi-Preneel compression function to get K2 */
    srvResponse =  HSE_Hash(HSE_HASH_ALGO_MP, HSE_SGT_OPTION_NONE, plaintext, SHE_BLOCK_SIZE * 2, K2, &outLen);

    if(HSE_SRV_RSP_OK != srvResponse)
    {
        return srvResponse;
    }
    /* Generate M1 where M1 = UID|ID|AuthID */
    for(i = 0; i < 15; i++)
    {
        tempM1[i] = uid[i];
    }
    /* Key to be updated and authorizing key ID */
    tempM1[15] = (KeyId << 4 & 0xF0) | (AuthId & 0x0F);
    /* Generate M2 where M2 = ENC_CBC,K1,IV=0(CID|FID|0...0"95|Key_ID)*/
    M2_t[0] = ((count_val >> 20) & 0xFF);
    M2_t[1] = ((count_val >> 12) & 0xFF);
    M2_t[2] = ((count_val >> 4) & 0xFF);
    M2_t[3] = ((count_val << 4) & 0xF0) | ((flag_val >> 2) & 0x0F);
    M2_t[4] = ((flag_val << 6) & 0xC0);
    for(i = 5; i < 16; i++)
    {
        M2_t[i] = 0x00;
    }
    for(i = 16; i < SHE_BLOCK_SIZE * 2; i++)
    {
        M2_t[i] = pKeyNew[i - SHE_BLOCK_SIZE];
    }
    /* Load K1 in RAM key */
    srvResponse = HSE_SheLoadPlainKey(K1);

    memset(tempM2, 0, SHE_BLOCK_SIZE * 2);
    /*CBC ENCRYPT M2_t using K1 to get M2*/
    srvResponse = HSE_AesEncrypt(HSE_CIPHER_BLOCK_MODE_CBC, sheKeyCatalog[SHE_RAM_KEY_ENTRY], IV, M2_t, sizeof(M2_t), tempM2);

    if(HSE_SRV_RSP_OK != srvResponse)
    {
        return srvResponse;
    }
    /* Generate M3 where M3 = CMACK2(M1|M2) */

    /*Load K2 in RAM key*/
    srvResponse = HSE_SheLoadPlainKey(K2);

    /*Generate (M1|M2)*/
    for(i = 0; i < SHE_BLOCK_SIZE; i++)
    {
        M3_t[i] = tempM1[i];
    }
    for(i = SHE_BLOCK_SIZE; i < SHE_BLOCK_SIZE * 3; i++)
    {
        M3_t[i] = tempM2[i - SHE_BLOCK_SIZE];
    }

    /* Generate MAC over (M1|M2) to get M3*/
    srvResponse = HSE_FastCmac(HSE_AUTH_DIR_GENERATE, sheKeyCatalog[SHE_RAM_KEY_ENTRY], M3_t, sizeof(M3_t) * 8, tempM3, 128UL);

    if(HSE_SRV_RSP_OK != srvResponse)
    {
        return srvResponse;
    }
    memcpy(pM1, tempM1, sizeof(tempM1));
    memcpy(pM2, tempM2, sizeof(tempM2));
    memcpy(pM3, tempM3, sizeof(tempM3));

    return srvResponse;
}

/*******************************************************************************
 * Function:    SheGet_M4_M5
 * Description: This function computes the verification parameters M4 and M5
 *              used to verify LOAD_KEY command
 ******************************************************************************/
hseSrvResponse_t SheGet_M4_M5
(
    const uint8_t* pKeyNew,
    uint8_t KeyId,
    uint8_t AuthId,
    uint32_t count_val,
    uint8_t* pM4,
    uint8_t* pM5
)
{
    hseSrvResponse_t srvResponse;
    uint8_t K3[SHE_BLOCK_SIZE];
    uint8_t K4[SHE_BLOCK_SIZE];

    uint8_t M4_t[SHE_BLOCK_SIZE];
    uint8_t M4_te[SHE_BLOCK_SIZE];
    uint8_t tempM4[SHE_BLOCK_SIZE * 2];
    uint8_t tempM5[SHE_BLOCK_SIZE];
    uint8_t plaintext[SHE_BLOCK_SIZE * 2];
    uint32_t outLen;
    uint32_t i;

    /*Get K3 where K3 = KDF(KEYID,KEY_UPDATE_ENC_C) */
    for(i = 0; i < SHE_BLOCK_SIZE; i++)
    {
        plaintext[i] = pKeyNew[i];
    }
    for(i = SHE_BLOCK_SIZE; i < SHE_BLOCK_SIZE * 2; i++)
    {
        plaintext[i] = key_update_enc_c [i - SHE_BLOCK_SIZE];
    }
    outLen  = ARRAY_SIZE(K3);
    srvResponse =  HSE_Hash(HSE_HASH_ALGO_MP, HSE_SGT_OPTION_NONE, plaintext, SHE_BLOCK_SIZE * 2, K3, &outLen);

    if(HSE_SRV_RSP_OK != srvResponse)
    {
        return srvResponse;
    }

    /*Get K4 where K4 = KDF (KEYID,KEY_UPDATE_MAC_C) */

    for(i = 0; i < SHE_BLOCK_SIZE; i++)
    {
        plaintext[i] = pKeyNew[i];
    }
    for(i = SHE_BLOCK_SIZE; i < SHE_BLOCK_SIZE * 2; i++)
    {
        plaintext[i] = key_update_mac_c [i - SHE_BLOCK_SIZE];
    }
    outLen  = ARRAY_SIZE(K4);
    srvResponse =  HSE_Hash(HSE_HASH_ALGO_MP, HSE_SGT_OPTION_NONE, plaintext, SHE_BLOCK_SIZE * 2, K4, &outLen);

    if(HSE_SRV_RSP_OK != srvResponse)
    {
        return srvResponse;
    }

    /* Generate M4 where M4 = UID|ID|AuthID|M4_t
     * Where M4_t is ENC_ECB(Counter_value|1|0...0"99)
     * The key for the ECB encryption is K3
     */
    M4_t[0] = ((count_val >> 20) & 0xFF);
    M4_t[1] = ((count_val >> 12) & 0xFF);
    M4_t[2] = ((count_val >> 4) & 0xFF);
    M4_t[3] = ((count_val << 4) & 0xF0);
    /*Single "1"-bit Padding followed by "0"-bits on the LSB side*/
    M4_t[3] |= (uint8_t)(1UL << 3U);
    for(i = 4; i < SHE_BLOCK_SIZE; i++)
    {
        M4_t[i] = 0x00;
    }
    /* Load K3 in RAM key */
    srvResponse = HSE_SheLoadPlainKey(K3);

    memset(M4_te, 0, sizeof(M4_te));
    /*ECB ENCRYPT */
    srvResponse = HSE_AesEncrypt(HSE_CIPHER_BLOCK_MODE_ECB, sheKeyCatalog[SHE_RAM_KEY_ENTRY], IV, M4_t, sizeof(M4_t), M4_te);

    if(HSE_SRV_RSP_OK != srvResponse)
    {
        return srvResponse;
    }

    for(i = 0; i < (SHE_BLOCK_SIZE - 1); i++)
    {
        tempM4[i] = uid[i];
    }
    tempM4[15] = ((((uint8_t)KeyId) << 4U) & 0xF0U) | (((uint8_t)AuthId) & 0x0FU);
    for(i = SHE_BLOCK_SIZE; i < SHE_BLOCK_SIZE * 2; i++)
    {
        tempM4[i] = M4_te[i - SHE_BLOCK_SIZE];
    }

    /* Generate M5 where M5 = CMACK4(M4) */
    srvResponse = HSE_SheLoadPlainKey(K4);

    /* Generate MAC to get M5 */
    srvResponse= HSE_FastCmac(HSE_AUTH_DIR_GENERATE, sheKeyCatalog[SHE_RAM_KEY_ENTRY], tempM4, sizeof(tempM4) * 8, tempM5, 128UL);
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        return srvResponse;
    }

    memcpy(pM4, tempM4, sizeof(tempM4));
    memcpy(pM5, tempM5, sizeof(tempM5));
    return srvResponse;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*******************************************************************************
 * Function:    HSE_SheLoadKeyReq
 * Description: This function is used to send a She Load Key Command.
 ******************************************************************************/
hseSrvResponse_t HSE_SheLoadKeyReq
(
    uint8_t sheGroupId,
    uint8_t *M1,
    uint8_t *M2,
    uint8_t *M3,
    uint8_t *M4,
    uint8_t *M5
)
{

    hseSrvDescriptor_t* pHseSrvDesc;
    hseSheLoadKeySrv_t* pSheLoadKeyReq;
    uint8_t u8MuChannel;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    u8MuChannel = HSE_AllocateFreeChannel(MU0);

    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));
    pSheLoadKeyReq = &(pHseSrvDesc->hseSrv.sheLoadKeyReq);

    pHseSrvDesc->srvId = HSE_SRV_ID_SHE_LOAD_KEY;
    pSheLoadKeyReq->sheGroupIndex = (hseKeyGroupIdx_t) sheGroupId;
    pSheLoadKeyReq->pM1 = PTR_TO_HOST_ADDR(M1);
    pSheLoadKeyReq->pM2 = PTR_TO_HOST_ADDR(M2);
    pSheLoadKeyReq->pM3 = PTR_TO_HOST_ADDR(M3);
    pSheLoadKeyReq->pM4 = PTR_TO_HOST_ADDR(M4);
    pSheLoadKeyReq->pM5 = PTR_TO_HOST_ADDR(M5);

    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Function:    HSE_SheLoadPlainKey
 * Description: This function is used to send a She Load Key Command.
 ******************************************************************************/
hseSrvResponse_t HSE_SheLoadPlainKey
(
    const uint8_t *pKey
)
{
    hseSrvDescriptor_t* pHseSrvDesc;
    hseSheLoadPlainKeySrv_t* pSheLoadPlainKeyReq;
    uint8_t u8MuChannel;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    u8MuChannel = HSE_AllocateFreeChannel(MU0);

    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));
    pSheLoadPlainKeyReq = &(pHseSrvDesc->hseSrv.sheLoadPlainKeyReq);

    pHseSrvDesc->srvId = HSE_SRV_ID_SHE_LOAD_PLAIN_KEY;
    pSheLoadPlainKeyReq->pKey = PTR_TO_HOST_ADDR(pKey);

    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Function:    HSE_SheExportRamKey
 * Description: This function is used to send She Export Ram Key Command.
 ******************************************************************************/
hseSrvResponse_t HSE_SheExportRamKey
(
    uint8_t *M1,
    uint8_t *M2,
    uint8_t *M3,
    uint8_t *M4,
    uint8_t *M5
)
{
    hseSrvDescriptor_t* pHseSrvDesc;
    hseSheExportRamKeySrv_t* pSheExportRamKeyReq;
    uint8_t u8MuChannel;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    u8MuChannel = HSE_AllocateFreeChannel(MU0);

    if (HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[MU0][u8MuChannel];
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));
    pSheExportRamKeyReq = &(pHseSrvDesc->hseSrv.sheExportRamKeyReq);

    pHseSrvDesc->srvId = HSE_SRV_ID_SHE_EXPORT_RAM_KEY;
    pSheExportRamKeyReq->pM1 = PTR_TO_HOST_ADDR(M1);
    pSheExportRamKeyReq->pM2 = PTR_TO_HOST_ADDR(M2);
    pSheExportRamKeyReq->pM3 = PTR_TO_HOST_ADDR(M3);
    pSheExportRamKeyReq->pM4 = PTR_TO_HOST_ADDR(M4);
    pSheExportRamKeyReq->pM5 = PTR_TO_HOST_ADDR(M5);

    srvResponse = HSE_Send(MU0, u8MuChannel, gSyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*******************************************************************************
 * Function:    HSE_SheLoadKey
 * Description: The function updates an internal key based on SHE protocol
 ******************************************************************************/
hseSrvResponse_t HSE_SheLoadKey
(
    const uint8_t* pAuthKey,
    const uint8_t* pKeyNew,
    uint8_t AuthId,
    uint8_t KeyId,
    uint32_t countVal,
    uint8_t flagVal,
    uint8_t groupId
)
{
    uint8_t M1[SHE_BLOCK_SIZE];
    uint8_t M2[SHE_BLOCK_SIZE * 2];
    uint8_t M3[SHE_BLOCK_SIZE];
    uint8_t M4[SHE_BLOCK_SIZE * 2];
    uint8_t M5[SHE_BLOCK_SIZE];
    uint8_t M4_o[SHE_BLOCK_SIZE * 2];
    uint8_t M5_o[SHE_BLOCK_SIZE];
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Calculate parameters M1, M2, M3 used for SHE Load Key*/
    srvResponse = SheGet_M1_M2_M3(pAuthKey, pKeyNew, KeyId, AuthId, countVal, flagVal, M1, M2, M3);
    if (HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    /* Calculation of Verification parameters M4, M5*/
    srvResponse = SheGet_M4_M5(pKeyNew, KeyId, AuthId, countVal, M4_o, M5_o);
    if (HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }
    /* Issue Load Key Command */
    srvResponse = HSE_SheLoadKeyReq(groupId, M1, M2, M3, M4, M5);
    if (HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    if(!(((0 == memcmp(M4, M4_o, ARRAY_SIZE(M4)))) && (0 == memcmp(M5, M5_o, ARRAY_SIZE(M5)))))
    {
        srvResponse =  HSE_SRV_RSP_GENERAL_ERROR;
    }

exit:
    return srvResponse;
}

#ifdef __cplusplus
}
#endif

