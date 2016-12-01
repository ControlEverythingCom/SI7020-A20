// Add the temperature sensor library
#include "SI7020-A20_CE/SI7020-A20_CE.h"

// Create a temperature sensor object
SI7020_A20_CE tempSensor;

// Declare a variable to store temperature readings in
double tempF = 0;

// setup() only runs once, when the device is first powered on
void setup() {
	
	// Create a variable that we can access from the API!
    Particle.variable("Temperature", tempF);
}

// loop() runs again and again as fast as it can
void loop() {

	// Read the temperature sensor to update the value
    tempF = tempSensor.temperatureF();
}