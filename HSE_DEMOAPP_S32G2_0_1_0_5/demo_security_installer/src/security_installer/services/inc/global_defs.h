/**
*   @file    global_defs.h
*
*   @brief   Contains the global defined macros.
*
*   @addtogroup security_installer
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

#ifndef GLOBAL_DEFS_H
#define GLOBAL_DEFS_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "config.h"
#include "global_types.h"
#include "hse_interface.h"
#include "hse_target.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
#endif

#if !defined(BITS_TO_BYTES)
    #define BITS_TO_BYTES(bitLen)               ((uint16_t)(((bitLen) + 7U) / 8U))
#endif
#if !defined(BYTES_TO_BITS)
    #define BYTES_TO_BITS(byteLen)              ((byteLen) * 8U)
#endif

#define ASSERT(condition)   \
    do {                    \
        if(!(condition))    \
            while(1);       \
    } while(0)

#define ASSERT_RETRY(condition) \
    while(!(condition));

#ifdef DEBUG
    #define DEBUG_LOOP(var) while(!(var))
#else
    #define DEBUG_LOOP(var)
#endif

#define _FLASH_PAGE_SIZE        (1024U * 4U)
#define MAX_SYS_IMG_SIZE        (_FLASH_PAGE_SIZE       /* Data-set 1 (SYS-IMG header) */ + \
                                 2U * _FLASH_PAGE_SIZE  /* Data-set 2 (SMR/CR/NVM config tables) */ + \
                                 8U * _FLASH_PAGE_SIZE  /* Data-set 3 (Key file) */)
#define MAX_HSE_FW_IMG_SIZE     (0x51160UL)
#define BUFFER_SIZE             MAX(MAX_HSE_FW_IMG_SIZE, MAX_SYS_IMG_SIZE)

#define HEADER_APP_TAG                          (0xD5U)
#define HEADER_DCD_TAG                          (0xD2U)
#define HEADER_SELFTEST_TAG                     (0xD4U)
#define HEADER_HSE_PINK_TAG                     (0xD4U)
#define HEADER_HSE_BLUE_TAG                     (0xD6U)

#define IS_IMAGE_PINK(hseAddr)                  (HEADER_HSE_PINK_TAG == (*((uint8_t *)(hseAddr))))
#define IS_IMAGE_BLUE(hseAddr)                  (HEADER_HSE_BLUE_TAG == (*((uint8_t *)(hseAddr))))

#define HSE_FW_PINK_IMAGE_HEADER_SIZE           (0x1150UL)
#define HSE_FW_PINK_IMAGE_REV2_TAG_SIZE         (0x10UL)
#define HSE_FW_BLUE_IMAGE_HEADER_SIZE           (0x40UL)
#define HSE_FW_BLUE_IMAGE_TAG_SIZE              (0x10UL)

#if (HSE_PLATFORM == HSE_S32R45X) && defined(FLASH_SD)
    #define IVT_ADDRESS     (0x1000UL)
#else
    #define IVT_ADDRESS     (0x0UL)
#endif

#define ALIGN(value, alignment)                 (((value) + (alignment) - 1) & (~((alignment) - 1)))
#define ADDR_NOT_NULL(addr)                     ((0x0UL != (uintptr_t)(addr)) && (0xFFFFFFFFUL != (uintptr_t)(addr)))

#define MU0                     (0U)
#define MU1                     (1U)
#define MU2                     (2U)
#define MU3                     (3U)

#define REV_MAJOR_1             (0UL)
#define REV_MAJOR_2             (1UL)

 /** @brief HSE key catalog configuration.
 *            - Each catalog entry represent a key group of the same key type.
 *            - Each group is identified by its index within the catalog.
 *            Note that a key group can contain keys that have keybitLen <= maxKeyBitLen.
 *            For example, the group of key type "HSE_KEY_TYPE_AES" of 256bits can contain AES128, AES192 and AES256 keys.
 *            If there are not enough slots for an AES128 key in an AES128 group, the key can be store in an AES256 slot.
 *            The catalog is ending with a zero filled entry.
 */

#if (HSE_FWTYPE == 1) || (HSE_FWTYPE == 9)  /* HSE FW PREMIUM key catalogs configuration */

/** @brief    HSE NVM key catalog configuration */
#define  HSE_NVM_KEY_CATALOG_CFG  \
        /* Group MU Mask   Group Owner         Group Key Type        Number of Slots   Maximum slot size (in bits)      Reserved  */  \
/* CUST keys */    \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,  HSE_KEY_TYPE_SHE,           12U,        HSE_KEY128_BITS,  {0U} }, /* MASTER_ECU_KEY, BOOT_MAC_KEY, KEY_1 to KEY_10 */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_AES,           10U,        HSE_KEY128_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_AES,           10U,        HSE_KEY256_BITS,  {0U} }, \
        /* HMAC key */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_HMAC,          5U,         HSE_KEY1024_BITS, {0U} }, \
        /* ECC keys */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_ECC_PAIR,      2U,         HSE_KEY521_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_ECC_PUB,       4U,         HSE_KEY521_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_ECC_PUB_EXT,   5U,         HSE_KEY521_BITS,  {0U} }, \
        /* RSA keys */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_RSA_PAIR,      3U,         HSE_KEY4096_BITS, {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_RSA_PUB,       3U,         HSE_KEY4096_BITS, {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_RSA_PUB_EXT,   5U,         HSE_KEY4096_BITS, {0U} }, \
/* OEM keys */    \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_AES,            10U,        HSE_KEY128_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_AES,            10U,        HSE_KEY256_BITS,  {0U} }, \
        /* HMAC key */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_HMAC,           10U,        HSE_KEY1024_BITS, {0U} }, \
        /* ECC keys */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_ECC_PAIR,       2U,         HSE_KEY521_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_ECC_PUB,        3U,         HSE_KEY521_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_ECC_PUB_EXT,    5U,         HSE_KEY521_BITS,  {0U} }, \
        /* RSA keys */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_RSA_PAIR,       2U,         HSE_KEY4096_BITS, {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_RSA_PUB,        3U,         HSE_KEY4096_BITS, {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_RSA_PUB_EXT,    5U,         HSE_KEY4096_BITS, {0U} }, \
        { HSE_MU0_MASK,    HSE_KEY_OWNER_OEM, HSE_KEY_TYPE_ECC_PUB,        1U,         HSE_KEY521_BITS,  {0U} }, \
        { 0U,              0U,                0U,                          0U,         0U,               {0U} }

/** @brief    HSE RAM key catalog configuration */
#define  HSE_RAM_KEY_CATALOG_CFG  \
        /* Group MU Mask   Group Owner         Group Key Type        Number of Slots   Maximum slot size (in bits)  */  \
        /* Symmetric key */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_SHE,            1U,         HSE_KEY128_BITS,  {0U} }, /* KEY_RAM */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_AES,            20U,        HSE_KEY128_BITS,  {0U} }, \
        /* Usable only on MU0 */ \
        { HSE_MU0_MASK,    HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_AES,            20U,        HSE_KEY256_BITS,  {0U} }, \
        /* HMAC key */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_HMAC,           10U,        HSE_KEY1024_BITS, {0U} }, \
        /* ECC keys */\
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_ECC_PAIR,       2U,         HSE_KEY521_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_ECC_PUB,        6U,         HSE_KEY521_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_ECC_PUB_EXT,    10U,        HSE_KEY521_BITS,  {0U} }, \
        /* RSA keys */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_RSA_PUB,        6U,         HSE_KEY4096_BITS, {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_RSA_PUB_EXT,    10U,        HSE_KEY4096_BITS, {0U} }, \
        /* Temporary secrets */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_SHARED_SECRET,  10U,        HSE_KEY638_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_SHARED_SECRET,  5U,         HSE_KEY4096_BITS, {0U} }, \
        { 0U,              0U,                 0U,                           0U,         0U,               {0U} }

#define NVM_SHE_BOOT_KEY_HANDLE                 GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 0, 1)

#define NVM_AES128_PROVISION_KEY                GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 0)
#define NVM_AES128_BOOT_KEY                     GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 1)
#define NVM_AES128_AUTHORIZATION_KEY            GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 2)
#define NVM_OTFAD_AES128_KEY                    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 3)
/* Key used for encrypted SMR authentication */
#define NVM_ENCRYPTED_SMR_AUTH_KEY_HANDLE       GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 4)
/* Key used for encrypted SMR decrypt */
#define NVM_ENCRYPTED_SMR_DECRYPT_KEY_HANDLE    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 5)
#define NVM_HMAC_KEY1                           GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 3, 0)


/* Points to a ECC key pair NVM slot */
#define NVM_ECC_KEY_HANDLE                      GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 4, 1)
#define NVM_ECC_BOOT_KEY_HANDLE                 GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 5, 0)
/* Must be in NVM */
/* Copy of authorization keys to generate the signature over the challenge */
#define NVM_RSA2048_PAIR_CUSTAUTH_COPY_HANDLE   GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 7, 1)
#define NVM_RSA2048_BOOT_COPY_KEY_HANDLE        GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 7, 0)
#define NVM_RSA2048_BOOT_KEY_HANDLE             GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 8, 0)
#define NVM_RSA2048_PUB_CUSTAUTH_HANDLE         GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 8, 1)

#define RAM_AES128_KEY1                         GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 1, 0)
/* Copy of the key used for encrypted SMR authentication */
#define RAM_ENCRYPTED_SMR_AUTH_KEY_HANDLE       GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 1, 1)
/* Copy of the key used for encrypted SMR decrypt */
#define RAM_ENCRYPTED_SMR_ENCRYPT_KEY_HANDLE    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 1, 2)
#define RAM_AES256_KEY1                         GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 2, 0)
#define RAM_AES256_KEY2                         GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 2, 1)
#define RAM_HMAC_KEY1                           GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 3, 0)
#define RAM_ECC_PAIR_KEY_HANDLE                 GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 4, 0)
#define RAM_ECC_PUB_KEY_HANDLE                  GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 5, 0)
#define DH_SHARED_SECRET_HANDLE                 GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 9, 0)
#define DERIVED_KEY_HANDLE                      GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 10, 0)

#elif (HSE_FWTYPE == 0) /* HSE FW STANDARD key catalogs configuration */

/** @brief    HSE NVM key catalog configuration */
#define  HSE_NVM_KEY_CATALOG_CFG  \
        /* Group MU Mask   Group Owner         Group Key Type        Number of Slots   Maximum slot size (in bits)      Reserved  */  \
/* CUST keys */    \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,  HSE_KEY_TYPE_SHE,           12U,        HSE_KEY128_BITS,  {0U} }, /* MASTER_ECU_KEY, BOOT_MAC_KEY, KEY_1 to KEY_10 */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_AES,           6U,         HSE_KEY128_BITS,  {0U} }, \
        /* HMAC key */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_HMAC,          1U,         HSE_KEY512_BITS,  {0U} }, \
        /* ECC keys */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_ECC_PAIR,      1U,         HSE_KEY256_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_ECC_PUB,       1U,         HSE_KEY256_BITS,  {0U} }, \
        /* RSA keys */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_RSA_PAIR,      2U,         HSE_KEY2048_BITS, {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_CUST, HSE_KEY_TYPE_RSA_PUB,       2U,         HSE_KEY2048_BITS, {0U} }, \
        { 0U,              0U,                0U,                          0U,         0U,               {0U} }

/** @brief    HSE RAM key catalog configuration */
#define  HSE_RAM_KEY_CATALOG_CFG  \
        /* Group MU Mask   Group Owner         Group Key Type        Number of Slots   Maximum slot size (in bits)  */  \
        /* Symmetric key */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_SHE,            1U,        HSE_KEY128_BITS,  {0U} }, /* KEY_RAM */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_AES,            3U,        HSE_KEY128_BITS,  {0U} }, \
        /* Usable only on MU0 */ \
        { HSE_MU0_MASK,    HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_AES,            2U,        HSE_KEY256_BITS,  {0U} }, \
        /* HMAC key */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_HMAC,           1U,        HSE_KEY512_BITS,  {0U} }, \
        /* ECC keys */\
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_ECC_PAIR,       1U,        HSE_KEY256_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_ECC_PUB,        1U,        HSE_KEY256_BITS,  {0U} }, \
        /* Temporary secrets */ \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_SHARED_SECRET,  1U,        HSE_KEY638_BITS,  {0U} }, \
        { HSE_ALL_MU_MASK, HSE_KEY_OWNER_ANY,   HSE_KEY_TYPE_SHARED_SECRET,  1U,        HSE_KEY4096_BITS, {0U} }, \
        { 0U,              0U,                 0U,                           0U,        0U,               {0U} }

#define NVM_SHE_BOOT_KEY_HANDLE                 GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 0, 1)

#define NVM_AES128_PROVISION_KEY                GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 0)
#define NVM_AES128_BOOT_KEY                     GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 1)
#define NVM_AES128_AUTHORIZATION_KEY            GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 2)
#define NVM_OTFAD_AES128_KEY                    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 3)
/* Key used for encrypted SMR authentication */
#define NVM_ENCRYPTED_SMR_AUTH_KEY_HANDLE       GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 4)
/* Key used for encrypted SMR decrypt */
#define NVM_ENCRYPTED_SMR_DECRYPT_KEY_HANDLE    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 1, 5)
#define NVM_HMAC_KEY1                           GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 2, 0)
#define NVM_ECC_KEY_HANDLE                      GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 3, 0)
#define NVM_ECC_BOOT_KEY_HANDLE                 GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 4, 0)
#define NVM_RSA2048_BOOT_COPY_KEY_HANDLE        GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 5, 0)
/* Copy of authorization keys to generate the signature over the challenge */
#define NVM_RSA2048_PAIR_CUSTAUTH_COPY_HANDLE   GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 5, 1)
#define NVM_RSA2048_BOOT_KEY_HANDLE             GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 6, 0)
/* Must be in NVM */
#define NVM_RSA2048_PUB_CUSTAUTH_HANDLE         GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_NVM, 6, 1)

#define RAM_AES128_KEY1                         GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 1, 0)
/* Copy of the key used for encrypted SMR authentication */
#define RAM_ENCRYPTED_SMR_AUTH_KEY_HANDLE       GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 1, 1)
/* Copy of the key used for encrypted SMR decrypt */
#define RAM_ENCRYPTED_SMR_ENCRYPT_KEY_HANDLE    GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 1, 2)
#define RAM_AES256_KEY1                         GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 2, 0)
#define RAM_AES256_KEY2                         GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 2, 1)
#define RAM_HMAC_KEY1                           GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 3, 0)
#define RAM_ECC_PAIR_KEY_HANDLE                 GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 4, 0)
#define RAM_ECC_PUB_KEY_HANDLE                  GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 5, 0)
#define DH_SHARED_SECRET_HANDLE                 GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 6, 0)
#define DERIVED_KEY_HANDLE                      GET_KEY_HANDLE(HSE_KEY_CATALOG_ID_RAM, 7, 0)

#else
#error "Unkown HSE FW type"
#endif

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* GLOBAL_DEFS_H */

/** @} */
