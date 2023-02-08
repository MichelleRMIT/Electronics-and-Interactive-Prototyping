void setup( ) {
delay(3000); //upload buffer
Serial.begin(9600); // Initialize the serial port, set the baud rate into 9600

}

void loop() {
    int sensorValue = analogRead(A0); // Convert analog value of A0 port into digital value
    float v = sensorValue * 5.0 / 1024; // Calculate voltage
    float Rt = 10 * v / (5 - v);// Calculate resistance value of thermistor
    float tempK = 1 / (log(Rt / 10) / 3950 + 1 / (273.15 + 25)); // Calculate temperature (Kelvin)
    float tempC = tempK - 273.15; // Calculate temperature (Celsius)
    Serial.print("Current temperature is: "); // Send the result to computer through serial port
    Serial.print(tempK);
    Serial.print(" K, ");
    Serial.print(tempC);
    Serial.println(" C");
    delay(500);
}