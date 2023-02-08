int ledPin = 13; // choose the pin for the LED
int inputPin = 2; // choose the input pin (for PIR sensor)
int val = 0; // variable for reading the pin status

void setup() {
   pinMode(ledPin, OUTPUT); // declare LED as outpu
   Serial.begin(9600);
}

void loop(){
    val = digitalRead(inputPin); // read input value
    if (val == HIGH) { // check if the input is HIGH
     Serial.println("Motion detected!");
     digitalWrite(ledPin, HIGH);
    } else {
            Serial.println("No Motion");
            digitalWrite(ledPin, LOW);
       }
    
}