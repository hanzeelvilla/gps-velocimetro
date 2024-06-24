#ifndef RGB_H
#define RGB_H

#define ledR 25
#define ledG 26
#define ledB 27

#define rojo 255, 0, 0
#define verde 0, 255, 0
#define azul 0, 0, 255
#define amarillo 255, 255, 0
#define naranja 255, 100, 0
#define apagado 0, 0, 0

void rgb_inicializar();
void rgb_cambiar_color(int r, int g, int b);
void rgb_test();
//void rgb_color_velocidad(int velocidad);

#endif