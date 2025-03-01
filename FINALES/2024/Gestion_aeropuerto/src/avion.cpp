#include "Avion.h"
#include <iostream>
#include <cmath>
using namespace std;

Avion::Avion(string tipo, string matricula, int capacidad)
    : tipo(tipo), matricula(matricula), capacidad(capacidad) {}

void Avion::agregarPasajero(const Pasajero& pasajero) {
    if (pasajeros.size() < capacidad) {
        pasajeros.push_back(pasajero);
    } else {
        cout << "Error: Capacidad del avión " << matricula << " superada." << endl;
    }
}

void Avion::eliminarPasajerosVentanilla() {
    vector<Pasajero> restantes;
    for (const auto& p : pasajeros) {
        if (p.getVentanilla() != 'S') {
            restantes.push_back(p);
        }
    }
    pasajeros = restantes;
}

void Avion::agregarDestino(const Destino& destino) {
    destinos.push_back(destino);
}

float Avion::calcularDistanciaRecorrida() const {
    if (destinos.size() < 2) return 0;

    float distanciaTotal = 0;
    for (size_t i = 1; i < destinos.size(); i++) {
        float x1 = destinos[i - 1].getLatitud(), y1 = destinos[i - 1].getLongitud();
        float x2 = destinos[i].getLatitud(), y2 = destinos[i].getLongitud();
        distanciaTotal += sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
    return distanciaTotal;
}

void Avion::mostrarAvion() const {
    cout << "  Avión: " << tipo << ", Matrícula: " << matricula << ", Capacidad: " << capacidad << endl;
    for (const auto& pasajero : pasajeros) {
        cout << "    Pasajero: " << pasajero.getApellido() << ", DNI: " << pasajero.getDNI() << ", Ventanilla: " << pasajero.getVentanilla() << endl;
    }
}
