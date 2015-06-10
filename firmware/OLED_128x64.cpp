#include "OLED_128x64.h"

OLED_128x64::OLED_128x64() : Adafruit_ssd1306syp(0, 1) {
  // Spark's pins are always:
  // SDA: D0
  // SCL: D1
}
