#include <LedControl.h>

const int DIN_PIN = 11;
const int CS_PIN = 10;
const int CLK_PIN = 13;
const int NUM_DEVICES = 1;  // Number of MAX7219 modules

LedControl lc = LedControl(DIN_PIN, CLK_PIN, CS_PIN, NUM_DEVICES);

void setup() {
  // Initialize the MAX7219 module
  lc.shutdown(0, false);  // Wake up displays
  lc.setIntensity(0, 8);  // Set brightness level (0 is min, 15 is max)
  lc.clearDisplay(0);     // Clear display register
}

void loop() {
  // Display a smiley face
  lc.setRow(0, 2, B01100110);
  lc.setRow(0, 1, B01100110);
  lc.setRow(0, 4, B01000010);
  lc.setRow(0, 5, B01000010);
  lc.setRow(0, 6, B00111100);
}
