#include "escuela.h"
#include <algorithm>
#include <numeric>
#include <iostream>

Escuela::Escuela(std::string nombre, std::string direccion, std::string telefono)
    : nombre(nombre), direccion(direccion), telefono(telefono) {}

void Escuela::agregarTurno(const Turno& turno) {
    turnos.push_back(turno);
}

void Escuela::mostrarInformacion() const {
    std::cout << "Escuela: " << nombre << std::endl;
    std::cout << "Direccion: " << direccion << std::endl;
    std::cout << "Telefono: " << telefono << std::endl;
    for (const auto& turno : turnos) {
        turno.mostrarInfo();
    }
}

double Escuela::calcularPromedioSueldos() const {
    std::unordered_set<std::string> docentesUnicos;
    double totalSueldos = 0.0;
    int contador = 0;

    for (const auto& turno : turnos) {
        for (const auto& docente : turno.docentes) {
            if (docentesUnicos.find(docente.nombre) == docentesUnicos.end()) {
                docentesUnicos.insert(docente.nombre);
                totalSueldos += docente.sueldo;
                contador++;
            }
        }
    }

    return (contador > 0) ? totalSueldos / contador : 0.0;
}

void Escuela::eliminarDocentesMenoresDe30() {
    for (auto& turno : turnos) {
        auto& docentes = turno.docentes;
        docentes.erase(std::remove_if(docentes.begin(), docentes.end(),
            [](const Docente& docente) { return docente.edad < 30; }), docentes.end());
    }
}

