#include <Arduino.h>
#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"
ArduinoLEDMatrix matrix3;

void Ssetup() {
    Serial.begin(115200);
    matrix3.begin();
}

void Sloop() {
    while (Serial.available() == 0) {}
    String input = Serial.readString();
    input.trim();
    matrix3.beginDraw();
    matrix3.stroke(0xFFFFFFFF);
    matrix3.textScrollSpeed(100);
    matrix3.textFont(Font_5x7);
    matrix3.beginText(11, 1, 0xFFFFFF);
    matrix3.println(input);
    matrix3.endText(SCROLL_LEFT);
    matrix3.endDraw();
}