/**
*   @file    Fls_Qspi_Types.h
*   @version 0.4.5
*
*   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
*   @details Definitions of Flash IP exported types.
*
*   @addtogroup FLS
*   @{
*/
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

#ifndef FLS_QSPI_TYPES_H
#define FLS_QSPI_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif

#include "Platform_Types.h"

/**
*   @file    Fls_Types.h
*   @implements Fls_Types.h_Artifact
*   @version 0.4.5
*
*   @brief   AUTOSAR Fls - AUTOSAR Module Flash Driver.
*   @details Definitions of all Flash driver exported types.
*
*   @addtogroup FLS
*   @{
*/

#ifndef FLS_TYPES_H
#define FLS_TYPES_H

#ifdef __cplusplus
extern "C"{
#endif

extern const uint32 FLS_QSPI_BASE_ADDR32[1];
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/**
    @brief Enumeration of physical flash sectors program size
*/
typedef enum
{
    FLS_QSPI_0 = 0U,
    FLS_QSPI_1 = 1U,
    FLS_NOT_QSPI = 2U
} Fls_QspiUnitNameType;

typedef enum
{
    FLS_WRITE_128BYTES_PAGE = 128U,
    FLS_WRITE_256BYTES_PAGE = 256U,
    FLS_WRITE_512BYTES_PAGE = 512U
} Fls_ProgSizeType;
/**
* @brief the number of bytes uses to compare.
*
*/
typedef enum
{
    FLS_SIZE_1BYTE = 1U,
    FLS_SIZE_4BYTE = 4U
} Fls_DataBytesType;

/**
* @brief          Fls Address Type.
* @details        Address offset from the configured flash base address to access a certain flash
*                 memory area.
* @implements     Fls_AddressType_typedef
*/
typedef uint32 Fls_AddressType;

/**
* @brief          Fls Length Type.
* @details        Number of bytes to read,write,erase,compare
* @implements     Fls_LengthType_typedef
*/
typedef uint32 Fls_LengthType;

/**
* @brief Clock sampling mode.
*/
typedef enum
{
    FLS_INTERNAL_DQS_A =     0,
    FLS_PAD_LOOPBACK_A =     1,
    FLS_PAD_LOOPBACK_DQS_A = 2,
    FLS_EXTERNAL_DQS_A =     3,
    FLS_INTERNAL_DQS_B =     0,
    FLS_PAD_LOOPBACK_B =     1,
    FLS_PAD_LOOPBACK_DQS_B = 2,
    FLS_EXTERNAL_DQS_B =     3
} Fls_QspiUnitSamplingModeType;

/**
* @brief Internal DQS clock type.
*/
typedef enum
{
    FLS_INVERTED_CLK = 0,
    FLS_NONINVERTED_CLK
} Fls_QspiUnitIntDqsRefClkType;

/**
* @brief Sampling clock coarse delay.
*/
typedef enum
{
    FLS_CLK_CYCLES_0        = 0,
    FLS_CLK_CYCLES_1_PER_2  = 2,
    FLS_CLK_CYCLES_1_PER_4  = 3,
    FLS_CLK_CYCLES_1        = 4,
    FLS_CLK_CYCLES_3_PER_4  = 5,
    FLS_CLK_CYCLES_3_PER_2  = 6,
    FLS_CLK_CYCLES_5_PER_4  = 7
} Fls_QspiUnitCoarseDlyType;

/**
* @brief Clock sampling edge.
*/
typedef enum
{
    FLS_RISING = 0,
    FLS_FALLING
} Fls_QspiUnitSamplingEdgeType;

/**
* @brief Clock sampling delay.
*/
typedef enum
{
    FLS_1SAMPLE_DLY = 0,
    FLS_2SAMPLE_DLY
} Fls_QspiUnitSamplingDlyType;

/**
* @brief Serial flash data in hold time.
*/
typedef enum
{
    FLS_ALIGNED_INT_REF_CLK = 0,
    FLS_ALIGNED_2X_CLK      = 1
} Fls_QspiUnitTdhType;

/**
* @brief Endianness configuration.
*/
typedef enum
{
    FLS_BIG_ENDIAN_64       = 0,
    FLS_LITTLE_ENDIAN_32    = 1,
    FLS_BIG_ENDIAN_32       = 2,
    FLS_LITTLE_ENDIAN_64    = 3
} Fls_QspiUnitEndianType;

/**
* @brief Access mode for write jobs, determining AHB Write or IP Write
*/
typedef enum
{
    FLS_IP_WRITE_MODE = 0,
    FLS_AHB_WRITE_MODE
} Fls_QspiUnitWriteModeType;

/**
* @brief Access mode for read jobs, determining the bus interface and the buffer used.
*/
typedef enum
{
    FLS_AHB_READ_MODE = 0,
    FLS_IP_READ_MODE
} Fls_QspiUnitReadBufferModeType;

/**
* @brief Access mode of the RX Buffer, used in read jobs, in IP accessing mode.
*/
typedef enum
{
    FLS_RXBUFFER_AHB_BUS_ACCESS = 0,
    FLS_RXBUFFER_IP_BUS_ACCESS
} Fls_QspiUnitRxBufferAccessModeType;

/**
* @brief Number of external pads used, used as an operand for a LUT instruction.
*/
typedef enum
{
    FLS_LUT_PAD_1_PAD  = 0,
    FLS_LUT_PAD_2_PADS = 1,
    FLS_LUT_PAD_4_PADS = 2,
    FLS_LUT_PAD_8_PADS = 3
} Fls_QspiUnitLutPadsType;

/**
    @brief QSPI sector channel type.
*/
typedef enum
{
    FLS_CH_EXTERN_QSPI_0_A1 = 0,
    FLS_CH_EXTERN_QSPI_0_A2,
    FLS_CH_EXTERN_QSPI_0_B1,
    FLS_CH_EXTERN_QSPI_0_B2,
    FLS_CH_EXTERN_QSPI_0_PARALLEL_A1B1,
    FLS_CH_EXTERN_QSPI_0_PARALLEL_A2B2,
    FLS_CH_EXTERN_QSPI_1_A1,
    FLS_CH_EXTERN_QSPI_1_A2,
    FLS_CH_EXTERN_QSPI_1_B1,
    FLS_CH_EXTERN_QSPI_1_B2,
    FLS_CH_EXTERN_QSPI_1_PARALLEL_A1B1,
    FLS_CH_EXTERN_QSPI_1_PARALLEL_A2B2,
    NOT_QSPI_CHANNEL
} Fls_QspiSectorChType;

/**
* @brief QSPI channel type.
*/
typedef enum
{
    FLS_QSPI_CH_INDIVIDUAL = 0,
    FLS_QSPI_CH_PARALLEL
} Fls_QspiSectorChParallelType;

/**
* @brief Instruction-Operand type.
*/
typedef uint16 Fls_InstructionOperandType;

/**
* @brief Structure describing a LUT element.
*/
typedef struct
{
    /** @brief  Number of instruction-operand pairs inside a LUT sequence. */
    const uint8 u8InstrOperCount;
    /** @brief  Instruction-operand pairs. */
    const Fls_InstructionOperandType (*paInstrOper)[];
}Fls_QspiLUTType;

/**
* @brief AHB buffer instance name.
*/
typedef enum
{
    FLS_AHB_BUFFER_0 = 0,
    FLS_AHB_BUFFER_1 = 1,
    FLS_AHB_BUFFER_2 = 2,
    FLS_AHB_BUFFER_3 = 3
} Fls_AhbBufferType;

/**
* @brief Master ID used for AHB buffer access routing and prefetch triggering.
*/
typedef enum
{
    FLS_APEX0_0      = 32,
    FLS_APEX0_1      = 33,
    FLS_APEX1_0      = 34,
    FLS_APEX1_1      = 35,
    FLS_APEX2_0      = 36,
    FLS_APEX2_1      = 37,
    FLS_FDMA0_0      = 38,
    FLS_FDMA0_1      = 39,
    FLS_FDMA1_0      = 40,
    FLS_FDMA1_1      = 41,
    FLS_DOF_0        = 48,
    FLS_DOF_1        = 49,
    FLS_DOF_CS       = 50,
    FLS_DOF_MT0      = 51,
    FLS_DOF_MT1      = 52,
    FLS_HPSMI_0      = 53,
    FLS_HPSMI_1      = 54,
    FLS_RECT_IMG     = 55,
    FLS_RECT_LUT     = 56,
    FLS_SGM          = 57,
    FLS_63           = 63,
    FLS_ETHERNET     = 64,
    FLS_FPE          = 65,
    FLS_DCU          = 66

} Fls_AhbBufferMasterIdType;

typedef enum
{
    FLS_DLL_BYPASS_MODE             = 0,
    FLS_DLL_MANUAL_UPDATE_MODE      = 1,
    FLS_DLL_AUTO_UPDATE_MODE        = 2
} Fls_QspiDllMode;



/**
* @brief Configuration structure for QSPI HW unit related parameters.
*/
typedef struct
{
    /** @brief  DLL. */
    const Fls_QspiDllMode eQspiDllMode;
    /** @brief  DLL. */
    const boolean bQspiDllcraFreqEnable;
    /** @brief  DLL. */
    const uint8   u8QspiDllCraRefCounter;
    /** @brief  DLL. */
    const uint8   u8QspiDllCraResolution;
    /** @brief  DLL. */
    const uint8   u8QspiDllCraSlvFineOffset;
    /** @brief  DLL. */
    const uint8   u8QspiDllCraSlvDlyOffset;
    /** @brief  DLL. */
    const uint8   u8QspiDllCraSlvDlyCoarse;
    /** @brief  DLL. */
    const uint8   u8QspiDllCraSlvDlyFine;
    /** @brief DQS enabled and not . */
    const boolean bQspiDqsEnable;
    /** @brief  Clock sampling mode for flash A(internal,dqs,etc.). */
    const Fls_QspiUnitSamplingModeType eQspiUnitSamplingModeA;
    /** @brief  Clock sampling mode for flash B(internal,dqs,etc.). */
    const Fls_QspiUnitSamplingModeType eQspiUnitSamplingModeB;
    /** @brief Enable CK2 output 90 degree phase shifted clock of Flash A**/
    const boolean bQspiDdrCentrerAlignReadA;
    /** @brief Enable clock on differential CKN pad of Flash A **/
    const boolean bClockOnDifferentialCknPadA;
    /** @brief Enable CK2 output 90 degree phase shifted clock of Flash A**/
    const boolean bQspiDdrCentrerAlignReadB;
    /** @brief Enable clock on differential CKN pad of Flash A **/
    const boolean  bClockOnDifferentialCknPadB;
    /** @brief  Idle Signal Drive IOFB[3] Flash B. */
    const boolean bQspiUnitIOFB3HighLvl;
    /** @brief  Idle Signal Drive IOFB[2] Flash B. */
    const boolean bQspiUnitIOFB2HighLvl;
    /** @brief  Idle Signal Drive IOFA[3] Flash A. */
    const boolean bQspiUnitIOFA3HighLvl;
    /** @brief  Idle Signal Drive IOFA[2] Flash A. */
    const boolean  bQspiUnitIOFA2HighLvl;
    /** @brief  Clock sampling edge. */
    const Fls_QspiUnitSamplingEdgeType  eQspiUnitSamplingEdge;
    /** @brief  Clock sampling delay. */
    const Fls_QspiUnitSamplingDlyType  eQspiUnitSamplingDly;
    /** @brief  Latency cycles enable. */
    const boolean  bQspiUnitDqsLatencyEn;
    /** @brief  Serial flash data in hold time. */
    const Fls_QspiUnitTdhType  eQspiUnitTdh;
    /** @brief  Serial flash CS setup time in clock cycles. */
    const uint8  u8QspiUnitTcsh;
    /** @brief  Serial flash CS setup time in clock cycles. */
    const uint8  u8QspiUnitTcss;
        /** @brief  Selects the Nth tap provided by Fa slave delay-chain. */
    const uint8  u8QspiUnitDLLFSMPFA;
    /** @brief  Selects the Nth tap provided by Fb slave delay-chain */
    const uint8  u8QspiUnitDLLFSMPFB;
    /** @brief  Byte endianness. */
    const Fls_QspiUnitEndianType  eQspiUnitEndian;
    /** @brief  Access mode for write jobs(IP/AHB). */
    const Fls_QspiUnitWriteModeType  eQspiUnitWriteMode;
    /** @brief  Access mode for read jobs(IP/AHB). */
    const Fls_QspiUnitReadBufferModeType  eQspiUnitReadBufferMode;
    /** @brief  Access mode of the RX Buffer(used in IP mode, RX_IP bus/RX_AHB bus). */
    const Fls_QspiUnitRxBufferAccessModeType  eQspiUnitRxBufferAccessMode;
    /** @brief  AHB buffers instances. */
    const Fls_AhbBufferType  (*paQspiUnitAhbBuffer)[];
    /** @brief  AHB buffers masters ID. */
    const Fls_AhbBufferMasterIdType  (*paQspiUnitAhbBufferMasterId)[];
    /** @brief  AHB buffers size. */
    const uint32  (*paQspiUnitAhbBufferSize)[];
    /** @brief  AHB buffers data prefetch size. */
    const uint32  (*paQspiUnitAhbBufferDataTransferSize)[];
    /** @brief  All master enable bit for FLS_AHB_BUFFER_3. */
    const boolean  bHwUnitAhbBufferAllMasters;
    /** @brief  Number of configured AHB buffers. */
    const uint8  u8QspiUnitAhbBufferCount;
    /** @brief  Serial address mapping of external memories into internal memory map. */
    const uint32  (*paQspiUnitSerialAddrMapping)[];
    /** @brief  Column address bit width. */
    const uint8  u8QspiUnitColumnAddressWidth;
    /** @brief  Page program boundary. */
    const uint8  u8QspiUnitPageProgramBoundary;
    /** @brief  Word addressable memories. */
    const boolean  bQspiUnitWordAddressable;
    /** @brief  Byte Swapping. */
    const boolean  bQspiUnitByteSwapping;
    /** @brief  External memory register width. */
    const uint8  u8QspiUnitRegisterWidth;
    /** @brief  Value of the BUSY/IDLE bit signifying a busy state of the memory(0/1). */
    const uint8  u8QspiUnitBusyBitValue;
    /** @brief  BUSY/IDLE bit position offset inside the status register. */
    const uint8  u8QspiUnitBusyBitPosOffset;
    /** @brief  Device ID configured value(Manufacturer ID | Device ID). */
    const uint16  u16QspiDeviceId;
    /** @brief  Hyperflash latency cycles. */
    const uint8  u8QspiHyperflashLatCycls;
    /** @brief  LUT sequences of instruction/operand pairs. */
    const Fls_QspiLUTType  (*paQspiUnitLUT)[];
    /** @brief  Number of configured LUT sequences. */
    const uint8  u8QspiLUTSeqsCount;
    /** @brief  LUT sequence ID used for get status jobs. */
    const uint8  u8QspiLUTGetStatusSeq;
    /** @brief  LUT sequence ID used for read jobs. */
    const uint8  u8QspiLUTReadSeq;
    /** @brief  LUT sequence ID used for write enable jobs. */
    const uint8  u8QspiLUTWriteEnSeq;
    /** @brief  LUT sequence ID used for write jobs. */
    const uint8  u8QspiLUTWriteSeq;
    /** @brief  LUT sequence ID used for erase jobs. */
    const uint8  u8QspiLUTEraseSeq;
    /** @brief  LUT sequence ID used for read ID jobs. */
    const uint8  u8QspiLUTReadIdSeq;
    /** @brief  LUT sequence ID used for read Spi mode. */
    const uint8  u8QspiLUTReadConfigSpiModeSeq;
    /** @brief  LUT sequence ID used for write Spi mode. */
    const uint8  u8QspiLUTWriteConfigSpiModeSeq;
    /** @brief  LUT sequence ID used for write str mode. */
    const uint8  u8QspiLUTWriteConfigStrModeSeq;
    /** @brief  LUT sequence ID used for read str mode. */
    const uint8  u8QspiLUTReadConfigStrModeSeq;
    /** @brief  LUT sequence ID used for read Dtr mode. */
    const uint8  u8QspiLUTReadConfigDtrModeSeq;
    /** @brief  LUT sequence ID used for read Dtr mode. */
    const uint8  u8QspiLUTWriteConfigDtrModeSeq;
    /** @brief  LUT sequence ID used for Write Enable S-OPI. */
    const uint8  u8QspiLUTWriteStr_OPIEnSeq;
    /** @brief  LUT sequence ID used for get status STROPI mode. */
    const uint8  u8QspiLUTGetSatusSOPISeq;
    /** @brief  LUT sequence ID used for get status DTROSPI jobs. */
    const uint8  u8QspiLUTRGetStatusDOPISeq;
    /** @brief  LUT sequence ID used for Write Enable D-OPI. */
    const uint8  u8QspiLUTWriteDtr_OPIEnSeq;
     /** @brief  LUT sequence ID used for Octa Read for D-OPI. */
    const uint8 u8QspiLUTOctaReadDOPISeq;
    /** @brief  LUT sequence ID used for Sector Erase for D-OPI. */
    const uint8 u8QspiLUTSectorEraseDOPISeq;
    /** @brief  LUT sequence ID used for Page Program for D-OPI. */
    const uint8 u8QspiLUTPageProgramDOPISeq;
    /** @brief  LUT sequence ID used for Octa Read for S-OPI. */
    const uint8 u8QspiLUTOctaReadSOPISeq;
    /** @brief  LUT sequence ID used for Sector Erase for S-OPI. */
    const uint8 u8QspiLUTSectorEraseSOPISeq;
    /** @brief  LUT sequence ID used for Page Program for S-OPI. */
    const uint8 u8QspiLUTPageProgramSOPISeq;

} Fls_QspiUnitCfgType;

/**
* @brief General configuration structure for QSPI related parameters.
*/
typedef struct
{
    /** @brief QSPI sector channel type(assigned external port, chip select). */
    const  Fls_QspiSectorChType  (*paQspiSectCh)[];
    /** @brief QSPI configuration for each configured hardware unit instances(QSPI0/QSPI1). */
    const  Fls_QspiUnitCfgType  (*paQspiUnitCfg)[];
}Fls_QspiCfgConfigType;

/**
* @brief ON State.
* @implements SymbolDefinitions_enumeration
*/
#define STD_ON      0x01

/**
* @brief OFF state.
* @implements SymbolDefinitions_enumeration
*/
#define STD_OFF     0x00

/**
* @brief Return code for failure/error.
* @implements SymbolDefinitions_enumeration
*/
#define E_NOT_OK    0x01

/**
* @brief This type can be used as standard API return type which is shared between the RTE and the
*        BSW modules.
* @implements Std_ReturnType_type
*/

typedef enum
{
    FLASH_E_OK = 0,                 /**< @brief operation succeeded */
    FLASH_E_FAILED,                 /**< @brief operation failed due to hardware error */
    FLASH_E_TIMEOUT,                /**< @brief operation failed due to timeout */
    FLASH_E_BLOCK_INCONSISTENT,     /**< @brief data buffer doesn't match with content of flash memory */
    FLASH_E_PENDING,                /**< @brief operation is pending */
    FLASH_E_PARTITION_ERR           /**< @brief FlexNVM partition ratio error */
} Fls_LLDReturnType;

typedef enum
{
    FLASH_SPI_MODE = 0,             /**< @brief mode 00= SPI*/
    FLASH_STR_OPI_MODE,             /**< @brief mode 01= STR OPI enable */
    FLASH_DTR_OPI_MODE,             /**< @brief mode 10= DTR OPI enable */
    FLS_NONE_MODE                   /**< @brief Not know the current mode */
} Fls_ConfigRegiterModesType;

#ifdef __cplusplus
}
#endif
#endif

#endif /* FLS_QSPI_TYPES_H */

/** @}*/
