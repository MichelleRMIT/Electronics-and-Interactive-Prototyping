/*Inverse the sensor reading

It is is also possible to make an inverse relationship between a sensor input and an output simply by reversing the order of values in the map() function. In the example below a Light Dependent Resistor (LDR) is used to adjust the brightness of an LED. As the ambient light in a room dims the LED will become brighter.

 */

#define PIN_LED 2 //define the led pin
#define CHN 0 //define the pwm channel 
#define FRQ 1000 //define the pwm frequency
#define PWM_BIT 8 //define the pwm precision
#define PIN_POT 13 // define potentiometer pin

void setup() {
 ledcSetup(CHN, FRQ, PWM_BIT); //setup pwm channel
 ledcAttachPin(PIN_LED, CHN); //attach the led pin to pwm channel }
}

void loop() {
 int reading = analogRead(PIN_POT);
 reading = constrain(reading, 1000, 2000);
 reading = map(reading,1000,2000,255, 0);
 ledcWrite(CHN, reading); 
}