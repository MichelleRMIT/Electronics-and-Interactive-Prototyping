int GREEN_LED = 8;
int RED_LED = 9;
int BUTTON = 10;

void setup() {
    pinMode(GREEN_LED, OUTPUT);
    pinMode(RED_LED, OUTPUT);
    pinMode(BUTTON, INPUT);
}

void loop() {
    digitalWrite(RED_LED, HIGH); // turn led red
    buttonState = digitalRead(BUTTON);// has the button being pressed

    if (buttonState == HIGH){
        digitalWrite(RED_LED, LOW); // turn red led off
        digitalWrite(GREEN_LED, HIGH);// turn green led on
        delay (5000); // delay for 5 seconds
        digitalWrite(GREEN_LED, LOW);// turn green led off
    }
}