int LEDpin = 10;
int buttonPin = 11;
bool LEDstate = false;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(LEDpin, OUTPUT);
  digitalWrite(LEDpin, LEDstate);
}

void loop() {
  bool buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    if (LEDstate == false) {
      digitalWrite(LEDpin, HIGH);
      LEDstate = true;
    } else {
      digitalWrite(LEDpin, LOW);
      LEDstate = false;
    }
    delay(10);
    while (digitalRead(buttonPin) == LOW){
      // do nothing

    }
  }
}


/*NOTE: The while() loop forces the program to wait until the button is released. Below is an alternative method that doesn't use the while() loop.
while() loops can cause problems when you are trying to do more complex things with the Arduino because nothing else can happen while the loop is running.*/