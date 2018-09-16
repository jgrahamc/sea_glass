// sea_glass
//
// Copyright (c) 2018 John Graham-Cumming
//
// Makes four LEDs from an AdaFruit NeoPixel strip "breath" in white
// as part of a small lamp made from a glass and white, green and brown
// pieces of sea glass found on a beach.

#include <Adafruit_NeoPixel.h>

#define PIN 0
Adafruit_NeoPixel strip = Adafruit_NeoPixel(4, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

// Formula for breathing from...
//     https://sean.voisen.org/blog/2011/10/breathing-led-with-arduino/

void loop() {
  float val = (exp(sin(millis()*0.5/2000.0*PI)) - 0.36787944)*108.0;
  
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(val, val, val));
  }
  
  strip.show();
}
