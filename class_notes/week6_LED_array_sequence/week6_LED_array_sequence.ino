int ledPin[] = {5, 6 ,7 ,8, 9};


void setup() {
  // sets all LED pins to OUTPUT

  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < 5; i+=2) {
      for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin[i], LOW);
      }
    
    digitalWrite(ledPin[i], HIGH);

    delay(50);
  }


  for (int i = 0; i < 5; i++) {
      for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin[i], LOW);
      }
    
    digitalWrite(ledPin[i], HIGH);

    delay(100);
  }

  //for (int i = 0; i < 5; i++) {
  //    for (int i = 0; i < 5; i++) {
   //   digitalWrite(ledPin[i], HIGH);
  //    }
    
   // digitalWrite(ledPin[i], LOW);

   // delay(200);
//  }

}
