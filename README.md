# arduino-neopixel-ring

A basic example of controlling a NeoPixel ring using an Arduino.

```csharp
#include <Adafruit_NeoPixel.h>

#define PIN 6

#define NUMPIXELS 16

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(
  NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayLength = 100;

void setup() {

  pixels.begin();
  pixels.show();

}

void loop() {
  
  for(int i=0; i<NUMPIXELS;i++) {
    
    pixels.setPixelColor(i,pixels.Color(20,0,0));
    pixels.show();
    
    delay(delayLength);
    
  }
  
  for(int i=0; i<NUMPIXELS;i++) {
    
    pixels.setPixelColor(i,pixels.Color(0,0,20));
    pixels.show();
    
    delay(delayLength);
    
  }

}
```
