int R =0;

void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}


void loop() {
  R = analogRead(A0);
  R = map(R, 0, 1023,0, 254);
  analogWrite(3,R);
}
