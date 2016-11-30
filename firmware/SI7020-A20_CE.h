#include "spark_wiring_usbserial.h"
#include "spark_wiring_i2c.h"
#include "spark_wiring_constants.h"

class SI7020_A20{
public:
    double temperatureC();
    double temperatureF();
private:
    int address = 0x40;
    int temperatureRegister = 227;
    int getRawTemperatureReading();
};