void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  analogWrite(13,255); 
  delay(1000);
  analogWrite(13,110); 
  delay(1000);
}
