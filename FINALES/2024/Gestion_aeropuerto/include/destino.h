#ifndef DESTINO_H
#define DESTINO_H

#include <string>
using namespace std;

class Destino {
private:
    string ciudad;
    float latitud;
    float longitud;

public:
    Destino(string ciudad, float latitud, float longitud);
    string getCiudad() const;
    float getLatitud() const;
    float getLongitud() const;
};

#endif // DESTINO_H
