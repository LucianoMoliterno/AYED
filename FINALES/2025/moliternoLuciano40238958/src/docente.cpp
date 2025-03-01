#include "docente.h"
#include <iostream>

Docente::Docente(std::string nombre, int edad, std::string especialidad, double sueldo)
    : nombre(nombre), edad(edad), especialidad(especialidad), sueldo(sueldo) {}

void Docente::mostrarInfo() const {
    std::cout << "Nombre: " << nombre << ", Edad: " << edad
              << ", Especialidad: " << especialidad << ", Sueldo: $" << sueldo << std::endl;
}
