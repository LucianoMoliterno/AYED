#include "Aeropuerto.h"
#include <iostream>
using namespace std;

Aeropuerto::Aeropuerto(string nombre, string direccion, string telefono)
    : nombre(nombre), direccion(direccion), telefono(telefono) {}

void Aeropuerto::agregarAvion(const Avion& avion) {
    aviones.push_back(avion);
}

void Aeropuerto::mostrarAeropuerto() const {
    cout << "Aeropuerto: " << nombre << ", Dirección: " << direccion << ", Teléfono: " << telefono << endl;
    for (const auto& avion : aviones) {
        avion.mostrarAvion();
    }
}

vector<Avion>& Aeropuerto::getAviones() {
    return aviones;
}
