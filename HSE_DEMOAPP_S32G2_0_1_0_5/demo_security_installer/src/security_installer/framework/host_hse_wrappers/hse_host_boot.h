/**
*   @file    hse_host_boot.h
*
*   @brief   This file implements wrappers for secure boot configuration and HSE FW blue image conversion.
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

#ifndef HSE_HOST_BOOT_H
#define HSE_HOST_BOOT_H

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
 * Description: Installs a SMR entry used for Advanced Secure Boot.
 ******************************************************************************/
hseSrvResponse_t HSE_InstallSmrEntry
(
    const uint8_t entryIndex,
    const hseSmrEntry_t *pSmrEntry,
    const uint8_t *pData,
    const uint32_t dataLen,
    const uint8_t *pSign0,
    const uint8_t *pSign1,
    const uint16_t signLen0,
    const uint16_t signLen1,
    const uint8_t *pIV,
    const uint8_t *pGmacTag
);

/*******************************************************************************
 * Description: Verifies a SMR entry at run-time.
 ******************************************************************************/
hseSrvResponse_t HSE_SmrVerify
(
    const uint8_t entryIndex
);

/*******************************************************************************
 * Description: Installs a core reset entry used for Advanced Secure Boot.
 ******************************************************************************/
hseSrvResponse_t HSE_InstallCoreResetEntry
(
    const uint8_t entryIndex,
    const hseCrEntry_t *pCrEntry
);

/*******************************************************************************
 * Description: Perform a on demand core reset used for Advanced Secure Boot.
 ******************************************************************************/
hseSrvResponse_t HSE_OnDemandCoreReset
(
    const uint8_t entryIndex
);

/*******************************************************************************
 * Description: Signs IVT/DCD/SelfTest images or Application image for Basic Secure Boot (AppBSB)
 ******************************************************************************/
hseSrvResponse_t HSE_SignBootImage
(
    const uint8_t *pInImage,
    const uint32_t inTagLength,
    uint8_t *pOutTagAddr
);

/*******************************************************************************
 * Description: Verifies the MAC, generated over IVT/DCD/SelfTest/AppBSB images via hseBootDataImageSign Service
 ******************************************************************************/
hseSrvResponse_t HSE_VerifyBootImage
(
    const uint8_t *pInImage
);

/*******************************************************************************
 * Description: Generates the HSE FW Blue Image from a new Pink Image or from current HSE FW running (when newFwPinkImgLen = 0)
 ******************************************************************************/
hseSrvResponse_t HSE_GenerateBlueImage
(
    const uint8_t *pNewHseFwPinkImg,
    const uint32_t newFwPinkImgLen,
    uint8_t *pHseFwBlueImg,
    uint32_t *pHseFwBlueImgLen
);

#ifdef __cplusplus
}
#endif

#endif /* HSE_HOST_BOOT_H */

/** @} */
