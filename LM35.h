/*
	Arduino LM35 sensor library
	by:Marlon Soares
	marlonslbr@gmail.com

	LM35.h
	V1.1 R1.1
	2017
*/
#ifndef __LM35__
#define __LM35__

#include "Arduino.h"

class LM35 {
protected:
	byte _pin; // The nunber of the pin from sensor
public:
	LM35(byte pin); // Constructor for LM35 sensor object
	float read(int samples); // Return a value of temperature in Celsius
	float read(void); // Return a value of temperature in Celsius
	float readF(int samples);  // Return a value of temperature in Fahrenheit
	float readF(void);  // Return a value of temperature in Fahrenheit
};
#endif
