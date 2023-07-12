/**
*   @file    hse_interface.h
*
*   @brief   HSE service descriptor definition.
*   @details This file contains the HSE service descriptor definition.
*
*/
/*==================================================================================================
*
*   Copyright 2019 - 2022 NXP.
*
*   This software is owned or controlled by NXP and may only be used strictly in accordance with
*   the applicable license terms. By expressly accepting such terms or by downloading, installing,
*   activating and/or otherwise using the software, you are agreeing that you have read, and that
*   you agree to comply with and are bound by, such license terms. If you do not agree to
*   be bound by the applicable license terms, then you may not retain, install, activate or
*   otherwise use the software.
==================================================================================================*/

#ifndef HSE_INTERFACE_H
#define HSE_INTERFACE_H

#ifdef __cplusplus
extern "C"{
#endif

/* GNU Compiler &  DIAB Compiler */
#if (defined (__GNUC__) && defined (__DCC__))
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wpragma-pack"
#endif

#include "hse_common_types.h"
#include "hse_platform.h"
#include "hse_srv_utils.h"
#include "hse_srv_attr.h"
#include "hse_srv_random.h"
#include "hse_srv_mac.h"
#include "hse_srv_sym_cipher.h"
#include "hse_srv_key_mgmt_utils.h"
#include "hse_srv_responses.h"
#include "hse_status_and_errors.h"

#ifdef HSE_SPT_CMAC_WITH_COUNTER
    #include "hse_srv_cmac_with_counter.h"
#endif

#ifdef HSE_SPT_IMPORT_KEY
    #include "hse_srv_key_import_export.h"
#endif

#include "hse_srv_sys_authorization.h"

#ifdef HSE_SPT_BOOTDATASIGN
    #include "hse_srv_bootdatasig.h"
#endif

#ifdef HSE_SPT_IPSEC
    #include "hse_srv_ipsec.h"
#endif

#ifdef HSE_SPT_SELF_TEST
    #include "hse_srv_self_test.h"
#endif

#ifdef HSE_SPT_MONOTONIC_COUNTERS
    #include "hse_srv_monotonic_cnt.h"
#endif

#ifdef HSE_SPT_OTA_FIRMWARE_UPDATE
    #include "hse_srv_firmware_update.h"
#endif

#ifdef HSE_SPT_OTA_SBAF_UPDATE
    #include "hse_srv_sbaf_update.h"
#endif

#if defined(HSE_SPT_KEY_GEN) || defined(HSE_SPT_COMPUTE_DH)
    #include "hse_srv_key_generate.h"
#endif

#ifdef HSE_SPT_KEY_DERIVE
    #include "hse_srv_key_derive.h"
#endif

#ifdef HSE_SPT_SHE
    #include "hse_srv_she_cmds.h"
#endif

#ifdef HSE_SPT_HASH
    #include "hse_srv_hash.h"
#endif

#ifdef HSE_SPT_SIPHASH
    #include "hse_srv_siphash.h"
#endif

#ifdef HSE_SPT_AEAD
    #include "hse_srv_aead.h"
#endif

#ifdef HSE_SPT_SIGN
    #include "hse_srv_sign.h"
#endif

#ifdef HSE_SPT_RSA
    #include "hse_srv_rsa_cipher.h"
#endif

#ifdef HSE_SPT_AUTHENC
    #include "hse_srv_combined_auth_enc.h"
#endif

#ifdef HSE_SPT_SMR_CR
    #include "hse_srv_smr_install.h"
#endif

#ifdef HSE_SPT_FLASHLESS_DEV /* HSE_H/HSE_M device */
    #include "hse_srv_publish_sys_img.h"
#endif

#ifdef HSE_SPT_OTFAD
    #include "hse_srv_otfad_install.h"
#endif

#ifdef HSE_SPT_CRC32
    #include "hse_srv_crc32.h"
#endif

#if HSE_FWTYPE >= 8U
    #include "hse_srv_custom.h"
#endif

#define HSE_START_PRAGMA_PACK
#include "hse_compiler_abs.h"

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

/**   @addtogroup hse_about_interface About the Host Interface
 *    @ingroup    class_interface
 *
 *    This section contains information on the available services accepted by the firmware.
 *
 *    The firmware accepts commands in the form of service descriptors. Data types and values
 *    relevant for the services are also listed. One-time settings or information about the
 *    state of the system are accessible via attributes. The attributes are also listed below.
 */

/**   @addtogroup hse_interface_descriptor HSE Service Descriptor
 *    @ingroup    class_interface
 *   @{
 */

/*==================================================================================================
*                                     HSE Service IDs
==================================================================================================*/

/*  HSE Service IDs of type hseSrvId_t. It's a concatenation of 4 bytes:
    "Service Version | Cancellable | Class | ID" (refer to hseSrvDescriptor_t) */
/*-------- Service class 0x00: administrative services -------------*/
    #define HSE_SRV_ID_SET_ATTR                 ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000001UL))  /**< @brief Set HSE attribute. */
    #define HSE_SRV_ID_GET_ATTR                 ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50002UL))  /**< @brief Get HSE attribute. */

#ifdef HSE_SPT_SELF_TEST
    #define HSE_SRV_ID_SELF_TEST                ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000003UL))  /**< @brief Self-test. */
#endif /* HSE_SPT_SELF_TEST */

    #define HSE_SRV_ID_CANCEL                   ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50004UL))  /**< @brief Cancel a one-pass or streaming service on a specific channel */
    #define HSE_SRV_ID_FIRMWARE_UPDATE          ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000005UL))  /**< @brief HSE firmware update. */
    #define HSE_SRV_ID_SYS_AUTH_REQ             ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000006UL))  /**< @brief Perform a SYS Authorization request */
    #define HSE_SRV_ID_SYS_AUTH_RESP            ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000007UL))  /**< @brief Send the SYS Authorization response */
    #define HSE_SRV_ID_BOOT_DATA_IMAGE_SIGN     ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000008UL))  /**< @brief Boot Data image sign (e.g. for HSE-H, IVT/DCD/ST/AppBSB image; for HSE-M/B, IVT/XRDC/AppBSB image) */
    #define HSE_SRV_ID_BOOT_DATA_IMAGE_VERIFY   ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000009UL))  /**< @brief Boot Data images verify (e.g. for HSE-H, IVT/DCD/ST/AppBSB image; for HSE-M/B, IVT/XRDC/AppBSB image) */

#ifdef HSE_SPT_STREAM_CTX_IMPORT_EXPORT
    #define HSE_SRV_ID_IMPORT_EXPORT_STREAM_CTX ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A5000AUL))  /**< @brief Import/Export Streaming Context. */
#endif /* HSE_SPT_STREAM_CTX_IMPORT_EXPORT */

#ifdef HSE_SPT_FLASHLESS_DEV /* HSE_H/HSE_M device */
    #define HSE_SRV_ID_PUBLISH_SYS_IMAGE        ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000011UL))  /**< @brief Publish the NVM SYS-IMAGE. */
    #define HSE_SRV_ID_GET_SYS_IMAGE_SIZE       ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000012UL))  /**< @brief Get the SYS-IMAGE size. */
    #define HSE_SRV_ID_VERIFY_SYS_IMAGE         ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000018UL))  /**< @brief Verify SYS-IMAGE. */

    #ifdef HSE_SPT_MONOTONIC_COUNTERS
    #define HSE_SRV_ID_PUBLISH_LOAD_CNT_TBL     ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000013UL))  /**< @brief Request to publish/load the NVM container for the  Monotonic Counter table (only for HSE-H).*/
    #endif /* HSE_SRV_ID_PUBLISH_LOAD_CNT_TBL*/

    #ifdef HSE_SPT_OTFAD
    #define HSE_SRV_ID_INSTALL_OTFAD_CTX        ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000014UL))  /**< @brief Install an On-The-Fly AES Decryption (OTFAD) context (only for HSE-H). */
    #define HSE_SRV_ID_ACTIVATE_OTFAD_CTX       ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000015UL))  /**< @brief Activate on-demand OTFAD context (only for HSE-H). */
    #define HSE_SRV_ID_GET_OTFAD_CTX            ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000016UL))  /**< @brief Get OTFAD context information (only for HSE-H). */
    #endif /* HSE_SPT_OTFAD */

    #define HSE_SRV_ID_PREPARE_FOR_STANDBY      ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50017UL))  /**< @brief Prepare HSE before system goes to Stand-By mode (only for HSE-H/HSE-M). */
#endif /* HSE_SPT_FLASHLESS_DEV */

#ifdef HSE_SPT_INTERNAL_FLASH_DEV /* HSE_B device */
    #define HSE_SRV_ID_ERASE_HSE_NVM_DATA       ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000050UL))  /**< @brief Erase HSE Data Flash (only for HSE-B). This service is only allowed in CUST_DEL LC */
    #define HSE_SRV_ID_ACTIVATE_PASSIVE_BLOCK   ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000051UL))  /**< @brief Application request to switch passive flash block area (only for HSE_B). */
#endif /* HSE_SPT_INTERNAL_FLASH_DEV */
	
#ifdef HSE_SPT_MONOTONIC_COUNTERS
    #define HSE_SRV_ID_CONFIG_COUNTER           ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000052UL))  /**< @brief Configure the secure counter (only for HSE-B). This service requires SuperUser rights */
#endif /* HSE_SPT_MONOTONIC_COUNTERS */
    
#ifdef HSE_SPT_INTERNAL_FLASH_DEV /* HSE_B device */
    #ifdef HSE_SPT_OTA_SBAF_UPDATE
    #define HSE_SRV_ID_SBAF_UPDATE              ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000053UL))  /**< @brief SBAF firmware update request. */
    #endif /* HSE_SPT_OTA_SBAF_UPDATE */

    #ifdef HSE_SPT_FW_INTEGRITY_CHECK
    #define HSE_SRV_ID_FW_INTEGRITY_CHECK       ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000054UL))  /**< @brief Application request to check HSE flash memory integrity (only for HSE-B) */
    #endif /* HSE_SPT_FW_INTEGRITY_CHECK */

#endif /* HSE_SPT_INTERNAL_FLASH_DEV */

/*-------- Service class 0x01: key management services -------------*/
#ifdef HSE_SPT_ECC_USER_CURVES
    #define HSE_SRV_ID_LOAD_ECC_CURVE           ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000100UL))  /**< @brief Load the parameters for a Weierstrass ECC curve */
#endif /* HSE_SPT_ECC_USER_CURVES*/

#ifdef HSE_SPT_FORMAT_KEY_CATALOGS
    #define HSE_SRV_ID_FORMAT_KEY_CATALOGS      ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000101UL))  /**< @brief Format key catalogs (NVM or RAM). */
#endif /* HSE_SPT_FORMAT_KEY_CATALOGS*/

    #define HSE_SRV_ID_ERASE_KEY                ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000102UL))  /**< @brief Erase NVM/RAM key(s). */

#ifdef HSE_SPT_GET_KEY_INFO
    #define HSE_SRV_ID_GET_KEY_INFO             ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50103UL))  /**< @brief Get key information header. */
#endif /* HSE_SPT_GET_KEY_INFO */

#ifdef HSE_SPT_IMPORT_KEY
    #define HSE_SRV_ID_IMPORT_KEY               ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000104UL))  /**< @brief Import a key. */
#endif /* HSE_SPT_IMPORT_KEY */

#ifdef HSE_SPT_EXPORT_KEY
    #define HSE_SRV_ID_EXPORT_KEY               ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000105UL))  /**< @brief Export a key. */
#endif /* HSE_SPT_EXPORT_KEY */

#ifdef HSE_SPT_KEY_GEN
    #define HSE_SRV_ID_KEY_GENERATE             ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000106UL))  /**< @brief Key Generation (e.g. rsa key pair, ecc key pair etc.) */
#endif /* HSE_SPT_KEY_GEN */

#ifdef HSE_SPT_COMPUTE_DH
    #define HSE_SRV_ID_DH_COMPUTE_SHARED_SECRET ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000107UL))  /**< @brief ECC Diffie-Hellman Compute Key (shared secret) */
#endif /* HSE_SPT_COMPUTE_DH */

#ifdef HSE_SPT_KEY_DERIVE
    #define HSE_SRV_ID_KEY_DERIVE               ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000108UL))  /**< @brief Perform a key derivation function */
    #define HSE_SRV_ID_KEY_DERIVE_COPY          ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000109UL))  /**< @brief Copy a key from the derived key material. */
#endif /* HSE_SPT_KEY_DERIVE */

#ifdef HSE_SPT_BURMESTER_DESMEDT
    #define HSE_SRV_ID_BURMESTER_DESMEDT        ((hseSrvId_t)(HSE_SRV_VER_0 | 0x0000010AUL))  /**< @brief ECC Burmester-Desmedt Protocol calculation */
#endif /* HSE_SPT_BD_COMPUTE_SHARE_SECRET */

/*-------- Service class 0xA1: SHE specification commands -------------*/
#ifdef HSE_SPT_SHE
    #define HSE_SRV_ID_SHE_LOAD_KEY             ((hseSrvId_t)(HSE_SRV_VER_0 | 0x0000A101UL))  /**< @brief Load a SHE key using the SHE memory update protocol */
    #define HSE_SRV_ID_SHE_LOAD_PLAIN_KEY       ((hseSrvId_t)(HSE_SRV_VER_0 | 0x0000A102UL))  /**< @brief Load the SHE RAM key as plain text */
    #define HSE_SRV_ID_SHE_EXPORT_RAM_KEY       ((hseSrvId_t)(HSE_SRV_VER_0 | 0x0000A103UL))  /**< @brief Export the SHE RAM key */
    #define HSE_SRV_ID_SHE_GET_ID               ((hseSrvId_t)(HSE_SRV_VER_0 | 0x0000A104UL))  /**< @brief Get UID as per SHE specification */
    #define HSE_SRV_ID_SHE_BOOT_OK              ((hseSrvId_t)(HSE_SRV_VER_0 | 0x0000A105UL))  /**< @brief BOOT_OK as per SHE specification */
    #define HSE_SRV_ID_SHE_BOOT_FAILURE         ((hseSrvId_t)(HSE_SRV_VER_0 | 0x0000A106UL))  /**< @brief BOOT_FAILURE as per SHE specification */
#endif /* HSE_SPT_SHE*/

/*-------- Service class 0x02: cryptographic functions -------------*/
#ifdef HSE_SPT_HASH
    #define HSE_SRV_ID_HASH                     ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50200UL))  /**< @brief HASH service ID */
#endif /*HSE_SPT_HASH*/

    #define HSE_SRV_ID_MAC                      ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50201UL))  /**< @brief MAC generate/verify */

#ifdef HSE_SPT_FAST_CMAC
    #define HSE_SRV_ID_FAST_CMAC                ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50202UL))  /**< @brief CMAC fast generate/verify */
#endif  /* HSE_SPT_FAST_CMAC */

    #define HSE_SRV_ID_SYM_CIPHER               ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50203UL))  /**< @brief Symmetric encryption/decryption */

#ifdef HSE_SPT_AEAD
    #define HSE_SRV_ID_AEAD                     ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50204UL))  /**< @brief AEAD  encryption/decryption */
#endif /*HSE_SPT_AEAD*/

#ifdef HSE_SPT_XTS_AES
    #define HSE_SRV_ID_XTS_AES_CIPHER           ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50205UL))  /**< @brief XTS AES encryption/decryption */
#endif /* HSE_SPT_XTS_AES */

#ifdef HSE_SPT_SIGN
    #define HSE_SRV_ID_SIGN                     ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000206UL))  /**< @brief Digital Signature */
#endif /* HSE_SPT_SIGN */

#ifdef HSE_SPT_RSA
    #define HSE_SRV_ID_RSA_CIPHER               ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000207UL))  /**< @brief RSA Cipher ID */
#endif /* HSE_SPT_RSA */

#ifdef HSE_SPT_AUTHENC
    #define HSE_SRV_ID_AUTHENC                  ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50208UL))  /**< @brief AuthEnc ID */
#endif /* HSE_SPT_AUTHENC */

#ifdef HSE_SPT_CRC32
    #define HSE_SRV_ID_CRC32                    ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50209UL))  /**< @brief CRC32 ID */
#endif /* HSE_SPT_CRC32 */

#ifdef HSE_SPT_SIPHASH
    #define HSE_SRV_ID_SIPHASH                  ((hseSrvId_t)(HSE_SRV_VER_0 | 0x0000020AUL))  /**< @brief SipHash service ID */
#endif  /* HSE_SPT_SIPHASH*/

#ifdef HSE_SPT_CMAC_WITH_COUNTER
    #define HSE_SRV_ID_CMAC_WITH_COUNTER        ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A5020BUL))  /**< @brief CMAC with counter service ID */
#endif  /*HSE_SPT_CMAC_WITH_COUNTER*/

/*-------- Service class 0x03: random number generation ------------*/
#ifdef HSE_SPT_RANDOM
    #define HSE_SRV_ID_GET_RANDOM_NUM           ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000300UL))  /**< @brief Get random number. */
#endif /* HSE_SPT_RANDOM */

/*-------- Service class 0x04: monotonic counter management --------*/
#ifdef HSE_SPT_MONOTONIC_COUNTERS
    #define HSE_SRV_ID_INCREMENT_COUNTER        ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50400UL))  /**< @brief Increment a monotonic counter. */
    #define HSE_SRV_ID_READ_COUNTER             ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50401UL))  /**< @brief Read a monotonic counter. */
#endif /* HSE_SPT_MONOTONIC_COUNTERS*/

/*-------- Service class 0x05: secure memory regions management ----*/
#ifdef HSE_SPT_SMR_CR
    #define HSE_SRV_ID_SMR_ENTRY_INSTALL        ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000501UL))  /**< @brief Install a Secure memory region (SMR) table entry. */
    #define HSE_SRV_ID_SMR_VERIFY               ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000502UL))  /**< @brief Verify a Secure memory region (SMR) table entry. */
    #define HSE_SRV_ID_CORE_RESET_ENTRY_INSTALL ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000503UL))  /**< @brief Install a Core Reset(CR) table entry. */
    #define HSE_SRV_ID_ON_DEMAND_CORE_RESET     ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00000504UL))  /**< @brief On demand release a core  from reset after loading and verification. */
#endif /*HSE_SPT_SMR_CR */

/*----------- Service class 0x06: IPSEC protocol acceleration ------*/
#ifdef HSE_SPT_IPSEC
    #define HSE_SRV_ID_IPSEC_INIT               ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50600UL))  /**< @brief Initialize an IPSEC SA. */
    #define HSE_SRV_ID_IPSEC_PROCESS            ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50601UL))  /**< @brief Process an IPSEC frame. */
    #define HSE_SRV_ID_IPSEC_GET_SEQ_NUM        ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50602UL))  /**< @brief Get the expected sequence number of an SA. */
    #define HSE_SRV_ID_IPSEC_SET_SEQ_NUM        ((hseSrvId_t)(HSE_SRV_VER_0 | 0x00A50603UL))  /**< @brief Set an SA's expected sequence number. */
#endif /* HSE_SPT_IPSEC */
/**@}*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**   @addtogroup hse_interface_descriptor HSE Service Descriptor
 *    @ingroup    class_interface
 *    @{
 */
/** @page          descriptor HSE service descriptor details
 *  @details       Each service is identified by a unique ID (called service ID). Each service ID identifies a service from the hseSrvDescriptor_t#hseSrv union.
 *                 The service ID contains 4 bytes that specify the following:
 *                  - byte[0]: service index (0..255)
 *                  - byte[1]: service class index (0..255)(see more details below)
 *                  - byte[2]: 0x00 - service can be canceled; 0xA5 - service can not be canceled
 *                  - byte[3]: service version (0..255)
 *
 * The following service classes are defined:
 *  - Administrative services (e.g set/get an HSE attribute, self-test, cancel service etc.)
 *  - Key management services (e.g key generation, Diffie-Hellman shared secret computation, import/export key etc.)
 *  - Crypto services (e.g. HASH, MAC generate/verify, encryption/decryption, signature generate/verify)
 *  - Random number
 *  - Monotonic counters
 *  - Secure boot and memory checking services (Secure Memory Regions (SMR) and Core reset(CR) services)
 *  - Network Crypto services (IPsec ).
 *
 * @note
 *  - The services guarded by HSE_SPT_FLASHLESS_DEV macro are available only for HSE_H/M (flashless devices).
 *  - The services guarded by HSE_SPT_INTERNAL_FLASH_DEV macro are available only for HSE_B (devices with internal flash).
 */
typedef struct
{
    /** @brief The service ID of the HSE message */
    hseSrvId_t        srvId;
    /** @brief The service metadata (e.g. priority)*/
    hseSrvMetaData_t  srvMetaData;
    /** @brief The service ID will identify a service in the following union */
    union
    {
        /*-------- HSE administrative services --------*/
            hseSetAttrSrv_t                 setAttrReq;             /**< @brief Request to set a HSE attribute (note that some attributes are read only) */
            hseGetAttrSrv_t                 getAttrReq;             /**< @brief Request to get a HSE attribute */
        #ifdef HSE_SPT_SELF_TEST
            hseSelfTestSrv_t                selfTestReq;            /**< @brief Request to execute a HSE self test procedure */
        #endif
            hseCancelSrv_t                  cancelSrvReq;           /**< @brief Request to cancel a one-pass or streaming service on a specific channel */
        #ifdef HSE_SPT_OTA_FIRMWARE_UPDATE
            hseFirmwareUpdateSrv_t          firmwareUpdateReq;      /**< @brief Request to HSE firmware update. */
        #endif
        /*--------System authorization services--------*/
            hseSysAuthorizationReqSrv_t     sysAuthorizationReq;    /**< @brief Perform an SYS Authorization Request */
            hseSysAuthorizationRespSrv_t    sysAuthorizationResp;   /**< @brief Send the SYS Authorization Response */
        #ifdef HSE_SPT_BOOTDATASIGN
            hseBootDataImageSignSrv_t       bootDataImageSignReq;   /**< @brief Request to generate the Signature  for Boot Data images (e.g. for HSE-H, IVT/DCD/ST/AppBSB image; for HSE-M/B, IVT/XRDC/AppBSB image) */
            hseBootDataImageVerifySrv_t     bootDataImageSigVerifyReq;/**< @brief Request to verify the Signature for Boot Data images (e.g. for HSE-H, IVT/DCD/ST/AppBSB image; for HSE-M/B, IVT/XRDC/AppBSB image) */
        #endif
        #ifdef HSE_SPT_STREAM_CTX_IMPORT_EXPORT
            hseImportExportStreamCtxSrv_t   importExportStreamCtx;  /**< @brief Request to import/export a streaming context. */
        #endif
        #ifdef HSE_SPT_FLASHLESS_DEV /* HSE_H/HSE_M device */
            hsePublishSysImageSrv_t         publishSysImageReq;     /**< @brief Request to Publish a NVM SYS-IMAGE (only for HSE-H).*/
            hseGetSysImageSizeSrv_t         getSysImageSizeReq;     /**< @brief Request to get SYS-IMAGE size (only for HSE-H).*/
            hseVerifySysImageSrv_t          verifySysImageReq;      /**< @brief Request to Verify SYS-IMAGE after it is stored in external flash (only for HSE-H).*/
            #ifdef HSE_SPT_MONOTONIC_COUNTERS
            hsePublishLoadCntTblSrv_t       publishLoadCntTblReq;   /**< @brief Request to publish/load the NVM container for the  Monotonic Counter table (only for HSE-H).*/
            #endif/*HSE_SPT_MONOTONIC_COUNTERS*/
            #ifdef HSE_SPT_OTFAD
            hseInstallOtfadContextSrv_t     installOtfadReq;        /**< @brief Request to install an OTFAD context (only for HSE-H). */
            hseActivateOtfadContextSrv_t    activateOtfadReq;       /**< @brief Request to activate on-demand an already installed OTFAD context (only for HSE-H). */
            hseGetOtfadContextSrv_t         getOtfadCtxReq;         /**< @brief Request to get OTFAD context information (only for HSE-H). */
            #endif /* end HSE_SPT_OTFAD */
            hsePrepareForStandBySrv_t       prepareForStandByReq;   /**< @brief Request HSE to prepare for Stand-By mode (only for HSE-H/HSE-M). */
        #endif /* end HSE_SPT_FLASHLESS_DEV */

        #ifdef HSE_SPT_INTERNAL_FLASH_DEV /* HSE_B device */
            hseEraseNvmDataSrv_t            eraseNvmDataReq;        /**< @brief Request to reset HSE data flash. Only allowed in CUST_DEL LC */

            #ifdef HSE_SPT_OTA_SBAF_UPDATE
            hseSbafUpdateSrv_t              sbafUpdateReq;         /**< @brief Request to SBAF firmware update. */
            #endif /* HSE_SPT_OTA_SBAF_UPDATE */
        #endif /* end HSE_SPT_INTERNAL_FLASH_DEV */

        /*--------HSE key management services--------*/
        #ifdef HSE_SPT_ECC_USER_CURVES
            hseLoadEccCurveSrv_t            loadEccCurveReq;       /**< @brief Request to load an ECC curve */
        #endif
        #ifdef HSE_SPT_FORMAT_KEY_CATALOGS
            hseFormatKeyCatalogsSrv_t       formatKeyCatalogsReq;   /**< @brief Format the key catalogs */
        #endif
            hseEraseKeySrv_t                eraseKeyReq;            /**< @brief Request to erase NVM/RAM key(s). */
        #ifdef HSE_SPT_GET_KEY_INFO
            hseGetKeyInfoSrv_t              getKeyInfoReq;          /**< @brief Request to get key information (flags) */
        #endif
        #ifdef HSE_SPT_IMPORT_KEY
            hseImportKeySrv_t               importKeyReq;           /**< @brief Request to import a key. */
        #endif
        #ifdef HSE_SPT_EXPORT_KEY
            hseExportKeySrv_t               exportKeyReq;           /**< @brief Request to export a key. */
        #endif
        #ifdef HSE_SPT_KEY_GEN
            hseKeyGenerateSrv_t             keyGenReq;              /**< @brief Request to generate a key (e.g. sym random key, rsa key pair etc.) . */
        #endif
        #ifdef HSE_SPT_COMPUTE_DH
            hseDHComputeSharedSecretSrv_t   dhComputeSecretReq;     /**< @brief Request a ECC Diffie-Hellman Compute shared secret. */
        #endif
        #ifdef HSE_SPT_BURMESTER_DESMEDT
            hseBurmesterDesmedtSrv_t        burmesterDesmedtReq;    /**< @brief Request to perform a Burmester-Desmedt computation. */
        #endif
        #ifdef HSE_SPT_KEY_DERIVE
            hseKeyDeriveSrv_t               keyDeriveReq;           /**< @brief Request key derivation function. */
            hseKeyDeriveCopyKeySrv_t        keyDeriveCopyKeyReq;    /**< @brief Request to copy a key from the derived key material. */
        #endif
        #ifdef HSE_SPT_SHE
            hseSheLoadKeySrv_t              sheLoadKeyReq;          /**< @brief Request to load a SHE key using memory update protocol (as per SHE specification) */
            hseSheLoadPlainKeySrv_t         sheLoadPlainKeyReq;     /**< @brief Request to load the SHE RAM key from plain text (as per SHE specification) */
            hseSheExportRamKeySrv_t         sheExportRamKeyReq;     /**< @brief Request to export the SHE RAM key (as per SHE specification) */
            hseSheGetIdSrv_t                sheGetIdReq;            /**< @brief Request to get UID (as per SHE specification) */
        #endif

        /*--------HSE crypto services--------*/
        #ifdef HSE_SPT_HASH
            hseHashSrv_t                    hashReq;                /**< @brief Request a HASH */
        #endif
            hseMacSrv_t                     macReq;                 /**< @brief Request to generate/verify a MAC */
        #ifdef HSE_SPT_FAST_CMAC
            hseFastCMACSrv_t                fastCmacReq;            /**< @brief Request to FAST generate/verify a CMAC */
        #endif
        #ifdef HSE_SPT_CMAC_WITH_COUNTER
            hseCmacWithCounterSrv_t         cmacWithCounterReq;     /**< @brief Request to generate/verify a CMAC with counter */
        #endif
            hseSymCipherSrv_t               symCipherReq;           /**< @brief Request a Symmetric Cipher operation */
        #ifdef HSE_SPT_AEAD
            hseAeadSrv_t                    aeadReq;                /**< @brief Request an AEAD operation */
        #endif
        #ifdef HSE_SPT_XTS_AES
            hseXtsAesCipherSrv_t            xtsAesCipherReq;        /**< @brief Request a XTS AES Cipher operation */
        #endif
        #ifdef HSE_SPT_SIGN
            hseSignSrv_t                    signReq;                /**< @brief Request a Digital Signature Generation/Verification */
        #endif
        #ifdef HSE_SPT_RSA
            hseRsaCipherSrv_t               rsaCipherReq;           /**< @brief Request a RSA Cipher (Encryption/Decryption) operation */
        #endif
        #ifdef HSE_SPT_AUTHENC
            hseAuthEncSrv_t                 authEncReq;             /**< @brief Request an AuthEncryption operation (encrypt/decrypt + authenticate) */
        #endif
        #ifdef HSE_SPT_CRC32
            hseCrc32Srv_t                   crc32Req;                /**< @brief Request to initialize an CRC computation */
        #endif
        #ifdef HSE_SPT_SIPHASH
            hseSipHashSrv_t                 sipHashReq;             /**< @brief Request to generate/verify a SipHash */
        #endif
         /*--------HSE random number--------*/
        #ifdef HSE_SPT_RANDOM
            hseGetRandomNumSrv_t            getRandomNumReq;        /**< @brief Request to random number generation */
        #endif
        /*--------HSE monotonic counters--------*/
        #ifdef HSE_SPT_MONOTONIC_COUNTERS
            hseIncrementCounterSrv_t        incCounterReq;          /**< @brief Request to increment a monotonic counter */
            hseReadCounterSrv_t             readCounterReq;         /**< @brief Request to read a monotonic counter */
            hseConfigSecCounterSrv_t        configSecCounter;       /**< @brief Request to configure a secure counter */
        #endif
        /*--------Secure Memory Regions (SMR) management--------*/
        #ifdef HSE_SPT_SMR_CR
            hseSmrEntryInstallSrv_t         smrEntryInstallReq;     /**< @brief Request to install a Secure Memory Region (SMR) table entry.*/
            hseSmrVerifySrv_t               smrVerifyReq;           /**< @brief Request to verify a Secure Memory Region (SMR) table entry. */
            hseCrEntryInstallSrv_t          crEntryInstallReq;      /**< @brief Request to install a Core Reset (CR) table entry. */
            hseCrOnDemandBootSrv_t          crOnDemandBootReq;      /**< @brief Request to release a Core Reset (CR) table entry. */
        #endif
        /*--------IPSEC protocol acceleration--------*/
        #ifdef HSE_SPT_IPSEC
            hseIpsecInitSrv_t               ipsecInitReq;           /**< @brief Request to initialize an IPSEC SA. */
            hseIpsecProcessSrv_t            ipsecProcessReq;        /**< @brief Request to process an IPSEC frame. */
            hseIpsecGetSeqNumSrv_t          ipsecGetSeqNumReq;      /**< @brief Request to get the expected sequence number of an SA. */
            hseIpsecSetSeqNumSrv_t          ipsecSetSeqNumReq;      /**< @brief Request to set an SA's expected sequence number. */
        #endif
        /*-------- HSE CUSTOM SERVICE --------*/
        #if HSE_FWTYPE >= 8U
            HSE_CUSTOM_SERVICES
        #endif

    } hseSrv;
} hseSrvDescriptor_t;

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

#define HSE_STOP_PRAGMA_PACK
#include "hse_compiler_abs.h"

/* GNU Compiler &  DIAB Compiler */
#if (defined (__GNUC__) && defined (__DCC__))
        #pragma clang diagnostic pop
#endif

#ifdef __cplusplus
}
#endif

#endif /* HSE_INTERFACE_H */

/** @} */
