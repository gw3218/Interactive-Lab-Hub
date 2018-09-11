
#include <LiquidCrystal.h>
//delcare the analoyPin
const int analogPin = A0;  // Analog input pin that the potentiometer is attached to

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int voltageValue;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Voltage ");
}

void loop() {
  // put your main code here, to run repeatedly:
  voltageValue = analogRead(analogPin);

  lcd.setCursor(0,1);
  lcd.print(voltageValue);
  delay(500);

}
