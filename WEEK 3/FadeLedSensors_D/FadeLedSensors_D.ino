/*Use this RGB colour picker to test different colours: https://www.w3schools.com/colors/colors_rgb.aspLinks to an external site.
*/
const byte ledPins[] = {15, 2, 4}; 
const byte chns[] = {0, 1, 2}; 
int red, green, blue; 
bool commonAnode = false;

void setup() {
    for (int i = 0; i < 3; i++) {
        ledcSetup(chns[i], 1000, 8); //define red, green, blue led pins 
        ledcAttachPin(ledPins[i], chns[i]);
    } 

}

void loop() {
   setColor(255, 0, 0); // red
// setColor(0, 255, 0); // green
// setColor(0, 0, 255); // blue
   delay(200);

}

void setColor(byte r, byte g, byte b) { 

    if(commonAnode){
        r = map(r, 0,255, 255,0);
        g = map(g, 0,255, 255,0);
        b = map(b, 0,255, 255,0);
     }

   ledcWrite(chns[0], r); //Common anode LED, low level to turn on the led. 
   ledcWrite(chns[1], g); 
   ledcWrite(chns[2], b);

}