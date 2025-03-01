#include <stdio.h>
#include <stdlib.h>
#include "empleo.h"

int main() {
    Empleo *empresa = crear_empleo("TechCorp");

    agregar_a_lista(empresa->empleados, crear_empleado(1, "Alice", 5500));
    agregar_a_lista(empresa->empleados, crear_empleado(2, "Bob", 7200));
    agregar_a_lista(empresa->empleados, crear_empleado(3, "Charlie", 6400));
    agregar_a_lista(empresa->empleados, crear_empleado(4, "David", 8000));

    printf("\n--- Empleados iniciales ---\n");
    mostrar_empleo(empresa);

    eliminar_mayor(empresa->empleados, obtener_salario);

    printf("\n--- Despues de eliminar el mayor salario ---\n");
    mostrar_empleo(empresa);

    float suma = 0;
    int count = 0;
    Nodo *actual = empresa->empleados->inicio;
    while (actual) {
        suma += obtener_salario(actual->dato);
        count++;
        actual = actual->siguiente;
    }
    float promedio = suma / count;
    printf("\nSalario promedio: %.2f\n", promedio);

    Empleado *cercano = (Empleado *)obtener_mas_cercano(empresa->empleados, promedio, obtener_salario);
    printf("Empleado con salario mas cercano al promedio: %s (%.2f)\n", cercano->nombre, cercano->salario);

    liberar_empleo(empresa);
    return 0;
}
