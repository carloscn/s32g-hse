/**
*   @file    global_variables.c
*
*   @brief   Contains definitions of global variables.
*   @details Contains definitions of global variables.
*
*   @addtogroup security_installer
*   @{
*/
/*==================================================================================================
*
*   Copyright 2019-2020 NXP
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

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL VARIABLES
 * ===============================================================================================*/

ivt_t IVT;

uint8_t gBuffer[BUFFER_SIZE];

/*Separate file for keys*/
uint8_t gAES128ProvisionKey[16] = {0x6f, 0xe1, 0x2c, 0x66, 0x07, 0x19, 0x1f, 0x4f, 0x08, 0x00, 0x81, 0x21, 0x40, 0x25, 0x8a, 0x98};

hseKeyInfo_t gAES128ProvisionKeyInfo =
{
        .keyFlags = HSE_KF_USAGE_KEY_PROVISION | HSE_KF_USAGE_SIGN | HSE_KF_USAGE_VERIFY | HSE_KF_USAGE_ENCRYPT | HSE_KF_USAGE_DECRYPT,
        .keyBitLen = 8U * sizeof(gAES128ProvisionKey)/sizeof(gAES128ProvisionKey[0]),
        .keyType = HSE_KEY_TYPE_AES
};

uint8_t gAES128AuthorizationKey[16] = {0xc4, 0x91, 0x29, 0x50, 0xf2, 0x8c, 0x6f, 0x42, 0xde, 0x7f, 0x9b, 0x9f, 0x93, 0xee, 0xb9, 0xac};

hseKeyInfo_t gAES128AuthorizationKeyInfo =
{
        .keyFlags = HSE_KF_USAGE_AUTHORIZATION | HSE_KF_USAGE_VERIFY,
        .keyBitLen = 8U * sizeof(gAES128AuthorizationKey)/sizeof(gAES128AuthorizationKey[0]),
        .keyType = HSE_KEY_TYPE_AES
};

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 * ===============================================================================================*/

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
