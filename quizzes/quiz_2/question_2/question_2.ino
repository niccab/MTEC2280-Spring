//Question 2

void setup() {
  
  pinMode(8, OUTPUT);
  Serial.begin(9600);

}

void loop() {

int val = analogRead(0);
int mappedVal = map(val, 0, 1023, 50, 500);

mappedVal *= 1000;

digitalWrite(8, HIGH);
delayMicroseconds(mappedVal);
digitalWrite(8, LOW);
delayMicroseconds(mappedVal);


//Serial.print(mappedVal);
//Serial.print(", ");
//Serial.println(val);
//delay(20);

}
