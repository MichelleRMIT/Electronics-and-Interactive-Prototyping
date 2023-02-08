int buttonPin = 11;          // the number of the pushbutton pin
int ledPin = 10;             // the number of the LED pin
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {

     pinMode(ledPin, OUTPUT);               // initialize the LED pin as an output:
     pinMode(buttonPin, INPUT);             // initialize the pushbutton pin as an input:
}

void loop() {

      buttonState = digitalRead(buttonPin); // read the state of the pushbutton value
      if (buttonState == HIGH) {            // if the buttonState is HIGH turn LED on
             digitalWrite(ledPin, HIGH);
      } else {
          digitalWrite(ledPin, LOW);        // if not, turn LED off
      }
}