/**
*   @file    hse_host_she.h
*
*   @brief   This file contains wrappers definitions for SHE services.
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
#ifndef HSE_HOST_SHE_H
#define HSE_HOST_SHE_H

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
#define SHE_BLOCK_SIZE                 (16U)

#define SHE_GROUP_0                    (hseKeyGroupIdx_t)0U

#define SHE_SECRET_KEY_ENTRY           (0U)
#define SHE_MASTER_ECU_KEY_ENTRY       (1U)
#define SHE_BOOT_MAC_KEY_ENTRY         (2U)
#define SHE_AES_ECB_KEY_ENTRY          (4U)
#define SHE_AES_CBC_KEY_ENTRY          (5U)
#define SHE_CMAC_KEY_ENTRY             (6U)
#define SHE_RAM_KEY_ENTRY              (14U)
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
* Description: Generation of the messages M1,M2 and M3 according to SHE protocol
************************************************************************************************/
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
);

/*************************************************************************************************
* Description: Computes the verification parameters M4 and M5 used to verify LOAD_KEY command
************************************************************************************************/
hseSrvResponse_t SheGet_M4_M5
(
    const uint8_t* pKeyNew,
    uint8_t KeyId,
    uint8_t AuthId,
    uint32_t count_val,
    uint8_t* pM4,
    uint8_t* pM5
);

/*************************************************************************************************
* Description:  This function is used to send a She Load Key Command.
************************************************************************************************/
hseSrvResponse_t HSE_SheLoadKeyReq
(
    uint8_t sheGroupId,
    uint8_t *M1,
    uint8_t *M2,
    uint8_t *M3,
    uint8_t *M4,
    uint8_t *M5
);

/*************************************************************************************************
* Description:  This function is used to send a She Load Key Command.
************************************************************************************************/
hseSrvResponse_t HSE_SheLoadPlainKey
(
    const uint8_t *pKey
);

/*************************************************************************************************
* Description:  This function is used to send She Export Ram Key Command.
************************************************************************************************/
hseSrvResponse_t HSE_SheExportRamKey
(
    uint8_t *M1,
    uint8_t *M2,
    uint8_t *M3,
    uint8_t *M4,
    uint8_t *M5
);

/*************************************************************************************************
* Description:  The function updates an internal key based on SHE protocol.
************************************************************************************************/
hseSrvResponse_t HSE_SheLoadKey
(
    const uint8_t* pAuthKey,
    const uint8_t* pKeyNew,
    uint8_t AuthId,
    uint8_t KeyId,
    uint32_t countVal,
    uint8_t flagVal,
    uint8_t groupId
);

#ifdef __cplusplus
}
#endif

#endif /* HSE_HOST_SHE_H */

/** @} */
