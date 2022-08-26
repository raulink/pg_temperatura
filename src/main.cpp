// this example is public domain. enjoy!
// https://learn.adafruit.com/thermocouple/
#include "Arduino.h"

#include <LiquidCrystal_I2C.h>
#include <SPI.h>
#include "max6675.h"

int lcdColumns = 16;
int lcdRows = 2;

LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

int ktcSO = 12;
int ktcCS = 13;
int ktcCLK = 14;

MAX6675 termocupla(ktcCLK, ktcCS, ktcSO);

void setup() {
  
  Serial.begin(9600);
  Serial.println("MAX6675 test");  
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  Serial.println("MAX6675 test");
  delay(500); 
}

void loop() {  
  
   //lcd.clear(); 
   lcd.setCursor(0, 0);   
   lcd.print("Temperatura: "); 
   lcd.setCursor(0,1);
   lcd.print(termocupla.readCelsius());
   Serial.println(termocupla.readCelsius());
   // 250ms entre lecturas!
   delay(500);

   /**
    * @brief test de loop
    * Test merge 
    */
}
