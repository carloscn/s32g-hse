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

#ifndef _FLS_QSPI_API_H_
#define _FLS_QSPI_API_H_

#include"StdRegMacros.h"
#include"Fls_Qspi_Type.h"
#include"Fls_Cfg.h"


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

extern Fls_LLDReturnType Fls_Qspi_Init(Fls_ConfigType *PtrToCfgStruct);
extern Fls_LLDReturnType Fls_Qspi_EraseBlock(uint32 u32StartAddr, uint32 u32Length, boolean TransferType, Fls_ConfigRegiterModesType EraseModes);
extern Fls_LLDReturnType Fls_Qspi_Program(uint32 u32StartAddr, uint8 *pSourceAddressPtr,uint32 u32Length, boolean TransferType, Fls_ConfigRegiterModesType WritrModes);
extern Fls_LLDReturnType Fls_Qspi_Read(uint32 u32StartAddr, uint8 *pTargetAddressPtr,uint32 u32Length, boolean TransferType, Fls_ConfigRegiterModesType ReadModes);
extern Fls_LLDReturnType Fls_WriteRegiter(uint32 u32StartAddr, Fls_ConfigRegiterModesType eSwitchToMode);

#endif  /* _FLS_QSPI_API_H_ */
