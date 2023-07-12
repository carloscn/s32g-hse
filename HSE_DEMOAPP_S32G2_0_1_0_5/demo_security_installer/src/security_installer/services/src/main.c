/**
*   @file    main.c
*
*   @brief   Entry point into security installer.
*   @details Contains the flow for security installer.
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
#include "hse_mu.h"
#include "mc_me.h"
#include "installer_services.h"
#include "global_variables.h"

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/

#if defined(HSE_FW_0_8_1_COMPATIBLE)
    #undef  HSE_STATUS_INIT_OK
    #define HSE_STATUS_INIT_OK      (1U << 0U)
    #undef  HSE_STATUS_RNG_INIT_OK
    #define HSE_STATUS_RNG_INIT_OK  (1U << 1U)
#endif

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL VARIABLES
 * ===============================================================================================*/
static volatile uint8_t gZero = 0U;
/*==================================================================================================
 *                                      GLOBAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 * ===============================================================================================*/

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/

#if defined(APP_HSE_FW_INSTALL_NO_SEC_BOOT)

int main(void)
{
    /* Init QSPI, MU, STM, UART */
    Init_Peripherals();

    /* Wait for HSE to initialize (along with RNG module) by reading the status bits in FSR */
    while(! CHECK_HSE_STATUS(HSE_STATUS_INIT_OK | HSE_STATUS_RNG_INIT_OK) );

    /* HSE and RNG are up - booted correctly and initialized successfully */

    /* Sanity check: Get the FW version via request to HSE */
    HSE_GetVersion_Example();
    /* Decode the HSE status */
    HSE_Status();

    /* Check the request result in `gGetVersionExample` and FW version returned by HSE in `gHseFwVersion` */
    DEBUG_LOOP(gZero);

    /* HSE configuration example (setup persistent attributes, key catalogs, persistent keys; export and save configuration) */
    /* Verify if not already configured (such that previous configuration is not overwritten) */
    if(! (CHECK_HSE_STATUS(HSE_STATUS_INSTALL_OK)) )
    {
        HSE_Config();
    }

    /* HSE crypto examples: symmetric/asymmetric services; sync/async operation mode */
    HSE_Crypto();

    /* HSE OTFAD example: install, activate, get context services */
    HSE_Otfad();

    /* HSE SHE examples: load key, export, aes/mac, export key */
    HSE_She();

    while(1);
}

#elif defined(APP_HSE_FW_UPDATE)

int main(void)
{
    /* Init peripherals (including QSPI) */
    Init_Peripherals();

    /* Wait for HSE to initialize (along with RNG module) by reading the status bits in FSR */
    while(! CHECK_HSE_STATUS(HSE_STATUS_INIT_OK | HSE_STATUS_RNG_INIT_OK) );

    /* HSE and RNG are up - booted correctly and initialized successfully */

    /* Sanity check: Get the FW version via request to HSE */
    HSE_GetVersion_Example();
    /* Decode the HSE status */
    HSE_Status();

    DEBUG_LOOP(gZero);

    /* Check if an update is needed */
    if(DoHseFwUpdate())
    {
        /* Update HSE FW */
        HSE_UpdateFW();
        /* Issue functional reset */
        MC_ME_FunctionalReset();
    }

    /* Check the request result in `gGetVersionTest` and FW version in `gHseFwVersion` */
    while(1);
}

#elif defined(APP_HSE_FW_INSTALL_SEC_BOOT)

int main(void)
{
    /* Init peripherals (including QSPI) */
    Init_Peripherals();

    /* Wait for HSE to initialize (along with RNG module) by reading the status bits in FSR */
    while(! CHECK_HSE_STATUS(HSE_STATUS_INIT_OK | HSE_STATUS_RNG_INIT_OK) );

    /* HSE and RNG are up - booted correctly and initialized successfully */

    /* Sanity check: Get the FW version via request to HSE */
    HSE_GetVersion_Example();
    /* Decode the HSE status */
    HSE_Status();

    DEBUG_LOOP(gZero);

    /* Check if secure boot needs to be configured */
    if(! IsSecureBootEnabled())
    {
        /* Configure Secure Boot */
        HSE_EnableSecureBoot();
        /* Issue functional reset */
        MC_ME_FunctionalReset();
    }

    /* Application booted securely */
    HSE_GetCoreStatus();

    #if defined(USE_ADVANCED_SECURE_BOOT)
    /* On demand secure boot for M7_1 core */
    HSE_OnDemandSecureBoot_M7_1();
    /* Check core status to confirm on-demand boot was performed successfully */
    HSE_GetCoreStatus();
    #endif /* USE_ADVANCED_SECURE_BOOT */

    /* HSE crypto examples: symmetric/asymmetric services; sync/async operation mode */
    HSE_Crypto();

    while(1);
}

#elif defined(APP_CONFIG_LC_DEBUG_ACCESS)

int main(void)
{
    /* Init peripherals (including QSPI) */
    Init_Peripherals();

    /* Wait for HSE to initialize (along with RNG module) by reading the status bits in FSR */
    while(! CHECK_HSE_STATUS(HSE_STATUS_INIT_OK | HSE_STATUS_RNG_INIT_OK) );

    /* HSE and RNG are up - booted correctly and initialized successfully */

    /* Sanity check: Get the FW version via request to HSE */
    HSE_GetVersion_Example();

    DEBUG_LOOP(gZero);

    /* Some attributes depend on having the HSE configured before setting them (e.g. Key Catalogs must be formatted before setting the Life Cycle). */
    /* Verify if not already configured (such that previous configuration is not overwritten) */
    if(! (CHECK_HSE_STATUS(HSE_STATUS_INSTALL_OK)) )
    {
        HSE_Config();
    }

    /* Configure Debug authorization and LC */
    HSE_ConfigDebugLifeCycle();

    while(1);
}

#else

#error "No valid configuration chosen"

#endif

#ifdef __cplusplus
}
#endif

/** @} */
