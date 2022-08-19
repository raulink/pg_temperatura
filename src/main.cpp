// this example is public domain. enjoy!
// https://learn.adafruit.com/thermocouple/
#include "Arduino.h"

#include <LiquidCrystal_I2C.h>
#include <SPI.h>
#include "max6675.h"

LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

MAX6675 termocupla(12,13,14);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);

  Serial.println("MAX6675 test");
  // wait for MAX chip to stabilize
  delay(500);
}

void loop() {
  // basic readout test, just print the current temp

   Serial.print("C = "); 
   Serial.println(thermocouple.readCelsius());
   Serial.print("F = ");
   Serial.println(thermocouple.readFahrenheit());
  
   lcd.clear(); 
   lcd.print("T1 "); 
   lcd.print(thermocouple.readCelsius());
   lcd.setCursor(0,1);
   lcd.print("T2 ");
   lcd.print(thermocouple2.readCelsius());
   lcd.setCursor(8,0);
   lcd.print("T3 ");
   lcd.print(thermocouple3.readCelsius());
   lcd.setCursor(8,1);
   lcd.print("T4 ");
   lcd.print(thermocouple4.readCelsius());
 
   // For the MAX6675 to update, you must delay AT LEAST 250ms between reads!
   delay(500);
}
