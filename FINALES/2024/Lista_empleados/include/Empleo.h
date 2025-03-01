#ifndef EMPLEO_H
#define EMPLEO_H

#include "lista.h"
#include "empleado.h"

typedef struct {
    char nombre_empresa[100];
    Lista *empleados;
} Empleo;

Empleo *crear_empleo(const char *nombre_empresa);
void mostrar_empleo(Empleo *empleo);
void liberar_empleo(Empleo *empleo);

#endif
