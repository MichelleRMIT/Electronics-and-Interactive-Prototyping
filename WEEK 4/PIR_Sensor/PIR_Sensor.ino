const int echoPin = 6;
const int trigPin = 7;

void setup() {
 pinMode(echoPin, INPUT);
 pinMode(trigPin, OUTPUT);

Serial.begin(9600);
}

void loop() {
 // send a pulse
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(5);
 digitalWrite(trigPin, LOW);

// wait for the echo
 long duration = pulseIn(echoPin, HIGH);

// convert the time into a distance
 int cm = duration / 29 / 2;

Serial.print(cm);
 Serial.println("cm");

delay(100);
}