#define PIN_ANALOG_IN 4


void setup() {
delay(3000); //upload buffer
Serial.begin(9600); // Initialize the serial port, set the baud rate into 9600
  
}

void loop() { 
    int reading = analogRead(PIN_ANALOG_IN); //read sensor
    Serial.print("Analog reading is: "); // Send the result to computer through serial port
    Serial.print(reading);
    delay(10); 
}