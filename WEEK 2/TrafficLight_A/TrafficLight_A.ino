int GRE_PER = 8;
int RED_PER = 9;
int RED_CAR = 5;
int YEL_CAR = 6;
int GRE_CAR = 7;
int BUTTON = 10;
int buttonState = LOW;

void setup() {
    pinMode(GRE_PER, OUTPUT);
    pinMode(RED_PER, OUTPUT);
    pinMode(RED_CAR, OUTPUT);
    pinMode(YEL_CAR, OUTPUT);
    pinMode(GRE_CAR, OUTPUT);
    pinMode(BUTTON, INPUT);
}

void loop() {
    // reset all lights
    digitalWrite(RED_PER, HIGH); 
    digitalWrite(GRE_PER, LOW); 
    
    digitalWrite(RED_CAR, LOW); 
    digitalWrite(YEL_CAR, LOW); 
    digitalWrite(GRE_CAR, HIGH); 
    
    buttonState = digitalRead(BUTTON);// has the button being pressed

    if (buttonState == HIGH){
       // set car light to orange
        digitalWrite(RED_CAR, LOW); 
        digitalWrite(YEL_CAR, HIGH); 
        digitalWrite(GRE_CAR, LOW); 
        delay(5000);// wait 5 seconds
        
        // set car light to red
        digitalWrite(YEL_CAR, LOW); 
        digitalWrite(RED_CAR, HIGH); 
        digitalWrite(GRE_CAR, LOW); 
        delay(3000); 
        
        // turn pedestrian lights green
        digitalWrite(RED_PER, LOW); 
        digitalWrite(GRE_PER, HIGH); 
        delay (5000); // delay for 5 seconds
    }
}