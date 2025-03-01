#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"

Empleado *crear_empleado(int id, const char *nombre, float salario) {
    Empleado *nuevo = (Empleado *)malloc(sizeof(Empleado));
    nuevo->id = id;
    strcpy(nuevo->nombre, nombre);
    nuevo->salario = salario;
    return nuevo;
}

void mostrar_empleado(void *dato) {
    Empleado *e = (Empleado *)dato;
    printf("ID: %d, Nombre: %s, Salario: %.2f\n", e->id, e->nombre, e->salario);
}

float obtener_salario(void *dato) {
    return ((Empleado *)dato)->salario;
}

void liberar_empleado(void *dato) {
    free(dato);
}
