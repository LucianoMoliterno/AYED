#ifndef ESTADIO_H
#define ESTADIO_H

#include <string>

// Definimos la estructura del estadio
struct Estadio {
    std::string nombre;
    int capacidad;
    std::string ciudad;
};

// Prototipos de funciones
Estadio crearEstadio(const std::string& nombre, int capacidad, const std::string& ciudad);
void mostrarEstadio(const Estadio& estadio);

#endif

