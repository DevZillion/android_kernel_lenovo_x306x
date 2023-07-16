/*
 * dbmdx-va-regmap.h  --  DBMDX VA register mapping
 *
 * Copyright (C) 2014 DSP Group
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DBMDX_VA_REGMAP_H
#define _DBMDX_VA_REGMAP_H

/* DBMDX commands and values */
#define DBMDX_VA_EMPTY_CMD			0x80000000
#define DBMDX_VA_CMD_MASK			0x80000000


/* Regisger & Values */

/* Reg# 0x00*/
#define DBMDX_REGN_FW_VERSION_NUMBER		0x80000000

/* Reg# 0x01*/
#define DBMDX_REGN_OPERATION_MODE		0x80010000
/* Values */
#define DBMDX_REGV_IDLE_MODE			0X00
#define DBMDX_REGV_DETECTION_MODE		0X01
#define DBMDX_REGV_BUFFERING_MODE		0X02
#define DBMDX_REGV_HIBERNATE_MODE		0X06

/* Reg# 0x02*/
#define DBMDX_REGN_PRIMARY_AMODEL_SIZE		0x80020000

/* Reg# 0x03*/
#define DBMDX_REGN_SECONDARY_AMODEL_SIZE	0x80030000

/* Reg# 0x04*/
#define DBMDX_REGN_DIGITAL_GAIN			0x80040000
/* Values */
#define DBMDX_REGV_MUTE_MIC			0x0801
#define DBMDX_REGV_KEEP_CURRENT_GAIN		0x0800
#define DBMDX_REGV_AFFECT_MIC1			0x1000
#define DBMDX_REGV_AFFECT_MIC2			0x2000
#define DBMDX_REGV_AFFECT_MIC3			0x3000
#define DBMDX_REGV_AFFECT_MIC4			0x4000
#define DBMDX_REGV_AFFECT_ALL_MICS		0xF000

/* Reg# 0x05*/
#define DBMDX_REGN_IO_PORT_ADDR_LO		0x80050000

/* Reg# 0x06*/
#define DBMDX_REGN_IO_PORT_ADDR_HI		0x80060000

/* Reg# 0x07*/
#define DBMDX_REGN_IO_PORT_VALUE_LO		0x80070000

/* Reg# 0x08*/
#define DBMDX_REGN_IO_PORT_VALUE_HI		0x80080000

/* Reg# 0x09*/
#define DBMDX_REGN_AUDIO_BUFFER_SIZE		0x80090000
/* Reg Value */
#define DBMDX_REGV_AUDIO_BUFFER_1_SEC		0x0800
#define DBMDX_REGV_AUDIO_BUFFER_1_5_SEC		0x0C00
#define DBMDX_REGV_AUDIO_BUFFER_2_SEC		0x1000
#define DBMDX_REGV_AUDIO_BUFFER_2_5_SEC		0x1400
#define DBMDX_REGV_AUDIO_BUFFER_3_SEC		0x1800

/* Reg# 0x0A*/
#define DBMDX_REGN_NUM_OF_SMP_IN_BUF		0x800A0000

/* Reg# 0x0B*/
#define DBMDX_REGN_LAST_MAX_SMP_VALUE		0x800B0000

/* Reg# 0x0C*/
#define DBMDX_REGN_UART_SPEED			0x800C0000
/* Reg Value */
#define DBMDX_REGV_UART_BAUD_RATE_115_200_hz	0x0480
#define DBMDX_REGV_UART_BAUD_RATE_230_400_hz	0x0900
#define DBMDX_REGV_UART_BAUD_RATE_460_800_hz	0x1200
#define DBMDX_REGV_UART_BAUD_RATE_921_600_hz	0x2400
#define DBMDX_REGV_UART_BAUD_RATE_1_Mhz		0x2710
#define DBMDX_REGV_UART_BAUD_RATE_2_Mhz		0x4e20
#define DBMDX_REGV_UART_BAUD_RATE_3_Mhz		0x7530
#define DBMDX_REGV_UART_BAUD_RATE_4_Mhz		0x9c40
#define DBMDX_REGV_UART_BAUD_RATE_5_Mhz		0xc350


/* Reg# 0x0D*/
#define DBMDX_REGN_FW_STATUS_INDEX		0x800D0000
/* Reg Value */
#define DBMDX_REGV_READ_FW_ERROR_COUNTER		0x0000
#define DBMDX_REGV_GET_AMOUNT_OF_FREE_DATA_MEMORY	0x0001
#define DBMDX_REGV_GET_AMOUNT_OF_FREE_AHB_MEMORY	0x0002


/* Reg# 0x0E*/
#define DBMDX_REGN_MICROPHONE_AUTO_SET		0x800E0000
/* Reg Value */
#define DBMDX_REGV_AUTO_EN_DIS_DDF_BLOCK_D2_AFE_DDF_D4_SD_DDF		0X0001
#define DBMDX_REGV_AUTO_EN_DIS_DDF_BLOCK_D2_PDM0L_D4_DDF0_D6_DDF0	0X0002
#define DBMDX_REGV_AUTO_EN_DIS_DDF_BLOCK_D2_PDM0R_D4_DDF1_D6_DDF1	0X0004
#define DBMDX_REGV_AUTO_EN_DIS_DDF_BLOCK_D2_PDM1L_D4_SAR_DDF_D6_SAR_DDF	0X0008
#define DBMDX_REGV_AUTO_EN_DIS_DDF_BLOCK_D2_PDM1R			0X0010
#define DBMDX_REGV_AUTO_EN_DIS_DDF_BLOCK_D4_SD_ADC			0X0020
#define DBMDX_REGV_AUTO_EN_DIS_DDF_BLOCK_D4_SAR_ADC_D6_SAR_ADC		0X0040
#define DBMDX_REGV_AUTO_EN_DIS_DDF_BLOCK_D4_DM1_D6_DM1			0X0080
#define DBMDX_REGV_AUTO_EN_DIS_DDF_BLOCK_D4_DM0_D6_DM0			0X0100
#define DBMDX_REGV_AUTOSET_EVENT_DISABLE_AUTO_SET			0x0000
#define DBMDX_REGV_AUTOSET_EVENT_ENABLE_ON_VAD				0x0200
#define DBMDX_REGV_AUTOSET_EVENT_ENABLE_ON_VT_DETECTION			0x0400

/* Reg# 0x0F*/
#define DBMDX_REGN_LOAD_NEW_ACUSTIC_MODEL	0x800F0000
/* Reg Value */
#define DBMDX_REGV_LOAD_PRIMARY_VT_MODEL	0x0000
#define DBMDX_REGV_LOAD_SECONDARY_VT_MODEL	0x0001
#define DBMDX_REGV_LOAD_GOOGLE_VT_MODEL		0x0002
#define DBMDX_REGV_LOAD_ASRP_PARAM_FILE		0x0004

/* Reg# 0x10*/
#define DBMDX_REGN_DSP_CLOCK_CONFIG		0x80100000
/* Reg Value */
#define DBMDX_REGV_AHB_DIV_1			0x0000
#define DBMDX_REGV_AHB_DIV_2			0x0001
#define DBMDX_REGV_AHB_DIV_3			0x0002
#define DBMDX_REGV_AHB_DIV_4			0x0003
#define DBMDX_REGV_AHB_DIV_5			0x0004
#define DBMDX_REGV_AHB_DIV_6			0x0005
#define DBMDX_REGV_AHB_DIV_7			0x0006
#define DBMDX_REGV_AHB_DIV_8			0x0007
#define DBMDX_REGV_AHB_DIV_9			0x0008
#define DBMDX_REGV_AHB_DIV_10			0x0009
#define DBMDX_REGV_AHB_DIV_11			0x000A
#define DBMDX_REGV_AHB_DIV_12			0x000B
#define DBMDX_REGV_AHB_DIV_13			0x000C
#define DBMDX_REGV_AHB_DIV_14			0x000D
#define DBMDX_REGV_AHB_DIV_15			0x000E
#define DBMDX_REGV_AHB_DIV_16			0x000F

#define DBMDX_REGV_APB_DIV_1			0x0000
#define DBMDX_REGV_APB_DIV_2			0x0010
#define DBMDX_REGV_APB_DIV_3			0x0020
#define DBMDX_REGV_APB_DIV_4			0x0030
#define DBMDX_REGV_APB_DIV_5			0x0040
#define DBMDX_REGV_APB_DIV_6			0x0050
#define DBMDX_REGV_APB_DIV_7			0x0060
#define DBMDX_REGV_APB_DIV_8			0x0070
#define DBMDX_REGV_APB_DIV_9			0x0080
#define DBMDX_REGV_APB_DIV_10			0x0090
#define DBMDX_REGV_APB_DIV_11			0x00A0
#define DBMDX_REGV_APB_DIV_12			0x00B0
#define DBMDX_REGV_APB_DIV_13			0x00C0
#define DBMDX_REGV_APB_DIV_14			0x00D0
#define DBMDX_REGV_APB_DIV_15			0x00E0
#define DBMDX_REGV_APB_DIV_16			0x00F0

#define DBMDX_REGV_TL3_DIV_1			0x0000
#define DBMDX_REGV_TL3_DIV_2			0x0100
#define DBMDX_REGV_TL3_DIV_3			0x0200
#define DBMDX_REGV_TL3_DIV_4			0x0300
#define DBMDX_REGV_TL3_DIV_5			0x0400
#define DBMDX_REGV_TL3_DIV_6			0x0500
#define DBMDX_REGV_TL3_DIV_7			0x0600
#define DBMDX_REGV_TL3_DIV_8			0x0700
#define DBMDX_REGV_TL3_DIV_9			0x0800
#define DBMDX_REGV_TL3_DIV_10			0x0900
#define DBMDX_REGV_TL3_DIV_11			0x0A00
#define DBMDX_REGV_TL3_DIV_12			0x0B00
#define DBMDX_REGV_TL3_DIV_13			0x0C00
#define DBMDX_REGV_TL3_DIV_14			0x0D00
#define DBMDX_REGV_TL3_DIV_15			0x0E00
#define DBMDX_REGV_TL3_DIV_16			0x0F00

#define DBMDX_REGV_PLL_STEP_0			0x0000
#define DBMDX_REGV_PLL_STEP_1			0x1000
#define DBMDX_REGV_PLL_STEP_2			0x2000
#define DBMDX_REGV_PLL_STEP_3			0x3000
#define DBMDX_REGV_PLL_STEP_4			0x4000
#define DBMDX_REGV_PLL_STEP_5			0x5000
#define DBMDX_REGV_PLL_STEP_6			0x6000
#define DBMDX_REGV_PLL_STEP_7			0x7000
#define DBMDX_REGV_PLL_STEP_8			0x8000
#define DBMDX_REGV_PLL_STEP_9			0x9000
#define DBMDX_REGV_PLL_STEP_10			0xA000
#define DBMDX_REGV_PLL_STEP_11			0xB000
#define DBMDX_REGV_PLL_STEP_12			0xC000
#define DBMDX_REGV_PLL_STEP_13			0xD000
#define DBMDX_REGV_PLL_STEP_14			0xE000
#define DBMDX_REGV_USE_PLL_STEP_FROM_REG_0x1E	0xF000

/* Reg 0X11 */
#define DBMDX_REGN_AUDIO_PROCESSING_ROUTING	0x80110000
/* Reg Value */
#define DBMDX_REGV_IO_SET_0			0x0000
#define DBMDX_REGV_IO_SET_1			0x1000
#define DBMDX_REGV_IO_SET_2			0x2000
#define DBMDX_REGV_IO_SET_3			0x3000
#define DBMDX_REGV_IO_SET_4			0x4000
#define DBMDX_REGV_IO_SET_5			0x5000
#define DBMDX_REGV_IO_SET_6			0x6000
#define DBMDX_REGV_IO_SET_7			0x7000
#define DBMDX_REGV_IO_SET_8			0x8000
#define DBMDX_REGV_IO_3N_0_CP_0			0x0000
#define DBMDX_REGV_IO_3N_0_CP_1			0x0001
#define DBMDX_REGV_IO_3N_0_CP_2			0x0002
#define DBMDX_REGV_IO_3N_0_CP_3			0x0003
#define DBMDX_REGV_IO_3N_0_CP_4			0x0004
#define DBMDX_REGV_IO_3N_0_CP_5			0x0005
#define DBMDX_REGV_IO_3N_0_CP_6			0x0006
#define DBMDX_REGV_IO_3N_0_CP_7			0x0007
#define DBMDX_REGV_IO_3N_0_NO_CP		0x000E
#define DBMDX_REGV_IO_3N_1_CP_0			0x0000
#define DBMDX_REGV_IO_3N_1_CP_1			0x0010
#define DBMDX_REGV_IO_3N_1_CP_2			0x0020
#define DBMDX_REGV_IO_3N_1_CP_3			0x0030
#define DBMDX_REGV_IO_3N_1_CP_4			0x0040
#define DBMDX_REGV_IO_3N_1_CP_5			0x0050
#define DBMDX_REGV_IO_3N_1_CP_6			0x0060
#define DBMDX_REGV_IO_3N_1_CP_7			0x0070
#define DBMDX_REGV_IO_3N_1_NO_CP		0x00E0
#define DBMDX_REGV_IO_3N_2_CP_0			0x0000
#define DBMDX_REGV_IO_3N_2_CP_1			0x0100
#define DBMDX_REGV_IO_3N_2_CP_2			0x0200
#define DBMDX_REGV_IO_3N_2_CP_3			0x0300
#define DBMDX_REGV_IO_3N_2_CP_4			0x0400
#define DBMDX_REGV_IO_3N_2_CP_5			0x0500
#define DBMDX_REGV_IO_3N_2_CP_6			0x0600
#define DBMDX_REGV_IO_3N_2_CP_7			0x0700
#define DBMDX_REGV_IO_3N_2_NO_CP		0x0E00

/* Reg 0X12 */
#define DBMDX_REGN_AUDIO_BUFFER_READOUT_CONF	0x80120000
/* Reg Value */

#define DBMDX_REGV_HISTORY_POINT_IS_TIME_OF_SWITCHING_TO_BUFFERING	0x0000
#define DBMDX_REGV_HISTORY_POINT_IS_PASSPHRASE_END_POINT		0X0001
#define DBMDX_REGV_HISTORY_POINT_IS_PASSPHRASE_START_POINT		0X0002
#ifdef CONFIG_SND_SOC_DBMDX_ALEXA
#define DBMDX_REGV_EXTENDED_HISTORY_TIME_700_MS				0x028C
#endif
#define DBMDX_REGV_EXTENDED_HISTORY_TIME_500_MS				0x01F4
#define DBMDX_REGV_START_BUF_READ					0x1000

#define DBMDX_REGN_AUDIO_STREAMING_SRC_SELECT	0x80130000
#define DBMDX_REGV_NO_STREAM_CH_1		0x000F
#define DBMDX_REGV_STREAM_CH_1_CP_0		0x0000
#define DBMDX_REGV_STREAM_CH_1_CP_1		0x0001
#define DBMDX_REGV_STREAM_CH_1_CP_2		0x0002
#define DBMDX_REGV_STREAM_CH_1_CP_3		0x0003
#define DBMDX_REGV_STREAM_CH_1_CP_4		0x0004
#define DBMDX_REGV_STREAM_CH_1_CP_5		0x0005
#define DBMDX_REGV_STREAM_CH_1_CP_6		0x0006
#define DBMDX_REGV_STREAM_CH_1_CP_7		0x0007
#define DBMDX_REGV_NO_STREAM_CH_2		0x00F0
#define DBMDX_REGV_STREAM_CH_2_CP_0		0x0000
#define DBMDX_REGV_STREAM_CH_2_CP_1		0x0010
#define DBMDX_REGV_STREAM_CH_2_CP_2		0x0020
#define DBMDX_REGV_STREAM_CH_2_CP_3		0x0030
#define DBMDX_REGV_STREAM_CH_2_CP_4		0x0040
#define DBMDX_REGV_STREAM_CH_2_CP_5		0x0050
#define DBMDX_REGV_STREAM_CH_2_CP_6		0x0060
#define DBMDX_REGV_STREAM_CH_2_CP_7		0x0070
#define DBMDX_REGV_NO_STREAM_CH_3		0x0F00
#define DBMDX_REGV_STREAM_CH_3_CP_0		0x0000
#define DBMDX_REGV_STREAM_CH_3_CP_1		0x0100
#define DBMDX_REGV_STREAM_CH_3_CP_2		0x0200
#define DBMDX_REGV_STREAM_CH_3_CP_3		0x0300
#define DBMDX_REGV_STREAM_CH_3_CP_4		0x0400
#define DBMDX_REGV_STREAM_CH_3_CP_5		0x0500
#define DBMDX_REGV_STREAM_CH_3_CP_6		0x0600
#define DBMDX_REGV_STREAM_CH_3_CP_7		0x0700
#define DBMDX_REGV_NO_STREAM_CH_4		0xF000
#define DBMDX_REGV_STREAM_CH_4_CP_0		0x0000
#define DBMDX_REGV_STREAM_CH_4_CP_1		0x1000
#define DBMDX_REGV_STREAM_CH_4_CP_2		0x2000
#define DBMDX_REGV_STREAM_CH_4_CP_3		0x3000
#define DBMDX_REGV_STREAM_CH_4_CP_4		0x4000
#define DBMDX_REGV_STREAM_CH_4_CP_5		0x5000
#define DBMDX_REGV_STREAM_CH_4_CP_6		0x6000
#define DBMDX_REGV_STREAM_CH_4_CP_7		0x7000

/* Reg 0X14 */
#define DBMDX_REGN_GOOGLE_ALGORITHM		0x80140000
/* Reg Value */
#define DBMDX_REGV_GOOGLE_ENABLE		0x0001
#define DBMDX_REGV_GOOGLE_INIT			0x0002
#define DBMDX_REGV_GOOGLE_DETECTED		0x0010




/* Reg 0X15 */
#define DBMDX_REGN_GPIO_CONFIG		0x80150000
/* Reg Value */
#define DBMDX_REGV_PRI_MODEL_DET_GPIO_NUM_4	0x0004
#define DBMDX_REGV_PRI_MODEL_DET_GPIO_NUM_12	0x000c
#define DBMDX_REGV_PRI_MODEL_DET_GPIO_NUM_16	0x0010
#define DBMDX_REGV_PRI_MODEL_DET_GPIO_NUM_15	0x000f
#define DBMDX_REGV_PRI_MODEL_DET_GPIO_NUM_20	0x0014
#define DBMDX_REGV_SET_PRI_GPIO			0x0080
#define DBMDX_REGV_SEC_MODEL_DET_GPIO_NUM_1	0x0100
#define DBMDX_REGV_SEC_MODEL_DET_GPIO_NUM_12	0x0c00
#define DBMDX_REGV_SEC_MODEL_DET_GPIO_NUM_16	0x1000
#define DBMDX_REGV_SEC_MODEL_DET_GPIO_NUM_15	0x0f00
#define DBMDX_REGV_SEC_MODEL_DET_GPIO_NUM_20	0x1400
#define DBMDX_REGV_SET_SEC_GPIO			0x8000

/* Reg 0X16 */
#define DBMDX_REGN_MICROPHONE_ANALOG_GAIN	0x80160000
/* Reg Value */
#define DBMDX_REGV_SD_GAIN_EN		0x8000
#define DBMDX_REGV_SD_GAIN_MINUS_4_DB	0x0000
#define DBMDX_REGV_SD_GAIN_MINUS_2_DB	0x0100
#define DBMDX_REGV_SD_GAIN_0_DB		0x0200
#define DBMDX_REGV_SD_GAIN_2_DB		0x0300
#define DBMDX_REGV_SD_GAIN_4_DB		0x0400
#define DBMDX_REGV_SD_GAIN_6_DB		0x0500
#define DBMDX_REGV_SD_GAIN_8_DB		0x0600
#define DBMDX_REGV_SD_GAIN_10_DB	0x0700
#define DBMDX_REGV_SD_GAIN_12_DB	0x0800
#define DBMDX_REGV_SD_GAIN_14_DB	0x0900
#define DBMDX_REGV_SD_GAIN_16_DB	0x0a00
#define DBMDX_REGV_SD_GAIN_18_DB	0x0b00
#define DBMDX_REGV_SD_GAIN_20_DB	0x0c00
#define DBMDX_REGV_SD_GAIN_22_DB	0x0d00
#define DBMDX_REGV_SD_GAIN_24_DB	0x0e00
#define DBMDX_REGV_SD_GAIN_26_DB	0x0f00
#define DBMDX_REGV_SD_GAIN_28_DB	0x1000
#define DBMDX_REGV_SD_GAIN_30_DB	0x1100
#define DBMDX_REGV_SD_GAIN_32_DB	0x1200
#define DBMDX_REGV_SD_GAIN_34_DB	0x1300
#define DBMDX_REGV_SD_GAIN_36_DB	0x1400
#define DBMDX_REGV_SAR_GAIN_EN		0x0080
#define DBMDX_REGV_SAR_GAIN_0_DB	0x0000
#define DBMDX_REGV_SAR_GAIN_6_DB	0x0001
#define DBMDX_REGV_SAR_GAIN_12_DB	0x0002
#define DBMDX_REGV_SAR_GAIN_14_DB	0x0003
#define DBMDX_REGV_SAR_GAIN_15_6_DB	0x0004
#define DBMDX_REGV_SAR_GAIN_18_3_DB	0x0005
#define DBMDX_REGV_SAR_GAIN_19_9_DB	0x0006
#define DBMDX_REGV_SAR_GAIN_20_8_DB	0x0007
#define DBMDX_REGV_SAR_GAIN_21_8_DB	0x0008
#define DBMDX_REGV_SAR_GAIN_22_9_DB	0x0009
#define DBMDX_REGV_SAR_GAIN_24_4_DB	0x000a
#define DBMDX_REGV_SAR_GAIN_25_6_DB	0x000b
#define DBMDX_REGV_SAR_GAIN_27_2_DB	0x000c
#define DBMDX_REGV_SAR_GAIN_29_2_DB	0x000d
#define DBMDX_REGV_SAR_GAIN_31_8_DB	0x000e
#define DBMDX_REGV_SAR_GAIN_35_4_DB	0x000f
#define DBMDX_REGN_ANALOG_GAIN_DBMD8D_COMBINED	0xff12

/* Reg 0X17 */
#define DBMDX_REGN_FW_DEBUG_REGISTER_2		0x80170000
#define DBMDX_REGV_PRINT_TDM_SW_SYNC_PATTERN	0x1000

/* Reg 0X18 */
#define DBMDX_REGN_FW_DEBUG_REGISTER		0x80180000
/* Reg Value */
#define DBMDX_REGV_DUMP_APB_REGS		0X0001
#define DBMDX_REGV_DUMP_AHB_REGS		0x0002
#define DBMDX_REGV_FW_PRINT_CLOCK_SETTING	0x0004
#define DBMDX_REGV_TOGGLE_UART_DEBUG_PRINTS	0x0005
#define DBMDX_REGV_PRINT_MEM_INFO		0x000a
#define DBMDX_REGV_PRINT_MIPS_METER		0x0014

/* Reg 0X19 */
#define DBMDX_REGN_CHIP_ID_NUMBER		0x80190000

/* Reg 0X1A */
#define DBMDX_REGN_HPF_ENABLE_DISABLE		0x801A0000
/* Reg Value */
#define DBMDX_REGV_IIR_HPF_EN			0x0001
#define DBMDX_REGV_DC_REMOVE_COARSE_EN		0x0002
#define DBMDX_REGV_DC_REMOVE_FINE_EN		0x0004
#define DBMDX_REGV_IIR_HPF_CUTOFF_FREQ_60HZ	0x0000
#define DBMDX_REGV_IIR_HPF_CUTOFF_FREQ_30HZ	0x01000

/* Reg 0X1B */
#define DBMDX_REGN_MASTER_CLOCK_FREQUENCY	0x801B0000
/* Reg Value */
#define DBMDX_REGV_MCLK_32768Hz			0x0020
#define DBMDX_REGV_MCLK_12288000Hz		0x3000
#define DBMDX_REGV_MCLK_19200000Hz		0x4B00
#define DBMDX_REGV_MCLK_24576000Hz		0x6000

/* Reg 0X1D */
#define DBMDX_REGN_TDM_SCLK_CLOCK_FREQUENCY	0x801D0000

/* Reg 0X1E */
#define DBMDX_REGN_DSP_CLOCK_CONFIG_EXTENSION	0x801E0000

#define DBMDX_REGV_CLK_EXT_PLL_STEP_0		0x0000
#define DBMDX_REGV_CLK_EXT_PLL_STEP_1		0x0001
#define DBMDX_REGV_CLK_EXT_PLL_STEP_2		0x0002
#define DBMDX_REGV_CLK_EXT_PLL_STEP_3		0x0003
#define DBMDX_REGV_CLK_EXT_PLL_STEP_4		0x0004
#define DBMDX_REGV_CLK_EXT_PLL_STEP_5		0x0005
#define DBMDX_REGV_CLK_EXT_PLL_STEP_6		0x0006
#define DBMDX_REGV_CLK_EXT_PLL_STEP_7		0x0007
#define DBMDX_REGV_CLK_EXT_PLL_STEP_8		0x0008
#define DBMDX_REGV_CLK_EXT_PLL_STEP_9		0x0009
#define DBMDX_REGV_CLK_EXT_PLL_STEP_10		0x000A
#define DBMDX_REGV_CLK_EXT_PLL_STEP_11		0x000B
#define DBMDX_REGV_CLK_EXT_PLL_STEP_12		0x000C
#define DBMDX_REGV_CLK_EXT_PLL_STEP_13		0x000D
#define DBMDX_REGV_CLK_EXT_PLL_STEP_14		0x000E
#define DBMDX_REGV_CLK_EXT_PLL_STEP_15		0x000F
#define DBMDX_REGV_CLK_EXT_PLL_STEP_16		0x0010
#define DBMDX_REGV_CLK_EXT_PLL_STEP_17		0x0011
#define DBMDX_REGV_CLK_EXT_PLL_STEP_18		0x0012
#define DBMDX_REGV_CLK_EXT_PLL_STEP_19		0x0013
#define DBMDX_REGV_CLK_EXT_PLL_STEP_20		0x0014
#define DBMDX_REGV_CLK_EXT_PLL_STEP_21		0x0015
#define DBMDX_REGV_CLK_EXT_PLL_STEP_22		0x0016
#define DBMDX_REGV_CLK_EXT_PLL_STEP_23		0x0017
#define DBMDX_REGV_CLK_EXT_PLL_STEP_24		0x0018
#define DBMDX_REGV_CLK_EXT_PLL_STEP_25		0x0019
#define DBMDX_REGV_CLK_EXT_PLL_STEP_26		0x001A
#define DBMDX_REGV_CLK_EXT_PLL_STEP_27		0x001B
#define DBMDX_REGV_CLK_EXT_PLL_STEP_28		0x001C
#define DBMDX_REGV_CLK_EXT_PLL_STEP_29		0x001D
#define DBMDX_REGV_CLK_EXT_PLL_STEP_30		0x001E
#define DBMDX_REGV_CLK_EXT_PLL_STEP_31		0x001F
#define DBMDX_REGV_CLK_EXT_PLL_STEP_32		0x0020
#define DBMDX_REGV_CLK_EXT_PLL_STEP_33		0x0021
#define DBMDX_REGV_CLK_EXT_PLL_STEP_34		0x0022
#define DBMDX_REGV_CLK_EXT_PLL_STEP_35		0x0023
#define DBMDX_REGV_CLK_EXT_PLL_STEP_36		0x0024
#define DBMDX_REGV_CLK_EXT_PLL_STEP_37		0x0025
#define DBMDX_REGV_CLK_EXT_PLL_STEP_38		0x0026
#define DBMDX_REGV_CLK_EXT_PLL_STEP_39		0x0027
#define DBMDX_REGV_CLK_EXT_PLL_STEP_40		0x0028

#define DBMDX_REGV_OSC_FREE_RUN			0x0800
#define DBMDX_REGV_PLL_OSC_SEL_PLL_OSC_OFF	0x0000
#define DBMDX_REGV_PLL_OSC_SEL_USE_PLL		0x1000
#define DBMDX_REGV_PLL_OSC_SEL_USE_OSC		0x2000
#define DBMDX_REGV_CLK_SEL_MCLK_IN		0x0000
#define DBMDX_REGV_CLK_SEL_TDM0_SCLK		0x4000
#define DBMDX_REGV_SRC_SET_KEEP_CUR_CLK_SRC	0x0000
#define DBMDX_REGV_SRC_SET_CONF_CLK_ACCORDING_TO_CLK_SEL 0x8000

/* Reg 0X1F */
#define DBMDX_REGN_AUDIO_ROUTING_CONFIG				0x801F0000
/* Reg Value */
#define DBMDX_REGV_EN_RX_PROCESS				0X0001
#define DBMDX_REGV_D2_SET_TDM0_FOR_BYPASS			0X0004
#define DBMDX_REGV_D2_SET_TDM1_FOR_BYPASS			0X0008
#define DBMDX_REGV_D2_SET_TDM2_FOR_BYPASS			0X0010
#define DBMDX_REGV_D2_SET_TDM3_FOR_BYPASS			0X0020
#define DBMDX_REGV_TDM_BYPASS_EN				0X0040
#define DBMDX_REGV_TDM_BYPASS_MODE_TDM0_TO_TDM1_TDM2_TO_TDM3	0x0000
#define DBMDX_REGV_TDM_BYPASS_MODE_TDM0_TO_TDM3_TDM2_TO_TDM1	0x0080
#define DBMDX_REGV_MUSIC_IN_TDM0				0x0000
#define DBMDX_REGV_MUSIC_IN_TDM1				0x0100
#define DBMDX_REGV_MUSIC_IN_TDM2				0x0200
#define DBMDX_REGV_MUSIC_IN_TDM3				0x0300
#define DBMDX_REGV_USE_TDM_MUSIC_TO_SYNC			0x0400
#define DBMDX_REGV_TDM_SYNC_LEFT_CH				0x0000
#define DBMDX_REGV_TDM_SYNC_RIGHT_CH				0x0800
#define DBMDX_REGV_TDM_SYNC_DELAY_1_CLKS_CYCLES			0x1000
#define DBMDX_REGV_TDM_SYNC_DELAY_2_CLKS_CYCLES			0x2000
#define DBMDX_REGV_TDM_SYNC_DELAY_3_CLKS_CYCLES			0x3000
#define DBMDX_REGV_TDM_SYNC_DELAY_4_CLKS_CYCLES			0x4000
#define DBMDX_REGV_TDM_SYNC_DELAY_5_CLKS_CYCLES			0x5000
#define DBMDX_REGV_TDM_SYNC_DELAY_6_CLKS_CYCLES			0x6000
#define DBMDX_REGV_TDM_SYNC_DELAY_7_CLKS_CYCLES			0x7000
#define DBMDX_REGV_TDM_SYNC_DELAY_8_CLKS_CYCLES			0x8000
#define DBMDX_REGV_TDM_SYNC_DELAY_9_CLKS_CYCLES			0x9000
#define DBMDX_REGV_TDM_SYNC_DELAY_10_CLKS_CYCLES		0xA000
#define DBMDX_REGV_TDM_SYNC_DELAY_11_CLKS_CYCLES		0xB000
#define DBMDX_REGV_TDM_SYNC_DELAY_12_CLKS_CYCLES		0xC000
#define DBMDX_REGV_TDM_SYNC_DELAY_13_CLKS_CYCLES		0xD000
#define DBMDX_REGV_TDM_SYNC_DELAY_14_CLKS_CYCLES		0xE000
#define DBMDX_REGV_TDM_SYNC_DELAY_15_CLKS_CYCLES		0xF000


/* Reg 0X20 */
#define DBMDX_REGN_READ_AUDIO_BUFFER		0x80200000

/* Reg 0X21 */
#define DBMDX_REGN_POST_DETECTION_CLK_CFG	0x80210000

/* Reg 0X22 */
#define DBMDX_REGN_GENERAL_CONFIG_1	0x80220000
/* Reg Value */
#define DBMDX_REGV_MAX_NUMBER_OF_MIC_IS_0_OR_1		0x0000
#define DBMDX_REGV_MAX_NUMBER_OF_MIC_IS_2		0x0001
#define DBMDX_REGV_MAX_NUMBER_OF_MIC_IS_4		0x0002
#define DBMDX_REGV_DSP_CLK_GEN_PLL			0x0000
#define DBMDX_REGV_DSP_CLK_GEN_RC_OSC			0x0020
#define DBMDX_REGV_IF_REQUIRED_WAKEUP			0x0040
#define DBMDX_REGV_AUD_BUF_READ_MODE_MODE_2		0x0000
#define DBMDX_REGV_AUD_BUF_READ_MODE_MODE_1_AND_2	0x0080
#define DBMDX_REGV_WAKEUP_POLARITY_ACTIVE_LOW		0x0000
#define DBMDX_REGV_WAKEUP_POLARITY_ACTIVE_HIGH		0x0100
#define DBMDX_REGV_MEMORY_SLEEP_EN			0x0200
#define DBMDX_REGV_INVERT_DETECTION_GPIOS_ACTIVE_LOW	0x0400
#define DBMDX_REGV_INVERT_DETECTION_GPIOS_ACTIVE_HIGH	0x0000
#define DBMDX_REGV_SEND_UART_CHG_SEQ			0X0800
#define DBMDX_REGV_SPLIT_MIC_BUFFER			0x1000

/* Reg 0X23 */
#define DBMDX_REGN_GENERAL_CONFIG_2		0x80230000
/* Reg Value */
#define DBMDX_REGV_PLL_POST_DIV_0			0x0000
#define DBMDX_REGV_PLL_POST_DIV_1			0x0001
#define DBMDX_REGV_PLL_POST_DIV_2			0x0002
#define DBMDX_REGV_PLL_POST_DIV_3			0x0003
#define DBMDX_REGV_PLL_POST_DIV_4			0x0004
#define DBMDX_REGV_PLL_POST_DIV_5			0x0005
#define DBMDX_REGV_PLL_POST_DIV_6			0x0006
#define DBMDX_REGV_PLL_POST_DIV_7			0x0007
#define DBMDX_REGV_PLL_POST_DIV_8			0x0008
#define DBMDX_REGV_PLL_POST_DIV_9			0x0009
#define DBMDX_REGV_PLL_POST_DIV_10			0x000a
#define DBMDX_REGV_PLL_POST_DIV_11			0x000b
#define DBMDX_REGV_PLL_POST_DIV_12			0x000c
#define DBMDX_REGV_PLL_POST_DIV_13			0x000d
#define DBMDX_REGV_PLL_POST_DIV_14			0x000e
#define DBMDX_REGV_PLL_POST_DIV_15			0x000f
#define DBMDX_REGV_FW_VAD_TYPE_NO_VAD			0x0000
#define DBMDX_REGV_FW_VAD_TYPE_HW_VAD0			0x0020
#define DBMDX_REGV_FW_VAD_TYPE_FW_OR_VESPER		0x0040
#define DBMDX_REGV_FW_VAD_TYPE_D6_HW_VAD1		0x0060
#define DBMDX_REGV_DDF_SAMPLE_WIDTH_16_BIT		0x0000
#define DBMDX_REGV_DDF_SAMPLE_WIDTH_24_BIT		0x0080
#define DBMDX_REGV_MIC_SAMPLE_RATE_16K			0x0000
#define DBMDX_REGV_MIC_SAMPLE_RATE_44_1K		0x0100
#define DBMDX_REGV_MIC_SAMPLE_RATE_48K			0x0200
#define DBMDX_REGV_MIC_SAMPLE_RATE_8K			0x0300
#define DBMDX_REGV_AUTO_MIPS_HWVAD_ENABLED		0x0400
#define DBMDX_REGV_RESET_DDF_DC				0x0800
#define DBMDX_REGV_WRITE_AUD_BUF_HDR			0x1000
#define DBMDX_REGV_D6_LDO_SETTING_INPUT_MIN_0_96V	0x2000
#define DBMDX_REGV_D6_LDO_SETTING_INPUT_MIN_1_03V	0x4000
#define DBMDX_REGV_D6_LDO_SETTING_INPUT_MIN_1_1V	0x6000

/* Reg 0X24 */
#define DBMDX_REGN_FIRST_MICROPHONE_CONFIG	0x80240000

/* Reg 0X25 */
#define DBMDX_REGN_SECOND_MICROPHONE_CONFIG	0x80250000

#ifndef DBMDX_FW_BELOW_280
/* Reg 0X26,27 */
#define DBMDX_REGN_THIRD_MICROPHONE_CONFIG	0x80260000
#define DBMDX_REGN_FOURTH_MICROPHONE_CONFIG	0x80270000
#endif

/* Reg Value */
#define DBMDX_REGV_D2_MIC_SRC_LEFT_DMIC_DM0		0x0001
#define DBMDX_REGV_D2_MIC_SRC_RIGHT_DMIC_DM0		0x0002
#define DBMDX_REGV_D2_MIC_SRC_LEFT_DMIC_DM1		0x0003
#define DBMDX_REGV_D2_MIC_SRC_RIGHT_DMIC_DM1		0x0004
#define DBMDX_REGV_D2_MIC_SRC_ANALOG_MIC_DM2		0x0005
#define DBMDX_REGV_D2_DM_DATA_SRC_DM0_TDM2_RX		0x0000
#define DBMDX_REGV_D2_DM_DATA_SRC_DM1_TDM0_FSYNC	0x0000
#define DBMDX_REGV_D2_DM_DATA_SRC_DM2_HIGH_IMPEDANCE	0x0000
#define DBMDX_REGV_D2_DM_DATA_SRC_DM0_TDM3_FSYNC	0x0008
#define DBMDX_REGV_D2_DM_DATA_SRC_DM1_TDM3_RX		0x0008
#define DBMDX_REGV_D2_DM_DATA_SRC_DM2_MID_IMPEDANCE	0x0008
#define DBMDX_REGV_D2_DM_CLK_SRC_DM0_TDM2_TX		0x0000
#define DBMDX_REGV_D2_DM_CLK_SRC_DM1_TDM0_TX		0x0000
#define DBMDX_REGV_D2_DM_CLK_SRC_DM0_TDM3_SCLK		0x0010
#define DBMDX_REGV_D2_DM_CLK_SRC_DM1_TDM3_TX		0x0010

#define DBMDX_REGV_DDF_AND_DM_CONFIG_DDF0_DM0		0x0001
#define DBMDX_REGV_DDF_AND_DM_CONFIG_DDF0_DM1		0x0002
#define DBMDX_REGV_DDF_AND_DM_CONFIG_DDF1_DM0		0x0003
#define DBMDX_REGV_DDF_AND_DM_CONFIG_DDF1_DM1		0x0004
#define DBMDX_REGV_DDF_AND_DM_CONFIG_SD_DDF_DM0		0x0005
#define DBMDX_REGV_DDF_AND_DM_CONFIG_SD_DDF_DM1		0x0006
#define DBMDX_REGV_DDF_AND_DM_CONFIG_SD_DDF_SD_ADC	0x0007
#define DBMDX_REGV_DDF_AND_DM_CONFIG_SAR_DDF_SAR_ADC	0x0008
#define DBMDX_REGV_CLOCK_POLARITY_RISING_EDGE		0x0000
#define DBMDX_REGV_CLOCK_POLARITY_FALLING_EDGE		0x0010

#define DBMDX_REGV_DM_CLK_FREQ_512_SR_8KHz_16KHz			0x0000
#define DBMDX_REGV_DM_CLK_FREQ_768_SR_8KHz_16KHz			0x0020
#define DBMDX_REGV_DM_CLK_FREQ_1024_1040_SR_16KHz_32KHz_48KHz		0x0040
#define DBMDX_REGV_DM_CLK_FREQ_1536_1200_SR_8KHz_16KHz_32KHz_48KHz	0x0060
#define DBMDX_REGV_DM_CLK_FREQ_2304_2352_SR_16KHz_32KHz_48KHz		0x0080
#define DBMDX_REGV_DM_CLK_FREQ_3072_SR_16KHz_32KHz_48KHz		0x00a0
#ifdef CONFIG_SND_SOC_DBMDX_ALEXA
#define DBMDX_REGV_SAR_IIR_FILTER_128					0x0000
#define DBMDX_REGV_SAR_IIR_FILTER_256					0x0020
#define DBMDX_REGV_SAR_IIR_FILTER_SD_ALIGN_D8D				0x0040
#define DBMDX_REGV_SAR_IIR_FILTER_64_FOR_TDM0_44_1			0x0080
#else
#define DBMDX_REGV_SAR_128Khz						0x0000
#define DBMDX_REGV_SAR_512_Khz						0x00f0
#endif
#define DBMDX_REGV_SYNCED_START						0x0100
#define DBMDX_REGV_DDF_AUDIO_ATTENUATION_6dB_GAIN			0x0000
#define DBMDX_REGV_DDF_AUDIO_ATTENUATION_0dB				0x0200
#define DBMDX_REGV_DDF_AUDIO_ATTENUATION_MINUS_6dB			0x0400
#define DBMDX_REGV_DDF_AUDIO_ATTENUATION_MINUS_12dB			0x0600
#ifdef CONFIG_SND_SOC_DBMDX_ALEXA
#define DBMDX_REGV_SAR_ADC_IN_SEL_MIC2						0x0800
#define DBMDX_REGV_SAR_ADC_IN_SEL_MIC0						0x0000
#endif
#define DBMDX_REGV_DM_DATA_SRC_DM0_GPIO2_DM1_GPIO1			0x0000
#define DBMDX_REGV_DM_DATA_SRC_DM0_GPIO5_DM1_GPIO11			0x1000
#define DBMDX_REGV_DM_DATA_SRC_DM0_GPIO9_DM1_GPIO13			0x2000
#define DBMDX_REGV_DM_DATA_SRC_DM0_GPIO20_DM1_GPIO18			0x3000
#define DBMDX_REGV_DM_CLOCK_SRC_DM0_GPIO6_DM1_GPIO0			0x0000
#define DBMDX_REGV_DM_CLOCK_SRC_DM0_GPIO6_DM1_GPIO12			0x4000
#define DBMDX_REGV_DM_CLOCK_SRC_DM0_GPIO8_DM1_GPIO14			0x8000
#define DBMDX_REGV_DM_CLOCK_SRC_DM0_GPIO19_DM1_GPIO17			0xC000
#define DBMDX_REGV_CLOSING_MICS_NO_DM_CLOCK				0x0200

/* Reg 0X29 */
#define DBMDX_REGN_HOST_INTERFACE_SUPPORT	0x80290000
/* Values */
#define DBMDX_REGV_UART0_ENABLE_FOR_HOST_D2_TDM2_D4_D6_GPIO_17_18	0x0001
#define DBMDX_REGV_I2C_D2_ON_I2C_SDA_SCK_D4_D6_GPIO_1_2			0X0002
#define DBMDX_REGV_SLIMBUS_D2_TDM0_D4_D6_GPIO_13_15			0x0004
#define DBMDX_REGV_UART_D2_0_UART_TDI_RTCK_D4_1_GPIO_14_15		0X0008
#define DBMDX_REGV_UART_D2_0_UART_Rx_Tx_D4_1_GPIO_8_9			0X0010
#define DBMDX_REGV_SPI_D2_TDM1_D4_GPIO_4_5_6_7				0x0020
#define DBMDX_REGV_SPI_D2_SPI_PINS_D6_GPIO_4_5_6_7			0x0040
#define DBMDX_REGV_UART_D2_0_ON_I2C_SDA_SCK				0x0080
#define DBMDX_REGV_SPI_ACK						0x0800
#define DBMDX_REGV_UART_DEBUG_MODE_0					0x1000
#define DBMDX_REGV_UART_DEBUG_MODE_1					0x2000
#define DBMDX_REGV_UART_EN_UART_1_Rx					0x4000

/* Reg 0X31 */
#define DBMDX_REGN_TDM_ACTIVATION_CTL		0x80310000
/* Values */
#define DBMDX_REGV_CONFIG_TDM_0					0x0000
#define DBMDX_REGV_CONFIG_TDM_1					0x0001
#define DBMDX_REGV_CONFIG_TDM_2					0x0002
#define DBMDX_REGV_CONFIG_TDM_3					0x0003
#define DBMDX_REGV_PROC_EN_DISABLE				0x0000
#define DBMDX_REGV_PROC_EN_SWITCH_FW_TO_DETECTION_MODE		0x0004
#define DBMDX_REGV_PROC_EN_SWITCH_FW_TO_BUFFERING_MODE		0x0008
#define DBMDX_REGV_TDM0_RX_EN					0x0100
#define DBMDX_REGV_TDM0_TX_EN					0x0200
#define DBMDX_REGV_TDM1_RX_EN					0x0400
#define DBMDX_REGV_TDM1_TX_EN					0x0800
#define DBMDX_REGV_TDM2_RX_EN					0x1000
#define DBMDX_REGV_TDM2_TX_EN					0x2000
#define DBMDX_REGV_TDM3_RX_EN					0x4000
#define DBMDX_REGV_TDM3_TX_EN					0x8000


/* Reg 0X33 */
#define DBMDX_REGN_MEMORY_CONFIG				0x80330000
#define DBMDX_REGV_DTCM_SIZE_64_KW				0x0000
#define DBMDX_REGV_DTCM_SIZE_D4_D6_96_KW_D8_128KW		0x0001
#define DBMDX_REGV_DTCM_SIZE_D4_D6_96_KW_D8_192KW		0x0002
#define DBMDX_REGV_AUDIO_BUF_LOC_DTCM_USING_MEM_ALLOCATION	0x0000
#define DBMDX_REGV_AUDIO_BUF_LOC_AHB_USING_MEM_ALLOCATION	0x0004
#define DBMDX_REGV_AUDIO_BUF_LOC_AHB_3_SEC_BUFFER		0x0008
#define DBMDX_REGV_AUDIO_BUF_LOC_AHB_7_SEC_BUFFER_D8		0x000C
#define DBMDX_REGV_AHB_ON_SIZE_NO_AHB				0x0000
#define DBMDX_REGV_AHB_ON_SIZE_32KW				0x0010
#define DBMDX_REGV_AHB_ON_SIZE_64KW_32KW_CACHE			0x0020
#define DBMDX_REGV_AHB_ON_SIZE_80KW_16KW_CACHE			0x0030
#define DBMDX_REGV_AHB_ON_SIZE_112KW_32KW_CACHE			0x0040
#define DBMDX_REGV_AHB_ON_SIZE_128KW_16KW_CACHE			0x0050
#define DBMDX_REGV_AHB_ON_SIZE_160KW_32KW_CACHE_D8		0x0060
#define DBMDX_REGV_AHB_ON_SIZE_192KW_32KW_CACHE_D8		0x0070
#define DBMDX_REGV_AMODEL_0_LOC_DTCM				0x0000
#define DBMDX_REGV_AMODEL_1_LOC_DTCM				0x0000
#define DBMDX_REGV_AMODEL_2_LOC_DTCM				0x0000
#define DBMDX_REGV_AMODEL_3_LOC_DTCM				0x0000
#define DBMDX_REGV_AMODEL_4_LOC_DTCM				0x0000
#define DBMDX_REGV_AMODEL_0_LOC_AHB				0x0100
#define DBMDX_REGV_AMODEL_1_LOC_AHB				0x0200
#define DBMDX_REGV_AMODEL_2_LOC_AHB				0x0400
#define DBMDX_REGV_AMODEL_3_LOC_AHB				0x0800
#define DBMDX_REGV_AMODEL_4_LOC_AHB				0x1000
#define DBMDX_REGV_MIC_AUDIO_BUF_LOC_DTCM			0x0000
#define DBMDX_REGV_MIC_AUDIO_BUF_LOC_AHB			0x2000

/* Reg 0X34 */
#define DBMDX_REGN_AUDIO_PROCESSING_CONFIG		0x80340000
/* Reg Value */
#define DBMDX_REGV_ALGO1_EN_FW_MODE_1_ONLY			0x0001
#define DBMDX_REGV_ALGO1_EN_FW_MODE_2_ONLY			0x0002
#define DBMDX_REGV_ALGO1_EN_FW_MODE_1_AND_MODE_2		0x0003
#define DBMDX_REGV_ALGO2_EN_FW_MODE_1_ONLY			0x0004
#define DBMDX_REGV_ALGO2_EN_FW_MODE_2_ONLY			0x0008
#define DBMDX_REGV_ALGO2_EN_FW_MODE_1_AND_MODE_2		0x000C
#define DBMDX_REGV_I2S_CATCHUP_MODE_DISABLED			0x0000
#define DBMDX_REGV_I2S_CATCHUP_MODE_WRITE_16K_IN_48K_TDM	0x0010
#define DBMDX_REGV_I2S_CATCHUP_MODE_ENABLED			0x0020
#define DBMDX_REGV_VT_PROC_EN					0x0040
#define DBMDX_REGV_EN_441_EC_REF_DECIM				0x0080
#define DBMDX_REGV_VT_CP0					0x0000
#define DBMDX_REGV_VT_CP1					0x0100
#define DBMDX_REGV_VT_CP2					0x0200
#define DBMDX_REGV_VT_CP3					0x0300
#define DBMDX_REGV_VT_CP4					0x0400
#define DBMDX_REGV_VT_CP5					0x0500
#define DBMDX_REGV_VT_CP6					0x0600
#define DBMDX_REGV_VT_CP7					0x0700
#define DBMDX_REGV_AUTO_SET_HIGH_MIPS				0x1000
#define DBMDX_REGV_POST_DET_MODE_SWITCH_TO_STREAMING		0x0000
#define DBMDX_REGV_POST_DET_MODE_REMAIN_IN_DETECTION		0x2000
#define DBMDX_REGV_EN_48_EC_REF_DECIM				0x4000
#define DBMDX_REGV_EN_COPY_HIST					0x8000

/* Reg 0X35 */
#define DBMDX_REGN_FEATURE_SUPPORT			0x80350000

/* Reg 0X36 */
#define DBMDX_REGN_TDM_RX_CONFIG			0x80360000

/* Reg 0X37 */
#define DBMDX_REGN_TDM_TX_CONFIG			0x80370000
/* Values */
#define DBMDX_REGV_CLEAR_TDM_CFG				0x0000
#define DBMDX_REGV_RX_TX_CP0					0x0000
#define DBMDX_REGV_RX_TX_CP1					0x0001
#define DBMDX_REGV_RX_TX_CP2					0x0002
#define DBMDX_REGV_RX_TX_CP3					0x0003
#define DBMDX_REGV_RX_TX_CP4					0x0004
#define DBMDX_REGV_RX_TX_CP5					0x0005
#define DBMDX_REGV_RX_TX_CP6					0x0006
#define DBMDX_REGV_RX_TX_CP7					0x0007
#define DBMDX_REGV_RX_TX_CP8					0x0008
#define DBMDX_REGV_RX_TX_CP9					0x0009
#define DBMDX_REGV_RX_TX_CP_VT_AUDIO_BUFFER			0x000f
#define DBMDX_REGV_HW_BLOCK_EN					0x0010
#define DBMDX_REGV_RESAMPLE_RATIO_NO_RESAMPLING			0x0000
#define DBMDX_REGV_RESAMPLE_RATIO_2_AND_1_OR_44_1		0x0020
#define DBMDX_REGV_RESAMPLE_RATIO_3_1				0x0040
#define DBMDX_REGV_RESAMPLE_TYPE_DECIMATION			0x0000
#define DBMDX_REGV_RESAMPLE_TYPE_INTERPOLATION			0x0080
#define DBMDX_REGV_RX_TX_I2S_CH_USE_LOW_WORD_ONLY		0x0000
#define DBMDX_REGV_RX_TX_I2S_CH_USE_HIGH_WORD_ONLY		0x0100
#define DBMDX_REGV_RX_TX_I2S_CH_USE_I2S_STEREO			0x0200
#define DBMDX_REGV_RX_TX_I2S_CH_SUM_HIGH_AND_LOW_INTO_ONE_SAMPLE 0x0300
#define DBMDX_REGV_INPUT_OUTPUT_SAMPLE_RATE_16_KHz		0x0000
#define DBMDX_REGV_INPUT_OUTPUT_SAMPLE_RATE_44_1_KHz		0x0400
#define DBMDX_REGV_INPUT_OUTPUT_SAMPLE_RATE_48_KHz		0x0800
#define DBMDX_REGV_INPUT_OUTPUT_SAMPLE_RATE_8_KHz		0x0C00
#define DBMDX_REGV_NUM_OF_CHANNELS_1_CH				0x0000
#define DBMDX_REGV_NUM_OF_CHANNELS_2_CH				0x1000
#define DBMDX_REGV_NUM_OF_CHANNELS_4_CH				0x2000
#define DBMDX_REGV_SAMPLE_WIDTH_16_BIT				0x0000
#define DBMDX_REGV_SAMPLE_WIDTH_32_BIT				0x4000
#define DBMDX_REGV_DEMUX_MUX_DISABLE				0x0000
#define DBMDX_REGV_DEMUX_MUX_ENABLE				0x8000

/* Reg 0X38 */
#define DBMDX_REGN_BUFFERING_NORMAL_AMPLITUDE	0x80380000
/* Values */
#define DBMDX_REGV_NORMALIZE_TO_MINUS_1dB		0x003F
#define DBMDX_REGV_NORMALIZE_TO_MINUS_3dB		0x003D
#define DBMDX_REGV_NORMALIZE_TO_MINUS_6dB		0x003A
#define DBMDX_REGV_NORMALIZE_TO_MINUS_9dB		0x0037
#define DBMDX_REGV_NORMALIZE_TO_MINUS_18dB		0x002E
#define DBMDX_REGV_NO_NORMALIZATION			0x0000
#define DBMDX_REGV_USE_PHRASE_LEN_CONFIG_BY_HOST	0x0080
#define DBMDX_REGV_USE_PHRASE_LEN_FROM_WWE		0x0000
#define DBMDX_REGV_USER_CONFIG_PHRASE_LEN_500_MS	0x3200
#define DBMDX_REGV_USER_CONFIG_PHRASE_LEN_600_MS	0x3C00
#define DBMDX_REGV_USER_CONFIG_PHRASE_LEN_700_MS	0x4600


/* Reg 0X3D */
#define DBMDX_REGN_INDIRECT_ACCESS_REG_NUMBER		0x803D0000

/* Reg 0X3F */
#define DBMDX_REGN_INDIRECT_ACCESS_REG_READ		0x803F0000

/* Reg 0X3E */
#define DBMDX_REGN_INDIRECT_ACCESS_REG_WRITE		0x803E0000

#define DBMDX_REGN_VT_ENGINE_RECOGNITION_MODE		0x80400000

#define DBMDX_REGN_VT_ENGINE_INITIALIZED		0x80410000

/* Reg 0x42 */
#define DBMDX_REGN_VT_ENGINE_LPSD_VAD			0x80420000
/* Values */
#define DBMDX_REGV_LPSD_VAD_DISABLED			0x0000
#define DBMDX_REGV_LPSD_VAD_ENABLED			0x0001

#define DBMDX_REGN_VT_ENGINE_TG_THRESHOLD		0x80470000

#define DBMDX_REGN_VT_ENGINE_VERIF_THRESHOLD		0x80480000

#define DBMDX_REGN_VT_ENGINE_WORDID			0x805B0000

#define DBMDX_REGN_VT_ENGINE_ALTWORDID			0x805C0000

#define DBMDX_REGN_VT_ENGINE_FINAL_SCORE		0x805D0000

#define DBMDX_REGN_VT_ENGINE_SCORE			0x805E0000

#define DBMDX_REGN_VT_ENGINE_PASSPHRASE_LENGTH		0x80670000

#define DBMDX_REGN_GOOGLE_ENGINE_PHRASE_LENGTH		0x80970000
/* Values */
#define DBMDX_REGV_USER_CFG_PHRASE_LENGTH_500MS		0x00001F40

#define DBMDX_REGN_ASRP_LIB_VER				0x81000000

#define DBMDX_REGN_ASRP_PARAM_SIZE			0x81010000

#define DBMDX_REGN_ASRP_FORCE_INIT_STATE		0x81020000

#define DBMDX_REGN_ASRP_NUM_OF_WARNINGS			0x81030000

#define DBMDX_REGN_ASRP_NUM_OF_ERRORS			0x81040000

#define DBMDX_REGN_ASRP_ERROR_NUMBER			0x81050000

#define DBMDX_REGN_ASRP_USER_DEFINED_DELAY		0x81070000

#define DBMDX_REGN_ASRP_OUTPUT_ROUTING			0x81090000
#define DBMDX_REGV_ASRP_OUTPUT_SRC_BFPF_1		0x0000
#ifdef CONFIG_SND_SOC_DBMDX_ALEXA
#define DBMDX_REGV_ASRP_OUTPUT_SRC_BFPF_2		0x0100
#define DBMDX_REGV_ASRP_OUTPUT_SRC_VCPF_1		0x0200
#define DBMDX_REGV_ASRP_OUTPUT_SRC_BF_1			0x0300
#define DBMDX_REGV_ASRP_OUTPUT_SRC_AEC_1		0x0400
#define DBMDX_REGV_ASRP_OUTPUT_SRC_AEC_2		0x0500
#define DBMDX_REGV_ASRP_OUTPUT_SRC_AEC_3		0x0600
#else
#define DBMDX_REGV_ASRP_OUTPUT_SRC_VCPF_1		0x0100
#define DBMDX_REGV_ASRP_OUTPUT_SRC_BF_1			0x0200
#define DBMDX_REGV_ASRP_OUTPUT_SRC_AEC_1		0x0300
#define DBMDX_REGV_ASRP_OUTPUT_SRC_AEC_2		0x0400
#define DBMDX_REGV_ASRP_OUTPUT_SRC_AEC_3		0x0500
#endif
#define DBMDX_REGV_ASRP_OUTPUT_DEST_TX_1		0x0000
#define DBMDX_REGV_ASRP_OUTPUT_DEST_TX_2		0x0001
#define DBMDX_REGV_ASRP_OUTPUT_DEST_TX_3		0x0002
#define DBMDX_REGV_ASRP_OUTPUT_DEST_TX_4		0x0003
#define DBMDX_REGV_ASRP_OUTPUT_DEST_TX_5		0x0004
#define DBMDX_REGV_ASRP_OUTPUT_DEST_TX_6		0x0005
#define DBMDX_REGV_ASRP_OUTPUT_DEST_TX_7		0x0006
#define DBMDX_REGV_ASRP_OUTPUT_DEST_TX_8		0x0007

#define DBMDX_REGN_ASRP_OUTPUT_GAIN_DEST_SEL		0x810A0000
#define DBMDX_REGV_ASRP_TX_OUT				0x0000
#define DBMDX_REGV_ASRP_VCPF_OUT			0x0001
#define DBMDX_REGV_ASRP_RX_OUT				0x0002

#define DBMDX_REGN_ASRP_OUTPUT_GAIN_DEST_VALUE		0x810B0000

#define DBMDX_REGN_ASRP_CONTROL				0x81200000

#define DBMDX_REGN_ASRP_DELAY_IN_BYPASS_MODE		0x81210000

#define DBMDX_REGN_ASRP_IN_TO_OUT_IN_BYPASS_MODE	0x81220000

#define DBMDX_REGN_ASRP_BLOCKID_LOW_PART		0x81240000

#define DBMDX_REGN_ASRP_BLOCKID_HIGH_PART		0x81250000

#define DBMDX_REGN_ASRP_ENABLE_OFFSET			0x81260000

#define DBMDX_REGN_ASRP_VALUE				0x81270000

#define DBMDX_REGN_ASRP_RECORDS_CHANNELS		0x81280000
#define DBMDX_REGV_ASRP_REC_CH_TX_IN_1			0x0001
#define DBMDX_REGV_ASRP_REC_CH_TX_IN_2			0x0002
#define DBMDX_REGV_ASRP_REC_CH_TX_IN_3			0x0004
#define DBMDX_REGV_ASRP_REC_CH_TX_IN_4			0x0008
#define DBMDX_REGV_ASRP_REC_CH_RX_IN_1			0x0010
#define DBMDX_REGV_ASRP_REC_CH_RX_IN_2			0x0020
#define DBMDX_REGV_ASRP_REC_CH_RX_OUT_1			0x0040
#define DBMDX_REGV_ASRP_REC_CH_TX_PROC_TX_IN_1		0x0100
#define DBMDX_REGV_ASRP_REC_CH_TX_PROC_TX_IN_2		0x0200
#define DBMDX_REGV_ASRP_REC_CH_TX_PROC_TX_IN_3		0x0400
#define DBMDX_REGV_ASRP_REC_CH_TX_PROC_RX_IN_1		0x1000
#define DBMDX_REGV_ASRP_REC_CH_TX_PROC_RX_IN_2		0x2000
#define DBMDX_REGV_ASRP_REC_CH_TX_PROC_RX_OUT_1		0x4000

#define DBMDX_REGN_ASRP_RECORDS_CHANNELS_2		0x81290000
#define DBMDX_REGV_ASRP_REC_CH_TX_OUT_1			0x0001
#define DBMDX_REGV_ASRP_REC_CH_TX_OUT_2			0x0002
#define DBMDX_REGV_ASRP_REC_CH_TX_OUT_3			0x0004

#ifdef CONFIG_SND_SOC_DBMDX_ALEXA
#define DBMDX_REGN_ASRP_PSAD_TRIGGER_MODE		0x81400000
#define DBMDX_REGN_ASRP_PSAD_TRIGGER_OFFSET_MODE	0x81410000
#define DBMDX_REGN_ASRP_PSAD_TRIGGER_LENGTH		0x81420000
#endif

#define DBMDX_REGN_ASRP_QED_BASE			0x81400000

#define DBMDX_REGN_ASRP_QED_TRIGGER_MODE		0x81400000

#define DBMDX_REGN_ASRP_QED_TRIGGER_OFFSET_MODE		0x81410000

#define DBMDX_REGN_ASRP_QED_TRIGGER_LENGTH		0x81420000

#define DBMDX_REGN_ASRP_QED_OUT_DETECTION		0x81430000

#define DBMDX_REGN_ASRP_QED_ENABLE			0x81460000

#define DBMDX_VA_ASRP_QED_NO_SIGNAL_FRAMES		0x81470000
#define DBMDX_REGN_ASRP_QED_NO_SIGNAL_FRAMES		0x81470000

#define DBMDX_REGN_ASRP_QED_QUERY_HYP_MIN_FRAMES	0x81480000

#define DBMDX_REGN_ASRP_QED_EXPIRATION_FRAMES		0x81490000

#define DBMDX_ASRP_GAIN_BLOCK_ID	0x21
#define DBMDX_ASRP_GAIN_OFFSET		0x1C

/* Hardware IOM registers */
#define DBMDX_HW_REGN_IOM1		0X0300004C
#define DBMDX_HW_REGN_IOM2		0X03000050
#define DBMDX_HW_REGN_GP_DATA_SET	0X04000004
#define DBMDX_HW_REGN_GP_DATA_CLR	0X04000008
#define DBMDX_HW_REGN_GP_DIR_OUT	0X04000010

/* Hardware IO registers */
#define DBMDX_HW_REGN_IOKE_ADDRESS	0X03000060
#define DBMDX_HW_REGN_IOPE_ADDRESS	0X03000064
#define DBMDX_HW_REGN_IOPV_ADDRESS	0X03000068

#define DBMDX_HW_REGV_IOKE_VALUE	0x00FDFFFF
#define DBMDX_HW_REGV_IOPE_VALUE	0x00020000
#define DBMDX_HW_REGV_IOPV_VALUE	0x006007C6

#define DBMDX_HW_REGV_MASK_UART_RX	0x00020000
#define DBMDX_HW_REGV_MASK_IO_PULL_DOWN	0x001DE4F1


#define DBMDX_READ_CHECKSUM		0x805A0E00
#define DBMDX_FIRMWARE_BOOT		0x805A0B00
#define DBMDX_CLEAR_CHECKSUM		0x805A0F00

#define DBMDX_VA_USLEEP_FLAG		0x0AAA
#define DBMDX_VA_USLEEP			0x8AAA0000
#define DBMDX_VA_MSLEEP_FLAG		0x0AAB
#define DBMDX_VA_MSLEEP			0x8AAB0000

#define DBMDX_UNDEFINED_REGISTER	0xEEEE

#define DBMDX_FIRMWARE_ID_DBMD2		0xDBD2
#define DBMDX_FIRMWARE_ID_DBMD4		0xDBD4
#define DBMDX_FIRMWARE_ID_DBMD6		0xDBD6
#define DBMDX_FIRMWARE_ID_DBMD8		0xDBD8

#ifndef DBMDX_MIC_DISABLE_VAL
#define	DBMDX_MIC_DISABLE_VAL		0x0200
#endif

#define DBMDX_POST_PLL_DIV_MASK		0x0007
#define DBMDX_OKG_AMODEL_SUPPORT_MASK	0x0100
#define DBMDX_SV_AMODEL_SUPPORT_MASK	0x0001
#define DBMDX_SVT_AMODEL_SUPPORT_MASK	0x0004
#define	OKG_EVENT_ID			0x10
#define LOAD_AMODEL_OKG_FW_CMD		0x2

#define DBMDX_QED_WORDID		0x2000

#define DBMD4_TDM_0_RX_ADDR		0x80800000
#define DBMD4_TDM_1_RX_ADDR		0x80801000

#define DBMD4_TDM_0_TX_ADDR		0x80804000
#define DBMD4_TDM_1_TX_ADDR		0x80805000

#define DBMD2_TDM_0_RX_ADDR		0x80800000
#define DBMD2_TDM_1_RX_ADDR		0x80801000
#define DBMD2_TDM_2_RX_ADDR		0x80802000
#define DBMD2_TDM_3_RX_ADDR		0x80803000

#define DBMD2_TDM_0_TX_ADDR		0x80804000
#define DBMD2_TDM_1_TX_ADDR		0x80805000
#define DBMD2_TDM_2_TX_ADDR		0x80806000
#define DBMD2_TDM_3_TX_ADDR		0x80807000

#define DBMDX_VA_SET_POWER_STATE_SLEEP	0x80170001
#define DBMDX_VA_SWITCH_TO_BOOT		0x80180015


#endif
