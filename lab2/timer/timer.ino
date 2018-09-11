// include the library code:
#include <LiquidCrystal.h>
//Melody
#include "pitches.h"

//delcare the analoyPin
const int analogPin = A0;  // Analog input pin that the potentiometer is attached to

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);



// notes in the melody:
int melody[] = {
  NOTE_D3,NOTE_D3,NOTE_D3,NOTE_G3,NOTE_D4,NOTE_C4,NOTE_B3,NOTE_A3,NOTE_G4,NOTE_D4, \
  NOTE_C4,NOTE_B3,NOTE_A3,NOTE_G4,NOTE_D4,NOTE_C4,NOTE_B3,NOTE_C4,NOTE_A3,0};


// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  10,10,10,2,2,10,10,10,2,4, \
  10,10,10,2,4,10,10,10,2,4};


int voltageValue;
int time_count_down;
int time_start;

void setup() {
  // put your setup code here, to run once:
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.print("Setup in 10s");
  delay(10000);
  lcd.clear();
  lcd.print("Count Down!");
  voltageValue = analogRead(analogPin);
  time_count_down=voltageValue-130;
}


void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(7, 1);
  // print the number of seconds since reset:
  time_count_down=time_count_down-1;


  lcd.print(time_count_down);
  delay(1000);

  if (time_count_down==100) {
    lcd.clear();
    lcd.print("Count Down!");
    lcd.setCursor(7, 1);
    }
    
   if (time_count_down==10) {
    lcd.clear();
    lcd.print("Count Down!");
    lcd.setCursor(7, 1);
    }


  if (time_count_down==0) {
    
      for (int thisNote = 0; thisNote < 20; thisNote++) {
      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(8, melody[thisNote], noteDuration);
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8); }

  }

  
};
