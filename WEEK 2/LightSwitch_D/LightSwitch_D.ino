int LEDpin = 10;
int buttonPin = 11;
bool LEDstate;
bool lastButtonState;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(LEDpin, OUTPUT);
}

void loop() {

  bool buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState && buttonState == false) {
     LEDstate = !LEDstate;
     }
  digitalWrite(LEDpin, LEDstate);
  lastButtonState = buttonState;
  delay(10);

}
