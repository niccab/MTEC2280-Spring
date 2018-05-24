#include <Servo.h>

Servo servoX; 

int servoXPin = 5;
int posX = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  servoX.attach(servoXPin);
  
//  myservo.attach(5); 
//  myservo.write(90);
}

void loop() {

  if (Serial.available() > 0) {
    posX = Serial.read();
  }

  servoX.write(posX);
}

