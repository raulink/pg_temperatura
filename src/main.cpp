// this example is public domain. enjoy!
// https://learn.adafruit.com/thermocouple/
#include "Arduino.h"

#include <LiquidCrystal_I2C.h>
#include <SPI.h>
//#include "../lib/temperatura/temperatura.h"
#include "max6675.h"

//LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

LiquidCrystal_I2C lcd(0x27);  // set the LCD address to 0x27 for a 16 chars and 2 line display
//LiquidCrystal_I2C lcd(0x38);
int ktcSO = 12;
int ktcCS = 13;
int ktcCLK = 14;

MAX6675 termocupla(ktcCLK, ktcCS, ktcSO);

void setup() {
  
  Serial.begin(9600);
  Serial.println("MAX6675 test");
  lcd.begin(16, 2);  
  Serial.begin(9600);
  Serial.println("MAX6675 test");
  delay(500); 
}

void loop() {
  // basic readout test, just print the current temperature  
  
   lcd.clear(); 
   lcd.print("T1 "); 
   lcd.print(termocupla.readCelsius());
   lcd.setCursor(0,1);
   // For the MAX6675 to update, you must delay AT LEAST 250ms between reads!
   delay(500);
}
