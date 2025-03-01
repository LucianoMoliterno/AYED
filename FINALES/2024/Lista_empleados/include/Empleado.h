#ifndef EMPLEADO_H
#define EMPLEADO_H

typedef struct {
    int id;
    char nombre[50];
    float salario;
} Empleado;

Empleado *crear_empleado(int id, const char *nombre, float salario);
void mostrar_empleado(void *dato);
float obtener_salario(void *dato);
void liberar_empleado(void *dato);

#endif
