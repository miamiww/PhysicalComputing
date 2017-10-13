void setup() {
  // put your setup code here, to run once:
  //make 3 an input
  pinMode(3, INPUT);
  //make 7 an output
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //read input on 3
  int switchState = digitalRead(3);
  //if the input is high
  if (switchState == HIGH) {
    //turn on the LED on pin 7
    digitalWrite(7, HIGH);
    //otherwise
  } else {
    //turn off the LED on pin 7
    digitalWrite(7, LOW);
  }
}
