#include "lcd.h"  
#include "rgb.h"
#include "gps.h"

GPSData gpsData;

void setup() {
  lcd_inicializar();
  rgb_inicializar();

  lcd_imprimir("Hanzeel guapo", 0, 0);

  Serial.begin(115200);
  gpsSerial.begin(9600);
}

void loop() {
  //rgb_test();
  gps_coordenadas(&gpsData);
  gps_velocidad(&gpsData);

  // Acceder a los datos actualizados
  Serial.print("Latitud: ");
  Serial.println(gpsData.latitud, 6);

  Serial.print("Longitud: ");
  Serial.println(gpsData.longitud, 6);

  Serial.print("Velocidad (km/h): ");
  Serial.println(gpsData.velocidad, 2);
}
