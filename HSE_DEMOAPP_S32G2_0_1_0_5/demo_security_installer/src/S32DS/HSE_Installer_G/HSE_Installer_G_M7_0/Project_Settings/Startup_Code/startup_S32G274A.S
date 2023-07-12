/* ---------------------------------------------------------------------------------------*/
/*  @file:    startup_S32G274A.s                                                          */
/*  @purpose: GNU Compiler Collection Startup File                                        */
/*            S32G274A                                                                    */
/*  @version: 1.0                                                                         */
/*  @date:    2019-06-12                                                                  */
/*  @build:   b190612                                                                     */
/* ---------------------------------------------------------------------------------------*/
/*                                                                                        */
/* Copyright 2019-2020 NXP                                                                */
/* All rights reserved.                                                                   */
/*                                                                                        */
/* NXP Confidential.This software is owned or controlled by NXP and may only be           */
/* used strictly in accordance with the applicable license terms. By expressly            */
/* accepting such terms or by downloading, installing, activating and/or otherwise        */
/* using the software, you are agreeing that you have read, and that you agree to         */
/* comply with and are bound by, such license terms. If you do not agree to be            */
/* bound by the applicable license terms, then you may not retain, install,               */
/* activate or otherwise use the software. The production use license in                  */
/* Section 2.3 is expressly granted for this software.                                    */
/*****************************************************************************/
/* Version: GNU Compiler Collection                                          */
/* Implements : Startup_file_Class                                           */
/*****************************************************************************/
    .syntax unified
    .arch armv7-m

    .section .isr_vector, "a"
    .align 2
    .globl __isr_vector
__isr_vector:
    .long   __StackTop                                      /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler */
    .long   HardFault_Handler                               /* Hard Fault Handler */
    .long   MemManage_Handler                               /* MPU Fault Handler */
    .long   BusFault_Handler                                /* Bus Fault Handler */
    .long   UsageFault_Handler                              /* Usage Fault Handler */
    .long   0                                               /* Reserved */
    .long   0                                               /* Reserved */
    .long   0                                               /* Reserved */
    .long   0                                               /* Reserved */
    .long   SVC_Handler                                     /* SVCall Handler */
    .long   DebugMon_Handler                                /* Debug Monitor Handler */
    .long   0                                               /* Reserved */
    .long   PendSV_Handler                                  /* PendSV Handler */
    .long   SysTick_Handler                                 /* SysTick Handler */

    /* External Interrupts*/
    .long   PCIE_1_MSI_IRQHandler                           /* 0 PCIe_1 MSI interrupt to M7/A53 */
    .long   INT0_IRQHandler                                 /* 1 Software generated CPU interrupt to A53 core - interrupt#0 */
    .long   INT1_IRQHandler                                 /* 2 Software generated CPU interrupt to A53 core - interrupt#1 */
    .long   INT2_IRQHandler                                 /* 3 Software generated CPU interrupt to A53 core - interrupt#2 */
    .long   PCIE_0_MSI_IRQHandler                           /* 4 PCIe_0 MSI interrupt to M7/A53 */
    .long   CTI0_IRQHandler                                 /* 5 M7-only: CTI interrupt[0] */
    .long   CTI1_IRQHandler                                 /* 6 M7-only: CTI interrupt[1] */
    .long   MCM_IRQHandler                                  /* 7 Cortex M7 interrupt for FPU events and TCM errors */
    .long   DMA0_Ch0_Ch15_IRQHandler                        /* 8 eDMA0 - DMA interrupt CH0-15 */
    .long   DMA0_Ch16_Ch31_IRQHandler                       /* 9 eDMA0 - DMA interrupt CH16-31 */
    .long   DMA0_Ch0_Ch31_Error_IRQHandler                  /* 10 eDMA0 - DMA error interrupt */
    .long   DMA1_Ch0_Ch15_IRQHandler                        /* 11 eDMA1 - DMA interrupt  CH0-15 */
    .long   DMA1_Ch16_Ch31_IRQHandler                       /* 12 eDMA1 - DMA interrupt CH0-15 */
    .long   DMA1_Ch0_Ch31_Error_IRQHandler                  /* 13 eDMA1 - DMA error interrupt */
    .long   SWT0_IRQHandler                                 /* 14 Watchdog timer interrupt */
    .long   SWT1_IRQHandler                                 /* 15 Watchdog timer interrupt */
    .long   SWT2_IRQHandler                                 /* 16 Watchdog timer interrupt */
    .long   SWT3_IRQHandler                                 /* 17 Watchdog timer interrupt */
    .long   SWT4_IRQHandler                                 /* 18 Watchdog timer interrupt */
    .long   SWT5_IRQHandler                                 /* 19 Watchdog timer interrupt */
    .long   SWT6_IRQHandler                                 /* 20 Watchdog timer interrupt */
    .long   SWT7_IRQHandler                                 /* 21 Watchdog timer interrupt */
    .long   DefaultISR                                      /* 22 */
    .long   DefaultISR                                      /* 23 */
    .long   STM0_IRQHandler                                 /* 24 STM0 interrupt channel request 0, 1, 2, 3 */
    .long   STM1_IRQHandler                                 /* 25 STM1 interrupt channel request 0, 1, 2, 3 */
    .long   STM2_IRQHandler                                 /* 26 STM2 interrupt channel request 0, 1, 2, 3 */
    .long   STM3_IRQHandler                                 /* 27 STM3 interrupt channel request 0, 1, 2, 3 */
    .long   STM4_IRQHandler                                 /* 28 STM4 interrupt channel request 0, 1, 2, 3 */
    .long   STM5_IRQHandler                                 /* 29 STM5 interrupt channel request 0, 1, 2, 3 */
    .long   STM6_IRQHandler                                 /* 30 STM6 interrupt channel request 0, 1, 2, 3 */
    .long   STM7_IRQHandler                                 /* 31 STM7 interrupt channel request 0, 1, 2, 3 */
    .long   QSPI_IRQHandler                                 /* 32 Quad Serial Peripheral Interface Ored interrupt */
    .long   QUADSPI_FlashA_IRQHandler                       /* 33 Serial Flash A Error interrupt */
    .long   QUADSPI_FlashB_IRQHandler                       /* 34 Serial Flash B Error interrupt */
    .long   STCU2_IRQHandler                                /* 35 LBIST + MBIST IRQ */
    .long   USDHC_IRQHandler                                /* 36 uSDHC Interrupt */
    .long   CAN0_ORED_IRQHandler                            /* 37 CAN0 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN0_ERR_IRQHandler                             /* 38 CAN0 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN0_ORED_0_7_MB_IRQHandler                     /* 39 CAN0 OR'ed Message buffer (0-7) */
    .long   CAN0_ORED_8_127_MB_IRQHandler                   /* 40 CAN0 OR'ed Message buffer (8-127) */
    .long   CAN1_ORED_IRQHandler                            /* 41 CAN1 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN1_ERR_IRQHandler                             /* 42 CAN1 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN1_ORED_0_7_MB_IRQHandler                     /* 43 CAN1 OR'ed Message buffer (0-7) */
    .long   CAN1_ORED_8_127_MB_IRQHandler                   /* 44 CAN1 OR'ed Message buffer (8-127) */
    .long   CAN2_ORED_IRQHandler                            /* 45 CAN2 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN2_ERR_IRQHandler                             /* 46 CAN2 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN2_ORED_0_7_MB_IRQHandler                     /* 47 CAN2 OR'ed Message buffer (0-7) */
    .long   CAN2_ORED_8_127_MB_IRQHandler                   /* 48 CAN2 OR'ed Message buffer (8-127) */
    .long   CAN3_ORED_IRQHandler                            /* 49 CAN3 OR'ed [Bus Off OR Transmit Warning OR Receive Warning] */
    .long   CAN3_ERR_IRQHandler                             /* 50 CAN3 Interrupt indicating that errors were detected on the CAN bus */
    .long   CAN3_ORED_0_7_MB_IRQHandler                     /* 51 CAN3 OR'ed Message buffer (0-7) */
    .long   CAN3_ORED_8_127_MB_IRQHandler                   /* 52 CAN3 OR'ed Message buffer (8-127) */
    .long   PIT0_IRQHandler                                 /* 53 PIT0 OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, 6 */
    .long   PIT1_IRQHandler                                 /* 54 PIT1 OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5 */
    .long   FTM0_IRQHandler                                 /* 55 FTM0 OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, Overflow, Reload */
    .long   FTM1_IRQHandler                                 /* 56 FTM1 OR'ed Interrupt for Channel 0, 1, 2, 3, 4, 5, Overflow, Reload */
    .long   GMAC0_Common_IRQHandler                          /* 57 Gigabit ENET MAC Common Interrupt */
    .long   GMAC0_CH0_TX_IRQHandler                         /* 58 Gigabit ENET MAC Channel0 Tx Interrupt */
    .long   GMAC0_CH0_RX_IRQHandler                         /* 59 Gigabit ENET MAC Channel0 Rx Interrupt */
    .long   GMAC0_CH1_TX_IRQHandler                         /* 60 Gigabit ENET MAC Channel1 Tx Interrupt */
    .long   GMAC0_CH1_RX_IRQHandler                         /* 61 Gigabit ENET MAC Channel1 Rx Interrupt */
    .long   GMAC0_CH2_TX_IRQHandler                         /* 62 Gigabit ENET MAC Channel2 Tx Interrupt */
    .long   GMAC0_CH2_RX_IRQHandler                         /* 63 Gigabit ENET MAC Channel2 Rx Interrupt */
    .long   GMAC0_CH3_TX_IRQHandler                         /* 64 Gigabit ENET MAC Channel3 Tx Interrupt */
    .long   GMAC0_CH3_RX_IRQHandler                         /* 65 Gigabit ENET MAC Channel3 Rx Interrupt */
    .long   GMAC0_CH4_TX_IRQHandler                         /* 66 Gigabit ENET MAC Channel4 Tx Interrupt */
    .long   GMAC0_CH4_RX_IRQHandler                         /* 67 Gigabit ENET MAC Channel4 Rx Interrupt */
    .long   DefaultISR                                      /* 68 */
    .long   DefaultISR                                      /* 69 */
    .long   SARADC0_IRQHandler                              /* 70 SARADC0 EOC + ERR + Watchdog Interrupt */
    .long   SARADC1_IRQHandler                              /* 71 SARADC1 EOC + ERR + Watchdog Interrupt */
    .long   FR_NCERR_IRQHandler                             /* 72 FLEXRAY0 LRAM & DRAM Non-Corrected Error interrupt */
    .long   FR_CERR_IRQHandler                              /* 73 FLEXRAY0 LRAM & DRAM Corrected Error interrupt */
    .long   FR_Ch0_Rx_FIFO_IRQHandler                       /* 74 FLEXRAY0 Receive FIFO channel A not empty interrupt */
    .long   FR_Ch1_Rx_FIFO_IRQHandler                       /* 75 FLEXRAY0 Receive FIFO channel B not empty interrupt */
    .long   FR_WKUP_IRQHandler                              /* 76 FLEXRAY0 Wakeup interrupt */
    .long   FR_Status_IRQHandler                            /* 77 FLEXRAY0 Combined protocol status and error interrupt */
    .long   FR_CMBERR_IRQHandler                            /* 78 FLEXRAY0 Combined CHI error interrupt */
    .long   FR_Tx_BUFF_IRQHandler                           /* 79 FLEXRAY0 Combined transmit message buffer interrupt */
    .long   FR_Rx_BUFF_IRQHandler                           /* 80 FLEXRAY0 Combined receive message buffer interrupt */
    .long   FR_MODULE_IRQHandler                            /* 81 FLEXRAY0 Combined module interrupt */
    .long   LINFLEXD0_IRQHandler                            /* 82 LINFLEXD0 Internal all interrupt request */
    .long   LINFLEXD1_IRQHandler                            /* 83 LINFLEXD1 Internal all interrupt request */
    .long   LINFLEXD2_IRQHandler                            /* 84 LINFLEXD2 Internal all interrupt request */
    .long   SPI0_IRQHandler                                 /* 85 SPI0 OR'ed DSPI Global Interrupt */
    .long   SPI1_IRQHandler                                 /* 86 SPI1 OR'ed DSPI Global Interrupt */
    .long   SPI2_IRQHandler                                 /* 87 SPI2 OR'ed DSPI Global Interrupt */
    .long   SPI3_IRQHandler                                 /* 88 SPI3 OR'ed DSPI Global Interrupt */
    .long   SPI4_IRQHandler                                 /* 89 SPI4 OR'ed DSPI Global Interrupt */
    .long   SPI5_IRQHandler                                 /* 90 SPI5 OR'ed DSPI Global Interrupt */
    .long   DefaultISR                                      /* 91 */
    .long   I2C0_IRQHandler                                 /* 92 I2C0 Interrupt Request */
    .long   I2C1_IRQHandler                                 /* 93 I2C1 Interrupt Request */
    .long   I2C2_IRQHandler                                 /* 94 I2C2 Interrupt Request */
    .long   I2C3_IRQHandler                                 /* 95 I2C3 Interrupt Request */
    .long   I2C4_IRQHandler                                 /* 96 I2C4 Interrupt Request */
    .long   DefaultISR                                      /* 97 */
    .long   MC_RGM_IRQHandler                               /* 98 MC_RGM Interrupt Request to System */
    .long   DefaultISR                                      /* 99 */
    .long   FCCU_ALARM_IRQHandler                           /* 100 FCCU Interrupt request (ALARM state) */
    .long   FCCU_MISC_IRQHandler                            /* 101 FCCU Interrupt request (miscellaneous conditions) */
    .long   SBSW_IRQHandler                                 /* 102 SBSW Interrupt triggered by writing to the TMWDP CONFG_ADDR Register */
    .long   HSE_MU0_Tx_IRQHandler                           /* 103 HSE Ored tx interrupt to MU-0 */
    .long   HSE_MU0_Rx_IRQHandler                           /* 104 HSE Ored rx interrupt to MU-0 */
    .long   HSE_MU0_Ored_IRQHandler                         /* 105 HSE Ored general purpose interrupt request to MU-0 */
    .long   HSE_MU1_Tx_IRQHandler                           /* 106 HSE Ored tx interrupt to MU-1 */
    .long   HSE_MU1_Rx_IRQHandler                           /* 107 HSE Ored rx interrupt to MU-1 */
    .long   HSE_MU1_Ored_IRQHandler                         /* 108 HSE Ored general purpose interrupt request to MU-1 */
    .long   HSE_MU2_Tx_IRQHandler                           /* 109 HSE Ored tx interrupt to MU-2 */
    .long   HSE_MU2_Rx_IRQHandler                           /* 110 HSE Ored rx interrupt to MU-2 */
    .long   HSE_MU2_Ored_IRQHandler                         /* 111 HSE Ored general purpose interrupt request to MU-2 */
    .long   HSE_MU3_Tx_IRQHandler                           /* 112 HSE Ored tx interrupt to MU-3 */
    .long   HSE_MU3_Rx_IRQHandler                           /* 113 HSE Ored rx interrupt to MU-3 */
    .long   HSE_MU3_Ored_IRQHandler                         /* 114 HSE Ored general purpose interrupt request to MU-3 */
    .long   DDR0_SCRUB_IRQHandler                           /* 115 DDR0 Scrubber interrupt indicating one full address range sweep */
    .long   DDR0_PHY_IRQHandler                             /* 116 DDR0 PHY address decoding error inside DDR SS, PHY interrupt */
    .long   CTU_FIFO_IRQHandler                             /* CTU 117 FIFO0 | FIFO1 | FIFO2 | FIFO3 Full or Empty or Overflow or Overrun */
    .long   CTU_TRIG_IRQHandler                             /* CTU 118 Master reload, Trigger 0-7, ADC cmd */
    .long   CTU_ERR_IRQHandler                              /* CTU 119 Error interrupt */
    .long   TMU_IRQHandler                                  /* 120 TMU Level sensitive temperature alarm interrupt | Level sensitive critical temperature alarm interrupt */
    .long   RTC0_IRQHandler                                 /* 121 RTCF or ROVRF interrupt to be serviced by the system controller | APIF interrupt to be serviced by the system controller */
    .long   DefaultISR                                      /* 122 */
    .long   PCIE0_DMA_IRQHandler                            /* 123 PCIE0 Logical OR of PCIe DMA interrupts */
    .long   PCIE0_LINK_IRQHandler                           /* 124 PCIE0 Link request status interrupt */
    .long   PCIE0_DSP_IRQHandler                            /* 125 PCIE0 DSP AXI MSI Interrupt Detected */
    .long   PCIE0_PHY_LD_IRQHandler                         /* 126 PCIE0 PHY link down interrupt */
    .long   PCIE0_PHY_LU_IRQHandler                         /* 127 PCIE0 PHY link up interrupt */
    .long   PCIE0_INTA_IRQHandler                           /* 128 PCIE0 Interrupt indicating INTA message received */
    .long   PCIE0_INTB_IRQHandler                           /* 129 PCIE0 Interrupt indicating INTB message received */
    .long   PCIE0_INTC_IRQHandler                           /* 130 PCIE0 Interrupt indicating INTC message received */
    .long   PCIE0_INTD_IRQHandler                           /* 131 PCIE0 Interrupt indicating INTD message received */
    .long   PCIE0_MISC_IRQHandler                           /* 132 PCIE0 Miscellaneous interrupt generated by PCIe Subsystem */
    .long   PCIE0_PCS_IRQHandler                            /* 133 PCIE0 PCS interrupt */
    .long   PCIE0_TLP_IRQHandler                            /* 134 PCIE0 TLP request has not completed within the expected time window */
    .long   OTC_INT0_Slot0_IRQHandler                       /* 135 OTC Interrupt 0 OS_SLOT_0 via platform */
    .long   OTC_INT1_Slot0_IRQHandler                       /* 136 OTC Interrupt 1 OS_SLOT_0 via platform */
    .long   OTC_INT0_Slot1_IRQHandler                       /* 137 OTC Interrupt 0 OS_SLOT_1 via platform */
    .long   OTC_INT1_Slot1_IRQHandler                       /* 138 OTC Interrupt 1 OS_SLOT_1 via platform */
    .long   OTC_INT0_Slot2_IRQHandler                       /* 139 OTC Interrupt 0 OS_SLOT_2 via platform */
    .long   OTC_INT1_Slot2_IRQHandler                       /* 140 OTC Interrupt 1 OS_SLOT_2 via platform */
    .long   OTC_INT0_Slot3_IRQHandler                       /* 141 OTC Interrupt 0 OS_SLOT_3 via platform */
    .long   OTC_INT1_Slot3_IRQHandler                       /* 142 OTC Interrupt 1 OS_SLOT_3 via platform */
    .long   OTC_INT0_Slot4_IRQHandler                       /* 143 OTC Interrupt 0 OS_SLOT_4 via platform */
    .long   OTC_INT1_Slot4_IRQHandler                       /* 144 OTC Interrupt 1 OS_SLOT_4 via platform */
    .long   OTC_CTRL_NOTIF_IRQHandler                       /* 145 OTC controller notification interrupt via platform */
    .long   OTC_CTRL_Err_IRQHandler                         /* 146 OTC controller error interrupt via platform */
    .long   OTC_SOFT_NOTIF_IRQHandler                       /* 147 OTC software notification interrupt via platform */
    .long   OTC_REG_Err_IRQHandler                          /* 148 OTC register access error interrupt via platform */
    .long   DefaultISR                                      /* 149 */
    .long   OTC_CRIT_Err_IRQHandler                         /* 150 OTC critical error interrupt via platform */
    .long   DefaultISR                                      /* 151 */
    .long   DefaultISR                                      /* 152 */
    .long   DefaultISR                                      /* 153 */
    .long   DefaultISR                                      /* 154 */
    .long   JDC_IRQHandler                                  /* 155 JDC Indicates data ready to be read from JIN_IPS register or new data can be written to JOUT_IPS register when asserted */
    .long   DefaultISR                                      /* 156 */
    .long   DefaultISR                                      /* 157 */
    .long   DefaultISR                                      /* 158 */
    .long   DefaultISR                                      /* 159 */
    .long   DefaultISR                                      /* 160 */
    .long   DefaultISR                                      /* 161 */
    .long   DefaultISR                                      /* 162 */
    .long   DefaultISR                                      /* 163 */
    .long   DefaultISR                                      /* 164 */
    .long   DefaultISR                                      /* 165 */
    .long   DefaultISR                                      /* 166 */
    .long   DefaultISR                                      /* 167 */
    .long   DefaultISR                                      /* 168 */
    .long   DefaultISR                                      /* 169 */
    .long   LLCE0_INT0_IRQHandler                           /* 170 Host Interrupt from Core0 */
    .long   LLCE0_INT1_IRQHandler                           /* 171 Host Interrupt from Core1 */
    .long   LLCE0_INT2_IRQHandler                           /* 172 Host Interrupt from Core2 */
    .long   LLCE0_INT3_IRQHandler                           /* 173 Host Interrupt from Core3 */
    .long   LLCE0_ICSR14_IRQHandler                         /* 174 FIFO ICSR14 */
    .long   LLCE0_ICSR15_IRQHandler                         /* 175 FIFO ICSR15 */
    .long   LLCE0_ICSR16_IRQHandler                         /* 176 FIFO ICSR16 */
    .long   LLCE0_ICSR17_IRQHandler                         /* 177 FIFO ICSR17 */
    .long   LLCE0_ICSR18_IRQHandler                         /* 178 FIFO ICSR18 */
    .long   LLCE0_ICSR19_IRQHandler                         /* 179 FIFO ICSR19 */
    .long   LLCE0_ICSR20_IRQHandler                         /* 180 FIFO ICSR20 */
    .long   LLCE0_ICSR21_IRQHandler                         /* 181 FIFO ICSR21 */
    .long   LLCE0_ICSR22_IRQHandler                         /* 182 FIFO ICSR22 */
    .long   LLCE0_ICSR23_IRQHandler                         /* 183 FIFO ICSR23 */
    .long   LLCE0_ICSR24_IRQHandler                         /* 184 FIFO ICSR24 */
    .long   LLCE0_ICSR25_IRQHandler                         /* 185 FIFO ICSR25 */
    .long   LLCE0_ICSR26_IRQHandler                         /* 186 FIFO ICSR26 */
    .long   LLCE0_ICSR27_IRQHandler                         /* 187 FIFO ICSR27 */
    .long   DefaultISR                                      /* 188 */
    .long   DefaultISR                                      /* 189 */
    .long   PFE0_CH0_STAT_IRQHandler                        /* 190 Channel 0 interrupt signal status */
    .long   PFE0_CH1_STAT_IRQHandler                        /* 191 Channel 1 interrupt signal status */
    .long   PFE0_CH2_STAT_IRQHandler                        /* 192 Channel 2 interrupt signal status */
    .long   PFE0_CH3_STAT_IRQHandler                        /* 193 Channel 3 interrupt signal status */
    .long   PFE0_BMU1_BMU2_IRQHandler                       /* 194 Either BMU1 or BMU2 interrupt */
    .long   PFE0_HIF_NC_IRQHandler                          /* 195 HIF no copy */
    .long   PFE0_UT_GPT_IRQHandler                          /* 196 Utilpe or GPT interrupt */
    .long   PFE0_PMT_IRQHandler                             /* 197 PMT interrupt */
    .long   PFE0_ORED_IRQHandler                            /* 198 Logical OR all interrupts from MMC and PCS and MAC */
    .long   DefaultISR                                      /* 199 */
    .long   DefaultISR                                      /* 200 */
    .long   DefaultISR                                      /* 201 */
    .long   DefaultISR                                      /* 202 */
    .long   DefaultISR                                      /* 203 */
    .long   STM_TS_CH_REQ_IRQHandler                        /* 204 Interrupt Channel Request 0,1,2,3 */
    .long   DefaultISR                                      /* 205 */
    .long   DefaultISR                                      /* 206 */
    .long   DefaultISR                                      /* 207 */
    .long   DefaultISR                                      /* 208 */
    .long   DefaultISR                                      /* 209 */
    .long   SIUL1_ORED_IRQHandler                           /* 210 Logical OR of all pin interrupts */
    .long   USB0_OTG_CORE_IRQHandler                        /* 211 OTG CORE Interrupt */
    .long   USB0_OTG_WKP_IRQHandler                         /* 212 OTG Wakeup Interrupt */
    .long   WKPU_GRP_IRQHandler                             /* 213 interrupts from pad group 0,1,2,3 */
    .long   PCIE1_ORED_DMA_IRQHandler                       /* 214 Logical OR of PCIe DMA interrupts */
    .long   PCIE1_STAT_IRQHandler                           /* 215 Link request status interrupt */
    .long   PCIE1_AXI_MSI_IRQHandler                        /* 216 DSP AXI MSI Interrupt Detected */
    .long   PCIE1_PHY_LDOWN_IRQHandler                      /* 217 PHY link down interrupt */
    .long   PCIE1_PHY_LUP_IRQHandler                        /* 218 PHY link up interrupt */
    .long   PCIE1_INTA_IRQHandler                           /* 219 Interrupt indicating INTA message received */
    .long   PCIE1_INTB_IRQHandler                           /* 220 Interrupt indicating INTB message received */
    .long   PCIE1_INTC_IRQHandler                           /* 221 Interrupt indicating INTC message received */
    .long   PCIE1_INTD_IRQHandler                           /* 222 Interrupt indicating INTD message received */
    .long   PCIE1_MISC_IRQHandler                           /* 223 Miscellaneous interrupt generated by PCIe Subsystem */
    .long   PCIE1_PCS_IRQHandler                            /* 224 PCS interrupt */
    .long   PCIE1_TLP_IRQHandler                            /* 225 TLP request has not completed within the expected time window */

    .size    __isr_vector, . - __isr_vector

/* Init table */
    .section .init_table, "a"
    .long 5
    .long __VECTOR_TABLE
    .long __VECTOR_RAM
    .long __VECTOR_TABLE_COPY_END
    .long __CUSTOM_ROM
    .long __CUSTOM_RAM
    .long __CUSTOM_END
    .long __DATA_NON_CACHEABLE_ROM
    .long __DATA_NON_CACHEABLE_RAM
    .long __DATA_NON_CACHEABLE_END
    .long __DATA_ROM
    .long __DATA_RAM
    .long __DATA_END
    .long __CODE_ROM
    .long __CODE_RAM
    .long __CODE_END
/* Zero table */
    .section .zero_table, "a"
    .long 2
    .long __BSS_NON_CACHEABLE_START
    .long __BSS_NON_CACHEABLE_END
    .long __BSS_START
    .long __BSS_END

    .text
    .thumb

/* Reset Handler */

    .thumb_func
    .align 2
    .globl   Reset_Handler
    .weak    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
    cpsid   i               /* Mask interrupts */

    /* Init the rest of the registers */
    ldr     r1,=0
    ldr     r2,=0
    ldr     r3,=0
    ldr     r4,=0
    ldr     r5,=0
    ldr     r6,=0
    ldr     r7,=0
    mov     r8,r7
    mov     r9,r7
    mov     r10,r7
    mov     r11,r7
    mov     r12,r7

    /* Initialize the stack pointer */
    ldr     r0,=__StackTop
    mov     r13,r0

    /* Clear DTCM */
    ldr     r1, =__m_dtcm_start
    ldr     r2, =__m_dtcm_end
    bl      .ClearMEM_Init

    /* Clear Stack */
    ldr     r1, =__StackLimit
    ldr     r2, =__StackTop
    bl      .ClearMEM_Init

#ifndef __NO_SYSTEM_INIT
    /* Call the system init routine */
    ldr     r0,=SystemInit
    blx     r0
#endif

    /* Init .data and .bss sections */
    //ldr     r0,=init_data_bss
    //blx     r0
    cpsie   i               /* Unmask interrupts */
    bl      main
JumpToSelf:
    b       JumpToSelf

    .pool
    .size Reset_Handler, . - Reset_Handler

    .text
    .thumb_func
    .align 2
    /* Function for MEM clear, r1 = base addr, r2 = limit address */
.ClearMEM_Init:
  /* Clear MEM */
    mov   r0, 0 
.ClearMEM:
    str r0, [r1]
    add r1, r1, #4
    cmp r1, r2
    bcc .ClearMEM
    bx lr

    .align  1
    .thumb_func
    .weak DefaultISR
    .type DefaultISR, %function
DefaultISR:
    b       DefaultISR
    .size DefaultISR, . - DefaultISR

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler	handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm

/* Exception Handlers */
    def_irq_handler    NMI_Handler
    def_irq_handler    HardFault_Handler
    def_irq_handler    MemManage_Handler
    def_irq_handler    BusFault_Handler
    def_irq_handler    UsageFault_Handler
    def_irq_handler    SVC_Handler
    def_irq_handler    DebugMon_Handler
    def_irq_handler    PendSV_Handler
    def_irq_handler    SysTick_Handler
    def_irq_handler    PCIE_1_MSI_IRQHandler
    def_irq_handler    INT0_IRQHandler
    def_irq_handler    INT1_IRQHandler
    def_irq_handler    INT2_IRQHandler
    def_irq_handler    PCIE_0_MSI_IRQHandler
    def_irq_handler    CTI0_IRQHandler
    def_irq_handler    CTI1_IRQHandler
    def_irq_handler    MCM_IRQHandler
    def_irq_handler    DMA0_Ch0_Ch15_IRQHandler
    def_irq_handler    DMA0_Ch16_Ch31_IRQHandler
    def_irq_handler    DMA0_Ch0_Ch31_Error_IRQHandler
    def_irq_handler    DMA1_Ch0_Ch15_IRQHandler
    def_irq_handler    DMA1_Ch16_Ch31_IRQHandler
    def_irq_handler    DMA1_Ch0_Ch31_Error_IRQHandler
    def_irq_handler    SWT0_IRQHandler
    def_irq_handler    SWT1_IRQHandler
    def_irq_handler    SWT2_IRQHandler
    def_irq_handler    SWT3_IRQHandler
    def_irq_handler    SWT4_IRQHandler
    def_irq_handler    SWT5_IRQHandler
    def_irq_handler    SWT6_IRQHandler
    def_irq_handler    SWT7_IRQHandler
    def_irq_handler    STM0_IRQHandler
    def_irq_handler    STM1_IRQHandler
    def_irq_handler    STM2_IRQHandler
    def_irq_handler    STM3_IRQHandler
    def_irq_handler    STM4_IRQHandler
    def_irq_handler    STM5_IRQHandler
    def_irq_handler    STM6_IRQHandler
    def_irq_handler    STM7_IRQHandler
    def_irq_handler    QSPI_IRQHandler
    def_irq_handler    QUADSPI_FlashA_IRQHandler
    def_irq_handler    QUADSPI_FlashB_IRQHandler
    def_irq_handler    STCU2_IRQHandler
    def_irq_handler    USDHC_IRQHandler
    def_irq_handler    CAN0_ORED_IRQHandler
    def_irq_handler    CAN0_ERR_IRQHandler
    def_irq_handler    CAN0_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN0_ORED_8_127_MB_IRQHandler
    def_irq_handler    CAN1_ORED_IRQHandler
    def_irq_handler    CAN1_ERR_IRQHandler
    def_irq_handler    CAN1_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN1_ORED_8_127_MB_IRQHandler
    def_irq_handler    CAN2_ORED_IRQHandler
    def_irq_handler    CAN2_ERR_IRQHandler
    def_irq_handler    CAN2_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN2_ORED_8_127_MB_IRQHandler
    def_irq_handler    CAN3_ORED_IRQHandler
    def_irq_handler    CAN3_ERR_IRQHandler
    def_irq_handler    CAN3_ORED_0_7_MB_IRQHandler
    def_irq_handler    CAN3_ORED_8_127_MB_IRQHandler
    def_irq_handler    PIT0_IRQHandler
    def_irq_handler    PIT1_IRQHandler
    def_irq_handler    FTM0_IRQHandler
    def_irq_handler    FTM1_IRQHandler
    def_irq_handler    GMAC0_Common_IRQHandler
    def_irq_handler    GMAC0_CH0_TX_IRQHandler
    def_irq_handler    GMAC0_CH0_RX_IRQHandler
    def_irq_handler    GMAC0_CH1_TX_IRQHandler
    def_irq_handler    GMAC0_CH1_RX_IRQHandler
    def_irq_handler    GMAC0_CH2_TX_IRQHandler
    def_irq_handler    GMAC0_CH2_RX_IRQHandler
    def_irq_handler    GMAC0_CH3_TX_IRQHandler
    def_irq_handler    GMAC0_CH3_RX_IRQHandler
    def_irq_handler    GMAC0_CH4_TX_IRQHandler
    def_irq_handler    GMAC0_CH4_RX_IRQHandler
    def_irq_handler    SARADC0_IRQHandler
    def_irq_handler    SARADC1_IRQHandler
    def_irq_handler    FR_NCERR_IRQHandler
    def_irq_handler    FR_CERR_IRQHandler
    def_irq_handler    FR_Ch0_Rx_FIFO_IRQHandler
    def_irq_handler    FR_Ch1_Rx_FIFO_IRQHandler
    def_irq_handler    FR_WKUP_IRQHandler
    def_irq_handler    FR_Status_IRQHandler
    def_irq_handler    FR_CMBERR_IRQHandler
    def_irq_handler    FR_Tx_BUFF_IRQHandler
    def_irq_handler    FR_Rx_BUFF_IRQHandler
    def_irq_handler    FR_MODULE_IRQHandler
    def_irq_handler    LINFLEXD0_IRQHandler
    def_irq_handler    LINFLEXD1_IRQHandler
    def_irq_handler    LINFLEXD2_IRQHandler
    def_irq_handler    SPI0_IRQHandler
    def_irq_handler    SPI1_IRQHandler
    def_irq_handler    SPI2_IRQHandler
    def_irq_handler    SPI3_IRQHandler
    def_irq_handler    SPI4_IRQHandler
    def_irq_handler    SPI5_IRQHandler
    def_irq_handler    I2C0_IRQHandler
    def_irq_handler    I2C1_IRQHandler
    def_irq_handler    I2C2_IRQHandler
    def_irq_handler    I2C3_IRQHandler
    def_irq_handler    I2C4_IRQHandler
    def_irq_handler    MC_RGM_IRQHandler
    def_irq_handler    FCCU_ALARM_IRQHandler
    def_irq_handler    FCCU_MISC_IRQHandler
    def_irq_handler    SBSW_IRQHandler
    def_irq_handler    HSE_MU0_Tx_IRQHandler
    def_irq_handler    HSE_MU0_Rx_IRQHandler
    def_irq_handler    HSE_MU0_Ored_IRQHandler
    def_irq_handler    HSE_MU1_Tx_IRQHandler
    def_irq_handler    HSE_MU1_Rx_IRQHandler
    def_irq_handler    HSE_MU1_Ored_IRQHandler
    def_irq_handler    HSE_MU2_Tx_IRQHandler
    def_irq_handler    HSE_MU2_Rx_IRQHandler
    def_irq_handler    HSE_MU2_Ored_IRQHandler
    def_irq_handler    HSE_MU3_Tx_IRQHandler
    def_irq_handler    HSE_MU3_Rx_IRQHandler
    def_irq_handler    HSE_MU3_Ored_IRQHandler
    def_irq_handler    DDR0_SCRUB_IRQHandler
    def_irq_handler    DDR0_PHY_IRQHandler
    def_irq_handler    CTU_FIFO_IRQHandler
    def_irq_handler    CTU_TRIG_IRQHandler
    def_irq_handler    CTU_ERR_IRQHandler
    def_irq_handler    TMU_IRQHandler
    def_irq_handler    RTC0_IRQHandler
    def_irq_handler    PCIE0_DMA_IRQHandler
    def_irq_handler    PCIE0_LINK_IRQHandler
    def_irq_handler    PCIE0_DSP_IRQHandler
    def_irq_handler    PCIE0_PHY_LD_IRQHandler
    def_irq_handler    PCIE0_PHY_LU_IRQHandler
    def_irq_handler    PCIE0_INTA_IRQHandler
    def_irq_handler    PCIE0_INTB_IRQHandler
    def_irq_handler    PCIE0_INTC_IRQHandler
    def_irq_handler    PCIE0_INTD_IRQHandler
    def_irq_handler    PCIE0_MISC_IRQHandler
    def_irq_handler    PCIE0_PCS_IRQHandler
    def_irq_handler    PCIE0_TLP_IRQHandler
    def_irq_handler    OTC_INT0_Slot0_IRQHandler
    def_irq_handler    OTC_INT1_Slot0_IRQHandler
    def_irq_handler    OTC_INT0_Slot1_IRQHandler
    def_irq_handler    OTC_INT1_Slot1_IRQHandler
    def_irq_handler    OTC_INT0_Slot2_IRQHandler
    def_irq_handler    OTC_INT1_Slot2_IRQHandler
    def_irq_handler    OTC_INT0_Slot3_IRQHandler
    def_irq_handler    OTC_INT1_Slot3_IRQHandler
    def_irq_handler    OTC_INT0_Slot4_IRQHandler
    def_irq_handler    OTC_INT1_Slot4_IRQHandler
    def_irq_handler    OTC_CTRL_NOTIF_IRQHandler
    def_irq_handler    OTC_CTRL_Err_IRQHandler
    def_irq_handler    OTC_SOFT_NOTIF_IRQHandler
    def_irq_handler    OTC_REG_Err_IRQHandler
    def_irq_handler    OTC_CRIT_Err_IRQHandler
    def_irq_handler    JDC_IRQHandler
    def_irq_handler    LLCE0_INT0_IRQHandler
    def_irq_handler    LLCE0_INT1_IRQHandler
    def_irq_handler    LLCE0_INT2_IRQHandler
    def_irq_handler    LLCE0_INT3_IRQHandler
    def_irq_handler    LLCE0_ICSR14_IRQHandler
    def_irq_handler    LLCE0_ICSR15_IRQHandler
    def_irq_handler    LLCE0_ICSR16_IRQHandler
    def_irq_handler    LLCE0_ICSR17_IRQHandler
    def_irq_handler    LLCE0_ICSR18_IRQHandler
    def_irq_handler    LLCE0_ICSR19_IRQHandler
    def_irq_handler    LLCE0_ICSR20_IRQHandler
    def_irq_handler    LLCE0_ICSR21_IRQHandler
    def_irq_handler    LLCE0_ICSR22_IRQHandler
    def_irq_handler    LLCE0_ICSR23_IRQHandler
    def_irq_handler    LLCE0_ICSR24_IRQHandler
    def_irq_handler    LLCE0_ICSR25_IRQHandler
    def_irq_handler    LLCE0_ICSR26_IRQHandler
    def_irq_handler    LLCE0_ICSR27_IRQHandler
    def_irq_handler    PFE0_CH0_STAT_IRQHandler
    def_irq_handler    PFE0_CH1_STAT_IRQHandler
    def_irq_handler    PFE0_CH2_STAT_IRQHandler
    def_irq_handler    PFE0_CH3_STAT_IRQHandler
    def_irq_handler    PFE0_BMU1_BMU2_IRQHandler
    def_irq_handler    PFE0_HIF_NC_IRQHandler
    def_irq_handler    PFE0_UT_GPT_IRQHandler
    def_irq_handler    PFE0_PMT_IRQHandler
    def_irq_handler    PFE0_ORED_IRQHandler
    def_irq_handler    STM_TS_CH_REQ_IRQHandler
    def_irq_handler    SIUL1_ORED_IRQHandler
    def_irq_handler    USB0_OTG_CORE_IRQHandler
    def_irq_handler    USB0_OTG_WKP_IRQHandler
    def_irq_handler    WKPU_GRP_IRQHandler
    def_irq_handler    PCIE1_ORED_DMA_IRQHandler
    def_irq_handler    PCIE1_STAT_IRQHandler
    def_irq_handler    PCIE1_AXI_MSI_IRQHandler
    def_irq_handler    PCIE1_PHY_LDOWN_IRQHandler
    def_irq_handler    PCIE1_PHY_LUP_IRQHandler
    def_irq_handler    PCIE1_INTA_IRQHandler
    def_irq_handler    PCIE1_INTB_IRQHandler
    def_irq_handler    PCIE1_INTC_IRQHandler
    def_irq_handler    PCIE1_INTD_IRQHandler
    def_irq_handler    PCIE1_MISC_IRQHandler
    def_irq_handler    PCIE1_PCS_IRQHandler
    def_irq_handler    PCIE1_TLP_IRQHandler

    .end
