/*
 * stpm33_metrology.h
 *
 *  Created on: Jan 20, 2020
 *      Author: sripokala
 */

#ifndef STPM33_METROLOGY_H_
#define STPM33_METROLOGY_H_

#include <stdbool.h>
#include "stdint.h"

#define SUCCESS 	1
#define FAILURE 	0

#define METRO_STPM_PERIPH_BASE         0x0000

#define UART_COMM           0
#define SPI_COMM            1

/************************************************************
* STANDARD BITS
************************************************************/
#define BIT(x)               ((uint32_t)1<<x)
#define BIT_0                ((uint32_t)0x00000001)
#define BIT_1                ((uint32_t)0x00000002)
#define BIT_2                ((uint32_t)0x00000004)
#define BIT_3                ((uint32_t)0x00000008)
#define BIT_4                ((uint32_t)0x00000010)
#define BIT_5                ((uint32_t)0x00000020)
#define BIT_6                ((uint32_t)0x00000040)
#define BIT_7                ((uint32_t)0x00000080)

#define BIT_8                ((uint32_t)0x00000100)
#define BIT_9                ((uint32_t)0x00000200)
#define BIT_10               ((uint32_t)0x00000400)
#define BIT_11               ((uint32_t)0x00000800)
#define BIT_12               ((uint32_t)0x00001000)
#define BIT_13               ((uint32_t)0x00002000)
#define BIT_14               ((uint32_t)0x00004000)
#define BIT_15               ((uint32_t)0x00008000)

#define BIT_16               ((uint32_t)0x00010000)
#define BIT_17               ((uint32_t)0x00020000)
#define BIT_18               ((uint32_t)0x00040000)
#define BIT_19               ((uint32_t)0x00080000)
#define BIT_20               ((uint32_t)0x00100000)
#define BIT_21               ((uint32_t)0x00200000)
#define BIT_22               ((uint32_t)0x00400000)
#define BIT_23               ((uint32_t)0x00800000)

#define BIT_24               ((uint32_t)0x01000000)
#define BIT_25               ((uint32_t)0x02000000)
#define BIT_26               ((uint32_t)0x04000000)
#define BIT_27               ((uint32_t)0x08000000)
#define BIT_28               ((uint32_t)0x10000000)
#define BIT_29               ((uint32_t)0x20000000)
#define BIT_30               ((uint32_t)0x40000000)
#define BIT_31               ((uint32_t)0x80000000)

/***********************CONFIGURATION REGISTERS *************************/

//----------------------------DSP Control Registers--------------------//
#define DSP_CONTROL_REG1_LSW        ((uint8_t)0x00)
#define DSP_CONTROL_REG1_MSW        ((uint8_t)0x01)
#define DSP_CONTROL_REG2_LSW        ((uint8_t)0x02)
#define DSP_CONTROL_REG2_MSW        ((uint8_t)0x03)
#define DSP_CONTROL_REG3_LSW        ((uint8_t)0x04)
#define DSP_CONTROL_REG3_MSW        ((uint8_t)0x05)
#define DSP_CONTROL_REG4_LSW        ((uint8_t)0x06)
#define DSP_CONTROL_REG4_MSW        ((uint8_t)0x07)
#define DSP_CONTROL_REG5_LSW        ((uint8_t)0x08)
#define DSP_CONTROL_REG5_MSW        ((uint8_t)0x09)
#define DSP_CONTROL_REG6_LSW        ((uint8_t)0x0A)
#define DSP_CONTROL_REG6_MSW        ((uint8_t)0x0B)
#define DSP_CONTROL_REG7_LSW        ((uint8_t)0x0C)
#define DSP_CONTROL_REG7_MSW        ((uint8_t)0x0D)
#define DSP_CONTROL_REG8_LSW        ((uint8_t)0x0E)
#define DSP_CONTROL_REG8_MSW        ((uint8_t)0x0F)
#define DSP_CONTROL_REG9_LSW        ((uint8_t)0x10)
#define DSP_CONTROL_REG9_MSW        ((uint8_t)0x11)
#define DSP_CONTROL_REG10_LSW       ((uint8_t)0x12)
#define DSP_CONTROL_REG10_MSW       ((uint8_t)0x13)
#define DSP_CONTROL_REG11_LSW       ((uint8_t)0x14)
#define DSP_CONTROL_REG11_MSW       ((uint8_t)0x15)
#define DSP_CONTROL_REG12_LSW       ((uint8_t)0x16)
#define DSP_CONTROL_REG12_MSW       ((uint8_t)0x17)

//------------------------------DFE Control Registers--------------------//
#define DFE_CONTROL_REG1_LSW        ((uint8_t)0x18)
#define DFE_CONTROL_REG1_MSW        ((uint8_t)0x19)
#define DFE_CONTROL_REG2_LSW        ((uint8_t)0x1A)
#define DFE_CONTROL_REG2_MSW        ((uint8_t)0x1B)

//-----------------------------DSP Interrupt Registers-------------------//
#define DSP_IRQn_1_LSW               ((uint8_t)0x1C)
#define DSP_IRQn_1_MSW               ((uint8_t)0x1D)
#define DSP_IRQn_2_LSW               ((uint8_t)0x1E)
#define DSP_IRQn_2_MSW               ((uint8_t)0x1F)

//------------------------------DSP Status Registers--------------------//
#define DSP_Status_REG1_LSW         ((uint8_t)0x20)
#define DSP_Status_REG1_MSW         ((uint8_t)0x21)
#define DSP_Status_REG2_LSW         ((uint8_t)0x22)
#define DSP_Status_REG2_MSW         ((uint8_t)0x23)

//--------------------------DSP LiveEvent Registers---------------------//
#define DSP_EVENT_REG1              ((uint8_t)0x2A)
#define DSP_EVENT_REG2              ((uint8_t)0x2C)

/********************** END CONFIGURATION REGISTERS***********************/

/****************************SPI/UART REGISTERS ***************************/

//------------------------SPI/UART Control Registers---------------------//
#define US_CONTROL_REG1_LSW         ((uint8_t)0x24)
#define US_CONTROL_REG1_MSW         ((uint8_t)0x25)
#define US_CONTROL_REG2_LSW         ((uint8_t)0x26)
#define US_CONTROL_REG2_MSW         ((uint8_t)0x27)

#define US_IRQ_REG_LSW              ((uint8_t)0x28)
#define US_IRQ_REG_MSW              ((uint8_t)0x29)

#define US_IRQ_CONTROL_REG          ((uint8_t)0x28)
#define US_IRQ_STATUS_REG           ((uint8_t)0x29)

/***************************END SPI/UART REGISTERS************************/

/*******************************DATA REGISTERS *****************************/
#define DSP_DATA_REG1                    ((uint8_t)0x2E)
#define DSP_DATA_REG2                    ((uint8_t)0x30)
#define DSP_DATA_REG3                    ((uint8_t)0x32)
#define DSP_DATA_REG4                    ((uint8_t)0x34)
#define DSP_DATA_REG5                    ((uint8_t)0x36)
#define DSP_DATA_REG6                    ((uint8_t)0x38)
#define DSP_DATA_REG7                    ((uint8_t)0x3A)
#define DSP_DATA_REG8                    ((uint8_t)0x3C)
#define DSP_DATA_REG9                    ((uint8_t)0x3E)
#define DSP_DATA_REG10                   ((uint8_t)0x40)
#define DSP_DATA_REG11                   ((uint8_t)0x42)
#define DSP_DATA_REG12                   ((uint8_t)0x44)
#define DSP_DATA_REG13                   ((uint8_t)0x46)
#define DSP_DATA_REG14                   ((uint8_t)0x48)
#define DSP_DATA_REG15                   ((uint8_t)0x4A)
#define DSP_DATA_REG16                   ((uint8_t)0x4C)
#define DSP_DATA_REG17                   ((uint8_t)0x4E)
#define DSP_DATA_REG18                   ((uint8_t)0x50)
#define DSP_DATA_REG19                   ((uint8_t)0x52)

#define PH1_REG1                    		 ((uint8_t)0x54)
#define PH1_REG2                    		 ((uint8_t)0x56)
#define PH1_REG3                         ((uint8_t)0x58)
#define PH1_REG4                         ((uint8_t)0x5A)
#define PH1_REG5                         ((uint8_t)0x5C)
#define PH1_REG6                         ((uint8_t)0x5E)
#define PH1_REG7                         ((uint8_t)0x60)
#define PH1_REG8                         ((uint8_t)0x62)
#define PH1_REG9                         ((uint8_t)0x64)
#define PH1_REG10                        ((uint8_t)0x66)
#define PH1_REG11                        ((uint8_t)0x68)
#define PH1_REG12                        ((uint8_t)0x6A)

#define PH2_REG1                         ((uint8_t)0x6C)
#define PH2_REG2                         ((uint8_t)0x6E)
#define PH2_REG3                         ((uint8_t)0x70)
#define PH2_REG4                         ((uint8_t)0x72)
#define PH2_REG5                         ((uint8_t)0x74)
#define PH2_REG6                         ((uint8_t)0x76)
#define PH2_REG7                         ((uint8_t)0x78)
#define PH2_REG8                         ((uint8_t)0x7A)
#define PH2_REG9                         ((uint8_t)0x7C)
#define PH2_REG10                        ((uint8_t)0x7E)
#define PH2_REG11                        ((uint8_t)0x80)
#define PH2_REG12                        ((uint8_t)0x82)

#define TOT_REG1                         ((uint8_t)0x84)
#define TOT_REG2                         ((uint8_t)0x86)
#define TOT_REG3                         ((uint8_t)0x88)
#define TOT_REG4                         ((uint8_t)0x8A)

/*****************************END DATA REGISTERS***************************/

/*****************************DSP Control Bits ****************************/
#define BIT_MASK_STPM_CLR_SS_TIME_OUT       (uint32_t)0x0000000F /*!< Bitmask for Clr_SS_Time_Out bits  */
#define BIT_MASK_STPM_CLRSS1                (uint32_t)0x00000010 /*!< Bitmask for Clear Sag and Swell for Primary/secondary channel  */
#define BIT_MASK_STPM_ENVREF1               (uint32_t)0x00000020 /*!< Bitmask for Enable internal voltage reference primary/secondary  */
#define BIT_MASK_STPM_ENVREF2               (uint32_t)0x00000020 /*!< Bitmask for Enable internal voltage reference  */
#define BIT_MASK_STPM_TC                    (uint32_t)0x000001C0 /*!< Bitmask for Temperature compensation coefficient voltage reference VREF1/VREF2 */
#define BIT_MASK_STPM_TC_SHIFT               6
#define BIT_MASK_STPM_AEM                   (uint32_t)0x00020000 /*!< Bitmask for Apparent energy mode  */
#define BIT_MASK_STPM_APM                   (uint32_t)0x00040000 /*!< Bitmask for Apparent vectorial power mode  */
#define BIT_MASK_STPM_VOLT_HPF_BYPASS       (uint32_t)0x00080000 /*!< Bitmask for Voltage_HPF_Bypass bit  */
#define BIT_MASK_STPM_CURR_HPF_BYPASS       (uint32_t)0x00100000 /*!< Bitmask for Current_HPF_Bypass bit  */
#define BIT_MASK_STPM_CURR_ROGOWSKY_SEL     (uint32_t)0x00200000 /*!< Bitmask for Current_Rogowsky_Select bit  */
#define BIT_MASK_STPM_LED_SPEED_DIV         (uint32_t)0x0F000000 /*!< Bitmask for Primary_Channel_Pulse_Select bits in DPS Control register 1/2 */
#define BIT_MASK_STPM_LED_POWER_SEL         (uint32_t)0x30000000 /*!< Bitmask for Primary_Channel_Pulse_Select bits in DPS Control register 1/2 */
#define BIT_MASK_STPM_LED_CH_SEL            (uint32_t)0xC0000000 /*!< Bitmask for LED_Program bits in DPS Control register 1/2 */


#define BIT_MASK_STPM_TIME_VALUE            (uint32_t)0x00003FFF /*!< Bitmask for Time_Value bits in DPS Control register 3 */
#define BIT_MASK_STPM_ZCR_SEL               (uint32_t)0x0000C000 /*!< Bitmask for ZCR_Select bits in DPS Control register 3 */
#define BIT_MASK_STPM_ZCR_EN                (uint32_t)0x00010000/*!< Bitmask for ZCR Enable bit in DPS Control register 3 */
#define BIT_MASK_STPM_TMP_TOL               (uint32_t)0x00060000 /*!< Bitmask for Tamper_Tolerance bits in DPS Control register 3 */
#define BIT_MASK_STPM_TAMPER_ENABLE         (uint32_t)0x00080000 /*!< Bitmask for Tamper_Enable bit in DPS Control register 3 */
#define BIT_MASK_STPM_SW_RESET              (uint32_t)0x00100000 /*!< Bitmask for Reset bit in DPS Control register 3 */
#define BIT_MASK_STPM_LATCH1                (uint32_t)0x00200000 /*!< Bitmask for Latch1 bit in DPS Control register 3 */
#define BIT_MASK_STPM_LATCH2                (uint32_t)0x00400000 /*!< Bitmask for Latch2 bit in DPS Control register 3 */
#define BIT_MASK_STPM_AUTO_LATCH            (uint32_t)0x00800000 /*!< Bitmask for Auto_latch bit in DPS Control register 3 */
#define BIT_MASK_STPM_LED1_OFF              (uint32_t)0x01000000 /*!< Bitmask for LED 1 Enable bit in DPS Control register 3 */
#define BIT_MASK_STPM_LED2_OFF              (uint32_t)0x02000000 /*!< Bitmask for LED 2 Enable bit in DPS Control register 3 */
#define BIT_MASK_STPM_EN_CUM                (uint32_t)0x04000000 /*!< Bitmask for Enable cumulative energy calculation */
#define BIT_MASK_STPM_REF_FREQ              (uint32_t)0x08000000 /*!< Bitmask for Reference line frequency : 50 or 60Hz*/


#define BIT_MASK_STPM_PHASE_SHIFT_C2        (uint32_t)0x000003FF /*!< Bitmask for Phase_Shift_C2 bits  */
#define BIT_MASK_STPM_PHASE_SHIFT_V2        (uint32_t)0x00000C00 /*!< Bitmask for Phase_Shift_V2 bits  */
#define BIT_MASK_STPM_PHASE_SHIFT_C1        (uint32_t)0x003FF000 /*!< Bitmask for Phase_Shift_C1 bits  */
#define BIT_MASK_STPM_PHASE_SHIFT_V1        (uint32_t)0x00C00000 /*!< Bitmask for Phase_Shift_V1 bits  */


#define BIT_MASK_STPM_CAL_V1                (uint32_t)0x00000FFF /*!< Bitmask for Cal_V1 bits in dsp_cr5 register */
#define BIT_MASK_STPM_SWELL_THRES_V1        (uint32_t)0x003FF000 /*!< Bitmask for Swell_Value_V1 bits in dsp_cr5 register */
#define BIT_MASK_STPM_SAG_THRES_V1           (uint32_t)0xFFC00000 /*!< Bitmask for SAG_VALUE_V1 bits in dsp_cr5 register */


#define BIT_MASK_STPM_CAL_C1                (uint32_t)0x00000FFF /*!< Bitmask for Cal_C1 bits in dsp_cr6 register */
#define BIT_MASK_STPM_SWELL_THRES_C1        (uint32_t)0x003FF000 /*!< Bitmask for Swell_Value_C1 bits in dsp_cr6 register */


#define BIT_MASK_STPM_CAL_V2                (uint32_t)0x00000FFF /*!< Bitmask for Cal_V2 bits in dsp_cr7 register */
#define BIT_MASK_STPM_SWELL_THRES_V2        (uint32_t)0x003FF000 /*!< Bitmask for Swell_Value_V2 bits in dsp_cr7 register */
#define BIT_MASK_STPM_SAG_THRES_V2           (uint32_t)0xFFC00000 /*!< Bitmask for SAG_VALUE_V2 bits in dsp_cr7 register */


#define BIT_MASK_STPM_CAL_C2                (uint32_t)0x00000FFF /*!< Bitmask for Cal_C2 bits in dsp_cr8 register */
#define BIT_MASK_STPM_SWELL_THRES_C2        (uint32_t)0x003FF000 /*!< Bitmask for Swell_Value_C2 bits in dsp_cr8 register */


#define BIT_MASK_STPM_RMS1_THRES_MAX        (uint32_t)0x00000FFF /*!< Bitmask for RMS1_Value_Max bits in dsp_cr9 register */
#define BIT_MASK_STPM_OFFSET_A1             (uint32_t)0x003FF000 /*!< Bitmask for Offset_A1 bits in dsp_cr9 register */
#define BIT_MASK_STPM_OFFSET_AF1            (uint32_t)0xFFC00000 /*!< Bitmask for Offset_AF1 bits in dsp_cr9 register */


#define BIT_MASK_STPM_RMS1_THRES_MIN        (uint32_t)0x00000FFF /*!< Bitmask for RMS1_Value_Min bits in dsp_cr10 register */
#define BIT_MASK_STPM_OFFSET_R1             (uint32_t)0x003FF000 /*!< Bitmask for Offset_R1 bits in dsp_cr10 register */
#define BIT_MASK_STPM_OFFSET_S1             (uint32_t)0xFFC00000 /*!< Bitmask for Offset_S1 bits in dsp_cr10 register */


#define BIT_MASK_STPM_RMS2_THRES_MAX        (uint32_t)0x00000FFF /*!< Bitmask for RMS2_Value_Max bits in dsp_cr11 register */
#define BIT_MASK_STPM_OFFSET_A2             (uint32_t)0x003FF000 /*!< Bitmask for Offset_A2 bits in dsp_cr11 register */
#define BIT_MASK_STPM_OFFSET_AF2            (uint32_t)0xFFC00000 /*!< Bitmask for Offset_AF2 bits in dsp_cr11 register */


#define BIT_MASK_STPM_RMS2_VALUE_MIN        (uint32_t)0x00000FFF /*!< Bitmask for RMS2_Value_Min bits in dsp_cr12 register */
#define BIT_MASK_STPM_OFFSET_R2             (uint32_t)0x003FF000 /*!< Bitmask for Offset_R2 bits in dsp_cr12 register */
#define BIT_MASK_STPM_OFFSET_S2             (uint32_t)0xFFC00000 /*!< Bitmask for Offset_S2 bits in dsp_cr12 register */

/**************************End of DSP Control Bits ************************/

/*****************************DFE Control Bits ****************************/

#define BIT_MASK_STPM_V_EN                   (uint32_t)0x00000001/*!< Bitmask for enable/disable Voltage channel 1/2 in dfe_cr1/2 register */
#define BIT_MASK_STPM_C_EN                   (uint32_t)0x00010000/*!< Bitmask for  in enable/disable current 1/2 dfe_cr1/2 register */
#define BIT_MASK_STPM_C_GAIN                 (uint32_t)0x0C000000 /*!< Bitmask for Current channel(1/2) gain in dfe_cr1/2 register */

/**************************End of DFE Control Bits ************************/

/*************************DSP Interrupt Control and status Bits***********************/
#define STPM_TOT_IGN_AP                     (uint32_t)0x00000001/*!< Bitmask for sign for total active power in DSP interrupt control mask and status register 1/2*/
#define STPM_TOT_SIGN_RP                    (uint32_t)0x00000002/*!< Bitmask for sign for total reactive power in DSP interrupt control mask and status register 1/2*/
#define STPM_TOT_OVERFLOW_AE                (uint32_t)0x00000004/*!< Bitmask for overflow for total active energy in DSP interrupt control mask and status register 1/2 */
#define STPM_TOT_OVERFLOW_RE                (uint32_t)0x00000008/*!< Bitmask for overflow for total reactive energy in DSP interrupt control mask and status register 1/2 */
#define STPM_CH2_SIGN_AP                    (uint32_t)0x00000010/*!< Bitmask for sign for secondary active power in DSP interrupt control mask and status register 1/2 */
#define STPM_CH2_SIGN_AFP                   (uint32_t)0x00000020/*!< Bitmask for sign  for secondary active fundamental power in DSP interrupt control mask and status register 1/2 */
#define STPM_CH2_SIGN_RP                    (uint32_t)0x00000040/*!< Bitmask for sign for secondary reactive power in DSP interrupt control mask and status register 1/2 */
#define STPM_CH2_SIGN_SP                    (uint32_t)0x00000080/*!< Bitmask for sign for secondary apparent power in DSP interrupt control mask and status register 1/2 */
#define STPM_CH2_OVERFLOW_AE                (uint32_t)0x00000100/*!< Bitmask for overflow for secondary active energy in DSP interrupt control mask and status register 1/2 */
#define STPM_CH2_OVERFLOW_AFE               (uint32_t)0x00000200/*!< Bitmask for overflow for secondary active fundamental energy in DSP interrupt control mask and status  register 1/2 */
#define STPM_CH2_OVERFLOW_RE                (uint32_t)0x00000400/*!< Bitmask for overflow for secondary reactiveactive energy in DSP interrupt control mask and status register 1/2 */
#define STPM_CH2_OVERFLOW_SE                (uint32_t)0x00000800/*!< Bitmask for overflow for secondary apparent energy in DSP interrupt control mask and status register 1/2 */
#define STPM_CH1_SIGN_AP                    (uint32_t)0x00001000/*!< Bitmask for sign for primary activepower in DSP interrupt control mask and status register 1/2 */
#define STPM_CH1_SIGN_AFP                   (uint32_t)0x00002000/*!< Bitmask for sign for primary active fundamental power in DSP interrupt control mask and status register 1/2 */
#define STPM_CH1_SIGN_RP                    (uint32_t)0x00004000/*!< Bitmask for sign for primary reactive power in DSP interrupt control mask and status register 1/2 */
#define STPM_CH1_SIGN_SP                    (uint32_t)0x00008000/*!< Bitmask for sign for primary apparent power in DSP interrupt control mask and status register 1/2 */
#define STPM_CH1_OVERFLOW_AE                (uint32_t)0x00010000/*!< Bitmask for overflow for primary active energy in DSP interrupt control mask and status register 1/2*/
#define STPM_CH1_OVERFLOW_AFE               (uint32_t)0x00020000/*!< Bitmask for overflow for primary active fundamental energy in DSP interrupt control mask and status register 1/2 */
#define STPM_CH1_OVERFLOW_RE                (uint32_t)0x00040000/*!< Bitmask for overflow for primary reactive energy in DSP interrupt control mask and status register 1/2 */
#define STPM_CH1_OVERFLOW_SE                (uint32_t)0x00080000/*!< Bitmask for overflow for primary apparent energy in DSP interrupt control mask and status register 1/2 */
#define STPM_CH1_C_SIGMADELTA               (uint32_t)0x00100000/*!< Bitmask for primary current sigma delta bitstream struck in DSP interrupt control mask and status register 1 */
#define STPM_CH1_C_ACC                      (uint32_t)0x00200000/*!< Bitmask for Accumulation of primary channel current in DSP interrupt control mask and status register 1 */
#define STPM_CH1_C_SWV_DET                  (uint32_t)0x00400000/*!< Bitmask for primary current swell detect in DSP interrupt control mask and status register 1 */
#define STPM_CH1_C_SWV_END                  (uint32_t)0x00800000/*!< Bitmask for primary current swell end in DSP interrupt control mask and status register 1 */
#define STPM_CH1_V_SIGMADELTA               (uint32_t)0x01000000/*!< Bitmask for primary voltage sigma delta bitstream struck in DSP interrupt control mask and status register 1 */
#define STPM_CH1_V_PERIOD_ERR               (uint32_t)0x02000000/*!< Bitmask for primary voltage period error in DSP interrupt control mask and status register 1 */
#define STPM_CH1_V_SAG_DET                  (uint32_t)0x04000000/*!< Bitmask for primary voltage sag detect in DSP interrupt control mask and status register 1 */
#define STPM_CH1_V_SAG_END                  (uint32_t)0x08000000/*!< Bitmask for primary voltage sag end in DSP interrupt control mask and status register 1*/
#define STPM_CH1_V_SWV_DET                  (uint32_t)0x10000000/*!< Bitmask for primary voltage swell detect in DSP interrupt control mask and status register 1 */
#define STPM_CH1_V_SWV_END                  (uint32_t)0x20000000/*!< Bitmask for primary voltage swell end in DSP interrupt control mask and status register 1 */
#define STPM_CH1_TAMPER_EN                  (uint32_t)0x40000000/*!< Bitmask for Tamper on primary in DSP interrupt control mask and status register 1 */
#define STPM_CH1_TAMPER_WC                  (uint32_t)0x80000000/*!< Bitmask for Tamper or wrong connection in DSP interrupt control mask and status register 1 */

#define STPM_CH2_C_SIGMADELTA               (uint32_t)0x00100000/*!< Bitmask for secondary current sigma delta bitstream struck in DSP interrupt control mask and status register 2 */
#define STPM_CH2_C_ACC                      (uint32_t)0x00200000/*!< Bitmask for Accumulation of secondary channel current in DSP interrupt control mask and status register 2 */
#define STPM_CH2_C_SWV_DET                  (uint32_t)0x00400000/*!< Bitmask for primary current swell detect in DSP interrupt control mask and status register 2 */
#define STPM_CH2_C_SWV_END                  (uint32_t)0x00800000/*!< Bitmask for primary current swell end in DSP interrupt control mask and status register 2 */
#define STPM_CH2_V_SIGMADELTA               (uint32_t)0x01000000/*!< Bitmask for primary voltage sigma delta bitstream struck in DSP interrupt control mask and status register 2 */
#define STPM_CH2_V_PERIOD_ERR               (uint32_t)0x02000000/*!< Bitmask for primary voltage period error in DSP interrupt control mask and status register 2 */
#define STPM_CH2_V_SAG_DET                  (uint32_t)0x04000000/*!< Bitmask for primary voltage sag detect in DSP interrupt control mask and status register 2 */  
#define STPM_CH2_V_SAG_END                  (uint32_t)0x08000000/*!< Bitmask for primary voltage sag end in DSP interrupt control mask and status register 2*/
#define STPM_CH2_V_SWV_DET                  (uint32_t)0x10000000/*!< Bitmask for primary voltage swell detect in DSP interrupt control mask and status register 2 */
#define STPM_CH2_V_SWV_END                  (uint32_t)0x20000000/*!< Bitmask for primary voltage swell end in DSP interrupt control mask and status register 2 */
#define STPM_CH2_TAMPER_EN                  (uint32_t)0x40000000/*!< Bitmask for Tamper on primary in DSP interrupt control mask and status register 2 */
#define STPM_CH2_TAMPER_WC                  (uint32_t)0x80000000/*!< Bitmask for Tamper or wrong connection in DSP interrupt control mask and status register 2 */

/************************* End of DSP Interrupt Control and status Bits***********************/

/******************************** UART/SPI Control Bits*****************************/

#define BIT_MASK_STPM_CRCPOLY               (uint32_t)0x000000FF
#define BIT_MASK_STPM_NOISE_DET_EN          (uint32_t)0x00000100
#define BIT_MASK_STPM_BRK_EN                (uint32_t)0x00000200
#define BIT_MASK_STPM_CRC_EN                (uint32_t)0x00004000
#define BIT_MASK_STPM_LSBFirst              (uint32_t)0x00008000
#define BIT_MASK_STPM_TIMEOUT               (uint32_t)0x00FF0000


#define BIT_MASK_STPM_BAUD_RATE             (uint32_t)0x0000FFFF
#define BIT_MASK_STPM_FRAME_DELAY           (uint32_t)0x00FF0000


#define BIT_MASK_STPM_UART_IT_CRC_ERROR            (uint32_t)0x00000002 /*!< Bitmask for IT UART CRC ERROR */
#define BIT_MASK_STPM_UART_IT_TIMEOUT_ERROR        (uint32_t)0x00000004 /*!< Bitmask for IT UART TIMEOUT ERROR */
#define BIT_MASK_STPM_UART_IT_FRAMING_ERROR        (uint32_t)0x00000008 /*!< Bitmask for IT UART FRAMING ERROR */
#define BIT_MASK_STPM_UART_IT_NOISE_ERROR          (uint32_t)0x00000010 /*!< Bitmask for IT UART NOISE ERROR */
#define BIT_MASK_STPM_UART_IT_RX_OVERRUN           (uint32_t)0x00000020 /*!< Bitmask for IT UART RX OVERUN */
#define BIT_MASK_STPM_UART_IT_TX_OVERRUN           (uint32_t)0x00000040 /*!< Bitmask for IT UART TX OVERUN */
#define BIT_MASK_STPM_SPI_RX_FULL                  (uint32_t)0x00000100/*!< Bitmask for IT SPI RX FULL */
#define BIT_MASK_STPM_SPI_TX_EMPTY                 (uint32_t)0x00000200/*!< Bitmask for IT SPI TX EMPTY */
#define BIT_MASK_STPM_UARTSPI_IT_READ_ERROR        (uint32_t)0x00000400 /*!< Bitmask for IT UART/SPI READ ERROR  */
#define BIT_MASK_STPM_UARTSPI_IT_WRITE_ERROR       (uint32_t)0x00000800 /*!< Bitmask for IT UART/SPI WRITE ERROR */
#define BIT_MASK_STPM_SPI_IT_CRC_ERROR             (uint32_t)0x00001000 /*!< Bitmask for IT SPI CRC ERROR  */
#define BIT_MASK_STPM_SPI_IT_TX_UNDERRUN           (uint32_t)0x00002000 /*!< Bitmask for IT SPI TX underrun  */
#define BIT_MASK_STPM_SPI_IT_RX_OVERRUN            (uint32_t)0x00004000 /*!< Bitmask for IT SPI RX overrun  */


#define BIT_MASK_STPM_UART_SR_BREAK               (uint32_t)0x00010000 /*!< Bitmask for UART Break status register */
#define BIT_MASK_STPM_UART_SR_CRC_ERROR           (uint32_t)0x00020000 /*!< Bitmask for UART CRC error status register */
#define BIT_MASK_STPM_UART_SR_TIMEOUT_ERROR       (uint32_t)0x00040000 /*!< Bitmask for UART Timeout error status register */
#define BIT_MASK_STPM_UART_SR_FRAMING_ERROR       (uint32_t)0x00080000 /*!< Bitmask for UART Framing error status register */
#define BIT_MASK_STPM_UART_SR_NOISE_ERROR         (uint32_t)0x00100000 /*!< Bitmask for UART Noise error status register */
#define BIT_MASK_STPM_UART_SR_RX_OVERRUN          (uint32_t)0x00200000 /*!< Bitmask for  UART RX OVERUN  status register*/
#define BIT_MASK_STPM_UART_SR_TX_OVERRUN          (uint32_t)0x00400000 /*!< Bitmask for  UART TX OVERUN  status register */
#define BIT_MASK_STPM_SPI_SR_RX_FULL              (uint32_t)0x01000000 /*!< Bitmask for SPI RX FULL Status register */
#define BIT_MASK_STPM_SPI_SR_TX_EMPTY             (uint32_t)0x02000000 /*!< Bitmask for SPI TX EMPTY Status register*/
#define BIT_MASK_STPM_UARTSPI_SR_READ_ERROR        (uint32_t)0x04000000 /*!< Bitmask for UART/SPI read error Status Register */
#define BIT_MASK_STPM_UARTSPI_SR_WRITE_ERROR       (uint32_t)0x08000000 /*!< Bitmask for UART/SPI write error Status Register */
#define BIT_MASK_STPM_SPI_SR_CRC_ERROR            (uint32_t)0x10000000 /*!< Bitmask for SPI CRC error Status Register */
#define BIT_MASK_STPM_SPI_SR_TX_UNDERRUN          (uint32_t)0x20000000 /*!< Bitmask for SPI TX underrun Status Register */
#define BIT_MASK_STPM_SPI_SR_RX_OVERRUN          (uint32_t)0x40000000 /*!< Bitmask for SPI RX overrun Status Register */

/******************************** End of DUART/SPI Control Bits***************************/

/*********************METRO_STPM BaudRate for UART***************************/
#define STPM_UART_BAUDRATE_2400       ((uint32_t)0x1A0B) /*!< 2400 */
#define STPM_UART_BAUDRATE_9600       ((uint32_t)0x683)  /*!< 9600 : it is the value after reset of STPM */
#define STPM_UART_BAUDRATE_19200      ((uint32_t)0x341)  /*!< 19200 */
#define STPM_UART_BAUDRATE_57600      ((uint32_t)0x116)  /*!< 57600 */
#define STPM_UART_BAUDRATE_115200     ((uint32_t)0x8B)   /*!< 115200 */
#define STPM_UART_BAUDRATE_230400     ((uint32_t)0x45)   /*!< 230400 */
#define STPM_UART_BAUDRATE_460800     ((uint32_t)0x23)   /*!< 460800 */

/******************************** DSP Live Events Bits*****************************/

#define BIT_MASK_STPM_TOT_PS_A_EV               (uint32_t)0x00000001 /*!< Bitmask for   Total Power Sign A bit in dsp_ev register */
#define BIT_MASK_STPM_TOT_PS_R_EV               (uint32_t)0x00000002 /*!< Bitmask for   Total Power Sign R bit in dsp_ev register */
#define BIT_MASK_STPM_TOT_EN_A_EV               (uint32_t)0x00000004 /*!< Bitmask for   Total Energy Overflow A bit in dsp_ev register */
#define BIT_MASK_STPM_TOT_EN_R_EV               (uint32_t)0x00000008 /*!< Bitmask for   Total Energy Overflow R bit in dsp_ev register */

#define BIT_MASK_STPM_CH1_PS_A_EV               (uint32_t)0x00000010 /*!< Bitmask for   Channe1 Power Sign A bit in dsp_ev register */
#define BIT_MASK_STPM_CH1_PS_F_EV               (uint32_t)0x00000020 /*!< Bitmask for   Channe1 Power Sign F bit in dsp_ev register */
#define BIT_MASK_STPM_CH1_PS_R_EV               (uint32_t)0x00000040 /*!< Bitmask for   Channe1 Power Sign R bit in dsp_ev register */
#define BIT_MASK_STPM_CH1_PS_S_EV               (uint32_t)0x00000080 /*!< Bitmask for   Channe1 Power Sign S bit in dsp_ev register */

#define BIT_MASK_STPM_CH1_EO_A_EV               (uint32_t)0x00000100 /*!< Bitmask for   Channe1 Energy Overflow A bit in dsp_ev register */
#define BIT_MASK_STPM_CH1_EO_F_EV               (uint32_t)0x00000200 /*!< Bitmask for   Channe1 Energy Overflow F bit in dsp_ev register */
#define BIT_MASK_STPM_CH1_EO_R_EV               (uint32_t)0x00000400 /*!< Bitmask for   Channe1 Energy Overflow R bit in dsp_ev register */
#define BIT_MASK_STPM_CH1_EO_S_EV               (uint32_t)0x00000800 /*!< Bitmask for   Channe1 Energy Overflow S bit in dsp_ev register */

#define BIT_MASK_STPM_CURR_ZCR_EV              (uint32_t)0x00001000 /*!< Bitmask for Voltage Channel Signal_Stuck bit in dsp_ev register */
#define BIT_MASK_STPM_CURR_SIG_STUCK_EV        (uint32_t)0x00002000 /*!< Bitmask for Primary Current Channel Signal_Stuck bit in dsp_ev register */
#define BIT_MASK_STPM_CURR_AH_ACC_EV           (uint32_t)0x00004000 /*!< Bitmask for Voltage Channel Swell bits in dsp_ev register */
#define BIT_MASK_STPM_CURR_SWELL_EV            (uint32_t)0x00078000 /*!< Bitmask for Voltage Channel Swell bits in dsp_ev register */

#define BIT_MASK_STPM_VOLT_ZCR_EV              (uint32_t)0x00080000 /*!< Bitmask for Voltage Channel Signal_Stuck bit in dsp_ev register */
#define BIT_MASK_STPM_VOLT_SIG_STUCK_EV        (uint32_t)0x00100000 /*!< Bitmask for Voltage Channel Signal_Stuck bit in dsp_ev register */
#define BIT_MASK_STPM_VOLT_PERIOD_STATUS_EV    (uint32_t)0x00200000 /*!< Bitmask for Voltage Channel Period_Status bit in dsp_ev register */
#define BIT_MASK_STPM_VOLT_SWELL_EV            (uint32_t)0x03C00000 /*!< Bitmask for Voltage Channel Swell bits in dsp_ev register */
#define BIT_MASK_STPM_VOLT_SAG_EV              (uint32_t)0x3C000000 /*!< Bitmask for Voltage Channel Sag bits in dsp_ev register */


/********************************End of DSP Live Events Bits*****************************/
/********************************DSP DATA Bits*****************************/

#define BIT_MASK_STPM_PERIOD_CHANNEL_1         (uint32_t)0x00000FFF  /*!< Bitmask for Period Channel 1 bits in dsp_reg1 register */
#define BIT_MASK_STPM_PERIOD_CHANNEL_2         (uint32_t)0x0FFF0000  /*!< Bitmask for Period Channel 2 bits in dsp_reg1 register */

#define BIT_MASK_STPM_DATA_V                   (uint32_t)0x00FFFFFF  /*!< Bitmask for Data_V bits in dsp_reg1 register */

#define BIT_MASK_STPM_DATA_C1                  (uint32_t)0x00FFFFFF  /*!< Bitmask for Data_C1 bits in dsp_reg2 register */
#define BIT_MASK_STPM_DATA_C2                  (uint32_t)0x00FFFFFF  /*!< Bitmask for Data_C2 bits in dsp_reg5 register */

#define BIT_MASK_STPM_DATA_VRMS                (uint32_t)0x00007FFF  /*!< Bitmask for Data_Vrms bits in dsp_reg14 & 15 register */
#define BIT_MASK_STPM_DATA_C1_RMS              (uint32_t)0xFFFF8000  /*!< Bitmask for Data_C1RMS bits in dsp_reg14 register */

#define BIT_MASK_STPM_DATA_C2_RMS              (uint32_t)0xFFFF8000  /*!< Bitmask for Data_C2RMS bits in dsp_reg15 register */

#define BIT_MASK_STPM_SWELL_TIME_V1            (uint32_t)0x00007FFF  /*!< Bitmask for Swell_Time_V bits in dsp_reg16 register */
#define BIT_MASK_STPM_SAG_TIME_V1              (uint32_t)0x7FFF0000  /*!< Bitmask for Sag_Time bits in dsp_reg16 register */

#define BIT_MASK_STPM_SWELL_TIME_C1            (uint32_t)0x00007FFF  /*!< Bitmask for Swell_Time_C1 bits in dsp_reg17 register */
#define BIT_MASK_STPM_PHASE_ANGLE_1            (uint32_t)0x0FFF0000  /*!< Bitmask for Phase_Angle C1 bits in dsp_reg17 register */

#define BIT_MASK_STPM_SWELL_TIME_V2            (uint32_t)0x00007FFF  /*!< Bitmask for Swell_Time_V bits in dsp_reg18 register */
#define BIT_MASK_STPM_SAG_TIME_V2              (uint32_t)0x7FFF0000  /*!< Bitmask for Sag_Time bits in dsp_reg18 register */


#define BIT_MASK_STPM_SWELL_TIME_C2            (uint32_t)0x00007FFF  /*!< Bitmask for Swell_Time_C2 bits in dsp_reg19 register */
#define BIT_MASK_STPM_PHASE_ANGLE_2            (uint32_t)0x0FFF0000  /*!< Bitmask for Phase_Angle C2 bits in dsp_reg19 register */

#define BIT_MASK_STPM_PRIM_CURR_ACTV_ENERGY    (uint32_t)0xFFFFFFFF  /*!< Bitmask for Primary_Current_Channel_Active_Energy bits in ch1_reg1 register */
#define BIT_MASK_STPM_PRIM_CURR_FUND_ENERGY    (uint32_t)0xFFFFFFFF  /*!< Bitmask for Primary_Current_Channel_Fundamental_Energy bits in ch1_reg2 register */
#define BIT_MASK_STPM_PRIM_CURR_REACT_ENERGY   (uint32_t)0xFFFFFFFF  /*!< Bitmask for Primary_Current_Channel_Reactive_Energy bits in ch1_reg3 register */
#define BIT_MASK_STPM_PRIM_CURR_RMS_ENERGY     (uint32_t)0xFFFFFFFF  /*!< Bitmask for Primary_Current_Channel_Apparent_RMS_Energy bits in ch1_reg4 register */
#define BIT_MASK_STPM_PRIM_CURR_ACTIVE_POW     (uint32_t)0x1FFFFFFF  /*!< Bitmask for Primary_Current_Channel_Active_Power bits in ch1_reg5 register */
#define BIT_MASK_STPM_PRIM_CURR_FUND_POW       (uint32_t)0x1FFFFFFF  /*!< Bitmask for Primary_Current_Channel_Fundamental_Power bits in ch1_reg6 register */
#define BIT_MASK_STPM_PRIM_CURR_REACT_POW      (uint32_t)0x1FFFFFFF  /*!< Bitmask for Primary_Current_Channel_Reactive_Power bits in ch1_reg7 register */
#define BIT_MASK_STPM_PRIM_CURR_RMS_POW        (uint32_t)0x1FFFFFFF  /*!< Bitmask for Primary_Current_Channel_Apparent_RMS_Power bits in ch1_reg8 register */
#define BIT_MASK_STPM_PRIM_CURR_VEC_POW        (uint32_t)0x1FFFFFFF  /*!< Bitmask for Secondary_Current_Channel_Apparent_VEC _Power bits in ch2_reg9 register */
#define BIT_MASK_STPM_PRIM_CURR_MOM_ACTIVE_POW (uint32_t)0x1FFFFFFF  /*!< Bitmask for Primary_Current_Channel_Momentary_Active_Power bits in ch1_reg10 register */
#define BIT_MASK_STPM_PRIM_CURR_MOM_FUND_POW   (uint32_t)0x1FFFFFFF  /*!< Bitmask for Primary_Current_Channel_Momentary_Fundamental_Power bits in ch1_reg11 register */

#define BIT_MASK_STPM_SEC_CURR_ACTIVE_POW      (uint32_t)0x1FFFFFFF  /*!< Bitmask for Secondary_Current_Channel_Active_Power bits in ch2_reg5 register */
#define BIT_MASK_STPM_SEC_CURR_FUND_POW        (uint32_t)0x1FFFFFFF  /*!< Bitmask for Secondary_Current_Channel_Fundamental_Power bits in ch2_reg6 register */
#define BIT_MASK_STPM_SEC_CURR_REACT_POW       (uint32_t)0x1FFFFFFF  /*!< Bitmask for Secondary_Current_Channel_Reactive_Power bits in ch2_reg7 register */
#define BIT_MASK_STPM_SEC_CURR_RMS_POW         (uint32_t)0x1FFFFFFF  /*!< Bitmask for Secondary_Current_Channel_Apparent_RMS_Power bits in ch2_reg8 register */
#define BIT_MASK_STPM_SEC_CURR_VEC_POW         (uint32_t)0x1FFFFFFF  /*!< Bitmask for Secondary_Current_Channel_Apparent_VEC _Power bits in ch2_reg9 register */
#define BIT_MASK_STPM_SEC_CURR_MOM_ACTIVE_POW  (uint32_t)0x1FFFFFFF  /*!< Bitmask for Secondary_Current_Channel_Momentary_Active_Power bits in ch2_reg10 register */
#define BIT_MASK_STPM_SEC_CURR_MOM_FUND_POW    (uint32_t)0x1FFFFFFF  /*!< Bitmask for Secondary_Current_Channel_Momentary_Fundamental_Power bits in ch2_reg11 register */

/********************************End of DSP DATA Bits*****************************/

/********************************Default Values of the Registers*****************************/
static const uint32_t default_dsp_ctrl[19] = {
0x040000a0,0x240000a0, 0x000004e0, 0x00000000,0x003ff800,
0x003ff800,0x003ff800,0x003ff800,0x00000fff,0x00000fff,
0x00000fff,0x00000fff,0x0f270327,0x03270327,0x00000000,
0x00000000,0x00000000,0x00000000,0x00004007};

#define DEFAULT_REST_REGs			((uint32_t)0x00000000)

/****************************End of Default Values of the Registers**************************/

#define METRO_STPM_DATA_REG_NB_BLOCKS       49
#define METRO_STPM_DSP_DATA_REG_NB_BLOCKS   21
#define METRO_STPM_PH1_DATA_REG_NB_BLOCKS   12
#define METRO_STPM_PH2_DATA_REG_NB_BLOCKS   12
#define METRO_STPM_TOT_DATA_REG_NB_BLOCKS   4
#define METRO_STPM_CTRL_REG_NB_BLOCKS       19
#define METRO_STPM_STATUS_REG_NB_BLOCKS		4
typedef struct
{
  /* RW reg */
   uint32_t DSPCTRL1;                       /*!< DSP Control Register 1,Address offset: 0x00 */
   uint32_t DSPCTRL2;                       /*!< DSP Control Register 2,Address offset: 0x02 */
   uint32_t DSPCTRL3;                       /*!< DSP Control Register 3,Address offset: 0x04 */
   uint32_t DSPCTRL4;                       /*!< DSP Control Register 4,Address offset: 0x06 */
   uint32_t DSPCTRL5;                       /*!< DSP Control Register 5,Address offset: 0x08 */
   uint32_t DSPCTRL6;                       /*!< DSP Control Register 6,Address offset: 0x0A */
   uint32_t DSPCTRL7;                       /*!< DSP Control Register 7,Address offset: 0x0C*/
   uint32_t DSPCTRL8;                       /*!< DSP Control Register 8,Address offset: 0x0E */
   uint32_t DSPCTRL9;                       /*!< DSP Control Register 9,Address offset: 0x10 */
   uint32_t DSPCTRL10;                      /*!< DSP Control Register 10,Address offset: 0x12 */
   uint32_t DSPCTRL11;                      /*!< DSP Control Register 11,Address offset: 0x14 */
   uint32_t DSPCTRL12;                      /*!< DSP Control Register 12,Address offset: 0x16 */
   uint32_t DFECTRL1;                       /*!< DFE Control Register 1,Address offset: 0x18 */
   uint32_t DFECTRL2;                       /*!< DFE Control Register 2,Address offset: 0x1A */
   uint32_t DSPIRQ1;                        /*!< DSP Interrupt Register 1,Address offset: 0x1C */
   uint32_t DSPIRQ2;                        /*!< DSP Interrupt Register 2,Address offset: 0x1E */
   uint32_t DSPSR1;                         /*!< DSP Status Register 1,Address offset: 0x20 */
   uint32_t DSPSR2;                         /*!< DSP Status Register 2,Address offset: 0x22 */
   uint32_t UARTSPICR1;                     /*!< UART/SPI Control Register 1,Address offset: 0x24 */
   uint32_t UARTSPICR2;                     /*!< UART/SPI Control Register 2,Address offset: 0x26 */
   uint32_t UARTSPISR;                      /*!< UART/SPI Status Register ,Address offset: 0x28 */

   /* RO regs */
    uint32_t DSPEVENT1;                      /*!< DSP Events Register 1,Address offset: 0x2A */
    uint32_t DSPEVENT2;                      /*!< DSP Events Register 2,Address offset: 0x2C*/
    uint32_t DSP_DREG1;                       /*!< DSP Register 1,Address offset: 0x2E */
    uint32_t DSP_DREG2;                       /*!< DSP Register 2,Address offset: 0x30 */
    uint32_t DSP_DREG3;                       /*!< DSP Register 3,Address offset: 0x32 */
    uint32_t DSP_DREG4;                       /*!< DSP Register 4,Address offset: 0x34 */
    uint32_t DSP_DREG5;                       /*!< DSP Register 5,Address offset: 0x36 */
    uint32_t DSP_DREG6;                       /*!< DSP Register 6,Address offset: 0x38 */
    uint32_t DSP_DREG7;                       /*!< DSP Register 7,Address offset: 0x3A */
    uint32_t DSP_DREG8;                       /*!< DSP Register 8,Address offset: 0x3C */
    uint32_t DSP_DREG9;                       /*!< DSP Register 9,Address offset: 0x3E*/
    uint32_t DSP_DREG10;                      /*!< DSP Register 10,Address offset: 0x40*/
    uint32_t DSP_DREG11;                      /*!< DSP Register 11,Address offset: 0x42*/
    uint32_t DSP_DREG12;                      /*!< DSP Register 12,Address offset: 0x44*/
    uint32_t DSP_DREG13;                      /*!< DSP Register 13,Address offset: 0x46*/
    uint32_t DSP_DREG14;                      /*!< DSP Register 14,Address offset: 0x48*/
    uint32_t DSP_DREG15;                      /*!< DSP Register 15,Address offset: 0x4A*/
    uint32_t DSP_DREG16;                      /*!< DSP Register 16,Address offset: 0x4C */
    uint32_t DSP_DREG17;                      /*!< DSP Register 17,Address offset: 0x4E */
    uint32_t DSP_DREG18;                      /*!< DSP Register 18,Address offset: 0x50*/
    uint32_t DSP_DREG19;                      /*!< DSP Register 19,Address offset: 0x52*/

    uint32_t CH1_REG1;                       /*!< Channel 1 Register 1,Address offset: 0x54*/
    uint32_t CH1_REG2;                       /*!< Channel 1 Register 2,Address offset: 0x56*/
    uint32_t CH1_REG3;                       /*!< Channel 1 Register 3,Address offset: 0x58 */
    uint32_t CH1_REG4;                       /*!< Channel 1 Register 4,Address offset: 0x5A*/
    uint32_t CH1_REG5;                       /*!< Channel 1 Register 5,Address offset: 0x5C*/
    uint32_t CH1_REG6;                       /*!< Channel 1 Register 6,Address offset: 0x5E */
    uint32_t CH1_REG7;                       /*!< Channel 1 Register 7,Address offset: 0x60 */
    uint32_t CH1_REG8;                       /*!< Channel 1 Register 8,Address offset: 0x62 */
    uint32_t CH1_REG9;                       /*!< Channel 1 Register 9,Address offset: 0x64*/
    uint32_t CH1_REG10;                      /*!< Channel 1 Register 10,Address offset:0x66 */
    uint32_t CH1_REG11;                      /*!< Channel 1 Register 11,Address offset:0x68 */
    uint32_t CH1_REG12;                      /*!< Channel 1 Register 12,Address offset: 0x6A */

    uint32_t CH2_REG1;                       /*!< Channel 2 Register 1,Address offset: 0x6C */
    uint32_t CH2_REG2;                       /*!< Channel 2 Register 2,Address offset: 0x6E */
    uint32_t CH2_REG3;                       /*!< Channel 2 Register 3,Address offset: 0x70 */
    uint32_t CH2_REG4;                       /*!< Channel 2 Register 4,Address offset: 0x72 */
    uint32_t CH2_REG5;                       /*!< Channel 2 Register 5,Address offset:  0x74*/
    uint32_t CH2_REG6;                       /*!< Channel 2 Register 6,Address offset:  0x76*/
    uint32_t CH2_REG7;                       /*!< Channel 2 Register 7,Address offset:  0x78*/
    uint32_t CH2_REG8;                       /*!< Channel 2 Register 8,Address offset:  0x7A*/
    uint32_t CH2_REG9;                       /*!< Channel 2 Register 9,Address offset:  0x7C*/
    uint32_t CH2_REG10;                      /*!< Channel 2 Register 10,Address offset: 0x7E*/
    uint32_t CH2_REG11;                      /*!< Channel 2 Register 11,Address offset: 0x80*/
    uint32_t CH2_REG12;                      /*!< Channel 2 Register 12,Address offset: 0x82*/

    uint32_t TOT_DREG1;                       /*!< Total  Register 1,Address offset:0x84  */
    uint32_t TOT_DREG2;                       /*!< Total  Register 2,Address offset:0x86 */
    uint32_t TOT_DREG3;                       /*!< Total  Register 3,Address offset: 0x88 */
    uint32_t TOT_DREG4;                       /*!< Total  Register 4,Address offset: 0x8A */
} METRO_STPM_TypeDef;

/**************************Metrology Parameters*******************/
#endif /* STPM33_METROLOGY_H_ */
