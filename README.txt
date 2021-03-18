Topic: STPM33 Register Code Explaination 

Context: 

STPM33 is an ASSP(Application Specific Standard Product) designed for high accuracy measurement of power and energy in power systems. STPM33 is equipped with 1 voltage entry (for phase) and 2 current entries (for phase and neutral)
(ex: VIN1: Voltage Input Neutral on phase 1, VIP1: Voltage Input Phase on phase 1).
For measurement of primary voltage channel i.e. phase-neutral line votlage, shunt resistance is used. 
For measurement of primary current channel i.e. line current, shunt resistance is used. 
For measurement of secondary current channel i.e. neutral current, Current Transformer is used. 

Registers: 

The STPM33 has total 70 registers. Out of these, 18 are configuration registers, 3 are UART/SPI registers and remaining 49 are data registers.

Communication: 

Communication between STPM33 and the microcontroller is done via UART.


/stpm33_register_code.c
	/stpm33_all_register_check_code.h
	/stpm33_metrology.h

