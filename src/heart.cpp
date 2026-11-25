#include <Arduino_LED_Matrix.h>
#include <Arduino.h>
ArduinoLEDMatrix matrix;

const uint32_t big[] = {
    0x2,
    0x80540440,
    0x28010000,
    66
  };

const uint32_t small[] = {
    0xc612911,
    0x11010820,
    0x44028010,
    66
  };

void heartSetup() {
  Serial.begin(115200);
  matrix.begin();
}

void heartLoop() {
  matrix.loadFrame(big);
  delay(500);
  matrix.loadFrame(small);
  delay(500);
}