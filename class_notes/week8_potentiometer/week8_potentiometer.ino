void setup() {
  
  pinMode(8, OUTPUT);

//don't need to establish pinMode when using analog pins

//console logging
Serial.begin(9600);

}

void loop() {

// query the analog pin 0 for values 
// that run from 0 to 1023 or 
// 0 to 5 volts


int val = analogRead(0);
int mappedVal = map(val, 0, 1023, 5000, 15000);

digitalWrite(8, HIGH);
delayMicroseconds(mappedVal);
digitalWrite(8, LOW);
delayMicroseconds(mappedVal);

//Serial.print(mappedVal);
//Serial.print(", ");
//Serial.println(val);
////delay(20);

}
