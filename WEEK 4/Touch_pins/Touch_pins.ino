/*Touch Pins
The ESP32 has 10 inbuilt capacitive touch pins. 
Each pin can be used separately as an independent touch switch or be combined to produce multiple touch points.

NAME	PIN
T0 > GPIO4
T1 > GPIO0
T2 > GPIO2
T3 > GPIO15
T4 > GPIO13
T5 > GPIO12
T6 > GPIO14
T7 > GPIO27
T8 > GPIO33
T9 > GPIO32
*/
 

int reading = 0;
void setup(){
   Serial.begin(115200);
}

void loop(){
   reading = touchRead(T0);
   Serial.print("Touch value is = ");
   Serial.println(reading);
   delay(1000);
}
 

