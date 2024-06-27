#include "gps.h"

SoftwareSerial gpsSerial(RXpin, TXpin);
NMEAGPS gps;

void gps_coordenadas(GPSData *data){
  if(gps.available(gpsSerial)){
    gps_fix fix = gps.read();

    if (fix.valid.location) {
      data->latitud = fix.latitude();
      data->longitud = fix.longitude();

      /*
      Serial.print("data->Latitud: ");
      Serial.println(data->latitud, 6);
      Serial.print("data->Longitud: ");
      Serial.println(data->longitud, 6);
      */
    }
  }
}

void gps_velocidad(GPSData *data){
  if(gps.available(gpsSerial)){
    gps_fix fix = gps.read();
    
    if (fix.valid.speed) {
      data->velocidad = fix.speed_kph();
      /*
      Serial.print("Velocidad (km/h): ");
      Serial.println(data->velocidad, 2); 
      */
    }
  }
}