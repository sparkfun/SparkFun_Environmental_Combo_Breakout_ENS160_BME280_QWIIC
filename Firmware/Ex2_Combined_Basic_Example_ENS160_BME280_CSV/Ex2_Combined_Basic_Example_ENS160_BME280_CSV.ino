/* Ex2_Combined_Basic_Example_ENS160_BME280_CSV.ino

 This example shows basic data retrieval from the SparkFun Environmental Combo Breakout
 from the Air Quality Sensor (ENS160) and Atmospheric Sensor (BME280). This example shows
 how to read sensor readings from the ENS160 (air quality index tVOC, and eCO2)
 and BME280 (humidity, pressure, and current temperature) over I2C. The output format is
 in CSV.
 
 Modified by:
  Ho Yun "Bobby" Chan @ SparkFun Electronics August, 2023
 Basic Example for the ENS160 Originally Written by: 
	Elias Santistevan @ SparkFun Electronics October, 2022
 Basic Example for the ENS160 Originally Written by: 
  Nathan Seidle @ SparkFun Electronics March 9th, 2018

 Products: 
  Air Quality Sensor  (ENS160)             -  https://www.sparkfun.com/products/20844
  Humidity and Temperature Sensor (BME280) -  https://www.sparkfun.com/products/13676 
 
 Repository:
	https://github.com/sparkfun/SparkFun_Indoor_Air_Quality_Sensor-ENS160_Arduino_Library

 SparkFun code, firmware, and software is released under the MIT
 License(http://opensource.org/licenses/MIT).

*/
#include <Wire.h>
#include "SparkFun_ENS160.h"  // Click here to get the library: http://librarymanager/All#SparkFun_ENS160
#include "SparkFunBME280.h"   // Click here to get the library: http://librarymanager/All#SparkFun_BME280

SparkFun_ENS160 myENS;
BME280 myBME280;

int ensStatus;

void setup() {
  Wire.begin();

  Serial.begin(115200);

  if (!myENS.begin()) {
    Serial.println("Did not begin.");
    while (1)
      ;
  }

  if (myBME280.beginI2C() == false)  //Begin communication over I2C
  {
    Serial.println("The sensor did not respond. Please check wiring.");
    while (1)
      ;  //Freeze
  }

  // Reset the indoor air quality sensor's settings.
  if (myENS.setOperatingMode(SFE_ENS160_RESET))
    //Serial.println("Ready.");

    delay(100);

  // Device needs to be set to idle to apply any settings.
  // myENS.setOperatingMode(SFE_ENS160_IDLE);

  // Set to standard operation
  // Others include SFE_ENS160_DEEP_SLEEP and SFE_ENS160_IDLE
  myENS.setOperatingMode(SFE_ENS160_STANDARD);

  // There are four values here:
  // 0 - Operating ok: Standard Operation
  // 1 - Warm-up: occurs for 3 minutes after power-on.
  // 2 - Initial Start-up: Occurs for the first hour of operation.
  //												and only once in sensor's lifetime.
  // 3 - No Valid Output
  ensStatus = myENS.getFlags();
  //Serial.print("Gas Sensor Status Flag: ");
  //Serial.println(ensStatus);
  
  Serial.println(F("ENS160 Status Flag, Air Quality Index [1-5], tVOC [ppb], eCO2 [ppm], Relative Humidity [RH%], Pressure [Pa], Altitude [m], Altitude [ft], Temperature [degC], Temperature [degF]"));

}

void loop() {
  if (myENS.checkDataStatus()) {
    ensStatus = myENS.getFlags();
    Serial.print(ensStatus);
    Serial.print(F(", "));
    Serial.print(myENS.getAQI());
    Serial.print(F(", "));
    Serial.print(myENS.getTVOC());
    Serial.print(F(", "));
    Serial.print(myENS.getECO2());
    Serial.print(F(", "));
    Serial.print(myBME280.readFloatHumidity(), 0);
    Serial.print(F(", "));
    Serial.print(myBME280.readFloatPressure(), 0);
    Serial.print(F(", "));
    Serial.print(myBME280.readFloatAltitudeMeters(), 1);
    Serial.print(F(", "));
    Serial.print(myBME280.readFloatAltitudeFeet(), 1);
    Serial.print(F(", "));
    Serial.print(myBME280.readTempC(), 2);
    Serial.print(F(", "));
    Serial.print(myBME280.readTempF(), 2);

    Serial.println();
  }


  delay(200);
}