void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (Serial.available() <= 0){
    Serial.print("Hello);
    delay(10);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    int input = Serial.read();
    int sensor = analogRead(A0);
    Serial.println(sensor);
    
  }
  

}
