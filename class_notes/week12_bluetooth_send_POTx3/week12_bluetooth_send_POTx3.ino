#include <SoftwareSerial.h>

int rxPin = 3;
int txPin = 2;

SoftwareSerial bluetooth(rxPin, txPin);

void setup() {

  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() {

  int val0 = analogRead(0);
  int mappedVal0 = map(val0, 0, 1023, 0, 255);

  int val1 = analogRead(1);
  int mappedVal1 = map(val1, 0, 1023, 0, 255);

  int val2 = analogRead(2);
  int mappedVal2 = map(val2, 0, 1023, 0, 255);


  Serial.write(mappedVal0); // send processing a 1
  Serial.write(mappedVal1);
  Serial.write(mappedVal2);


  bluetooth.write(mappedVal0);
  bluetooth.write(mappedVal1);
  bluetooth.write(mappedVal2);

  delay(5); //be nice


}
