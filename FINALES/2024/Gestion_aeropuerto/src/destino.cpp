#include "Destino.h"

Destino::Destino(string ciudad, float latitud, float longitud)
    : ciudad(ciudad), latitud(latitud), longitud(longitud) {}

string Destino::getCiudad() const {
    return ciudad;
}

float Destino::getLatitud() const {
    return latitud;
}

float Destino::getLongitud() const {
    return longitud;
}
