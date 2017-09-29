/*
	Arduino LM35 sensor library
	by:Marlon Soares
	marlonslbr@gmail.com

	LM35.h
	V1.1 R1.1
	2017
*/

#include "LM35.h"

LM35::LM35(byte pin) : _pin(pin) { //constructor for LM35 sensor object
	pinMode(pin, OUTPUT); //Set the pin of the sensor
}

float LM35::read(int samples) { //Return a value of temperature in celsius
	float _t=0; // Storage the value of samples of the read
	float _temp=0; // Storage the final value for temperature
	if(samples==NULL) {  // if not define the samples...
		samples = 1 ; //... put the value 1 for samples
	}
	for(int i=0;i<samples;i++) { // Loop for read n (samples) times a sensor...
		_t = _t + analogRead(_pin); //read and storage the value in _t var
	}
	_temp = (_t * 0.48875855) / samples; // And calculate the average
	return _temp; // Return the value of temp in Celsius
}

float LM35::read(void) { //Return a value of temperature in celsius
	float _t=0; // Storage the value of samples of the read
	float _temp=0; // Storage the final value for temperature
	_t = analogRead(_pin); //read and storage the value in _t var
	_temp = (_t * 0.48875855);
	return _temp; // Return the value of temp in Celsius
}

float LM35::readF(int samples) {
	float _t=0; // Storage the value of samples of the read
	float _temp=0; //storage the final value for temperature
	if(samples==NULL) { // if not define the samples...
		samples = 1; //... put the value 1 for samples
	}
	for(int i=0;i<samples;i++) { // Loop for read n (samples) times a sensor...
		_t = _t + analogRead(_pin); //read and storage the value in _t var
	}
	_temp = (_t * 0.48875855) / samples; // And calculate the average
	_temp = _temp * 1.8 + 32; // Convert Celsius to Fahrenheit
	return _temp; // Return the value of temp in  Fahrenheit
}

float LM35::readF(void) {
	float _t=0; // Storage the value of samples of the read
	float _temp=0; //storage the final value for temperature
	_t = _t + analogRead(_pin); //read and storage the value in _t var
	_temp = (_t * 0.48875855);
	_temp = _temp * 1.8 + 32; // Convert Celsius to Fahrenheit
	return _temp; // Return the value of temp in  Fahrenheit
}
