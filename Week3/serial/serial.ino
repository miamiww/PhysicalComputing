void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  // read the analog input
  int sensorReading = analogRead(A0);
  // send the results to the laptop
  Serial.println(sensorReading);
}
