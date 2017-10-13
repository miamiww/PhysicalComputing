

const int analogInPinX = A0;  
const int analogInPinY = A1;  
const int digitalInPin = 2;  

int JoystickValueX = 0;        
int JoystickValueY = 0;        
int JoystickButtonValue = 0;       

int outputValue = 0;        

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(digitalInPin, INPUT_PULLUP);  
}

void loop() {
  JoystickValueX = analogRead(analogInPinX);
  JoystickValueY = analogRead(analogInPinY);
  JoystickButtonValue = digitalRead(digitalInPin);

  Serial.print(JoystickValueX);
  Serial.print(",");
  Serial.print(JoystickValueY);
  Serial.print(",");
  Serial.println(JoystickButtonValue);
  
  delay(5);
}
