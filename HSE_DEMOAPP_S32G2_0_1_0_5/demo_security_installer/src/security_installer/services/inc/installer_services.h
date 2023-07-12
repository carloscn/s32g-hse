/**
*   @file    installer_services.h
*

*   @brief   Installer services.
*   @details This file contains declaration of security installer's services.
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

#ifndef INSTALLER_SERVICES_H
#define INSTALLER_SERVICES_H


#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "std_typedefs.h"

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

/*
    Function: HSE_GetVersion_Example

    @brief    Get HSE version example
    @detailed Simplest HSE request used for confirmation of runing HSE
 */
void HSE_GetVersion_Example(void);


/*
    Function: HSE_Config

    @brief    Example of configuring HSE services
    @detailed Configure NVM attributes, key catalogs, install NVM keys and handle SYS_IMG
 */
void HSE_Config(void);
/*
    Function: HSE_SaveConfiguration

    @brief    Example of SYS_IMG handling
    @detailed Example of perserving HSE persistency across multiple sessions using SYS_IMG services
 */
void HSE_SaveConfiguration(void);


/*
    Function: HSE_Crypto

    @brief    HSE crypto services examples
    @detailed Examples of symmetric/asymmetric, sync/async HSE crypto operations and SYS authorization
 */
void HSE_Crypto(void);

/*
    Function: HSE_Otfad

    @brief    HSE OTFAD services example
    @detailed Example for installing and activating an OTFAD context
 */
void HSE_Otfad(void);

/*
    Function: HSE_She

    @brief    HSE SHE services example
    @detailed Examples for SHE key import and cryptographic operations using SHE keys.
 */
void HSE_She(void);


/*
    Function: DoHseFwUpdate

    @brief    Returns whether FW update is applicable or not
 */
bool_t DoHseFwUpdate(void);
/*
    Function: HSE_UpdateFW

    @brief    HSE FW update example
    @detailed Example of FW Blue Image generation from new/current FW pink image
 */
void HSE_UpdateFW(void);

/*
    Function: IsSecureBootEnabled

    @brief    Returns whether Secure Boot is enabled or not (in IVT)
 */
bool_t IsSecureBootEnabled(void);
/*
    Function: HSE_EnableSecureBoot

    @brief    Secure Boot configuration examples
    @detailed Example HSE services usage for secure boot enablement (SMR/CR entries install / BSB tag generation,
              DCD/SelfTest images signing of FW Blue Image generation from new/current FW pink image)
 */
void HSE_EnableSecureBoot(void);

#if defined(USE_ADVANCED_SECURE_BOOT)
/*
    Function: HSE_OnDemandSecureBoot_M7_1

    @brief    On demand core reset example
    @detailed Example HSE services usage for on demand core reset
 */
void HSE_OnDemandSecureBoot_M7_1(void);
#endif

/*
    Function: HSE_GetCoreStatus

    @brief    Get status of cores booted by HSE FW (secure boot)
 */
void HSE_GetCoreStatus(void);

/*
    Function: App_VddEfusePower

    @brief  Function that configures and sets the VDD_EFUSE pin that controlls the supply power of the Fusebox.
    @detailed Before writing any fuse, the application must supply power to the VDD_EFUSE pin of the device.
 */
void App_VddEfusePower(bool_t switchOnOff);

/*
    Function: HSE_ConfigDebugLifeCycle

    @brief    Fuses programming examples
    @detailed Example of programming ADK/P, enabling Challenge-Response debug auth, Life Cycle advancement
 */
void HSE_ConfigDebugLifeCycle(void);


/*
    Function: HSE_IsAdkpProgrammed

    @brief    Verify with HSE whether ADK/P is programmed or not
 */
bool_t HSE_IsAdkpProgrammed(void);

/*
    Function: S32_GetRevision

    @brief    Get platform revision
 */
uint32_t S32_GetRevision(void);

/*
    Function: HSE_GetPartition

    @brief    Get HSE FW partition (whether booted from primary or backup image)
 */
uint8_t HSE_GetPartition(void);

/*
    Function: HSE_Status

    @brief    Print to serial the HSE status (from FSR)
 */
void HSE_Status(void);

#ifdef __cplusplus
}
#endif

#endif /* INSTALLER_SERVICES_H */

/** @} */
