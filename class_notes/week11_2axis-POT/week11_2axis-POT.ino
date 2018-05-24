#include <Servo.h>
 
Servo servoX;  // create servo object to control an X axis servo
Servo servoY;  // and for Y
Servo servoZ;
 
// (a maximum of eight servo objects can be created!)
 
int servoXPin = 3;  // what pins are our servos connected to?
int servoYPin = 5;
int servoZPin = 6;
int servoRPin = 9;
 
int posX = 0;    // variable to store the servo position
int posY = 0; 
int posZ = 0; // variable to store the other servo position
 
void setup() {
  Serial.begin(9600);  // we're gonna use serial comm.
 
  // "attach" servos
  servoX.attach(servoXPin);  // attaches the servo on pin 10 to the servo object
  servoY.attach(servoYPin);
  servoZ.attach(servoZPin);// attaches the servo on pin 11 to the servo object
}
 
void loop() {
  // see if there is available serial data
//  if (Serial.available() > 1) {
 
    // read the incoming bytes
//    posX = Serial.read();
//    posY = Serial.read();
//  }



int posX = analogRead(0);
//int posY = analogRead(1);
//int posZ = analogRead(2);
int mappedVal = map(posX, 0, 1023, 0, 180);
int mappedVal2 = map(posY, 0, 1023, 0, 180);
int mappedVal3 = map(posZ, 0, 1023, 0, 180);

 
  // "write" for a servo motor just tells it what angle to go to
  servoX.write(mappedVal);
//  servoY.write(mappedVal2);
//  servoZ.write(mappedVal3);
  Serial.println(mappedVal);
}
