#ifndef VIVIENDA_H
#define VIVIENDA_H

typedef struct {
    int id;
    float precio;
    int metrosCuadrados;
    char direccion[100];
} Vivienda;

Vivienda* crearVivienda(int id, float precio, int metrosCuadrados, const char* direccion);
void mostrarVivienda(Vivienda* vivienda);

#endif
