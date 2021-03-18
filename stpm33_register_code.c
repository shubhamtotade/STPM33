#include<stpm33_all_register_check_code.h>

int main()
{
	
stpm33type_t DSP_CR1		= LCS1_primary | LPS1_active | LPW1_4 | ROC1_bypassed | BHPFC1_enabled | BHPFV1_enabled | APM1_Fundamental | AEM1_RMS | TC1_30 | ENVREF1_enabled | CLRSS1 | CLR_SS_TIME_OUT1_15;//Tobewritten: 0x040000BF
stpm33type_t DSP_CR2		= LCS2_primary | LPS2_reactive | LPW2_4 | ROC2_bypassed | BHPFC2_enabled | BHPFV2_enabled | APM2_Fundamental | AEM2_RMS | TC2_30 | ENVREF2_enabled | CLRSS2 | CLR_SS_TIME_OUT2_15;//Tobewritten: 0x240000BF
stpm33type_t DSP_CR3  	= REF_FREQ_50Hz | EN_CUM_Sum | LED2_OUTPUT_ON | LED1_OUTPUT_ON | AUTO_LATCH_1 | LATCH2_0 | LATCH1_0 | SW_RESET_0 | TAMPER_disabled | TMP_TOL_12point5_percent | ZCR_EN_CLK | ZCR_SEL_CLK_7812point5_HZ | SAG_TIME_THR_10ms;//Tobewritten: 0x008004E2
stpm33type_t DSP_CR4  	= PHV1 | PHC1 | PHV2 | PHC2;//Tobewritten: 0x00000000
stpm33type_t DSP_CR5  	= SAG_THR1_ | SWV_THR1_disabled | CHV1_0point875;//Tobewritten: 0x4053B800
stpm33type_t DSP_CR6  	= SWC_THR1_disabled | CHC1_0point875;//Tobewritten: 0x00154800 
stpm33type_t DSP_CR7  	= SAG_THR2_disabled | SWV_THR2_disabled | CHV2_0point875;//Tobewritten: 00000000
stpm33type_t DSP_CR8  	= SWC_THR2_disabled | CHC2_0point875;//Tobewritten: 00000FFF
stpm33type_t DSP_CR9  	= OFAF1 | OFA1 | AH_UP1;//Tobewritten: 00000FFF
stpm33type_t DSP_CR10 	= OFS1 | OFR1 | AH_DOWN1;//Tobewritten: 00000FFF
stpm33type_t DSP_CR11 	= OFAF2 | OFA2 | AH_UP2;//Tobewritten: 00000FFF
stpm33type_t DSP_CR12 	= OFS2 | OFR2 | AH_DOWN2;//Tobewritten: 00000FFF
stpm33type_t DFE_CR1 		= GAIN1_x16 | enC1_enabled | enV1_enabled | Reserved_DFE_CR1;//Tobewritten: 0x0F270327
stpm33type_t DFE_CR2 		= GAIN2_x2 | enC2_enabled | enV2_disabled | Reserved_DFE_CR2;//Tobewritten: 0x03270326    
	
//Voltage sag and swell design parameters
uint8_t SWV_THR1_value = 253;//rms Volts
uint8_t SAG_THR1_value = 207;//rms Volts
uint8_t SWC_THR1_value = 66 ;//rms Amperes
uint8_t SWV_THR2_value = 253 ;//rms Volts
uint8_t SAG_THR2_value = 207;//rms Volts
uint8_t SWC_THR2_value = 66 ;//rms Amperes

//Amplitude calibration OR Voltage and current calibration
uint8_t CHV1_value = 0;
uint8_t CHC1_value = 0;
uint8_t CHV2_value = 0;
uint8_t CHC2_value = 0;	
uint8_t Xv =  (Vn*GAIN_I_STAGE_0*CAL_V*pow(2,15))/(V_REF*((1+R1_V1)/R2_V1)));
uint8_t Xi_P = (In * GAIN_I_STAGE_3 * CAL_I_P * pow(2,17) * CURRENT_SENSITIVITY_SHUNT)/V_REF;
uint8_t Xi_N = (In * GAIN_I_STAGE_0 * CAL_I_N * pow(2,17) * CURRENT_SENSITIVITY_CT)/V_REF;

//Phase calibration
uint8_t PHC2_value = 0;
uint8_t PHV2_value = 0;
uint8_t PHC1_value = 0;
uint8_t PHV1_value = 0;

//Power offset calibration 
uint8_t OFA1_value = 0;
uint8_t OFAF1_value = 0;
uint8_t OFR1_value = 0;
uint8_t OFS1_value = 0;
uint8_t OFA2_value = 0;
uint8_t OFAF2_value = 0;
uint8_t OFR2_value = 0;
uint8_t OFS2_value = 0;

//Neutral missing OR Tamper parameters 
uint8_t AH_UP1_value = 0;	//Primary channel RMS upper threshold (for AH) 
uint8_t AH_DOWN1_value = 0;//Primary channel RMS lower threshold (for AH)
uint8_t AH_UP2_value = 0;	//Secondary channel RMS upper threshold (for AH)
uint8_t AH_DOWN2_value = 0;//Secondary channel RMS lower threshold (for AH)

//Conversion from set parameters to hexa according to different formula
uint8_t SWV_THR1_conversion = SWV_THR1_value/V_REF*GAIN_I_STAGE_0*pow(2,0.5)*CAL_V*R2_V1/(R1_V1+R2_V1)*pow(2,10);
uint8_t SAG_THR1_conversion = SAG_THR1_value/V_REF*GAIN_I_STAGE_0*pow(2,0.5)*CAL_V*R2_V1/(R1_V1+R2_V1)*pow(2,10);
uint8_t SWC_THR1_conversion = SWC_THR1_value/V_REF*GAIN_I_STAGE_3*pow(2,0.5)*CURRENT_SENSITIVITY_SHUNT*CAL_I_P*pow(2,10);

uint8_t SWV_THR2_conversion = SWV_THR2_value/V_REF*GAIN_I_STAGE_0*pow(2,0.5)*CAL_V*R2_V1/(R1_V1+R2_V1)*pow(2,10);
uint8_t SAG_THR2_conversion = SAG_THR2_value/V_REF*GAIN_I_STAGE_0*pow(2,0.5)*CAL_V*R2_V1/(R1_V1+R2_V1)*pow(2,10);
uint8_t SWC_THR2_conversion = SWC_THR2_value/V_REF*GAIN_I_STAGE_0*pow(2,0.5)*CURRENT_SENSITIVITY_CT*CAL_I_N*pow(2,10);

//uint32_t CHV1_conversion = ((14336 *  Xv)/Vav) - 12288;
//uint32_t CHV2_conversion = ((14336 *  Xv)/Vav) - 12288;
//uint32_t CHC1_conversion = ((14336 *  Xi_P)/Iav) - 12288;
//uint32_t CHC2_conversion = ((14336 *  Xi_N)/Iav) - 12288;


//if CHV1  is to be changed 
//
//DSP_CR5 = DSP_CR5 & ~((0xFFF)<<CHV1_pin_position);            		//clear the respective CHV1 bits
//DSP_CR5 = DSP_CR5 | (CHV1_conversion<<CHV1_pin_position); 				//writing the new CHV1 bits

//if swell voltage is to be changed
DSP_CR5 = DSP_CR5 & ~((0x3FF)<<SWV_THR1_pin_position);            //clear the respective swell bits
DSP_CR5 = DSP_CR5 | (SWV_THR1_conversion<<SWV_THR1_pin_position); //writing the new swell bits

//if sag voltage is to be changed.
DSP_CR5 = DSP_CR5 & ~((0x3FF)<<SAG_THR1_pin_position);            //clear the respective sag bits
DSP_CR5 = DSP_CR5 | (SAG_THR1_conversion<<SAG_THR1_pin_position); //writing the new sag bits




////if CHC1  is to be changed 
//DSP_CR6 = DSP_CR6 & ~((0x3FF)<<CHC1_pin_position);            		//clear the respective CHC1 bits
//DSP_CR6 = DSP_CR6 | (CHC1_conversion<<CHC1_pin_position); 				//writing the new CHC1 bits

//if swell current is to be changed
DSP_CR6 = DSP_CR6 & ~((0x3FF)<<SWC_THR1_pin_position);            //clear the respective swell bits
DSP_CR6 = DSP_CR6 | (SWC_THR1_conversion<<SWC_THR1_pin_position); //writing the new swell bits




////if CHV2  is to be changed 
//DSP_CR7 = DSP_CR7 & ~((0xFFF)<<CHV2_pin_position);            		//clear the respective CHV2 bits
//DSP_CR7 = DSP_CR7 | (CHV2_conversion<<CHV2_pin_position); 				//writing the new CHV2 bits

//if swell voltage is to be changed
DSP_CR7 = DSP_CR7 & ~((0x3FF)<<SWV_THR2_pin_position);            //clear the respective swell bits
DSP_CR7 = DSP_CR7 | (SWV_THR2_conversion<<SWV_THR2_pin_position); //writing the new swell bits

//if sag voltage is to be changed.
DSP_CR7 = DSP_CR7 & ~((0x3FF)<<SAG_THR2_pin_position);            //clear the respective sag bits
DSP_CR7 = DSP_CR7 | (SAG_THR2_conversion<<SAG_THR2_pin_position); //writing the new sag bits



////if CHC2  is to be changed 
//DSP_CR8 = DSP_CR8 & ~((0x3FF)<<CHC2_pin_position);            		//clear the respective CHC2 bits
//DSP_CR8 = DSP_CR8 | (CHC2_conversion<<CHC2_pin_position); 				//writing the new CHC2 bits

//if swell current is to be changed
DSP_CR8 = DSP_CR8 & ~((0x3FF)<<SWC_THR2_pin_position);            //clear the respective swell bits
DSP_CR8 = DSP_CR8 | (SWC_THR2_conversion<<SWC_THR2_pin_position); //writing the new swell bits


#if 0

//if AH_UP1 is to be changed
DSP_CR9 = DSP_CR9 & ~((0xFFF)<<AH_UP1_pin_position);            	//clear the respective AH_UP1 bits
DSP_CR9 = DSP_CR9 | (AH_UP1_value<<AH_UP1_pin_position); 					//writing the new AH_UP1 bits

//if OFA1 is to be changed
DSP_CR9 = DSP_CR9 & ~((0x3FF)<<OFA1_pin_position);            		//clear the respective offset bits
DSP_CR9 = DSP_CR9 | (OFA1_pin_value<<OFA1_pin_position); 					//writing the new offset bits

//if OFAF1 is to be changed.
DSP_CR9 = DSP_CR9 & ~((0x3FF)<<OFAF1_pin_position);            		//clear the respective offset bits
DSP_CR9 = DSP_CR9 | (OFAF1_pin_value<<OFAF1_pin_position); 				//writing the new offset bits



//if AH_DOWN1 is to be changed
DSP_CR10 = DSP_CR10 & ~((0xFFF)<<AH_DOWN1_pin_position);          //clear the respective AH_DOWN1 bits
DSP_CR10 = DSP_CR10 | (AH_DOWN1_value<<AH_DOWN1_pin_position); 		//writing the new AH_DOWN1 bits

//if OFR1 is to be changed
DSP_CR10 = DSP_CR10 & ~((0x3FF)<<OFR1_pin_position);            	//clear the respective offset bits
DSP_CR10 = DSP_CR10 | (OFR1_pin_value<<OFR1_pin_position); 				//writing the new offset bits

//if OFS1 is to be changed.
DSP_CR10 = DSP_CR10 & ~((0x3FF)<<OFS1_pin_position);            	//clear the respective offset bits
DSP_CR10 = DSP_CR10 | (OFS1_pin_value<<OFS1_pin_position); 				//writing the new offset bits



//if AH_UP2 is to be changed
DSP_CR11 = DSP_CR11 & ~((0xFFF)<<AH_UP2_pin_position);            	//clear the respective AH_UP2 bits
DSP_CR11 = DSP_CR11 | (AH_UP2_value<<AH_UP2_pin_position); 					//writing the new AH_UP2 bits

//if OFA2 is to be changed
DSP_CR11 = DSP_CR11 & ~((0x3FF)<<OFA2_pin_position);            		//clear the respective offset bits
DSP_CR11 = DSP_CR11 | (OFA2_pin_value<<OFA2_pin_position); 					//writing the new offset bits

//if OFAF2 is to be changed.
DSP_CR11 = DSP_CR11 & ~((0x3FF)<<OFAF2_pin_position);            		//clear the respective offset bits
DSP_CR11 = DSP_CR11 | (OFAF2_pin_value<<OFAF2_pin_position); 				//writing the new offset bits




//if AH_DOWN2 is to be changed
DSP_CR12 = DSP_CR12 & ~((0xFFF)<<AH_DOWN2_pin_position);          //clear the respective AH_DOWN2 bits
DSP_CR12 = DSP_CR12 | (AH_DOWN2_value<<AH_DOWN2_pin_position); 		//writing the new AH_DOWN2 bits

//if OFR2 is to be changed
DSP_CR12 = DSP_CR12 & ~((0x3FF)<<OFR2_pin_position);            	//clear the respective offset bits
DSP_CR12 = DSP_CR12 | (OFR2_pin_value<<OFR2_pin_position); 				//writing the new offset bits

//if OFS2 is to be changed.
DSP_CR12 = DSP_CR12 & ~((0x3FF)<<OFS2_pin_position);            	//clear the respective offset bits
DSP_CR12 = DSP_CR12 | (OFS2_pin_value<<OFS2_pin_position); 				//writing the new offset bits
#endif



printf("DSP_CR1  = %08X\n",DSP_CR1);
printf("DSP_CR2  = %08X\n",DSP_CR2);
printf("DSP_CR3  = %08X\n",DSP_CR3);
printf("DSP_CR4  = %08X\n",DSP_CR4);
printf("DSP_CR5  = %08X\n",DSP_CR5);
printf("DSP_CR6  = %08X\n",DSP_CR6);
printf("DSP_CR7  = %08X\n",DSP_CR7);
printf("DSP_CR8  = %08X\n",DSP_CR8);
printf("DSP_CR9  = %08X\n",DSP_CR9);
printf("DSP_CR10 = %08X\n",DSP_CR10);
printf("DSP_CR11 = %08X\n",DSP_CR11);
printf("DSP_CR12 = %08X\n",DSP_CR12);
printf("DFE_CR1  = %08X\n",DFE_CR1);
printf("DFE_CR2  = %08X\n",DFE_CR2);


/*
stpm33type_t value1 = read_stpm33(DSP_CR1);
if(val &= (LCS1_primary | LPS1_active | LPW1_4 | ROC1_bypassed | BHPFC1_enabled | BHPFV1_enabled | APM1_Fundamental | AEM1_RMS | TC1_30 | ENVREF1_enabled | CLRSS1 | CLR_SS_TIME_OUT1_15))
{
    printf("DSP_CR1 register values are correct");
}
else
{
    printf("Error in DSP_CR1 register values");
}


stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR2);
if(val &= (LCS2_primary | LPS2_reactive | LPW2_4 | ROC2_bypassed | BHPFC2_enabled | BHPFV2_enabled | APM2_Fundamental | AEM2_RMS | TC2_30 | ENVREF2_enabled | CLRSS2 | CLR_SS_TIME_OUT2_15))
{
    printf("DSP_CR2 register values are correct");
}
else
{
    printf("Error in DSP_CR2 register values");
}

stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR3);
if(val &= (REF_FREQ_50Hz | EN_CUM_Sum | LED2_OUTPUT_ON | LED1_OUTPUT_ON | AUTO_LATCH_1 | LATCH2_0 | LATCH1_0 | SW_RESET_0 | TAMPER_disabled | TMP_TOL_12point5_percent | ZCR_EN_CLK | ZCR_SEL_CLK_7812point5_HZ | SAG_TIME_THR_10ms))
{
    printf("DSP_CR3 register values are correct");
}
else
{
    printf("Error in DSP_CR3 register values");
}



stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR4);
if(val &= (PHV1 | PHC1 | PHV2 | PHC2))
{
    printf("DSP_CR4 register values are correct");
}
else
{
    printf("Error in DSP_CR4 register values");
}


stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR5);
if(val &= (SAG_THR1_207V | SWV_THR1_253V | CHV1_0point875))
{
    printf("DSP_CR5 register values are correct");
}
else
{
    printf("Error in DSP_CR5 register values");
}

stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR6);
if(val &= (SWC_THR1_66A | CHC1_0point875))
{
    printf("DSP_CR6 register values are correct");
}
else
{
    printf("Error in DSP_CR6 register values");
}

stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR7);
if(val &= (SAG_THR2_disabled | SWV_THR2_disabled | CHV2_0point875))
{
    printf("DSP_CR7 register values are correct");
}
else
{
    printf("Error in DSP_CR7 register values");
}

stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR8);
if(val &= (SWC_THR2_66A | CHC2_0point875))
{
    printf("DSP_CR8 register values are correct");
}
else
{
    printf("Error in DSP_CR8 register values");
}


stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR9);
if(val &= (OFAF1 | OFA1 | AH_UP1))
{
    printf("DSP_CR9 register values are correct");
}
else
{
    printf("Error in DSP_CR9 register values");
}


stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR10);
if(val &= (OFS1 | OFR1 | AH_DOWN1))
{
    printf("DSP_CR10 register values are correct");
}
else
{
    printf("Error in DSP_CR10 register values");
}


stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR11);
if(val &= (OFAF2 | OFA2 | AH_UP2))
{
    printf("DSP_CR11 register values are correct");
}
else
{
    printf("Error in DSP_CR11 register values");
}


stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DSP_CR12);
if(val &= (OFS2 | OFR2 | AH_DOWN2))
{
    printf("DSP_CR12 register values are correct");
}
else
{
    printf("Error in DSP_CR12 register values");
}


stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DFE_CR1);
if(val &= (GAIN1_x16 | enC1_enabled | enV1_enabled | Reserved_DFE_CR1))
{
    printf("DFE_CR1 register values are correct");
}
else
{
    printf("Error in DFE_CR1 register values");
}

stpm33type_t value1 = 0x00000000;//reintializing value1 to zero
stpm33type_t value1 = read_stpm33(DFE_CR2);
if(val &= (GAIN2_x2 | enC2_enabled | enV2_disabled | Reserved_DFE_CR2))
{
    printf("DFE_CR2 register values are correct");
}
else
{
    printf("Error in DFE_CR2 register values");
}
*/


return 0;
}
/*TO do: 
We write control registers and read data from data registers.
What are the configurable control registers where we can change ks,Ai,Av values and what are the data registers to be read  
*/