//Question 3: LED blink every half second. 
//Variable keeping track of how many times it blinks

int ledPin[] = {5, 6 ,7 ,8, 9};
int count = 0;

void setup() {
  // sets all LED pins to OUTPUT

  for (int i = 0; i < 5; i++) {
    pinMode(ledPin[i], OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

    digitalWrite(ledPin[1], LOW);
    delay(500);
    
    digitalWrite(ledPin[1], HIGH);
    delay(500);
    count++; 

    Serial.print("The LED has blinked ");
    Serial.print(count);
    Serial.println(" times.");
    
  }



