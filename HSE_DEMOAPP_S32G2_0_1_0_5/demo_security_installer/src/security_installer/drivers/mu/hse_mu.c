/**
*   @file    hse_mu.c
*
*   @brief   MU driver for host.
*   @details Contains functions for HOST-HSE communication over MU.
*
*   @addtogroup MU Interface
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

#include "hse_mu.h"

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

#if ((HSE_S32G2XX == HSE_PLATFORM) || (HSE_S32R45X == HSE_PLATFORM))
    /* MU Instance base address - S32G2/S32R45 platform */
    #define MU_INSTANCE0            ((uint32_t)0x40210000UL)    /**< @brief MU0 base address */
    #define MU_INSTANCE1            ((uint32_t)0x40211000UL)    /**< @brief MU1 base address */
    #define MU_INSTANCE2            ((uint32_t)0x40212000UL)    /**< @brief MU2 base address */
    #define MU_INSTANCE3            ((uint32_t)0x40213000UL)    /**< @brief MU3 base address */

#elif(HSE_S32S2XX == HSE_PLATFORM)
    /* MU Instance base address - S32S2 platform */
    #define MU_INSTANCE0            ((uint32_t)0x40334000UL)    /**< @brief MU0 base address */
    #define MU_INSTANCE1            ((uint32_t)0x40335000UL)    /**< @brief MU1 base address */
    #define MU_INSTANCE2            ((uint32_t)0x40336000UL)    /**< @brief MU2 base address */
    #define MU_INSTANCE3            ((uint32_t)0x40337000UL)    /**< @brief MU3 base address */

#elif(HSE_S32K2TV == HSE_PLATFORM)
    /* MU Instance base address - S32K2TV platform */
    #define MU_INSTANCE0            ((uint32_t)0x40194000UL)    /**< @brief MU3 base address */
    #define MU_INSTANCE1            ((uint32_t)0x40370000UL)    /**< @brief MU1 base address */
    #define MU_INSTANCE2            ((uint32_t)0x40374000UL)    /**< @brief MU2 base address */
    #define MU_INSTANCE3            ((uint32_t)0x40378000UL)    /**< @brief MU3 base address - for S32K2TV are only 3 MUs */

#else
#error "Host MU base addreses not defined for this platform!"
#endif

/* Macro that tests if the service channel is busy (opened by host) */
#define IS_SERVICE_CHANNEL_BUSY(MU, CH)    (\
            ( MU_IS_BIT_SET(HSE_MU_READ_FLAG_STATUS_REGISTER(MU),     CH)) \
         || (!MU_IS_BIT_SET(HSE_MU_READ_TRANSMIT_STATUS_REGISTER(MU), CH)) \
         || ( MU_IS_BIT_SET(HSE_MU_READ_RECEIVE_STATUS_REGISTER(MU),  CH)) \
)

/* Channel mask depending on the number of channels: 16 on HSE H/M, 8 on HSE B */
#define MU_CHANNEL_MASK         (0xFFFFFFFFUL >> (32UL - HSE_NUM_OF_CHANNELS_PER_MU))

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/* Base addresses for each MU instance */
const uint32_t u32BaseAddr[HSE_NUM_OF_MU_INSTANCES] = {MU_INSTANCE0, MU_INSTANCE1, MU_INSTANCE2, MU_INSTANCE3};

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/* Log the RX interrupts enablement status: Enabled/Disabled */
volatile uint32_t muRxEnabledInterruptMask[HSE_NUM_OF_MU_INSTANCES] = {0UL};

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
* Description:  Returns the channel status (FREE or BUSY).
************************************************************************************************/
muChannelStatus_t HSE_MU_GetChannelStatus( uint8_t u8MuInstance, uint8_t u8Channel )
{
    return (IS_SERVICE_CHANNEL_BUSY(u8MuInstance, u8Channel) ? (MU_CHANNEL_BUSY) : (MU_CHANNEL_FREE));
}

/*************************************************************************************************
* Description:  Returns TRUE if the HSE ACK is pending on the selected service channel
************************************************************************************************/
bool_t HSE_MU_IsAckPending( uint8_t u8MuInstance, uint8_t u8Channel )
{
    return (!MU_IS_BIT_SET(HSE_MU_READ_TRANSMIT_STATUS_REGISTER(u8MuInstance), u8Channel));
}

/*************************************************************************************************
* Description:  Returns TRUE if a response is ready to be read for the selected service channel
************************************************************************************************/
bool_t HSE_MU_IsResponseReady( uint8_t u8MuInstance, uint8_t u8Channel )
{
    return (MU_IS_BIT_SET(HSE_MU_READ_RECEIVE_STATUS_REGISTER(u8MuInstance), u8Channel));
}

/*************************************************************************************************
* Description:  Returns the HSE status (16 MSB of FSR).
************************************************************************************************/
uint16_t HSE_MU_GetHseStatus( uint8_t u8MuInstance )
{
    uint32_t u32FlagStatusReg = 0UL;

    /* Get MU_FSR (MU Flag Status register) and returns HSE status (16 MSB) */
    u32FlagStatusReg = HSE_MU_READ_FLAG_STATUS_REGISTER(u8MuInstance);
    u32FlagStatusReg = ((u32FlagStatusReg & 0xFFFF0000UL) >> 16U);

    return (uint16_t) u32FlagStatusReg;
}

/*************************************************************************************************
* Description:  Tries to send (non-blocking) the hseSrvDescriptor's address
*               on the specified MU Instance and channel.
************************************************************************************************/
bool_t HSE_MU_SendRequest( uint8_t u8MuInstance, uint8_t u8Channel, uint32_t *pHseSrvDescriptor )
{
    bool_t bTransmitSuccess = FALSE;

    if(!IS_SERVICE_CHANNEL_BUSY(u8MuInstance, u8Channel))
    {
        HSE_MU_SEND_NON_BLOCKING(u8MuInstance, u8Channel, (uint32_t)pHseSrvDescriptor);
        bTransmitSuccess = TRUE;
    }

    return bTransmitSuccess;
}

/*************************************************************************************************
* Description:  Reads (non-blocking) the HSE response (RR).
************************************************************************************************/
uint32_t HSE_MU_ReceiveResponse( uint8_t u8MuInstance, uint8_t u8Channel )
{
    uint32_t hseSrvResponse = HSE_MU_RECEIVE_NON_BLOCKING(u8MuInstance, u8Channel);
    return hseSrvResponse;
}

/*************************************************************************************************
* Description:  Enables the specified type interrupts using the mask.
************************************************************************************************/
void HSE_MU_EnableInterrupts( uint8_t u8MuInstance, muInterruptType_t muInterruptType, uint32_t u32InterruptMask )
{
    uint32_t u32Offset = 0UL;
    uint32_t u32InterruptEnableReg = 0UL;
    uint32_t u32Value = u32InterruptMask;

    switch(muInterruptType) {
        case HSE_INT_ACK_REQUEST:
            u32Offset = MU_TCR_OFFSET;
            /* Enabled per channel - 16 LSB (HSE H/M), 8 LSB (HSE B) */
            u32Value &= MU_CHANNEL_MASK;
            break;
        case HSE_INT_RESPONSE:
            u32Offset = MU_RCR_OFFSET;
            /* Enabled per channel - 16 LSB (HSE H/M), 8 LSB (HSE B) */
            u32Value &= MU_CHANNEL_MASK;
            break;
        case HSE_INT_SYS_EVENT:
            u32Offset = MU_GIER_OFFSET;
            break;
        default:
            return;
    }

    /* Enable Interrupts */
    u32InterruptEnableReg = MU_REG_READ32(u32BaseAddr[u8MuInstance] + u32Offset);
    u32InterruptEnableReg |= u32Value;
    /* Keep a copy in RAM */
    if(HSE_INT_RESPONSE == muInterruptType) {
        muRxEnabledInterruptMask[u8MuInstance] = u32InterruptEnableReg;
    }
    MU_REG_WRITE32(u32BaseAddr[u8MuInstance] + u32Offset, u32InterruptEnableReg);
}

/*************************************************************************************************
* Description:  Disables the specified type interrupts using the mask.
************************************************************************************************/
void HSE_MU_DisableInterrupts( uint8_t u8MuInstance, muInterruptType_t muInterruptType, uint32_t u32InterruptMask )
{
    uint32_t u32Offset = 0UL;
    uint32_t u32InterruptEnableReg = 0UL;
    uint32_t u32Value = u32InterruptMask;

    switch(muInterruptType) {
        case HSE_INT_ACK_REQUEST:
            u32Offset = MU_TCR_OFFSET;
            /* Disabled per channel - 16 LSB (HSE H/M), 8 LSB (HSE B) */
            u32Value &= MU_CHANNEL_MASK;
            break;
        case HSE_INT_RESPONSE:
            u32Offset = MU_RCR_OFFSET;
            /* Disabled per channel - 16 LSB (HSE H/M), 8 LSB (HSE B) */
            u32Value &= MU_CHANNEL_MASK;
            break;
        case HSE_INT_SYS_EVENT:
            u32Offset = MU_GIER_OFFSET;
            break;
        default:
            return;
    }

    /* Disable Interrupts */
    u32InterruptEnableReg = MU_REG_READ32(u32BaseAddr[u8MuInstance] + u32Offset);
    u32InterruptEnableReg &= ~(u32Value);
    /* Keep a copy in RAM */
    if(HSE_INT_RESPONSE == muInterruptType) {
        muRxEnabledInterruptMask[u8MuInstance] = u32InterruptEnableReg;
    }
    MU_REG_WRITE32(u32BaseAddr[u8MuInstance] + u32Offset, u32InterruptEnableReg);
}

void HSE_MU_SetGeneralStatusReg( uint8_t u8MuInstance, uint32_t u32Mask )
{
    uint32_t u32GeneralStatusRegister = HSE_MU_READ_GENERAL_STATUS_REGISTER(u8MuInstance);
    u32GeneralStatusRegister |= u32Mask;
    HSE_MU_WRITE_GENERAL_STATUS_REGISTER(u8MuInstance, u32GeneralStatusRegister);
}

uint32_t HSE_MU_GetGeneralStatusReg( uint8_t u8MuInstance )
{
    return HSE_MU_READ_GENERAL_STATUS_REGISTER(u8MuInstance);
}

uint32_t HSE_MU_GetReceiveStatusReg( uint8_t u8MuInstance )
{
    return HSE_MU_READ_RECEIVE_STATUS_REGISTER(u8MuInstance);
}

/*************************************************************************************************
* Description:  Send sync event to HSE.
************************************************************************************************/
void HSE_MU_SendEvent( uint32_t event )
{
    HSE_MU_WRITE_GENERAL_CONTROL_REGISTER(0U, event);
}

#ifdef __cplusplus
}
#endif

/** @} */

