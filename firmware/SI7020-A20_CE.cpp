#include "SI7020-A20_CE.h"

double SI7020_A20_CE::temperatureC(){
    int raw = getRawTemperatureReading();
    double temperature = ((175.72*raw)/65536)-46.85;
    return temperature;
}

double SI7020_A20_CE::temperatureF(){
    double degreesC = temperatureC();
    double temperatureF = (degreesC*1.8)+32;
    return temperatureF;
}

//Read temperature from SI7020
int SI7020_A20_CE::getRawTemperatureReading(){
    Wire.begin();
    Wire.beginTransmission(address);
    Wire.write(temperatureRegister);
    byte status = Wire.endTransmission();
    if(status != 0){
        Serial.println("read temperature failed");
        return 0;
    }else{
        //It worked
        Wire.requestFrom(address, 2);
        byte msb = Wire.read();
        byte lsb = Wire.read();
        int reading = (msb*256)+lsb;
        return reading;
    }
}