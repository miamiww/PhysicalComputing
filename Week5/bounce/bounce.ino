int level = 1;
int difference = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
}

void loop() {
  int buttomPushed = digitalRead(11);
  if (buttonPushed){
    return;
  }
  if( level <= 0 || level >= 255){
    difference = -difference;
  }
  level = level + difference;
  analogWrite(6,level);
  delay(8);
}
