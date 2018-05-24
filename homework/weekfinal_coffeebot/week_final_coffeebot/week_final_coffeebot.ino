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

void setup() {

  // "attach" servos
  servoX.attach(servoXPin);
  servoY.attach(servoYPin);
  servoR1.attach(servoR1Pin);
  servoR2.attach(servoR2Pin);

  //start bot over coffee
  servoX.write(135);
  servoY.write(0);
  servoR1.write(0);
  servoR2.write(155);
}

void loop() {

  // Scoop / stabiize
  delay(5000);
  servoR1.write(111);
  delay(500);
  servoY.write(15);
  delay(3000);

  //position over filter
  servoX.write(55);
  delay(3000);

  //dump into filter

  for (posR2 = 155; posR2 >= 90; posR2 -= 1) {
    servoR2.write(posR2);
    delay(15);
  }


  //  servoR2.write(0);
  //  delay(3000);
  //  servoR1.write(90);
  //  delay(5000);












  //  for (posX = 0; posX <= 135; posX += 1) {
  //    servoX.write(posX);
  //    //delay(15);
  //  }
  //
  //
  //
  //  for (posR1 = 0; posR1 <= 45; posR1 += 1) {
  //    servoR1.write(posR1);
  //    //delay(15);
  //  }
  //



  //
  //  for (posX = 180; posX >=0; posX -= 1) {
  //    servoX.write(posX);
  //    delay(15);
  //  }
  //
  //
  //
  //  for (posY = 0; posY <= 180; posY += 1) {
  //    servoY.write(posY);
  //    delay(15);
  //  }
  //    for (posY = 180; posY >=0; posY -= 1) {
  //    servoY.write(posY);
  //    delay(15);
  //  }
  //
  //
  //  for (posR1 = 0; posR1 <= 180; posR1 += 1) {
  //    servoR1.write(posR1);
  //    delay(15);
  //  }
  //    for (posR1 = 180; posR1 >=0; posR1 -= 1) {
  //    servoR1.write(posR1);
  //    delay(15);
  //  }
  //
  //
  //  for (posR2 = 0; posR2 <= 180; posR2 += 1) {
  //    servoR2.write(posR2);
  //    delay(15);
  //  }
  //    for (posR2 = 180; posR2 >=0; posR2 -= 1) {
  //    servoR2.write(posR2);
  //    delay(15);
  //  }

}
