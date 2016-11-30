# About

This Library is intended for use with ControlEverything.com [SI7020-A20] [si7020] temperature sensor mini modules.

The intention of this library is to make use of the ControlEverything SI7020-A20 with Particle development web IDE as simple as possible for users.
###Developer information
ControlEverything designs and develops peripheral products for the IOT platform market.  Our products are proven reliable and we are very excited to support Particle.  For more information on NCD please visit www.controleverything.com 

###Requirements
- [ControlEverything SI7020-A20 temperature sensor mini module][si7020]
- Particle Photon, Electron, or Core module
- [ControlEverything Particle platform board with I2C interface][interfaceAdapter]
- Knowledge base for developing and programming with Particle Core/Photon modules.

### Version
1.0.0

### How to use this library

The libary can be imported into an existing application or you can simply use our example code.  This can be done through the Particle WEB IDE(Build).  Click the Community Libraries Icon and search for SI7020-A20_CE.  Once found select that library.  Click Include in App button to add it to an existing application or simply click the Use this example button to use our example code.  If you are adding this library to an existing application select the App you want to include the library in.  Finally click Add to this app.  For more information see [Particles's documentation] [sparkIncludeLibrary] 

### Example use

Once the Library is included in your applicaiton you should see an include statement at the top like this:
```cpp
// This #include statement was automatically added by the Particle IDE.
#include "SI7020-A20_CE/SI7020-A20.h"
```
Now you need to instanciate an object of the library for use in your application like this:
```cpp
SI7020_A20 tempSensor;
```

Here is an example use case for the class
```cpp
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
```

###Public accessible methods
```cpp
double temperatureC();
```
A call to this function will return a double variable representing the current temperature read by the sensor in degrees Celsius.


```cpp
double temperatureF();
```
A call to this function will return a double variable representing the current temperature read by the sensor in degrees Fahrenheit.

License
----

GNU
[sparkIncludeLibrary]:http://docs.spark.io/build/#flash-apps-with-spark-build-using-libraries
[ceSite]:https://www.controleverything.com/
[si7020]:https://www.controleverything.com/content/Temperature?sku=SI7020-A20_I2CS
[interfaceAdapter]:https://www.controleverything.com/products?f[0]=field_assigned_categories%3A6124&f[1]=field_assigned_categories%3A6591
