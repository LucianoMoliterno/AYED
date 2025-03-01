#ifndef DOCENTE_H
#define DOCENTE_H

#include <string>

class Docente {
public:
    std::string nombre;
    int edad;
    std::string especialidad;
    double sueldo;

    Docente(std::string nombre, int edad, std::string especialidad, double sueldo);
    void mostrarInfo() const;
};

#endif
