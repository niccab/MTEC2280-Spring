//higher delay, deeper sound


int speakerPin = 4;

void setup() {


  pinMode(speakerPin, OUTPUT);

}

void loop() {

// for (int i = 6; i < 30000; i+=100) {
//  digitalWrite(4, HIGH);
//  delayMicroseconds(i);
//  
//  digitalWrite(4,LOW);
//  delayMicroseconds(i);
//  
//}
//
//delay(500);
//
// for (int z = 10000; z > 1000; z -=100) {
//  digitalWrite(4, HIGH);
//  delayMicroseconds(z);
//  
//  digitalWrite(4,LOW);
//  delayMicroseconds(z);
// }

  digitalWrite(4, HIGH);
  delayMicroseconds(30000);
  
  digitalWrite(4,LOW);
  delayMicroseconds(30000);

  digitalWrite(4, HIGH);
  delayMicroseconds(10000);
  
  digitalWrite(4,LOW);
  delayMicroseconds(10000);

  digitalWrite(4, HIGH);
  delayMicroseconds(7000);
  
  digitalWrite(4,LOW);
  delayMicroseconds(7000);


/*int rando = random(10000) + 5000;

for (int i = 1000; i < 15000; i+=100) {
  digitalWrite(4, HIGH);
  delayMicroseconds(i);
  
  digitalWrite(4,LOW);
  delayMicroseconds(rando);
 }


 delayMicroseconds(500);
*/

}
