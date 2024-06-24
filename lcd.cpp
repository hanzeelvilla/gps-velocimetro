#include "lcd.h"

LiquidCrystal_I2C lcd(lcd_address, lcd_c, lcd_f);

void lcd_inicializar(){
    lcd.init();
    lcd.backlight();
}

void lcd_imprimir(char *mensaje, int col, int fil){
    lcd.setCursor(col, fil);
    lcd.print(mensaje);
}