void setup() {
  // put your setup code here, to run once:

pinMode(4, OUTPUT);

}

void loop() {

//note 1

int rando = random(10000) + 5000;

//for (int i = 1000; i < 15000; i+=100) {
//  digitalWrite(4, HIGH);
//  delayMicroseconds(rando);
  
//  digitalWrite(4,LOW);
//  delayMicroseconds(rando);
  
// }


// delay(500);

for (int i = 1000; i < 15000; i+=100) {
  digitalWrite(4, HIGH);
  delayMicroseconds(-i);
  
  digitalWrite(4,LOW);
  delayMicroseconds(-i);
  
}




//note 2

//for (int i = 0; i < 25; i++) {
//  digitalWrite(10, HIGH);
//  delayMicroseconds(8000);
  
//  digitalWrite(10,LOW);
//  delayMicroseconds(8000);
//}
}
