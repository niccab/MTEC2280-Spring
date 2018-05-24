int ledPin[] = {5, 6 ,7 ,8, 9};


void setup() {
  // sets all LED pins to OUTPUT

Serial.begin(9600);           //enable serial (like a console)
Serial.println("Ready");      //hello world! Print out serial
randomSeed(analogRead(0));    //generate a new random seed

int rando = random(6);
Serial.println(rando);

for (int i = 0; i < 5; i++) { //sets all LED pins to OUTPUT
  pinMode(ledPin[i], OUTPUT);
  }

 for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin[i], LOW);
      }

 for (int i = 0; i < rando; i++) {
      digitalWrite(ledPin[i], HIGH);
      }

delay(500);


}



void loop() {

}

