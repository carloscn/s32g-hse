/**
*   @file    hse_host.c
*
*   @brief   HOST APIs to send Hse messages.
*   @details HOST APIs to send Hse messages over MU.
*
*   @addtogroup hse_host_c
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
/**
* @file           hse_host.c
*/
#include "hse_host.h"

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*
 * @brief   Host transmission callback information
 */
typedef struct
{
    hseTxOp_t          txOp;                       /**< @brief    Selects the transmission option .*/
    union {
        struct {
            pfAsyncCallback_t  pfAsyncCallback;    /**< @brief    The callback for Asynchronous TX.  */
            void*              pCallbackpArg;      /**< @brief    Parameter used to call the asynchronous callback(can be NULL) */
        } async;
        hseSrvResponse_t response;                 /**< @brief    Service response written in the callback (in case of sync with interrupt mode). */
    } info;
} hseCallbackInfo_t;

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/* Timeout for blocking send/receive */
#define HSE_MU_TIMEOUT_DURATION ((uint32_t)0xFF334000UL)

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/* This is used to store all app callbacks for interrupt enabled TX s*/
static volatile hseCallbackInfo_t     hseCallbackInfo[HSE_NUM_OF_MU_INSTANCES][HSE_NUM_OF_CHANNELS_PER_MU];
/* This is used to store all callbacks for HSE events notification handling */
static pfGeneralPurposeCallback_t     hseNotifEventsCallbacks[HSE_NUM_OF_MU_INSTANCES] = {0};
static uint8_t                        u8ChannelRef[HSE_NUM_OF_MU_INSTANCES] = {0};
static uint8_t volatile               hseBusyChannel[HSE_NUM_OF_MU_INSTANCES][HSE_NUM_OF_CHANNELS_PER_MU];

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

//#define HSE_ENABLE_SHARED_MEM

#ifndef HSE_ENABLE_SHARED_MEM
/* HSE service descriptors arrays for each MU placed in system RAM */
static hseSrvDescriptor_t hseSrvDescMu0[HSE_NUM_OF_CHANNELS_PER_MU];
static hseSrvDescriptor_t hseSrvDescMu1[HSE_NUM_OF_CHANNELS_PER_MU];
static hseSrvDescriptor_t hseSrvDescMu2[HSE_NUM_OF_CHANNELS_PER_MU];
static hseSrvDescriptor_t hseSrvDescMu3[HSE_NUM_OF_CHANNELS_PER_MU];
#endif /* ! HSE_ENABLE_SHARED_MEM */

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/* Global array of HSE descriptors (placed in SYS_RAM / SHARED_RAM) */
#ifdef HSE_ENABLE_SHARED_MEM
/* Defined in linker file */
extern const uint32_t __hse_shared_mem_start_mu0;
extern const uint32_t __hse_shared_mem_start_mu1;
extern const uint32_t __hse_shared_mem_start_mu2;
extern const uint32_t __hse_shared_mem_start_mu3;

/* HSE service descriptors placed in shared memory */
hseSrvDescriptor_t* const gHseSrvDesc[HSE_NUM_OF_MU_INSTANCES] =
{
    (hseSrvDescriptor_t*)&__hse_shared_mem_start_mu0,
    (hseSrvDescriptor_t*)&__hse_shared_mem_start_mu1,
    (hseSrvDescriptor_t*)&__hse_shared_mem_start_mu2,
    (hseSrvDescriptor_t*)&__hse_shared_mem_start_mu3
};
#else
hseSrvDescriptor_t* const gHseSrvDesc[HSE_NUM_OF_MU_INSTANCES] =
{
    hseSrvDescMu0,
    hseSrvDescMu1,
    hseSrvDescMu2,
    hseSrvDescMu3
};
#endif /* HSE_ENABLE_SHARED_MEM */

/* Global synchronous transmission options */
const hseTxOptions_t gSyncTxOptions = {HSE_TX_SYNCHRONOUS, NULL, NULL};

/* Global interrupts enable/disable functions */
extern void sys_disableAllInterrupts(void);
extern void sys_enableAllInterrupts(void);

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

static void HSE_IrqAsyncSignal(uint8_t u8MuIf, uint8_t u8Channel, hseSrvResponse_t status);
static hseSrvResponse_t HSE_MU_ReceiveResponseBlocking(uint8_t u8MuInstance, uint8_t u8Channel);

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*******************************************************************************
 * Description   : Invoke the callback.
 ******************************************************************************/
static void HSE_IrqAsyncSignal(uint8_t u8MuIf, uint8_t u8Channel, hseSrvResponse_t status)
{
    volatile hseCallbackInfo_t *pHseCallbackInfo = &hseCallbackInfo[u8MuIf][u8Channel];

    if(HSE_TX_ASYNCHRONOUS == pHseCallbackInfo->txOp) {
        /* Invoke the callback */
        pHseCallbackInfo->info.async.pfAsyncCallback(status, pHseCallbackInfo->info.async.pCallbackpArg);

        /* Clear callback */
        pHseCallbackInfo->txOp = HSE_TX_SYNCHRONOUS;
        pHseCallbackInfo->info.async.pfAsyncCallback = NULL;
        pHseCallbackInfo->info.async.pCallbackpArg = NULL;
    } else {
        pHseCallbackInfo->info.response = status;
    }

    /* Mark channel as free */
    hseBusyChannel[u8MuIf][u8Channel] = FALSE;
}

/*******************************************************************************
* Description:  Waits TIMEOUT_DURATION until the response is received.
 ******************************************************************************/
static hseSrvResponse_t HSE_MU_ReceiveResponseBlocking( uint8_t u8MuInstance, uint8_t u8Channel )
{
    uint32_t u32TimeOutCount = HSE_MU_TIMEOUT_DURATION;
    hseSrvResponse_t u32HseMuResponse = HSE_SRV_RSP_GENERAL_ERROR;

    /* Wait until HSE process the request and send the response */
    while((0UL < u32TimeOutCount) && (FALSE ==  HSE_MU_IsResponseReady(u8MuInstance, u8Channel)))
    {
        u32TimeOutCount--;
    }

    /* Response received if TIMEOUT did not occur */
    if(u32TimeOutCount > 0UL)
    {
        /* Get HSE response */
        u32HseMuResponse = HSE_MU_ReceiveResponse(u8MuInstance, u8Channel);
        /* Wait for the HSE to free the channel status in FSR which is done after the response is received */
        while(MU_IS_BIT_SET(HSE_MU_READ_FLAG_STATUS_REGISTER(u8MuInstance), u8Channel)) {};
    }

    /* Mark channel as free */
    sys_disableAllInterrupts();
    hseBusyChannel[u8MuInstance][u8Channel] = FALSE;
    sys_enableAllInterrupts();

    return u32HseMuResponse;
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*******************************************************************************
 * Description   : Send the request to HSE.
 ******************************************************************************/
hseSrvResponse_t HSE_Send(uint8_t u8MuInstance, uint8_t u8MuChannel,
    hseTxOptions_t txOptions, hseSrvDescriptor_t* pHseSrvDesc)
{
    hseSrvResponse_t srvResponse;

    /* The MU instance and channel assumed to be in range */
    /* Assuming the channel is free */
	/*This logic is added to avoid the syncronization issue. Host should send the next command
	when receive buffer is full and channel busy status is clear */

    /* Send the request sync/async */
    if(HSE_TX_SYNCHRONOUS == txOptions.txOp)
    {
        /* Check whther interrupts are enabled */
        if(0UL == (muRxEnabledInterruptMask[u8MuInstance] & (1UL << u8MuChannel)))
        {
            /* No - send request non-blocking and wait for the HSE response blocking (polling on RSR) */
            HSE_MU_SEND_NON_BLOCKING(u8MuInstance, u8MuChannel, (uintptr_t )pHseSrvDesc);
            srvResponse = HSE_MU_ReceiveResponseBlocking(u8MuInstance, u8MuChannel);
        } else {
            /* Yes - send request non-blocking and wait for the HSE response blocking (with interrupts) */

            /* Sends the request non-blocking */
            sys_disableAllInterrupts();
            hseBusyChannel[u8MuInstance][u8MuChannel] = TRUE;
            HSE_MU_SEND_NON_BLOCKING(u8MuInstance, u8MuChannel, (uintptr_t )pHseSrvDesc);
            sys_enableAllInterrupts();

            /* Wait the request to be done - the channel will be freed in callback */
            while(FALSE != hseBusyChannel[u8MuInstance][u8MuChannel]);

            /* Update the status to the one written in callback */
            sys_disableAllInterrupts();
            srvResponse = hseCallbackInfo[u8MuInstance][u8MuChannel].info.response;
            sys_enableAllInterrupts();
        }

    } else { /* HSE_TX_ASYNCHRONOUS */
        volatile hseCallbackInfo_t *pHseCallbackInfo = &hseCallbackInfo[u8MuInstance][u8MuChannel];

        sys_disableAllInterrupts();
        /* Initialize callback */
        pHseCallbackInfo->txOp = HSE_TX_ASYNCHRONOUS;
        pHseCallbackInfo->info.async.pfAsyncCallback = txOptions.pfAsyncCallback;
        pHseCallbackInfo->info.async.pCallbackpArg = txOptions.pCallbackpArg;

        /* Sends the request non-blocking */
        hseBusyChannel[u8MuInstance][u8MuChannel] = TRUE;
        HSE_MU_SEND_NON_BLOCKING(u8MuInstance, u8MuChannel, (uintptr_t )pHseSrvDesc);
        srvResponse = HSE_SRV_RSP_OK;

        sys_enableAllInterrupts();
    }

    return srvResponse;
}

/*******************************************************************************
 * Description   : Get available channel to send request to HSE.
 ******************************************************************************/
uint8_t HSE_AllocateFreeChannel(uint8_t u8MuInstance)
{
    uint8_t u8Count;
    uint8_t u8Index = u8ChannelRef[u8MuInstance] + 1;
    uint8_t u8Channel = HSE_INVALID_CHANNEL;

    /* Finds the next available channel from host point of view (finished callbacks for async) */
    /* Skip channel 0 (reserved for administration services) */
    sys_disableAllInterrupts();
    for(u8Count = 0U; u8Count < (HSE_NUM_OF_CHANNELS_PER_MU - 1U); u8Count++) {
        if(hseBusyChannel[u8MuInstance][u8Index]) {
            if((++u8Index) >= HSE_NUM_OF_CHANNELS_PER_MU) {
                u8Index = 1U;
            }
            continue;
        }

        u8Channel = u8Index;
        u8ChannelRef[u8MuInstance] = u8Channel - 1;
        /* Reserve the returned channel */
        hseBusyChannel[u8MuInstance][u8Channel] = TRUE;
        break;
    }
    sys_enableAllInterrupts();

    return u8Channel;
}

/*******************************************************************************
 * Handle the received interrupt
 ******************************************************************************/
void HSE_ReceiveInterruptHandler(uint8_t u8Mu)
{
    uint8_t u8Ch = 0U;
    uint32_t u32RSR = HSE_MU_READ_RECEIVE_STATUS_REGISTER(u8Mu);
    hseSrvResponse_t srvResponse;

    /* Determine the service channel on which HSE wrote the response */
    for(;
        ( (0UL != u32RSR) && (u8Ch < HSE_NUM_OF_CHANNELS_PER_MU) );
        u8Ch++, u32RSR >>= 1U)
    {
        if(0UL == (u32RSR & 1UL))
            continue;

        /* Read the response */
        srvResponse = (hseSrvResponse_t)HSE_MU_RECEIVE_NON_BLOCKING(u8Mu, u8Ch);

        /* This function will call the callback */
        HSE_IrqAsyncSignal(u8Mu, u8Ch, srvResponse);

        /* Process all responses received */
    }
}

/*******************************************************************************
 * Handle the general purpose interrupt
 ******************************************************************************/
void HSE_GeneralPurposeInterruptHandler(uint8_t u8MuInstance)
{
    uint32_t u32HseNotifEvents;
    pfGeneralPurposeCallback_t pfGeneralPurposeCallback;

    /* Read Event */
    u32HseNotifEvents = HSE_MU_GetGeneralStatusReg(u8MuInstance);

    /* Process Event */
    pfGeneralPurposeCallback = hseNotifEventsCallbacks[u8MuInstance];
    if (NULL != pfGeneralPurposeCallback)
    {
        pfGeneralPurposeCallback(u8MuInstance, u32HseNotifEvents);
    }

    /* Clear Event */
    HSE_MU_SetGeneralStatusReg(u8MuInstance, u32HseNotifEvents);
}

/*******************************************************************************
 * Register the callback for general purpose interrupt
 ******************************************************************************/
void HSE_RegisterGeneralPurposeCallback(uint8_t u8MuInstance, uint32_t u32ErrorsMask,
    pfGeneralPurposeCallback_t pfGeneralPurposeCallback)
{
    uint8_t u8Index;

    /* Register callback on all MU instances */
    if ((0xFFU) == u8MuInstance)
    {
        for(u8Index = 0U; u8Index < HSE_NUM_OF_MU_INSTANCES; u8Index++)
        {
            HSE_MU_EnableInterrupts(u8Index, HSE_INT_SYS_EVENT, u32ErrorsMask);
            hseNotifEventsCallbacks[u8Index] = pfGeneralPurposeCallback;
        }
    }
    /* Register callback on only one MU Instance (if valid) */
    else if (HSE_NUM_OF_MU_INSTANCES > u8MuInstance)
    {
        HSE_MU_EnableInterrupts(u8MuInstance, HSE_INT_SYS_EVENT, u32ErrorsMask);
        hseNotifEventsCallbacks[u8MuInstance] = pfGeneralPurposeCallback;
    }
}

#ifdef __cplusplus
}
#endif

/** @} */
