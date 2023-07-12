/**
*   @file    config.h
*
*   @brief   Contains the configuration file for security installer.
*   @details This file contains the configuration for security installer.
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

#ifndef CONFIG_H
#define CONFIG_H

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "hse_target.h"

#if (HSE_PLATFORM == HSE_S32G2XX)
#include "S32G274A.h"
#elif (HSE_PLATFORM == HSE_S32R45X)
#include "S32R45X.h"
#elif (HSE_PLATFORM == HSE_S32S2XX)
#include "S32S247TV.h"
#endif

#include "printf.h"

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


#define APP_HSE_FW_INSTALL_NO_SEC_BOOT   /**< @brief This macro activates the application booted unsecurely, demonstrating basic HSE configuration and crypto services */
// #define APP_HSE_FW_UPDATE                /**< @brief This macro enables FW update flow (generating the HSE FW Blue image) */
// #define APP_HSE_FW_INSTALL_SEC_BOOT      /**< @brief This macro activates the application that enables secure boot (ASB/BSB) */
// #define APP_CONFIG_LC_DEBUG_ACCESS       /**< @brief WARNING: This macro activates functionality that makes irreversible changes to fuses - Proceed with caution */


/* Configure the location of the pink image to be converted to blue image (FW update) */
#ifdef APP_HSE_FW_UPDATE

    /**< @brief Transform the pink image to blue image via HSE FW update service */
    #define PINK_TO_BLUE

    /**< @brief Use a new HSE FW Pink Image for update (must be in QSPI or loaded in SRAM at run-time) */
    // #define HSE_NEW_PINK_IMG

    /**< @brief Define whether HSE FW current version to be updated is 0_8_1 */
    // #define HSE_FW_0_8_1_COMPATIBLE
    /**< @brief Define whether HSE FW current version to be updated is 0_8_2 */
    // #define HSE_FW_0_8_2_COMPATIBLE

    #if (!defined(PINK_TO_BLUE)) && (!defined(HSE_NEW_PINK_IMG))
        #error "Invalid configuration in {APP_HSE_FW_UPDATE}"
    #endif
#endif


/* Configure secure boot type example: ASB/BSB/SHE */
#ifdef APP_HSE_FW_INSTALL_SEC_BOOT

    /**< @brief Selects Advanced secure boot based on SMR as an application boot mechanism */
    #define USE_ADVANCED_SECURE_BOOT

    /**< @brief Selects Basic secure boot as an application secure boot mechanism - on S32G CUT2.0 the ADK/P must be programmed */
    // #define USE_BASIC_SECURE_BOOT

    /**< @brief Selects SHE secure boot as an application boot mechanism */
    // #define USE_SHE_SECURE_BOOT

    /**< @brief Transform the current running pink image to blue image via HSE FW update service */
    #define PINK_TO_BLUE

    /**< @brief Activates the signing of DCD and SelfTest images if present - on S32G CUT2.0 the ADK/P must be programmed */
    #define USE_DCD_SELFTEST

    #if (defined(USE_BASIC_SECURE_BOOT) && defined(USE_ADVANCED_SECURE_BOOT))  ||  \
        (defined(USE_BASIC_SECURE_BOOT) && defined(USE_SHE_SECURE_BOOT))       ||  \
        (defined(USE_ADVANCED_SECURE_BOOT) && defined(USE_SHE_SECURE_BOOT))
        #error "Activate just one secure boot method: USE_ADVANCED_SECURE_BOOT, USE_BASIC_SECURE_BOOT or USE_SHE_SECURE_BOOT."
    #endif
#endif


/* Configure HSE fuses programming: ADK/P, debug authorization CR and LC */
#ifdef APP_CONFIG_LC_DEBUG_ACCESS

    /* Select if fuses are programmed manually or automatic (through on option) */
    #define PROGRAM_FUSES_MANUALLY
    // #define DEBUG_CONFIG_OPTION

    #if ((!defined(PROGRAM_FUSES_MANUALLY)) && defined(DEBUG_CONFIG_OPTION))

        /**< @brief Program application debug password and advance the life cycle to OEM PRODUCTION */
        // #define PROGRAM_AD_PASSWORD_ADVANCE_LC_TO_OEM_PROD

        /**< @brief Program application debug key, set debug authorization Challenge Response mode and advance the life cycle to OEM PRODUCTION */
        // #define PROGRAM_AD_KEY_SET_CHALLANGE_RESPONSE_ADVANCE_LC_TO_OEM_PROD

        /**< @brief Program application debug password and advance the life cycle to IN FIELD */
        // #define PROGRAM_AD_PASSWORD_ADVANCE_LC_TO_IN_FIELD

        /**< @brief Program application debug key, set debug authorization Challenge Response mode and advance the life cycle to IN FIELD */
        // #define PROGRAM_AD_KEY_SET_CHALLANGE_RESPONSE_ADVANCE_LC_TO_IN_FIELD

        /**< @brief Enable IVT/DCD/ST-DCD authentication (done by BootROM at boot-time) by setting IVT_AUTH fuse */
        // #define ENABLE_IVT_AUTH
    #endif
#endif

/* Define whether flash is supported or not */
#define FLASH_SUPPORT

#if defined(FLASH_SUPPORT)
    /**< @brief QSPI flash enabled */
    #define FLASH_QSPI
#endif

/* Define uart driver is supported or not */
#define UART_SUPPORT

/**< @brief Add blocking loops for debug */
#define DEBUG


/* Macro definition sanity check */
#if (defined(APP_HSE_FW_INSTALL_NO_SEC_BOOT) && defined(APP_HSE_FW_UPDATE)) || \
    (defined(APP_HSE_FW_INSTALL_NO_SEC_BOOT) && defined(APP_HSE_FW_INSTALL_SEC_BOOT)) || \
    (defined(APP_HSE_FW_INSTALL_NO_SEC_BOOT) && defined(APP_CONFIG_LC_DEBUG_ACCESS)) || \
    (defined(APP_HSE_FW_UPDATE) && defined(APP_HSE_FW_INSTALL_SEC_BOOT)) || \
    (defined(APP_HSE_FW_UPDATE) && defined(APP_CONFIG_LC_DEBUG_ACCESS)) || \
    (defined(APP_HSE_FW_INSTALL_SEC_BOOT) && defined(APP_CONFIG_LC_DEBUG_ACCESS))
#error "Define only one macro among {APP_HSE_FW_INSTALL_NO_SEC_BOOT, APP_HSE_FW_UPDATE, APP_HSE_FW_INSTALL_SEC_BOOT, APP_CONFIG_LC_DEBUG_ACCESS}"
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

/*
    Function: Init_Peripherals

    @brief    Initialize peripherals
    @detailed Initialize MU, QuadSPI module, STM, etc.

 */
void Init_Peripherals(void);

#if 0
/*
    Function: Init_DummyIVT

    @brief    Have at least some IVT data to emulate functionality
    @detailed

 */
void Init_DummyIVT(void);
#endif

#ifdef __cplusplus
}
#endif

#endif /* CONFIG_H */

/** @} */
