//WIP

//Create a sketch with 4 LEDs
//Two of four lights should be turned on and it should be truly random

int ledPin[] = {5, 6 ,7 ,8};


void setup() {
  // sets all LED pins to OUTPUT

Serial.begin(9600);         
Serial.println("Ready");  
randomSeed(analogRead(0));  


int rando = random(5);
int rando2 = random(5);
Serial.print(rando);
Serial.print(","); 
Serial.println(rando2);

for (int i = 0; i < 5; i++) { //sets all LED pins to OUTPUT
  pinMode(ledPin[i], OUTPUT);
  }

// for (int i = 0; i < 5; i++) {
//      digitalWrite(ledPin[i], LOW);
//      }

//
//digitalWrite(ledPin[rando], HIGH);
//digitalWrite(ledPin[rando2], HIGH);
//
 for (int i = 0; i < rando; i+=1) {
      digitalWrite(ledPin[i], HIGH);
      }

      
 for (int i = 0; i < rando2; i+=1) {
      digitalWrite(ledPin[i], HIGH);
      }

delay(500);


}



void loop() {

}

