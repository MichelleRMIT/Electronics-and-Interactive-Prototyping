// setup variables to remember which pins are in use
int LEDpin = 10;
int buttonPin = 11;

// the setup routine runs once when you press reset:
void setup(){
  // initialize the button pin as an input.
  pinMode(buttonPin, INPUT);
  // initialize the LED pin as an output.
  pinMode(LEDpin, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop(){

  if (digitalRead(buttonPin) == HIGH)
  {
    digitalWrite(LEDpin, HIGH); // turn the LED on
    delay(5000);
  } else{
    digitalWrite(LEDpin, LOW); // turn the LED off
  }
}

