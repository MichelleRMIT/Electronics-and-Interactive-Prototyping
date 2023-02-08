int a = 5;
int b = 7;

void setup (){
    Serial.begin(115200);  
}

void loop (){
 Serial.print( "a = " );
 Serial.println( a );
}