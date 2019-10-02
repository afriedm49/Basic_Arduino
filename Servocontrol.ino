#include <Servo.h>
Servo myServo; // This defines the servo

int servoPin = 2;
int btnPin1 = 11;
int btnPin2 = 12;
int state1;
int state2;
int angle = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(btnPin1, INPUT);
  pinMode(btnPin2, INPUT);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  state1 = digitalRead(btnPin1);
  state2 = digitalRead(btnPin2);

  if (state1 == HIGH && angle < 180) {
    myServo.write(angle + 3);
    angle = (angle + 3);
    delay(5);


  }
  else if (state2 == HIGH && angle > 0) {
    myServo.write(angle - 3);
    angle = (angle - 3);
    delay(5);
  }
}
