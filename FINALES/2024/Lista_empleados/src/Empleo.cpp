#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleo.h"

Empleo *crear_empleo(const char *nombre_empresa) {
    Empleo *nuevo = (Empleo *)malloc(sizeof(Empleo));
    strcpy(nuevo->nombre_empresa, nombre_empresa);
    nuevo->empleados = crear_lista();
    return nuevo;
}

void mostrar_empleo(Empleo *empleo) {
    printf("Empresa: %s\n", empleo->nombre_empresa);
    mostrar_lista(empleo->empleados, mostrar_empleado);
}

void liberar_empleo(Empleo *empleo) {
    liberar_lista(empleo->empleados, liberar_empleado);
    free(empleo);
}
