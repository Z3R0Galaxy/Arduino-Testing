#include "Arduino_LED_Matrix.h"   
ArduinoLEDMatrix matrix1;

void Asetup() {
  Serial.begin(115200);
  matrix1.loadSequence(LEDMATRIX_ANIMATION_DVD);
  matrix1.begin();
  matrix1.play(true);
}

void Aloop() {
}