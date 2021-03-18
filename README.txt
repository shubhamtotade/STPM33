Topic: STPM33 Register Code Explaination 

Context: 

STPM33 is an ASSP(Application Specific Standard Product) designed for high accuracy measurement of power and energy in power systems. STPM33 is equipped with 1 voltage entry (for phase) and 2 current entries (for phase and neutral)
(ex: VIN1: Voltage Input Neutral on phase 1, VIP1: Voltage Input Phase on phase 1).
For measurement of primary voltage channel i.e. phase-neutral line votlage, voltage divider circuitry is used. 
For measurement of primary current channel i.e. line current, shunt resistance is used. 
For measurement of secondary current channel i.e. neutral current, Current Transformer is used. 

Registers: 

The STPM33 has total 70 registers. Out of these, 18 are configuration registers, 3 are UART/SPI registers and remaining 49 are data registers.

Communication: 

Communication between STPM33 and the microcontroller is done via UART.


/stpm33_register_code.c
	/stpm33_all_register_check_code.h
	/stpm33_metrology.h

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

Files: 

/stpm33_register_code.c
	/stpm33_all_register_check_code.h
	/stpm33_metrology.h

Explanation: 

stpm33_register_code.c

Voltage sag and swell limits, calibrators values, tamper Ampere-hour accumulation limits, conversion formula are initialized. Mapping required bits into each control regiters. Provision for writing new values is also provided. In which, old values are cleared off and new values are put into the desired bit position. For rechecking and confirming right read values, comparison between stpm33 register values and desired values is done.


stpm33_all_register_check_code.h 

In the header file, all configuration registers bit mapping is defined. Bit assignment and register configuration unsigned integers are all initialized in the same header file. “metrology.h” file’s design constants are also copied in this header file for easy access to macros. Calibration constants pin number are also defined for shifting and clearing purpose.


