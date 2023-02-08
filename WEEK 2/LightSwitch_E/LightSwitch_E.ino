// set pin numbers
// constants won't change for the duration of the program

int LEDpin = 10;
int buttonPin = 11;

// Variables that will change

boolean LEDstate = 0;          // the current state of the output pin
boolean buttonState = 0;       // the current reading from the input pin
boolean lastButtonReading = 0; // the previous reading from the input pin

// the following variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.

long lastDebounceTime = 0; // the last time the output pin was toggled
long debounceDelay = 50;   // the debounce time; increase this if the output flickers

void setup(){
// initialize the button pin as an input.
  pinMode(buttonPin, INPUT);
  // initialize the LED pin as an output.
  pinMode(LEDpin, OUTPUT);
  // set initial LED state
  digitalWrite(LEDpin, LEDstate);
}

void loop(){
  // read the state of the switch into a local variable.
  boolean buttonReading = digitalRead(buttonPin);
  // Remember the time when the switch changed
  if (buttonReading != lastButtonReading){
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

  // check to see if you've waited
  // long enough since the last press to ignore any noise.

  if ((millis() - lastDebounceTime) > debounceDelay){
    // if the button state has changed
    if (buttonReading != buttonState){
      // remember the new button reading
      buttonState = buttonReading;
      // Change the state of the LED if the new button state is HIGH
      if (buttonState == HIGH){
        LEDstate = !LEDstate;
      }
    }
  }
  // set the LED:
  digitalWrite(LEDpin, LEDstate);
  // Remember the button state. Next time through the loop,
  // it'll be the lastButtonState:
  lastButtonReading = buttonReading;
}