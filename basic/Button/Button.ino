
const int buttonPin = 2;     
const int ledPin =  13;    


int buttonState = 0;  
     
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  
  if (buttonState == LOW) {
   digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
  }
}
