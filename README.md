# Arduino and a Neopixel Ring

A basic example of controlling a NeoPixel ring using an Arduino.

## Arduino Code

Open up [Arduino Create](https://create.arduino.cc/editor/) and add the following code:

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

> [View the Arduino code on Arduino Create](https://create.arduino.cc/editor/professoradam/457c1bce-ed38-41cc-b448-c60ab2faad93/preview)

You will need to setup the following circuit using your Arduino:

![Tinkercad Circuit](_readme/tinkercad-neopixel-ring.png)

> [View the Circuit on Tinkercad](https://www.tinkercad.com/things/aJU4HME0WBN)

> Full tutorial URL:  
> https://codeadam.ca/learning/arduino-neopixel-ring.html

---

## Repo Resources

- [Visual Studio Code](https://code.visualstudio.com/)
- [Arduino Create](https://create.arduino.cc/editor)

<br>
<a href="https://codeadam.ca">
<img src="https://cdn.codeadam.ca/images@1.0.0/codeadam-logo-coloured-horizontal.png" width="200">
</a>
