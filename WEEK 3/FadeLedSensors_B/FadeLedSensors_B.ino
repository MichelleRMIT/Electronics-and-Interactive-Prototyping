/*Use the constrain function to restrict the input range to within the 0-255 value expected by the analogWrite() function.
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
   int LEDvalue = map(reading,1000,2000,0, 255);
   ledcWrite(CHN, reading); 
}