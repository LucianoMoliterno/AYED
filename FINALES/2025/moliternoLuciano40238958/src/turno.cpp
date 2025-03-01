#include "turno.h"
#include <iostream>

Turno::Turno(std::string nombre, std::string franjaHoraria)
    : nombre(nombre), franjaHoraria(franjaHoraria) {}

void Turno::agregarDocente(const Docente& docente) {
    docentes.push_back(docente);
}

void Turno::mostrarInfo() const {
    std::cout << "Turno: " << nombre << " (" << franjaHoraria << ")" << std::endl;
    for (const auto& docente : docentes) {
        docente.mostrarInfo();
    }
}
