int ledPin[]= {3,4,5,6,7};


void setup() {
  // put your setup code here, to run once:

  randomSeed(analogRead(0));

  for(int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0; i < 5; i++) {
    digitalWrite(ledPin[i], LOW);

  }

  int rando = random(5); 
  digitalWrite(rando, HIGH);
  delay(1000);

}
