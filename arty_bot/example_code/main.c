#include "arty_font.h"

void setup() {
  Serial.begin(9600);      // open the serial port at 9600 bps:
}

void loop() {
    Serial.print("Required Length ");
    Serial.println(requiredLengthCalc(0.0, 0.0), DEC);
    delay(100);
}
