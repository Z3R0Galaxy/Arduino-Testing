#include "ArduinoGraphics.h"
#include "Arduino_LED_Matrix.h"
ArduinoLEDMatrix matrix2;

void textSetup() {
    Serial.begin(115200);
    matrix2.begin();
}

void textLoop() {
    matrix2.beginDraw();
    matrix2.stroke(0xFFFFFFFF);
    matrix2.textScrollSpeed(100);
    const char text[] = "  Hello  ";
    matrix2.textFont(Font_5x7);
    matrix2.beginText(0, 1, 0xFFFFFF);
    matrix2.println(text);
    matrix2.endText(SCROLL_LEFT);
    matrix2.endDraw();
}