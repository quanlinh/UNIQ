// source: http://www.learningaboutelectronics.com/Articles/Arduino-motion-sensor-light-circuit.php
//code for motion sensor circuit

#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 150

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 12
//#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

//void setup() { 
//      // Uncomment/edit one of the following lines for your leds arrangement.
//      // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
//      FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
//      // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
//      
//      // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<APA102, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<DOTSTAR, RGB>(leds, NUM_LEDS);
//
//      // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
//      // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
//}

//void loop() { 
//  // Turn the LED on, then pause
//  leds[0] = CRGB::Red;
//  FastLED.show();
//  delay(500);
//  // Now turn the LED off, then pause
//  leds[0] = CRGB::Black;
//  FastLED.show();
//  delay(500);
//}
const int ledPin= 13;
const int ledStripPin = 12;
const int inputPin2= 2;
const int inputPin3 = 3;
const int inputPin4 = 4;
//const int ledPin10 = 10;
//const int ledPin11 = 11;

void setup(){
FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
pinMode(ledPin, OUTPUT);
pinMode(inputPin2, INPUT);
pinMode(inputPin3,INPUT);
pinMode(inputPin4,INPUT);
}

void loop(){
int value2= digitalRead(inputPin2);
int value3= digitalRead(inputPin3);
int value4= digitalRead(inputPin4);
 // Turn the LED on, then pause
//  leds[0] = CRGB::Red;
//  leds[1] = CRGB::Red;
//  for(int i = 0,j = 29; i < j; i++,j--) 
//  {
//    leds[i] = CRGB::Red;
//    leds[j] = CRGB::Blue;
//    FastLED.show();
//      delay(200);
//
//  }
  // Now turn the LED off, then pause
  
  //leds[0] = CRGB::Black;
  //leds[1] = CRGB::Black;
  //-------
//   for(int i = 14,j = 15; i >=0 && j < 30; i--,j++) 
//  {
//    leds[i] = CRGB::Black;
//    leds[j] = CRGB::Black;
//    FastLED.show();
//      delay(200);
//
//  }
    //-------

//  for(int i = 0; i < 30; i++) 
//  {
//    leds[i] = CRGB::Black;
//    FastLED.show();
//      delay(500);
//
//  }
  //-------


if (value2 == HIGH || value3 == HIGH || value4 == HIGH)
{
//digitalWrite(ledPin, HIGH);


for(int i = 0,j = 29; i < j; i++,j--) 
  {
    leds[i] = CRGB::Red;
    leds[j] = CRGB::Blue;
    FastLED.show();
      delay(200);

  }

digitalWrite(ledPin, LOW);
 for(int i = 14,j = 15; i >=0 && j < 30; i--,j++) 
  {
    leds[i] = CRGB::Black;
    leds[j] = CRGB::Black;
    FastLED.show();
      delay(200);

  }

}
else
{
//digitalWrite(ledPin, LOW);
 for(int i = 14,j = 15; i >=0 && j < 30; i--,j++) 
  {
    leds[i] = CRGB::Black;
    leds[j] = CRGB::Black;
    FastLED.show();
      delay(200);

  }
}
}
