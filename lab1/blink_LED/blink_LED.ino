void setup() {
  // put your setup code here, to run once:
    pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(12);                       // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  delay(12);                       // wait for a second

}
