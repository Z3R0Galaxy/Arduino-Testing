#include <Arduino.h>

void heartSetup();
void heartLoop();
void Asetup();
void textSetup();
void textLoop();

void setup() {
  textSetup();
}

void loop() {
  textLoop();
}