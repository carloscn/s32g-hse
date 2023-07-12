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

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
==================================================================================================*/
#include "Fls_Qspi_Registers.h"
#include "Fls_Qspi_Type.h"
#include "Fls_Cfg.h"

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/* aFlsSectorEndAddr[] (FlsConfigSet) */
static const Fls_AddressType  FlsConfigSet_VS_0_aFlsSectorEndAddr[2] =
{
    (Fls_AddressType)4095U, /* FlsSectorEndAddr (FlsSector_0)*/
    (Fls_AddressType)8191U /* FlsSectorEndAddr (FlsSector_1)*/
};

/* paSectorProgSize[] (FlsConfigSet) */
static const Fls_LengthType  FlsConfigSet_VS_0_aFlsProgSize[2] =
{
    (Fls_LengthType)FLS_WRITE_256BYTES_PAGE, /* FlsProgrammingSize (FlsSector_0) */
    (Fls_LengthType)FLS_WRITE_256BYTES_PAGE /* FlsProgrammingSize (FlsSector_1) */
};

/* paSectorHwAddress[] (FlsConfigSet) */
static const Fls_AddressType  FlsConfigSet_VS_0_paSectorHwAddress[2] =
{
    (Fls_AddressType)16384U, /* (FlsSector_0) */
    (Fls_AddressType)20480U /* (FlsSector_1) */
};

/* paQspiSectCh[] (FlsConfigSet) */
static const Fls_QspiSectorChType  FlsConfigSet_VS_0_paQspiSectCh[2] =
{
    FLS_CH_EXTERN_QSPI_0_A1, /* (FlsSector_0) */
    FLS_CH_EXTERN_QSPI_0_A1 /* (FlsSector_1) */
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_ERASE_SEQUENCE_SECTOR_SPI_VS_0[3] =
{
    (Fls_InstructionOperandType)((32U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((24U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((0U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_STOP << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U))
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType FlsHwUnit_0_OCTA_READ_DOPI_SEQUENCE_VS_0[5] =
{
    (Fls_InstructionOperandType)((0xEEU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0x11U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((20) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_DUMMY << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((16U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_READ_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_READ_CFG_REG2_DTROPI_SEQUENCE_VS_0[5] =
{
    (Fls_InstructionOperandType)((0x71U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0x8EU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((4U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_DUMMY << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_READ << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_READ_SINGLE_IO_STR_SEQUENCE_VS_0[3] =
{
    (Fls_InstructionOperandType)((3U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((24U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_READ << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U))
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_VS_0[2] =
{
    (Fls_InstructionOperandType)((5U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_READ << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U))
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_WRITE_ENABLE_SEQUENCE_VS_0[2] =
{
    (Fls_InstructionOperandType)((6U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((0U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_STOP << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U))
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_WRITE_CFG_REG2_DTROPI_SEQUENCE_VS_0[4] =
{
    (Fls_InstructionOperandType)((0x72U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0x8DU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_WRITE << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_WRITE_ENABLE_STR_SEQUENCE_VS_0[2] =
{
    (Fls_InstructionOperandType)((0x06U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0xF9U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

static const Fls_InstructionOperandType  FlsHwUnit_0_WRITE_ENABLE_DTR_SEQUENCE_VS_0[2] =
{
    (Fls_InstructionOperandType)((0x06U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0xF9U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};
/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_WRITE_SINGLE_IO_SEQUENCE_VS_0[3] =
{
    (Fls_InstructionOperandType)((2U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((24U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_WRITE << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U))
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_DDR_OPI_VS_0[6] =
{
    (Fls_InstructionOperandType)((5U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0xFAU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((8U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_DUMMY << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((8U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_READ << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_STOP << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U))
};

/* (*paInstrOper)[] */
static const Fls_InstructionOperandType  FlsHwUnit_0_PAGE_PROGRAM_DOPI_SEQUENCE_VS_0[4] =
{
    (Fls_InstructionOperandType)((0x12U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0xEDU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_WRITE_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

static const Fls_InstructionOperandType  FlsHwUnit_0_READ_CFG_REG2_SPI_SEQUENCE_VS_0[3] =
{
    (Fls_InstructionOperandType)((0x71U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_READ << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U))
};
static const Fls_InstructionOperandType  FlsHwUnit_0_WRITE_CFG_REG2_SPI_SEQUENCE_VS_0[3] =
{
    (Fls_InstructionOperandType)((0x72U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_WRITE << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U))
};
static const Fls_InstructionOperandType  FlsHwUnit_0_WRITE_CFG_REG2_STROPI_SEQUENCE_VS_0[4] =
{
    (Fls_InstructionOperandType)((0x72U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0x8DU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_WRITE << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};
static const Fls_InstructionOperandType  FlsHwUnit_0_READ_CFG_REG2_STROPI_SEQUENCE_VS_0[5] =
{
    (Fls_InstructionOperandType)((0x71U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0x8EU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((4U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_DUMMY << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_READ << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

static const Fls_InstructionOperandType  FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_STR_OPI_VS_0[6] =
{
    (Fls_InstructionOperandType)((0x05U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0xFAU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((4U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_DUMMY << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_READ << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
   (Fls_InstructionOperandType)((0U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_STOP << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

static const Fls_InstructionOperandType FlsHwUnit_0_READ_MANUFACTURE_ID_SPI_SEQUENCE_VS_0[2] =
{
     (Fls_InstructionOperandType)((0x9FU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U)),
     (Fls_InstructionOperandType)((0U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_STOP << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_1_PAD << 8U))
};

static const Fls_InstructionOperandType  FlsHwUnit_0_SECTOR_ERASE_DOPI_SEQUENCE_VS_0[3] =
{
    (Fls_InstructionOperandType)((0x21U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0xDEU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR_DDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

static const Fls_InstructionOperandType FlsHwUnit_0_OCTA_READ_SOPI_SEQUENCE_VS_0[5] =
{
    (Fls_InstructionOperandType)((0xECU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0x13U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((20U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_DUMMY << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((1U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_READ << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

static const Fls_InstructionOperandType  FlsHwUnit_0_SECTOR_ERASE_SOPI_SEQUENCE_VS_0[3] =
{
    (Fls_InstructionOperandType)((0x21U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0xDEU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

static const Fls_InstructionOperandType  FlsHwUnit_0_PAGE_PROGRAM_SOPI_SEQUENCE_VS_0[4] =
{
    (Fls_InstructionOperandType)((0x12U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((0xEDU) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_CMD << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((32) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_ADDR << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U)),
    (Fls_InstructionOperandType)((16U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_INSTR_WRITE << 10U) | \
                                (Fls_InstructionOperandType)((Fls_InstructionOperandType)FLS_LUT_PAD_8_PADS << 8U))
};

/* aFlsLUT[] (FlsHwUnit_0) */
/*Init write from LUT[0] to LUT[15] for which exceeded LUT, it will write on LUT[15] when needed;*/
static const Fls_QspiLUTType  FlsConfigSet_FlsHwUnit_0_VS_0_aFlsLUT[22] =
{
        /* #1  POST_BUILD_VARIANT_USED_FlsHwUnit_0_LUT */
    {
        /* ERASE_SEQUENCE_SECTOR_SPI */
        3U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_ERASE_SEQUENCE_SECTOR_SPI_VS_0    },

    {
        /* FlsHwUnit_0_OCTA_READ_DOPI_SEQUENCE_VS_0 */
        5U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_OCTA_READ_DOPI_SEQUENCE_VS_0    },
    {
        /* FlsHwUnit_0_READ_CFG_REG2_DTROPI_SEQUENCE_VS_0 */
        5U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_READ_CFG_REG2_DTROPI_SEQUENCE_VS_0    },
    {
        /* READ_SINGLE_IO_STR_SEQUENCE */
        3U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_READ_SINGLE_IO_STR_SEQUENCE_VS_0    },
    {
        /* READ_STATUS_REGISTER_SEQUENCE */
        2U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_VS_0    },
    {
        /* WRITE_ENABLE_SEQUENCE */
        2U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_WRITE_ENABLE_SEQUENCE_VS_0    },
    {
        /* FlsHwUnit_0_WRITE_CFG_REG2_DTROPI_SEQUENCE_VS_0 */
        4U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_WRITE_CFG_REG2_DTROPI_SEQUENCE_VS_0    },
    {
        /* WRITE_ENABLE_STR_SEQUENCE */
        2U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_WRITE_ENABLE_STR_SEQUENCE_VS_0    },
    {
        /* WRITE_SINGLE_IO_SEQUENCE */
        3U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_WRITE_SINGLE_IO_SEQUENCE_VS_0    },
    {
        /* FlsHwUnit_0_SECTOR_ERASE_DOPI_SEQUENCE_VS_0 */
        3U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_SECTOR_ERASE_DOPI_SEQUENCE_VS_0    },
    {
        /* READ_MANUFACTURE_ID_SPI_SEQUENCE */
        2U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_READ_MANUFACTURE_ID_SPI_SEQUENCE_VS_0    },
    {
        /* FlsHwUnit_0_PAGE_PROGRAM_DOPI_SEQUENCE_VS_0 */
        4U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_PAGE_PROGRAM_DOPI_SEQUENCE_VS_0    },
    {
        /* FlsHwUnit_0_READ_CFG_REG2_SPI_SEQUENCE_VS_0 */
        3U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_READ_CFG_REG2_SPI_SEQUENCE_VS_0    },
    {
        /* FlsHwUnit_0_WRITE_CFG_REG2_SPI_SEQUENCE_VS_0 */
        3U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_WRITE_CFG_REG2_SPI_SEQUENCE_VS_0    },
    {
        /* FlsHwUnit_0_WRITE_CFG_REG2_STROPI_SEQUENCE_VS_0 */
        4U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_WRITE_CFG_REG2_STROPI_SEQUENCE_VS_0    },
    {
        /* FlsHwUnit_0_READ_CFG_REG2_STROPI_SEQUENCE_VS_0 */
        5U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_READ_CFG_REG2_STROPI_SEQUENCE_VS_0    },
    {
        /* FlsHwUnit_0_READSTT_SOPI_SEQUENCE_VS_0 */
        6U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_STR_OPI_VS_0 },
    {
        /* READ_STATUS_REGISTER_SEQUENCE_DDR_OPI */
        6U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_DDR_OPI_VS_0 },
    {
        /* WRITE_ENABLE_DTR_SEQUENCE */
        2U, /* INSTRUCTION-OPERAND pairs count. */
        &FlsHwUnit_0_WRITE_ENABLE_DTR_SEQUENCE_VS_0    },
    {
        /*OCTA_READ_SOPI_SEQUENCE */
        5U,
        &FlsHwUnit_0_OCTA_READ_SOPI_SEQUENCE_VS_0        },

    {
        /*SECTOR_ERASE_SOPI_SEQUENCE */
        3U,
        &FlsHwUnit_0_SECTOR_ERASE_SOPI_SEQUENCE_VS_0 },
    {
       /*PAGE_PROGRAM_SOPI_SEQUENCE */
         4U,
         &FlsHwUnit_0_PAGE_PROGRAM_SOPI_SEQUENCE_VS_0  },
};



/* paQspiUnitAhbBuffer[] (FlsHwUnit_0) */
static const Fls_AhbBufferType  FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBuffer[4] =
{
    FLS_AHB_BUFFER_0, /* (FlsAhbBuffer_0) */
    FLS_AHB_BUFFER_1, /* (FlsAhbBuffer_1) */
    FLS_AHB_BUFFER_2, /* (FlsAhbBuffer_2) */
    FLS_AHB_BUFFER_3 /* (FlsAhbBuffer_3) */
};
/* paQspiUnitAhbBufferMasterId[] (FlsHwUnit_0) */
static const Fls_AhbBufferMasterIdType  FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferMasterId[4] =
{
    FLS_63, /* (FlsAhbBuffer_0) */
    FLS_63, /* (FlsAhbBuffer_1) */
    FLS_63, /* (FlsAhbBuffer_2) */
    FLS_APEX1_1 /* (FlsAhbBuffer_3) */
};
/* paQspiUnitAhbBufferSize[] (FlsHwUnit_0) */
static const uint32  FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferSize[4] =
{
    0U, /* (FlsAhbBuffer_0) */
    0U, /* (FlsAhbBuffer_1) */
    0U, /* (FlsAhbBuffer_2) */
    1024U /* (FlsAhbBuffer_3) */
};
/* paQspiUnitAhbBufferDataTransferSize[] (FlsHwUnit_0) */
static const uint32  FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferDataTransferSize[4] =
{
    0U, /* (FlsAhbBuffer_0) */
    0U, /* (FlsAhbBuffer_1) */
    0U, /* (FlsAhbBuffer_2) */
    256U /* (FlsAhbBuffer_3) */
};


/* aFlsSerialAddrMapping[] (FlsHwUnit_0) */
static const uint32  FlsConfigSet_FlsHwUnit_0_VS_0_aFlsSerialAddrMapping[4] =
{
    0x1000000UL,
    0x1000000UL,
    0x1000000UL,
    0x1000000UL
};

/*FLS_DLL_BYPASS_MODE****************************************************************/
/* paQspiUnitCfg[] (FlsConfigSet) */
static const Fls_QspiUnitCfgType  FlsConfigSet_VS_0_paQspiUnitCfg_DLL_BYPASS_SDR[1] =
{
    {
        FLS_DLL_BYPASS_MODE,         /*eQspiDllMode*/
        (boolean)FALSE,        /*bQspiDllcraFreqEnable*/
        1U,                            /*u8QspiDllcraRefCounter*/
        2U,                            /*u8QspiDllcraResolution*/
        0U,                            /*u8QspiDllcraSlvFineOffset*/
        0U,                            /*u8QspiDllcraSlvDlyOffset*/
        5U,                            /*u8QspiDllcraSlvDlyCoarse*/
        5U,                            /*u8QspiDllcraSlvDlyFine*/
        (boolean)TRUE,             /*bQspiDqsEnable*/
        FLS_INTERNAL_DQS_A,                            /*eQspiUnitSamplingModeA*/
        FLS_INTERNAL_DQS_B,                            /*eQspiUnitSamplingModeB*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadA*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadA*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadB*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadB*/
        (boolean)TRUE,             /*bQspiUnitIOFB3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFB2HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA2HighLvl*/
        FLS_RISING,                            /*eQspiUnitSamplingEdge*/
        FLS_1SAMPLE_DLY,                             /*eQspiUnitSamplingDly*/
        (boolean)FALSE,/*bQspiUnitDqsLatencyEn*/
        FLS_ALIGNED_INT_REF_CLK,                                     /*eQspiUnitTdh*/
        3U,                            /*u8QspiUnitTcsh*/
        3U,                            /*u8QspiUnitTcss*/
        4U,                            /*u8QspiUnitDLLFSMPFA*/
        4U,                            /*u8QspiUnitDLLFSMPFB*/
        FLS_LITTLE_ENDIAN_64,                              /*eQspiUnitEndian*/
        FLS_IP_WRITE_MODE,                          /*eQspiUnitWriteMode*/
        FLS_AHB_READ_MODE,                          /*eQspiUnitReadBufferMode*/
        FLS_RXBUFFER_IP_BUS_ACCESS,                      /*eQspiUnitRxBufferAccessMode*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBuffer,                   /*paQspiUnitAhbBuffer*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferMasterId,           /*paQspiUnitAhbBufferMasterId*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferSize,               /*paQspiUnitAhbBufferSize*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferDataTransferSize,   /*paQspiUnitAhbBufferDataTransferSize*/
        (boolean)TRUE,/*bHwUnitAhbBufferAllMasters*/
        4U,                                                   /*u8QspiUnitAhbBufferCount*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsSerialAddrMapping,           /*paQspiUnitSerialAddrMapping*/
        0U,                     /*u8QspiUnitColumnAddressWidth*/
        0U,                     /*u8QspiUnitPageProgramBoundary*/
        (boolean)FALSE,/*bQspiUnitWordAddressable*/
        (boolean)FALSE,/*bQspiUnitByteSwapping*/
        1U,                                     /*u8QspiUnitRegisterWidth*/
        1U,                                     /*u8QspiUnitBusyBitValue*/
        0U,                                     /*u8QspiUnitBusyBitPosOffset*/
        0U, /*u16QspiDeviceId*/
        5U,                                     /*u8QspiHyperflashLatCycls*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsLUT,/*paQspiUnitLUT*/
        16U,                    /*u8QspiLUTSeqsCount*/
        /* Index of Fls LUT Get Status Sequence from the LUT array */
        4U,/*u8QspiLUTGetStatusSeq by SPI mode*/
        /* Index of Fls LUT Read Sequence from the LUT array */
        3U,/*u8QspiLUTReadSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        5U,/*u8QspiLUTWriteEnSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        8U,/*u8QspiLUTWriteSeq*/
        /* Index of Fls LUT Erase Sequence from the LUT array */
        0U,/*u8QspiLUTEraseSeq*/
        /* Index of Fls LUT Read ID Sequence from the LUT array */
        10U,/*u8QspiLUTReadIDSeq*/
        12U, /* FlsHwUnit_0_READ_CFG_REG2_SPI_SEQUENCE_VS_0*/
        13U, /* FlsHwUnit_0_WRITE_CFG_REG2_SPI_SEQUENCE_VS_0*/
        14U, /* FlsHwUnit_0_WRITE_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        15U, /* FlsHwUnit_0_READ_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        2U,  /* FlsHwUnit_0_READ_CFG_REG2_DTROPI_SEQUENCE_VS_0*/
        6U, /*u8QspiLUTWriteConfigDtrModeSeq FlsHwUnit_0_WRITE_CFG_REG2_DTROPI_SEQUENCE_VS_0 */
        7U,  /* u8QspiLUTWriteStr_OPIEnSeq FlsHwUnit_0_WRITE_ENABLE_STR_SEQUENCE_VS_0 */
        16U,  /* u8QspiLUTGetSatusSOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_STR_OPI_VS_0 */
        17U,/*u8QspiLUTRGetStatusDOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_DDR_OPI_VS_0*/
        18U, /*u8QspiLUTWriteDtr_OPIEnSeq  FlsHwUnit_0_WRITE_ENABLE_DTR_SEQUENCE_VS_0*/
        1U, /* u8QspiLUTOctaReadDOPISeq FlsHwUnit_0_OCTA_READ_DOPI_SEQUENCE_VS_0*/
        9U, /*u8QspiLUTSectorEraseDOPISeq FlsHwUnit_0_SECTOR_ERASE_DOPI_SEQUENCE_VS_0*/
        11U, /*u8QspiLUTPageProgramDOPISeq FlsHwUnit_0_PAGE_PROGRAM_DOPI_SEQUENCE_VS_0*/
        19U, /* u8QspiLUTOctaReadSOPISeq FlsHwUnit_0_OCTA_READ_SOPI_SEQUENCE_VS_0*/
        20U, /*u8QspiLUTSectorEraseSOPISeq FlsHwUnit_0_SECTOR_ERASE_SOPI_SEQUENCE_VS_0*/
        21U, /*u8QspiLUTPageProgramSOPISeq FlsHwUnit_0_PAGE_PROGRAM_SOPI_SEQUENCE_VS_0*/
    }
};

/* pFlsQspiCfgConfig */
static const Fls_QspiCfgConfigType Fls_QspiConfigSet_VS_0_DLL_BYPASS_SDR=
{
    &FlsConfigSet_VS_0_paQspiSectCh,                     /* (*paQspiSectCh)[] */
    &FlsConfigSet_VS_0_paQspiUnitCfg_DLL_BYPASS_SDR                    /* (*paQspiUnitCfg)[] */
};

/**
* @brief        Structure used to set function pointers notification, working mode
*/
Fls_ConfigType FlsConfigSet_VS_0_DLL_BYPASS_SDR =
{
    &FlsConfigSet_VS_0_aFlsSectorEndAddr,                /* (*paSectorEndAddr)[]  */
    &FlsConfigSet_VS_0_aFlsProgSize,                     /* (*paSectorProgSize)[] */
    &FlsConfigSet_VS_0_paSectorHwAddress,                /* (*paSectorHwAddress)[] */
    &Fls_QspiConfigSet_VS_0_DLL_BYPASS_SDR                              /* pFlsQspiCfgConfig */
};

/***************FLS_DLL_MANUAL_UPDATE_MODE**************************************************************************/

/* paQspiUnitCfg[] (FlsConfigSet) */
static const Fls_QspiUnitCfgType  FlsConfigSet_VS_0_paQspiUnitCfg_DDL_MANUAL_SDR[1] =
{
    {
        FLS_DLL_MANUAL_UPDATE_MODE,         /*eQspiDllMode*/
        (boolean)TRUE,        /*bQspiDllcraFreqEnable*/
        1U,                            /*u8QspiDllcraRefCounter*/
        2U,                            /*u8QspiDllcraResolution*/
        0U,                            /*u8QspiDllcraSlvFineOffset*/
        0U,                            /*u8QspiDllcraSlvDlyOffset*/
        5U,                            /*u8QspiDllcraSlvDlyCoarse*/
        5U,                            /*u8QspiDllcraSlvDlyFine*/
        (boolean)TRUE,             /*bQspiDqsEnable*/
        FLS_INTERNAL_DQS_A,                            /*eQspiUnitSamplingModeA*/
        FLS_INTERNAL_DQS_B,                            /*eQspiUnitSamplingModeB*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadA*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadA*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadB*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadB*/
        (boolean)TRUE,             /*bQspiUnitIOFB3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFB2HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA2HighLvl*/
        FLS_RISING,                            /*eQspiUnitSamplingEdge*/
        FLS_1SAMPLE_DLY,                             /*eQspiUnitSamplingDly*/
        (boolean)FALSE,/*bQspiUnitDqsLatencyEn*/
        FLS_ALIGNED_INT_REF_CLK,                                     /*eQspiUnitTdh*/
        4U,                            /*u8QspiUnitTcsh*/
        4U,                            /*u8QspiUnitTcss*/
        4U,                            /*u8QspiUnitDLLFSMPFA*/
        4U,                            /*u8QspiUnitDLLFSMPFB*/
        FLS_LITTLE_ENDIAN_64,                              /*eQspiUnitEndian*/
        FLS_IP_WRITE_MODE,                          /*eQspiUnitWriteMode*/
        FLS_AHB_READ_MODE,                          /*eQspiUnitReadBufferMode*/
        FLS_RXBUFFER_IP_BUS_ACCESS,                      /*eQspiUnitRxBufferAccessMode*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBuffer,                   /*paQspiUnitAhbBuffer*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferMasterId,           /*paQspiUnitAhbBufferMasterId*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferSize,               /*paQspiUnitAhbBufferSize*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferDataTransferSize,   /*paQspiUnitAhbBufferDataTransferSize*/
        (boolean)TRUE,/*bHwUnitAhbBufferAllMasters*/
        4U,                                                   /*u8QspiUnitAhbBufferCount*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsSerialAddrMapping,           /*paQspiUnitSerialAddrMapping*/
        0U,                     /*u8QspiUnitColumnAddressWidth*/
        0U,                     /*u8QspiUnitPageProgramBoundary*/
        (boolean)FALSE,/*bQspiUnitWordAddressable*/
        (boolean)FALSE,/*bQspiUnitByteSwapping*/
        1U,                                     /*u8QspiUnitRegisterWidth*/
        1U,                                     /*u8QspiUnitBusyBitValue*/
        0U,                                     /*u8QspiUnitBusyBitPosOffset*/
        0U, /*u16QspiDeviceId*/
        5U,                                     /*u8QspiHyperflashLatCycls*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsLUT,/*paQspiUnitLUT*/
        16U,                    /*u8QspiLUTSeqsCount*/
        /* Index of Fls LUT Get Status Sequence from the LUT array */
        4U,/*u8QspiLUTGetStatusSeq by SPI mode*/
        /* Index of Fls LUT Read Sequence from the LUT array */
        3U,/*u8QspiLUTReadSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        5U,/*u8QspiLUTWriteEnSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        8U,/*u8QspiLUTWriteSeq*/
        /* Index of Fls LUT Erase Sequence from the LUT array */
        0U,/*u8QspiLUTEraseSeq*/
        /* Index of Fls LUT Read ID Sequence from the LUT array */
        10U,/*u8QspiLUTReadIDSeq*/
        12U, /* FlsHwUnit_0_READ_CFG_REG2_SPI_SEQUENCE_VS_0*/
        13U, /* FlsHwUnit_0_WRITE_CFG_REG2_SPI_SEQUENCE_VS_0*/
        14U, /* FlsHwUnit_0_WRITE_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        15U, /* FlsHwUnit_0_READ_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        2U,  /* FlsHwUnit_0_READ_CFG_REG2_DTROPI_SEQUENCE_VS_0*/
        6U, /* FlsHwUnit_0_WRITE_CFG_REG2_DTROPI_SEQUENCE_VS_0 */
        7U,  /* u8QspiLUTWriteStr_OPIEnSeq FlsHwUnit_0_WRITE_ENABLE_STR_SEQUENCE_VS_0 */
        16U,  /* u8QspiLUTGetSatusSOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_STR_OPI_VS_0 */
        17U,/*u8QspiLUTRGetStatusDOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_DDR_OPI_VS_0*/
        18U, /*u8QspiLUTWriteDtr_OPIEnSeq  FlsHwUnit_0_WRITE_ENABLE_DTR_SEQUENCE_VS_0*/
        1U, /* u8QspiLUTOctaReadDOPISeq FlsHwUnit_0_OCTA_READ_DOPI_SEQUENCE_VS_0*/
        9U, /*u8QspiLUTSectorEraseDOPISeq FlsHwUnit_0_SECTOR_ERASE_DOPI_SEQUENCE_VS_0*/
        11U, /*u8QspiLUTPageProgramDOPISeq FlsHwUnit_0_PAGE_PROGRAM_DOPI_SEQUENCE_VS_0*/
        19U, /* u8QspiLUTOctaReadSOPISeq FlsHwUnit_0_OCTA_READ_SOPI_SEQUENCE_VS_0*/
        20U, /*u8QspiLUTSectorEraseSOPISeq FlsHwUnit_0_SECTOR_ERASE_SOPI_SEQUENCE_VS_0*/
        21U, /*u8QspiLUTPageProgramSOPISeq FlsHwUnit_0_PAGE_PROGRAM_SOPI_SEQUENCE_VS_0*/
    }
};

/* pFlsQspiCfgConfig */
static const Fls_QspiCfgConfigType Fls_QspiConfigSet_VS_0_DDL_MANUAL_SDR=
{
    &FlsConfigSet_VS_0_paQspiSectCh,                     /* (*paQspiSectCh)[] */
    &FlsConfigSet_VS_0_paQspiUnitCfg_DDL_MANUAL_SDR                    /* (*paQspiUnitCfg)[] */
};

/**
* @brief        Structure used to set function pointers notification, working mode
*/
Fls_ConfigType FlsConfigSet_VS_0_DLL_MANUAL_SDR =
{
    &FlsConfigSet_VS_0_aFlsSectorEndAddr,                /* (*paSectorEndAddr)[]  */
    &FlsConfigSet_VS_0_aFlsProgSize,                     /* (*paSectorProgSize)[] */
    &FlsConfigSet_VS_0_paSectorHwAddress,                /* (*paSectorHwAddress)[] */
    &Fls_QspiConfigSet_VS_0_DDL_MANUAL_SDR                              /* pFlsQspiCfgConfig */
};

/*FLS_DLL_AUTO_UPDATE_MODE*******************************************************/
/* paQspiUnitCfg[] (FlsConfigSet) */
static const Fls_QspiUnitCfgType  FlsConfigSet_VS_0_paQspiUnitCfg_DLL_AUTO_UPDATE_SDR[1] =
{
    {
        FLS_DLL_AUTO_UPDATE_MODE,         /*eQspiDllMode*/
        (boolean)TRUE,        /*bQspiDllcraFreqEnable*/
        1U,                            /*u8QspiDllcraRefCounter*/
        2U,                            /*u8QspiDllcraResolution*/
        0U,                            /*u8QspiDllcraSlvFineOffset*/
        0U,                            /*u8QspiDllcraSlvDlyOffset*/
        5U,                            /*u8QspiDllcraSlvDlyCoarse*/
        5U,                            /*u8QspiDllcraSlvDlyFine*/
        (boolean)TRUE,             /*bQspiDqsEnable*/
        FLS_INTERNAL_DQS_A,                            /*eQspiUnitSamplingModeA*/
        FLS_INTERNAL_DQS_B,                            /*eQspiUnitSamplingModeB*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadA*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadA*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadB*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadB*/
        (boolean)TRUE,             /*bQspiUnitIOFB3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFB2HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA2HighLvl*/
        FLS_RISING,                            /*eQspiUnitSamplingEdge*/
        FLS_1SAMPLE_DLY,                             /*eQspiUnitSamplingDly*/
        (boolean)FALSE,/*bQspiUnitDqsLatencyEn*/
        FLS_ALIGNED_INT_REF_CLK,                                     /*eQspiUnitTdh*/
        4U,                            /*u8QspiUnitTcsh*/
        4U,                            /*u8QspiUnitTcss*/
        4U,                            /*u8QspiUnitDLLFSMPFA*/
        4U,                            /*u8QspiUnitDLLFSMPFB*/
        FLS_LITTLE_ENDIAN_64,                              /*eQspiUnitEndian*/
        FLS_IP_WRITE_MODE,                          /*eQspiUnitWriteMode*/
        FLS_AHB_READ_MODE,                          /*eQspiUnitReadBufferMode*/
        FLS_RXBUFFER_IP_BUS_ACCESS,                      /*eQspiUnitRxBufferAccessMode*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBuffer,                   /*paQspiUnitAhbBuffer*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferMasterId,           /*paQspiUnitAhbBufferMasterId*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferSize,               /*paQspiUnitAhbBufferSize*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferDataTransferSize,   /*paQspiUnitAhbBufferDataTransferSize*/
        (boolean)TRUE,/*bHwUnitAhbBufferAllMasters*/
        4U,                                                   /*u8QspiUnitAhbBufferCount*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsSerialAddrMapping,           /*paQspiUnitSerialAddrMapping*/
        0U,                     /*u8QspiUnitColumnAddressWidth*/
        0U,                     /*u8QspiUnitPageProgramBoundary*/
        (boolean)FALSE,/*bQspiUnitWordAddressable*/
        (boolean)FALSE,/*bQspiUnitByteSwapping*/
        1U,                                     /*u8QspiUnitRegisterWidth*/
        1U,                                     /*u8QspiUnitBusyBitValue*/
        0U,                                     /*u8QspiUnitBusyBitPosOffset*/
        0U, /*u16QspiDeviceId*/
        5U,                                     /*u8QspiHyperflashLatCycls*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsLUT,/*paQspiUnitLUT*/
        16U,                    /*u8QspiLUTSeqsCount*/
        /* Index of Fls LUT Get Status Sequence from the LUT array */
        4U,/*u8QspiLUTGetStatusSeq by SPI mode*/
        /* Index of Fls LUT Read Sequence from the LUT array */
        3U,/*u8QspiLUTReadSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        5U,/*u8QspiLUTWriteEnSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        8U,/*u8QspiLUTWriteSeq*/
        /* Index of Fls LUT Erase Sequence from the LUT array */
        0U,/*u8QspiLUTEraseSeq*/
        /* Index of Fls LUT Read ID Sequence from the LUT array */
        10U,/*u8QspiLUTReadIDSeq*/
        12U, /* FlsHwUnit_0_READ_CFG_REG2_SPI_SEQUENCE_VS_0*/
        13U, /* FlsHwUnit_0_WRITE_CFG_REG2_SPI_SEQUENCE_VS_0*/
        14U, /* FlsHwUnit_0_WRITE_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        15U, /* FlsHwUnit_0_READ_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        2U,  /* FlsHwUnit_0_READ_CFG_REG2_DTROPI_SEQUENCE_VS_0*/
        6U, /* FlsHwUnit_0_WRITE_CFG_REG2_DTROPI_SEQUENCE_VS_0 */
        7U,  /* u8QspiLUTWriteStr_OPIEnSeq FlsHwUnit_0_WRITE_ENABLE_STR_SEQUENCE_VS_0 */
        16U,  /* u8QspiLUTGetSatusSOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_STR_OPI_VS_0 */
        17U,/*u8QspiLUTRGetStatusDOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_DDR_OPI_VS_0*/
        18U, /*u8QspiLUTWriteDtr_OPIEnSeq  FlsHwUnit_0_WRITE_ENABLE_DTR_SEQUENCE_VS_0*/
        1U, /* u8QspiLUTOctaReadDOPISeq FlsHwUnit_0_OCTA_READ_DOPI_SEQUENCE_VS_0*/
        9U, /*u8QspiLUTSectorEraseDOPISeq FlsHwUnit_0_SECTOR_ERASE_DOPI_SEQUENCE_VS_0*/
        11U, /*u8QspiLUTPageProgramDOPISeq FlsHwUnit_0_PAGE_PROGRAM_DOPI_SEQUENCE_VS_0*/
        19U, /* u8QspiLUTOctaReadSOPISeq FlsHwUnit_0_OCTA_READ_SOPI_SEQUENCE_VS_0*/
        20U, /*u8QspiLUTSectorEraseSOPISeq FlsHwUnit_0_SECTOR_ERASE_SOPI_SEQUENCE_VS_0*/
        21U, /*u8QspiLUTPageProgramSOPISeq FlsHwUnit_0_PAGE_PROGRAM_SOPI_SEQUENCE_VS_0*/
    }
};

/* pFlsQspiCfgConfig */
static const Fls_QspiCfgConfigType Fls_QspiConfigSet_VS_0_DLL_AUTO_UPDATE_SDR =
{
    &FlsConfigSet_VS_0_paQspiSectCh,                     /* (*paQspiSectCh)[] */
    &FlsConfigSet_VS_0_paQspiUnitCfg_DLL_AUTO_UPDATE_SDR                    /* (*paQspiUnitCfg)[] */
};

/**
* @brief        Structure used to set function pointers notification, working mode
*/
Fls_ConfigType FlsConfigSet_VS_0_DLL_AUTO_UPDATE_SDR =
{
    &FlsConfigSet_VS_0_aFlsSectorEndAddr,                /* (*paSectorEndAddr)[]  */
    &FlsConfigSet_VS_0_aFlsProgSize,                     /* (*paSectorProgSize)[] */
    &FlsConfigSet_VS_0_paSectorHwAddress,                /* (*paSectorHwAddress)[] */
    &Fls_QspiConfigSet_VS_0_DLL_AUTO_UPDATE_SDR                              /* pFlsQspiCfgConfig */
};

/*FLS_DLL_BYPASS_MODE use DDR****************************************************************/
/* paQspiUnitCfg[] (FlsConfigSet) */
static const Fls_QspiUnitCfgType  FlsConfigSet_VS_0_paQspiUnitCfg_DLL_BYPASS_DDR[1] =
{
    {
        FLS_DLL_BYPASS_MODE,         /*eQspiDllMode*/
        (boolean)TRUE,        /*bQspiDllcraFreqEnable*/
        1U,                            /*u8QspiDllcraRefCounter*/
        2U,                            /*u8QspiDllcraResolution*/
        0U,                            /*u8QspiDllcraSlvFineOffset*/
        0U,                            /*u8QspiDllcraSlvDlyOffset*/
        5U,                            /*u8QspiDllcraSlvDlyCoarse*/
        5U,                            /*u8QspiDllcraSlvDlyFine*/
        (boolean)TRUE,             /*bQspiDqsEnable*/
        FLS_EXTERNAL_DQS_A,                            /*eQspiUnitSamplingModeA*/
        FLS_INTERNAL_DQS_B,                            /*eQspiUnitSamplingModeB*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadA*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadA*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadB*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadB*/
        (boolean)TRUE,             /*bQspiUnitIOFB3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFB2HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA2HighLvl*/
        FLS_RISING,                            /*eQspiUnitSamplingEdge*/
        FLS_1SAMPLE_DLY,                             /*eQspiUnitSamplingDly*/
        (boolean)FALSE,/*bQspiUnitDqsLatencyEn*/
        FLS_ALIGNED_2X_CLK,                                     /*eQspiUnitTdh*/
        3U,                            /*u8QspiUnitTcsh*/
        3U,                            /*u8QspiUnitTcss*/
        4U,                            /*u8QspiUnitDLLFSMPFA*/
        4U,                            /*u8QspiUnitDLLFSMPFB*/
        FLS_LITTLE_ENDIAN_64,                              /*eQspiUnitEndian*/
        FLS_IP_WRITE_MODE,                          /*eQspiUnitWriteMode*/
        FLS_AHB_READ_MODE,                          /*eQspiUnitReadBufferMode*/
        FLS_RXBUFFER_IP_BUS_ACCESS,                      /*eQspiUnitRxBufferAccessMode*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBuffer,                   /*paQspiUnitAhbBuffer*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferMasterId,           /*paQspiUnitAhbBufferMasterId*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferSize,               /*paQspiUnitAhbBufferSize*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferDataTransferSize,   /*paQspiUnitAhbBufferDataTransferSize*/
        (boolean)TRUE,/*bHwUnitAhbBufferAllMasters*/
        4U,                                                   /*u8QspiUnitAhbBufferCount*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsSerialAddrMapping,           /*paQspiUnitSerialAddrMapping*/
        0U,                     /*u8QspiUnitColumnAddressWidth*/
        0U,                     /*u8QspiUnitPageProgramBoundary*/
        (boolean)FALSE,/*bQspiUnitWordAddressable*/
        (boolean)FALSE,/*bQspiUnitByteSwapping*/
        1U,                                     /*u8QspiUnitRegisterWidth*/
        1U,                                     /*u8QspiUnitBusyBitValue*/
        0U,                                     /*u8QspiUnitBusyBitPosOffset*/
        0U, /*u16QspiDeviceId*/
        5U,                                     /*u8QspiHyperflashLatCycls*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsLUT,/*paQspiUnitLUT*/
        16U,                    /*u8QspiLUTSeqsCount*/
        /* Index of Fls LUT Get Status Sequence from the LUT array */
        4U,/*u8QspiLUTGetStatusSeq by SPI mode*/
        /* Index of Fls LUT Read Sequence from the LUT array */
        3U,/*u8QspiLUTReadSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        5U,/*u8QspiLUTWriteEnSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        8U,/*u8QspiLUTWriteSeq*/
        /* Index of Fls LUT Erase Sequence from the LUT array */
        0U,/*u8QspiLUTEraseSeq*/
        /* Index of Fls LUT Read ID Sequence from the LUT array */
        10U,/*u8QspiLUTReadIDSeq*/
        12U, /* FlsHwUnit_0_READ_CFG_REG2_SPI_SEQUENCE_VS_0*/
        13U, /* FlsHwUnit_0_WRITE_CFG_REG2_SPI_SEQUENCE_VS_0*/
        14U, /* FlsHwUnit_0_WRITE_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        15U, /* FlsHwUnit_0_READ_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        2U,  /* FlsHwUnit_0_READ_CFG_REG2_DTROPI_SEQUENCE_VS_0*/
        6U, /* FlsHwUnit_0_WRITE_CFG_REG2_DTROPI_SEQUENCE_VS_0 */
        7U,  /* u8QspiLUTWriteStr_OPIEnSeq FlsHwUnit_0_WRITE_ENABLE_STR_SEQUENCE_VS_0 */
        16U,  /* u8QspiLUTGetSatusSOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_STR_OPI_VS_0 */
        17U,/*u8QspiLUTRGetStatusDOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_DDR_OPI_VS_0*/
        18U, /*u8QspiLUTWriteDtr_OPIEnSeq  FlsHwUnit_0_WRITE_ENABLE_DTR_SEQUENCE_VS_0*/
        1U, /* u8QspiLUTOctaReadDOPISeq FlsHwUnit_0_OCTA_READ_DOPI_SEQUENCE_VS_0*/
        9U, /*u8QspiLUTSectorEraseDOPISeq FlsHwUnit_0_SECTOR_ERASE_DOPI_SEQUENCE_VS_0*/
        11U, /*u8QspiLUTPageProgramDOPISeq FlsHwUnit_0_PAGE_PROGRAM_DOPI_SEQUENCE_VS_0*/
        19U, /* u8QspiLUTOctaReadSOPISeq FlsHwUnit_0_OCTA_READ_SOPI_SEQUENCE_VS_0*/
        20U, /*u8QspiLUTSectorEraseSOPISeq FlsHwUnit_0_SECTOR_ERASE_SOPI_SEQUENCE_VS_0*/
        21U, /*u8QspiLUTPageProgramSOPISeq FlsHwUnit_0_PAGE_PROGRAM_SOPI_SEQUENCE_VS_0*/
    }
};

/* pFlsQspiCfgConfig */
static const Fls_QspiCfgConfigType Fls_QspiConfigSet_VS_0_DLL_BYPASS_DDR=
{
    &FlsConfigSet_VS_0_paQspiSectCh,                     /* (*paQspiSectCh)[] */
    &FlsConfigSet_VS_0_paQspiUnitCfg_DLL_BYPASS_DDR                    /* (*paQspiUnitCfg)[] */
};

/**
* @brief        Structure used to set function pointers notification, working mode
*/
Fls_ConfigType FlsConfigSet_VS_0_DLL_BYPASS_DDR =
{
    &FlsConfigSet_VS_0_aFlsSectorEndAddr,                /* (*paSectorEndAddr)[]  */
    &FlsConfigSet_VS_0_aFlsProgSize,                     /* (*paSectorProgSize)[] */
    &FlsConfigSet_VS_0_paSectorHwAddress,                /* (*paSectorHwAddress)[] */
    &Fls_QspiConfigSet_VS_0_DLL_BYPASS_DDR                              /* pFlsQspiCfgConfig */
};

/***************FLS_DLL_MANUAL_UPDATE_MODE**************************************************************************/

/* paQspiUnitCfg[] (FlsConfigSet) */
static const Fls_QspiUnitCfgType  FlsConfigSet_VS_0_paQspiUnitCfg_DDL_MANUAL_DDR[1] =
{
    {
        FLS_DLL_MANUAL_UPDATE_MODE,         /*eQspiDllMode*/
        (boolean)TRUE,        /*bQspiDllcraFreqEnable*/
        1U,                            /*u8QspiDllcraRefCounter*/
        2U,                            /*u8QspiDllcraResolution*/
        0U,                            /*u8QspiDllcraSlvFineOffset*/
        0U,                            /*u8QspiDllcraSlvDlyOffset*/
        5U,                            /*u8QspiDllcraSlvDlyCoarse*/
        5U,                            /*u8QspiDllcraSlvDlyFine*/
        (boolean)TRUE,             /*bQspiDqsEnable*/
        FLS_EXTERNAL_DQS_A,                            /*eQspiUnitSamplingModeA*/
        FLS_INTERNAL_DQS_B,                            /*eQspiUnitSamplingModeB*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadA*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadA*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadB*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadB*/
        (boolean)TRUE,             /*bQspiUnitIOFB3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFB2HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA2HighLvl*/
        FLS_RISING,                            /*eQspiUnitSamplingEdge*/
        FLS_1SAMPLE_DLY,                             /*eQspiUnitSamplingDly*/
        (boolean)FALSE,/*bQspiUnitDqsLatencyEn*/
        FLS_ALIGNED_2X_CLK,                                     /*eQspiUnitTdh*/
        2U,                            /*u8QspiUnitTcsh*/
        3U,                            /*u8QspiUnitTcss*/
        4U,                            /*u8QspiUnitDLLFSMPFA*/
        4U,                            /*u8QspiUnitDLLFSMPFB*/
        FLS_LITTLE_ENDIAN_64,                              /*eQspiUnitEndian*/
        FLS_IP_WRITE_MODE,                          /*eQspiUnitWriteMode*/
        FLS_AHB_READ_MODE,                          /*eQspiUnitReadBufferMode*/
        FLS_RXBUFFER_IP_BUS_ACCESS,                      /*eQspiUnitRxBufferAccessMode*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBuffer,                   /*paQspiUnitAhbBuffer*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferMasterId,           /*paQspiUnitAhbBufferMasterId*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferSize,               /*paQspiUnitAhbBufferSize*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferDataTransferSize,   /*paQspiUnitAhbBufferDataTransferSize*/
        (boolean)TRUE,/*bHwUnitAhbBufferAllMasters*/
        4U,                                                   /*u8QspiUnitAhbBufferCount*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsSerialAddrMapping,           /*paQspiUnitSerialAddrMapping*/
        0U,                     /*u8QspiUnitColumnAddressWidth*/
        0U,                     /*u8QspiUnitPageProgramBoundary*/
        (boolean)FALSE,/*bQspiUnitWordAddressable*/
        (boolean)FALSE,/*bQspiUnitByteSwapping*/
        1U,                                     /*u8QspiUnitRegisterWidth*/
        1U,                                     /*u8QspiUnitBusyBitValue*/
        0U,                                     /*u8QspiUnitBusyBitPosOffset*/
        0U, /*u16QspiDeviceId*/
        5U,                                     /*u8QspiHyperflashLatCycls*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsLUT,/*paQspiUnitLUT*/
        16U,                    /*u8QspiLUTSeqsCount*/
        /* Index of Fls LUT Get Status Sequence from the LUT array */
        4U,/*u8QspiLUTGetStatusSeq by SPI mode*/
        /* Index of Fls LUT Read Sequence from the LUT array */
        3U,/*u8QspiLUTReadSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        5U,/*u8QspiLUTWriteEnSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        8U,/*u8QspiLUTWriteSeq*/
        /* Index of Fls LUT Erase Sequence from the LUT array */
        0U,/*u8QspiLUTEraseSeq*/
        /* Index of Fls LUT Read ID Sequence from the LUT array */
        10U,/*u8QspiLUTReadIDSeq*/
        12U, /* FlsHwUnit_0_READ_CFG_REG2_SPI_SEQUENCE_VS_0*/
        13U, /* FlsHwUnit_0_WRITE_CFG_REG2_SPI_SEQUENCE_VS_0*/
        14U, /* FlsHwUnit_0_WRITE_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        15U, /* FlsHwUnit_0_READ_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        2U,  /* FlsHwUnit_0_READ_CFG_REG2_DTROPI_SEQUENCE_VS_0*/
        6U, /* FlsHwUnit_0_WRITE_CFG_REG2_DTROPI_SEQUENCE_VS_0 */
        7U,  /* u8QspiLUTWriteStr_OPIEnSeq FlsHwUnit_0_WRITE_ENABLE_STR_SEQUENCE_VS_0 */
        16U,  /* u8QspiLUTGetSatusSOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_STR_OPI_VS_0 */
        17U,/*u8QspiLUTRGetStatusDOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_DDR_OPI_VS_0*/
        18U, /*u8QspiLUTWriteDtr_OPIEnSeq  FlsHwUnit_0_WRITE_ENABLE_DTR_SEQUENCE_VS_0*/
        1U, /* u8QspiLUTOctaReadDOPISeq FlsHwUnit_0_OCTA_READ_DOPI_SEQUENCE_VS_0*/
        9U, /*u8QspiLUTSectorEraseDOPISeq FlsHwUnit_0_SECTOR_ERASE_DOPI_SEQUENCE_VS_0*/
        11U, /*u8QspiLUTPageProgramDOPISeq FlsHwUnit_0_PAGE_PROGRAM_DOPI_SEQUENCE_VS_0*/
        19U, /* u8QspiLUTOctaReadSOPISeq FlsHwUnit_0_OCTA_READ_SOPI_SEQUENCE_VS_0*/
        20U, /*u8QspiLUTSectorEraseSOPISeq FlsHwUnit_0_SECTOR_ERASE_SOPI_SEQUENCE_VS_0*/
        21U, /*u8QspiLUTPageProgramSOPISeq FlsHwUnit_0_PAGE_PROGRAM_SOPI_SEQUENCE_VS_0*/
    }
};

/* pFlsQspiCfgConfig */
static const Fls_QspiCfgConfigType Fls_QspiConfigSet_VS_0_DDL_MANUAL_DDR=
{
    &FlsConfigSet_VS_0_paQspiSectCh,                     /* (*paQspiSectCh)[] */
    &FlsConfigSet_VS_0_paQspiUnitCfg_DDL_MANUAL_DDR                    /* (*paQspiUnitCfg)[] */
};

/**
* @brief        Structure used to set function pointers notification, working mode
*/
Fls_ConfigType FlsConfigSet_VS_0_DLL_MANUAL_DDR =
{
    &FlsConfigSet_VS_0_aFlsSectorEndAddr,                /* (*paSectorEndAddr)[]  */
    &FlsConfigSet_VS_0_aFlsProgSize,                     /* (*paSectorProgSize)[] */
    &FlsConfigSet_VS_0_paSectorHwAddress,                /* (*paSectorHwAddress)[] */
    &Fls_QspiConfigSet_VS_0_DDL_MANUAL_DDR                              /* pFlsQspiCfgConfig */
};

/*FLS_DLL_AUTO_UPDATE_MODE*******************************************************/
/* paQspiUnitCfg[] (FlsConfigSet) */
static const Fls_QspiUnitCfgType  FlsConfigSet_VS_0_paQspiUnitCfg_DLL_AUTO_UPDATE_DDR[1] =
{
    {
        FLS_DLL_AUTO_UPDATE_MODE,         /*eQspiDllMode*/
        (boolean)TRUE,        /*bQspiDllcraFreqEnable*/
        1U,                            /*u8QspiDllcraRefCounter*/
        2U,                            /*u8QspiDllcraResolution*/
        0U,                            /*u8QspiDllcraSlvFineOffset*/
        0U,                            /*u8QspiDllcraSlvDlyOffset*/
        5U,                            /*u8QspiDllcraSlvDlyCoarse*/
        5U,                            /*u8QspiDllcraSlvDlyFine*/
        (boolean)TRUE,             /*bQspiDqsEnable*/
        FLS_EXTERNAL_DQS_A,                            /*eQspiUnitSamplingModeA*/
        FLS_INTERNAL_DQS_B,                            /*eQspiUnitSamplingModeB*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadA*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadA*/
        (boolean)FALSE,             /*bQspiDdrCentrerAlignReadB*/
        (boolean)FALSE,             /*bClockOnDifferentialCknPadB*/
        (boolean)TRUE,             /*bQspiUnitIOFB3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFB2HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA3HighLvl*/
        (boolean)TRUE,             /*bQspiUnitIOFA2HighLvl*/
        FLS_RISING,                            /*eQspiUnitSamplingEdge*/
        FLS_1SAMPLE_DLY,                             /*eQspiUnitSamplingDly*/
        (boolean)FALSE,/*bQspiUnitDqsLatencyEn*/
        FLS_ALIGNED_2X_CLK,                                     /*eQspiUnitTdh*/
        2U,                            /*u8QspiUnitTcsh*/
        3U,                            /*u8QspiUnitTcss*/
        4U,                            /*u8QspiUnitDLLFSMPFA*/
        4U,                            /*u8QspiUnitDLLFSMPFB*/
        FLS_LITTLE_ENDIAN_64,                              /*eQspiUnitEndian*/
        FLS_IP_WRITE_MODE,                          /*eQspiUnitWriteMode*/
        FLS_AHB_READ_MODE,                          /*eQspiUnitReadBufferMode*/
        FLS_RXBUFFER_IP_BUS_ACCESS,                      /*eQspiUnitRxBufferAccessMode*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBuffer,                   /*paQspiUnitAhbBuffer*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferMasterId,           /*paQspiUnitAhbBufferMasterId*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferSize,               /*paQspiUnitAhbBufferSize*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_paQspiUnitAhbBufferDataTransferSize,   /*paQspiUnitAhbBufferDataTransferSize*/
        (boolean)TRUE,/*bHwUnitAhbBufferAllMasters*/
        4U,                                                   /*u8QspiUnitAhbBufferCount*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsSerialAddrMapping,           /*paQspiUnitSerialAddrMapping*/
        0U,                     /*u8QspiUnitColumnAddressWidth*/
        0U,                     /*u8QspiUnitPageProgramBoundary*/
        (boolean)FALSE,/*bQspiUnitWordAddressable*/
        (boolean)FALSE,/*bQspiUnitByteSwapping*/
        1U,                                     /*u8QspiUnitRegisterWidth*/
        1U,                                     /*u8QspiUnitBusyBitValue*/
        0U,                                     /*u8QspiUnitBusyBitPosOffset*/
        0U, /*u16QspiDeviceId*/
        5U,                                     /*u8QspiHyperflashLatCycls*/
        &FlsConfigSet_FlsHwUnit_0_VS_0_aFlsLUT,/*paQspiUnitLUT*/
        16U,                    /*u8QspiLUTSeqsCount*/
        /* Index of Fls LUT Get Status Sequence from the LUT array */
        4U,/*u8QspiLUTGetStatusSeq by SPI mode*/
        /* Index of Fls LUT Read Sequence from the LUT array */
        3U,/*u8QspiLUTReadSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        5U,/*u8QspiLUTWriteEnSeq*/
        /* Index of Fls LUT Write Sequence from the LUT array */
        8U,/*u8QspiLUTWriteSeq*/
        /* Index of Fls LUT Erase Sequence from the LUT array */
        0U,/*u8QspiLUTEraseSeq*/
        /* Index of Fls LUT Read ID Sequence from the LUT array */
        10U,/*u8QspiLUTReadIDSeq*/
        12U, /* FlsHwUnit_0_READ_CFG_REG2_SPI_SEQUENCE_VS_0*/
        13U, /* FlsHwUnit_0_WRITE_CFG_REG2_SPI_SEQUENCE_VS_0*/
        14U, /* FlsHwUnit_0_WRITE_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        15U, /* FlsHwUnit_0_READ_CFG_REG2_STROPI_SEQUENCE_VS_0*/
        2U,  /* FlsHwUnit_0_READ_CFG_REG2_DTROPI_SEQUENCE_VS_0*/
        6U, /* FlsHwUnit_0_WRITE_CFG_REG2_DTROPI_SEQUENCE_VS_0 */
        7U,  /* u8QspiLUTWriteStr_OPIEnSeq FlsHwUnit_0_WRITE_ENABLE_STR_SEQUENCE_VS_0 */
        16U,  /* u8QspiLUTGetSatusSOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_STR_OPI_VS_0 */
        17U,/*u8QspiLUTRGetStatusDOPISeq FlsHwUnit_0_READ_STATUS_REGISTER_SEQUENCE_DDR_OPI_VS_0*/
        18U, /*u8QspiLUTWriteDtr_OPIEnSeq  FlsHwUnit_0_WRITE_ENABLE_DTR_SEQUENCE_VS_0*/
        1U, /* u8QspiLUTOctaReadDOPISeq FlsHwUnit_0_OCTA_READ_DOPI_SEQUENCE_VS_0*/
        9U, /*u8QspiLUTSectorEraseDOPISeq FlsHwUnit_0_SECTOR_ERASE_DOPI_SEQUENCE_VS_0*/
        11U, /*u8QspiLUTPageProgramDOPISeq FlsHwUnit_0_PAGE_PROGRAM_DOPI_SEQUENCE_VS_0*/
        19U, /* u8QspiLUTOctaReadSOPISeq FlsHwUnit_0_OCTA_READ_SOPI_SEQUENCE_VS_0*/
        20U, /*u8QspiLUTSectorEraseSOPISeq FlsHwUnit_0_SECTOR_ERASE_SOPI_SEQUENCE_VS_0*/
        21U, /*u8QspiLUTPageProgramSOPISeq FlsHwUnit_0_PAGE_PROGRAM_SOPI_SEQUENCE_VS_0*/
    }
};

/* pFlsQspiCfgConfig */
static const Fls_QspiCfgConfigType Fls_QspiConfigSet_VS_0_DLL_AUTO_UPDATE_DDR =
{
    &FlsConfigSet_VS_0_paQspiSectCh,                     /* (*paQspiSectCh)[] */
    &FlsConfigSet_VS_0_paQspiUnitCfg_DLL_AUTO_UPDATE_DDR                    /* (*paQspiUnitCfg)[] */
};

/**
* @brief        Structure used to set function pointers notification, working mode
*/
Fls_ConfigType FlsConfigSet_VS_0_DLL_AUTO_UPDATE_DDR =
{
    &FlsConfigSet_VS_0_aFlsSectorEndAddr,                /* (*paSectorEndAddr)[]  */
    &FlsConfigSet_VS_0_aFlsProgSize,                     /* (*paSectorProgSize)[] */
    &FlsConfigSet_VS_0_paSectorHwAddress,                /* (*paSectorHwAddress)[] */
    &Fls_QspiConfigSet_VS_0_DLL_AUTO_UPDATE_DDR                              /* pFlsQspiCfgConfig */
};

#ifdef __cplusplus
}
#endif

/** @}*/
