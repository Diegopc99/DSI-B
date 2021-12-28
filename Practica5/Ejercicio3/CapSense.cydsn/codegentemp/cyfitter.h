/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* UART_1 */
#define UART_1_SCB__CTRL CYREG_SCB3_CTRL
#define UART_1_SCB__EZ_DATA0 CYREG_SCB3_EZ_DATA0
#define UART_1_SCB__EZ_DATA1 CYREG_SCB3_EZ_DATA1
#define UART_1_SCB__EZ_DATA10 CYREG_SCB3_EZ_DATA10
#define UART_1_SCB__EZ_DATA11 CYREG_SCB3_EZ_DATA11
#define UART_1_SCB__EZ_DATA12 CYREG_SCB3_EZ_DATA12
#define UART_1_SCB__EZ_DATA13 CYREG_SCB3_EZ_DATA13
#define UART_1_SCB__EZ_DATA14 CYREG_SCB3_EZ_DATA14
#define UART_1_SCB__EZ_DATA15 CYREG_SCB3_EZ_DATA15
#define UART_1_SCB__EZ_DATA16 CYREG_SCB3_EZ_DATA16
#define UART_1_SCB__EZ_DATA17 CYREG_SCB3_EZ_DATA17
#define UART_1_SCB__EZ_DATA18 CYREG_SCB3_EZ_DATA18
#define UART_1_SCB__EZ_DATA19 CYREG_SCB3_EZ_DATA19
#define UART_1_SCB__EZ_DATA2 CYREG_SCB3_EZ_DATA2
#define UART_1_SCB__EZ_DATA20 CYREG_SCB3_EZ_DATA20
#define UART_1_SCB__EZ_DATA21 CYREG_SCB3_EZ_DATA21
#define UART_1_SCB__EZ_DATA22 CYREG_SCB3_EZ_DATA22
#define UART_1_SCB__EZ_DATA23 CYREG_SCB3_EZ_DATA23
#define UART_1_SCB__EZ_DATA24 CYREG_SCB3_EZ_DATA24
#define UART_1_SCB__EZ_DATA25 CYREG_SCB3_EZ_DATA25
#define UART_1_SCB__EZ_DATA26 CYREG_SCB3_EZ_DATA26
#define UART_1_SCB__EZ_DATA27 CYREG_SCB3_EZ_DATA27
#define UART_1_SCB__EZ_DATA28 CYREG_SCB3_EZ_DATA28
#define UART_1_SCB__EZ_DATA29 CYREG_SCB3_EZ_DATA29
#define UART_1_SCB__EZ_DATA3 CYREG_SCB3_EZ_DATA3
#define UART_1_SCB__EZ_DATA30 CYREG_SCB3_EZ_DATA30
#define UART_1_SCB__EZ_DATA31 CYREG_SCB3_EZ_DATA31
#define UART_1_SCB__EZ_DATA4 CYREG_SCB3_EZ_DATA4
#define UART_1_SCB__EZ_DATA5 CYREG_SCB3_EZ_DATA5
#define UART_1_SCB__EZ_DATA6 CYREG_SCB3_EZ_DATA6
#define UART_1_SCB__EZ_DATA7 CYREG_SCB3_EZ_DATA7
#define UART_1_SCB__EZ_DATA8 CYREG_SCB3_EZ_DATA8
#define UART_1_SCB__EZ_DATA9 CYREG_SCB3_EZ_DATA9
#define UART_1_SCB__I2C_CFG CYREG_SCB3_I2C_CFG
#define UART_1_SCB__I2C_CTRL CYREG_SCB3_I2C_CTRL
#define UART_1_SCB__I2C_M_CMD CYREG_SCB3_I2C_M_CMD
#define UART_1_SCB__I2C_S_CMD CYREG_SCB3_I2C_S_CMD
#define UART_1_SCB__I2C_STATUS CYREG_SCB3_I2C_STATUS
#define UART_1_SCB__INTR_CAUSE CYREG_SCB3_INTR_CAUSE
#define UART_1_SCB__INTR_I2C_EC CYREG_SCB3_INTR_I2C_EC
#define UART_1_SCB__INTR_I2C_EC_MASK CYREG_SCB3_INTR_I2C_EC_MASK
#define UART_1_SCB__INTR_I2C_EC_MASKED CYREG_SCB3_INTR_I2C_EC_MASKED
#define UART_1_SCB__INTR_M CYREG_SCB3_INTR_M
#define UART_1_SCB__INTR_M_MASK CYREG_SCB3_INTR_M_MASK
#define UART_1_SCB__INTR_M_MASKED CYREG_SCB3_INTR_M_MASKED
#define UART_1_SCB__INTR_M_SET CYREG_SCB3_INTR_M_SET
#define UART_1_SCB__INTR_RX CYREG_SCB3_INTR_RX
#define UART_1_SCB__INTR_RX_MASK CYREG_SCB3_INTR_RX_MASK
#define UART_1_SCB__INTR_RX_MASKED CYREG_SCB3_INTR_RX_MASKED
#define UART_1_SCB__INTR_RX_SET CYREG_SCB3_INTR_RX_SET
#define UART_1_SCB__INTR_S CYREG_SCB3_INTR_S
#define UART_1_SCB__INTR_S_MASK CYREG_SCB3_INTR_S_MASK
#define UART_1_SCB__INTR_S_MASKED CYREG_SCB3_INTR_S_MASKED
#define UART_1_SCB__INTR_S_SET CYREG_SCB3_INTR_S_SET
#define UART_1_SCB__INTR_SPI_EC CYREG_SCB3_INTR_SPI_EC
#define UART_1_SCB__INTR_SPI_EC_MASK CYREG_SCB3_INTR_SPI_EC_MASK
#define UART_1_SCB__INTR_SPI_EC_MASKED CYREG_SCB3_INTR_SPI_EC_MASKED
#define UART_1_SCB__INTR_TX CYREG_SCB3_INTR_TX
#define UART_1_SCB__INTR_TX_MASK CYREG_SCB3_INTR_TX_MASK
#define UART_1_SCB__INTR_TX_MASKED CYREG_SCB3_INTR_TX_MASKED
#define UART_1_SCB__INTR_TX_SET CYREG_SCB3_INTR_TX_SET
#define UART_1_SCB__RX_CTRL CYREG_SCB3_RX_CTRL
#define UART_1_SCB__RX_FIFO_CTRL CYREG_SCB3_RX_FIFO_CTRL
#define UART_1_SCB__RX_FIFO_RD CYREG_SCB3_RX_FIFO_RD
#define UART_1_SCB__RX_FIFO_RD_SILENT CYREG_SCB3_RX_FIFO_RD_SILENT
#define UART_1_SCB__RX_FIFO_STATUS CYREG_SCB3_RX_FIFO_STATUS
#define UART_1_SCB__RX_MATCH CYREG_SCB3_RX_MATCH
#define UART_1_SCB__SPI_CTRL CYREG_SCB3_SPI_CTRL
#define UART_1_SCB__SPI_STATUS CYREG_SCB3_SPI_STATUS
#define UART_1_SCB__SS0_POSISTION 0u
#define UART_1_SCB__SS1_POSISTION 1u
#define UART_1_SCB__SS2_POSISTION 2u
#define UART_1_SCB__SS3_POSISTION 3u
#define UART_1_SCB__STATUS CYREG_SCB3_STATUS
#define UART_1_SCB__TX_CTRL CYREG_SCB3_TX_CTRL
#define UART_1_SCB__TX_FIFO_CTRL CYREG_SCB3_TX_FIFO_CTRL
#define UART_1_SCB__TX_FIFO_STATUS CYREG_SCB3_TX_FIFO_STATUS
#define UART_1_SCB__TX_FIFO_WR CYREG_SCB3_TX_FIFO_WR
#define UART_1_SCB__UART_CTRL CYREG_SCB3_UART_CTRL
#define UART_1_SCB__UART_FLOW_CTRL CYREG_SCB3_UART_FLOW_CTRL
#define UART_1_SCB__UART_RX_CTRL CYREG_SCB3_UART_RX_CTRL
#define UART_1_SCB__UART_RX_STATUS CYREG_SCB3_UART_RX_STATUS
#define UART_1_SCB__UART_TX_CTRL CYREG_SCB3_UART_TX_CTRL
#define UART_1_SCBCLK__CTRL_REGISTER CYREG_PERI_PCLK_CTL3
#define UART_1_SCBCLK__DIV_ID 0x00000041u
#define UART_1_SCBCLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL1
#define UART_1_SCBCLK__PA_DIV_ID 0x000000FFu
#define UART_1_tx__0__DR CYREG_GPIO_PRT7_DR
#define UART_1_tx__0__DR_CLR CYREG_GPIO_PRT7_DR_CLR
#define UART_1_tx__0__DR_INV CYREG_GPIO_PRT7_DR_INV
#define UART_1_tx__0__DR_SET CYREG_GPIO_PRT7_DR_SET
#define UART_1_tx__0__HSIOM CYREG_HSIOM_PORT_SEL7
#define UART_1_tx__0__HSIOM_GPIO 0u
#define UART_1_tx__0__HSIOM_I2C 14u
#define UART_1_tx__0__HSIOM_I2C_SDA 14u
#define UART_1_tx__0__HSIOM_MASK 0x000000F0u
#define UART_1_tx__0__HSIOM_SHIFT 4u
#define UART_1_tx__0__HSIOM_SPI 15u
#define UART_1_tx__0__HSIOM_SPI_MISO 15u
#define UART_1_tx__0__HSIOM_UART 9u
#define UART_1_tx__0__HSIOM_UART_TX 9u
#define UART_1_tx__0__INTCFG CYREG_GPIO_PRT7_INTR_CFG
#define UART_1_tx__0__INTR CYREG_GPIO_PRT7_INTR
#define UART_1_tx__0__INTR_CFG CYREG_GPIO_PRT7_INTR_CFG
#define UART_1_tx__0__INTSTAT CYREG_GPIO_PRT7_INTR
#define UART_1_tx__0__MASK 0x02u
#define UART_1_tx__0__PC CYREG_GPIO_PRT7_PC
#define UART_1_tx__0__PC2 CYREG_GPIO_PRT7_PC2
#define UART_1_tx__0__PORT 7u
#define UART_1_tx__0__PS CYREG_GPIO_PRT7_PS
#define UART_1_tx__0__SHIFT 1u
#define UART_1_tx__DR CYREG_GPIO_PRT7_DR
#define UART_1_tx__DR_CLR CYREG_GPIO_PRT7_DR_CLR
#define UART_1_tx__DR_INV CYREG_GPIO_PRT7_DR_INV
#define UART_1_tx__DR_SET CYREG_GPIO_PRT7_DR_SET
#define UART_1_tx__INTCFG CYREG_GPIO_PRT7_INTR_CFG
#define UART_1_tx__INTR CYREG_GPIO_PRT7_INTR
#define UART_1_tx__INTR_CFG CYREG_GPIO_PRT7_INTR_CFG
#define UART_1_tx__INTSTAT CYREG_GPIO_PRT7_INTR
#define UART_1_tx__MASK 0x02u
#define UART_1_tx__PC CYREG_GPIO_PRT7_PC
#define UART_1_tx__PC2 CYREG_GPIO_PRT7_PC2
#define UART_1_tx__PORT 7u
#define UART_1_tx__PS CYREG_GPIO_PRT7_PS
#define UART_1_tx__SHIFT 1u

/* CapSense_1 */
#define CapSense_1_Cmod__0__DR CYREG_GPIO_PRT4_DR
#define CapSense_1_Cmod__0__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define CapSense_1_Cmod__0__DR_INV CYREG_GPIO_PRT4_DR_INV
#define CapSense_1_Cmod__0__DR_SET CYREG_GPIO_PRT4_DR_SET
#define CapSense_1_Cmod__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define CapSense_1_Cmod__0__HSIOM_MASK 0x000000F0u
#define CapSense_1_Cmod__0__HSIOM_SHIFT 4u
#define CapSense_1_Cmod__0__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define CapSense_1_Cmod__0__INTR CYREG_GPIO_PRT4_INTR
#define CapSense_1_Cmod__0__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define CapSense_1_Cmod__0__INTSTAT CYREG_GPIO_PRT4_INTR
#define CapSense_1_Cmod__0__MASK 0x02u
#define CapSense_1_Cmod__0__PC CYREG_GPIO_PRT4_PC
#define CapSense_1_Cmod__0__PC2 CYREG_GPIO_PRT4_PC2
#define CapSense_1_Cmod__0__PORT 4u
#define CapSense_1_Cmod__0__PS CYREG_GPIO_PRT4_PS
#define CapSense_1_Cmod__0__SHIFT 1u
#define CapSense_1_Cmod__Cmod__DR CYREG_GPIO_PRT4_DR
#define CapSense_1_Cmod__Cmod__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define CapSense_1_Cmod__Cmod__DR_INV CYREG_GPIO_PRT4_DR_INV
#define CapSense_1_Cmod__Cmod__DR_SET CYREG_GPIO_PRT4_DR_SET
#define CapSense_1_Cmod__Cmod__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define CapSense_1_Cmod__Cmod__INTR CYREG_GPIO_PRT4_INTR
#define CapSense_1_Cmod__Cmod__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define CapSense_1_Cmod__Cmod__INTSTAT CYREG_GPIO_PRT4_INTR
#define CapSense_1_Cmod__Cmod__MASK 0x02u
#define CapSense_1_Cmod__Cmod__PC CYREG_GPIO_PRT4_PC
#define CapSense_1_Cmod__Cmod__PC2 CYREG_GPIO_PRT4_PC2
#define CapSense_1_Cmod__Cmod__PORT 4u
#define CapSense_1_Cmod__Cmod__PS CYREG_GPIO_PRT4_PS
#define CapSense_1_Cmod__Cmod__SHIFT 1u
#define CapSense_1_Cmod__DR CYREG_GPIO_PRT4_DR
#define CapSense_1_Cmod__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define CapSense_1_Cmod__DR_INV CYREG_GPIO_PRT4_DR_INV
#define CapSense_1_Cmod__DR_SET CYREG_GPIO_PRT4_DR_SET
#define CapSense_1_Cmod__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define CapSense_1_Cmod__INTR CYREG_GPIO_PRT4_INTR
#define CapSense_1_Cmod__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define CapSense_1_Cmod__INTSTAT CYREG_GPIO_PRT4_INTR
#define CapSense_1_Cmod__MASK 0x02u
#define CapSense_1_Cmod__PC CYREG_GPIO_PRT4_PC
#define CapSense_1_Cmod__PC2 CYREG_GPIO_PRT4_PC2
#define CapSense_1_Cmod__PORT 4u
#define CapSense_1_Cmod__PS CYREG_GPIO_PRT4_PS
#define CapSense_1_Cmod__SHIFT 1u
#define CapSense_1_CSD__ADC_CTL CYREG_CSD_ADC_CTL
#define CapSense_1_CSD__CMOD_PAD 1u
#define CapSense_1_CSD__CSD_CONFIG CYREG_CSD_CONFIG
#define CapSense_1_CSD__CSD_INTR CYREG_CSD_INTR
#define CapSense_1_CSD__CSD_INTR_SET CYREG_CSD_INTR_SET
#define CapSense_1_CSD__CSD_NUMBER 0u
#define CapSense_1_CSD__CSD_STATUS CYREG_CSD_STATUS
#define CapSense_1_CSD__CSDCMP CYREG_CSD_CSDCMP
#define CapSense_1_CSD__CSH_TANK_PAD 2u
#define CapSense_1_CSD__CSHIELD_PAD 4u
#define CapSense_1_CSD__DEDICATED_IO0 CapSense_1_CSD__CSHIELD_PAD
#define CapSense_1_CSD__HSCMP CYREG_CSD_HSCMP
#define CapSense_1_CSD__INTR_MASK CYREG_CSD_INTR_MASK
#define CapSense_1_CSD__REFGEN CYREG_CSD_REFGEN
#define CapSense_1_CSD__RESULT_VAL1 CYREG_CSD_RESULT_VAL1
#define CapSense_1_CSD__RESULT_VAL2 CYREG_CSD_RESULT_VAL2
#define CapSense_1_CSD__SENSE_DUTY CYREG_CSD_SENSE_DUTY
#define CapSense_1_CSD__SENSE_PERIOD CYREG_CSD_SENSE_PERIOD
#define CapSense_1_CSD__SEQ_INIT_CNT CYREG_CSD_SEQ_INIT_CNT
#define CapSense_1_CSD__SEQ_NORM_CNT CYREG_CSD_SEQ_NORM_CNT
#define CapSense_1_CSD__SEQ_START CYREG_CSD_SEQ_START
#define CapSense_1_CSD__SEQ_TIME CYREG_CSD_SEQ_TIME
#define CapSense_1_CSD__SW_AMUXBUF_SEL CYREG_CSD_SW_AMUXBUF_SEL
#define CapSense_1_CSD__SW_BYP_SEL CYREG_CSD_SW_BYP_SEL
#define CapSense_1_CSD__SW_CMP_N_SEL CYREG_CSD_SW_CMP_N_SEL
#define CapSense_1_CSD__SW_CMP_P_SEL CYREG_CSD_SW_CMP_P_SEL
#define CapSense_1_CSD__SW_DSI_SEL CYREG_CSD_SW_DSI_SEL
#define CapSense_1_CSD__SW_FW_MOD_SEL CYREG_CSD_SW_FW_MOD_SEL
#define CapSense_1_CSD__SW_FW_TANK_SEL CYREG_CSD_SW_FW_TANK_SEL
#define CapSense_1_CSD__SW_HS_N_SEL CYREG_CSD_SW_HS_N_SEL
#define CapSense_1_CSD__SW_HS_P_SEL CYREG_CSD_SW_HS_P_SEL
#define CapSense_1_CSD__SW_REFGEN_SEL CYREG_CSD_SW_REFGEN_SEL
#define CapSense_1_CSD__SW_RES CYREG_CSD_SW_RES
#define CapSense_1_CSD__SW_SHIELD_SEL CYREG_CSD_SW_SHIELD_SEL
#define CapSense_1_CSD__VREF_EXT_PAD 8u
#define CapSense_1_IDACComp__CONFIG CYREG_CSD_CONFIG
#define CapSense_1_IDACComp__IDAC CYREG_CSD_IDACB
#define CapSense_1_IDACComp__POSITION 1u
#define CapSense_1_IDACMod__CONFIG CYREG_CSD_CONFIG
#define CapSense_1_IDACMod__IDAC CYREG_CSD_IDACA
#define CapSense_1_IDACMod__POSITION 0u
#define CapSense_1_ISR__INTC_CLR_EN_REG CYREG_CM0P_ICER
#define CapSense_1_ISR__INTC_CLR_PD_REG CYREG_CM0P_ICPR
#define CapSense_1_ISR__INTC_MASK 0x10000u
#define CapSense_1_ISR__INTC_NUMBER 16u
#define CapSense_1_ISR__INTC_PRIOR_MASK 0xC0u
#define CapSense_1_ISR__INTC_PRIOR_NUM 3u
#define CapSense_1_ISR__INTC_PRIOR_REG CYREG_CM0P_IPR4
#define CapSense_1_ISR__INTC_SET_EN_REG CYREG_CM0P_ISER
#define CapSense_1_ISR__INTC_SET_PD_REG CYREG_CM0P_ISPR
#define CapSense_1_ModClk__CTRL_REGISTER CYREG_PERI_PCLK_CTL5
#define CapSense_1_ModClk__DIV_ID 0x00000040u
#define CapSense_1_ModClk__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define CapSense_1_ModClk__PA_DIV_ID 0x000000FFu
#define CapSense_1_Sns__0__DR CYREG_GPIO_PRT2_DR
#define CapSense_1_Sns__0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define CapSense_1_Sns__0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define CapSense_1_Sns__0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define CapSense_1_Sns__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define CapSense_1_Sns__0__HSIOM_MASK 0xF0000000u
#define CapSense_1_Sns__0__HSIOM_SHIFT 28u
#define CapSense_1_Sns__0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define CapSense_1_Sns__0__INTR CYREG_GPIO_PRT2_INTR
#define CapSense_1_Sns__0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define CapSense_1_Sns__0__INTSTAT CYREG_GPIO_PRT2_INTR
#define CapSense_1_Sns__0__MASK 0x80u
#define CapSense_1_Sns__0__PC CYREG_GPIO_PRT2_PC
#define CapSense_1_Sns__0__PC2 CYREG_GPIO_PRT2_PC2
#define CapSense_1_Sns__0__PORT 2u
#define CapSense_1_Sns__0__PS CYREG_GPIO_PRT2_PS
#define CapSense_1_Sns__0__SHIFT 7u
#define CapSense_1_Sns__1__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__1__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__1__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__1__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__1__HSIOM CYREG_HSIOM_PORT_SEL6
#define CapSense_1_Sns__1__HSIOM_MASK 0x0000000Fu
#define CapSense_1_Sns__1__HSIOM_SHIFT 0u
#define CapSense_1_Sns__1__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__1__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__1__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__1__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__1__MASK 0x01u
#define CapSense_1_Sns__1__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__1__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__1__PORT 6u
#define CapSense_1_Sns__1__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__1__SHIFT 0u
#define CapSense_1_Sns__2__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__2__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__2__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__2__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__2__HSIOM CYREG_HSIOM_PORT_SEL6
#define CapSense_1_Sns__2__HSIOM_MASK 0x000000F0u
#define CapSense_1_Sns__2__HSIOM_SHIFT 4u
#define CapSense_1_Sns__2__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__2__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__2__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__2__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__2__MASK 0x02u
#define CapSense_1_Sns__2__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__2__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__2__PORT 6u
#define CapSense_1_Sns__2__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__2__SHIFT 1u
#define CapSense_1_Sns__3__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__3__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__3__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__3__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__3__HSIOM CYREG_HSIOM_PORT_SEL6
#define CapSense_1_Sns__3__HSIOM_MASK 0x00000F00u
#define CapSense_1_Sns__3__HSIOM_SHIFT 8u
#define CapSense_1_Sns__3__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__3__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__3__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__3__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__3__MASK 0x04u
#define CapSense_1_Sns__3__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__3__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__3__PORT 6u
#define CapSense_1_Sns__3__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__3__SHIFT 2u
#define CapSense_1_Sns__4__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__4__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__4__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__4__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__4__HSIOM CYREG_HSIOM_PORT_SEL6
#define CapSense_1_Sns__4__HSIOM_MASK 0x000F0000u
#define CapSense_1_Sns__4__HSIOM_SHIFT 16u
#define CapSense_1_Sns__4__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__4__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__4__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__4__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__4__MASK 0x10u
#define CapSense_1_Sns__4__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__4__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__4__PORT 6u
#define CapSense_1_Sns__4__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__4__SHIFT 4u
#define CapSense_1_Sns__5__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__5__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__5__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__5__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__5__HSIOM CYREG_HSIOM_PORT_SEL6
#define CapSense_1_Sns__5__HSIOM_MASK 0x00F00000u
#define CapSense_1_Sns__5__HSIOM_SHIFT 20u
#define CapSense_1_Sns__5__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__5__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__5__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__5__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__5__MASK 0x20u
#define CapSense_1_Sns__5__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__5__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__5__PORT 6u
#define CapSense_1_Sns__5__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__5__SHIFT 5u
#define CapSense_1_Sns__LinearSlider0_Sns0__DR CYREG_GPIO_PRT2_DR
#define CapSense_1_Sns__LinearSlider0_Sns0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define CapSense_1_Sns__LinearSlider0_Sns0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define CapSense_1_Sns__LinearSlider0_Sns0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define CapSense_1_Sns__LinearSlider0_Sns0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns0__INTR CYREG_GPIO_PRT2_INTR
#define CapSense_1_Sns__LinearSlider0_Sns0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns0__INTSTAT CYREG_GPIO_PRT2_INTR
#define CapSense_1_Sns__LinearSlider0_Sns0__MASK 0x80u
#define CapSense_1_Sns__LinearSlider0_Sns0__PC CYREG_GPIO_PRT2_PC
#define CapSense_1_Sns__LinearSlider0_Sns0__PC2 CYREG_GPIO_PRT2_PC2
#define CapSense_1_Sns__LinearSlider0_Sns0__PORT 2u
#define CapSense_1_Sns__LinearSlider0_Sns0__PS CYREG_GPIO_PRT2_PS
#define CapSense_1_Sns__LinearSlider0_Sns0__SHIFT 7u
#define CapSense_1_Sns__LinearSlider0_Sns1__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__LinearSlider0_Sns1__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__LinearSlider0_Sns1__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__LinearSlider0_Sns1__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__LinearSlider0_Sns1__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns1__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns1__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns1__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns1__MASK 0x01u
#define CapSense_1_Sns__LinearSlider0_Sns1__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__LinearSlider0_Sns1__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__LinearSlider0_Sns1__PORT 6u
#define CapSense_1_Sns__LinearSlider0_Sns1__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__LinearSlider0_Sns1__SHIFT 0u
#define CapSense_1_Sns__LinearSlider0_Sns2__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__LinearSlider0_Sns2__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__LinearSlider0_Sns2__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__LinearSlider0_Sns2__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__LinearSlider0_Sns2__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns2__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns2__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns2__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns2__MASK 0x02u
#define CapSense_1_Sns__LinearSlider0_Sns2__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__LinearSlider0_Sns2__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__LinearSlider0_Sns2__PORT 6u
#define CapSense_1_Sns__LinearSlider0_Sns2__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__LinearSlider0_Sns2__SHIFT 1u
#define CapSense_1_Sns__LinearSlider0_Sns3__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__LinearSlider0_Sns3__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__LinearSlider0_Sns3__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__LinearSlider0_Sns3__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__LinearSlider0_Sns3__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns3__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns3__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns3__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns3__MASK 0x04u
#define CapSense_1_Sns__LinearSlider0_Sns3__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__LinearSlider0_Sns3__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__LinearSlider0_Sns3__PORT 6u
#define CapSense_1_Sns__LinearSlider0_Sns3__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__LinearSlider0_Sns3__SHIFT 2u
#define CapSense_1_Sns__LinearSlider0_Sns4__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__LinearSlider0_Sns4__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__LinearSlider0_Sns4__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__LinearSlider0_Sns4__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__LinearSlider0_Sns4__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns4__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns4__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns4__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns4__MASK 0x10u
#define CapSense_1_Sns__LinearSlider0_Sns4__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__LinearSlider0_Sns4__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__LinearSlider0_Sns4__PORT 6u
#define CapSense_1_Sns__LinearSlider0_Sns4__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__LinearSlider0_Sns4__SHIFT 4u
#define CapSense_1_Sns__LinearSlider0_Sns5__DR CYREG_GPIO_PRT6_DR
#define CapSense_1_Sns__LinearSlider0_Sns5__DR_CLR CYREG_GPIO_PRT6_DR_CLR
#define CapSense_1_Sns__LinearSlider0_Sns5__DR_INV CYREG_GPIO_PRT6_DR_INV
#define CapSense_1_Sns__LinearSlider0_Sns5__DR_SET CYREG_GPIO_PRT6_DR_SET
#define CapSense_1_Sns__LinearSlider0_Sns5__INTCFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns5__INTR CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns5__INTR_CFG CYREG_GPIO_PRT6_INTR_CFG
#define CapSense_1_Sns__LinearSlider0_Sns5__INTSTAT CYREG_GPIO_PRT6_INTR
#define CapSense_1_Sns__LinearSlider0_Sns5__MASK 0x20u
#define CapSense_1_Sns__LinearSlider0_Sns5__PC CYREG_GPIO_PRT6_PC
#define CapSense_1_Sns__LinearSlider0_Sns5__PC2 CYREG_GPIO_PRT6_PC2
#define CapSense_1_Sns__LinearSlider0_Sns5__PORT 6u
#define CapSense_1_Sns__LinearSlider0_Sns5__PS CYREG_GPIO_PRT6_PS
#define CapSense_1_Sns__LinearSlider0_Sns5__SHIFT 5u

/* Miscellaneous */
#define CY_PROJECT_NAME "CapSense"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_BANDGAP_VOLTAGE 1.200
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x257C11B5u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4V
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4V_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 8u
#define CYDEV_DFT_SELECT_CLK1 9u
#define CYDEV_DMA_CHANNELS_AVAILABLE 8
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_INTR_NUMBER_DMA 14u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_m0s8can_VERSION 1
#define CYIPBLOCK_m0s8cpussv3_VERSION 1
#define CYIPBLOCK_m0s8crypto_VERSION 2
#define CYIPBLOCK_m0s8csdv2_VERSION 2
#define CYIPBLOCK_m0s8exco_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8pass4a_VERSION 1
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8wco_VERSION 1
#define CYIPBLOCK_s8srsslt_VERSION 1
#define DMA_CHANNELS_USED__MASK 0u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
