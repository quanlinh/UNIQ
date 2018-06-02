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
const int inputPin2 = 2;
const int inputPin3 = 3;
const int inputPin4 = 4;
const int inputPin5 = 5;
const int inputPin6 = 6;

void setup(){
FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
pinMode(ledPin, OUTPUT);
pinMode(inputPin2, INPUT);
pinMode(inputPin3,INPUT);
pinMode(inputPin4,INPUT);
pinMode(inputPin5,INPUT);
pinMode(inputPin6,INPUT);
Serial.begin(9600);

}

void loop(){
  int value2= digitalRead(inputPin2);
  int value3= digitalRead(inputPin3);
  int value4= digitalRead(inputPin4);
  int value5= digitalRead(inputPin5);
  int value6= digitalRead(inputPin6);
   
  if (value2 == HIGH || value3 == HIGH || value4 == HIGH || value5 == HIGH || value6 == HIGH){
  Serial.print("entered if loop");
  
  //digitalWrite(ledPin, HIGH);
  
  // this code will turn on the lights
  int part1Start = 7;
  int part1End = 23 ;
  int part2Start = 37;
  int part2End = 53 ;
  int part3Start = 67;
  int part3End = 83 ;
  int part4Start = 97;
  int part4End = 113 ;
  int part5Start = 127;
  int part5End = 143 ;
  
  
  for(part1Start,part1End,part2Start,part2End,part3Start,part3End,part4Start,part4End,part5Start,part5End
        ; part1Start < part1End,part2Start < part2End,part3Start < part3End,part4Start < part4End,part5Start < part5End
        ; part1Start++,part1End--,part2Start++,part2End--,part3Start++,part3End--,part4Start++,part4End--,part5Start++,part5End--) 
    {
      leds[part1Start] = CRGB::Red;
      leds[part1End] = CRGB::Red;
      leds[part2Start] = CRGB::Yellow;
      leds[part2End] = CRGB::Yellow;
      leds[part3Start] = CRGB::Purple;
      leds[part3End] = CRGB::Purple;
      leds[part4Start] = CRGB::Blue;
      leds[part4End] = CRGB::Blue;
      leds[part5Start] = CRGB::Cyan;
      leds[part5End] = CRGB::Cyan;
      FastLED.show();
       delay(200);
    }
  
  // this code will turn off the lights from the midle
  part1Start = 7;
  part1End = 23 ;
  part2Start = 37;
  part2End = 53 ;
  part3Start = 67;
  part3End = 83 ;
  part4Start = 97;
  part4End = 113 ;
  part5Start = 127;
  part5End = 143 ;
  
  //digitalWrite(ledPin, LOW);
   for(int i = 14,j = 15, k = 44, l = 45, m=74, n=75, o=104, p=105, q = 134, r = 135; i >= part1Start && j < part1End, k >= part2Start && l < part2End,m >= part3Start && n < part3End, o >= part4Start 
   && p < part4End,q >= part5Start && r < part5End; i--,j++, k--, l++, m--, n++, o--, p++, q--, r++) 
    {
      leds[i] = CRGB::Black;
      leds[j] = CRGB::Black;
      leds[k] = CRGB::Black;
      leds[l] = CRGB::Black;
      leds[m] = CRGB::Black;
      leds[n] = CRGB::Black;
      leds[o] = CRGB::Black;
      leds[p] = CRGB::Black;
      leds[q] = CRGB::Black;
      leds[r] = CRGB::Black;
      FastLED.show();
        delay(200);
  
    }
    
  //delay(5000);
 // FastLED.clear();
 // value2 = digitalRead(inputPin2);
 //checks to see if motion is still being detected
 //if yes, continue lighting up
 //if no, turn off
  while(turnOff());  
  
  }
 
 
}

boolean turnOff(){
  int value2 = digitalRead(inputPin2);
  int value3 = digitalRead(inputPin3);
  int value4 = digitalRead(inputPin4);
  int value5 = digitalRead(inputPin5);
  int value6 = digitalRead(inputPin6);

 
  
  Serial.print("entered else loop");
  
  //FastLED.clear();
  if(value2 == HIGH || value3 == HIGH || value4 == HIGH || value5 == HIGH || value6 == HIGH){
   //keep lighting up, because there IS motion
   //turn on the lights  
    return true;
  }
  return false; 
}
  
 
