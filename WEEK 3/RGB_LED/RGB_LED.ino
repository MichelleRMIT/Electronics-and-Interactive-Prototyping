#include <FastLED.h>
#define NUM_LEDS 8
#define DATA_PIN 2

CRGBArray<NUM_LEDS> leds;

void setup() { 
    FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS); 

 }

void loop(){ 

    static uint8_t hue;

    for(int i = 0; i < NUM_LEDS; i++) { 
        leds[i] = CRGB(0,0,255); // Set RGB colours
      //leds[i] = CHSV(hue++,255,255); //scroll through colours       
      // FastLED.delay(33);

    }
FastLED.show();

}