#ifndef LCD_H
#define LCD_H

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define lcd_address 0x27
#define lcd_c 16
#define lcd_f 2

extern LiquidCrystal_I2C lcd;

void lcd_inicializar();
void lcd_imprimir(char *mensaje, int col, int fil);

#endif