void setup() {
  // make pin 7 an output pin
  pinMode(7,OUTPUT);
}

void loop() {
  //send voltage to pin 7
  digitalWrite(7, HIGH);
  //wait a second
  delay(1000);
  //turn off voltage on pin 7
  digitalWrite(7,LOW);
  //wait a second
  delay(500);
}
