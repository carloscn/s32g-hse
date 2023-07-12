/*
** ###################################################################
**     Processor:           S32R45_M7
**     Reference manual:    S32R45 RM Rev.1 RC
**     Version:             1.3
**     Build:               b191210
**
**     Abstract:
**         Peripheral Access Layer for S32R45_M7
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2019 NXP
**
**     NXP Confidential. This software is owned or controlled by NXP and may only be
**     used strictly in accordance with the applicable license terms. By expressly
**     accepting such terms or by downloading, installing, activating and/or otherwise
**     using the software, you are agreeing that you have read, and that you agree to
**     comply with and are bound by, such license terms. If you do not agree to be
**     bound by the applicable license terms, then you may not retain, install,
**     activate or otherwise use the software. The production use license in
**     Section 2.3 is expressly granted for this software.
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**    - rev. 1.3 Taru Shree 10-DEC-19  Initial release based on 
**                                     RM Rev.1 RC.
**
** ###################################################################
*/

/*!
 * @file S32R45.h
 * @version 1.0
 * @date 2019-04-17
 * @brief Peripheral Access Layer for S32R45
 *
 * This file contains register definitions and macros for easy access to their
 * bit fields.
 *
 * This file assumes LITTLE endian system.
 */
 
/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Advisory Rule 2.5, local macro not referenced
* The SoC header defines macros for all modules and registers.
*
*/

/* Prevention from multiple including the same memory map */
#if !defined(S32R45_H_)  /* Check if memory map has not been already included */
#define S32R45_H_

/* ----------------------------------------------------------------------------
   -- IP Header Files
   ---------------------------------------------------------------------------- */

/* IP Header Files List */
#include "S32R45_A53_CLUSTER_GPR.h"
#include "S32R45_ACCEL_PLL.h"
#include "S32R45_ADC.h"
#include "S32R45_ATP.h"
#include "S32R45_BOOT.h"
#include "S32R45_CAIU.h"
#include "S32R45_CCTI_FAULT_CTRL.h"
#include "S32R45_CM7_GPR.h"
#include "S32R45_CMIU.h"
#include "S32R45_CMU_FC.h"
#include "S32R45_CMU_FM.h"
#include "S32R45_CORE_PLL.h"
#include "S32R45_CRC.h"
#include "S32R45_CSR.h"
#include "S32R45_CTE.h"
#include "S32R45_CTU.h"
#include "S32R45_DDR_GPR.h"
#include "S32R45_DDR_PLL.h"
#include "S32R45_DDR_SUBSYSTEM.h"
#include "S32R45_DFS.h"
#include "S32R45_DIRU.h"
#include "S32R45_DMA.h"
#include "S32R45_DMAMUX.h"
#include "S32R45_DMA_CRC.h"
#include "S32R45_DMA_TCD.h"
#include "S32R45_EIM.h"
#include "S32R45_ERM.h"
#include "S32R45_FASTDMA.h"
#include "S32R45_FBXC.h"
#include "S32R45_FCCU.h"
#include "S32R45_FLEXCAN.h"
#include "S32R45_FLEXRAY.h"
#include "S32R45_FLEXTIMER.h"
#include "S32R45_FSC.h"
#include "S32R45_FXOSC.h"
#include "S32R45_GMAC.h"
#include "S32R45_I2C.h"
#include "S32R45_JDC.h"
#include "S32R45_LINFLEXD.h"
#include "S32R45_MCM.h"
#include "S32R45_MC_CGM.h"
#include "S32R45_MC_CGM_1.h"
#include "S32R45_MC_CGM_2.h"
#include "S32R45_MC_ME.h"
#include "S32R45_MC_RGM.h"
#include "S32R45_MDM_AP.h"
#include "S32R45_MIPICSI2.h"
#include "S32R45_MPU.h"
#include "S32R45_MSCM.h"
#include "S32R45_MU.h"
#include "S32R45_NCBUID_RESET_VALUE.h"
#include "S32R45_NVIC.h"
#include "S32R45_OCOTP.h"
#include "S32R45_PERF_REGISTERS.h"
#include "S32R45_PERIPH_PLL.h"
#include "S32R45_PIT.h"
#include "S32R45_PMC.h"
#include "S32R45_PMUEVENTOBSERVER.h"
#include "S32R45_QUADSPI.h"
#include "S32R45_QUADSPI_ARDB.h"
#include "S32R45_REG_PROT.h"
#include "S32R45_RESET.h"
#include "S32R45_SBSW.h"
#include "S32R45_SCB.h"
#include "S32R45_SECURITY.h"
#include "S32R45_SELFTEST_GPR.h"
#include "S32R45_SELFTEST_GPR_TOP.h"
#include "S32R45_SEMA42.h"
#include "S32R45_SERDES_GPR.h"
#include "S32R45_SIUL2.h"
#include "S32R45_SPI.h"
#include "S32R45_SPT.h"
#include "S32R45_SRAMC.h"
#include "S32R45_SRC.h"
#include "S32R45_SRC_1.h"
#include "S32R45_STCU2.h"
#include "S32R45_STM.h"
#include "S32R45_SWT.h"
#include "S32R45_SYSTICK.h"
#include "S32R45_TMU.h"
#include "S32R45_UMCTL2_MP.h"
#include "S32R45_UMCTL2_REGS.h"
#include "S32R45_USDHC.h"
#include "S32R45_VSPA.h"
#include "S32R45_VSPA_DEBUG_MESSAGING_AND_PROFILING.h"
#include "S32R45_VSPA_DMA_CONTROL_AND_STATUS.h"
#include "S32R45_VSPA_GENERAL_VCPU_CONTROL_STATUS.h"
#include "S32R45_VSPA_INPUT_OUTPUT.h"
#include "S32R45_VSPA_IPPU_CONTROL_AND_STATUS.h"
#include "S32R45_VSPA_THREAD_PROT_CTRL_STAT.h"
#include "S32R45_VSPA_VCPU_GO_CTRL_AND_STAT.h"
#include "S32R45_VSPA_VCPU_HOST_MESSAGING.h"
#include "S32R45_VSPA_VERSION_AND_CONFIGURATION.h"
#include "S32R45_WKPU.h"
#include "S32R45_XRDC.h"

#endif  /* #if !defined(S32R45_H_) */
