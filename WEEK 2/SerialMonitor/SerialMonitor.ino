nt potPin = 13;
int ledPin = 0;


void setup() {
     Serial.begin(9600);// initialize serial communication at 9600 bits per second
}

void loop() {

      int sensorValue = analogRead(potPin); // read the input on analog pin 0
      Serial.println(sensorValue); // print out the value
      delay(1); // delay in between reads for stability
}