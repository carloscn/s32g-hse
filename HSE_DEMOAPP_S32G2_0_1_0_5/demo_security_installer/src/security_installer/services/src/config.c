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
#include "hse_interface.h"
#include "std_typedefs.h"
#include "string.h"
#include "hse_platform.h"
#include "Fls_Cfg.h"
#include "Fls_Qspi_Api.h"
#include "nvic.h"
#include "timer.h"
#include "Mcal.h"
#include "flash.h"
#include "global_variables.h"
#include "hse_mu.h"
#ifdef UART_SUPPORT
#include "Serial.h"
#endif

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 * ===============================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 * ===============================================================================================*/
#define CLK_FIRC                        (0xFFU)
#define CLK_FXOSC                       (0xAAU)

#define FIRC_CLK (0x0)
#define FXOSC_CLK (0x1)

#define CLK_50MHZ (0x0)
#define CLK_100MHZ (0x1)
#define CLK_133MHZ (0x2)

#define QSPI_CONFIG (FlsConfigSet_VS_0_DLL_BYPASS_SDR)

/*Pin setup for QuadSPI on S32G2XX*/
#define PG_00	96      /* QSPI_CLK_A*/
#define PG_01	97      /* QSPI_CLK_A_b*/
#define PG_02	98      /* QSPI_CLK_2A*/
#define PG_03	99      /* QSPI_CLK_2A_b*/
#define PD_06	54      /* QSPI_CLK_B*/
#define PD_07	55      /* QSPI_CLK_B_b*/

#define PG_04	100     /*QSPI_A Chip Select 0*/
#define PG_05	101     /*QSPI_A Chip Select 1*/
#define PD_00	48      /*QSPI_B Chip Select 0*/
#define PD_01	49      /*QSPI_B Chip Select 1*/

#define PF_05	85      /*QSPOI_A  Data 0*/
#define PF_06	86      /*QSPOI_A  Data 1*/
#define PF_07	87      /*QSPOI_A  Data 2*/
#define PF_08	88      /*QSPOI_A  Data 3*/
#define PF_09	89      /*QSPOI_A  Data 4*/
#define PF_10	90      /*QSPOI_A  Data 5*/
#define PF_11	91      /*QSPOI_A  Data 6*/
#define PF_12	92      /*QSPOI_A  Data 7*/
#define PF_13	93      /*QSPOI_A  Data Strobe Input / FLASH_DATA_STROBE*/
#define PF_14	94      /*QSPI A Interrupt*/

/* #define A_DQS_IMCR                819 - 512 */
#define IMCR_A0                     (540 - 512)
#define IMCR_A1                     (541 - 512)
#define IMCR_A2                     (542 - 512)
#define IMCR_A3                     (543 - 512)
#define IMCR_A4                     (544 - 512)
#define IMCR_A5                     (545 - 512)
#define IMCR_A6                     (546 - 512)
#define IMCR_A7                     (547 - 512)
#define IMCR_DATA_STROBE_A          (548 - 512)
#define IMCR_QSPI_INTERRUPT_A       (549 - 512)

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      LOCAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL CONSTANTS
 * ===============================================================================================*/

/*==================================================================================================
 *                                      GLOBAL VARIABLES
 * ===============================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 * ===============================================================================================*/
void mu0RecieveInterrupt(void);
void mu1RecieveInterrupt(void);
void mu2RecieveInterrupt(void);
void mu3RecieveInterrupt(void);
void mu0GeneralPurposeInterrupt(void);
void mu1GeneralPurposeInterrupt(void);
void mu2GeneralPurposeInterrupt(void);
void mu3GeneralPurposeInterrupt(void);

void HSE_ReceiveInterruptHandler(uint8_t u8MuInstance);
void HSE_GeneralPurposeInterruptHandler(uint8_t u8MuInstance);

static void Fls_PinSetup(void);
static void Fls_Qspi_ClockSetup(uint32_t FIRCorFXOSC, uint32_t FrefClock);

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 * ===============================================================================================*/
/* MU0 Receive Interrupt */
void mu0RecieveInterrupt(void)
{
    HSE_ReceiveInterruptHandler(0);
}

/* MU1 Receive Interrupt */
void mu1RecieveInterrupt(void)
{
    HSE_ReceiveInterruptHandler(1);
}

/* MU2 Receive Interrupt */
void mu2RecieveInterrupt(void)
{
    HSE_ReceiveInterruptHandler(2);
}

/* MU3 Receive Interrupt */
void mu3RecieveInterrupt(void)
{
    HSE_ReceiveInterruptHandler(3);
}

/* MU0 General Purpose Interrupt */
void mu0GeneralPurposeInterrupt(void)
{
    HSE_GeneralPurposeInterruptHandler(0);
}

/* MU1 General Purpose Interrupt */
void mu1GeneralPurposeInterrupt(void)
{
    HSE_GeneralPurposeInterruptHandler(1);
}

/* MU2 General Purpose Interrupt */
void mu2GeneralPurposeInterrupt(void)
{
    HSE_GeneralPurposeInterruptHandler(2);
}

/* MU3 General Purpose Interrupt */
void mu3GeneralPurposeInterrupt(void)
{
    HSE_GeneralPurposeInterruptHandler(3);
}

void sys_enableIsrSource(uint8 id, uint8 prio)
{
    NVIC_EnableIRQ(id);
    NVIC_SetPriority(id, prio);
}

void sys_registerIsrHandler(uint8 irq_id, void (isr_handler)(void))
{
    REG_WRITE32(REG_READ32(0xE000ED08) + ((16 + irq_id) << 2), (uint32)isr_handler);
}

void sys_disableAllInterrupts(void)
{
    SuspendAllInterrupts();
}

void sys_enableAllInterrupts(void)
{
    ResumeAllInterrupts();
}

/* Register the MU interrupts handlers (RX/TX/General) */
static void MU_Register_Interrupts(void)
{
    uint8 MU0_ReceiveInterrupt_ID;
    uint8 MU1_ReceiveInterrupt_ID;
    uint8 MU2_ReceiveInterrupt_ID;
    uint8 MU3_ReceiveInterrupt_ID;

    uint8 MU0_GeneralPurposeInterrupt_ID;
    uint8 MU1_GeneralPurposeInterrupt_ID;
    uint8 MU2_GeneralPurposeInterrupt_ID;
    uint8 MU3_GeneralPurposeInterrupt_ID;

    /* M7 - NVIC */
    /* MU0 - 103 (tx) 104 (rx) 105 (general) */
    MU0_ReceiveInterrupt_ID = 104;
    MU0_GeneralPurposeInterrupt_ID = 105;

    /* MU1 - 106 (tx) 107 (rx) 108 (general) */
    MU1_ReceiveInterrupt_ID = 107;
    MU1_GeneralPurposeInterrupt_ID = 108;

    /* MU2 - 109 (tx) 110 (rx) 111 (general) */
    MU2_ReceiveInterrupt_ID = 110;
    MU2_GeneralPurposeInterrupt_ID = 111;

    /* MU3 - 112 (tx) 113 (rx) 114 (general) */
    MU3_ReceiveInterrupt_ID = 113;
    MU3_GeneralPurposeInterrupt_ID = 114;

    /* Enable Receive Interrupts */
    sys_enableIsrSource(MU0_ReceiveInterrupt_ID, 0xF0);
    sys_registerIsrHandler(MU0_ReceiveInterrupt_ID, mu0RecieveInterrupt);

    sys_enableIsrSource(MU1_ReceiveInterrupt_ID, 0xF0);
    sys_registerIsrHandler(MU1_ReceiveInterrupt_ID, mu1RecieveInterrupt);

    sys_enableIsrSource(MU2_ReceiveInterrupt_ID, 0xF0);
    sys_registerIsrHandler(MU2_ReceiveInterrupt_ID, mu2RecieveInterrupt);

    sys_enableIsrSource(MU3_ReceiveInterrupt_ID, 0xF0);
    sys_registerIsrHandler(MU3_ReceiveInterrupt_ID, mu3RecieveInterrupt);

    /* Enable General Purpose Interrupts */
    sys_enableIsrSource(MU0_GeneralPurposeInterrupt_ID, 0xFF);
    sys_registerIsrHandler(MU0_GeneralPurposeInterrupt_ID, mu0GeneralPurposeInterrupt);

    sys_enableIsrSource(MU1_GeneralPurposeInterrupt_ID, 0xFF);
    sys_registerIsrHandler(MU1_GeneralPurposeInterrupt_ID, mu1GeneralPurposeInterrupt);

    sys_enableIsrSource(MU2_GeneralPurposeInterrupt_ID, 0xFF);
    sys_registerIsrHandler(MU2_GeneralPurposeInterrupt_ID, mu2GeneralPurposeInterrupt);

    sys_enableIsrSource(MU3_GeneralPurposeInterrupt_ID, 0xFF);
    sys_registerIsrHandler(MU3_GeneralPurposeInterrupt_ID, mu3GeneralPurposeInterrupt);
}

static void Fls_PinSetup(void)
{
    /* Initialize global arrays used in tests. */
    SIUL2_0.MSCR[PG_00].R = 0x00202021; /*QSPI_CLK_A :     Enable only OBE; Disable IBE */
    SIUL2_0.MSCR[PG_01].R = 0x00202021; /*QSPI_CLK_A_b :   Enable only OBE; Disable IBE */
    SIUL2_0.MSCR[PG_02].R = 0x00202021; /*QSPI_CLK_2A :    Enable only OBE; Disable IBE */
    SIUL2_0.MSCR[PG_03].R = 0x00202021; /*QSPI_CLK_2A_b :  Enable only OBE; Disable IBE */
    SIUL2_0.MSCR[PD_06].R = 0x00214002; /*QSPI_CLK_B :     Enable only OBE; Disable IBE */
    SIUL2_0.MSCR[PD_07].R = 0x00214002; /*QSPI_CLK_B_b :   Enable only OBE; Disable IBE */


    /* SIUL2_0.MSCR[PG_04].R = 0x00203021; */ /*QSPI_A Chip Select 0 Enable only OBE; Disable IBE */
     SIUL2_0.MSCR[PG_04].R = 0x00202021U;  /*QSPI_A Chip Select 0 Enable only OBE; Disable IBE */
    /* SIUL2_0.MSCR[PG_05].R = 0x00203021;  *//*QSPI_A Chip Select 1 Enable only OBE; Disable IBE */
    SIUL2_0.MSCR[PG_05].R = 0x00202021U; /*QSPI_A Chip Select 1 Enable only OBE; Disable IBE */
    SIUL2_0.MSCR[PD_00].R = 0x00214002; /*QSPI_B Chip Select 0 Enable only OBE; Disable IBE */
    SIUL2_0.MSCR[PD_01].R = 0x00214002; /*QSPI_B Chip Select 1 Enable only OBE; Disable IBE */


      /*QSPI_A INTERRUPT*/
    SIUL2_0.MSCR[PF_14].R = 0x00083020;
    SIUL2_0.IMCR[IMCR_QSPI_INTERRUPT_A].R =  0x00000002;


      /*QSPI_A FLASH_DATA_STROBE*/
    SIUL2_0.MSCR[PF_13].R = 0x00282021;
    SIUL2_0.IMCR[IMCR_DATA_STROBE_A].R =  0x00000002;

      /*QSPI0_A_D7 2CF701*/
    /* SIUL2.MSCR[PF_08].R = 0x00293001;  */
    SIUL2_0.MSCR[PF_12].R = 0x00282021;
    SIUL2_0.IMCR[IMCR_A7].R =  0x00000002;

      /*QSPI0_A_D6 2CF701*/
    /* SIUL2.MSCR[PF_11].R = 0x00293001;  */
    SIUL2_0.MSCR[PF_11].R = 0x00282021;
    SIUL2_0.IMCR[IMCR_A6].R =  0x00000002;

      /*QSPI0_A_D5 2CF701*/
    /* SIUL2.MSCR[PF_10].R = 0x00293001;  */
    SIUL2_0.MSCR[PF_10].R = 0x00282021;
    SIUL2_0.IMCR[IMCR_A5].R =  0x00000002;

      /*QSPI0_A_D4 2CF701*/
    /* SIUL2.MSCR[PF_09].R = 0x00293001;  */
    SIUL2_0.MSCR[PF_09].R = 0x00282021;
    SIUL2_0.IMCR[IMCR_A4].R =  0x00000002;

    /*QSPI0_A_D3 2CF701*/
    /* SIUL2.MSCR[PF_08].R = 0x00293001;  */
    SIUL2_0.MSCR[PF_08].R = 0x00282021;
    SIUL2_0.IMCR[IMCR_A3].R =  0x00000002;

    /*QSPI0_A_D2*/
    /* SIUL2.MSCR[PF_07].R = 0x00293001;  */
    SIUL2_0.MSCR[PF_07].R = 0x00282021;
    SIUL2_0.IMCR[IMCR_A2].R =  0x00000002;

    /*QSPI0_A_D1*/
    /* SIUL2.MSCR[PF_06].R = 0x00293001;  */
    SIUL2_0.MSCR[PF_06].R = 0x00282021;
    SIUL2_0.IMCR[IMCR_A1].R =  0x00000002;

    /*QSPI0_A_D0*/
    /* SIUL2.MSCR[PF_05].R = 0x00293001; */
    SIUL2_0.MSCR[PF_05].R = 0x00282021;
    SIUL2_0.IMCR[IMCR_A0].R =  0x00000002;
}

/*-----------------------------------------------------------------------*/
/* Initialize & start the Xtal FXSOC=?MHz*/
/*-----------------------------------------------------------------------*/
static int Init_FXOSC(void)
{
    uint32 timeout = 0xFFFF;

    /* FXOSC Initialization */
    FXOSC.CTRL.B.EOCV = 0x80;			/* EOCV value = 0x80; interrupt masked*/
    FXOSC.CTRL.B.OSC_BYP = 0;
    FXOSC.CTRL.B.COMP_EN = 1;
    FXOSC.CTRL.B.OSCON = 1;
    while((FXOSC.STAT.B.OSC_STAT != 1) && (timeout--)) {}
    if(timeout < 1) return 1; /*FXOSC_TIMEOUT*/
    timeout = 0xFFFF; /*reset timeout*/

    return 0; /*Success*/
}
/*-----------------------------------------------------------------------*/
/* Initialize the Core_PLL*/
/*XSOC =40MHz, Core=?MHz, VCO=2GHz*/
/*-----------------------------------------------------------------------*/
static int Init_Core_PLL(uint32_t FIRCorFXOSC)
{
    uint32 timeout = 0xFFFF;

    /* Analog PLL for Core
     * <SDMEN=0, SSCGBYP=1 => PLL in integer-only mode>
     * Fvco = Fref x (PLLDV[MFI] / PLLDV[RDIV])
     * Fclkout = Fvco / (PLLODIV_n[DIV] + 1)
     * Fvco(CORE_PLL) = 2.0GHz
     * f(pll_ref) = 40d (40Mhz)
     * PLLDV[RDIV] = 1
     * PLLDV[MFI] = 50d (0x32)
     */
    CORE_PLL.PLLCR.B.PLLPD = 1;                     /* Disable PLL */
    CORE_PLL.PLLODIV[0].B.DE = 0;                   /* Disable PLL output for A53 core */
    CORE_PLL.PLLODIV[1].B.DE = 0;                   /* not used */

    CORE_PLL.PLLODIV[0].B.DIV = 1;                  /* Core A53 DIV 2 = 1000 MHz */

    CORE_PLL.PLLDV.B.RDIV = 1;
    CORE_PLL.PLLDV.B.MFI = 50;
    CORE_PLL.PLLFD.B.MFN = 0;

    if ( FXOSC_CLK == FIRCorFXOSC )
    {
        CORE_PLL.PLLCLKMUX.B.REFCLKSEL = 1;	            /* FXOSC_FREQ = 40MHz as source for PLL */
    }
    if ( FIRC_CLK == FIRCorFXOSC )
    {
        CORE_PLL.PLLCLKMUX.B.REFCLKSEL = 0;  	        /* FIRC_FREQ = 48MHz (fixed) as source for PLL */
    }
    CORE_PLL.PLLFD.B.SDMEN = 0;
    CORE_PLL.PLLFM.B.SSCGBYP = 1;
    CORE_PLL.PLLFM.B.STEPNO = 0;
    CORE_PLL.PLLFM.B.STEPSIZE = 0;

    CORE_PLL.PLLCR.B.PLLPD = 0;                     /* Enable PLL */
    CORE_PLL.PLLODIV[0].B.DE = 1;                   /* Enable PLL output */

    while((CORE_PLL.PLLSR.B.LOCK != 1) && (timeout--)) {}
    if(timeout < 1) return 1; /*CORE_PLL_TIMEOUT*/
    timeout = 0xFFFF; /*reset timeout*/

    return 0; /*Success*/
}
/*-----------------------------------------------------------------------*/
/* Initialize the Peripheral_PLL*/
/*XSOC =40MHz, VCO=2GHz*/
/*-----------------------------------------------------------------------*/
static int Init_Peripheral_PLL(uint32_t FIRCorFXOSC)
{
    uint32 timeout = 0xFFFF;
    /* Analog PLL for Peripherals
     * <SDMEN=0, SSCGBYP=1 => PLL in integer-only mode>
     * Fvco = Fref x (PLLDV[MFI] / PLLDV[RDIV])
     * Fclkout = Fvco / (PLLODIV_n[DIV] + 1)
     * Fvco = 2.0GHz
     * f(pll_ref) = 40d (40Mhz)
     * PLLDV[RDIV] = 1
     * PLLDV[MFI] = 50d (0x32)
     */
    PERIPH_PLL.PLLCR.B.PLLPD = 1;               /* Disable PLL */
    PERIPH_PLL.PLLODIV[0].B.DE = 0;             /* Disable all PLL outputs */
    PERIPH_PLL.PLLODIV[1].B.DE = 0;
    PERIPH_PLL.PLLODIV[2].B.DE = 0;
    PERIPH_PLL.PLLODIV[3].B.DE = 0;
    PERIPH_PLL.PLLODIV[4].B.DE = 0;
    PERIPH_PLL.PLLODIV[5].B.DE = 0;
    PERIPH_PLL.PLLODIV[6].B.DE = 0;
    PERIPH_PLL.PLLODIV[7].B.DE = 0;

    if ( FXOSC_CLK == FIRCorFXOSC )
    {
        PERIPH_PLL.PLLCLKMUX.B.REFCLKSEL = 1;	    /* FXOSC_FREQ = 40MHz as source for PLL */
    }
    if ( FIRC_CLK == FIRCorFXOSC )
    {
        PERIPH_PLL.PLLCLKMUX.B.REFCLKSEL = 0;  	    /* FIRC_FREQ = 48MHz (fixed) as source for PLL */
    }

    PERIPH_PLL.PLLDV.B.RDIV = 1;
    PERIPH_PLL.PLLDV.B.MFI = 50;
    PERIPH_PLL.PLLFD.B.MFN = 0;

    /* CLOCK input = Fvco = 2 GHz*/
    PERIPH_PLL.PLLODIV[0].B.DIV = (50-1);     /* PERIPH_PLL_PHI0_CLK = 40 MHz. (PCIE_0_REF_CLK[100-125MHz]) */
    PERIPH_PLL.PLLODIV[1].B.DIV = (25-1);     /* PERIPH_PLL_PHI1_CLK = 80 MHz. (PER_CLK[<80MHz],FTM_0_REF_CLK[<20MHz],FTM_1_REF_CLK[<20MHz],FLEXRAY_PE_CLK[<40MHz]) */
    PERIPH_PLL.PLLODIV[2].B.DIV = (50-1);     /* PERIPH_PLL_PHI2_CLK = 40 MHz. (CAN_PE_CLK[40-80MHz]) */
    PERIPH_PLL.PLLODIV[3].B.DIV = (25-1);     /* PERIPH_PLL_PHI3_CLK = 80 MHz. (LINFLEXD_CLK[<66.7MHz], LIN_BAUD_CLK[<133MHz]) */
    PERIPH_PLL.PLLODIV[4].B.DIV = (50-1);     /* PERIPH_PLL_PHI4_CLK = 40 MHz. (GMAC_TS_CLK[5-200MHz])   */
    PERIPH_PLL.PLLODIV[5].B.DIV = (16-1);     /* PERIPH_PLL_PHI5_CLK = 125 MHz.(GMAC_0_TX_CLK[2.5-125MHz])  */
    /*PERIPH_PLL.PLLODIV[6].B.DIV = ;*/       /* not used */
    PERIPH_PLL.PLLODIV[7].B.DIV = (50-1);     /* PERIPH_PLL_PHI7_CLK = 40 MHz (SPI_CLK[10-100MHz]) */

    PERIPH_PLL.PLLCR.B.PLLPD = 0;             /* Enable PLL */

    while((PERIPH_PLL.PLLSR.B.LOCK != 1) && (timeout--)) {}
    if(timeout < 1) return 1; /*CORE_PLL_TIMEOUT*/
    timeout = 0xFFFF; /*reset timeout*/

    /*PERIPH_PLL.PLLODIV[0].B.DE = 1;*/             /* Enable all PLL outputs */
    PERIPH_PLL.PLLODIV[1].B.DE = 1;
    PERIPH_PLL.PLLODIV[2].B.DE = 1;
    PERIPH_PLL.PLLODIV[3].B.DE = 1;
    /*PERIPH_PLL.PLLODIV[4].B.DE = 1;*/
    PERIPH_PLL.PLLODIV[5].B.DE = 1;
    /*PERIPH_PLL.PLLODIV[6].B.DE = 1;*/
    PERIPH_PLL.PLLODIV[7].B.DE = 1;

    return 0; /*Success*/
}
/*-----------------------------------------------------------------------*/
/* Initialize the Core_DFS*/
/*XSOC =40MHz, Core=?MHz*/
/*-----------------------------------------------------------------------*/
static int Init_Core_DFS(void)
{
    uint32 timeout = 0xFFFFUL;
    uint32_t portlolsr;

    portlolsr = CORE_DFS.PORTLOLSR.R;
    if(0U != (portlolsr & 0x3FU)) {
        CORE_DFS.PORTLOLSR.R = portlolsr; /* Clear DFS LOL */
    }

    /* Fdfs = PLLvco / (2* (MFI+(MFN/36)) ) */
    CORE_DFS.PORTRESET.R = 0x3F;
    CORE_DFS.CTL.B.DFS_RESET = 1;
    CORE_DFS.DVPORT[0].B.MFI = 1;
    CORE_DFS.DVPORT[0].B.MFN = 9;       /* CORE_DFS1_CLK[<800MHz] = 800MHz */
                                        /*  CORE_DFS1_CLK       -> XBAR_2X_CLK[?]           = 800MHz
                                            CORE_DFS1_CLK/2     -> XBAR_CLK/M7[24-400MHz]   = 400MHz
                                            CORE_DFS1_CLK/4     -> XBAR_DIV2_CLK[12-200MHz] = 200MHz
                                            CORE_DFS1_CLK/4/2   -> XBAR_DIV4_CLK[?]         = 100MHZ
                                            CORE_DFS1_CLK/6     -> XBAR_DIV3_CLK[8-133MHz]  = 133MHz
                                            CORE_DFS1_CLK/12    -> XBAR_DIV6_CLK[?]         = 66MHz
                                        */
    CORE_DFS.CTL.B.DFS_RESET = 0;
    CORE_DFS.PORTRESET.B.RESET0 = 0;    /* Deassert reset for CORE_DFS1_CLK to MC_CGM_0 */

    while(( (CORE_DFS.PORTSR.B.PORTSTAT & 0x01) != 1) && (timeout--)) {}
    if(timeout < 1) return 1; /*CORE_DFS_TIMEOUT*/
    timeout = 0xFFFF; /*reset timeout*/

    return 0; /*Success*/
}
/*-----------------------------------------------------------------------*/
/* Initialize the Core_DFS*/
/*XSOC =40MHz */
/*-----------------------------------------------------------------------*/
static int Init_Peripheral_DFS(uint32_t FrefClock)
{
    uint32 timeout = 0xFFFF;
    uint32_t portlolsr;

    portlolsr = PERIPH_DFS.PORTLOLSR.R;
    if(0U != (portlolsr & 0x3FU)) {
        PERIPH_DFS.PORTLOLSR.R = portlolsr; /* Clear DFS LOL */
    }

    /* Fdfs = PLLvco / (2* (MFI+(MFN/36)) ) */
    PERIPH_DFS.PORTRESET.R = 0x3F;
    PERIPH_DFS.CTL.B.DFS_RESET = 1;
    if (CLK_133MHZ == FrefClock)
    {
        PERIPH_DFS.DVPORT[0].B.MFI = 3;
        PERIPH_DFS.DVPORT[0].B.MFN = 27;       /* PERIPH_DFS1_CLK[<800MHz] = 266MHz -> QSPI_1X_CLK, QSPI_2X_CLK*/
    }
    else
    {
        PERIPH_DFS.DVPORT[0].B.MFI = 5;
        PERIPH_DFS.DVPORT[0].B.MFN = 0;       /* PERIPH_DFS1_CLK[<800MHz] = 200MHz -> QSPI_1X_CLK, QSPI_2X_CLK*/
    }
    PERIPH_DFS.DVPORT[1].B.MFI = 5;
    PERIPH_DFS.DVPORT[1].B.MFN = 0;       /* PERIPH_DFS2_CLK[<800MHz] = 200MHz -> CLKOUT*/
    PERIPH_DFS.DVPORT[2].B.MFI = 2;
    PERIPH_DFS.DVPORT[2].B.MFN = 18;       /* PERIPH_DFS3_CLK[<800MHz] = 400MHz -> SDHC_CLK*/
    PERIPH_DFS.CTL.B.DFS_RESET = 0;
    PERIPH_DFS.PORTRESET.B.RESET0 = 0;    /* Deassert reset for PERIPH_DFS1_CLK to MC_CGM_12(QSPI) */
    PERIPH_DFS.PORTRESET.B.RESET1 = 0;    /* Deassert reset for PERIPH_DFS2_CLK to CLKOUT */
    PERIPH_DFS.PORTRESET.B.RESET2 = 0;    /* Deassert reset for PERIPH_DFS3_CLK to MC_CGM_14(SDHC) */

    while(( (PERIPH_DFS.PORTSR.B.PORTSTAT & 0x07) != 7) && (timeout--)) {}
    if(timeout < 1) return 1; /*CORE_DFS_TIMEOUT*/
    timeout = 0xFFFF; /*reset timeout*/

    return 0; /*Success*/
}


/* Table 23-3. MC_CGM clock source mapping
Clock selector index    Clock source
0                       FIRC_CLK
1                       SIRC_CLK
2                       FXOSC_CLK (CLKOUT0/1)
3                       SXOSC_CLK (Reserved)
4                       CORE_PLL_PHI0_CLK
5                       CORE_PLL_PHI1_CLK
6                       CORE_PLL_PHI2_CLK (Reserved)
7                       CORE_PLL_PHI3_CLK (Reserved)
8                       CORE_PLL_PHI4_CLK (Reserved)
9                       CORE_PLL_PHI5_CLK (Reserved)
10                      CORE_PLL_PHI6_CLK (Reserved)
11                      CORE_PLL_PHI7_CLK (Reserved)
12                      CORE_DFS1_CLK
13                      CORE_DFS2_CLK
14                      CORE_DFS3_CLK
15                      CORE_DFS4_CLK
16                      CORE_DFS5_CLK
17                      CORE_DFS6_CLK
18                      PERIPH_PLL_PHI0_CLK (CLKOUT0/1)
19                      PERIPH_PLL_PHI1_CLK
20                      PERIPH_PLL_PHI2_CLK
21                      PERIPH_PLL_PHI3_CLK
22                      PERIPH_PLL_PHI4_CLK
23                      PERIPH_PLL_PHI5_CLK
24                      PERIPH_PLL_PHI6_CLK
25                      PERIPH_PLL_PHI7_CLK
26                      PERIPH_DFS1_CLK
27                      PERIPH_DFS2_CLK (CLKOUT0/1)
28                      PERIPH_DFS3_CLK
29                      PERIPH_DFS4_CLK
30                      PERIPH_DFS5_CLK (CLKOUT0/1)
31                      PERIPH_DFS6_CLK
32                      ACCEL_PLL_PHI0_CLK
33                      ACCEL_PLL_PHI1_CLK
34                      FTM_0_EXT_REF_CLK
35                      FTM_1_EXT_REF_CLK
36                      DDR_PLL PHI0
37                      GMAC_0_EXT_TX_CLK
38                      GMAC_0_EXT_RX_CLK
39                      GMAC_0_EXT_REF_CLK
40                      SERDES_0_LANE_0_TX_CLK
41                      SERDES_0_LANE_0_CDR_CLK
44                      GMAC_EXT_TS_CLK
45                      GMAC_0_REF_DIV_CLK
46                      SERDES_0_LANE_1_TX_CLK (CLKOUT0/1)
47                      SERDES_0_LANE_1_CDR_CLK (CLKOUT1)
48                      PFE_MAC_0_EXT_TX_CLK
49                      PFE_MAC_0_EXT_RX_CLK
50                      PFE_MAC_0_EXT_REF_CLK
51                      PFE_MAC_1_EXT_TX_CLK
52                      PFE_MAC_1_EXT_RX_CLK
53                      PFE_MAC_1_EXT_REF_CLK
54                      PFE_MAC_2_EXT_TX_CLK
55                      PFE_MAC_2_EXT_RX_CLK
56                      PFE_MAC_2_EXT_REF_CLK
57                      SERDES_1_LANE_0_TX_CLK
58                      SERDES_1_LANE_0_CDR_CLK
59                      PFE_MAC_0_REF_DIV_CLK
60                      PFE_MAC_1_REF_DIV_CLK
61                      PFE_MAC_2_REF_DIV_CLK
62                      SERDES_1_LANE_1_TX_CLK
63                      SERDES_1_LANE_1_CDR_CLK
*/
/*-----------------------------------------------------------------------*/
/* Initialize the MC_CGM */
/*-----------------------------------------------------------------------*/
static int Init_MC_CGM(uint32_t FIRCorFXOSC, uint32_t FrefClock)
{

    /* Disable all mux dividers */
    /*MC_CGM_0.MUX_0_DC_0.B.DE  = 0;*/     /*LBIST_CLK - do not disable the core MUX0*/
    /*MC_CGM_0.MUX_0_DC_1.B.DE  = 0;*/     /*DAPB_CLK - do not disable the core MUX0*/
    MC_CGM_0.MUX_1_DC_0.B.DE  = 0;     /*CLKOUT0*/
    MC_CGM_0.MUX_2_DC_0.B.DE  = 0;     /*CLKOUT1*/
    MC_CGM_0.MUX_3_DC_0.B.DE  = 0;     /*PER_CLK*/
    MC_CGM_0.MUX_4_DC_0.B.DE  = 0;     /*FTM_0_REF_CLK*/
    MC_CGM_0.MUX_5_DC_0.B.DE  = 0;     /*FTM_1_REF_CLK*/
    MC_CGM_0.MUX_6_DC_0.B.DE  = 0;     /*FLEXRAY_PE_CLK*/
    MC_CGM_0.MUX_9_DC_0.B.DE  = 0;     /*GMAC_TS_CLK*/
    MC_CGM_0.MUX_10_DC_0.B.DE = 0;     /*GMAC_0_TX_CLK*/
    MC_CGM_0.MUX_12_DC_0.B.DE = 0;     /*QSPI_2X_CLK*/
    MC_CGM_0.MUX_14_DC_0.B.DE = 0;     /*SDHC_CLK*/
    MC_CGM_0.MUX_15_DC_0.B.DE = 0;     /*GMAC_0_REF_DIV_CLK*/

    while(MC_CGM_0.MUX_0_CSS.B.SWIP  != 0) {}    /* Verify that we don't have switching in progress*/
    while(MC_CGM_0.MUX_3_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_4_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_5_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_6_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_7_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_8_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_9_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_10_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_11_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_12_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_14_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_15_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_16_CSS.B.SWIP != 0) {}

    if ( FIRC_CLK == FIRCorFXOSC )
    {
        MC_CGM_0.MUX_0_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*XBAR_CLK/M7*/

        MC_CGM_0.MUX_1_CSC.B.CG = 1;	  /*Enable ClockGate*/                 /*CLKOUT0*/
        while(MC_CGM_0.MUX_1_CSS.B.CS != 0) {}
        MC_CGM_0.MUX_1_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*CLKOUT0*/
        MC_CGM_0.MUX_1_CSC.B.CG = 0;	/*Disable ClockGate*/          /*CLKOUT0*/

        MC_CGM_0.MUX_2_CSC.B.CG = 1;	  /*Enable ClockGate*/                 /*CLKOUT1*/
        while(MC_CGM_0.MUX_2_CSS.B.CS != 0) {}
        MC_CGM_0.MUX_2_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*CLKOUT1*/
        MC_CGM_0.MUX_2_CSC.B.CG = 0;	/*Disable ClockGate*/          /*CLKOUT1*/

        MC_CGM_0.MUX_3_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*PER_CLK*/
        MC_CGM_0.MUX_4_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*FTM_0_REF_CLK*/
        MC_CGM_0.MUX_5_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*FTM_1_REF_CLK*/
        MC_CGM_0.MUX_6_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*FLEXRAY_PE_CLK*/
        MC_CGM_0.MUX_7_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/
        MC_CGM_0.MUX_8_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/
        MC_CGM_0.MUX_9_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*GMAC_TS_CLK*/
        MC_CGM_0.MUX_10_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*GMAC_0_TX_CLK*/
        MC_CGM_0.MUX_11_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/
        MC_CGM_0.MUX_12_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*QSPI_2X_CLK*/
        MC_CGM_0.MUX_14_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*SDHC_CLK*/
        MC_CGM_0.MUX_15_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*GMAC_0_REF_DIV_CLK*/
        MC_CGM_0.MUX_16_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*SPI_CLK*/
    }
    if ( FXOSC_CLK == FIRCorFXOSC )
    {
        MC_CGM_0.MUX_0_CSC.B.SELCTL = 12;	/*Select CORE_DFS1_CLK*/            /*XBAR_CLK/M7*/

        MC_CGM_0.MUX_1_CSC.B.CG = 1;	/*Enable ClockGate*/      /*CLKOUT0*/
        while(MC_CGM_0.MUX_1_CSS.B.CS != 0) {}
        MC_CGM_0.MUX_1_CSC.B.SELCTL = 18;	/*Select PERIPH_PLL_PHI0_CLK*/      /*CLKOUT0*/
        MC_CGM_0.MUX_1_CSC.B.CG = 0;	/*Disable ClockGate*/          /*CLKOUT0*/

        MC_CGM_0.MUX_2_CSC.B.CG = 1;	/*Enable ClockGate*/          /*CLKOUT1*/
        while(MC_CGM_0.MUX_2_CSS.B.CS != 0) {}
        MC_CGM_0.MUX_2_CSC.B.SELCTL = 27;	/*Select PERIPH_DFS2_CLK*/          /*CLKOUT1*/
        MC_CGM_0.MUX_2_CSC.B.CG = 0;	/*Disable ClockGate*/          /*CLKOUT1*/

        MC_CGM_0.MUX_3_CSC.B.SELCTL = 19;	/*Select PERIPH_PLL_PHI1_CLK*/      /*PER_CLK*/
        MC_CGM_0.MUX_4_CSC.B.SELCTL = 19;	/*Select PERIPH_PLL_PHI1_CLK*/      /*FTM_0_REF_CLK*/
        MC_CGM_0.MUX_5_CSC.B.SELCTL = 19;	/*Select PERIPH_PLL_PHI1_CLK*/      /*FTM_1_REF_CLK*/
        MC_CGM_0.MUX_6_CSC.B.SELCTL = 19;	/*Select PERIPH_PLL_PHI1_CLK*/      /*FLEXRAY_PE_CLK*/
        MC_CGM_0.MUX_7_CSC.B.SELCTL = 20;	/*Select PERIPH_PLL_PHI2_CLK*/
        MC_CGM_0.MUX_8_CSC.B.SELCTL = 21;	/*Select PERIPH_PLL_PHI3_CLK*/
        /*MC_CGM_0.MUX_9_CSC.B.SELCTL = 22;*/	/*Select PERIPH_PLL_PHI4_CLK*/      /*GMAC_TS_CLK*/
        MC_CGM_0.MUX_9_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*GMAC_TS_CLK*/
        /*MC_CGM_0.MUX_10_CSC.B.SELCTL = 23;*/	/*Select PERIPH_PLL_PHI5_CLK*/  /*GMAC_0_TX_CLK*/
        MC_CGM_0.MUX_10_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*GMAC_0_TX_CLK*/
        MC_CGM_0.MUX_11_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*GMAC_0_RX_CLK*/
        MC_CGM_0.MUX_12_CSC.B.SELCTL = 26;	/*Select PERIPH_DFS1_CLK*/          /*QSPI_2X_CLK*/
        MC_CGM_0.MUX_14_CSC.B.SELCTL = 28;	/*Select PERIPH_DFS3_CLK*/          /*SDHC_CLK*/
        MC_CGM_0.MUX_15_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/                 /*GMAC_0_REF_DIV_CLK*/
        MC_CGM_0.MUX_16_CSC.B.SELCTL = 25;	/*Select PERIPH_PLL_PHI7_CLK*/      /*SPI_CLK*/
    }

    MC_CGM_0.MUX_0_CSC.B.CLK_SW =  1;    /* Trigger the clock switch */
    MC_CGM_0.MUX_3_CSC.B.CLK_SW =  1;
    MC_CGM_0.MUX_4_CSC.B.CLK_SW =  1;
    MC_CGM_0.MUX_5_CSC.B.CLK_SW =  1;
    MC_CGM_0.MUX_6_CSC.B.CLK_SW =  1;
    MC_CGM_0.MUX_7_CSC.B.CLK_SW =  1;
    MC_CGM_0.MUX_8_CSC.B.CLK_SW =  1;
    MC_CGM_0.MUX_9_CSC.B.CLK_SW =  1;
    MC_CGM_0.MUX_10_CSC.B.CLK_SW = 1;
    MC_CGM_0.MUX_11_CSC.B.CLK_SW = 1;
    MC_CGM_0.MUX_12_CSC.B.CLK_SW = 1;
    MC_CGM_0.MUX_14_CSC.B.CLK_SW = 1;
    MC_CGM_0.MUX_15_CSC.B.CLK_SW = 1;
    MC_CGM_0.MUX_16_CSC.B.CLK_SW = 1;

    while(MC_CGM_0.MUX_0_CSS.B.CLK_SW  != 1) {}      /* Wait for acknowledge to be cleared*/
    while(MC_CGM_0.MUX_3_CSS.B.CLK_SW  != 1) {}
    while(MC_CGM_0.MUX_4_CSS.B.CLK_SW  != 1) {}
    while(MC_CGM_0.MUX_5_CSS.B.CLK_SW  != 1) {}
    while(MC_CGM_0.MUX_6_CSS.B.CLK_SW  != 1) {}
    while(MC_CGM_0.MUX_7_CSS.B.CLK_SW  != 1) {}
    while(MC_CGM_0.MUX_8_CSS.B.CLK_SW  != 1) {}
    while(MC_CGM_0.MUX_9_CSS.B.CLK_SW  != 1) {}
    while(MC_CGM_0.MUX_10_CSS.B.CLK_SW != 1) {}
    while(MC_CGM_0.MUX_11_CSS.B.CLK_SW != 1) {}
    while(MC_CGM_0.MUX_12_CSS.B.CLK_SW != 1) {}
    while(MC_CGM_0.MUX_14_CSS.B.CLK_SW != 1) {}
    while(MC_CGM_0.MUX_15_CSS.B.CLK_SW != 1) {}
    while(MC_CGM_0.MUX_16_CSS.B.CLK_SW != 1) {}

    while(MC_CGM_0.MUX_3_CSS.B.SWIP  != 0) {}       /* Verify that clock switch completed*/
    while(MC_CGM_0.MUX_4_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_5_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_6_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_7_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_8_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_9_CSS.B.SWIP  != 0) {}
    while(MC_CGM_0.MUX_10_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_11_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_12_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_14_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_15_CSS.B.SWIP != 0) {}
    while(MC_CGM_0.MUX_16_CSS.B.SWIP != 0) {}

    MC_CGM_0.MUX_0_DC_0.B.DIV = (16-1);    /*CORE_DFS1_CLK[800MHz] -> LBIST_CLK[7:0][<50MHz] = 50MHz */
    MC_CGM_0.MUX_0_DC_1.B.DIV = (10-1);    /*CORE_DFS1_CLK[800MHz] -> DAPB_CLK[?] = 80MHz?*/
    MC_CGM_0.MUX_1_DC_0.B.DIV = (80-1);    /*CORE_DFS1_CLK[800MHz] -> CLKOUT0 = 10MHz*/
    MC_CGM_0.MUX_2_DC_0.B.DIV = (20-1);    /*PERIPH_DFS2_CLK[200MHz] -> CLKOUT1 = 10MHz*/
    MC_CGM_0.MUX_3_DC_0.B.DIV = (1-1);     /*PERIPH_PLL_PHI1_CLK[80MHz] -> PER_CLK[<80MHz] = 80MHz */
    MC_CGM_0.MUX_4_DC_0.B.DIV = (4-1);     /*PERIPH_PLL_PHI1_CLK[80MHz] -> FTM_0_REF_CLK[<20MHz] = 20MHz */
    MC_CGM_0.MUX_5_DC_0.B.DIV = (4-1);     /*PERIPH_PLL_PHI1_CLK[80MHz] -> FTM_1_REF_CLK[<20MHz] = 20MHz */
    MC_CGM_0.MUX_6_DC_0.B.DIV = (2-1);     /*PERIPH_PLL_PHI1_CLK[80MHz] -> FLEXRAY_PE_CLK[<40MHz] = 40MHz */
    MC_CGM_0.MUX_9_DC_0.B.DIV = (1-1);     /*PERIPH_PLL_PHI4_CLK[40MHz] -> GMAC_TS_CLK[5-200MHz] = 40MHz */
    MC_CGM_0.MUX_10_DC_0.B.DIV = (1-1);    /*PERIPH_PLL_PHI5_CLK[125MHz] -> GMAC_0_TX_CLK[2.5-125MHz] = 125MHz */

    if(FrefClock == CLK_50MHZ)
    {
        MC_CGM_0.MUX_12_DC_0.B.DIV = (2-1);    /*PERIPH_DFS1_CLK[200MHz] -> QSPI_2X_CLK[200,166,133,100,80,66MHz] = 100MHz, QSPI_1X_CLK = 50MHz */
    }
    if((FrefClock == CLK_100MHZ) || (FrefClock == CLK_133MHZ))
    {
        MC_CGM_0.MUX_12_DC_0.B.DIV = (1-1);    /*PERIPH_DFS1_CLK[200MHz or 266MHZ] -> QSPI_2X_CLK[266, 200,166,133,100,80,66MHz] = 200MHz or 266MHZ, QSPI_1X_CLK = 100MHz, 133MHZ*/
    }
    MC_CGM_0.MUX_14_DC_0.B.DIV = (1-1);    /*PERIPH_DFS3_CLK[400MHz] -> SDHC_CLK[400,200,208,100,52MHz] = 400MHz */
    MC_CGM_0.MUX_15_DC_0.B.DIV = (1-1);    /*GMAC_0_REF_DIV_CLK -> MUX11*/
                                           /* MC_CGM_0.MUX_16  PERIPH_PLL_PHI7_CLK[40MHz] -> SPI_CLK[10-100MHz] = 40MHz*/

    while(MC_CGM_0.MUX_0_DIV_UPD_STAT.B.DIV_STAT  != 0) {}  /* Wait for acknowledge to be cleared*/
    /*while(MC_CGM_0.MUX_1_DIV_UPD_STAT.B.DIV_STAT  != 0) {}  TODO: This clock source does not lock the mux, to check why.*/
    while(MC_CGM_0.MUX_2_DIV_UPD_STAT.B.DIV_STAT  != 0) {}
    while(MC_CGM_0.MUX_3_DIV_UPD_STAT.B.DIV_STAT  != 0) {}
    while(MC_CGM_0.MUX_4_DIV_UPD_STAT.B.DIV_STAT  != 0) {}
    while(MC_CGM_0.MUX_5_DIV_UPD_STAT.B.DIV_STAT  != 0) {}
    while(MC_CGM_0.MUX_6_DIV_UPD_STAT.B.DIV_STAT  != 0) {}
    while(MC_CGM_0.MUX_9_DIV_UPD_STAT.B.DIV_STAT  != 0) {}
    while(MC_CGM_0.MUX_10_DIV_UPD_STAT.B.DIV_STAT != 0) {}
    while(MC_CGM_0.MUX_12_DIV_UPD_STAT.B.DIV_STAT != 0) {}
    while(MC_CGM_0.MUX_14_DIV_UPD_STAT.B.DIV_STAT != 0) {}
    while(MC_CGM_0.MUX_15_DIV_UPD_STAT.B.DIV_STAT != 0) {}

    /* Enable all mux dividers */
    MC_CGM_0.MUX_0_DC_0.B.DE  = 1;     /*LBIST_CLK*/
    MC_CGM_0.MUX_0_DC_1.B.DE  = 1;     /*DAPB_CLK*/
    MC_CGM_0.MUX_1_DC_0.B.DE  = 1;     /*CLKOUT0*/
    MC_CGM_0.MUX_2_DC_0.B.DE  = 1;     /*CLKOUT1*/
    MC_CGM_0.MUX_3_DC_0.B.DE  = 1;     /*PER_CLK*/
    MC_CGM_0.MUX_4_DC_0.B.DE  = 1;     /*FTM_0_REF_CLK*/
    MC_CGM_0.MUX_5_DC_0.B.DE  = 1;     /*FTM_1_REF_CLK*/
    MC_CGM_0.MUX_6_DC_0.B.DE  = 1;     /*FLEXRAY_PE_CLK*/
    MC_CGM_0.MUX_9_DC_0.B.DE  = 1;     /*GMAC_TS_CLK*/
    MC_CGM_0.MUX_10_DC_0.B.DE = 1;    /*GMAC_0_TX_CLK*/
    MC_CGM_0.MUX_12_DC_0.B.DE = 1;    /*QSPI_2X_CLK*/
    MC_CGM_0.MUX_14_DC_0.B.DE = 1;    /*SDHC_CLK*/
    MC_CGM_0.MUX_15_DC_0.B.DE = 1;    /*GMAC_0_REF_DIV_CLK*/

    return 0; /*Success*/
}

static int Switch_Core_FIRC(void)
{
    uint32 timeout = 0xFFFF;
    /* Verify that we don't have switching in progress*/
    while(MC_CGM_0.MUX_0_CSS.B.SWIP != 0) {}
    MC_CGM_0.MUX_0_CSC.B.SELCTL = 0;	/*Select FIRC_CLK*/
    MC_CGM_0.MUX_0_CSC.B.CLK_SW = 1;
    /* Wait for acknowledge to be cleared*/
    while(MC_CGM_0.MUX_0_CSS.B.CLK_SW != 1) {}
    /* Verify that clock switch completed*/
    while((MC_CGM_0.MUX_0_CSS.B.SWIP != 0) && (timeout--)) {}
    if(timeout < 1) return 1; /*MC_CGM_CLK_SWITCH_TIMEOUT*/
    timeout = 0xFFFF; /*reset timeout*/
    return 0;
}

static void Fls_Qspi_ClockSetup(uint32_t FIRCorFXOSC, uint32_t FrefClock)
{
    volatile uint32 status = 0UL;

    status += Switch_Core_FIRC();

    status += Init_FXOSC();

    status += Init_Core_PLL(FIRCorFXOSC);
    status += Init_Peripheral_PLL(FIRCorFXOSC);

    status += Init_Core_DFS();
    status += Init_Peripheral_DFS(FrefClock);

    status += Init_MC_CGM(FIRCorFXOSC, FrefClock);
}

#if defined (FLASH_SUPPORT)
/* Configure QSPI at 50 MHz */
static void Configure_QSPIAndClock(void)
{
    uint8_t buffer[256];
    Fls_LLDReturnType flsResponse;

    /* Configure QSPI pins */
    Fls_PinSetup();

    /* Configure QSPI clock */
    Fls_Qspi_ClockSetup(FXOSC_CLK, CLK_50MHZ);

    /* Init QSPI */
    if(FLASH_E_OK != (flsResponse = Fls_Qspi_Init(&QSPI_CONFIG)))
    {
        while(1);
    }
    do {
        ;
    } while (FLASH_E_OK != (flsResponse = Fls_WriteRegiter(0U, FLASH_SPI_MODE)));

    #if (HSE_S32G2XX == HSE_PLATFORM)
    Fls_Qspi_ClockSetup(FXOSC_CLK, CLK_100MHZ);
    if(FLASH_E_OK != (flsResponse = Fls_Qspi_Init(&FlsConfigSet_VS_0_DLL_MANUAL_SDR)))
    {
        while(1);
    }
    #endif

    if(FLASH_E_OK != (flsResponse = Fls_Qspi_Read(0x0, buffer, 16U , FALSE, FLASH_SPI_MODE)))
    {
        while(1);
    }

    (void)flsResponse;
}
#else
/* Configure the clock without QSPI */
static void Configure_QSPIAndClock(void)
{
    /* Even if there's no flash support, the clock tree will still be configured in a similarly. */
    #if (HSE_S32G2XX == HSE_PLATFORM)
    Fls_Qspi_ClockSetup(FXOSC_CLK, CLK_100MHZ);
    #else
    Fls_Qspi_ClockSetup(FXOSC_CLK, CLK_50MHZ);
    #endif
}
#endif



/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 * ===============================================================================================*/

void Init_Peripherals(void)
{
    /* Register MU Interrupts */
    MU_Register_Interrupts();

    /* Configure QuadSPI driver */
    Configure_QSPIAndClock();

    /* Get the IVT */
    #if defined(FLASH_SUPPORT)
    if (FLASH_OP_OK != Flash_Read(IVT_ADDRESS, (uint8_t *)&IVT, sizeof(IVT)))
    {
    /* Flash is supported but the read was NOT OK */
        while(1);
    }
    #else
    /* Since flash is not supported, reading from address 0 */
    memcpy((uint8_t *)&IVT, IVT_ADDRESS, sizeof(IVT));
    #endif

    HSE_MU_SendEvent(HSE_HOST_PERIPH_CONFIG_DONE);

    /* Init UART driver */
    #ifdef UART_SUPPORT
    UART_init();
    #endif
    /* Init STM 0 */
    STM_0_Init();
}

#if 0
void Init_DummyIVT(void)
{
    IVT = (ivt_t)
        {
        0xD1U,              /* IVT header marker */
        0x0,                /* 4 bytes reserved */
        0x0,                /* Pointer to Self test image */
        0x0,                /* Pointer to Self test backup image */
        0x400,              /* Pointer to DCD image */
        0x0,                /* Pointer to DCD backup image */
        0x1000,             /* Pointer to HSE FW image*/
        0x43000,            /* Pointer to HSE FW backup image */
        0x9C000,            /* Pointer to Application bootloader */
        0x100000,           /* Pointer to Application bootloader backup */
        0x0,                /* Boot Configuration Word */
        0x0,                /* Life-Cycle configuration word */
        0x0,                /* DEBUG Config */
        0x0,                /* SYS-IMG Config */
        0x0,                /* DEBUG Config */
        0x0,                /* External flash type where SYS-IMG is flashed */
        0x0,                /* Erasable page size of external */
        0x1000,             /* External flash type where Application is flashed */
        {
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0,
        },                   /* 168 bytes reserved */
        {
            0x0, 0x0, 0x0, 0x0,
        },                   /* GMAC TAG over the IVT image */
        };
}
#endif

#ifdef __cplusplus
}
#endif

/** @} */
