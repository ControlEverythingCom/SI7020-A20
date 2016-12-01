SYSTEM_THREAD(ENABLED); // Makes the code run in threaded mode

// Add the temperature sensor library
#include "SI7020-A20_CE/SI7020-A20_CE.h"

// Create a temperature sensor object
SI7020_A20_CE tempSensor;

// Declare a variable to store temperature readings in
double tempF = 0;

// setup() only runs once, when the device is first powered on
void setup() {
    // Nothing needed in setup for this example!
}

// loop() runs again and again as fast as it can
void loop() {

	// Read the temperature sensor!
    tempF = tempSensor.temperatureF();

    // Publish that data to the cloud!
    Particle.publish("temperature", String(tempF), 60, PRIVATE);

    // Delay for 5000 milliseconds (aka 5 seconds)
    delay(5000);
}