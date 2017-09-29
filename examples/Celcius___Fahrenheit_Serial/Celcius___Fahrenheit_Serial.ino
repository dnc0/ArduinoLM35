/*Example celcius and Fahrenheit serial
 * -Send via serial value of temperature in celcius and fahrenheit
 * -With mult-sampling reading
 */

#include <LM35.h>
LM35 sensor(A0);	//Create and define the sensor
					//the sensor is in pin A0

void setup() {
  Serial.begin(9600);	//Start the Serial
}

void loop() {
  Serial.print("Temp in celcius: ");
  float tempC = sensor.read();	//Read sensor and store the value in celcius..
  Serial.println(tempC);			//and print in serial.
  
  Serial.print("Temp in fahrenheit: ");	
  float tempF = sensor.readF(2);	//Read sensor and store the value in fahrenheit(read 2 times and make the average)...
  Serial.println(tempF);			//and print in serial.

  delay(500);	//Delay for the next read...
}
