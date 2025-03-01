#include "vivienda.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Vivienda* crearVivienda(int id, float precio, int metrosCuadrados, const char* direccion) {
    Vivienda* nueva = (Vivienda*)malloc(sizeof(Vivienda));
    nueva->id = id;
    nueva->precio = precio;
    nueva->metrosCuadrados = metrosCuadrados;
    strcpy(nueva->direccion, direccion);
    return nueva;
}

void mostrarVivienda(Vivienda* vivienda) {
    if (vivienda != NULL) {
        printf("||Vivienda #%d\n", vivienda->id);
        printf("US$ %.2f ---- %d mt2\n", vivienda->precio, vivienda->metrosCuadrados);
        printf("ubicada en: %s\n", vivienda->direccion);
    }
}
