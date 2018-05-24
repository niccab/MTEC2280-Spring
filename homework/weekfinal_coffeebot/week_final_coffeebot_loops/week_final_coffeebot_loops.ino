#include <Servo.h>

Servo servoX;  // X
Servo servoY;  // Y
Servo servoR1; //flip over spoon into filter
Servo servoR2; // scooper within can

int servoXPin = 3;  // what pins are our servos connected to?
int servoYPin = 5;
int servoR1Pin = 6;
int servoR2Pin = 9;

int posX = 0;
int posY = 0;
int posR1 = 0;
int posR2 = 0;

int solenoidPin = 4;
int servings = 0;

void setup() {

  // "attach" servos
  servoX.attach(servoXPin);
  servoY.attach(servoYPin);
  servoR1.attach(servoR1Pin);
  servoR2.attach(servoR2Pin);

  pinMode(solenoidPin, OUTPUT);
  digitalWrite(solenoidPin,HIGH);

}

void loop() {

  //how many cups of coffee aka how many scoop loops?
  for (servings = 0; servings <= 2; servings++) {

    servoX.write(125);
    servoY.write(0);
    servoR1.write(0);
    servoR2.write(180);

    //scoop / stabilize
    
    delay(5000);
    for (posX = 125; posX <= 145; posX++) {
      servoX.write(posX);
      delay(50);
    }

    for (posR1 = 0; posR1 <= 111; posR1++) {
      servoR1.write(posR1);
      delay(50);
    }

    delay(1000);

    for (posY = 0; posY <= 15; posY++) {
      servoY.write(posY);
    }

    delay(1000);


    //position over filter


    for (posR2 = 180; posR2 >= 90; posR2--) {
      servoR2.write(posR2);
      delay(15);
    }

    delay(1000);

    for (posX = 145; posX >= 55; posX--) {
      servoX.write(posX);
      delay(15);
    }

    delay(3000);


    //turn over

    for (posR1 = 111; posR1 >= 0; posR1--) {
      servoR1.write(posR1);
      delay(15);
    }

    for (posX = 55; posX <= 60; posX++) {
      servoX.write(posX);
      delay(15);
    }
    for (posX = 60; posX >= 55; posX--) {
      servoX.write(posX);
      delay(15);
    }


    delay(5000);


    //return to start

    for (posX = 55; posX <= 125; posX++) {
      servoX.write(posX);
      delay(30);
    }

  }

  //attempt to close filter

  for (posX = 125; posX >= 100; posX--) {
    servoX.write(posX);
    delay(15);
  }

  for (posY = 15; posY >= 0; posY--) {
    servoY.write(posY);
  }

  for (posR2 = 90; posR2 <= 180; posR2++) {
    servoR2.write(posR2);
    delay(15);
  }

  for (posX = 100; posX >= 55; posX--) {
    servoX.write(posX);
    delay(50);
  }

  //TURN ON MACHINE (attempt to push button 3 times)

  digitalWrite(solenoidPin, LOW);
  delay(1000);
  digitalWrite(solenoidPin, HIGH);
  delay(1000);
  digitalWrite(solenoidPin, LOW);
  delay(1000);
  digitalWrite(solenoidPin, HIGH);
  delay(1000);
  digitalWrite(solenoidPin, LOW);
  delay(1000);
  digitalWrite(solenoidPin, HIGH);
  delay(1000);


}
