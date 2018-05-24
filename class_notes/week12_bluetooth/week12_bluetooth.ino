#include <SoftwareSerial.h>

int rxPin = 3;
int txPin = 2;

SoftwareSerial bluetooth(rxPin, txPin);

void setup() {

  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (bluetooth.available()) {
    inByte = bluetooth.read();
    Serial.println(inByte);
  }

  while (Serial.available()) {
    inByte = Serial.read();
    bluetooth.println(inByte);
  }


  //delay the LED blink by that amount
  digitalWrite(13, HIGH);
  delay(inByte);
  digitalWrite(13, LOW);
  delay(inByte);
}
