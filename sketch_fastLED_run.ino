#include <FastLED.h>

#define NUM_LEDS  690
#define LED_PIN   8

CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(9600); // Initialize serial communication
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(70);
}

void loop() {
  if (Serial.available()) {
    char input = Serial.read(); // Read input from serial monitor
    switch (input) {
      case '1':
        setLEDColor(CRGB::Red);
        break;
      case '2':
        setLEDColor(CRGB::Green);
        break;
      case '3':
        setLEDColor(CRGB::Blue);
        break;
      case '4':
        setLEDColor(CRGB::Purple);
        break;
      case '5':
        setLEDColor(CRGB::Orange);
        break;
      case '6':
        setLEDColor(CRGB::White);
        break;
      case '7':
        setLEDColor(CRGB::Black);
        break;
      default:
        // Invalid input, do nothing
        break;
    }
  }
}

void setLEDColor(CRGB color) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;
    FastLED.show();
    delay(100);
    leds[i] = CRGB::Black;
  }
for(int i = NUM_LEDS - 1; i >= 0; i--) {
    leds[i] = color;
    FastLED.show();
    delay(100);
    leds[i] = CRGB::Black;
  }

}