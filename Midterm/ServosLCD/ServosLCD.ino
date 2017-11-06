#include <Servo.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

Servo servo1;
Servo servo2;

#define trigPin 7
#define echoPin 8

int angle = 0;
boolean isPresenceDetected = false;

long int t;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  servo1.attach(10);
  servo2.attach(9);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  t = millis();
}

void loop() {
   lcd.setCursor(0, 1);
  //put your main code here, to run repeatedly:

  if (isPresenceDetected == false) {
    lcd.print("give me a hi 5");
    if( millis() - t > 700){
      servo1.write(angle);
      t = millis();
      if (angle == 0) {
        angle = 30;
      } else {
        angle = 0;
      }
    }
    
    //Serial.println(angle);
//    delay(700);
    
    servo2.write(50);
  } else {
    servo2.write(75);
    Serial.println("yo");
    lcd.print("too slow      ");
  }


  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
  Serial.println(distance);

  if (distance < 20 && distance >= 0) {
    isPresenceDetected = true;

  }
  else {
    isPresenceDetected = false;
  }


}
