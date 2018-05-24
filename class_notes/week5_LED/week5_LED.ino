int blinkDelay = 0;


void setup() {
  // put your setup code here, to run once:


  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
}

void loop() {

  blinkDelay += 10;
  //if (blinkDelay >= 1000) {
  // blinkDelay -=10;
  //}


  for(int i = 0; i < 200; i +=10) {

  //turns the LED on
  digitalWrite(8, HIGH);
  delay(blinkDelay);
  
  digitalWrite(8,LOW);
  delay(blinkDelay);

  digitalWrite(9, HIGH);
  delay(blinkDelay);
  
  digitalWrite(9,LOW);
  delay(blinkDelay);

  digitalWrite(10, HIGH);
  delay(blinkDelay);
  
  digitalWrite(10,LOW);
  delay(blinkDelay);

  }
  

}
