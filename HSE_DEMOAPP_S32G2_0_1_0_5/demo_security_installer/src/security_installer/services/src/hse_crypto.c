/**
*   @file    hse_crypto.c
*
*   @brief   Example of HSE cryptographic services.
*   @details Example of sending crypto services requests to HSE over MU (sym/asym; sync/async).
*
*   @addtogroup hse_crypto
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
#include "hse_host_hash.h"
#include "hse_host_kdf.h"
#include "hse_host_km_gen_key.h"
#include "hse_host_km_import_key.h"
#include "hse_host_km_utils.h"
#include "hse_host_mac.h"
#include "hse_host_sign.h"
#include "hse_host_sys_authorization.h"
#include "timer.h"

#include "string.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/* Argument for the async hash callback function */
typedef struct
{
    uint8_t u8MuInstance;
    uint8_t u8MuChannel;
} hashCallbackParams_t;

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


#define CUST_SUPER_USER_MODE(hseStatus) \
    (HSE_STATUS_CUST_SUPER_USER == (hseStatus & (HSE_STATUS_CUST_SUPER_USER|HSE_STATUS_OEM_SUPER_USER)))

#define OEM_SUPER_USER_MODE(hseStatus) \
    (HSE_STATUS_OEM_SUPER_USER == (hseStatus & (HSE_STATUS_CUST_SUPER_USER|HSE_STATUS_OEM_SUPER_USER)))

#define IN_FIELD_USER_MODE(hseStatus) \
    (0UL == (hseStatus & (HSE_STATUS_CUST_SUPER_USER|HSE_STATUS_OEM_SUPER_USER)))

#define CHALLENGE_LENGTH        (32UL)
#define SIGN_LENGTH_MAX         (512UL)
#define PSS_SALT_LENGTH         (20UL)
#define BUFF_LEN                (512U)
#define NUMBER_OF_ASYNC_REQ     (3U)
#define STREAMING_LEN           (16U)
#define STREAM_ID               (0U)
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/* HMAC key 1 - initial and second version - Update NVM key example */
static const uint8_t hmacKeyInitial[] =
{ 0x9a, 0x8c, 0xd4, 0x01, 0x8b, 0x1d, 0xe0, 0xaf, 0x06, 0xbb, 0xd7, 0x7a, 0xd3, 0x28, 0x94, 0xb0, 0x36, 0xb2, 0x1e, 0xc7, 0x29, 0xbb, 0xd1, 0x09, 0x7b, 0x34, 0xf2, 0x0e, 0x07, 0x0e, 0xbb, 0x29, 0xf9, 0x18, 0xda, 0xb1, 0x02, 0xe0, 0x60, 0x4f, 0x19, 0x19, 0xc4, 0x58, 0x05, 0x80, 0xbf, 0x69, 0x2e, 0xad };

static const uint8_t hmacKeyUpdated[] =
{ 0xf8, 0x69, 0x02, 0xe5, 0xe5, 0xdb, 0x47, 0x8e, 0xc6, 0xe2, 0x78, 0x69, 0x27, 0x28, 0xa8, 0x12, 0xc4, 0xcd, 0x87, 0x45, 0xf9, 0x0a, 0x7d, 0x9f, 0x79, 0x15, 0xf5, 0xa9, 0x43, 0x45, 0xfc, 0x12, 0xd2, 0x77, 0x0a, 0x3c, 0x94, 0xb0, 0x1f, 0xfb, 0x9e, 0x04, 0x12, 0x99, 0x9e, 0xb6, 0x26, 0x1d, 0x11, 0xa0 };

/* CUST_SUPER_USER authorization key (RSA-2048 Key pair) */
static const uint8_t rsa2048CustAuthKeyModulus[] =
{ 0xcc, 0x83, 0x0b, 0x10, 0xc5, 0xf2, 0xa6, 0x2d, 0xd5, 0xd7, 0x07, 0x55, 0x4f, 0x14, 0x9b, 0x6f, 0x52, 0x94, 0xe4, 0x82, 0x88, 0x9d, 0x8a, 0x48, 0xe7, 0x5e, 0x25, 0x39, 0x08, 0xcf, 0xb6, 0x4e, 0x4d, 0xf4, 0xae, 0x22, 0x5e, 0xee, 0x00, 0x31, 0x9e, 0xe7, 0x89, 0xc1, 0xba, 0x57, 0x21, 0xef, 0x0a, 0x64, 0x9a, 0x8c, 0xd4, 0x01, 0x8b, 0x1d, 0xe0, 0xaf, 0x06, 0xbb, 0xd7, 0x7a, 0xd3, 0x28, 0x94, 0xb0, 0x36, 0xb2, 0x1e, 0xc7, 0x29, 0xbb, 0xd1, 0x09, 0x7b, 0x34, 0xf2, 0x0e, 0x07, 0x0e, 0xbb, 0x29, 0xf9, 0x18, 0xda, 0xb1, 0x02, 0xe0, 0x60, 0x4f, 0x19, 0x19, 0xc4, 0x58, 0x05, 0x80, 0xbf, 0x69, 0x2e, 0xad, 0x54, 0x14, 0x05, 0x39, 0x4d, 0xa0, 0xa9, 0xad, 0x79, 0x1a, 0xe8, 0x39, 0xd0, 0xae, 0x60, 0x4b, 0x48, 0x0b, 0x5d, 0xe5, 0xe9, 0x0f, 0x88, 0xa4, 0xdc, 0x14, 0x43, 0x4f, 0xb6, 0x9c, 0xa9, 0xb4, 0x05, 0xc7, 0xe9, 0xc0, 0x4a, 0x70, 0x85, 0x51, 0x5c, 0x8a, 0x21, 0x85, 0x2a, 0x61, 0xf6, 0xd3, 0x6e, 0xd7, 0x66, 0x23, 0x81, 0x4c, 0x42, 0x3b, 0xcc, 0x4f, 0x22, 0xea, 0xfb, 0xa0, 0x95, 0x46, 0x14, 0x60, 0x2b, 0xa5, 0xe9, 0x48, 0xaa, 0x75, 0x31, 0x07, 0xb3, 0x14, 0xad, 0x1c, 0xe6, 0x94, 0xea, 0x99, 0xf0, 0x90, 0xbc, 0xb4, 0xe2, 0x00, 0x74, 0x1a, 0xf5, 0x44, 0x5f, 0xfa, 0x55, 0xc9, 0x76, 0x34, 0x80, 0xea, 0x6c, 0xee, 0x5d, 0xac, 0x0b, 0xe3, 0x0c, 0x31, 0xe7, 0xd1, 0xc5, 0xeb, 0xae, 0x20, 0x6a, 0x3c, 0x2d, 0x59, 0x55, 0xca, 0x29, 0x17, 0xa7, 0x4b, 0xec, 0x76, 0xea, 0xe0, 0x29, 0x37, 0x67, 0xf0, 0x09, 0x0f, 0x92, 0x93, 0x92, 0x46, 0x1a, 0x6d, 0x86, 0x89, 0x6c, 0x9e, 0xce, 0x56, 0xad, 0xa9, 0x12, 0xe6, 0x79, 0x56, 0x6c, 0x23, 0x67, 0x29 };
static const uint8_t rsa2048CustAuthKeyPubExp[] =
{ 0x01, 0x00, 0x01 };
static const uint8_t rsa2048CustAuthKeyPrivExp[] =
{ 0x4b, 0x60, 0x85, 0x44, 0x92, 0x60, 0xe3, 0xe5, 0x02, 0xea, 0xf5, 0x35, 0xf9, 0x26, 0xb4, 0x3f, 0x6c, 0xa5, 0x9a, 0x2f, 0x8e, 0x60, 0xda, 0x66, 0x12, 0x78, 0xbd, 0xa9, 0x6e, 0xd8, 0xf7, 0xed, 0x96, 0x87, 0xf7, 0x62, 0x8d, 0xb0, 0x94, 0xfb, 0xb5, 0x00, 0xcb, 0xe2, 0x4e, 0x66, 0xed, 0x07, 0xe8, 0xc1, 0xb9, 0xc0, 0xec, 0x27, 0x01, 0x7a, 0x6a, 0xa4, 0xb8, 0x0b, 0xa5, 0xd9, 0x0c, 0x58, 0xe9, 0xac, 0xa5, 0x0c, 0x33, 0x91, 0xde, 0x8c, 0xed, 0xf7, 0xdb, 0xa4, 0x61, 0x0e, 0xd0, 0x85, 0x1a, 0x70, 0xd6, 0xf1, 0xd5, 0x30, 0xe6, 0xc9, 0x82, 0x55, 0xc4, 0xff, 0x9d, 0x41, 0x80, 0x0d, 0xba, 0xfe, 0xee, 0x88, 0x4d, 0xf3, 0xef, 0x14, 0xf6, 0xca, 0x9f, 0x9f, 0x63, 0x82, 0x8a, 0x53, 0x3c, 0xd9, 0xf8, 0x7d, 0xe6, 0xb8, 0xe1, 0xcb, 0xea, 0x81, 0xa2, 0x30, 0x79, 0x39, 0x32, 0xb1, 0x56, 0xca, 0x0e, 0x9d, 0xbe, 0xe5, 0x3d, 0x02, 0x09, 0x2f, 0x4c, 0xa0, 0x68, 0x43, 0x04, 0xd6, 0xad, 0xe8, 0x26, 0xd8, 0x32, 0x7c, 0x8d, 0x68, 0x73, 0x7d, 0xdb, 0x00, 0xf0, 0x63, 0x37, 0xc6, 0x1d, 0x63, 0xc1, 0x0e, 0x57, 0x4f, 0xeb, 0xcf, 0x22, 0x96, 0xaf, 0x1f, 0xdc, 0xf4, 0x7a, 0x96, 0xc3, 0xfd, 0xb9, 0x18, 0xe7, 0x5f, 0x2c, 0x43, 0x05, 0xad, 0xa4, 0x20, 0x84, 0x60, 0x04, 0x48, 0x54, 0xd2, 0x0c, 0x45, 0x45, 0xb1, 0x5f, 0xac, 0x59, 0x0a, 0xff, 0xc7, 0x7d, 0x9f, 0x47, 0xca, 0xa6, 0x04, 0xe5, 0xc7, 0xa4, 0x05, 0xd9, 0x07, 0x75, 0xd0, 0x0f, 0xef, 0x70, 0x8b, 0x8c, 0xca, 0x73, 0x2b, 0x78, 0xc4, 0x9c, 0x2d, 0xab, 0x84, 0xb7, 0x24, 0x05, 0x4a, 0x04, 0xce, 0x41, 0x7b, 0x32, 0xcf, 0x9e, 0x5c, 0x1a, 0x4c, 0x1a, 0x27, 0x1d, 0x19, 0x96, 0x47, 0x5b, 0x21, 0xd5, 0x81 };

/* Fixed Info for KDF example */
static const uint8_t kdfFixedInfo[] =
{ 0x44, 0xd7, 0xaa, 0x08, 0xfe, 0xba, 0x26, 0x09, 0x3c, 0x14, 0x97, 0x9c, 0x12, 0x2c, 0x24, 0x37, 0xc3, 0x11, 0x7b, 0x63, 0xb7, 0x88, 0x41, 0xcd, 0x10, 0xa4, 0xbc, 0x5e, 0xd5, 0x5c, 0x56, 0x58, 0x6a, 0xd8, 0x98, 0x6d, 0x55, 0x30, 0x7d, 0xca, 0x1d, 0x19, 0x8e, 0xdc, 0xff, 0xbc, 0x51, 0x6a, 0x8f, 0xbe, 0x61, 0x52, 0xaa, 0x42, 0x8c, 0xdd, 0x80, 0x0c, 0x06, 0x2d };

/* ECC NIST-P256 Key Pair */
static const uint8_t eccP256PubKey[] =
{
    0xd6, 0x60, 0x62, 0x71, 0x13, 0x1e, 0x7e, 0x7e, 0x61, 0x7a, 0x81, 0xaa, 0x11, 0xf0, 0x9e, 0x7e,0xd5, 0x63, 0x11, 0x82, 0x88, 0x23, 0x36, 0x7a, 0x86, 0x9b, 0x45, 0x40, 0x40, 0xb3, 0xf9, 0x05,
    0xcf, 0x48, 0x97, 0x76, 0x61, 0x31, 0xaa, 0x8b, 0x7f, 0x80, 0x45, 0x3a, 0x15, 0xbf, 0x90, 0xf7, 0x51, 0x78, 0x78, 0x57, 0x9d, 0x5a, 0x4f, 0x97, 0x3a, 0xea, 0x5b, 0xb1, 0x15, 0x42, 0xe0, 0x7f
};
static const uint8_t eccP256PrivKey[] =
{
    0x00, 0xd0, 0x07, 0xe1, 0xb9, 0xaf, 0xcc, 0x31, 0x2e, 0xec, 0x9c, 0xec, 0xff, 0xa0, 0x28, 0x07, 0x52, 0xbb, 0xd1, 0x95, 0x31, 0x82, 0xed, 0xef, 0x12, 0xf3, 0xfc, 0x36, 0x6e, 0x8f, 0x43, 0x56
};

/* Data to be signed */
static const uint8_t message[] = "The surest way to corrupt a youth is to instruct him to hold in higher esteem those who think alike than those who think differently - Friedrich Nietzsche 2020";

/* IV example (used for AES CBC and AEAD example) */
static const uint8_t iv[] =
{ 0xff, 0xbc, 0x51, 0x6a, 0x8f, 0xbe, 0x61, 0x52, 0xaa, 0x42, 0x8c, 0xdd, 0x80, 0x0c, 0x06, 0x2d };

/* AES Streaming Data */
static const uint8_t streaming_key[] = { 0xc4, 0x91, 0xca, 0x31, 0xf9, 0x17, 0x08, 0x45, 0x8e, 0x29, 0xa9, 0x25, 0xec, 0x55, 0x8d, 0x78 };
static const uint8_t iv_streaming[]  = { 0x9e, 0xf9, 0x34, 0x94, 0x6e, 0x5c, 0xd0, 0xae, 0x97, 0xbd, 0x58, 0x53, 0x2c, 0xb4, 0x93, 0x81 };

static const uint8_t aesStreamingPlainText[] =
{
    0xcb, 0x6a, 0x78, 0x7e, 0x0d, 0xec, 0x56, 0xf9, 0xa1, 0x65, 0x95, 0x7f, 0x81, 0xaf, 0x33, 0x6c,
    0xa6, 0xb4, 0x07, 0x85, 0xd9, 0xe9, 0x40, 0x93, 0xc6, 0x19, 0x0e, 0x51, 0x52, 0x64, 0x9f, 0x88,
    0x2e, 0x87, 0x4d, 0x79, 0xac, 0x5e, 0x16, 0x7b, 0xd2, 0xa7, 0x4c, 0xe5, 0xae, 0x08, 0x8d, 0x2e,
    0xe8, 0x54, 0xf6, 0x53, 0x9e, 0x0a, 0x94, 0x79, 0x6b, 0x1e, 0x1b, 0xd4, 0xc9, 0xfc, 0xdb, 0xc7,
    0x9a, 0xcb, 0xef, 0x4d, 0x01, 0xee, 0xb8, 0x97, 0x76, 0xd1, 0x8a, 0xf7, 0x1a, 0xe2, 0xa4, 0xfc,
    0x47, 0xdd, 0x66, 0xdf, 0x6c, 0x4d, 0xbe, 0x1d, 0x18, 0x50, 0xe4, 0x66, 0x54, 0x9a, 0x47, 0xb6,
    0x36, 0xbc, 0xc7, 0xc2, 0xb3, 0xa6, 0x24, 0x95, 0xb5, 0x6b, 0xb6, 0x7b, 0x6d, 0x45, 0x5f, 0x1e,
    0xeb, 0xd9, 0xbf, 0xef, 0xec, 0xbc, 0xa6, 0xc7, 0xf3, 0x35, 0xcf, 0xce, 0x9b, 0x45, 0xcb, 0x9d
};

static const uint8_t aesStreamingCipherText[] =
{
    0x7b, 0x29, 0x31, 0xf5, 0x85, 0x5f, 0x71, 0x71, 0x45, 0xe0, 0x0f, 0x15, 0x2a, 0x9f, 0x47, 0x94,
    0x35, 0x9b, 0x1f, 0xfc, 0xb3, 0xe5, 0x5f, 0x59, 0x4e, 0x33, 0x09, 0x8b, 0x51, 0xc2, 0x3a, 0x6c,
    0x74, 0xa0, 0x6c, 0x1d, 0x94, 0xfd, 0xed, 0x7f, 0xd2, 0xae, 0x42, 0xc7, 0xdb, 0x7a, 0xca, 0xef,
    0x58, 0x44, 0xcb, 0x33, 0xae, 0xdd, 0xc6, 0x85, 0x25, 0x85, 0xed, 0x00, 0x20, 0xa6, 0x69, 0x9d,
    0x2c, 0xb5, 0x38, 0x09, 0xce, 0xfd, 0x16, 0x91, 0x48, 0xce, 0x42, 0x29, 0x2a, 0xfa, 0xb0, 0x63,
    0x44, 0x39, 0x78, 0x30, 0x6c, 0x58, 0x2c, 0x18, 0xb9, 0xce, 0x0d, 0xa3, 0xd0, 0x84, 0xce, 0x4d,
    0x3c, 0x48, 0x2c, 0xfd, 0x8f, 0xcf, 0x1a, 0x85, 0x08, 0x4e, 0x89, 0xfb, 0x88, 0xb4, 0x0a, 0x08,
    0x4d, 0x5e, 0x97, 0x24, 0x66, 0xd0, 0x76, 0x66, 0x12, 0x6f, 0xb7, 0x61, 0xf8, 0x40, 0x78, 0xf2
};

/* AES ECB Data */
static const uint8_t aesEcbKey[] =
{
    0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6,
    0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c
};

static const uint8_t aesEcbPlaintext[] =
{
    0x6b, 0xc1, 0xbe, 0xe2, 0x2e, 0x40, 0x9f, 0x96,
    0xe9, 0x3d, 0x7e, 0x11, 0x73, 0x93, 0x17, 0x2a
};

static const uint8_t aesEcbCiphertext[] =
{
    0x3a, 0xd7, 0x7b, 0xb4, 0x0d, 0x7a, 0x36, 0x60,
    0xa8, 0x9e, 0xca, 0xf3, 0x24, 0x66, 0xef, 0x97
};

static const uint32_t aesStreamingKeyLength = ARRAY_SIZE(streaming_key);
static const uint32_t aesEcbKeyLength = ARRAY_SIZE(aesEcbKey);
static const uint32_t aesEcbPlaintextLength = ARRAY_SIZE(aesEcbPlaintext);
static const uint32_t aesEcbCiphertextLength = ARRAY_SIZE(aesEcbCiphertext);
static const uint32_t aesStreamingPlaintextLength = ARRAY_SIZE(aesStreamingPlainText);
static const uint32_t aesStreamingCiphertextLength = ARRAY_SIZE(aesStreamingCipherText);

/* Hash Data */
static const uint8_t sha1Message[] =
{
    0x97, 0x77, 0xcf, 0x90, 0xdd, 0x7c, 0x7e, 0x86,
    0x35, 0x06
};
static const uint8_t sha1Hash[] =
{
    0x05, 0xc9, 0x15, 0xb5, 0xed, 0x4e, 0x4c, 0x4a,
    0xff, 0xfc, 0x20, 0x29, 0x61, 0xf3, 0x17, 0x43,
    0x71, 0xe9, 0x0b, 0x5c
};
static const uint8_t sha256Message[] =
{
    0x59, 0xeb, 0x45, 0xbb, 0xbe, 0xb0, 0x54, 0xb0,
    0xb9, 0x73, 0x34, 0xd5, 0x35, 0x80, 0xce, 0x03,
    0xf6, 0x99
};
static const uint8_t sha256Hash[] =
{
    0x32, 0xc3, 0x8c, 0x54, 0x18, 0x9f, 0x23, 0x57,
    0xe9, 0x6b, 0xd7, 0x7e, 0xb0, 0x0c, 0x2b, 0x9c,
    0x34, 0x1e, 0xbe, 0xba, 0xcc, 0x29, 0x45, 0xf9,
    0x78, 0x04, 0xf5, 0x9a, 0x93, 0x23, 0x82, 0x88
};

static const uint8_t sha512Message[] =
{
    0x16, 0xb1, 0x70, 0x74, 0xd3, 0xe3, 0xd9, 0x75,
    0x57, 0xf9, 0xed, 0x77, 0xd9, 0x20, 0xb4, 0xb1,
    0xbf, 0xf4, 0xe8, 0x45, 0xb3, 0x45, 0xa9, 0x22
};
static const uint8_t sha512Hash[] =
{
    0x68, 0x84, 0x13, 0x45, 0x82, 0xa7, 0x60, 0x04,
    0x64, 0x33, 0xab, 0xcb, 0xd5, 0x3d, 0xb8, 0xff,
    0x1a, 0x89, 0x99, 0x58, 0x62, 0xf3, 0x05, 0xb8,
    0x87, 0x02, 0x0f, 0x6d, 0xa6, 0xc7, 0xb9, 0x03,
    0xa3, 0x14, 0x72, 0x1e, 0x97, 0x2b, 0xf4, 0x38,
    0x48, 0x3f, 0x45, 0x2a, 0x8b, 0x09, 0x59, 0x62,
    0x98, 0xa5, 0x76, 0xc9, 0x03, 0xc9, 0x1d, 0xf4,
    0xa4, 0x14, 0xc7, 0xbd, 0x20, 0xfd, 0x1d, 0x07
};

static const hseHashAlgo_t hashAlgos[] =
{
    HSE_HASH_ALGO_SHA_1,
    HSE_HASH_ALGO_SHA2_256,
    HSE_HASH_ALGO_SHA2_512
};

static const uint8_t *hashMessages[] =
{
    sha1Message,
    sha256Message,
    sha512Message
};

static const uint32_t hashMessagesLengths[] =
{
    ARRAY_SIZE(sha1Message),
    ARRAY_SIZE(sha256Message),
    ARRAY_SIZE(sha512Message)
};

static const uint8_t *hashExpectedOutput[] =
{
    sha1Hash,
    sha256Hash,
    sha512Hash
};

static const uint32_t hashLength[] =
{
    ARRAY_SIZE(sha1Hash),
    ARRAY_SIZE(sha256Hash),
    ARRAY_SIZE(sha512Hash),
};

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

uint8_t testOutput[BUFF_LEN] = {0};
uint8_t hashTestOutput[NUMBER_OF_ASYNC_REQ][BUFF_LEN] = {0};
uint32_t hashTestOutputLength[NUMBER_OF_ASYNC_REQ] = {BUFF_LEN, BUFF_LEN, BUFF_LEN};

hashCallbackParams_t callbackParams[HSE_NUM_OF_MU_INSTANCES][HSE_NUM_OF_CHANNELS_PER_MU];

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

exampleState_t gAesStreamingExample = NOT_RUN;
exampleState_t gAesExample = NOT_RUN;
exampleState_t gHashAsyncExample = NOT_RUN;
exampleState_t gEcdsaExample = NOT_RUN;
exampleState_t gSessionKeysExample = NOT_RUN;
exampleState_t gSysAuthExample = NOT_RUN;
exampleState_t gUpdateNvmKeyExample = NOT_RUN;
exampleState_t gHashSgtExample = NOT_RUN;

volatile uint32_t numberOfResponses = 0;
volatile hseSrvResponse_t asyncResponses[HSE_NUM_OF_MU_INSTANCES][HSE_NUM_OF_CHANNELS_PER_MU] = {0};

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/* Functions for asynchronous request examples */
static hseSrvResponse_t HSE_HashDataNonBlocking
(
    uint8_t u8MuInstance,
    hseAccessMode_t accessMode,
    uint32_t streamId,
    hseHashAlgo_t hashAlgo,
    const uint8_t *pInput,
    uint32_t inputLength,
    uint8_t *pHash,
    uint32_t *pHashLength
);
static void HSE_HashRequestCallback(hseSrvResponse_t hseSrvResponse, void* pArg);
static void VerifyOutput(void);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*************************************************************************************************
* Description:  Callback of Hash Request. Logs and checks the HSE response.
************************************************************************************************/
static void HSE_HashRequestCallback(hseSrvResponse_t hseSrvResponse, void* pArg)
{
    /* Argument is a callbackInfo_t pointer which contains the MU interface
     * and the channel on which the request was sent */
    hashCallbackParams_t *pCallbackParams = (hashCallbackParams_t *) pArg;
    uint8_t u8MuInstance = pCallbackParams->u8MuInstance;
    uint8_t u8MuChannel = pCallbackParams->u8MuChannel;

    /* Log the response */
    asyncResponses[u8MuInstance][u8MuChannel] = hseSrvResponse;
    numberOfResponses += 1;

    /* Check the HSE response */
    if (HSE_SRV_RSP_OK != hseSrvResponse)
    {
        gHashAsyncExample = FAILED;
    }
}

/*************************************************************************************************
* Description:  Non-blocking hash request.
************************************************************************************************/
static hseSrvResponse_t HSE_HashDataNonBlocking
(
    uint8_t u8MuInstance,
    hseAccessMode_t accessMode,
    uint32_t streamId,
    hseHashAlgo_t hashAlgo,
    const uint8_t *pInput,
    uint32_t inputLength,
    uint8_t *pHash,
    uint32_t *pHashLength
)
{
    uint8_t u8MuChannel;
    hseTxOptions_t asyncTxOptions;
    hseSrvDescriptor_t *pHseSrvDesc;
    hseHashSrv_t *pHashSrv;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Get a free channel on u8MuInstance */
    u8MuChannel = HSE_AllocateFreeChannel(u8MuInstance);
    if(HSE_INVALID_CHANNEL == u8MuChannel)
    {
        goto exit;
    }

    /* Clear the service descriptor placed in shared memory */
    pHseSrvDesc = &gHseSrvDesc[u8MuInstance][u8MuChannel];
    memset(pHseSrvDesc, 0, sizeof(hseSrvDescriptor_t));

    pHashSrv = &(pHseSrvDesc->hseSrv.hashReq);

    pHseSrvDesc->srvId      = HSE_SRV_ID_HASH;
    pHashSrv->accessMode    = accessMode;
    pHashSrv->streamId      = streamId;
    pHashSrv->hashAlgo      = hashAlgo;
    pHashSrv->inputLength   = inputLength;
    pHashSrv->pInput        = PTR_TO_HOST_ADDR(pInput);
    pHashSrv->pHash         = PTR_TO_HOST_ADDR(pHash);
    pHashSrv->pHashLength   = PTR_TO_HOST_ADDR(pHashLength);

    /* Complete callback info and async txOptions */
    callbackParams[u8MuInstance][u8MuChannel].u8MuInstance  = u8MuInstance;
    callbackParams[u8MuInstance][u8MuChannel].u8MuChannel   = u8MuChannel;
    asyncTxOptions.txOp              = HSE_TX_ASYNCHRONOUS;
    asyncTxOptions.pfAsyncCallback   = &(HSE_HashRequestCallback);
    asyncTxOptions.pCallbackpArg     = (void *) (&(callbackParams[u8MuInstance][u8MuChannel]));

    /* Send the request asynchronously */
    srvResponse = HSE_Send(u8MuInstance, u8MuChannel, asyncTxOptions, pHseSrvDesc);
exit:
    return srvResponse;
}

/*************************************************************************************************
* Description:  Check hash requests outputs match the expected.
************************************************************************************************/
static void VerifyOutput(void)
{
    /* Check output length and data are matching expected hash */
    for (uint8_t i = 0U; i < NUMBER_OF_ASYNC_REQ; i++)
        if( (hashLength[i] != hashTestOutputLength[i]) ||
            (0 != memcmp(hashTestOutput[i], hashExpectedOutput[i], hashLength[i])) )
            goto exit;

    gHashAsyncExample = PASSED;
    return;

exit:
    gHashAsyncExample = FAILED;
}

/*******************************************************************************
 * Description: Sets the authorization key for CUST_SUPER_USER.
 ******************************************************************************/
static hseSrvResponse_t SetCustAuthorizationKey(void)
{
    hseSrvResponse_t hseResponse;

    /* Set the CUST_SUPER_USER authorization key */
    /* This is an example as NVM keys CANNOT be imported in plain unless the slot is empty (see `HSE_UpdateNvmKey_Example`) */
    hseResponse = HSE_ImportRsaKey(NVM_RSA2048_PUB_CUSTAUTH_HANDLE,
        HSE_KEY_TYPE_RSA_PUB, (HSE_KF_USAGE_VERIFY | HSE_KF_USAGE_AUTHORIZATION),
        rsa2048CustAuthKeyModulus, ARRAY_SIZE(rsa2048CustAuthKeyModulus),
        rsa2048CustAuthKeyPubExp, ARRAY_SIZE(rsa2048CustAuthKeyPubExp), NULL);
    if(HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }

    /* Set a copy of authorization key for signature generation using HSE (over challenge) */
    /* :: Intended use case - Sign challenge via external means */
    hseResponse = HSE_ImportRsaKey(NVM_RSA2048_PAIR_CUSTAUTH_COPY_HANDLE,
        HSE_KEY_TYPE_RSA_PAIR, (HSE_KF_USAGE_SIGN),
        rsa2048CustAuthKeyModulus, ARRAY_SIZE(rsa2048CustAuthKeyModulus),
        rsa2048CustAuthKeyPubExp, ARRAY_SIZE(rsa2048CustAuthKeyPubExp), rsa2048CustAuthKeyPrivExp);
    if(HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }

exit:
    return hseResponse;
}

/*******************************************************************************
 * Description: Authorization Request/Response sequence for CUST SU
 ******************************************************************************/
static hseSrvResponse_t AuthorizeCust(void)
{
    hseSrvResponse_t hseResponse;

    uint8_t challenge[CHALLENGE_LENGTH] = {0U};
    uint8_t sign0[SIGN_LENGTH_MAX] = {0U};
    uint32_t signLen0;
    /* Auth scheme used for CUST SU authorization */
    hseAuthScheme_t rsaPssSignScheme = {
        .sigScheme.signSch = HSE_SIGN_RSASSA_PSS,
        .sigScheme.sch.rsaPss.hashAlgo = HSE_HASH_ALGO_SHA2_512,
        .sigScheme.sch.rsaPss.saltLength = PSS_SALT_LENGTH
    };

    /* Send the authorization request */
    memset(challenge, 0x00U, CHALLENGE_LENGTH);
    hseResponse = HSE_SysAuthorizationReq(HSE_SYS_AUTH_ALL, HSE_RIGHTS_SUPER_USER,
        NVM_RSA2048_PUB_CUSTAUTH_HANDLE, &rsaPssSignScheme, challenge);
    if(HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }

    /* Sign the challenge using the pair private key of the authorization key */
    /* :: Intended use case - Sign challenge via external means */
    signLen0 = SIGN_LENGTH_MAX;
    memset(sign0, 0x00U, SIGN_LENGTH_MAX);
    hseResponse = HSE_RsaPss(HSE_AUTH_DIR_GENERATE, HSE_HASH_ALGO_SHA2_512, PSS_SALT_LENGTH,
        NVM_RSA2048_PAIR_CUSTAUTH_COPY_HANDLE, challenge, CHALLENGE_LENGTH, FALSE, sign0, &signLen0);
    if(HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }

    /* Send the authorization response */
    hseResponse = HSE_SysAuthorizationResp(sign0, NULL, signLen0, 0UL);
    if(HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }
exit:
    return hseResponse;
}

/*************************************************************************************************
* Description:  Example of AES requests sent synchronously.
* Operation: AES ECB Encrypt/Decrypt.
* Requests type: ImportKey, SymCipher Encrypt/Decrypt.
************************************************************************************************/
static void HSE_Aes_Example(void)
{
    hseKeyHandle_t aesEcbKeyHandle;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    gAesExample = RUNNING;

    /*--------- Import Key Request ---------*/

    /* Get an empty slot from the key catalog */
    aesEcbKeyHandle = RAM_AES128_KEY1;

    /* Import the AES key for cipher operations on data (ENC/DEC) */
    srvResponse = HSE_ImportSymKey(aesEcbKeyHandle, HSE_KEY_TYPE_AES,
        (HSE_KF_USAGE_ENCRYPT|HSE_KF_USAGE_DECRYPT), aesEcbKey, aesEcbKeyLength);

    /* Check the response */
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    /*--------- AES ECB Encrypt Request ---------*/

    memset(testOutput, 0, BUFF_LEN);

    /* Send the request */
    srvResponse = HSE_AesEncrypt(HSE_CIPHER_BLOCK_MODE_ECB, aesEcbKeyHandle,
        NULL, aesEcbPlaintext, aesEcbPlaintextLength, testOutput);

    /* Check response and output */
    if( (HSE_SRV_RSP_OK != srvResponse) ||
        (0 != memcmp(testOutput, aesEcbCiphertext, aesEcbCiphertextLength)) )
    {
        goto exit;
    }

    /*--------- AES ECB Decrypt Request ---------*/

    memset(testOutput, 0, BUFF_LEN);

    /* Send the request */
    srvResponse = HSE_AesDecrypt(HSE_CIPHER_BLOCK_MODE_ECB, aesEcbKeyHandle,
        NULL, aesEcbCiphertext, aesEcbCiphertextLength, testOutput);

    /* Check response and output */
    if( (HSE_SRV_RSP_OK != srvResponse) ||
        (0 != memcmp(testOutput, aesEcbPlaintext, aesEcbPlaintextLength)))
    {
        goto exit;
    }

    /*--------- AES Fast CMAC Generate/Verify Requests with STM measuring ---------*/
    {
        uint32_t counter;

        /* Import the AES key for MAC operations on data (SIGN/VERIFY) */
        srvResponse = HSE_ImportSymKey(aesEcbKeyHandle, HSE_KEY_TYPE_AES,
            (HSE_KF_USAGE_SIGN|HSE_KF_USAGE_VERIFY), aesEcbKey, aesEcbKeyLength);
        if(HSE_SRV_RSP_OK != srvResponse)
            goto exit;

        memset(testOutput, 0, BUFF_LEN);

        STM_0_Start(0UL, PRESCALER);

        /* Generate */
        srvResponse = HSE_FastCmac(HSE_AUTH_DIR_GENERATE, RAM_AES128_KEY1,
            aesEcbPlaintext, NUM_OF_ELEMS(aesEcbPlaintext) * 8U, testOutput, 128U);
        if(HSE_SRV_RSP_OK != srvResponse)
            goto exit;
        /* Verify */
        srvResponse = HSE_FastCmac(HSE_AUTH_DIR_VERIFY, RAM_AES128_KEY1,
            aesEcbPlaintext, NUM_OF_ELEMS(aesEcbPlaintext) * 8U, testOutput, 128U);
        if(HSE_SRV_RSP_OK != srvResponse)
            goto exit;

        counter = STM_0_ReadCnt();
        STM_0_Stop();
        (void)counter;
    }

    gAesExample = PASSED;
    _printf("HSE_Aes_Example: OK\n");
    return;

exit:
    STM_0_Stop();
    gAesExample = FAILED;
}

/*************************************************************************************************
* Description: Example of AES streaming
************************************************************************************************/
static void HSE_AesStreaming_Example(void)
{
    uint32_t offset = STREAMING_LEN;
    hseKeyHandle_t aesCbcKeyHandle;
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    gAesStreamingExample = RUNNING;

    /*--------- Import Key Request ---------*/

    /* Get an empty slot from the key catalog */
    aesCbcKeyHandle = RAM_AES128_KEY1;

    /* Import the AES key for cipher operations on data (ENC/DEC) */
    srvResponse = HSE_ImportSymKey(aesCbcKeyHandle, HSE_KEY_TYPE_AES,
        (HSE_KF_USAGE_ENCRYPT|HSE_KF_USAGE_DECRYPT), streaming_key, aesStreamingKeyLength);

    /* Check the response */
    if(HSE_SRV_RSP_OK != srvResponse)
    {
        goto exit;
    }

    /*--------- AES streaming CBC Encrypt Request ---------*/
    memset(testOutput, 0, BUFF_LEN);

    srvResponse = HSE_AesStreamStart(HSE_CIPHER_BLOCK_MODE_CBC, STREAM_ID, HSE_CIPHER_DIR_ENCRYPT,
        HSE_SGT_OPTION_NONE, aesCbcKeyHandle, iv_streaming, aesStreamingPlainText, STREAMING_LEN, testOutput);

    if(HSE_SRV_RSP_OK != srvResponse)
        goto exit;

    for (; offset < aesStreamingPlaintextLength  - STREAMING_LEN; offset += STREAMING_LEN)
	{
        srvResponse = HSE_AesStreamUpdateFinish(HSE_ACCESS_MODE_UPDATE, STREAM_ID, HSE_SGT_OPTION_NONE,
            aesStreamingPlainText + offset, STREAMING_LEN, testOutput + offset);

        if(HSE_SRV_RSP_OK != srvResponse)
            goto exit;
    }


    srvResponse = HSE_AesStreamUpdateFinish(HSE_ACCESS_MODE_FINISH, STREAM_ID, HSE_SGT_OPTION_NONE,
        aesStreamingPlainText + offset, STREAMING_LEN, testOutput + offset);

    /* Check response and output */
    if( (HSE_SRV_RSP_OK != srvResponse) ||
        (0 != memcmp(testOutput, aesStreamingCipherText, aesStreamingCiphertextLength)))
    {
        goto exit;
    }

    /*--------- AES streaming CBC Decrypt Request ---------*/
    offset = STREAMING_LEN;
    memset(testOutput, 0, BUFF_LEN);

    srvResponse = HSE_AesStreamStart(HSE_CIPHER_BLOCK_MODE_CBC, STREAM_ID, HSE_CIPHER_DIR_DECRYPT,
        HSE_SGT_OPTION_NONE, aesCbcKeyHandle, iv_streaming, aesStreamingCipherText, STREAMING_LEN, testOutput);

    if(HSE_SRV_RSP_OK != srvResponse)
        goto exit;

    for (; offset < aesStreamingCiphertextLength  - STREAMING_LEN; offset += STREAMING_LEN)
	{
        srvResponse = HSE_AesStreamUpdateFinish(HSE_ACCESS_MODE_UPDATE, STREAM_ID, HSE_SGT_OPTION_NONE,
            aesStreamingCipherText + offset, STREAMING_LEN, testOutput + offset);

        if(HSE_SRV_RSP_OK != srvResponse)
            goto exit;
    }

    srvResponse = HSE_AesStreamUpdateFinish(HSE_ACCESS_MODE_FINISH, STREAM_ID, HSE_SGT_OPTION_NONE,
        aesStreamingCipherText + offset, STREAMING_LEN, testOutput + offset);

    /* Check response and output */
    if( (HSE_SRV_RSP_OK != srvResponse) ||
        (0 != memcmp(testOutput, aesStreamingPlainText, aesStreamingPlaintextLength)))
    {
        goto exit;
    }

    gAesStreamingExample = PASSED;
    _printf("HSE_AesStreaming_Example: OK\n");
    return;
exit:
    gAesStreamingExample = FAILED;
}

/*************************************************************************************************
* Description:  Example of Hash requests sent asynchronously.
* Operation: Hashes: SHA-1, SHA2-256, SHA2-512.
* Requests type: Hash.
************************************************************************************************/
static void HSE_HashAsync_Example(void)
{
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    gHashAsyncExample = RUNNING;

    /*--------- Hash Requests ---------*/

    /* Enable Receive Interrupt on all channels of MU0 */
    HSE_MU_EnableInterrupts(MU0, HSE_INT_RESPONSE, 0xFFFFUL);

    /* Send requests asynchronously */
    for (uint8_t i = 0U; i < NUMBER_OF_ASYNC_REQ; i++)
    {
        srvResponse = HSE_HashDataNonBlocking(MU0, HSE_ACCESS_MODE_ONE_PASS,
            0, hashAlgos[i], hashMessages[i], hashMessagesLengths[i],
            hashTestOutput[i], &(hashTestOutputLength[i]));
        /* Verify that transmission was successful */
        if (HSE_SRV_RSP_OK != srvResponse)
        {
            goto exit;
        }
    }
    /* Wait all responses */
    while (numberOfResponses < NUMBER_OF_ASYNC_REQ) {};
    /* Responses are checked in callback */
    if(FAILED != gHashAsyncExample)
    {
        /* Check outputs */
        VerifyOutput();
    }

    /* Disable Receive Interrupt on all channels of MU0 */
    HSE_MU_DisableInterrupts(MU0, HSE_INT_RESPONSE, 0xFFFFUL);

    _printf("HSE_HashAsync_Example: OK\n");
    return;
exit:
    gHashAsyncExample = FAILED;
}

/*************************************************************************************************
* Description:  Example of Hash request sent synchronously using SGT list as input.
* Operation: Hash: SHA2-512.
* Requests type: Hash.
************************************************************************************************/
static void HSE_HashSgt_Example(void)
{
    uint32_t outLen = ARRAY_SIZE(testOutput);
    hseScatterList_t inputScatterList[3] = {0U};
    hseSrvResponse_t srvResponse = HSE_SRV_RSP_GENERAL_ERROR;

    memset(testOutput, 0, BUFF_LEN);

    gHashSgtExample = RUNNING;

    /* Input is provided as a SGT list with 3 entries */
    inputScatterList[0].pPtr = PTR_TO_HOST_ADDR(&sha512Message[0U]);
    inputScatterList[0].length = 8U;

    inputScatterList[1].pPtr = PTR_TO_HOST_ADDR(&sha512Message[8U]);
    inputScatterList[1].length = 10U;

    inputScatterList[2].pPtr = PTR_TO_HOST_ADDR(&sha512Message[18U]);
    inputScatterList[2].length = HSE_SGT_FINAL_CHUNK_BIT_MASK | 6U; /* HSE_SGT_FINAL_CHUNK_BIT_MASK used to mark the last entry */

    /* Send the request
        - HSE_SGT_OPTION_INPUT used to signal INPUT is a SGT list 
        - input length provided as the total over all SGT entries */
    srvResponse = HSE_Hash(HSE_HASH_ALGO_SHA2_512, HSE_SGT_OPTION_INPUT, (uint8_t*)(&inputScatterList), 24U, testOutput, &outLen);

    /* Check response and output */
    if( (HSE_SRV_RSP_OK != srvResponse) ||
        (0 != memcmp(testOutput, sha512Hash, ARRAY_SIZE(sha512Hash))))
    {
        goto exit;
    }

    gHashSgtExample = PASSED;
    _printf("HSE_HashSgt_Example: OK\n");
    return;
exit:
    gHashSgtExample = FAILED; 
}

/*************************************************************************************************
* Description:  Example of ECC key import and ECDSA Sign/Verify operations
************************************************************************************************/
static void HSE_Ecdsa_Example(void)
{
    hseSrvResponse_t hseResponse;

    gEcdsaExample = RUNNING;

    /* Send the Import key request to HSE */
    /* This is an example as NVM keys CANNOT be imported in plain unless the slot is empty (see `HSE_UpdateNvmKey_Example`) */
    hseResponse = HSE_ImportEccKey(NVM_ECC_KEY_HANDLE, HSE_KEY_TYPE_ECC_PAIR,
        (HSE_KF_USAGE_SIGN | HSE_KF_USAGE_VERIFY),
        HSE_EC_SEC_SECP256R1, eccP256PubKey, eccP256PrivKey);
    if(HSE_SRV_RSP_OK != hseResponse)
        goto exit;

    /* ECDSA requests */
    {
        uint8_t signR[256] = {0};
        uint8_t signS[256] = {0};
        uint32_t signRLen = ARRAY_SIZE(signR);
        uint32_t signSLen = ARRAY_SIZE(signS);

        /* ECDSA Sign request */
        hseResponse = HSE_Ecdsa(HSE_AUTH_DIR_GENERATE, HSE_HASH_ALGO_SHA2_256,
            NVM_ECC_KEY_HANDLE, message, ARRAY_SIZE(message), FALSE,
            signR, signS, &signRLen, &signSLen);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;

        /* ECDSA Verify request */
        hseResponse = HSE_Ecdsa(HSE_AUTH_DIR_VERIFY, HSE_HASH_ALGO_SHA2_256,
            NVM_ECC_KEY_HANDLE, message, ARRAY_SIZE(message), FALSE,
            signR, signS, &signRLen, &signSLen);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;
    }

    gEcdsaExample = PASSED;
    _printf("HSE_Ecdsa_Example: OK\n");
    return;
exit:
    gEcdsaExample = FAILED;
}

/*************************************************************************************************
* Description:  Key Exchange example using HSE
* Operations:   ECC key generation, ECC key import, ephemeral ECDH, Key derivation (KDF SP800_108),
                Key extraction - AES, HMAC keys from derived key material
************************************************************************************************/
static void HSE_SessionKeys_Example(void)
{
    hseSrvResponse_t hseResponse;
    /* Declare the information about the key to be generated */
    hseKeyInfo_t eccPairKeyInfo = {
        .keyType = HSE_KEY_TYPE_ECC_PAIR,                   /* Will generate an ECC key pair */
        .keyFlags = HSE_KF_USAGE_EXCHANGE,                  /* Usage flags for this key - EXCHANGE */
        .keyBitLen = 256U,                                  /* Base length in bits of the key - for ECC corresponds to Curve bit length - 256 */
        .specific.eccCurveId = HSE_EC_SEC_SECP256R1,        /* Specific for ECC key - curve ID - NIST 256R1 */
    };

    gSessionKeysExample = RUNNING;

    /* Generate an ECC key pair in RAM (ephemeral ECDH) */
    hseResponse = HSE_GenerateEccKey(RAM_ECC_PAIR_KEY_HANDLE, eccPairKeyInfo, NULL);
    if(HSE_SRV_RSP_OK != hseResponse)
        goto exit;

    /* Import the peer public key */
    hseResponse = HSE_ImportEccKey(RAM_ECC_PUB_KEY_HANDLE, HSE_KEY_TYPE_ECC_PUB,
        HSE_KF_USAGE_EXCHANGE, HSE_EC_SEC_SECP256R1, eccP256PubKey, NULL);
    if(HSE_SRV_RSP_OK != hseResponse)
        goto exit;

    /* Compute DH Shared Secret (ECDH) */
    hseResponse = HSE_Ecdh(RAM_ECC_PAIR_KEY_HANDLE, RAM_ECC_PUB_KEY_HANDLE, DH_SHARED_SECRET_HANDLE);
    if(HSE_SRV_RSP_OK != hseResponse)
        goto exit;

    /* Derive Key using SP800_108 KDF */
    {
        /* Declare the KDF scheme (used with HMAC-SHA2-256, fixed info deriving 1024 bits) */
        hseKdfSP800_108Scheme_t kdfScheme =
        {
            .mode = HSE_KDF_SP800_108_COUNTER,
            .kdfCommon = {
                .srcKeyHandle = DH_SHARED_SECRET_HANDLE,
                .targetKeyHandle = DERIVED_KEY_HANDLE,
                .keyMatLen = BITS_TO_BYTES(1024U),
                .kdfPrf = HSE_KDF_PRF_HMAC,
                .prfAlgo.hmacHash = HSE_KDF_SHA2_256,
                .pInfo = PTR_TO_HOST_ADDR(kdfFixedInfo),
                .infoLength = ARRAY_SIZE(kdfFixedInfo),
            },
            #if defined(HSE_KDF_SP800_108_COUNTER_LEN_4)
            .counterByteLength = HSE_KDF_SP800_108_COUNTER_LEN_4,
            #endif /* HSE_KDF_SP800_108_COUNTER_LEN_4 */
        };
        hseResponse = HSE_KdfSP800_108(&kdfScheme);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;
    }

    /* Extract from the derived key material 3 keys: 192-bits AES, 256-bits AES, HMAC */
    {
        /* Declare the information about the 192 bits AES key to be extracted */
        hseKeyInfo_t aes192KeyInfo = {
            .keyType = HSE_KEY_TYPE_AES,                                /* Will generate an AES key */
            .keyFlags = (HSE_KF_USAGE_ENCRYPT|HSE_KF_USAGE_DECRYPT),    /* Usage flags for this key - Encrypt/Decrypt */
            .keyBitLen = 192U,                                          /* 192 bits key */
        };
        /* Declare the information about the HMAC key to be extracted */
        hseKeyInfo_t hmacKeyInfo = {
            .keyType = HSE_KEY_TYPE_HMAC,                               /* Will generate a HMAC key */
            .keyFlags = (HSE_KF_USAGE_SIGN|HSE_KF_USAGE_VERIFY),        /* Usage flags for this key - Sign/Verify */
            .keyBitLen = 512U,                                          /* 512 bits key */
        };
        /* Declare the information about the 256 bits AES key to be extracted */
        hseKeyInfo_t aes256KeyInfo = {
            .keyType = HSE_KEY_TYPE_AES,                                /* Will generate an AES key */
            .keyFlags = (HSE_KF_USAGE_ENCRYPT|HSE_KF_USAGE_DECRYPT|     /* Usage flags for this key - Encrypt/Decrypt/Sign/Verify - AEAD */
                HSE_KF_USAGE_SIGN|HSE_KF_USAGE_VERIFY),
            .keyBitLen = 256U,                                          /* 256 bits key */
        };

        /* Extract the 192 bits AES key from the beggining of the derived key */
        hseResponse = HSE_KeyDeriveCopyKey(DERIVED_KEY_HANDLE, 0U, RAM_AES256_KEY1, aes192KeyInfo);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;

        /* Extract the HMAC key from the remaining derived key material */
        hseResponse = HSE_KeyDeriveCopyKey(DERIVED_KEY_HANDLE, BITS_TO_BYTES(aes192KeyInfo.keyBitLen), RAM_HMAC_KEY1, hmacKeyInfo);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;

        /* Extract the 256 bits AES key from the remaining derived key material */
        hseResponse = HSE_KeyDeriveCopyKey(DERIVED_KEY_HANDLE, BITS_TO_BYTES(aes192KeyInfo.keyBitLen) + BITS_TO_BYTES(hmacKeyInfo.keyBitLen),
            RAM_AES256_KEY2, aes256KeyInfo);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;
    }

    /* Keys sanity checks: AES encrypt/decrypt, HMAC sign/verify */
    {
        uint8_t tag[64] = {0U};
        uint32_t tagLen = 64UL;
        uint8_t cipherText[NUM_OF_ELEMS(message)] = {0U};
        uint8_t plainText[NUM_OF_ELEMS(message)] = {0U};

        /* AES key sanity check - Encrypt/Decrypt */
        hseResponse = HSE_AesEncrypt(HSE_CIPHER_BLOCK_MODE_CBC, RAM_AES256_KEY1,
            iv, message, NUM_OF_ELEMS(message), cipherText);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;

        hseResponse = HSE_AesDecrypt(HSE_CIPHER_BLOCK_MODE_CBC, RAM_AES256_KEY1,
            iv, cipherText, NUM_OF_ELEMS(cipherText), plainText);
        if( (HSE_SRV_RSP_OK != hseResponse) ||
            (0 != memcmp(message, plainText, NUM_OF_ELEMS(message))) )
            goto exit;

        /* HMAC key sanity check - Sign/Verify */
        hseResponse = HSE_Hmac(HSE_AUTH_DIR_GENERATE, HSE_HASH_ALGO_SHA2_512,
            RAM_HMAC_KEY1, message, NUM_OF_ELEMS(message), tag, &tagLen);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;

        hseResponse = HSE_Hmac(HSE_AUTH_DIR_VERIFY, HSE_HASH_ALGO_SHA2_512,
            RAM_HMAC_KEY1, message, NUM_OF_ELEMS(message), tag, &tagLen);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;

        /* Alternatively using only 2 calls - AEAD GCM Encrypt/Decrypt */
        tagLen = 16UL;
        memset(tag, 0, 64);
        memset(cipherText, 0, NUM_OF_ELEMS(message));
        memset(plainText, 0, NUM_OF_ELEMS(message));

        hseResponse = HSE_AeadGcmEncrypt(RAM_AES256_KEY2, iv, NUM_OF_ELEMS(iv), NULL, 0UL,
            message, NUM_OF_ELEMS(message), tagLen, tag, cipherText);
        if(HSE_SRV_RSP_OK != hseResponse)
            goto exit;

        hseResponse = HSE_AeadGcmDecrypt(RAM_AES256_KEY2, iv, NUM_OF_ELEMS(iv), NULL, 0UL,
            cipherText, NUM_OF_ELEMS(cipherText), tagLen, tag, plainText);
        if( (HSE_SRV_RSP_OK != hseResponse) ||
            (0 != memcmp(message, plainText, NUM_OF_ELEMS(message))) )
            goto exit;
    }

    gSessionKeysExample = PASSED;
    _printf("HSE_SessionKeys_Example: OK\n");
    return;
exit:
    gSessionKeysExample = FAILED;
}

/*************************************************************************************************
* Description:  SYS Authorization Example
* Operations:   Import RSA keys, Authorization Request/Response, RSA Sign generation, Erase Key
************************************************************************************************/
static void HSE_SysAuthorization_Example(void)
{
    uint16_t hseStatus = 0U;
    hseSrvResponse_t hseResponse;

    gSysAuthExample = RUNNING;

    /* Set the CUST_SUPER_USER authorization key */
    hseResponse = SetCustAuthorizationKey();
    if(HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }

    /* Switch to IN_FIELD User */
    hseResponse = HSE_SysAuthorizationReq(HSE_SYS_AUTH_ALL, HSE_RIGHTS_USER, 0UL, NULL, NULL);
    if(HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }
    /* Check user: IN_FIELD User mode */
    hseStatus = HSE_MU_GetHseStatus(MU0);
    if(!IN_FIELD_USER_MODE(hseStatus))
    {
        goto exit;
    }

    /**/
    /* Operations with USER rights */
    /**/

    /* Try erase operation - NOT_ALLOWED */
    hseResponse = HSE_EraseKey(NVM_RSA2048_PAIR_CUSTAUTH_COPY_HANDLE, HSE_ERASE_NOT_USED);
    if(HSE_SRV_RSP_NOT_ALLOWED != hseResponse)
    {
        goto exit;
    }

    /* Authorize as CUST_SUPER_USER using CUST authorization key */
    hseResponse = AuthorizeCust();
    if(HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }
    /* Check user: CUST_SUPER_USER mode */
    hseStatus = HSE_MU_GetHseStatus(MU0);
    if(!CUST_SUPER_USER_MODE(hseStatus))
    {
        goto exit;
    }

    /**/
    /* Operations with SU rights */
    /**/

    /* Try erase operation - should work now - HSE_SRV_RSP_OK */
    hseResponse = HSE_EraseKey(NVM_RSA2048_PAIR_CUSTAUTH_COPY_HANDLE , HSE_ERASE_NOT_USED);
    if(HSE_SRV_RSP_OK != hseResponse)
    {
        goto exit;
    }

    gSysAuthExample = PASSED;
    _printf("HSE_SysAuthorization_Example: OK\n");
    return;
exit:
    gSysAuthExample = FAILED;
}

/*************************************************************************************************
* Description:  Example of how to update a NVM key with SU rights (must be imported in an authenticated key container)
* Operations:   Import RSA keys, Authorization Request/Response, RSA Sign generation, Erase Key
************************************************************************************************/
static void HSE_UpdateNvmKey_Example(void)
{
    hseSrvResponse_t hseResponse;
    /* Declare the HMAC key info that will update initial version */
    hseKeyInfo_t keyInfo = {
        .keyType = HSE_KEY_TYPE_HMAC,                               /* Will generate a HMAC key */
        .keyFlags = (HSE_KF_USAGE_SIGN|HSE_KF_USAGE_VERIFY),        /* Usage flags for this key - Sign/Verify */
        .keyBitLen = BYTES_TO_BITS(NUM_OF_ELEMS(hmacKeyUpdated)),   /* Key size in bits */
        .keyCounter = 1U                                            /* The key counter must be incremented (greater than current counter of the key in NVM slot) */
    };
    /* Declare the authentication scheme that HSE will use (along with the provision key) to verify the authenticity */
    hseAuthScheme_t authScheme = {
        .macScheme.macAlgo = HSE_MAC_ALGO_GMAC,
        .macScheme.sch.gmac.pIV = PTR_TO_HOST_ADDR(iv),
        .macScheme.sch.gmac.ivLength = NUM_OF_ELEMS(iv),
    };
    uint8_t tag[16U] = {0U};
    uint32_t tagLen = 16UL;
    /*
     *   Declare a key container:
     *      Authenticated buffer that MUST contain:
     *          - key data (i.e. pKey[0], pKey[1], pKey[2], depending on key type)
     *          - key info (which should have a higher key counter)
     *              - optional for public keys (RSA/ECC_PUB)
     *      Optional, may contain any other information
     *      For more details checkout `hse_srv_key_import_export.h` or dedicated chapter in HSE RM
    */
    uint8_t keyContainer[1056] = {0U};
    uint16_t keyInfoOffset, keyDataOffset;
    uint16_t offset = 0U;

    gUpdateNvmKeyExample = RUNNING;

    /* Populate the NVM HMAC key slot with initial key - first import can be done in plain (SU rights) */
    hseResponse = HSE_ImportSymKey(NVM_HMAC_KEY1, HSE_KEY_TYPE_HMAC,
        HSE_KF_USAGE_SIGN, hmacKeyInitial, NUM_OF_ELEMS(hmacKeyInitial));
    if(HSE_SRV_RSP_OK != hseResponse)
        goto exit;


    /* Fill the container with the necessary data */

    /* (Optional) - leave some space for any specific data */
    offset += 50U;

    /* HMAC - Symmetric key - Must copy the key info */
    keyInfoOffset = offset;
    (void)memcpy(&keyContainer[offset], &keyInfo, sizeof(keyInfo));
    offset += sizeof(keyInfo);

    /* (Optional) - leave some space for any specific data */
    offset += 100U;

    /* HMAC - Symmetric key - Must copy the key data in the container */
    keyDataOffset = offset;
    (void)memcpy(&keyContainer[offset], hmacKeyUpdated, NUM_OF_ELEMS(hmacKeyUpdated));

    /* (Optional) - add any other data */

    /* Key container is ready - it must be authenticated */


    /* Import in RAM a copy of the AES provision key to sign the container using HSE */
    /* NOTE: Intended use case: The container comes already signed (/ is signed externally) */
    hseResponse = HSE_ImportSymKey(RAM_AES128_KEY1, HSE_KEY_TYPE_AES,
        HSE_KF_USAGE_SIGN, gAES128ProvisionKey, NUM_OF_ELEMS(gAES128ProvisionKey));
    if(HSE_SRV_RSP_OK != hseResponse)
        goto exit;

    /* Sign the container - generate GMAC */
    hseResponse = HSE_Gmac(HSE_AUTH_DIR_GENERATE, RAM_AES128_KEY1,
        keyContainer, NUM_OF_ELEMS(keyContainer), iv, NUM_OF_ELEMS(iv), tag, &tagLen);
    if(HSE_SRV_RSP_OK != hseResponse)
        goto exit;


    /* Update the NVM key slot by importing the key in an authenticated key container */
    hseResponse = HSE_ImportAuthSymKey(NVM_HMAC_KEY1, NVM_AES128_PROVISION_KEY, &authScheme,
        keyContainer, NUM_OF_ELEMS(keyContainer), keyInfoOffset, keyDataOffset,
        NUM_OF_ELEMS(hmacKeyUpdated), tag, NULL, tagLen, 0U);
    if(HSE_SRV_RSP_OK != hseResponse)
        goto exit;

    /* The NVM key slot is updated */
    gUpdateNvmKeyExample = PASSED;
    _printf("HSE_UpdateNvmKey_Example: OK\n");
    return;
exit:
    gUpdateNvmKeyExample = FAILED;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*
    Function: HSE_Crypto

    @brief    HSE crypto services examples
    @detailed Examples of symmetric/asymmetric, sync/async HSE crypto operations and SYS authorization
 */
void HSE_Crypto(void)
{
    /* Key Catalogs must be configured */
    ASSERT(CHECK_HSE_STATUS(HSE_STATUS_INSTALL_OK));

    HSE_Aes_Example();

    HSE_AesStreaming_Example();

    HSE_HashAsync_Example();
    
    HSE_HashSgt_Example();

    HSE_Ecdsa_Example();

    HSE_SessionKeys_Example();

    HSE_SysAuthorization_Example();

    HSE_UpdateNvmKey_Example();
}


#ifdef __cplusplus
}
#endif

/** @} */
