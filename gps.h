#ifndef GPS_H
#define GPS_H

#include <NMEAGPS.h>
#include <SoftwareSerial.h>

#define RXpin 17
#define TXpin 16

extern SoftwareSerial gpsSerial;
extern NMEAGPS gps;

struct GPSData {
  float latitud;
  float longitud;
  float velocidad;
};

void gps_coordenadas(GPSData *data);
void gps_velocidad(GPSData *data);
#endif