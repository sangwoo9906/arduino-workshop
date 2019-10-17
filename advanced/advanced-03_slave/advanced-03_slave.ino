#include <Wire.h>

void setup() {
  Wire.onReceive(printer);
  pinMode(3,OUTPUT);
  Wire.begin(7);
}

void loop() {
delay(100);
}

void printer()
{
  if (Wire.available())
  {
    int value = Wire.read();
    analogWrite(3,value);
  }
}
