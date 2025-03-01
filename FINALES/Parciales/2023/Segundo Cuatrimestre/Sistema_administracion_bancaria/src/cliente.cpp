#include "cliente.h"

Cliente::Cliente(std::string nom, std::string tur, int hr) {
    nombre = nom;
    turno = tur;
    hora = hr;
}

void Cliente::setNombre(std::string nom) { nombre = nom; }
void Cliente::setTurno(std::string tur) { turno = tur; }
void Cliente::setHora(int hr) { hora = hr; }
std::string Cliente::getNombre() { return nombre; }
std::string Cliente::getTurno() { return turno; }
int Cliente::getHora() { return hora; }
