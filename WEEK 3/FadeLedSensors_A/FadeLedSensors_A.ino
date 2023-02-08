/* Use Map function to scale sensor reading

The analogWrite() function expects a value between 0 and 255. If you give it a value outside this range the value with 'wrap', i.e. writing analogWrite(260) would output as analogWrite(4) and analogWrite(-10) would output as analogWrite(246). Generally speaking, we want to prevent this wrapping from occurring. There are two ways to do this. The first is to use the map() Links to an external site.function to scale the sensor reading to match the output. 
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
 reading = map(reading,0,4095,0, 255);
 ledcWrite(CHN, reading); 

}