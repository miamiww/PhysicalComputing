#include <Interval.h>
#include <Servo.h>

Interval ledTimer;
Interval servoTimer;

//long lastTime = 0;
//int interval = 500;
int ledState = 0;


void setup() {
  pinMode(6, OUTPUT);
  myServo.attach(9);
  ledTimer.setInterval(blinkThatThing,2000);
  servoTimer.setInterval(moveServo,20);

}

void loop() {
  ledTimer.check();
  servoTimer.check();
}

void blinkThatThing(){
    digitalWrite(6,ledState);
    ledState = !ledState;
}

void moveServo(){
  myServo.write(angle);
}


