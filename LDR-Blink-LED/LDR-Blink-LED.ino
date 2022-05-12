// Mention the pins 

const int LED = 13;
const int LDR = A0;   

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(LDR,INPUT);

}

void loop() {
  int LDR_Status = analogRead(LDR);

  if ( LDR_Status <= 400 ) {
    digitalWrite(LED,HIGH);
    Serial.println("Room is dark, so light is on");
  }
  else {
    digitalWrite(LED,LOW);
    Serial.println("--------------");
  }

}
