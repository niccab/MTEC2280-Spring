#include <Servo.h>
#include <SoftwareSerial.h>

Servo servoX;  // create servo object to control an X axis servo
Servo servoY;  // and for Y
Servo servoZ;

int rxPin = 3;
int txPin = 2;

SoftwareSerial bluetooth(rxPin, txPin);

int servoXPin = 9;  // what pins are our servos connected to?
int servoYPin = 10;
int servoZPin = 11;

int posX = 45;    // variable to store the servo position
int posY = 90;
int posZ = 90; // variable to store the other servo position

int inByte = 0;

void setup() {
  Serial.begin(9600);  // we're gonna use serial comm.
  bluetooth.begin(9600);

  // "attach" servos
  servoX.attach(servoXPin);  // attaches the servo on pin 10 to the servo object
  servoY.attach(servoYPin);
  servoZ.attach(servoZPin);// attaches the servo on pin 11 to the servo object

  servoX.write(posX);
  servoY.write(posY);
  servoZ.write(posZ);


}

void loop() {
//
//  while (bluetooth.available() ) {
//    inByte = bluetooth.read();
//    Serial.println(inByte);
//  }


  while (Serial.available() ) {
    inByte = Serial.read();
    bluetooth.println(inByte);
  }
  
  servoX.write(inByte);
  servoY.write(inByte);
  servoZ.write(inByte);
}

/*
  int mappedVal = map(posX, 0, 1023, 0, 180);
  int mappedVal2 = map(posY, 0, 1023, 0, 180);
  int mappedVal3 = map(posZ, 0, 1023, 0, 180);


  // "write" for a servo motor just tells it what angle to go to
  servoX.write(mappedVal);
  servoY.write(mappedVal2);
  servoZ.write(mappedVal3);
*/

