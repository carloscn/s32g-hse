/**
*   @file    hse_host_attr.h
*
*   @brief   This file implements wrappers for set/get HSE attribute services.
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

#ifndef HSE_HOST_ATTRS_H
#define HSE_HOST_ATTRS_H

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
 * Description: Sets the specified HSE attribute
 ******************************************************************************/
hseSrvResponse_t HSE_SetAttribute
(
    hseAttrId_t attrId,
    uint32_t attrLen,
    void *pAttr
);

/*******************************************************************************
 * Description: Gets the specified HSE attribute
 ******************************************************************************/
hseSrvResponse_t HSE_GetAttribute
(
    hseAttrId_t attrId,
    uint32_t attrLen,
    void *pAttr
);

/*******************************************************************************
 * Description: Sets/Gets the attribute on specified MU instance and channel
 ******************************************************************************/
hseSrvResponse_t HSE_SetGetAttrByMu
(
    hseAttrId_t attrId,
    uint32_t attrLen,
    void *pAttr,
    bool_t bSet,
    uint8_t u8MuInstance,
    uint8_t u8MuChannel
);

#ifdef __cplusplus
}
#endif

#endif /* HSE_HOST_ATTRS_H */

/** @} */
