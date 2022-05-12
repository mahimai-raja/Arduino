#include <Servo.h>
Servo Servo1;

const int FLEX = 13;
const int SER = A0


void setup() {
  Serial.begin(9600);
  Servo1.attach(SER);

}

void loop() {
  int Flex_Reading = analogRead(FLEX);
  Serial.print(Flex_Reading);
  int a = map(Flex_Reading, 2, 30 , 0, 180 );
  Servo.write(a);
  delay(100); 

}
