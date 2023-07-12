/**
 *   @file    hse_host_mac.h
 *
 *   @brief   This file use verify MAC operation
 *   @details This file will generate & verify CMAC & GMAC.
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
#ifndef HSE_HOST_MAC_H
#define HSE_HOST_MAC_H

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

/*************************************************************************************************
* Description:  CMAC (AES) request
************************************************************************************************/
hseSrvResponse_t HSE_Cmac
(
    const hseAuthDir_t authDir,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLen,
    uint8_t *pTag,
    uint32_t *pTagLen
);

/*************************************************************************************************
* Description:  GMAC (AES) request
************************************************************************************************/
hseSrvResponse_t HSE_Gmac
(
    const hseAuthDir_t authDir,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLen,
    const uint8_t *pIv,
    const uint32_t ivLen,
    uint8_t *pTag,
    uint32_t *pTagLen
);

/*************************************************************************************************
* Description:  HMAC request
************************************************************************************************/
hseSrvResponse_t HSE_Hmac
(
    const hseAuthDir_t authDir,
    const hseHashAlgo_t hashAlgo,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLen,
    uint8_t *pTag,
    uint32_t *pTagLen
);

/*************************************************************************************************
* Description:  XCBC MAC (AES128) request
************************************************************************************************/
hseSrvResponse_t HSE_XCbcMac
(
    const hseAuthDir_t authDir,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputLen,
    uint8_t *pTag,
    uint32_t *pTagLen
);

/*************************************************************************************************
* Description:  CMAC fast generate/verify request
************************************************************************************************/
hseSrvResponse_t HSE_FastCmac
(
    const hseAuthDir_t authDir,
    const hseKeyHandle_t keyHandle,
    const uint8_t *pInput,
    const uint32_t inputBitLen,
    uint8_t *pTag,
    uint8_t _tagBitLen
);

#ifdef __cplusplus
}
#endif

#endif /* HSE_HOST_MAC_H */

/** @} */
