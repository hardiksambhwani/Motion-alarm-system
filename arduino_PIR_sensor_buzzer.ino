int PIR = 7;
int buzzer = 5;
int val = 0;

void setup() {
pinMode(buzzer, OUTPUT);    
pinMode(PIR, INPUT);    
Serial.begin(9600);      
}

void loop(){
val = digitalRead(PIR);  
  if (val == HIGH) {
  digitalWrite(buzzer, HIGH);
  delay(10000);
  }
else{digitalWrite(buzzer, LOW);}
}
