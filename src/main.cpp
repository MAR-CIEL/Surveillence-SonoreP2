#include <Arduino.h>
#include <Wire.h>
#include <SSD1306.h>

SSD1306 ecranOled(0x3c, 5, 4);

void setup() {
  ecranOled.init();
  ecranOled.clear();
  ecranOled.setFont(ArialMT_Plain_10);
  ecranOled.drawString(0, 0, "Alexandre et Axel");
  ecranOled.display();
}

void loop() {
}
