
// Import libraries
#include <Adafruit_NeoPixel.h>

// Define pin and number of NeoPixels
int neoPin = 6
int numberPixels = 256

// Initialize NeoPixels 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(
  NUMPIXELS, neoPin, NEO_GRB + NEO_KHZ800);

// Define the lenght of delay between changing pixels
int delayLength = 20;

// The setup function runs once when you press reset or power the board
void setup() {

  pixels.begin();
  pixels.show();

}

// The loop function runs over and over again forever
void loop() {
  
  // Change pixels to red
  for(int i=0; i<numberPixels;i++) {
    
    pixels.setPixelColor(i,pixels.Color(5,0,0));
    pixels.show();
    
    delay(delayLength);
    
  }
  
  // Change pixels to blue
  for(int i=0; i<numberPixels;i++) {
    
    pixels.setPixelColor(i,pixels.Color(0,0,5));
    pixels.show();
    
    delay(delayLength);
    
  }

}