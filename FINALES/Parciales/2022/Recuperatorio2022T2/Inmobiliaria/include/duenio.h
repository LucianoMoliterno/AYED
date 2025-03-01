#ifndef DUENIO_H
#define DUENIO_H

#include "lista.h"

typedef struct {
    char nombre[50];
    int dni;
    Lista* listaViviendas;
} Duenio;

Duenio* crearDuenio(const char* nombre, int dni);
void mostrarDuenio(Duenio* duenio);

#endif
