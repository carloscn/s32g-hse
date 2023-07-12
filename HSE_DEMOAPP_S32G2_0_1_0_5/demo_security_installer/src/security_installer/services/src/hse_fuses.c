/**
*   @file    hse_fuses.c
*
*   @brief   Examples of HSE fuses programming.
*
*   @addtogroup [hse_fuses]
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

#include "global_variables.h"
#include "hse_host_attr.h"
#include "StdRegMacros.h"
#include "installer_services.h"

#include "string.h"

#if defined(APP_CONFIG_LC_DEBUG_ACCESS)

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define VDD_EFUSE_NCSPD_STAT_ADDR    (0x4008C00CUL)
#define VDD_EFUSE_NCSPD_STAT4_MASK   (0x00000010UL)

#define VDD_EFUSE_SUIL_GPDO_ADDR     (0x4009D31AUL)
#define VDD_EFUSE_GPDO_EN            (0x01U)
#define VDD_EFUSE_GPDO_DIS           (0x00U)

#define VDD_EFUSE_MSCR_ON            (0x00202000UL)
#define VDD_EFUSE_MSCR_OFF           (0x00000000UL)
#define VDD_EFUSE_SUIL_MSCR_ADDR     (0x4009C2A4UL)
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*
    The application debug key/password (ADK/P) to be programmed - 128-bits
    Used by `HSE_ProgramAdkp` function to program ADK/P in fuses
*/
uint8_t applicationDebugKeyPassword[16] =
{
    0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
};

/* Variables to enable fuse programming at run-time - Proceed with caution */
volatile uint8_t gProgramFuses = 0U;
volatile uint8_t gProgramAdkp = 0U;
volatile uint8_t gSetDebugAuthModeToChallengeResponse = 0U;
volatile uint8_t gAdvanceLifecycleToOemProd = 0U;
volatile uint8_t gAdvanceLifecycleToInField = 0U;
volatile uint8_t gSetIvtAuth = 0U;

/* Current Life Cycle value */
hseAttrSecureLifecycle_t gHseCurrentLC;

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/


/*************************************************************************************************
 * Description: Function for programming ADK/P (Application debug key/password) request. It is a write-
 *              once operation.
 *              When Debug Authorization Mode bit is not set, it is interpreted as a password.
 *              When Debug Authorization Mode bit is set, it is interpreted as a key for challenge
 *              -response mechanism.
*************************************************************************************************/
void HSE_ProgramAdkp(void)
{
    hseSrvResponse_t srvResponse;

    /* Check whether ADK/P is already programmed */
    /* If not programmed, HSE will return NOT_ALLOWED. Returning response OK means that ADK/P is already programmed. */
    ASSERT(! HSE_IsAdkpProgrammed());

    /* WARNING: This operation is irreversible */
    /* Program the ADK/P (Application debug key/password) */
    srvResponse = HSE_SetAttribute(HSE_APP_DEBUG_KEY_ATTR_ID,
        sizeof(hseAttrApplDebugKey_t), &applicationDebugKeyPassword[0]);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}

/*************************************************************************************************
 * Description: Function for setting debug-authorization mode bit to Challenge Response.
 *              When Debug Authorization Mode bit is not set, ADK/P is interpreted as a password.
 *              When Debug Authorization Mode bit is set, ADK/P is interpreted as a key for challenge
 *              -response mechanism.
*************************************************************************************************/
void HSE_SetDebugAuthModeToCR(void)
{
    hseSrvResponse_t srvResponse;
    hseAttrDebugAuthMode_t debugAuthMode;

    /* WARNING: This operation is irreversible */
    /* Set debug-authorization mode attribute to Challenge Response */
    debugAuthMode = HSE_DEBUG_AUTH_MODE_CR;
    srvResponse = HSE_SetAttribute(HSE_DEBUG_AUTH_MODE_ATTR_ID,
        sizeof(hseAttrDebugAuthMode_t), &debugAuthMode);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}

/*************************************************************************************************
 * Description: Function for advancing Lifecycle. It is an irreversible operation.
 *              targetLifecycle = HSE_LC_OEM_PROD : Advance to OEM Production LC.
 *              targetLifecycle = HSE_LC_IN_FIELD : Advance to INFIELD LC.
 *
 *              Transitions allowed are :
 *              HSE_LC_CUST_DEL -> HSE_LC_OEM_PROD
 *              HSE_LC_CUST_DEL -> HSE_LC_IN_FIELD
 *              HSE_LC_OEM_PROD -> HSE_LC_IN_FIELD
*************************************************************************************************/
void HSE_AdvanceLifecycle(hseAttrSecureLifecycle_t targetLifeCycle)
{
    hseSrvResponse_t srvResponse;
    hseAttrSecureLifecycle_t lifeCycleToSet;

    /* WARNING: This operation is irreversible */
    /* Advance the Life Cycle to target value */
    lifeCycleToSet = targetLifeCycle;
    srvResponse = HSE_SetAttribute(HSE_SECURE_LIFECYCLE_ATTR_ID,
        sizeof(hseAttrSecureLifecycle_t), &lifeCycleToSet);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);

    /* The life cycle have been successfully updated */
    /* As a sanity check will Example that target LC matches with the LC returned by HSE */

    /* Read the LC issuing a get attribute request to HSE */
    srvResponse = HSE_GetAttribute(HSE_SECURE_LIFECYCLE_ATTR_ID,
        sizeof(hseAttrSecureLifecycle_t), &gHseCurrentLC);
    ASSERT( (HSE_SRV_RSP_OK == srvResponse) && (gHseCurrentLC == targetLifeCycle));
}

/*************************************************************************************************
 * Description: Function for enabling the secure boot authentication by BootROM
 *              (i.e. MAC verification of IVT/DCD/ST-DCD).
 *              NOTE: After setting this fuse, at next attribute BootROM will attempt IVT/DCD/ST-DCD
 *                    MAC verification. If this fails than the system will be kept in Reset.
 *                    Ensure IVT/DCD/ST-DCD are signed and the verification is successfull
 *                    (e.g. via HSE BootDataSing/Verify services).
*************************************************************************************************/
void HSE_SetIvtAuth(void)
{
    hseSrvResponse_t srvResponse;
    hseAttrConfigBootAuth_t ivtAuth;

    /* WARNING: This operation is irreversible */
    /* Enable IVT/DCD/ST-DCD signature verification by BootROM. */
    ivtAuth = HSE_IVT_AUTH;
    srvResponse = HSE_SetAttribute(HSE_ENABLE_BOOT_AUTH_ATTR_ID,
        sizeof(hseAttrConfigBootAuth_t), &ivtAuth);
    ASSERT(HSE_SRV_RSP_OK == srvResponse);
}


/*************************************************************************************************
 * Description: Debug/LC configuration options
*************************************************************************************************/

#if defined(PROGRAM_AD_PASSWORD_ADVANCE_LC_TO_OEM_PROD)

static void HSE_CustToOem_Config_ADPassword(void)
{
    /* Program Application debug key/password example */
    HSE_ProgramAdkp();
    /* Advances Lifecycle to OEM Production Lifecycle */
    HSE_AdvanceLifecycle(HSE_LC_OEM_PROD);
}

#elif defined(PROGRAM_AD_KEY_SET_CHALLANGE_RESPONSE_ADVANCE_LC_TO_OEM_PROD)

static void HSE_CustToOem_Config_ChllgRes_ADKey(void)
{
    /* Program Application debug key/password example */
    HSE_ProgramAdkp();
    /* Set Debug Authorization mode to Challenge-Response (Default mode is password-based) */
    HSE_SetDebugAuthModeToCR();
    /* Advances Lifecycle to OEM Production Lifecycle */
    HSE_AdvanceLifecycle(HSE_LC_OEM_PROD);
}

#elif defined(PROGRAM_AD_PASSWORD_ADVANCE_LC_TO_IN_FIELD)

static void HSE_CustToInField_Config_ADPassword(void)
{
    /* Program Application debug key/password */
    HSE_ProgramAdkp();
    /* Advances Lifecycle to Infield Lifecycle */
    HSE_AdvanceLifecycle(HSE_LC_IN_FIELD);
}

#elif defined(PROGRAM_AD_KEY_SET_CHALLANGE_RESPONSE_ADVANCE_LC_TO_IN_FIELD)

static void HSE_CustToInField_Config_ChllgRes_ADKey(void)
{
    /* Program Application debug key/password example */
    HSE_ProgramAdkp();
    /* Set Debug Authorization mode to Challenge-Response (Default mode is password-based) */
    HSE_SetDebugAuthModeToCR();
    /* Advances Lifecycle to Infield Lifecycle */
    HSE_AdvanceLifecycle(HSE_LC_IN_FIELD);
}
#endif

/*************************************************************************************************
 * Description: Function that configures and sets the VDD_EFUSE pin that controlls the supply
*               power of the Fusebox.
* NOTE:
*       The VDD_EFUSE signal must be switchable using a GPIO controlled external switch.
*       Configuration: delay = 1250 microseconds, MSCR number = 25, GPIO polarity = 1
*************************************************************************************************/
void App_VddEfusePower(bool_t switchOnOff)
{
    /* Delay value that represents 1250 microseconds: 400 MHz = 0.0025 us; 1250 / 0.0025 = 500000 cycles */
    uint32_t waitPowerStable = 500000;
    static bool_t bIsToggled = FALSE;
    const volatile PMC_NCSPD_STAT_tag *pNcspStatRegister = (PMC_NCSPD_STAT_tag*) VDD_EFUSE_NCSPD_STAT_ADDR;

    /* Check VDD_EFUSE voltage by reading the NCSPD_STAT register of the on-chip PMC module
       If NCSPD_STAT[4]  bit is "1" eFUSE is connected to GND */
    if((0UL != (pNcspStatRegister->R & VDD_EFUSE_NCSPD_STAT4_MASK)) && (TRUE == switchOnOff))
    {
            /* Select the VDD_EFUSE pin as a source signal */
            REG_WRITE32(VDD_EFUSE_SUIL_MSCR_ADDR, VDD_EFUSE_MSCR_ON);
            /* Set the value of the GPIO VDD_EFUSE pin */
            *((volatile uint8_t *)VDD_EFUSE_SUIL_GPDO_ADDR) = VDD_EFUSE_GPDO_EN;

            /* Wait for the VDD_EFUSE supply to be stable for at least 1000 microseconds */
            while(waitPowerStable--){};

            /* Verify if the VDD_EFUSE signal line was set accordingly */
            ASSERT(0UL == (pNcspStatRegister->R & VDD_EFUSE_NCSPD_STAT4_MASK));

            /* This flag behaves like a latch that becomes TRUE once the pin toggle is performed.
               Once toggled, the flag indicates that the VDD_EFUSE voltage in controllable by a GPIO pin */
            bIsToggled = TRUE;
    }
    else if((TRUE == bIsToggled) &&
            ((0UL == (pNcspStatRegister->R & VDD_EFUSE_NCSPD_STAT4_MASK)) && (FALSE == switchOnOff)))
    {
            /* Set the value of the GPIO VDD_EFUSE pin */
            *((volatile uint8_t *)VDD_EFUSE_SUIL_GPDO_ADDR) = VDD_EFUSE_GPDO_DIS;
            bIsToggled = FALSE;
    }
    else
    {
        /* Trivial  assignment. Do nothing, keep the same pin state */
        waitPowerStable = waitPowerStable;
    }
}

/*************************************************************************************************
 * Description: Function for configuring:
 *      1. Debug authentication (key/password and authentication mode - password/challenge-response)
 *      2. Life Cycle (advance to OEM_PROD or IN_FIELD)
 * NOTE:
 *      Set the global variables corresponding to the fuses wanted to be programmed.
*************************************************************************************************/
void HSE_ConfigDebugLifeCycle(void)
{
    /********************************************************************************************/
    /*************************************** WARNING ********************************************/
    /********************************************************************************************/
    /* The following examples update HSE attributes in fuses. These operation are irreversible. */
    /********************************************************************************************/
    while(0xDA != gProgramFuses);

    /* The VDD_EFUSE supply must be powered before any fuse programming operation is performed */
    App_VddEfusePower(TRUE);

#if defined(PROGRAM_FUSES_MANUALLY)

    /* Program Application debug key/password example. Current Lifecycle must be Customer Delivery */
    if(0xDA == gProgramAdkp)
    {
        HSE_ProgramAdkp();
    }

    /* Set Debug Authorization mode to Challenge-Response (Default mode is password-based) */
    if(0xDA == gSetDebugAuthModeToChallengeResponse)
    {
        HSE_SetDebugAuthModeToCR();
    }

    /* Advances Lifecycle to OEM Production Lifecycle */
    if(0xDA == gAdvanceLifecycleToOemProd)
    {
        HSE_AdvanceLifecycle(HSE_LC_OEM_PROD);
    }

    /* Advances Lifecycle to Infield Lifecycle */
    if(0xDA == gAdvanceLifecycleToInField)
    {
        HSE_AdvanceLifecycle(HSE_LC_IN_FIELD);
    }

    /* Enable IVT/DCD/ST-DCD authentication */
    if(0xDA == gSetIvtAuth)
    {
        HSE_SetIvtAuth();
    }

#elif defined(PROGRAM_AD_PASSWORD_ADVANCE_LC_TO_OEM_PROD)
    HSE_CustToOem_Config_ADPassword();
#elif defined(PROGRAM_AD_KEY_SET_CHALLANGE_RESPONSE_ADVANCE_LC_TO_OEM_PROD)
    HSE_CustToOem_Config_ChllgRes_ADKey();
#elif defined(PROGRAM_AD_PASSWORD_ADVANCE_LC_TO_IN_FIELD)
    HSE_CustToInField_Config_ADPassword();
#elif defined(PROGRAM_AD_KEY_SET_CHALLANGE_RESPONSE_ADVANCE_LC_TO_IN_FIELD)
    HSE_CustToInField_Config_ChllgRes_ADKey();
#elif defined(ENABLE_IVT_AUTH)
    HSE_SetIvtAuth();
#endif

    /* Power down the VDD_EFUSE supply after performing all the fuse writing operations */
    App_VddEfusePower(FALSE);
}

#endif /* APP_CONFIG_LC_DEBUG_ACCESS */

#ifdef __cplusplus
}
#endif

/** @} */
