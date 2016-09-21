#include <FastLED.h>

#define DATA_PIN    6
#define NUM_LEDS    40
#define BRIGHTNESS  75
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup() {
FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  // Turn the LED on, then pause
  fill_gradient_RGB( leds, NUM_LEDS, CRGB :: Blue, CRGB :: Red);
  FastLED.show();
  delay(6000);
  // Now turn the LED off, then pause
  fill_solid (leds, NUM_LEDS, CRGB :: Black) ;
  FastLED.show();
  delay(1000);
}
