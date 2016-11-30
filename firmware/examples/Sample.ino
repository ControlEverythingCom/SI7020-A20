// This #include statement was automatically added by the Particle IDE.
#include "SI7020-A20_CE/SI7020-A20.h"

SI7020_A20 tempSensor;

double tempF = 0;

void setup() {
    Particle.variable("Temperature", tempF);
}

void loop() {
    tempF = tempSensor.temperatureF();
}