#include "lcd.h"  
#include "rgb.h"
#include "gps.h"

GPSData gpsData;
bool gpsListo = false;  // Variable para controlar si el GPS está listo

void setup() {
  lcd_inicializar();
  rgb_inicializar();

  Serial.begin(115200);
  gpsSerial.begin(9600);
}

void loop() {
  gps_velocidad(&gpsData);

  if(gpsData.velocidad != 0){
    if (!gpsListo) {
      lcd.clear();
      gpsListo = true;
    }

    char velocidad_str[10];
    dtostrf(gpsData.velocidad, 4, 2, velocidad_str);

    lcd_imprimir("Vel en Km/h: ", 0, 0);
    lcd_imprimir(velocidad_str, 0, 1);
    rgb_color_velocidad(gpsData.velocidad); 
  }
  else{
    if (gpsListo) {
      lcd.clear();
      gpsListo = false;
    }
    lcd_imprimir("Esperando GPS", 0, 0);
  }
}
