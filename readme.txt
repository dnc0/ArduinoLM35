/////////////////////////////////////////
ARDUINO LM35 LIBRARY REFERENCE
by: Marlon Soares
marlonslbr@live.com
////////////////////////////////////////

Mult-sampling
	Is a way of performing an average of readings to arrive at a more balanced result.
	float temperature = lm35.read(SAMPLES);
	The argument "SAMPLES" define the times that the sensor must be read to arrive at the mean value
	EX: float temperature = lm35.read(5);
			>> temperature is equal to read the sensor 5 times and divide by 5(average)
	Note: If you do not enter any value then only 1 reading will be made.

Celcius read:
	Use:
		float temperature = lm35.read();

Fahrenheit read:
	Use:
		float temperature = lm35.readF();

