import processing.serial.*;
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

keyPressed();

  //while (myPort.available() > 2) {
  // int inByte=myPort.write();

  //if (mousePressed == true) {
  //  myPort.write("30"); 
  //  println("work");
  //} else
  //{
  //  myPort.write("60");
//}
//}
}

void keyPressed() {

  if (key == 'a') {
    myPort.write("30");
    println("work 30");
  }
  
    if (key == 's') {
    myPort.write("70");
    println("work 70");
  }
}