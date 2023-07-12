/************************************************************************************
*            (c) Copyright Freescale Semiconductor, 2011-2019                       *
*                         All Rights Reserved                                       *
*************************************************************************************/

/*==================================================================================================
 *   Project              : AUTOSAR 4.4 MCAL
 *   Platform             : CORTEXM
 *   Peripheral           : IPV_QSPI
 *   Dependencies         : none
 *
 *   Autosar Version      : 4.4.0
 *   Autosar Revision     : ASR_REL_4_4_REV_0000
 *   Autosar Conf.Variant :
 *   SW Version           : 0.8.0
 *   Build Version        : S32XX_MCAL_0_8_0_EAR_ASR_REL_4_4_REV_0000_20191025
 *
 *   (c) Copyright 2006-2016 Freescale Semiconductor, Inc.
*       Copyright 2017-2019 NXP
 *   All Rights Reserved.
==================================================================================================*/

#include "Compiler.h"
#include "Fls_Qspi_Registers.h"
#include "Fls_Qspi_Api.h"

/*==================================================================================================
*                                    GLOBAL VARIABLES
==================================================================================================*/
static volatile uint32 Fls_u32JobSectorIt = 0U;
static uint32 Fls_Qspi_u32DeviceId = 0UL;
static uint8 Fls_Qspi_u8HwUnitCfgIndex = 0U;
static uint32 Fls_Qspi_u32ExtSectStartAddr = 0U;
static const Fls_ConfigType *Fls_pConfigPtr = NULL_PTR;

static uint32 Fls_Qspi_u32MemoryAddress = 0U;
static uint32 Fls_u32LLDRemainingDataToWrite = 0;
static uint32 Fls_Qspi_u32BufferAddress = 0;
static boolean Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
/*==================================================================================================
*                                    INIT FUNCTION
==================================================================================================*/
static Fls_LLDReturnType Fls_Qspi_ReadDeviceId(uint8 u8HwUnitCfgIndex, uint8 *p8DataReadPtr);
static Fls_LLDReturnType Fls_Qspi_ReadRXBuffer(uint32 u32BytesToRead, uint8 *p8DataReadPtr, uint8 *p8DataCmpPtr);
static void Fls_Qspi_LaunchLUTCommand(const uint8 u8LUTId,const uint32 u32DataSize);
static Fls_LLDReturnType Fls_Qspi_CheckControllerIsIdle(void);
static Fls_LLDReturnType Fls_Qspi_WriteEnable(uint32 u32StartAddr, Fls_ConfigRegiterModesType ReadConfigModes);
static Fls_LLDReturnType Fls_Qspi_CheckExtMemIsIdle(uint32 u32StartAddr, Fls_ConfigRegiterModesType ReadConfigModes);
Fls_LLDReturnType Fls_Qspi_GetMemStatus(uint32 *p32DataPtr,uint32 u32StartAddr, Fls_ConfigRegiterModesType ReadConfigModes);
static Fls_LLDReturnType Fls_Qspi_LoadTXBuffer(Fls_AddressType u32SourceAddr, uint32 u32BytesToWrite);
static void Fls_Qspi_InvalidateAhbBuffers(void);
static Fls_ConfigRegiterModesType Fls_ReadConfigRegister2(uint32 u32StartAddr);
static Fls_LLDReturnType Fls_WriteConfigRegister2(uint32 u32StartAddr, Fls_ConfigRegiterModesType ReadConfigModes);
static void Fls_QspiSetLUT(uint32 u8LUTNumber,uint32 LUTExtraIndex);
static Fls_LLDReturnType RevertInitFunction(void);
/**
 *
 * Checking status of BUSY bit
 *
**/
static Fls_LLDReturnType Fls_Qspi_CheckControllerIsIdle(void)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;

    /* Check if controller is busy(BUSY bit asserted). */
    if (0U != (QSPI_SR_BUSY_U32 & REG_READ32(QSPI_0_BASEADDR + QSPI_SR_OFFSET_U32)))
    {
        /* Error, controller is busy handling another transaction. */
        eRetVal = FLASH_E_FAILED;
    }
    return eRetVal;
}
/**
* @brief        Qspi launch a LUT command.
*
* @details      Launch a LUT command, sequence, in IP mode.
*
* @param[in]    u8LUTId     - id of the LUT sequence used in the command. upon this ID write, the external transaction is started.
* @param[in]    u32DataSize - data size(number of bytes) of the external transaction(used for read/write commands). when this value is
*                             not zero, it overrides the transaction length set in the LUT commands.
* @param[out]   none
*
* @post         External transaction is triggered on the QSPI external lines.
*
*
*/
static void Fls_Qspi_LaunchLUTCommand(const uint8 u8LUTId,const uint32 u32DataSize)
{
    uint32 u32Reg = ((uint32) u8LUTId << QSPI_IPCR_SEQID_SHIFT_U32) | (u32DataSize << QSPI_IPCR_IDATSZ_SHIFT_U32) | (0 << QSPI_IPCR_PAR_EN_SHIFT_U32);

    /* Set transfer size and launch LUT[u8LUTId] command, by writing the LUT sequence ID. */
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_IPCR_OFFSET_U32, u32Reg);

}
/**
* @brief        Read the RX Buffer.
*
* @details      Read data from the RX Buffer, as part of a read transaction in IP mode and if
*               needed perform also the compare operations.
*
* @param[in]    u32BytesToRead  - read data length, number of bytes to be read by this job.
* @param[in]    p8DataReadPtr   - pointer to application buffer, used as destination and storage for the read data.
*                               - if the pointer is not null, the function performs a Read operation type and ignores the p8DataCmpPtr.
*                               - if the pointer is null, the function performs a Compare operation type and checks the p8DataCmpPtr to further decide.
* @param[in]    p8DataCmpPtr    - pointer to application buffer, used as source when comparing read data against a reference.
*                               - if the pointer is not null, the function performs a Compare/Verify Write operation type, checking the read data against the compare buffer.
*                               - if the pointer is null, the function performs a Blank check operation type, checking the read data against the flash erased value.
* @param[out]   p8DataReadPtr
*
* @param[ret]   FLASH_E_OK      - Read successful.
*               FLASH_E_FAILED  - Error during read transaction: controller busy, incorrect number of bytes received, error flags set.
*
* @post         RX Buffer is cleared, transmission and error flags are reset.
*
*
*/
static Fls_LLDReturnType Fls_Qspi_ReadRXBuffer(uint32 u32BytesToRead, uint8 *p8DataReadPtr, uint8 *p8DataCmpPtr)
{
    uint32 u32RXBuffBaseAddr;
    uint8 u8Iter = 0U;

    /* Check that at least the expected number of words were received, WMRK words level reached. */
    if (0U == REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_SR_OFFSET_U32, QSPI_SR_RXWE_U32))  /* Poll RXWE bit. */
    {
        /* Error, the expected number of words were not received. */
       return FLASH_E_FAILED;
    }

    /* Check that no more than the expected number of words were received, RDBFL words level not exceeded. */
    if ((uint32)((u32BytesToRead + 3U) / 4U)  < (uint32)((REG_READ32(QSPI_0_BASEADDR + QSPI_RBSR_OFFSET_U32) & QSPI_RBSR_RDBFL_MASK_U32) >> QSPI_RBSR_RDBFL_SHIFT_U32))
    {
        /* Error, the expected number of words was exceeded. */
        return FLASH_E_FAILED;
    }

    /* Check errors from QSPI_FR. */
    if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32 | QSPI_FR_CRCAEF_MASK_U32))
    {
        /* Clear the errors (w1c). */

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32 | QSPI_FR_CRCAEF_MASK_U32);

        return FLASH_E_FAILED;
    }

    /* Read received data from RX Buffer, if the expected number of bytes was received. */
    /* Get RX Buffer base address, used for reading RXBuffer through AHB bus(ARDB base addr) or IP bus(RXBRD base addr). */
    if (FLS_RXBUFFER_AHB_BUS_ACCESS == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].eQspiUnitRxBufferAccessMode)
    {
        /* RX Buffer content is read using the AHB Bus registers QSPI_ARDB0 to QSPI_ARDB127. */
        u32RXBuffBaseAddr = QSPI_0_ARDB_BASEADDR_U32;
    }

    else /*if (FLS_RXBUFFER_IP_BUS_ACCESS == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].eQspiUnitRxBufferAccessMode)*/
    {
        /* RX Buffer content is read using the IP Bus registers QSPI_RBDR0 to QSPI_RBDR63. */
        u32RXBuffBaseAddr = QSPI_0_BASEADDR + QSPI_RBDR_OFFSET_U32;
    }

    do
    {
        /* Read aligned word entries if they exist. */
        if ((0U == ((uint32) p8DataReadPtr % 4U)) && (0U == ((u32RXBuffBaseAddr + ((uint32) u8Iter)) % 4U)) && (4U <= u32BytesToRead))  /* An aligned entry(32bits, 4 bytes) and at least 4bytes have to be read. */
        {
            /* Check what operation is intended: read, compare, blank check or write verify. */
            if (NULL_PTR != p8DataReadPtr)
            {
                /* Read operation type. */
                /* Read RX Buffer 32bit entry and copy it into the application read buffer. */

                 *((volatile uint32 *) p8DataReadPtr) = REG_READ32(u32RXBuffBaseAddr + ((uint32) u8Iter));

                p8DataReadPtr += 4U; /* Increment 4 bytes. */
            }
            else /* No read operation intended, only a compare type operation. */
            {
               if (NULL_PTR != p8DataCmpPtr)
                {
                   uint32 u32ApplData = 0UL;
                   uint32 u32MemData = 0UL;

                   u32ApplData = *((volatile const uint32 *)p8DataCmpPtr);
                   u32MemData = REG_READ32(u32RXBuffBaseAddr + ((uint32) u8Iter));
                   /* Compare or Write Verify operation type). */
                   if (u32ApplData != u32MemData)
                   {
                       /* Error, data read does not match the provided compare buffer.*/
                       return FLASH_E_BLOCK_INCONSISTENT;
                   }

                   p8DataCmpPtr += 4U; /* Increment 4 bytes. */
                }
               else /* Both "p8DataReadPtr" and "p8DataCmpPtr" are null, so a blank check operatio type is intended. */
               {
                    /* Blank Check operation type. */
                    if (FLS_ERASED_VALUE != REG_READ32(u32RXBuffBaseAddr + ((uint32) u8Iter)))
                    {
                       /* Error, data read does not match the provided compare buffer.*/
                       return FLASH_E_BLOCK_INCONSISTENT;
                    }
               }
            }
            /* Update the counters, and the total number of bytes to be read. */
            u8Iter += 4U;
            u32BytesToRead -= 4U;
        }
        else  /* If read unaligned or byte entries. */
        {
            if (NULL_PTR != p8DataReadPtr)
            {
                /* Read operation type. */
                *p8DataReadPtr = REG_READ8(u32RXBuffBaseAddr + ((uint32) u8Iter));
                p8DataReadPtr += 1U;    /* Increment 1 bytes. */
            }
            else /* No read operation intended, only a compare type operation. */
            {
                if (NULL_PTR != p8DataCmpPtr)
                {
                    /* Compare or Write Verify operation type). */
                    if ((uint8) (*p8DataCmpPtr) != REG_READ8(u32RXBuffBaseAddr + ((uint32) u8Iter)))
                    {
                        /* Error, data read does not match the provided compare buffer.*/
                        return FLASH_E_BLOCK_INCONSISTENT;
                    }
                    p8DataCmpPtr += 1U; /* Increment 1 bytes. */
                }
                else /* Both "p8DataReadPtr" and "p8DataCmpPtr" are null, so a blank check operatio type is intended. */
                {
                    /* Blank Check operation type. */
                    if ((uint8) FLS_ERASED_VALUE != REG_READ8(u32RXBuffBaseAddr + ((uint32)u8Iter)))
                    {
                        /* Error, data read does not match the provided compare buffer.*/
                        return FLASH_E_BLOCK_INCONSISTENT;
                    }
                }
            }
            /* Update the counters, and the total number of bytes to be read. */
            u8Iter += 1U;
            u32BytesToRead -= 1U;
        }
    } while(u32BytesToRead > 0U);

    /* Clear the RX Buffer and reception flags, counters. */
    REG_BIT_SET32(QSPI_0_BASEADDR +  QSPI_MCR_OFFSET_U32, QSPI_MCR_CLR_RXF_U32);

    return FLASH_E_OK;
}

static Fls_LLDReturnType Fls_Qspi_ReadDeviceId(uint8 u8HwUnitCfgIndex, uint8 *p8DataReadPtr)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;
    uint8 u8LUTReadIDId = 0U;
    uint8 u8BytesToRead = 0U;
    uint32 u32TimeoutValue;

    /* Set the QSPI hardware unit start address, global variable. */
    Fls_Qspi_u32ExtSectStartAddr = QSPI_QSPI_0_AMBA_BASE_U32;

    /* Get LUT Read sequence index. The configuration structure holds the index from the LUT configuration array(0,1,2,...) */
        u8LUTReadIDId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8HwUnitCfgIndex].u8QspiLUTReadIdSeq;
        u8BytesToRead = 2U;     /* For normal QSPI mode, 2 bytes have to be read. */
     /* Set the start address of the IP read transaction. */
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFAR_OFFSET_U32, Fls_Qspi_u32ExtSectStartAddr);
    /* Set the Watermark value. */
    REG_RMW32(QSPI_0_BASEADDR +  QSPI_RBCT_OFFSET_U32, QSPI_RBCT_WMRK_MASK_U32, QSPI_RBCT_WMRK_VALUE_U32);   /* Expect maximum 1 word(4byte entries) */
    /* Clear reception flags, counters, prior to triggering the IP command. */
    REG_BIT_SET32(QSPI_0_BASEADDR +  QSPI_MCR_OFFSET_U32, QSPI_MCR_CLR_RXF_U32);
    /* Clear the errors (w1c). */
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32 | QSPI_FR_CRCAEF_MASK_U32 );

    /* Launch READ command. */
    Fls_Qspi_LaunchLUTCommand(u8LUTReadIDId, (uint32)u8BytesToRead);

    /* Update timeout value */
    u32TimeoutValue = FLS_TIMEOUT_VALUE;
    /* Wait for transaction to finish. */
    while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
    {
        /* Avoid if Hardware stuck*/
        u32TimeoutValue --;
        if (0U == u32TimeoutValue)
        {
            /* Operation failed due to timeout */
            return FLASH_E_TIMEOUT;
        }
    }

    eRetVal = Fls_Qspi_ReadRXBuffer(u8BytesToRead, p8DataReadPtr, NULL_PTR);   /* Read the 2 bytes device ID. */

    return eRetVal;
}
/**
* @brief        Qspi IP initialization
*
* @details      Configures all the QuadSPI IPs with the configuration parameters
*
* @param[in]    PtrToCfgStruct
* @param[out]   Fls_LLDReturnType
*
* @pre          none
* @post         The module is initialized
*
*
*/
Fls_LLDReturnType Fls_Qspi_Init(Fls_ConfigType *PtrToCfgStruct)
{
    uint8 u8Iter = 0U;
    uint8 u8Iter2 = 0U;
    uint8 u8Iter3 = 0U;
    uint32 u32AhbBuffDataTransfSize = 0UL;
    Fls_AhbBufferMasterIdType eAhbBuffMasterId;
    uint32   u32DllStatus = 0U;
    uint32 u32TimeoutValue;

    /* if PtrToCfgStruct = NULL*/
    if(PtrToCfgStruct == NULL_PTR)
    {
        return FLASH_E_FAILED;
    }
    else
    {
        Fls_pConfigPtr = PtrToCfgStruct;
    }

    /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);

    /* It selects DQS clock for sampling read data at Flash A QuadSPI port*/
    /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
    REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32) (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingModeA << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);

    /* It selects DQS clock for sampling read data at Flash B QuadSPI port*/
    REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FB_SEL_MASK_U32, (uint32) (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingModeB << QSPI_MCR_DQS_FB_SEL_SHIFT_U32);

   /* Configure read mode (SDR or DDR mode). */
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);

    /* CK2 DDR center align read strobe for Flash A.*/
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDdrCentrerAlignReadA)
    {

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
    }
    else
    {
        /*Set this bit to '1' to enable CK2 output 90 degree phase shifted clock for Flash A.*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
    }
    /* Clock on differential CKN pad of Flash A */
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bClockOnDifferentialCknPadA)
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CKN_FA_EN_U32);
    }
    else
    {
        /* Set '1' to enable clock on differential CKN pad of Flash A.*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CKN_FA_EN_U32);
    }
    /* CK2 DDR center align read strobe for Flash B.*/
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDdrCentrerAlignReadB)
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FB_U32);
    }
    else
    {
        /*Set this bit to '1' to enable CK2 output 90 degree phase shifted clock for Flash B.*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FB_U32);
    }
    /*Clock on differential CKN pad of Flash B*/
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bClockOnDifferentialCknPadB)
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CKN_FB_EN_U32);
    }
    else
    {
        /* Set '1' to enable clock on differential CKN pad of Flash B.*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CKN_FB_EN_U32);
    }
    /* This is valid for both SDR and DDR mode*/
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDqsEnable)
    {
        /* Disable DQS. */
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
    }
    else
    {
        /* Enable DQS. */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
    }



   /* It selects DQS clock for sampling read data at Flash A QuadSPI port*/
   /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
    REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingModeA << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);

    /* It selects DQS clock for sampling read data at Flash B QuadSPI port*/

    REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FB_SEL_MASK_U32, (uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingModeB << QSPI_MCR_DQS_FB_SEL_SHIFT_U32);

    /*
    * Allows subsequent writes (This bit enables to disable subsequent writes to Flash after
    * first write transaction, AHB write is returned with error response)
    */
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_AWRCR_OFFSET_U32, QSPI_AWRCR_PPW_WR_DIS_U32);
    /*
     * Allows subsequent reads (This bit enables to disable subsequent read to Flash after
     * first write transaction, AHB read is returned with error response)
     */

    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_AWRCR_OFFSET_U32, QSPI_AWRCR_PPW_RD_DIS_U32);

    /* Configure Idle Signal Drive IOFB[3] Flash B. */
    if ((boolean)TRUE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiUnitIOFB3HighLvl)
    {
        /* IOFB[3] is driven to logic H. */

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_ISD3FB_U32);
    }
    else
    {
        /* IOFB[3] is driven to logic L. */

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_ISD3FB_U32);
    }

    /* Configure Idle Signal Drive IOFB[2] Flash B. */
    if ((boolean)TRUE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiUnitIOFB2HighLvl)
    {
        /* IOFB[2] is driven to logic H. */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_ISD2FB_U32);
    }
    else
    {
        /* IOFB[2] is driven to logic L. */
       REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_ISD2FB_U32);
    }

    /* Configure Idle Signal Drive IOFA[3] Flash A. */
    if ((boolean)TRUE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiUnitIOFA3HighLvl)
    {
        /* IOFA[3] is driven to logic H. */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_ISD3FA_U32);
    }
    else
    {
        /* IOFA[3] is driven to logic L. */
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_ISD3FA_U32);
    }

    /* Configure Idle Signal Drive IOFA[2] Flash A. */
    if ((boolean)TRUE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiUnitIOFA2HighLvl)
    {
        /* IOFA[2] is driven to logic H. */
       REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_ISD2FA_U32);
    }
    else
    {
        /* IOFA[2] is driven to logic L. */
       REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_ISD2FA_U32);
    }
    /* Configure sampling edge.(Applicable in SDR mode only.) */
    if (FLS_RISING == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingEdge)
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_SMPR_OFFSET_U32, QSPI_SMPR_FSPHS_U32);
    }
    else if (FLS_FALLING == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingEdge)
    {

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_SMPR_OFFSET_U32, QSPI_SMPR_FSPHS_U32);
    }
    else
    {
        /* Configuration error.*/
        return FLASH_E_FAILED;
    }

    /* Full Speed Delay selection for Internal/padloopback DQS sampling*/
     /* Same DQS*/
    if (FLS_1SAMPLE_DLY == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingDly)
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_SMPR_OFFSET_U32, QSPI_SMPR_FSDLY_U32);
    }
    /* Half cycle early DQS*/
    else if (FLS_2SAMPLE_DLY == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingDly)
    {
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_SMPR_OFFSET_U32, QSPI_SMPR_FSDLY_U32);
    }
    else
    {
        /* Configuration error.*/
        return FLASH_E_FAILED;
    }
    /* Selects the Nth tap provided by Fa slave delay-chain */
    REG_RMW32(QSPI_0_BASEADDR + QSPI_SMPR_OFFSET_U32, QSPI_SMPR_DLLFSMPFA_MASK_U32, (uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiUnitDLLFSMPFA << QSPI_SMPR_DLLFSMPFA_SHIFT_U32);
    REG_RMW32(QSPI_0_BASEADDR + QSPI_SMPR_OFFSET_U32, QSPI_SMPR_DLLFSMPFB_MASK_U32, (uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiUnitDLLFSMPFB << QSPI_SMPR_DLLFSMPFB_SHIFT_U32);


    /* Enable latency delay options. */
    if ((boolean)TRUE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiUnitDqsLatencyEn)
    {

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_LAT_EN_U32);
    }
    else
    {

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_LAT_EN_U32);
    }
    /* Configure TDH (data in hold time, for data sent to flash). */
    REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TDH_MASK_U32,
               (uint32)((uint32)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitTdh) << QSPI_FLSHCR_TDH_SHIFT_U32));
   /* Configure TCSH (data in hold time, for data sent to flash). */
    REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TCSH_MASK_U32,
               (uint32)((uint32)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiUnitTcsh) << QSPI_FLSHCR_TCSH_SHIFT_U32));
    /* Configure TCSS (data in hold time, for data sent to flash). */
    REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TCSS_MASK_U32,
               (uint32)((uint32)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiUnitTcss) << QSPI_FLSHCR_TCSS_SHIFT_U32)

            );
    /* Configure endianness. */

    REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_END_MASK_U32,
               (uint32)((uint32)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitEndian) << QSPI_MCR_END_SHIFT_U32)

            );
    /* Configure read mode for the RX buffer (using IP bus or AHB bus) */
    if (FLS_RXBUFFER_AHB_BUS_ACCESS == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitRxBufferAccessMode)
    {
        /* RX Buffer content is read using the AHB Bus registers QSPI_ARDB0 to QSPI_ARDB31. */

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_RBCT_OFFSET_U32, QSPI_RBCT_RXBRD_MASK_U32);
    }
    else if (FLS_RXBUFFER_IP_BUS_ACCESS == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitRxBufferAccessMode)
    {
        /* RX Buffer content is read using the IP Bus registers QSPI_RBDR0 to QSPI_RBDR31. */

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_RBCT_OFFSET_U32, QSPI_RBCT_RXBRD_MASK_U32);
    }
    else
    {
        /* Configuration error.*/
        return FLASH_E_FAILED;
    }

    /* Configure each AHB buffer. Loop through all configured AHB buffers. */
    for(u8Iter2 = 0U; u8Iter2 < (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiUnitAhbBufferCount; u8Iter2++)
    {
        eAhbBuffMasterId = (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBufferMasterId)[u8Iter2];
        /* Configure MSTRID field from BUFxCR registers. Depending on the master id, a particular AHB buffer is used to store the read data. */
        REG_RMW32(QSPI_0_BASEADDR + QSPI_BUFXCR_OFFSET_U32 + (uint32)((uint32)(*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBuffer)[u8Iter2] * 4UL),
                   QSPI_BUFxCR_MSTRID_MASK_U32, (uint32)eAhbBuffMasterId

                 );
        u32AhbBuffDataTransfSize = (uint32)((*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBufferDataTransferSize)[u8Iter2] / 8UL);
        /* Configure the data prefetch transfer size(the size of the data read transaction triggered by an AHB read access).
           When this value is 0,the data size mentioned in the LUT sequence pointed to by the SEQID field overrides this value. */
        REG_RMW32(QSPI_0_BASEADDR + QSPI_BUFXCR_OFFSET_U32 + (uint32)((uint32)(*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBuffer)[u8Iter2] * 4UL),
                   QSPI_BUFxCR_ADATSZ_MASK_U32,
                   (uint32)(u32AhbBuffDataTransfSize << QSPI_BUFxCR_ADATSZ_SHIFT_U32)

                 );
        /* Configure AHB buffer size for all buffers(0,1,2) except buffer no.3. AHB buffer 3 size is determined by Max size - buffer 2 top.*/
        if (FLS_AHB_BUFFER_0 == (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBuffer)[u8Iter2])
        {
            REG_WRITE32(QSPI_0_BASEADDR + QSPI_BUF0IND_OFFSET_U32,
                         (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBufferSize)[u8Iter2]

                      );
        }
        else if (FLS_AHB_BUFFER_1 == (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBuffer)[u8Iter2])
        {
            REG_WRITE32(QSPI_0_BASEADDR + QSPI_BUF1IND_OFFSET_U32,
                         REG_READ32(QSPI_0_BASEADDR + QSPI_BUF0IND_OFFSET_U32) +
                         (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBufferSize)[u8Iter2]

                      );
        }
        else if (FLS_AHB_BUFFER_2 == (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBuffer)[u8Iter2])
        {
            REG_WRITE32(QSPI_0_BASEADDR + QSPI_BUF2IND_OFFSET_U32,
                         REG_READ32(QSPI_0_BASEADDR + QSPI_BUF1IND_OFFSET_U32) +
                         (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitAhbBufferSize)[u8Iter2]

                      );
        }
        else /* FLS_AHB_BUFFER_3 */
        {
            /*The size of the FLS_AHB_BUFFER_3 is determined by AHB_MAX_SIZE - FLS_AHB_BUFFER_2 top.*/
        }
    }
    /* Set ALLMST bit - enable access for all masters to FLS_AHB_BUFFER_3 */
    if ((boolean)TRUE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bHwUnitAhbBufferAllMasters)
    {
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_BUF3CR_OFFSET_U32, QSPI_BUF3CR_ALLMST_MASK_U32);
    }
    else
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_BUF3CR_OFFSET_U32, QSPI_BUF3CR_ALLMST_MASK_U32);
    }
    /* Configure Serial flash address assignment. Based on the values from SF(A/B)(1/2)AD registers, the size of the flash memory and corresponding CS line is determined. */
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFA1AD_OFFSET_U32, (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitSerialAddrMapping)[0U]);
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFA2AD_OFFSET_U32, (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitSerialAddrMapping)[1U]);
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFB1AD_OFFSET_U32, (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitSerialAddrMapping)[2U]);
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFB2AD_OFFSET_U32, (*(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitSerialAddrMapping)[3U]);
    /* Configure the Address mode - set the column address width. */
    REG_RMW32(QSPI_0_BASEADDR + QSPI_SFACR_OFFSET_U32, QSPI_SFACR_CAS_MASK_U32, (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiUnitColumnAddressWidth);
    /* Enable the WordAddressable(2byte) address mode setting. */
    if ((boolean)TRUE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiUnitWordAddressable)
    {
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_SFACR_OFFSET_U32, QSPI_SFACR_WA_U32);
    }
    else
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_SFACR_OFFSET_U32, QSPI_SFACR_WA_U32);
    }
    /* In case of Octal DDR mode, this bit controls whether a word unit composed of two bytes from posedge and negedge of a single DQS cycle needs to be swapped.*/
    if ((boolean)TRUE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiUnitByteSwapping)
    {
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_SFACR_OFFSET_U32, QSPI_SFACR_BYTE_SWAP_U32);
    }
    else
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_SFACR_OFFSET_U32, QSPI_SFACR_BYTE_SWAP_U32);
    }
     /* Unlock the LUT. */
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_LUTKEY_OFFSET_U32, QSPI_LUT_KEY_VALUE_U32);
    REG_RMW32(QSPI_0_BASEADDR + QSPI_LCKCR_OFFSET_U32, QSPI_LCKCR_MASK_U32, QSPI_LCKCR_UNLOCKED_U32);
    /* Clear all previous LUT values. */
    for(u8Iter2 = 0U; u8Iter2 < FLS_NO_OF_LUTS_U8; u8Iter2++)
    {
        /* Zero the LUT. */

        REG_WRITE32(QSPI_0_BASEADDR + QSPI_LUT_OFFSET_U32 + (uint32)((uint32)u8Iter2*4U), FLS_LUT_VALUE_U32);
    }
    /* Loop through all configured LUT sequences for this HW unit(maximum 16 LUT sequences for a HW unit). */
    for(u8Iter2 = 0U; u8Iter2 < (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiLUTSeqsCount; u8Iter2++)
    {
        /* Loop through all configured Instr.Operand pairs inside this LUT sequence(maximum 8 instr.operand pairs for a LUT sequence). */
        for(u8Iter3 = 0U; u8Iter3 < (*((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitLUT))[u8Iter2].u8InstrOperCount; u8Iter3++)
        {
            Fls_InstructionOperandType eInstrOper;

            eInstrOper = (*((*((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitLUT))[u8Iter2].paInstrOper))[u8Iter3];

            if (0U == (u8Iter3 % 2U))
            {
                /* Write the first 16bit Instr.Oper. pair in the 32 bit LUT register. */
                REG_RMW32(QSPI_0_BASEADDR + QSPI_LUT_OFFSET_U32 + ((uint32)u8Iter2 * 20U) + (((uint32)u8Iter3 / 2U) * 4U),
                           QSPI_LUT_INSTR0_OPER0_MASK_U32,
                           (uint32)((uint32)eInstrOper << QSPI_LUT_INSTR0_OPER0_OFFSET_U32)
                         );
            }
            else
            {
                /* Write the second 16bit Instr.Oper. pair in the 32 bit LUT register. */
                REG_RMW32(QSPI_0_BASEADDR + QSPI_LUT_OFFSET_U32 + ((uint32)u8Iter2 * 20U) + (((uint32)u8Iter3 / 2U) * 4U),
                           QSPI_LUT_INSTR1_OPER1_MASK_U32,
                           (uint32)((uint32)eInstrOper << QSPI_LUT_INSTR1_OPER1_OFFSET_U32));
            }
            /* Only aligned (LUT0, LUT5, LUT10,...) are valid starting sequences, so each LUT sequence write(from the 1st FOR loop, u8Iter2), should start aligned x5 in memory.
            The offset "(u8Iter2 * 20U)" selects the first aligned byte of a valid sequence: LUT0, LUT5, LUT10, in turn each being 32 bits(x5bytes) wide.
            The offset "((u8Iter3 / 2U) * 4U)" selects the LUT from inside the sequence: LUT0, LUT1, LUT2, LUT3 LUT4 (maximum 5 LUTs per sequence). */
        }
    }
    /* Lock the LUT. */
/*     REG_WRITE32(QSPI_0_BASEADDR + QSPI_LUTKEY_OFFSET_U32, QSPI_LUT_KEY_VALUE_U32);
    REG_RMW32(QSPI_0_BASEADDR + QSPI_LCKCR_OFFSET_U32, QSPI_LCKCR_MASK_U32, QSPI_LCKCR_LOCKED_U32);   */
    /* Enable QSPIx module after configuration */
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);

    /* If enabled, check the external memory device ID. */
    if (0UL != (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u16QspiDeviceId)
    {
        Fls_LLDReturnType eRetVal = FLASH_E_OK;

        Fls_Qspi_u32DeviceId = 0UL;
        eRetVal = Fls_Qspi_ReadDeviceId(u8Iter,(uint8 *)(&Fls_Qspi_u32DeviceId));

        /* Check if the read external memory device ID is the same as the configured one.*/
        if (((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u16QspiDeviceId != (uint16)Fls_Qspi_u32DeviceId) ||
            (FLASH_E_OK != eRetVal))
        {
           /* Mark the Init job as failed. */
            return FLASH_E_FAILED;
        }
    }
    /* DLLCRA/B being cleared to 0 before being configured again */
    REG_RMW32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRA_MASK_U32, 0x00);
    REG_RMW32(QSPI_0_BASEADDR + QSPI_DLLCRB_OFFSET_U32, QSPI_DLLCRB_MASK_U32, 0x00);
    /* DLL feature*/
    if((Fls_QspiDllMode)FLS_DLL_BYPASS_MODE == (Fls_QspiDllMode)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiDllMode))
    {
        /*Enable DLL Slave */

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_EN_MASK_U32);

        /*Enable DLL bypass mode*/

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLL_BYPASS_MASK_U32);

        /*Disable Auto update*/

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_AUTO_UPDATE_MASK_U32);

        /*set Fine offset delay elements*/

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLY_FINE_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraSlvDlyFine) << QSPI_DLLCRx_SLV_DLY_FINE_SHIFT_U32));

        /*set Delay elements in each delay tap*/

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLY_COARSE_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraSlvDlyCoarse) << QSPI_DLLCRx_SLV_DLY_COARSE_SHIFT_U32));

        /*set Frequency enable*/
        if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDllcraFreqEnable)
        {

            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
        }
        else
        {

            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
        }

        /*set slave update after slave delay chain configuration*/

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /*Waiting DLL Slave A lock status*/
        do
        {
            u32DllStatus = REG_READ32(QSPI_0_BASEADDR + QSPI_DLLSR_OFFSET_U32);
            if(0U != (u32DllStatus & (QSPI_DLLSR_DLLA_RANGE_ERR_U32 | QSPI_DLLSR_DLLA_FINE_UNDERFLOW_U32)))
            {
                /* Mark the Init job as failed. */
                return  FLASH_E_FAILED;

            }
            /* Avoid if Hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
        while(0U== (u32DllStatus & QSPI_DLLSR_SLVA_LOCK_U32));    /*Waiting DLL lock bit*/

        /*Clear slave update after slave delay chain configuration*/

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
    }
    else
    {
        if((Fls_QspiDllMode)FLS_DLL_AUTO_UPDATE_MODE == (Fls_QspiDllMode)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiDllMode))
        {
            /*Enable Auto update*/

            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_AUTO_UPDATE_MASK_U32);
        }
        else
        {
            /*Disable Auto update*/

            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_AUTO_UPDATE_MASK_U32);
        }
        /*Enable DLL Slave*/

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_EN_MASK_U32);

        /*Disable DLL bypass mode*/

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLL_BYPASS_MASK_U32);

        /*set DLL reference counter*/

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_REF_CNT_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraRefCounter) << QSPI_DLLCRx_REF_CNT_SHIFT_U32));

        /*set DLL resolution*/

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_RES_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraResolution) << QSPI_DLLCRx_RES_SHIFT_U32));

        /*set Fine offset delay elements*/

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_FINE_OFFSET_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraSlvFineOffset) << QSPI_DLLCRx_SLV_FINE_OFFSET_SHIFT_U32));

        /*set T/16 offset delay elements*/

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLY_OFFSET_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraSlvDlyOffset) << QSPI_DLLCRx_SLV_DLY_OFFSET_SHIFT_U32));

        /*set Frequency enable*/
        if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDllcraFreqEnable)
        {

            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
        }
        else
        {

            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
        }
        /*Enable DLL A*/

        if((Fls_QspiDllMode)FLS_DLL_MANUAL_UPDATE_MODE == (Fls_QspiDllMode)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiDllMode))
        {
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_EN_MASK_U32);
            /* Update timeout value */
            u32TimeoutValue = FLS_TIMEOUT_VALUE;
            /*Waiting DLLA lock status*/
            do
            {
                u32DllStatus = REG_READ32(QSPI_0_BASEADDR + QSPI_DLLSR_OFFSET_U32);

                if(0U != (u32DllStatus & (QSPI_DLLSR_DLLA_RANGE_ERR_U32 | QSPI_DLLSR_DLLA_FINE_UNDERFLOW_U32)))
                {
                    /* Mark the Init job as failed. */

                    return FLASH_E_FAILED;

                }

                    /* Avoid if Hardware stuck*/
                    u32TimeoutValue --;
                    if (0U == u32TimeoutValue)
                    {
                        /* Operation failed due to timeout */
                        return FLASH_E_TIMEOUT;
                    }
            }
            while(0U== (u32DllStatus & QSPI_DLLSR_DLLA_LOCK_U32));    /*Waiting DLL lock bit*/

            /*Update the slave delay chain*/

            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
        }
        else
        {
            /*Enable update the slave delay chain*/
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_EN_MASK_U32);
            /*Update the slave delay chain*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
        }
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /*Waiting DLL Slave lock status*/
        do
        {

            u32DllStatus = REG_READ32(QSPI_0_BASEADDR + QSPI_DLLSR_OFFSET_U32);

            if(0U != (u32DllStatus & (QSPI_DLLSR_DLLA_RANGE_ERR_U32 | QSPI_DLLSR_DLLA_FINE_UNDERFLOW_U32)))
            {
                /* Mark the Init job as failed. */

                return FLASH_E_FAILED;

            }
            /* Avoid if Hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
        while(0U == (u32DllStatus & QSPI_DLLSR_SLVA_LOCK_U32)); /*Waiting SlvA DLL lock bit*/

        /*Clear slave update after slave delay chain configuration*/

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
    }

  return FLASH_E_OK;
} /*end of Fls_Qspi_Init*/

/***********************************************************************************************************************/
/*
Fls_Qspi_EraseBlock(SectorAddress, SectorSize, TransferType)​

        u32StartAddr: Stat address in flash memory, starting for 0, the HW sector start address.​

        u32Length: Size of the external memory sector/block.​

        TransferType: Sync or Async processing.

        EraseModes : SPI, STR, DTR
*/
Fls_LLDReturnType Fls_Qspi_EraseBlock(uint32 u32StartAddr, uint32 u32Length, boolean TransferType, Fls_ConfigRegiterModesType EraseModes)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;
    uint8 u8LUTEraseId;
    uint32 u32TimeoutValue;
    Fls_LLDReturnType eCtrlIdle = FLASH_E_FAILED;
    Fls_LLDReturnType eExtMemIdle = FLASH_E_FAILED;
    (void)u32Length;

    /* In Async mode will call Fls_Qspi_EraseBlock function with many times */
    if ((boolean)TRUE == Fls_Qspi_u8StartHardwareOnce)
    {
        /*Store Addr of the External Fls sector start*/
        Fls_Qspi_u32MemoryAddress = QSPI_QSPI_0_AMBA_BASE_U32 + u32StartAddr;

        /* update time value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
        {
            /* Avoid if Busy bit stucks*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Operation failed due to timeout*/
                return FLASH_E_TIMEOUT;
            }
        }

        /* Enable the Write/Erase operation on the external memory. */
        if (FLASH_E_OK != Fls_Qspi_WriteEnable(Fls_Qspi_u32MemoryAddress, EraseModes))
        {
            /* Error, WriteEnable command has failed. */
           return FLASH_E_FAILED;
        }
        if (FLASH_SPI_MODE == EraseModes)
        {
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            u8LUTEraseId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTEraseSeq;
        }
        else if (FLASH_STR_OPI_MODE == EraseModes)
        {
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            u8LUTEraseId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTSectorEraseSOPISeq;
            Fls_QspiSetLUT(15,u8LUTEraseId);
        }
        else if (FLASH_DTR_OPI_MODE == EraseModes)
        {
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            u8LUTEraseId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTSectorEraseDOPISeq;
        }
        else
        {
            /* Wrong configuration */
            return FLASH_E_FAILED;
        }
        /* Set the start address of the IP erase transaction. */
        REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFAR_OFFSET_U32, Fls_Qspi_u32MemoryAddress);
        /* Clear the errors (w1c). */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);

        /* Start transaction */
        if ((FLASH_SPI_MODE == EraseModes)||(FLASH_DTR_OPI_MODE == EraseModes))
        {
         Fls_Qspi_LaunchLUTCommand(u8LUTEraseId, 0U);
        }
        else if (FLASH_STR_OPI_MODE == EraseModes) /*This Sequence Re-Write to LUTid 15*/
        {
         Fls_Qspi_LaunchLUTCommand(15, 0U);
        }

        /* update timeout again for asyn mode */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /* Do not setup the hardware in Asyn mode */
        Fls_Qspi_u8StartHardwareOnce = (boolean)FALSE;
    }
    if ((boolean) FALSE == TransferType) /* SYNC mode. */
    {
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /* Wait for transaction to finish in uC. */
        while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
        {
            /* Avoid if Busy bit stucks*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
        /* Check the error flags. */
        if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
        {
            /* Error, error flags were set during programming. */
            /* Clear the errors (w1c). */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
            /* Reset variable */
            Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
            return FLASH_E_FAILED;
        }
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /* Wait for transaction to finish in external flash memory. Poll the external memory BUSY bit.*/
        do
        {
          eRetVal = Fls_Qspi_CheckExtMemIsIdle(Fls_Qspi_u32MemoryAddress, EraseModes);
            /* Avoid if hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        } while(FLASH_E_PENDING == eRetVal);  /* FLASH_E_OK(ext. mem. idle), FLASH_E_PENDING(erase in progress) or FLASH_E_FAILED(erase or get status cmd. failed). */

        /* Check if erase was successful. */
        if (FLASH_E_OK == eRetVal)
        {
            /* Reset variable */
            Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
            /* Erasing is successful */
            return FLASH_E_OK;
        }
        else
        {
            /* Reset variable */
            Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
            /* Error, the job failed, either because the loop was exited on the timeout condition or the polling of the status failed. */
            return FLASH_E_FAILED;
        }
    }
    else /*Asynch Mode == TRUE*/
    {
        /* Store the pending status */
        eRetVal = FLASH_E_PENDING;
        /* Check if controller is busy(BUSY bit asserted). */
        eCtrlIdle = Fls_Qspi_CheckControllerIsIdle();
        if (FLASH_E_OK == eCtrlIdle)
        {
            if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
            {
                /* Error, error flags were set during erasing. */
                REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Error, error flags were set during erasing. */
                return FLASH_E_FAILED;
            }
            /* Get external memory status, only when the controller is idle. */
            eExtMemIdle = Fls_Qspi_CheckExtMemIsIdle(Fls_Qspi_u32MemoryAddress, EraseModes);
        }
        /* Check if the transaction is still pending in the uC and external memory. */
        if ((FLASH_E_OK == eCtrlIdle) &&     /* Poll internal BUSY bit. */
           (FLASH_E_OK == eExtMemIdle))      /* Poll the external memory BUSY bit. */
        {
            /* Checking error flags*/
            if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
            {
                /* Erase operation failed. */
                /* Clear the errors (w1c). */
                REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Error, error flags were set during erasing. */
                return FLASH_E_FAILED;
            }
            else
            {
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Erasing is successful */
                return FLASH_E_OK;
            }
        }
        else
        {
            /* Avoid if hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
    }

    return eRetVal;
}

/**
* @brief        Qspi Write enable
*
* @details      Schedule or launch the write enable command.
*
* @param[in]    u32StartAddr    - start address of the transaction, used to select the external chip-select channel.
* @param[out]   none
*
* @pre          QSPI_0_BASEADDR global variable is updated and contains the base address of the QSPI
*               IP unit register map, for which this sector is assigned to.
*
*
* @post         External memory is write enabled(for Sync/Async modes) or the WriteEnable command was sent to the memory(IRQ mode).
*
*
*/
static Fls_LLDReturnType Fls_Qspi_WriteEnable(uint32 u32StartAddr, Fls_ConfigRegiterModesType ReadConfigModes)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;
    uint8 u8LUTWriteEnId;
    uint32 u32TimeoutValue = FLS_TIMEOUT_VALUE;

   /* Check if controller is busy(BUSY bit asserted) and wait for transaction to finish in uC, if there is any ongoing AHB buffer prefetch read triggered by a previous verify operation. */
    while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
    {
        u32TimeoutValue --;
        /* Avoid if hardware stuck*/
        if (0U == u32TimeoutValue)
        {
            /* Operation failed due to timeout */
            return FLASH_E_TIMEOUT;
        }
    }

  /* Set the start address of the IP read transaction. */
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFAR_OFFSET_U32, u32StartAddr);

  /*Need to loop all 3 Mode to WREN, cause of current mode is un-predictable*/

    if (FLASH_SPI_MODE == ReadConfigModes)
    {
        /* Configure SDR mode. */
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
        /* Get LUT Write Enable sequence index. */
        u8LUTWriteEnId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTWriteEnSeq;
    }
    else if (FLASH_STR_OPI_MODE == ReadConfigModes)
    {
         /* Configure SDR mode. */
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
        /* Get LUT Write Enable sequence index. */
        u8LUTWriteEnId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTWriteStr_OPIEnSeq;
    }
    else if (FLASH_DTR_OPI_MODE == ReadConfigModes)
    {
        /* Configure read mode (SDR or DDR mode). */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
        /* Get LUT Write Enable sequence index. */
        u8LUTWriteEnId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTWriteDtr_OPIEnSeq;

        /*This WREN_DDR Sequence is Exceeded LUT, Write to LUTid 15*/
        Fls_QspiSetLUT(15U,u8LUTWriteEnId);
    }
    else
    {
        /* Wrong configuration */
        return FLASH_E_FAILED;
    }


    /* Clear the errors (w1c). */
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);

    /*WREN_SPI or WREN_SOPI is normal LUT
      note: After Lauch command in DTR_OPI mode, It has to recover LUTid sequence 6U  */
    if ((FLASH_SPI_MODE == ReadConfigModes)||(FLASH_STR_OPI_MODE == ReadConfigModes))
    {
        Fls_Qspi_LaunchLUTCommand(u8LUTWriteEnId, 0U);
    }
    else /* if (FLASH_DTR_OPI_MODE == ReadConfigModes)  WREN_DOPI is exceeding LUT, Launch Command on LUTid 15*/
    {
        Fls_Qspi_LaunchLUTCommand(15U, 0U);
    }

    /* Wait for transaction to finish in uC. */
     /* update time value */
    u32TimeoutValue = FLS_TIMEOUT_VALUE;
    while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
    {
        /* Avoid if Busy bit stucks*/
        u32TimeoutValue --;
        if (0U == u32TimeoutValue)
        {
            /* Operation failed due to timeout*/
            return FLASH_E_TIMEOUT;
        }
    }

    /* Check errors from QSPI_FR. */
    if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
    {
        /* Clear the errors (w1c). */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
        return FLASH_E_FAILED;
    }
    /* Update timeout value */
    u32TimeoutValue = FLS_TIMEOUT_VALUE;
    /* Wait for transaction to finish in external flash memory. Poll the external memory BUSY bit.*/
    do
    {
        eRetVal = Fls_Qspi_CheckExtMemIsIdle(u32StartAddr, ReadConfigModes);
        /* Avoid if hardware stuck*/
        u32TimeoutValue --;
        if (0U == u32TimeoutValue)
        {
            /* Operation failed due to timeout */
            return FLASH_E_TIMEOUT;
        }
    } while(FLASH_E_PENDING == eRetVal);  /* FLASH_E_OK(ext. mem. idle), FLASH_E_PENDING(erase in progress) or FLASH_E_FAILED(erase or get status cmd. failed). */

    if (FLASH_E_OK == eRetVal)
    {
        /* Check errors from QSPI_FR. */
        if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
        {
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
            eRetVal = FLASH_E_FAILED;
        }
    }
    else
    {
        /* Consider the job failed, because the loop was exited on the timeout condition. */
        eRetVal = FLASH_E_FAILED;
    }

    return eRetVal;
}
/*
    eRetVal     FLASH_E_OK          External memory is idle.
                FLASH_E_FAILED      Error during read of status register.
                FLASH_E_PENDING     Read of status register successful but external memory is busy.
*/
static Fls_LLDReturnType Fls_Qspi_CheckExtMemIsIdle(uint32 u32StartAddr, Fls_ConfigRegiterModesType ReadConfigModes)
{
    Fls_LLDReturnType eRetVal = FLASH_E_FAILED;
    boolean  bMemoryIsBusy = (boolean)TRUE;
    uint8 u8QspiUnitBusyBitVal = 0U;
    uint8 u8QspiUnitBusyBitPosOff = 0U;
    uint32 Fls_Qspi_u32StatusRegVal = 0U;

    /* Current sector is in Individual mode then using Address for IP command */
    /* Get the external memory status register. */
    if (FLASH_E_OK != Fls_Qspi_GetMemStatus(&Fls_Qspi_u32StatusRegVal, u32StartAddr, ReadConfigModes))
    {
        /* Error during read of status register.*/
        return FLASH_E_FAILED;
    }
     /* Clean all the bits from the read value of the status register, except the status bit. */
    Fls_Qspi_u32StatusRegVal = Fls_Qspi_u32StatusRegVal & (uint32)(1UL << (uint32)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiUnitBusyBitPosOffset));
    /* Check if the Busy bit from the status register has the value corresponding to the busy state of the memory.
       bMemoryIsBusy = (boolean)(Fls_Qspi_u32StatusRegVal == (u8QspiUnitBusyBitValue << u8QspiUnitBusyBitPosOffset)); */
    u8QspiUnitBusyBitVal = ((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiUnitBusyBitValue);
    u8QspiUnitBusyBitPosOff = ((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiUnitBusyBitPosOffset);
    if (Fls_Qspi_u32StatusRegVal == ((uint32)((uint32)u8QspiUnitBusyBitVal << (uint32)u8QspiUnitBusyBitPosOff)))
    {
        bMemoryIsBusy = (boolean)TRUE;
    }
    else
    {
        bMemoryIsBusy = (boolean)FALSE;
    }
    if ((boolean)TRUE == bMemoryIsBusy)
    {
        eRetVal = FLASH_E_PENDING;
    }
    else
    {
        /* The above memory is idle.
           (If this is an INDIVIDUAL sector, then only one external memory has to be interrogated
           and the entire status is considered OK, idle. If this is a PARALLEL sectors, then below we have to interrogate
           the second memory also.) */
        eRetVal = FLASH_E_OK;
    }

    return eRetVal;

}
/*
    eRetVal     FLASH_E_OK          Status register read successfully.
                FLASH_E_FAILED      Error, to many expected bytes, error during read transaction.
*/
Fls_LLDReturnType Fls_Qspi_GetMemStatus(uint32 *p32DataPtr,uint32 u32StartAddr, Fls_ConfigRegiterModesType ReadConfigModes)
{
    Fls_LLDReturnType   eRetVal = FLASH_E_OK;
    uint8  u8ExtRegWidth;
    uint32 u32Reg = 0;
    uint8  u8LUTGetStatusId;
    uint32 u32TimeoutValue = FLS_TIMEOUT_VALUE;

    /* Clear reception flags, counters, prior to triggering the IP command. */
    REG_BIT_SET32(QSPI_0_BASEADDR +  QSPI_MCR_OFFSET_U32, QSPI_MCR_CLR_RXF_U32);

    /* Clear the errors (w1c). */
    u32Reg = QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32;
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, u32Reg);

    /* Set the Watermark level. */
    REG_RMW32(QSPI_0_BASEADDR +  QSPI_RBCT_OFFSET_U32, QSPI_RBCT_WMRK_MASK_U32, QSPI_RBCT_WMRK_VALUE_U32);   /* Expect 1 word(4byte entries) */

    if (FLASH_SPI_MODE == ReadConfigModes)
    {
        /* Configure read mode (SDR or DDR mode). */
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
        /* Get the external memory register width,in bytes no., in order to determine the transfer length. */
        u8ExtRegWidth = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiUnitRegisterWidth;
        u8LUTGetStatusId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTGetStatusSeq;
    }
    else if (FLASH_STR_OPI_MODE == ReadConfigModes)
    {
        /* Configure read mode (SDR or DDR mode). */
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
        u8ExtRegWidth = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiUnitRegisterWidth;

        /*Get ExceedLUT ID in array to writing to LUTid 15*/
        u8LUTGetStatusId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTGetSatusSOPISeq;
        Fls_QspiSetLUT(15,u8LUTGetStatusId); /*Write LUT sequence number 16 to Register 75*/

    }
    else if (FLASH_DTR_OPI_MODE == ReadConfigModes)
    {
        /* Configure read mode (SDR or DDR mode). */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
        u8ExtRegWidth = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiUnitRegisterWidth;

        /*Get ExceedLUT ID in array to writing to LUTid 15*/
        u8LUTGetStatusId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTRGetStatusDOPISeq;
        Fls_QspiSetLUT(15,u8LUTGetStatusId); /*Write LUT sequence number 17 to LUT Sequence 15th*/
    }
    else
    {
        /* Wrong configuration */
        return FLASH_E_FAILED;
    }/*End to check which mode to READSTT SPI/SOPI/DOPI*/

    /* Check "u8ExtRegWidth" is no bigger than 4 bytes, otherwise data might get corrupted when updating the "u32ExtRegValue". */
    if (4U < u8ExtRegWidth)
    {
        /* Error, the register width is bigger than the variable in which it has to be stored. */
        return FLASH_E_FAILED;
    }
    /* Check if controller is busy(BUSY bit asserted). */
    if (FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())
    {
        /* Error, controller is not idle. */
        return FLASH_E_FAILED;
    }


    /* Set the start address of the IP read status transaction. */
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFAR_OFFSET_U32, u32StartAddr);

    /*If Read_Status_Register on STR/DTR_OPI ,Lauch command at LUT Sequence 15 */
    if((FLASH_STR_OPI_MODE == ReadConfigModes) || (FLASH_DTR_OPI_MODE == ReadConfigModes))
    {
        Fls_Qspi_LaunchLUTCommand(15, u8ExtRegWidth);
    }
    else if (FLASH_SPI_MODE == ReadConfigModes)
    {
        Fls_Qspi_LaunchLUTCommand(u8LUTGetStatusId, u8ExtRegWidth);
    }
    else
    {

    }

    /* Wait for transaction to finish. */
    while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
    {
        /* Avoid if Busy bit stucks*/
        u32TimeoutValue --;
        if (0U == u32TimeoutValue)
        {
            /* Operation failed due to timeout */
            return FLASH_E_TIMEOUT;
        }
    }

    /* Read received data from RX Buffer. Read "u8ExtRegWidth" bytes into the variable pointed to by "p32DataPtr". */
    eRetVal = Fls_Qspi_ReadRXBuffer(u8ExtRegWidth, (uint8 *)p32DataPtr, NULL_PTR);

    return eRetVal;

}
Fls_LLDReturnType Fls_Qspi_Program(uint32 u32StartAddr, uint8 *pSourceAddressPtr,uint32 u32Length, boolean TransferType, Fls_ConfigRegiterModesType WriteModes)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;
    uint8 u8LUTWriteId;
    uint32 u32SectProgSize = (*(Fls_pConfigPtr->paSectorProgSize))[Fls_u32JobSectorIt];   /* Sector Programming size configuration parameter. */
    uint32 u32TimeoutValue;
    Fls_LLDReturnType eCtrlIdle = FLASH_E_OK;
    Fls_LLDReturnType eExtMemIdle = FLASH_E_OK;

    /* cheking input */
    if ((u32StartAddr % 16U != 0U ) || (u32Length % 16U != 0U ) || (pSourceAddressPtr == NULL_PTR) || (u32Length == 0U ))
    {
        /* wrong input param*/
        return FLASH_E_FAILED;
    }
    if ((boolean)TRUE == Fls_Qspi_u8StartHardwareOnce)
    {
        if (FLASH_SPI_MODE == WriteModes)
        {
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            /* Get LUT Write sequence index. The configuration structure holds the index from the LUT configuration array(0,1,2,...) */
            u8LUTWriteId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTWriteSeq;
        }
        else if (FLASH_STR_OPI_MODE == WriteModes)
        {
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            u8LUTWriteId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTPageProgramSOPISeq;
            Fls_QspiSetLUT(6U,u8LUTWriteId);
        }
        else if (FLASH_DTR_OPI_MODE == WriteModes)
        {
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            u8LUTWriteId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTPageProgramDOPISeq;
        }
        else
        {
            /* Wrong configuration */
            return FLASH_E_FAILED;
        }
        /* Store the number of bytes to be written. If SYNC mode, all u32DataLength are written in this function iteration.
           If ASYNC mode, a maximum of TXBuffer size are started to be written in this function, the rest, up to u32DataLength
           are written in Fls_LLDMainFunction cyclic calls. */
        Fls_u32LLDRemainingDataToWrite = u32Length;
        /* Store the address of the first written location. */
        Fls_Qspi_u32MemoryAddress = QSPI_QSPI_0_AMBA_BASE_U32 + u32StartAddr;
        /* Store the address of the source buffer. */
        Fls_Qspi_u32BufferAddress = (uint32)pSourceAddressPtr;
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
        {
            /* Avoid if Busy bit stucks*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;

            }
        }
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        Fls_Qspi_u8StartHardwareOnce = FALSE;
    }/*end check Fls_Qspi_u8StartHardwareOnce*/

    if ((boolean)FALSE == TransferType) /* SYNC mode. */
    {
        do  /* Each loop transfers a maximum of QSPI_TXBUFFER_MAX_SIZE_BYTES_U32 bytes, until all bytes are transfered. */
        {
            uint32 u32MemAddr1 = 0UL;
            uint32 u32MemAddr2 = 0UL;
            uint32 u32BytesToWrite = 0U;  /* No. of bytes to be written in one external serial write transaction. */

            /* Check if the total number of bytes to be written exceeds the TXBuffer size. */
            if (Fls_u32LLDRemainingDataToWrite > QSPI_TXBUFFER_MAX_SIZE_BYTES_U32)  /* > 1024 bytes, equivalent to: u32WordsToRead > 256U (4byte words) */
            {
                /* More than the maximum size of TX Buffer has to sent, use only 1024bytes. */
                u32BytesToWrite = QSPI_TXBUFFER_MAX_SIZE_BYTES_U32;
            }
            else
            {
                u32BytesToWrite = Fls_u32LLDRemainingDataToWrite;
            }
            /* Check if the total no. of bytes to be written will exceed the external memory internal buffer.
               If the internal buffer boundary is exceeded, the actual memory writes could wrap-around in the memory. */
            u32MemAddr1 = Fls_Qspi_u32MemoryAddress/u32SectProgSize;
            u32MemAddr2 = ((Fls_Qspi_u32MemoryAddress+u32BytesToWrite)-1U)/u32SectProgSize;
            if (u32MemAddr1 != u32MemAddr2)
            {
                Fls_AddressType u32LineEndAddr = 0UL;   /* The last byte address of the current flash line. */

                /* This write transaction is supposed to write more than it fits in the current flash line, so split it, by writing only until the end of the line. */
                /* u32LineEndAddr = Fls_Qspi_u32MemoryAddress - (Fls_Qspi_u32MemoryAddress % u32SectProgSize) + (u32SectProgSize - 1U); Split into multiple statements in order to avoid MISRA error. */
                u32LineEndAddr = Fls_Qspi_u32MemoryAddress;
                u32LineEndAddr -= Fls_Qspi_u32MemoryAddress % u32SectProgSize;
                u32LineEndAddr += u32SectProgSize - 1U;
                u32BytesToWrite = (u32LineEndAddr - Fls_Qspi_u32MemoryAddress) + 1U;
            }
            /* Use the Normal or Hyperflash LUT sequence. */

            /* Clear TX flags, counters and load the specified number of bytes into TXBuffer. */
            if (FLASH_E_OK != Fls_Qspi_LoadTXBuffer(Fls_Qspi_u32BufferAddress, u32BytesToWrite))
            {
                Fls_Qspi_u8StartHardwareOnce = TRUE;
                /* Error, LoadTXBuffer command has failed. */
                return FLASH_E_FAILED;
            }
            /* Update the source address pointer with the amount loaded above into TX Buffer*/
            Fls_Qspi_u32BufferAddress += u32BytesToWrite;

            /* Enable the Write/Erase operation on the external memory. */
            if (FLASH_E_OK != Fls_Qspi_WriteEnable(Fls_Qspi_u32MemoryAddress, WriteModes))
            {
		     	Fls_Qspi_u8StartHardwareOnce = TRUE;
                /* Error, WriteEnable command has failed. */
                return FLASH_E_FAILED;

            }

            /* Set the start address of the IP write transaction. */
            REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFAR_OFFSET_U32, Fls_Qspi_u32MemoryAddress);

            /* Launch WRITE command. */
            if ((FLASH_SPI_MODE == WriteModes)||(FLASH_DTR_OPI_MODE == WriteModes))
            {
                Fls_Qspi_LaunchLUTCommand(u8LUTWriteId, u32BytesToWrite);
            }
            else if (FLASH_STR_OPI_MODE == WriteModes) /*This Sequence Re-Write to LUTid 6U*/
            {
                Fls_Qspi_LaunchLUTCommand(6U, u32BytesToWrite);
            }

            /* Update timeout value */
            u32TimeoutValue = FLS_TIMEOUT_VALUE;
            /* Wait for transaction to finish in uC. */
            while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
            {
                /* Avoid if Busy bit stucks*/
                u32TimeoutValue --;
                if (0U == u32TimeoutValue)
                {
			     	Fls_Qspi_u8StartHardwareOnce = TRUE;
                    /* Operation failed due to timeout */
                    return FLASH_E_TIMEOUT;
                }
            }
            /* Check the error flags. */
            if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_TBUF_U32 | QSPI_FR_ILLINE_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
            {
                /* Error, error flags were set during programming. */
                /* Clear the error flags (w1c). */
                REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_TBUF_U32 | QSPI_FR_ILLINE_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
                Fls_Qspi_u8StartHardwareOnce = TRUE;
				return FLASH_E_FAILED;
            }
            /* Update timeout value */
            u32TimeoutValue = FLS_TIMEOUT_VALUE;
            do
            {
                eRetVal = Fls_Qspi_CheckExtMemIsIdle(Fls_Qspi_u32MemoryAddress, WriteModes);
                /* Avoid if Busy bit stucks*/
                u32TimeoutValue --;
                if (0U == u32TimeoutValue)
                {
				    Fls_Qspi_u8StartHardwareOnce = TRUE;
                    /* Operation failed due to timeout */
                    return FLASH_E_TIMEOUT;
                }
            }while(FLASH_E_PENDING == eRetVal);  /* FLASH_E_OK(ext. mem. idle), FLASH_E_PENDING(write in progress) or FLASH_E_FAILED(write or get status cmd. failed). */

            /* Update variable */
            Fls_Qspi_u8StartHardwareOnce = TRUE;
            /* Check if programming was successful. */
            if (FLASH_E_FAILED == eRetVal)
            {
                /* Error, the job failed, either because the loop was exited on the timeout condition or the polling of the status failed. */
                return FLASH_E_FAILED;
            }
            /* Update external write address. */
            Fls_Qspi_u32MemoryAddress += u32BytesToWrite;
            /* "Fls_Qspi_u32BufferAddress" is updated above. */
            /* Update the remaining number of bytes to be written. */
            Fls_u32LLDRemainingDataToWrite -= u32BytesToWrite;

        }while(Fls_u32LLDRemainingDataToWrite > 0U);  /* Loop until all bytes are programmed. */
    }
    else /* Asynch Mode. */
    {
        eRetVal = FLASH_E_PENDING;
        /* Check if controller is busy(BUSY bit asserted). */
        eCtrlIdle = Fls_Qspi_CheckControllerIsIdle();

        if (FLASH_E_OK == eCtrlIdle)
        {
            if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
            {
                /* Error, error flags were set during erasing. */
                REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Error, error flags were set during erasing. */
                return FLASH_E_FAILED;
            }
            /* Get external memory status, only when the controller is idle. */
            eExtMemIdle = Fls_Qspi_CheckExtMemIsIdle(Fls_Qspi_u32MemoryAddress, WriteModes);
        }

        /* Check if the transaction is still pending in the uC and external memory. */
        if ((FLASH_E_OK == eCtrlIdle) &&     /* Poll internal BUSY bit. */
           (FLASH_E_OK == eExtMemIdle))      /* Poll the external memory BUSY bit. */
        {
            /* Checking error flags*/
            if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
            {
                /* Erase operation failed. */
                /* Clear the errors (w1c). */
                REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Error, error flags were set during erasing. */
                return FLASH_E_FAILED;
            }
            else
            {
                volatile uint32 u32MemAddr1 = 0UL;
                volatile uint32 u32MemAddr2 = 0UL;
                volatile uint32 u32BytesToWrite = 0U;  /* Number of bytes to be written in this function iteration, up to a max of TXBuffer size. */

                if (Fls_u32LLDRemainingDataToWrite == 0U)
                {
                    /* Reset variable */
                    Fls_Qspi_u8StartHardwareOnce = TRUE;
                    /* job is done */
                    eRetVal = FLASH_E_OK;
                }
                else
                {
                    /* Check if the total number of bytes to be written exceeds the TXBuffer size. */
                    if (Fls_u32LLDRemainingDataToWrite > QSPI_TXBUFFER_MAX_SIZE_BYTES_U32)   /* > 1024 bytes, equivalent to: u32WordsToRead > 256U (4byte words) */
                    {
                        /* More than the maximum size of TX Buffer has to sent, use only 1024bytes. */
                        u32BytesToWrite = QSPI_TXBUFFER_MAX_SIZE_BYTES_U32;
                    }
                    else
                    {
                        u32BytesToWrite = Fls_u32LLDRemainingDataToWrite;
                    }

                    /* Check if the total no. of bytes to be written will exceed the external memory internal buffer.
                       If the internal buffer boundary is exceeded, the actual memory writes could wrap-around in the memory. */
                    u32MemAddr1 = Fls_Qspi_u32MemoryAddress/u32SectProgSize;
                    u32MemAddr2 = ((Fls_Qspi_u32MemoryAddress + u32BytesToWrite) - 1U)/u32SectProgSize;
                    if (u32MemAddr1 != u32MemAddr2)
                    {
                        uint32 u32LineEndAddr = 0UL;   /* The last byte address of the current flash line. */

                        /* This write transaction is supposed to write more than it fits in the current flash line, so split it, by writing only until the end of the line. */
                        /*u32LineEndAddr = Fls_Qspi_u32MemoryAddress - (Fls_Qspi_u32MemoryAddress % u32SectProgSize) + (u32SectProgSize - 1U);Split into multiple statements in order to avoid MISRA error. */
                        u32LineEndAddr = Fls_Qspi_u32MemoryAddress;
                        u32LineEndAddr -= Fls_Qspi_u32MemoryAddress % u32SectProgSize;
                        u32LineEndAddr += u32SectProgSize - 1U;
                        u32BytesToWrite = (u32LineEndAddr - Fls_Qspi_u32MemoryAddress) + 1U;
                    }
                    /* Use the Normal or Hyperflash LUT sequence. */
                    /* Clear TX flags, counters and load the specified number of bytes into TXBuffer. */
                    if (FLASH_E_OK != Fls_Qspi_LoadTXBuffer(Fls_Qspi_u32BufferAddress, u32BytesToWrite))
                    {
                        Fls_Qspi_u8StartHardwareOnce = TRUE;
                        /* Error, LoadTXBuffer command has failed. */
                        return FLASH_E_FAILED;
                    }
                    /* Update the source address pointer with the amount loaded above into TX Buffer*/
                    Fls_Qspi_u32BufferAddress += u32BytesToWrite;

                    /* Enable the Write/Erase operation on the external memory. */
                    if (FLASH_E_OK != Fls_Qspi_WriteEnable(Fls_Qspi_u32MemoryAddress, WriteModes))
                    {
                        Fls_Qspi_u8StartHardwareOnce = TRUE;
                        /* Error, WriteEnable command has failed. */
                        return FLASH_E_FAILED;
                    }

                    /* Set the start address of the IP write transaction. */
                    REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFAR_OFFSET_U32, Fls_Qspi_u32MemoryAddress);

                    /* Launch WRITE command. */
                         /* Launch WRITE command. */
                    if ((FLASH_SPI_MODE == WriteModes)||(FLASH_DTR_OPI_MODE == WriteModes))
                    {
                        Fls_Qspi_LaunchLUTCommand(u8LUTWriteId, u32BytesToWrite);
                    }
                    else if (FLASH_STR_OPI_MODE == WriteModes) /*This Sequence Re-Write to LUTid 15*/
                    {
                        Fls_Qspi_LaunchLUTCommand(6U, u32BytesToWrite);
                    }

                   /* Update external write address. */
                    Fls_Qspi_u32MemoryAddress += u32BytesToWrite;
                    /* "Fls_Qspi_u32BufferAddress" is updated above, right after loading it into the TX Buffer. */
                    /* Update the remaining number of bytes to be written. */
                    Fls_u32LLDRemainingDataToWrite -= u32BytesToWrite;
                    /* Update timeout value */
                    u32TimeoutValue = FLS_TIMEOUT_VALUE;
                }
            }
        }
        else
        {
            /* Avoid if hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
    }

    return eRetVal;
}
/**
* @brief          Load the TX Buffer with data to be written.
*
*
* @param[in]      u32SourceAddr     Address in the application buffer holding the data to be written.
* @param[in]      u32BytesToWrite    Number of bytes to be written. Range [1:128] bytes.
* @param[out]     none
*
* @return         none
*
* @pre            Minimum number of bytes to be written using the TX Buffer is 16 bytes.
*
*/
static Fls_LLDReturnType Fls_Qspi_LoadTXBuffer
(
    Fls_AddressType u32SourceAddr,
    uint32 u32BytesToWrite
)
{
    uint8 u8Iter = 0U;
    uint32 u32TimeoutValue;

    /* Clear TX counters. */
    REG_BIT_SET32(QSPI_0_BASEADDR +  QSPI_MCR_OFFSET_U32, QSPI_MCR_CLR_TXF_U32);

    /* update time value */
    u32TimeoutValue = FLS_TIMEOUT_VALUE;
    /*Waiting for TX buffer is ready*/
    while(0U != ((REG_READ32(QSPI_0_BASEADDR +  QSPI_MCR_OFFSET_U32)) & QSPI_MCR_CLR_TXF_U32))  /* Poll TXF flag. */
    {
        /* Avoid if Busy bit stucks*/
        u32TimeoutValue --;
        if (0U == u32TimeoutValue)
        {
            /* Operation failed due to timeout*/
            return FLASH_E_TIMEOUT;
        }
    }

    /* Load the TX Buffer.*/
    for(u8Iter=0U; u8Iter < (u32BytesToWrite / 4U); u8Iter++)    /* Write complete words - 32bits transfers, first. */
    {
        /* Write TX circular buffer 32bit entry. */
        REG_WRITE32(QSPI_0_BASEADDR + QSPI_TBDR_OFFSET_U32, *((volatile uint32 *)u32SourceAddr)); /* Write 4 bytes. */
        u32SourceAddr += 4U;  /* 4 byte increment*/
    }
    /* Check if in-complete byte entries exist. */
    if (0U !=  (u32BytesToWrite % 4U))
    {
        uint32 u32TxIncompleteWord = 0UL;

        /* Loop through remaining bytes. */
        for(u8Iter=0U; u8Iter < (u32BytesToWrite % 4U); u8Iter++)
        {
            uint8 u8TmpData = 0U;

            u8TmpData = (*((volatile uint8 *)u32SourceAddr));
            u32TxIncompleteWord = u32TxIncompleteWord | (uint32)((uint32)u8TmpData << ((uint32)u8Iter*8UL)); /* Write 1 byte. */
            u32SourceAddr += 1U;    /* 1 byte increment. */
        }
        /* Write TX circular buffer incomplete last entry. */
        REG_WRITE32(QSPI_0_BASEADDR + QSPI_TBDR_OFFSET_U32, u32TxIncompleteWord);
    }

    return FLASH_E_OK;
}
Fls_LLDReturnType Fls_Qspi_Read(uint32 u32StartAddr, uint8 *pTargetAddressPtr,uint32 u32Length, boolean TransferType, Fls_ConfigRegiterModesType ReadModes)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;
    uint8 u8LUTReadId;
    uint8 *p8DataCmpPtr = NULL_PTR;
    uint32 u32TimeoutValue;

    /* Calculating actual address of external flash*/
    u32StartAddr = QSPI_QSPI_0_AMBA_BASE_U32 + u32StartAddr;
    /* In Async mode will call Fls_Qspi_Read function with many times */
    if ((boolean)TRUE == Fls_Qspi_u8StartHardwareOnce)
    {
        /* update time value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
        {
            /* Avoid if Busy bit stucks*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Operation failed due to timeout*/
                return FLASH_E_TIMEOUT;
            }
        }
        /* Use the Normal or Hyperflash LUT sequence. */
        if (FLASH_SPI_MODE == ReadModes)
        {
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            /* Get LUT Read sequence index. The configuration structure holds the index from the LUT configuration array(0,1,2,...) */
            u8LUTReadId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTReadSeq;
        }
        else if (FLASH_STR_OPI_MODE == ReadModes)
        {
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            u8LUTReadId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTOctaReadSOPISeq;
            /*OCtaReadSOPI is exceeding LUT*/
            Fls_QspiSetLUT(6U, u8LUTReadId);
        }
        else if (FLASH_DTR_OPI_MODE == ReadModes)
        {
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            u8LUTReadId = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTOctaReadDOPISeq;
        }
        else
        {
            /* Wrong configuration */
            return FLASH_E_FAILED;
        }
        /* Provide sequence LUT ID into the buffer configuration register (QSPI_BFGENCR[SEQID]). */
        if ((FLASH_SPI_MODE == ReadModes) || (FLASH_DTR_OPI_MODE == ReadModes))
        {
            REG_WRITE32(QSPI_0_BASEADDR + QSPI_BFGENCR_OFFSET_U32, (uint32) u8LUTReadId << QSPI_BFGENCR_SEQID_SHIFT_U32 | (uint32)0U << QSPI_BFGENCR_PAR_EN_SHIFT_U32);
        }
        else if (FLASH_STR_OPI_MODE == ReadModes) /*This Sequence Re-Write to LUTid 15*/
        {
            REG_WRITE32(QSPI_0_BASEADDR + QSPI_BFGENCR_OFFSET_U32, (uint32)6U << QSPI_BFGENCR_SEQID_SHIFT_U32 | (uint32)0U << QSPI_BFGENCR_PAR_EN_SHIFT_U32);
        }
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /* Do not setup the hardware in Asyn mode */
        Fls_Qspi_u8StartHardwareOnce = (boolean)FALSE;
    }
    if ((boolean) FALSE == TransferType) /* SYNC mode. */
    {
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /* Wait for transaction to finish. */
        while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
        {
            /* Avoid if Busy bit stucks*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /* Wait for transaction to finish in external flash memory. Poll the external memory BUSY bit.*/
        do
        {
          eRetVal = Fls_Qspi_CheckExtMemIsIdle(u32StartAddr, ReadModes);
            /* Avoid if hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        } while(FLASH_E_PENDING == eRetVal);  /* FLASH_E_OK(ext. mem. idle), FLASH_E_PENDING(erase in progress) or FLASH_E_FAILED(erase or get status cmd. failed). */
    }
    else /* ASYNC mode. */
    {
        /* Store the pending status */
        eRetVal = FLASH_E_PENDING;
         /* Check if controller is busy(BUSY bit asserted). */
        if (FLASH_E_OK == Fls_Qspi_CheckControllerIsIdle())
        {
            /* Get external memory status, only when the controller is idle. */
            if (FLASH_E_OK == Fls_Qspi_CheckExtMemIsIdle(u32StartAddr, ReadModes))
            {
                /* The job is successful */
                eRetVal = FLASH_E_OK;
            }
        }
        else
        {
            /* Avoid if hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Reset variable */
                Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
    }
    if (FLASH_E_OK == eRetVal)
    {
        /* Reset variable */
        Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
        /* Invalidate the AHB buffers. If the content of the flash is changed by write/erase operations,
        the content of the AHB buffers needs to be invalidated. According to spec, both the AHB and Serial
        flash domain have to be reset at the same time. */
        Fls_Qspi_InvalidateAhbBuffers();
        /* Clear the error flags (w1c) before reading. */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_ILLINE_U32 | QSPI_FR_AITEF_MASK_U32 | QSPI_FR_AIBSEF_MASK_U32 | QSPI_FR_ABOF_MASK_U32);
        do
        {
            /* Read aligned word entries if they exist. */
            if ((0U == (u32StartAddr % 4U)) && (0U == ((uint32) pTargetAddressPtr % 4U)) && (4U <= u32Length))  /* An aligned entry(32bits, 4 bytes) and at least 4bytes have to be read. */
            {
                /* Check what operation is intended: read, compare, blank check or write verify. */
                if (NULL_PTR != pTargetAddressPtr)
                {
                    /* Read operation type. */
                    *((volatile uint32 *) pTargetAddressPtr) = *((volatile uint32 *) u32StartAddr);
                    pTargetAddressPtr += 4U;    /* Increment 4 bytes. */
                }
                else /* No read operation intended, only a compare type operation. */
                {
                    if (NULL_PTR != p8DataCmpPtr)
                    {
                        uint32 u32ApplData = 0UL;
                        uint32 u32MemData = 0UL;

                        u32ApplData = *((volatile const uint32 *) p8DataCmpPtr);
                        u32MemData = *((volatile uint32 *) u32StartAddr);

                        /* Compare or Write Verify operation type). */
                        if (u32ApplData != u32MemData)
                        {
                            /* Error, data read does not match the provided compare buffer.*/
                            return FLASH_E_BLOCK_INCONSISTENT;
                        }
                        p8DataCmpPtr += 4U;    /* Increment 4 bytes. */
                    }
                    else /* Both "pTargetAddressPtr" and "p8DataCmpPtr" are null, so a blank check operation type is intended. */
                    {
                        /* Blank Check operation type. */
                        if (FLS_ERASED_VALUE != *((volatile uint32 *)u32StartAddr))
                        {
                            /* Error, data read does not match the provided compare buffer.*/
                            return FLASH_E_BLOCK_INCONSISTENT;
                        }
                    }
                }
                /* Update the counters, the address in memory from where data is read and the total number of bytes to be read. */
                u32StartAddr += 4U;
                u32Length -= 4U;
            }
            else /* if ((0U != (u32StartAddr % 4U)) || (4U > u32Length)), read unaligned or byte entries. */
            {
                /* Check what operation is intended: read, compare, blank check or write verify. */
                if (NULL_PTR != pTargetAddressPtr)
                {
                    /* Read operation type. */
                     *pTargetAddressPtr = *((volatile uint8 *)u32StartAddr);
                    pTargetAddressPtr += 1U;    /* Increment 1 bytes. */
                }
                else /* No read operation intended, only a compare type operation. */
                {
                    if (NULL_PTR != p8DataCmpPtr)
                    {
                        /* Compare or Write Verify operation type). */
                        if (*p8DataCmpPtr != *((volatile uint8 *) u32StartAddr))
                        {
                            /* Error, data read does not match the provided compare buffer.*/
                            return FLASH_E_BLOCK_INCONSISTENT;
                        }
                        p8DataCmpPtr += 1U; /* Increment 1 byte. */
                    }
                    else /* Both "pTargetAddressPtr" and "p8DataCmpPtr" are null, so a blank check operation type is intended. */
                    {
                        /* Blank Check operation type. */
                        if ((uint8)FLS_ERASED_VALUE != *((volatile uint8 *) u32StartAddr))
                        {
                            /* Error, data read does not match the provided compare buffer.*/
                            return FLASH_E_BLOCK_INCONSISTENT;
                        }
                    }
                }
                /* Update the counters, the address in memory from where data is read and the total number of bytes to be read. */
                u32StartAddr += 1U;
                u32Length -= 1U;
            }
        } while(u32Length > 0U);

        /* Check errors from QSPI_FR. */
        if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_ILLINE_U32 | QSPI_FR_AITEF_MASK_U32 | QSPI_FR_AIBSEF_MASK_U32 | QSPI_FR_ABOF_MASK_U32))
        {
            /* Clear the error flags (w1c). */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_ILLINE_U32 | QSPI_FR_AITEF_MASK_U32 | QSPI_FR_AIBSEF_MASK_U32 | QSPI_FR_ABOF_MASK_U32);
            eRetVal = FLASH_E_FAILED;
        }
        else
        {
            /* Read is successful */
            eRetVal = FLASH_E_OK;
        }
    }
    else if (FLASH_E_FAILED == eRetVal)
    {
        /* Reset variable */
        Fls_Qspi_u8StartHardwareOnce = (boolean)TRUE;
        /* work is not successful*/
        eRetVal = FLASH_E_FAILED;
    }
    else
    {
        /* job is still pending */
    }

    return eRetVal;
}
static void Fls_Qspi_InvalidateAhbBuffers(void)
{
    /* Enable QSPIx module (MCR[MDIS] = 0) before asserting the reset bits. */
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);

    /* Software reset AHB domain and Serial Flash domain at the same time. */
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_SWRSTHD_U32 | QSPI_MCR_SWRSTSD_U32);

    /* Disable QSPIx module (MCR[MDIS] = 1) before de-asserting the reset bits. */
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);

    /* De-asset Software reset AHB domain and Serial Flash domain bits. */
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_SWRSTHD_U32 | QSPI_MCR_SWRSTSD_U32);

    /* Re-enable QSPIx module (MCR[MDIS] = 0) after reset. */
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
}
/**
    u32StartAddr : Start address
    eSwitchToMode : switching the modes
    FLASH_SPI_MODE = 0,             mode 00= SPI
    FLASH_STR_OPI_MODE,             mode 01= STR OPI enable
    FLASH_DTR_OPI_MODE              mode 10= DTR OPI enable
*/
Fls_LLDReturnType Fls_WriteRegiter(uint32 u32StartAddr, Fls_ConfigRegiterModesType eSwitchToMode)
{
    Fls_LLDReturnType eRetVal = FLASH_E_OK;
    Fls_ConfigRegiterModesType volatile eCurrentMode = FLS_NONE_MODE;

    eRetVal = Fls_WriteConfigRegister2(u32StartAddr, eSwitchToMode );

    /* Get status to make sure that write is successful */
    eCurrentMode = Fls_ReadConfigRegister2(u32StartAddr);
    if (eCurrentMode == eSwitchToMode)
    {
        eRetVal = FLASH_E_OK;
    }
    else
    {
        eRetVal = FLASH_E_FAILED;
    }

    return eRetVal;
}

static Fls_LLDReturnType Fls_WriteConfigRegister2(uint32 u32StartAddr, Fls_ConfigRegiterModesType ReadConfigModes)
{
    volatile uint8 u8LUTWriteConfigModes;
    Fls_LLDReturnType eRetVal = FLASH_E_OK;
    uint32 u32TimeoutValue;
    uint8 u8ModeReadConfigRegiter;
    uint32 u32SourceAddr;
    uint32 u32DllStatus;

    /* Error for configuration, */
    if (ReadConfigModes == FLS_NONE_MODE)
    {
        return FLASH_E_FAILED;
    }

    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_FINE_OFFSET_MASK_U32 & ((0U) << QSPI_DLLCRx_SLV_FINE_OFFSET_SHIFT_U32));
    /*set T/16 offset delay elements*/
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLY_OFFSET_MASK_U32 & ((0U) << QSPI_DLLCRx_SLV_DLY_OFFSET_SHIFT_U32));
    /* DLL enable */
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_EN_MASK_U32);
    /* Using ByPass mode to switch modes*/

    /*Enable DLL Slave */
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_EN_MASK_U32);
    /*Enable DLL bypass mode*/
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLL_BYPASS_MASK_U32);
    /*Disable Auto update*/
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_AUTO_UPDATE_MASK_U32);
    /*set Fine offset delay elements*/
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLY_FINE_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[0U].u8QspiDllCraSlvDlyFine) << QSPI_DLLCRx_SLV_DLY_FINE_SHIFT_U32));
    /*set Delay elements in each delay tap*/
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLY_COARSE_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[0U].u8QspiDllCraSlvDlyCoarse) << QSPI_DLLCRx_SLV_DLY_COARSE_SHIFT_U32));
    /*set Frequency enable*/
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[0U].bQspiDllcraFreqEnable)
    {

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
    }
    else
    {

        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
    }
    /*set slave update after slave delay chain configuration*/
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
    /* Update timeout value */
    u32TimeoutValue = FLS_TIMEOUT_VALUE;
    /*Waiting DLL Slave A lock status*/
    do
    {
        u32DllStatus = REG_READ32(QSPI_0_BASEADDR + QSPI_DLLSR_OFFSET_U32);
        if(0U != (u32DllStatus & (QSPI_DLLSR_DLLA_RANGE_ERR_U32 | QSPI_DLLSR_DLLA_FINE_UNDERFLOW_U32)))
        {
            /* Mark the Init job as failed. */
            return  FLASH_E_FAILED;

        }
        /* Avoid if Hardware stuck*/
        u32TimeoutValue --;
        if (0U == u32TimeoutValue)
        {
            /* Operation failed due to timeout */
            return FLASH_E_TIMEOUT;
        }
    }
    while(0U== (u32DllStatus & QSPI_DLLSR_SLVA_LOCK_U32));    /*Waiting DLL lock bit*/
    /*Clear slave update after slave delay chain configuration*/
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);

    /* Move all to FLASH_SPI_MODE mode then switch to a mode which wants*/
    for (u8ModeReadConfigRegiter = 0U; u8ModeReadConfigRegiter < Fls_READ_CONFIG_MODE_U8 + 1U; u8ModeReadConfigRegiter ++)
    {
        if (0U == u8ModeReadConfigRegiter)
        {
            /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            /* Configure TDH (data in hold time, for data sent to flash). */
            REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TDH_MASK_U32,
                   (uint32)(0U << QSPI_FLSHCR_TDH_SHIFT_U32));
            /* Disable DQS. */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
            /* CK2 DDR center align read strobe for Flash A.*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
            /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
            REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32)FLS_INTERNAL_DQS_A << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);
            /* Enable QSPIx module after configuration */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            u8LUTWriteConfigModes = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTWriteConfigSpiModeSeq;
            u32SourceAddr = 0U;
        }
        else if (1U == u8ModeReadConfigRegiter)
        {
            /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            /* Configure TDH (data in hold time, for data sent to flash). */
            REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TDH_MASK_U32,
                   (uint32)(0U << QSPI_FLSHCR_TDH_SHIFT_U32));
            /* Disable DQS. */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
            /* CK2 DDR center align read strobe for Flash A.*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
            /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
            REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32)FLS_INTERNAL_DQS_A << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);
            /* Enable QSPIx module after configuration */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            u8LUTWriteConfigModes = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTWriteConfigStrModeSeq;
            u32SourceAddr = 0U;
        }
        else if (2U == u8ModeReadConfigRegiter)
        {
            /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            /* Configure TDH (data in hold time, for data sent to flash). */
            REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TDH_MASK_U32,
                   (uint32)(1U << QSPI_FLSHCR_TDH_SHIFT_U32));
            /* Enable DQS. */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
            /* CK2 DDR center align read strobe for Flash A.*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
            /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
            REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32)FLS_INTERNAL_DQS_A << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);
            /* Enable QSPIx module after configuration */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            u8LUTWriteConfigModes = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTWriteConfigDtrModeSeq;
            Fls_QspiSetLUT(6U, u8LUTWriteConfigModes);
            u32SourceAddr = 0U;
        }
        else if (3U == u8ModeReadConfigRegiter)
        {
            if (FLASH_SPI_MODE == ReadConfigModes )
            {
                return FLASH_E_OK;
            }
            /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            /* Configure TDH (data in hold time, for data sent to flash). */
            REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TDH_MASK_U32,
                   (uint32)(0U << QSPI_FLSHCR_TDH_SHIFT_U32));
            /* Disable DQS. */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
            /* CK2 DDR center align read strobe for Flash A.*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
            /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
            REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32)FLS_INTERNAL_DQS_A << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);
            /* Enable QSPIx module after configuration */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            u8LUTWriteConfigModes = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTWriteConfigSpiModeSeq;
            u32SourceAddr = (uint32)ReadConfigModes;
        }
        else
        {
            return FLASH_E_FAILED;
        }
        /* Clear the RX/TX Buffer and reception flags, counters. */
        REG_BIT_SET32(QSPI_0_BASEADDR +  QSPI_MCR_OFFSET_U32, QSPI_MCR_CLR_RXF_U32);
        REG_BIT_SET32(QSPI_0_BASEADDR +  QSPI_MCR_OFFSET_U32, QSPI_MCR_CLR_TXF_U32);
        /* Clear the error flags (w1c). */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_ILLINE_U32 | QSPI_FR_AITEF_MASK_U32 | QSPI_FR_AIBSEF_MASK_U32 | QSPI_FR_ABOF_MASK_U32);
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_RBDF_U32 | QSPI_FR_IUEF_MASK_U32);
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_TBFF_U32 | QSPI_FR_TBUF_U32 | QSPI_FR_TFF_MASK_U32);
        /* Set the SFAR Address */
        REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFAR_OFFSET_U32, u32StartAddr);

        if (FLASH_E_OK != Fls_Qspi_LoadTXBuffer((Fls_AddressType)&u32SourceAddr, FLS_SIZE_1BYTE))
        {
            /* Error, LoadTXBuffer command has failed. */
            return FLASH_E_FAILED;
        }
        if (3U == u8ModeReadConfigRegiter)
        {
            /* Enable the Write/Erase operation on the external memory. */
            if (FLASH_E_OK != Fls_Qspi_WriteEnable(u32StartAddr, (Fls_ConfigRegiterModesType)FLASH_SPI_MODE))
            {
                /* Error, WriteEnable command has failed. */
                return FLASH_E_FAILED;
            }
        }
        else
        {
             /* Enable the Write/Erase operation on the external memory. */
            if (FLASH_E_OK != Fls_Qspi_WriteEnable(u32StartAddr, (Fls_ConfigRegiterModesType)u8ModeReadConfigRegiter))
            {
                /* Error, WriteEnable command has failed. */
                return FLASH_E_FAILED;
            }
        }
        /* Launch WRITE command. */
        Fls_Qspi_LaunchLUTCommand(u8LUTWriteConfigModes, FLS_SIZE_1BYTE);
        /* Update timeout value*/
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /* Wait for transaction to finish. */
        while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
        {
            /* Avoid if Hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
        /* Check errors from QSPI_FR. */
        if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
        {
            /* Clear the errors (w1c). */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
            return FLASH_E_FAILED;
        }
    }

        return eRetVal;
}
/**
    u32StartAddr : Start address
    eSwitchToMode : switching the modes
    FLASH_SPI_MODE = 0,             mode 00= SPI
    FLASH_STR_OPI_MODE,             mode 01= STR OPI enable
    FLASH_DTR_OPI_MODE              mode 10= DTR OPI enable
*/
static Fls_ConfigRegiterModesType Fls_ReadConfigRegister2(uint32 u32StartAddr)
{
    volatile uint8 u8LUTReadConfigModes;
    Fls_LLDReturnType eRetVal = FLASH_E_OK;
    Fls_ConfigRegiterModesType eCurrentMode = FLS_NONE_MODE;
    uint32 u32TimeoutValue;
    uint8 u8ModeReadConfigRegiter;
    uint8 aReadConfigRegiter[Fls_READ_CONFIG_MODE_U8] = {0};

    /* Reading configuration register uses all modes*/
    for (u8ModeReadConfigRegiter = 0; u8ModeReadConfigRegiter < Fls_READ_CONFIG_MODE_U8; u8ModeReadConfigRegiter ++)
    {
        /* Start to switch modes*/
        if (0U == u8ModeReadConfigRegiter)
        {
            /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            /* Configure TDH (data in hold time, for data sent to flash). */
            REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TDH_MASK_U32,
                   (uint32)(0U << QSPI_FLSHCR_TDH_SHIFT_U32));
            /* Disable DQS. */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
            /* CK2 DDR center align read strobe for Flash A.*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
            /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
            REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32)FLS_INTERNAL_DQS_A << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);
            /* Enable QSPIx module after configuration */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            u8LUTReadConfigModes = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTReadConfigSpiModeSeq;
        }
        else if (1U == u8ModeReadConfigRegiter)
        {
            /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            u8LUTReadConfigModes = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTReadConfigStrModeSeq;
            /*This WREN_DDR Sequence is Exceeded LUT, Write to LUTid 15*/
            Fls_QspiSetLUT(15U,u8LUTReadConfigModes);
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            /* Configure TDH (data in hold time, for data sent to flash). */
            REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TDH_MASK_U32,
                   (uint32)(0U << QSPI_FLSHCR_TDH_SHIFT_U32));
            /* Disable DQS. */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
            /* CK2 DDR center align read strobe for Flash A.*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
            /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
            REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32)FLS_INTERNAL_DQS_A << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);
            /* Enable QSPIx module after configuration */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
        }
        else /* (2U == ReadConfigModes) */
        {
            /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
            u8LUTReadConfigModes = (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[Fls_Qspi_u8HwUnitCfgIndex].u8QspiLUTReadConfigDtrModeSeq;
            /* Configure read mode (SDR or DDR mode). */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DDR_EN_U32);
            /* Configure TDH (data in hold time, for data sent to flash). */
            REG_RMW32(QSPI_0_BASEADDR + QSPI_FLSHCR_OFFSET_U32, QSPI_FLSHCR_TDH_MASK_U32,
                   (uint32)(1U << QSPI_FLSHCR_TDH_SHIFT_U32));
            /* Enable DQS. */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
            /* CK2 DDR center align read strobe for Flash A.*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
            /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
            REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32)FLS_INTERNAL_DQS_A << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);
            /* Enable QSPIx module after configuration */
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
        }
        /* Clear the RX/TX Buffer and reception flags, counters. */
        REG_BIT_SET32(QSPI_0_BASEADDR +  QSPI_MCR_OFFSET_U32, QSPI_MCR_CLR_RXF_U32);
        REG_BIT_SET32(QSPI_0_BASEADDR +  QSPI_MCR_OFFSET_U32, QSPI_MCR_CLR_TXF_U32);
        /* Clear the error flags (w1c). */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_ILLINE_U32 | QSPI_FR_AITEF_MASK_U32 | QSPI_FR_AIBSEF_MASK_U32 | QSPI_FR_ABOF_MASK_U32);
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_RBDF_U32 | QSPI_FR_IUEF_MASK_U32);
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_TBFF_U32 | QSPI_FR_TBUF_U32 | QSPI_FR_TFF_MASK_U32);
        /* Set the SFAR Address */
        REG_WRITE32(QSPI_0_BASEADDR + QSPI_SFAR_OFFSET_U32, u32StartAddr);
        /* Set the WMRK value. */
        REG_RMW32(QSPI_0_BASEADDR + QSPI_RBCT_OFFSET_U32, QSPI_RBCT_WMRK_MASK_U32, (uint32)((((uint32)FLS_SIZE_1BYTE + 3UL) / 4UL) - 1UL)); /* If no. of bytes is not divisible by 4, round to next integer to expect 1 more word. Ex: 5 bytes -> 2 words -> WMRK=1. */
        /* Launch WRITE command. */
        Fls_Qspi_LaunchLUTCommand(u8LUTReadConfigModes, FLS_SIZE_1BYTE);
        /* Update timeout value*/
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /* Wait for transaction to finish. */
        while(FLASH_E_OK != Fls_Qspi_CheckControllerIsIdle())  /* Poll BUSY bit. */
        {
            /* Avoid if Hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Operation failed due to timeout */
                return FLS_NONE_MODE;
            }
        }
        /* Check errors from QSPI_FR. */
        if (0U != REG_BIT_GET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32))
        {
            /* Clear the errors (w1c). */
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_FR_OFFSET_U32, QSPI_FR_RBOF_U32 | QSPI_FR_IPAEF_MASK_U32 | QSPI_FR_IPIEF_MASK_U32 | QSPI_FR_IUEF_MASK_U32);
            return FLS_NONE_MODE;
        }

        eRetVal = Fls_Qspi_ReadRXBuffer(FLS_SIZE_1BYTE, &aReadConfigRegiter[u8ModeReadConfigRegiter], NULL_PTR);   /* Read the 2 bytes device ID. */
    }
    if(FLASH_E_OK == eRetVal)
    {
        /* if is SPI mode */
        if ((aReadConfigRegiter[0] == 0U) && (aReadConfigRegiter[1] == 0U) && (aReadConfigRegiter[2] == 0U))
        {
           eCurrentMode = FLASH_SPI_MODE;
        }
        /* if is STR mode */
        else if((aReadConfigRegiter[0] == 0U) && (aReadConfigRegiter[1] == 1U) && (aReadConfigRegiter[2] == 0U))
        {
           eCurrentMode = FLASH_STR_OPI_MODE;
        }
        /* if is DTR mode */
        else if((aReadConfigRegiter[0] == 0U) && (aReadConfigRegiter[1] == 0U) && (aReadConfigRegiter[2] == 2U))
        {
           eCurrentMode = FLASH_DTR_OPI_MODE;
        }
        else
        {
            eCurrentMode = FLS_NONE_MODE;
        }
    }
    else
    {
        eCurrentMode = FLS_NONE_MODE;
    }
    /* Revert as init_function */
    if(FLASH_E_OK != RevertInitFunction())
    {
        eCurrentMode = FLS_NONE_MODE;
    }

    return eCurrentMode;
}
/*
Set LUT value for extra LUT - which ones exceed 15
******************************************************************************************************************/
static void Fls_QspiSetLUT(uint32 u8LUTNumber,uint32 LUTExtraIndex)
{
    uint8 u8Iter = 0U;
    uint8 u8Iter2 = 0U;
    uint8 u8Iter3 = 0U;

    /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
    /* Unlock the LUT. */
    REG_WRITE32(QSPI_0_BASEADDR + QSPI_LUTKEY_OFFSET_U32, QSPI_LUT_KEY_VALUE_U32);
    REG_RMW32(QSPI_0_BASEADDR + QSPI_LCKCR_OFFSET_U32, QSPI_LCKCR_MASK_U32, QSPI_LCKCR_UNLOCKED_U32);

    /*Write to Sequence which Exceed LUT to LUT number 15*/
    for(u8Iter2 = u8LUTNumber*5U; u8Iter2 < (u8LUTNumber*5U + 5U); u8Iter2++)
    {
        /* Zero the LUT. */
        REG_WRITE32(QSPI_0_BASEADDR + QSPI_LUT_OFFSET_U32 + (uint32)((uint32)u8Iter2*4U), FLS_LUT_VALUE_U32);
    }

    /* Write the 32 bit LUT register */
    /* Loop through all configured Instr.Operand pairs inside this LUT sequence(maximum 8 instr.operand pairs for a LUT sequence). */
    for(u8Iter3 = 0U; u8Iter3 < (*((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitLUT))[LUTExtraIndex].u8InstrOperCount; u8Iter3++)
    {
        Fls_InstructionOperandType eInstrOper;

        eInstrOper = (*((*((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].paQspiUnitLUT))[LUTExtraIndex].paInstrOper))[u8Iter3];

        if (0U == (u8Iter3 % 2U))
        {
            /* Write the first 16bit Instr.Oper. pair in the 32 bit LUT register. */
            REG_RMW32(QSPI_0_BASEADDR + QSPI_LUT_OFFSET_U32 + ((uint32)u8LUTNumber * 20U) + (((uint32)u8Iter3 / 2U) * 4U),
                       QSPI_LUT_INSTR0_OPER0_MASK_U32,
                       (uint32)((uint32)eInstrOper << QSPI_LUT_INSTR0_OPER0_OFFSET_U32)
                     );
        }
        else
        {
            /* Write the second 16bit Instr.Oper. pair in the 32 bit LUT register. */
            REG_RMW32(QSPI_0_BASEADDR + QSPI_LUT_OFFSET_U32 + ((uint32)u8LUTNumber * 20U) + (((uint32)u8Iter3 / 2U) * 4U),
                       QSPI_LUT_INSTR1_OPER1_MASK_U32,
                       (uint32)((uint32)eInstrOper << QSPI_LUT_INSTR1_OPER1_OFFSET_U32));
        }
        /* Only aligned (LUT0, LUT5, LUT10,...) are valid starting sequences, so each LUT sequence write(from the 1st FOR loop, LUTExtraIndex), should start aligned x5 in memory.
        The offset "(LUTExtraIndex * 20U)" selects the first aligned byte of a valid sequence: LUT0, LUT5, LUT10, in turn each being 32 bits(x5bytes) wide.
        The offset "((u8Iter3 / 2U) * 4U)" selects the LUT from inside the sequence: LUT0, LUT1, LUT2, LUT3 LUT4 (maximum 5 LUTs per sequence). */
    }
    /* Lock the LUT. */
    /* REG_WRITE32(QSPI_0_BASEADDR + QSPI_LUTKEY_OFFSET_U32, QSPI_LUT_KEY_VALUE_U32);
    REG_RMW32(QSPI_0_BASEADDR + QSPI_LCKCR_OFFSET_U32, QSPI_LCKCR_MASK_U32, QSPI_LCKCR_LOCKED_U32); */
    /* Enable QSPIx module after configuration */
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);
}
static Fls_LLDReturnType RevertInitFunction(void)
{
    uint8 u8Iter = 0U;
    uint32 u32DllStatus = 0U;
    uint32 u32TimeoutValue = 0U;

    /* Disable QSPIx module before configuration - enter "Disabled mode" in order to be able to update QuadSPI_SMPR */
    REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);

    /* It selects DQS clock for sampling read data at Flash A QuadSPI port*/
    /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
    REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32) (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingModeA << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);

    /* It selects DQS clock for sampling read data at Flash B QuadSPI port*/
    REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FB_SEL_MASK_U32, (uint32) (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingModeB << QSPI_MCR_DQS_FB_SEL_SHIFT_U32);
    /* CK2 DDR center align read strobe for Flash A.*/
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDdrCentrerAlignReadA)
    {

        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
    }
    else
    {
        /*Set this bit to '1' to enable CK2 output 90 degree phase shifted clock for Flash A.*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FA_U32);
    }
    /* Clock on differential CKN pad of Flash A */
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bClockOnDifferentialCknPadA)
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CKN_FA_EN_U32);
    }
    else
    {
        /* Set '1' to enable clock on differential CKN pad of Flash A.*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CKN_FA_EN_U32);
    }
    /* CK2 DDR center align read strobe for Flash B.*/
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDdrCentrerAlignReadB)
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FB_U32);
    }
    else
    {
        /*Set this bit to '1' to enable CK2 output 90 degree phase shifted clock for Flash B.*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CK2_DCARS_FB_U32);
    }
    /*Clock on differential CKN pad of Flash B*/
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bClockOnDifferentialCknPadB)
    {
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CKN_FB_EN_U32);
    }
    else
    {
        /* Set '1' to enable clock on differential CKN pad of Flash B.*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_CKN_FB_EN_U32);
    }
    /* This is valid for both SDR and DDR mode*/
    if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDqsEnable)
    {
        /* Disable DQS. */
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
    }
    else
    {
        /* Enable DQS. */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_EN_U32);
    }

   /* It selects DQS clock for sampling read data at Flash A QuadSPI port*/
   /* Configure sampling mode (00: DQS internal (Default) -  01: Pad loopback - 10: DQS pad loopback - 11: External DQS*/
    REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FA_SEL_MASK_U32, (uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingModeA << QSPI_MCR_DQS_FA_SEL_SHIFT_U32);
    /* It selects DQS clock for sampling read data at Flash B QuadSPI port*/
    REG_RMW32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_DQS_FB_SEL_MASK_U32, (uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiUnitSamplingModeB << QSPI_MCR_DQS_FB_SEL_SHIFT_U32);
    /* Enable QSPIx module after configuration */
    REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_MCR_OFFSET_U32, QSPI_MCR_MDIS_U32);

    /* DLLCRA/B being cleared to 0 before being configured again */
    REG_RMW32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRA_MASK_U32, 0x00);
    REG_RMW32(QSPI_0_BASEADDR + QSPI_DLLCRB_OFFSET_U32, QSPI_DLLCRB_MASK_U32, 0x00);
    /* DLL feature*/
    if((Fls_QspiDllMode)FLS_DLL_BYPASS_MODE == (Fls_QspiDllMode)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiDllMode))
    {
        /*Enable DLL Slave */
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_EN_MASK_U32);
        /*Enable DLL bypass mode*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLL_BYPASS_MASK_U32);
        /*Disable Auto update*/
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_AUTO_UPDATE_MASK_U32);
        /*set Fine offset delay elements*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLY_FINE_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraSlvDlyFine) << QSPI_DLLCRx_SLV_DLY_FINE_SHIFT_U32));
        /*set Delay elements in each delay tap*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLY_COARSE_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraSlvDlyCoarse) << QSPI_DLLCRx_SLV_DLY_COARSE_SHIFT_U32));

        /*set Frequency enable*/
        if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDllcraFreqEnable)
        {

            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
        }
        else
        {

            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
        }
        /*set slave update after slave delay chain configuration*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /*Waiting DLL Slave A lock status*/
        do
        {
            u32DllStatus = REG_READ32(QSPI_0_BASEADDR + QSPI_DLLSR_OFFSET_U32);
            if(0U != (u32DllStatus & (QSPI_DLLSR_DLLA_RANGE_ERR_U32 | QSPI_DLLSR_DLLA_FINE_UNDERFLOW_U32)))
            {
                /* Mark the Init job as failed. */
                return  FLASH_E_FAILED;

            }
            /* Avoid if Hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
        while(0U== (u32DllStatus & QSPI_DLLSR_SLVA_LOCK_U32));    /*Waiting DLL lock bit*/
        /*Clear slave update after slave delay chain configuration*/
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
    }
    else
    {
        if((Fls_QspiDllMode)FLS_DLL_AUTO_UPDATE_MODE == (Fls_QspiDllMode)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiDllMode))
        {
            /*Enable Auto update*/
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_AUTO_UPDATE_MASK_U32);
        }
        else
        {
            /*Disable Auto update*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_AUTO_UPDATE_MASK_U32);
        }
        /*Enable DLL Slave*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_EN_MASK_U32);
        /*Disable DLL bypass mode*/
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLL_BYPASS_MASK_U32);
        /*set DLL reference counter*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_REF_CNT_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraRefCounter) << QSPI_DLLCRx_REF_CNT_SHIFT_U32));
        /*set DLL resolution*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_RES_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraResolution) << QSPI_DLLCRx_RES_SHIFT_U32));
        /*set Fine offset delay elements*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_FINE_OFFSET_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraSlvFineOffset) << QSPI_DLLCRx_SLV_FINE_OFFSET_SHIFT_U32));
        /*set T/16 offset delay elements*/
        REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_DLY_OFFSET_MASK_U32 & (((uint32)(*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].u8QspiDllCraSlvDlyOffset) << QSPI_DLLCRx_SLV_DLY_OFFSET_SHIFT_U32));
        /*set Frequency enable*/
        if ((boolean) FALSE == (*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].bQspiDllcraFreqEnable)
        {
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
        }
        else
        {
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_FREQ_EN_MASK_U32);
        }
        /*Enable DLL A*/

        if((Fls_QspiDllMode)FLS_DLL_MANUAL_UPDATE_MODE == (Fls_QspiDllMode)((*(Fls_pConfigPtr->pFlsQspiCfgConfig->paQspiUnitCfg))[u8Iter].eQspiDllMode))
        {
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_EN_MASK_U32);
            /* Update timeout value */
            u32TimeoutValue = FLS_TIMEOUT_VALUE;
            /*Waiting DLLA lock status*/
            do
            {
                u32DllStatus = REG_READ32(QSPI_0_BASEADDR + QSPI_DLLSR_OFFSET_U32);
                if(0U != (u32DllStatus & (QSPI_DLLSR_DLLA_RANGE_ERR_U32 | QSPI_DLLSR_DLLA_FINE_UNDERFLOW_U32)))
                {
                    /* Mark the Init job as failed. */
                    return FLASH_E_FAILED;
                }
                    /* Avoid if Hardware stuck*/
                    u32TimeoutValue --;
                    if (0U == u32TimeoutValue)
                    {
                        /* Operation failed due to timeout */
                        return FLASH_E_TIMEOUT;
                    }
            }
            while(0U== (u32DllStatus & QSPI_DLLSR_DLLA_LOCK_U32));    /*Waiting DLL lock bit*/
            /*Update the slave delay chain*/
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
        }
        else
        {
            /*Enable update the slave delay chain*/
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
            REG_BIT_SET32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_EN_MASK_U32);
            /*Update the slave delay chain*/
            REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
        }
        /* Update timeout value */
        u32TimeoutValue = FLS_TIMEOUT_VALUE;
        /*Waiting DLL Slave lock status*/
        do
        {
            u32DllStatus = REG_READ32(QSPI_0_BASEADDR + QSPI_DLLSR_OFFSET_U32);
            if(0U != (u32DllStatus & (QSPI_DLLSR_DLLA_RANGE_ERR_U32 | QSPI_DLLSR_DLLA_FINE_UNDERFLOW_U32)))
            {
                /* Mark the Init job as failed. */
                return FLASH_E_FAILED;

            }
            /* Avoid if Hardware stuck*/
            u32TimeoutValue --;
            if (0U == u32TimeoutValue)
            {
                /* Operation failed due to timeout */
                return FLASH_E_TIMEOUT;
            }
        }
        while(0U == (u32DllStatus & QSPI_DLLSR_SLVA_LOCK_U32)); /*Waiting SlvA DLL lock bit*/
        /*Clear slave update after slave delay chain configuration*/
        REG_BIT_CLEAR32(QSPI_0_BASEADDR + QSPI_DLLCRA_OFFSET_U32, QSPI_DLLCRx_SLV_UPD_MASK_U32);
    }

    return FLASH_E_OK;
}

