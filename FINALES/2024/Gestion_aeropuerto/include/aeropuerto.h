#ifndef AEROPUERTO_H
#define AEROPUERTO_H

#include "Avion.h"
#include <vector>
using namespace std;

class Aeropuerto {
private:
    string nombre;
    string direccion;
    string telefono;
    vector<Avion> aviones;

public:
    Aeropuerto(string nombre, string direccion, string telefono);
    void agregarAvion(const Avion& avion);
    void mostrarAeropuerto() const;
    vector<Avion>& getAviones(); // Para modificar aviones
};

#endif // AEROPUERTO_H
