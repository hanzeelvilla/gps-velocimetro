#include "esp32-hal.h"
#include "rgb.h"

void rgb_inicializar(){
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void rgb_cambiar_color(int r, int g, int b){
  analogWrite(ledR, r);
  analogWrite(ledG, g);
  analogWrite(ledB, b);
}

void rgb_test(){
  rgb_cambiar_color(verde);
  delay(1000);

  rgb_cambiar_color(azul);
  delay(1000);

  rgb_cambiar_color(amarillo);
  delay(1000);

  rgb_cambiar_color(naranja);
  delay(1000);

  rgb_cambiar_color(rojo);
  delay(1000);

  rgb_cambiar_color(apagado);
  delay(1000);
}

void rgb_color_velocidad(float velocidad){
  if(velocidad < 10)
    rgb_cambiar_color(verde);
  else if(velocidad < 30)
    rgb_cambiar_color(azul);
  else if(velocidad < 60)
    rgb_cambiar_color(amarillo);
  else if(velocidad < 80)
    rgb_cambiar_color(naranja);
  else
   rgb_cambiar_color(rojo);
}
