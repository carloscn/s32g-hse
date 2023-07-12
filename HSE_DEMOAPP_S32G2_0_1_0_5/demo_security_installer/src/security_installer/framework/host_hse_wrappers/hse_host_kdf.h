/**
 *   @file    hse_host_kdf.h
 *
 *   @brief   This file containts wrappers definitions for KDF services
 *   @details
 *
 *   @addtogroup [HOST_FRAMEWORK]
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
#ifndef HSE_HOST_KDF_H
#define HSE_HOST_KDF_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "hse_interface.h"

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

/*******************************************************************************
 * Description: Copy a symmetric key (AES/HMAC) from a SHARED_SECRET slot (output of KDF)
 ******************************************************************************/
hseSrvResponse_t HSE_KeyDeriveCopyKey
(
    hseKeyHandle_t      keyHandle,
    uint16_t            startOffset,
    hseKeyHandle_t      targetKeyHandle,
    hseKeyInfo_t        keyInfo
);


/*******************************************************************************
 *
 * Description: Key derivation functions / scheme
 *
 ******************************************************************************/
hseSrvResponse_t HSE_KeyDeriveIKEv2
(
    hseKdfIKEV2Scheme_t *pKdfScheme
);

hseSrvResponse_t HSE_KdfISO_KDF1
(
    hseKdfISO18033_KDF1Scheme_t *pKdfScheme
);

hseSrvResponse_t HSE_KdfISO_KDF2
(
    hseKdfISO18033_KDF2Scheme_t *pKdfScheme
);

hseSrvResponse_t HSE_KdfNXP_KDF
(
    hseKdfNxpGenericScheme_t *pKdfScheme
);

hseSrvResponse_t HSE_KdfSP800_56COneStep
(
    hseKdfSP800_56COneStepScheme_t *pKdfScheme
);

hseSrvResponse_t HSE_KdfANS_X963
(
    hseKdfANSX963Scheme_t *pKdfScheme
);

hseSrvResponse_t HSE_KdfSP800_108
(
    hseKdfSP800_108Scheme_t *pKdfScheme
);

hseSrvResponse_t HSE_KdfExtract_Step
(
    hseKdfExtractStepScheme_t *pKdfScheme
);

hseSrvResponse_t HSE_PBKDF2
(
    hsePBKDF2Scheme_t *pKdfScheme
);

hseSrvResponse_t HSE_TLS12_PRF
(
    hseKdfTLS12PrfScheme_t *pKdfScheme
);

hseSrvResponse_t HSE_HKDF
(
    hseHKDF_ExpandScheme_t *pKdfScheme
);

#ifdef __cplusplus
}
#endif

#endif /* HSE_HOST_KDF_H */

/** @} */
