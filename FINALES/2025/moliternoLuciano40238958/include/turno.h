#ifndef TURNO_H
#define TURNO_H

#include <string>
#include <vector>
#include "docente.h"

class Turno {
public:
    std::string nombre;
    std::string franjaHoraria;
    std::vector<Docente> docentes;

    Turno(std::string nombre, std::string franjaHoraria);
    void agregarDocente(const Docente& docente);
    void mostrarInfo() const;
};

#endif
