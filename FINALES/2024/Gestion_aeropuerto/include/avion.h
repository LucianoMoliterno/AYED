#ifndef AVION_H
#define AVION_H

#include "Pasajero.h"
#include "Destino.h"
#include <vector>
using namespace std;

class Avion {
private:
    string tipo;
    string matricula;
    int capacidad;
    vector<Pasajero> pasajeros;
    vector<Destino> destinos;

public:
    Avion(string tipo, string matricula, int capacidad);
    void agregarPasajero(const Pasajero& pasajero);
    void eliminarPasajerosVentanilla();
    void agregarDestino(const Destino& destino);
    float calcularDistanciaRecorrida() const;
    void mostrarAvion() const;
};

#endif // AVION_H
