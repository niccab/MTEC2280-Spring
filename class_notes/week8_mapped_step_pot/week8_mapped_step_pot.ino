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

//map takes 5 arguments: 
////value you want to map
//input min
//input max
//output min
//output max

int val = analogRead(0);
int mappedVal = map(val, 0, 1023, 1, 10);

mappedVal *= 1000;

digitalWrite(8, HIGH);
delayMicroseconds(mappedVal);
digitalWrite(8, LOW);
delayMicroseconds(mappedVal);


//print out useful diagnostic info
//but remember to comment it out when you play the sketch
//otherwise messes up sound by adding delay

//Serial.print(mappedVal);
//Serial.print(", ");
//Serial.println(val);
//delay(20);

}
