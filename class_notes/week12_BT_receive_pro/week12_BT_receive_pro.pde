import processing.serial.*;  // import serial library
Serial myPort;  // Create object from Serial class

void setup()
{
  size(500, 500);
  printArray(Serial.list());
  // remember to set your serial port...
  String portName = Serial.list()[2];
  myPort = new Serial(this, Serial.list()[2], 9600);
}

void draw() {
  //are there available serial bytes coming in?
  while (myPort.available() > 0) {
    int inByte=myPort.read();

    background(inByte, 0, 0);
  }
}