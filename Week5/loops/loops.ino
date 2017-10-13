void setup() {
  pinMode(6,OUTPUT);
}

void loop() {
  //fade up
  for(int level = 0; level < 256; level ++){
    analogWrite(6,level);
    delay(8);
   }
  //fade down
  for(int level =255; level >= 0 ; level --){
    analogWrite(6,level);
    delay(8);
  }
}
