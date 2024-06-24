#include "lcd.h"
#include "rgb.h"

void setup() {
  lcd_inicializar();
  rgb_inicializar();

  lcd_imprimir("Hanzeel guapo", 0, 0);
}

void loop() {
  rgb_test();
}
