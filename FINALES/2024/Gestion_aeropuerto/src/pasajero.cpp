#include "Pasajero.h"

Pasajero::Pasajero(string apellido, int dni, char ventanilla)
    : apellido(apellido), dni(dni), ventanilla(ventanilla) {}

string Pasajero::getApellido() const {
    return apellido;
}

int Pasajero::getDNI() const {
    return dni;
}

char Pasajero::getVentanilla() const {
    return ventanilla;
}
