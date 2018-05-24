#include <SoftwareSerial.h>

int buttonPin = 5

int rxPin = 3;
int txPin = 2;

SoftwareSerial bluetooth(rxPin, txPin);

void setup() {

  Serial.begin(9600);
  bluetooth.begin(9600);

  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {

  if (digitalRead(buttonPin) == LOW) {
    //button is being pressed
    Serial.write(1); // send processing a 1
    bluetooth.write(1);
  } else {
    //button is NOT being pressed
    Serial.write(2); // send processing a 0
    bluetooth.write(2);
    
  }
  delay(5); //be nice


}
