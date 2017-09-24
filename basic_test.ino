/* 5V Relay Module (KY-019) [S076] : http://rdiot.tistory.com/99 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004
int pin = 10;

void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");

  pinMode(pin,OUTPUT);
  delay(1000);

  lcd.clear();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("S076:5V relay KY-019");

  lcd.setCursor(0,1);
  digitalWrite (pin, HIGH); // relay conduction;
  lcd.print("D10=" + (String)digitalRead(pin) + " - HIGH");
  delay (2000);
 
  lcd.setCursor(0,1); 
  digitalWrite (pin, LOW); // relay switch is turned off;
  lcd.print("D10=" + (String)digitalRead(pin) + " - LOW ");
  delay (2000);
}
