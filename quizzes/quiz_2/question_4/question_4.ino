int ledPin[] = {5, 6 ,7 ,8};

void setup() {
  
  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

Serial.begin(9600);

}

void loop() {
    for (int i = 0; i < 5; i+=1) {
      for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin[i], LOW);
      }
      
int val = analogRead(0);
int mappedVal = map(val, 0, 1023, 0, 9);


 for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin[i], LOW);
      }

 for (int i = 0; i < mappedVal; i++) {
      digitalWrite(ledPin[i], HIGH);
      }

delay(500);




Serial.print(mappedVal);
Serial.print(", ");
Serial.println(val);
//delay(20);

}
}
