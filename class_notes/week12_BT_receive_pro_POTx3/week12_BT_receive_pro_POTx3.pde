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
  while (myPort.available() > 2) {
    int inByte0=myPort.read();
    int inByte1=myPort.read(); 
    int inByte2=myPort.read();

    background(inByte0, inByte1, inByte2);
  }
}