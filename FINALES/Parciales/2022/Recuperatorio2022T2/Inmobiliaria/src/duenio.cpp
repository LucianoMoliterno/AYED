#include "duenio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Duenio* crearDuenio(const char* nombre, int dni) {
    Duenio* nuevo = (Duenio*)malloc(sizeof(Duenio));
    strcpy(nuevo->nombre, nombre);
    nuevo->dni = dni;
    nuevo->listaViviendas = crearLista();
    return nuevo;
}

void mostrarDuenio(Duenio* duenio) {
    printf("--------DUENO------\n");
    printf("NOMBRE: %s ---- DNI: %d\n", duenio->nombre, duenio->dni);
    if (duenio->listaViviendas->cabeza == NULL) {
        printf("Sin viviendas!!!.\n");
    } else {
        mostrarLista(duenio->listaViviendas);
    }
}
