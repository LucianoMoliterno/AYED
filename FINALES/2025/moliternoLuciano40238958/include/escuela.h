#ifndef ESCUELA_H
#define ESCUELA_H

#include <string>
#include <vector>
#include <unordered_set>
#include "turno.h"

class Escuela {
public:
    std::string nombre;
    std::string direccion;
    std::string telefono;
    std::vector<Turno> turnos;

    Escuela(std::string nombre, std::string direccion, std::string telefono);
    void agregarTurno(const Turno& turno);
    void mostrarInformacion() const;
    double calcularPromedioSueldos() const;
    void eliminarDocentesMenoresDe30();
};

#endif
