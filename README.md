# arduino-neo-ring

A basic example of controlling a NeoPixel ring using an Arduino.

```csharp
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUMPIXELS 16

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100;

void setup() {

  pixels.begin();
  pixels.show();  
  
}

void loop() {

  for(int i=0;i<NUMPIXELS;i++) {

    pixels.setPixelColor(i,pixels.Color(0,0,255));
    pixels.show();

    delay(delayval);

  }
  
  for(int i=0;i<NUMPIXELS;i++) {

    pixels.setPixelColor(i,pixels.Color(0,255,0));
    pixels.show();

    delay(delayval);

  }
  
}
```
