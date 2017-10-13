
#include <Servo.h>

Servo myServo;

const int trigPin = 13;
const int echoPin = 12;
const int servoPin = 6;
int servoAngle;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  myServo.write(0);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);

  if(distance < 20) {
    myServo.write(90);
    delay(30);
  } else {
    myServo.write(0);
    delay(35);
  }



  // int servoAngle = map(distance, 0, 30, 0, 179);
  //  myServo.write(servoAngle);

}
