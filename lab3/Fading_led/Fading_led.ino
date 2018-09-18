/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int redpin = 7;
int greenpin = 8;
int bluepin = 9;

int min_sensor_value = 0;
int max_sensor_value = 0;


int brightness = 0;    // how bright the LED is
float brightness_float = 0.0;
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {

  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability

  //record the min_sensor_value
  if (sensorValue < min_sensor_value){
    min_sensor_value = sensorValue;
    }
    
  //record the max_sensor_value
  if (sensorValue > max_sensor_value){
    max_sensor_value = sensorValue;
    }

  // change the brightness for next time through the loop:
  brightness = (sensorValue - min_sensor_value)*255/(max_sensor_value - min_sensor_value);
//  brightness = int(brightness_float);

  brightness = 255 - brightness;

  
  // set the brightness of pin 7/8/9:
  analogWrite(redpin, brightness);
  analogWrite(greenpin, brightness);
  analogWrite(bluepin, brightness);
  
  // wait for 30 milliseconds to see the dimming effect
  delay(2);
}
