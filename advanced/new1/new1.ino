void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    long value = Serial.parseInt();
    Serial.println(value);
  }
}
