
#define stpm33type_t uint32_t
/*****************************************************************************/
/****************************DSP_CR1******************************************/
/*****************************************************************************/

#define CLR_SS_TIME_OUT_MAX (uint32_t)0x0000000F /*!< Clr_SS_Time_Out bits  */

#define CLR_SS_TIME_OUT1_0 	  (uint32_t)0x00000000	
#define CLR_SS_TIME_OUT1_1 	  (uint32_t)0x00000001
#define CLR_SS_TIME_OUT1_2 	  (uint32_t)0x00000002
#define CLR_SS_TIME_OUT1_3 	  (uint32_t)0x00000003
#define CLR_SS_TIME_OUT1_4 	  (uint32_t)0x00000004
#define CLR_SS_TIME_OUT1_5 	  (uint32_t)0x00000005
#define CLR_SS_TIME_OUT1_6 	  (uint32_t)0x00000006
#define CLR_SS_TIME_OUT1_7 	  (uint32_t)0x00000007
#define CLR_SS_TIME_OUT1_8 	  (uint32_t)0x00000008
#define CLR_SS_TIME_OUT1_9 	  (uint32_t)0x00000009
#define CLR_SS_TIME_OUT1_10   (uint32_t)0x0000000A
#define CLR_SS_TIME_OUT1_11   (uint32_t)0x0000000B
#define CLR_SS_TIME_OUT1_12   (uint32_t)0x0000000C
#define CLR_SS_TIME_OUT1_13   (uint32_t)0x0000000D
#define CLR_SS_TIME_OUT1_14   (uint32_t)0x0000000E
#define CLR_SS_TIME_OUT1_15   (uint32_t)0x0000000F

#define CLRSS1                (uint32_t)0x00000010 /*!< Clear Sag and Swell for Primary/secondary channel. Clear sag and swell time register and history bits for primary channel, auto-reset to '0'  */
#define ENVREF1_enabled       (uint32_t)0x00000020 /*!< Enable internal voltage reference primary/secondary  */
#define ENVREF1_disabled      (uint32_t)0x00000000 /*!< Enable internal voltage reference primary/secondary  */

#define TC_MAX                (uint32_t)0x00000080 /*!< Temperature compensation coefficient voltage reference VREF1/VREF2 */
	
#define TC1_minus30   		  (uint32_t)0x00000000
#define TC1_0   			  (uint32_t)0x00000040
#define TC1_30   			  (uint32_t)0x00000080 //default
#define TC1_60   			  (uint32_t)0x000000C0
#define TC1_90   			  (uint32_t)0x00000100
#define TC1_120   			  (uint32_t)0x00000140
#define TC1_150   			  (uint32_t)0x00000180
#define TC1_180   			  (uint32_t)0x000001C0

#define AEM1_RMS              (uint32_t)0x00000000 /*!< Apparent energy mode- 0x00020000  */
#define AEM1_Vectorial        (uint32_t)0x00020000 

#define APM1_Fundamental      (uint32_t)0x00000000 /*!< Apparent vectorial power mode- 0x00040000 */
#define APM1_Active           (uint32_t)0x00040000

#define BHPFV1_enabled        (uint32_t)0x00000000 /*!< Voltage_HPF_Bypass bit- 0x00080000 */
#define BHPFV1_bypassed       (uint32_t)0x00080000 

#define BHPFC1_enabled        (uint32_t)0x00000000 
#define BHPFC1_bypassed       (uint32_t)0x00100000 /*!< Current_HPF_Bypass bit- 0x00100000 */

#define ROC1_bypassed    	  (uint32_t)0x00000000 /*!< Current_Rogowsky_Select bit- 0x00200000  */
#define ROC1_enabled          (uint32_t)0x00200000

#define LPW_MAX               (uint32_t)0x04000000 /*!< Primary_Channel_Pulse_Select bits in DPS Control register 1/2 */
         

#define LPW1_0                (uint32_t)0x00000000
#define LPW1_1                (uint32_t)0x01000000
#define LPW1_2                (uint32_t)0x02000000
#define LPW1_3                (uint32_t)0x03000000
#define LPW1_4                (uint32_t)0x04000000
#define LPW1_5                (uint32_t)0x05000000
#define LPW1_6                (uint32_t)0x06000000
#define LPW1_7                (uint32_t)0x07000000
#define LPW1_8                (uint32_t)0x08000000
#define LPW1_9                (uint32_t)0x09000000
#define LPW1_10               (uint32_t)0x0A000000
#define LPW1_11               (uint32_t)0x0B000000
#define LPW1_12               (uint32_t)0x0C000000
#define LPW1_13               (uint32_t)0x0D000000
#define LPW1_14               (uint32_t)0x0E000000
#define LPW1_15               (uint32_t)0x0F000000



#define LPS1_MAX              (uint32_t)0x00000000 /*!< Primary_Channel_Pulse_Select bits in DPS Control register 1/2 */

#define LPS1_active 		  (uint32_t)0x00000000
#define LPS1_fundamental      (uint32_t)0x10000000
#define LPS1_reactive	      (uint32_t)0x20000000
#define LPS1_apparent		  (uint32_t)0x30000000

#define LCS1_MAX              (uint32_t)0x00000000 /*!< LED_Program bits in DPS Control register 1/2 */

#define LCS1_primary          (uint32_t)0x00000000 
#define LCS1_secondary        (uint32_t)0x40000000 
#define LCS1_cumulative       (uint32_t)0x80000000 
#define LCS1_sigmadelta       (uint32_t)0xC0000000 
/*-------------------------------End of DSP_CR1---------------------------------*/


/*****************************************************************************/
/****************************DSP_CR2******************************************/
/*****************************************************************************/
#define CLR_SS_TIME_OUT_MAX (uint32_t)0x0000000F /*!< Clr_SS_Time_Out bits  */

#define CLR_SS_TIME_OUT2_0 	  (uint32_t)0x00000000	
#define CLR_SS_TIME_OUT2_1 	  (uint32_t)0x00000001
#define CLR_SS_TIME_OUT2_2 	  (uint32_t)0x00000002
#define CLR_SS_TIME_OUT2_3 	  (uint32_t)0x00000003
#define CLR_SS_TIME_OUT2_4 	  (uint32_t)0x00000004
#define CLR_SS_TIME_OUT2_5 	  (uint32_t)0x00000005
#define CLR_SS_TIME_OUT2_6 	  (uint32_t)0x00000006
#define CLR_SS_TIME_OUT2_7 	  (uint32_t)0x00000007
#define CLR_SS_TIME_OUT2_8 	  (uint32_t)0x00000008
#define CLR_SS_TIME_OUT2_9 	  (uint32_t)0x00000009
#define CLR_SS_TIME_OUT2_10   (uint32_t)0x0000000A
#define CLR_SS_TIME_OUT2_11   (uint32_t)0x0000000B
#define CLR_SS_TIME_OUT2_12   (uint32_t)0x0000000C
#define CLR_SS_TIME_OUT2_13   (uint32_t)0x0000000D
#define CLR_SS_TIME_OUT2_14   (uint32_t)0x0000000E
#define CLR_SS_TIME_OUT2_15   (uint32_t)0x0000000F

#define CLRSS2                (uint32_t)0x00000010 /*!< Clear Sag and Swell for Primary/secondary channel. Clear sag and swell time register and history bits for primary channel, auto-reset to '0'  */
#define ENVREF2_enabled       (uint32_t)0x00000020 /*!< Enable internal voltage reference primary/secondary  */
#define ENVREF2_disabled      (uint32_t)0x00000000 /*!< Enable internal voltage reference primary/secondary  */

#define TC_MAX                (uint32_t)0x00000080 /*!< Temperature compensation coefficient voltage reference VREF1/VREF2 */
	
#define TC2_minus30   		  (uint32_t)0x00000000
#define TC2_0   			  (uint32_t)0x00000040
#define TC2_30   			  (uint32_t)0x00000080 //default
#define TC2_60   			  (uint32_t)0x000000C0
#define TC2_90   			  (uint32_t)0x00000100
#define TC2_120   			  (uint32_t)0x00000140
#define TC2_150   			  (uint32_t)0x00000180
#define TC2_180   			  (uint32_t)0x000001C0

#define AEM2_RMS              (uint32_t)0x00000000 /*!< Apparent energy mode- 0x00020000  */
#define AEM2_Vectorial        (uint32_t)0x00020000 

#define APM2_Fundamental      (uint32_t)0x00000000 /*!< Apparent vectorial power mode- 0x00040000 */
#define APM2_Active           (uint32_t)0x00040000

#define BHPFV2_enabled        (uint32_t)0x00000000 /*!< Voltage_HPF_Bypass bit- 0x00080000 */
#define BHPFV2_bypassed       (uint32_t)0x00080000 

#define BHPFC2_enabled        (uint32_t)0x00000000 
#define BHPFC2_bypassed       (uint32_t)0x00100000 /*!< Current_HPF_Bypass bit- 0x00100000 */

#define ROC2_bypassed    	  (uint32_t)0x00000000 /*!< Current_Rogowsky_Select bit- 0x00200000  */
#define ROC2_enabled          (uint32_t)0x00200000

#define LPW_MAX               (uint32_t)0x04000000 /*!< Primary_Channel_Pulse_Select bits in DPS Control register 1/2 */
         

#define LPW2_0                (uint32_t)0x00000000
#define LPW2_1                (uint32_t)0x01000000
#define LPW2_2                (uint32_t)0x02000000
#define LPW2_3                (uint32_t)0x03000000
#define LPW2_4                (uint32_t)0x04000000
#define LPW2_5                (uint32_t)0x05000000
#define LPW2_6                (uint32_t)0x06000000
#define LPW2_7                (uint32_t)0x07000000
#define LPW2_8                (uint32_t)0x08000000
#define LPW2_9                (uint32_t)0x09000000
#define LPW2_10               (uint32_t)0x0A000000
#define LPW2_11               (uint32_t)0x0B000000
#define LPW2_12               (uint32_t)0x0C000000
#define LPW2_13               (uint32_t)0x0D000000
#define LPW2_14               (uint32_t)0x0E000000
#define LPW2_15               (uint32_t)0x0F000000

#define LPS2_MAX              (uint32_t)0x00000000 /*!< Primary_Channel_Pulse_Select bits in DPS Control register 1/2 */

#define LPS2_active 		  (uint32_t)0x00000000
#define LPS2_fundamental      (uint32_t)0x10000000
#define LPS2_reactive	      (uint32_t)0x20000000
#define LPS2_apparent		  (uint32_t)0x30000000

#define LCS2_MAX              (uint32_t)0x00000000 /*!< LED_Program bits in DPS Control register 1/2 */

#define LCS2_primary          (uint32_t)0x00000000 
#define LCS2_secondary        (uint32_t)0x40000000 
#define LCS2_cumulative       (uint32_t)0x80000000 
#define LCS2_sigmadelta       (uint32_t)0xC0000000 
/*-------------------------------End of DSP_CR2---------------------------------*/


/*****************************************************************************/
/****************************DSP_CR3******************************************/
/*****************************************************************************/
#define SAG_TIME_THR_10ms     									(uint32_t)0x000004E2 /*!<Time_Value bits in DPS Control register 3 */

 
#define ZCR_SEL_CLK_7812point5_HZ   		    		(uint32_t)0x00000000 /*!< ZCR_Select bits in DPS Control register 3- 0x0000C000 */
#define ZCR_SEL_CLK_4_MHz   										(uint32_t)0x00004000 
#define ZCR_SEL_CLK_4_MHz_0point5_dutycycle   	(uint32_t)0x00008000 
#define ZCR_SEL_CLK_16_MHz   										(uint32_t)0x0000C000 



#define ZCR_EN_CLK             		(uint32_t)0x00000000 /*!<  ZCR Enable bit in DPS Control register 3- 0x00010000*/
#define ZCR_EN_ZCR             		(uint32_t)0x00010000


#define TMP_TOL_12point5_percent	(uint32_t)0x00000000 /*!< Tamper_Tolerance bits in DPS Control register 3- 0x00060000 */
#define TMP_TOL_8point33_percent	(uint32_t)0x00020000
#define TMP_TOL_6point25_percent	(uint32_t)0x00040000
#define TMP_TOL_3point125_percent	(uint32_t)0x00060000


#define TAMPER_disabled         	(uint32_t)0x00000000 /*!< Tamper_Enable bit in DPS Control register 3-0x00080000 */
#define TAMPER_enabled         		(uint32_t)0x00080000

#define SW_RESET_0              	(uint32_t)0x00000000 /*!< Reset bit in DPS Control register 3- 0x00100000 */
#define SW_RESET_1              	(uint32_t)0x00100000

#define LATCH1_0                	(uint32_t)0x00000000 /*!< Latch1 bit in DPS Control register 3- 0x00200000 */
#define LATCH1_1                	(uint32_t)0x00200000

#define LATCH2_0               		(uint32_t)0x00000000 /*!< Latch2 bit in DPS Control register 3- 0x00400000 */
#define LATCH2_1                	(uint32_t)0x00400000

#define AUTO_LATCH_0            	(uint32_t)0x00000000 /*!< Auto_latch bit in DPS Control register 3- 0x00800000 */
#define AUTO_LATCH_1            	(uint32_t)0x00800000 /*!< Auto_latch bit in DPS Control register 3- 0x00800000 */

#define LED1_OUTPUT_ON              (uint32_t)0x00000000 /*!< LED 1 Enable bit in DPS Control register 3- 0x01000000 */
#define LED1_OUTPUT_OFF             (uint32_t)0x01000000

#define LED2_OUTPUT_ON              (uint32_t)0x00000000 /*!< LED 2 Enable bit in DPS Control register 3- 0x02000000 */
#define LED2_OUTPUT_OFF             (uint32_t)0x02000000

#define EN_CUM_Sum                	(uint32_t)0x00000000 /*!< Enable cumulative energy calculation- 0x04000000 */
#define EN_CUM_Difference           (uint32_t)0x04000000

#define REF_FREQ_50Hz               (uint32_t)0x00000000 /*!< Reference line frequency : 50 or 60Hz- 0x08000000*/
#define REF_FREQ_60Hz               (uint32_t)0x08000000
/*-------------------------------End of DSP_CR3---------------------------------*/


/*****************************************************************************/
/****************************DSP_CR4******************************************/
/*****************************************************************************/

#define PHC2        		  					(uint32_t)0x00000000 /*!< Phase_Shift_C2 bits  */
#define PHV2        		  					(uint32_t)0x00000000 /*!< Phase_Shift_V2 bits  */
#define PHC1                  			(uint32_t)0x00000000 /*!< Phase_Shift_C1 bits  */
#define PHV1                  			(uint32_t)0x00000000 /*!< Phase_Shift_V1 bits  */
/*-------------------------------End of DSP_CR4---------------------------------*/


/*****************************************************************************/
/****************************DSP_CR5******************************************/
/*****************************************************************************/

#define CHV1_0point875           		(uint32_t)0x00000800 /*!< Cal_V1 bits in dsp_cr5 register- 0x00000FFF */

#define SWV_THR1_disabled           (uint32_t)0x003FF000
#define SWV_THR1_253V        				(uint32_t)0x0013B000 /*!< Swell_Value_V1 bits in dsp_cr5 register- 0x003FF000 */

#define SAG_THR1_207V        				(uint32_t)0x40400000 /*!< SAG_VALUE_V1 bits in dsp_cr5 register- 0xFFC00000 */
#define SAG_THR1_disabled						(uint32_t)0x00000000
/*-------------------------------End of DSP_CR5---------------------------------*/


/*****************************************************************************/
/****************************DSP_CR6******************************************/
/*****************************************************************************/

#define CHC1_0point875              (uint32_t)0x00000800 /*!< Cal_C1 bits in dsp_cr6 register- 0x00000FFF */
#define SWC_THR1_66A         				(uint32_t)0x00154000 /*!< Swell_Value_C1 bits in dsp_cr6 register- 0x003FF000 */
#define SWC_THR1_disabled        		(uint32_t)0x003FF000
/*-------------------------------End of DSP_CR6---------------------------------*/

/*****************************************************************************/
/****************************DSP_CR7******************************************/
/*****************************************************************************/
#define CHV2_0point875               (uint32_t)0x00000800 /*!< Cal_V2 bits in dsp_cr7 register 0x00000FFF*/
#define SWV_THR2_disabled            (uint32_t)0x003FF000 /*!< Swell_Value_V2 bits in dsp_cr7 register 0x003FF000*/
#define SAG_THR2_disabled            (uint32_t)0x00000000 /*!< SAG_VALUE_V2 bits in dsp_cr7 register 0xFFC00000*/
/*-------------------------------End of DSP_CR7---------------------------------*/

/*****************************************************************************/
/****************************DSP_CR8******************************************/
/*****************************************************************************/
#define CHC2_0point875               (uint32_t)0x00000800 /*!< Cal_C2 bits in dsp_cr8 register 0x00000FFF */
#define SWC_THR2_66A                 (uint32_t)0x00154000 /*!< Swell_Value_C2 bits in dsp_cr8 register 0x003FF000*/
#define SWC_THR2_disabled			 (uint32_t)0x003FF000
/*-------------------------------End of DSP_CR8---------------------------------*/


/*****************************************************************************/
/****************************DSP_CR9******************************************/
/*****************************************************************************/
#define AH_UP1           			(uint32_t)0x00000FFF /*!< RMS1_Value_Max bits in dsp_cr9 register 0x00000FFF */
#define OFA1             			(uint32_t)0x00000000 /*!< Offset_A1 bits in dsp_cr9 register 0x003FF000*/
#define OFAF1            			(uint32_t)0x00000000 /*!< Offset_AF1 bits in dsp_cr9 register 0xFFC00000*/
/*-------------------------------End of DSP_CR9---------------------------------*/


/*****************************************************************************/
/****************************DSP_CR810*****************************************/
/*****************************************************************************/

#define AH_DOWN1        			(uint32_t)0x00000FFF /*!< RMS1_Value_Min bits in dsp_cr10 register 0x00000FFF*/
#define OFR1             			(uint32_t)0x00000000 /*!< Offset_R1 bits in dsp_cr10 register 0x003FF000*/
#define OFS1             			(uint32_t)0x00000000 /*!< Offset_S1 bits in dsp_cr10 register 0xFFC00000*/
/*-------------------------------End of DSP_CR10---------------------------------*/


/*****************************************************************************/
/****************************DSP_CR11******************************************/
/*****************************************************************************/

#define AH_UP2        				(uint32_t)0x00000FFF /*!< RMS2_Value_Max bits in dsp_cr11 register 0x00000FFF*/
#define OFA2             			(uint32_t)0x00000000 /*!< Offset_A2 bits in dsp_cr11 register 0x003FF000*/
#define OFAF2            			(uint32_t)0x00000000 /*!< Offset_AF2 bits in dsp_cr11 register 0xFFC00000*/
/*-------------------------------End of DSP_CR11---------------------------------*/

/*****************************************************************************/
/****************************DSP_CR12******************************************/
/*****************************************************************************/
#define AH_DOWN2        			(uint32_t)0x00000FFF /*!< RMS2_Value_Min bits in dsp_cr12 register 0x00000FFF*/
#define OFR2            			(uint32_t)0x00000000 /*!< Offset_R2 bits in dsp_cr12 register 0x003FF000*/
#define OFS2             			(uint32_t)0x00000000 /*!< Offset_S2 bits in dsp_cr12 register 0xFFC00000*/
/*-------------------------------End of DSP_CR12---------------------------------*/



/*****************************DFE Control Bits ****************************/

/*****************************************************************************/
/****************************DFE_CR1******************************************/
/*****************************************************************************/

#define enV1_enabled                 (uint32_t)0x00000001/*!< enable/disable Voltage channel 1 in dfe_cr1 register */
#define enV1_disabled                (uint32_t)0x00000000

#define enC1_enabled                 (uint32_t)0x00010000/*!<  in enable/disable current 1 dfe_cr1 register */
#define enC1_disabled                (uint32_t)0x00000000

#define GAIN1_x2					 (uint32_t)0x00000000/*!< Current channel(1) gain in dfe_cr1 register */
#define GAIN1_x4					 (uint32_t)0x04000000
#define GAIN1_x8				 	 (uint32_t)0x08000000
#define GAIN1_x16				 	 (uint32_t)0x0C000000


#define Reserved_DFE_CR1	  (uint32_t)0x03260326
/*-------------------------------End of DFE_CR1---------------------------------*/

/*****************************************************************************/
/****************************DFE_CR2******************************************/
/*****************************************************************************/
#define enV2_enabled                  (uint32_t)0x00000001/*!< enable/disable Voltage channel 1 in dfe_cr1 register */
#define enV2_disabled                 (uint32_t)0x00000000

#define enC2_enabled                  (uint32_t)0x00010000/*!<  in enable/disable current 1 dfe_cr1 register */
#define enC2_disabled                 (uint32_t)0x00000000

#define GAIN2_x2					  (uint32_t)0x00000000/*!< Current channel(1) gain in dfe_cr1 register */
#define GAIN2_x4					  (uint32_t)0x04000000
#define GAIN2_x8				 	  (uint32_t)0x08000000
#define GAIN2_x16					  (uint32_t)0x0C000000


#define Reserved_DFE_CR2	  (uint32_t)0x03260326
/*-------------------------------End of DFE_CR2---------------------------------*/
/*---------------------------------End of DFE Control Bits---------------------------------*/


/*****************************************************************************/
/****************************DSP_SR1******************************************/
/*****************************************************************************/
#define TOT_SIGN_Active_Power_negative                    	(uint32_t)0x00000001/*!< sign for total active power in DSP interrupt control mask and status register 1/2*/
#define TOT_SIGN_Active_Power_positive                  	(uint32_t)0x00000000/*!< sign for total active power in DSP interrupt control mask and status register 1/2*/

#define TOT_SIGN_Reactive_Power_negative                    (uint32_t)0x00000002/*!< sign for total reactive power in DSP interrupt control mask and status register 1/2*/
#define TOT_SIGN_Reactive_Power_positive                    (uint32_t)0x00000000

#define TOT_OVERFLOW_Active_Energy_negative                	(uint32_t)0x00000004/*!< overflow for total active energy in DSP interrupt control mask and status register 1/2 */
#define TOT_OVERFLOW_Active_Energy_positive                	(uint32_t)0x00000000

#define TOT_OVERFLOW_Reactive_Energy_negative               (uint32_t)0x00000008/*!< overflow for total reactive energy in DSP interrupt control mask and status register 1/2 */
#define TOT_OVERFLOW_Reactive_Energy_positive               (uint32_t)0x00000000

#define CH2_SIGN_Active_Power_negative                    	(uint32_t)0x00000010/*!< sign for secondary active power in DSP interrupt control mask and status register 1/2 */
#define CH2_SIGN_Active_Power_positive                   	(uint32_t)0x00000000

#define CH2_SIGN_Active_Fundamental_Power_negative          (uint32_t)0x00000020/*!< sign  for secondary active fundamental power in DSP interrupt control mask and status register 1/2 */
#define CH2_SIGN_Active_Fundamental_Power_positive          (uint32_t)0x00000000

#define CH2_SIGN_Reactive_Power_negative                    (uint32_t)0x00000040/*!< sign for secondary reactive power in DSP interrupt control mask and status register 1/2 */
#define CH2_SIGN_Reactive_Power_positive                    (uint32_t)0x00000000

#define CH2_SIGN_Apparent_Power_negative                    (uint32_t)0x00000080/*!< sign for secondary apparent power in DSP interrupt control mask and status register 1/2 */
#define CH2_SIGN_Apparent_Power_positive                    (uint32_t)0x00000000

#define CH2_OVERFLOW_Active_Energy_negative                 (uint32_t)0x00000100/*!< overflow for secondary active energy in DSP interrupt control mask and status register 1/2 */
#define CH2_OVERFLOW_Active_Energy_positive                 (uint32_t)0x00000000

#define CH2_OVERFLOW_Active_Fundamental_Energy_negative     (uint32_t)0x00000200/*!< overflow for secondary active fundamental energy in DSP interrupt control mask and status  register 1/2 */
#define CH2_OVERFLOW_Active_Fundamental_Energy_positive     (uint32_t)0x00000000

#define CH2_OVERFLOW_Reactive_Energy_negative               (uint32_t)0x00000400/*!< overflow for secondary reactiveactive energy in DSP interrupt control mask and status register 1/2 */
#define CH2_OVERFLOW_Reactive_Energy_positive               (uint32_t)0x00000000

#define CH2_OVERFLOW_Apparent_Energy_negative               (uint32_t)0x00000800/*!< overflow for secondary apparent energy in DSP interrupt control mask and status register 1/2 */
#define CH2_OVERFLOW_Apparent_Energy_positive               (uint32_t)0x00000000

#define CH1_SIGN_Active_Power_negative                     	(uint32_t)0x00001000/*!< sign for primary activepower in DSP interrupt control mask and status register 1/2 */
#define CH1_SIGN_Active_Power_positive                    	(uint32_t)0x00000000

#define CH1_SIGN_ActiveFundamental_Power_negative           (uint32_t)0x00002000/*!< sign for primary active fundamental power in DSP interrupt control mask and status register 1/2 */
#define CH1_SIGN_ActiveFundamental_Power_positive           (uint32_t)0x00000000

#define CH1_SIGN_Reactive_Power_negative                    (uint32_t)0x00004000/*!< sign for primary reactive power in DSP interrupt control mask and status register 1/2 */
#define CH1_SIGN_Reactive_Power_positive                    (uint32_t)0x00000000

#define CH1_SIGN_Apparent_Power_negative                    (uint32_t)0x00008000/*!< sign for primary apparent power in DSP interrupt control mask and status register 1/2 */
#define CH1_SIGN_Apparent_Power_positive                    (uint32_t)0x00000000

#define CH1_OVERFLOW_Active_Energy_negative                 (uint32_t)0x00010000/*!< overflow for primary active energy in DSP interrupt control mask and status register 1/2*/
#define CH1_OVERFLOW_Active_Energy_positive                 (uint32_t)0x00000000

#define CH1_OVERFLOW_Active_Fundamental_Energy_negative     (uint32_t)0x00020000/*!< overflow for primary active fundamental energy in DSP interrupt control mask and status register 1/2 */
#define CH1_OVERFLOW_Active_Fundamental_Energy_positive     (uint32_t)0x00000000

#define CH1_OVERFLOW_Reactive_Energy_negative               (uint32_t)0x00040000/*!< overflow for primary reactive energy in DSP interrupt control mask and status register 1/2 */
#define CH1_OVERFLOW_Reactive_Energy_positive               (uint32_t)0x00000000

#define CH1_OVERFLOW_Apparent_Energy_negative               (uint32_t)0x00080000/*!< overflow for primary apparent energy in DSP interrupt control mask and status register 1/2 */
#define CH1_OVERFLOW_Apparent_Energy_positive               (uint32_t)0x00000000

#define CH1_C_SIGMADELTA_1             				 		(uint32_t)0x00100000/*!< primary current sigma delta bitstream struck in DSP interrupt control mask and status register 1 */
#define CH1_C_SIGMADELTA_0             						(uint32_t)0x00000000

#define CH1_C_ACC_1                      					(uint32_t)0x00200000/*!< Accumulation of primary channel current in DSP interrupt control mask and status register 1 */
#define CH1_C_ACC_0                      					(uint32_t)0x00000000

#define CH1_C_SWV_Start_1                  					(uint32_t)0x00400000/*!< primary current swell detect in DSP interrupt control mask and status register 1 */
#define CH1_C_SWV_Start_0                  					(uint32_t)0x00000000

#define CH1_C_SWV_END_1                  					(uint32_t)0x00800000/*!< primary current swell end in DSP interrupt control mask and status register 1 */
#define CH1_C_SWV_END_0                  					(uint32_t)0x00000000

#define CH1_V_SIGMADELTA_1               					(uint32_t)0x01000000/*!< primary voltage sigma delta bitstream struck in DSP interrupt control mask and status register 1 */
#define CH1_V_SIGMADELTA_0             						(uint32_t)0x00000000

#define CH1_V_PERIOD_ERR_1              					(uint32_t)0x02000000/*!< primary voltage period error in DSP interrupt control mask and status register 1 */
#define CH1_V_PERIOD_ERR_0              					(uint32_t)0x00000000

#define CH1_V_SAG_Start_1                  					(uint32_t)0x04000000/*!< primary voltage sag detect in DSP interrupt control mask and status register 1 */
#define CH1_V_SAG_Start_0                  					(uint32_t)0x00000000

#define CH1_V_SAG_END_1                  					(uint32_t)0x08000000/*!< primary voltage sag end in DSP interrupt control mask and status register 1*/
#define CH1_V_SAG_END_0                  					(uint32_t)0x00000000

#define CH1_V_SWV_Start_1                  					(uint32_t)0x10000000/*!< primary voltage swell detect in DSP interrupt control mask and status register 1 */
#define CH1_V_SWV_Start_0                  					(uint32_t)0x00000000

#define CH1_V_SWV_END_1                  					(uint32_t)0x20000000/*!< primary voltage swell end in DSP interrupt control mask and status register 1 */
#define CH1_V_SWV_END_0                  					(uint32_t)0x00000000

#define CH1_TAMPER_EN_1                  					(uint32_t)0x40000000/*!< Tamper on primary in DSP interrupt control mask and status register 1 */
#define CH1_TAMPER_EN_0                  					(uint32_t)0x00000000

#define CH1_TAMPER_or_Wrong_Connection_1                 	(uint32_t)0x80000000/*!< Tamper or wrong connection in DSP interrupt control mask and status register 1 */
#define CH1_TAMPER_or_Wrong_Connection_0                 	(uint32_t)0x00000000

/*-------------------------------End of DSP_SR1---------------------------------*/




/*****************************************************************************/
/****************************DSP_SR2******************************************/
/*****************************************************************************/
#define CH2_C_SIGMADELTA_1             						(uint32_t)0x00100000/*!< primary current sigma delta bitstream struck in DSP interrupt control mask and status register 1 */
#define CH2_C_SIGMADELTA_0             						(uint32_t)0x00000000

#define CH2_C_ACC_1                      					(uint32_t)0x00200000/*!< Accumulation of primary channel current in DSP interrupt control mask and status register 1 */
#define CH2_C_ACC_0                      					(uint32_t)0x00000000

#define CH2_C_SWV_Start_1                  				(uint32_t)0x00400000/*!< primary current swell detect in DSP interrupt control mask and status register 1 */
#define CH2_C_SWV_Start_0                  				(uint32_t)0x00000000

#define CH2_C_SWV_END_1                  					(uint32_t)0x00800000/*!< primary current swell end in DSP interrupt control mask and status register 1 */
#define CH2_C_SWV_END_0                  					(uint32_t)0x00000000

#define CH2_V_SIGMADELTA_1               					(uint32_t)0x01000000/*!< primary voltage sigma delta bitstream struck in DSP interrupt control mask and status register 1 */
#define CH2_V_SIGMADELTA_0             						(uint32_t)0x00000000

#define CH2_V_PERIOD_ERR_1              					(uint32_t)0x02000000/*!< primary voltage period error in DSP interrupt control mask and status register 1 */
#define CH2_V_PERIOD_ERR_0              					(uint32_t)0x00000000

#define CH2_V_SAG_Start_1                  				(uint32_t)0x04000000/*!< primary voltage sag detect in DSP interrupt control mask and status register 1 */
#define CH2_V_SAG_Start_0                  				(uint32_t)0x00000000

#define CH2_V_SAG_END_1                  					(uint32_t)0x08000000/*!< primary voltage sag end in DSP interrupt control mask and status register 1*/
#define CH2_V_SAG_END_0                  					(uint32_t)0x00000000

#define CH2_V_SWV_Start_1                  				(uint32_t)0x10000000/*!< primary voltage swell detect in DSP interrupt control mask and status register 1 */
#define CH2_V_SWV_Start_0                  				(uint32_t)0x00000000

#define CH2_V_SWV_END_1                  					(uint32_t)0x20000000/*!< primary voltage swell end in DSP interrupt control mask and status register 1 */
#define CH2_V_SWV_END_0                  					(uint32_t)0x00000000

#define CH2_TAMPER_EN_1                  					(uint32_t)0x40000000/*!< Tamper on primary in DSP interrupt control mask and status register 1 */
#define CH2_TAMPER_EN_0                  					(uint32_t)0x00000000

#define CH2_TAMPER_or_Wrong_Connection_1          (uint32_t)0x80000000/*!< Tamper or wrong connection in DSP interrupt control mask and status register 1 */
#define CH2_TAMPER_or_Wrong_Connection_0          (uint32_t)0x00000000

/*-------------------------------End of DSP_SR2---------------------------------*/



/**********************************************************************************************/
/******************** Configuration of Registers and Bit assignment****************************/
/**********************************************************************************************/
stpm33type_t CLR_SS_TIME_OUT1 =  CLR_SS_TIME_OUT_MAX;   	//0x00000000 - 0x0000000F
stpm33type_t TC1 = TC_MAX; 	                      			//0x00000000 - 0x000001C0	
stpm33type_t LPW1 = LPW_MAX;                     			//0x00000000 - 0x0F000000  
stpm33type_t LPS1 = LPS1_MAX; 					  			//0x00000000 - 0x30000000
stpm33type_t LCS1 = LCS1_MAX;                    			//0x00000000 - 0xC0000000
stpm33type_t CLR_SS_TIME_OUT2 =  CLR_SS_TIME_OUT_MAX;   	//0x00000000 - 0x0000000F
stpm33type_t TC2 = TC_MAX; 	                      			//0x00000000 - 0x000001C0	
stpm33type_t LPW2 = LPW_MAX;                     			//0x00000000 - 0x0F000000  
stpm33type_t LPS2 = LPS2_MAX; 					  			//0x00000000 - 0x30000000
stpm33type_t LCS2 = LCS2_MAX;                    			//0x00000000 - 0xC0000000
stpm33type_t SAG_TIME_THR = SAG_TIME_THR_10ms;			    //0x00000000 - 0x00003FFF
/*------------------------------End of Configuration of Registers and Bit assignment---------------------------------*/


/*********************metrology.h*************************************************/
#define CURRENT_SENSITIVITY_SHUNT      (0.0003)			// Gain of 16
#define CURRENT_SENSITIVITY_CT         (0.0024)
#define R1_V1                          (810000)
#define R2_V1                          (470)

#define GAIN_I_STAGE_0                 (2)            //Gain of 2
#define GAIN_I_STAGE_1                 (4)            //Gain of 4
#define GAIN_I_STAGE_2                 (8)            //Gain of 8
#define GAIN_I_STAGE_3                 (16)           //Gain of 16

#define CONST_PULSE                    (41600)
#define V_REF                          (1.18)

#define K_INT_CURRENT                   1
#define K_INT_ROGOWSKI                 (0.8155773)
#define FREQ_RESOLUTION                (50)
#define RES_ZCR                        (125000)        //FCLK
#define CAL_V 												 (0.875)
#define CAL_I_N                        (0.875)
#define CAL_I_P                        (0.875)
#define CON_RADIAN                     (0.0174533)
#define D_CLK                          (7812.5)
#define M_PI 													 (float)3.141593
#define Vn 														 (230)
#define In 														 (5)
/*------------------------------End of metrology.h---------------------------------*/



/********************Pin position  private Defines*************************************************/
#define PHC2_pin_position	  0
#define PHV2_pin_position	  10
#define PHC1_pin_position	  12
#define PHV1_pin_position	  22

#define CHV1_pin_position 0
#define SWV_THR1_pin_position 12;
#define SAG_THR1_pin_position 22;

#define CHC1_pin_position 0;
#define SWC_THR1_pin_position 12;

#define CHV2_pin_position 0;
#define SWV_THR2_pin_position 12;
#define SAG_THR2_pin_position 22;

#define CHC2_pin_position 0;
#define SWC_THR2_pin_position 12;


#define AH_UP1_pin_position= 0;
#define OFA1_pin_position= 12;
#define OFAF1_pin_position= 22;

#define AH_DOWN1_pin_position= 0;
#define OFR1_pin_position= 12;
#define OFS1_pin_position= 22;

#define AH_UP2_pin_position= 0;
#define OFA2_pin_position= 12;
#define OFAF2_pin_position= 22;
#define AH_DOWN2_pin_position= 0;
#define OFR2_pin_position= 12;
#define OFS2_pin_position= 22;
/*------------------------------End of Pin position  private Defines---------------------------------*/

