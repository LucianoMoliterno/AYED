#include "Departamento.h"
#include <iostream>
using namespace std;

int main() {
    // Declaración del objeto Departamento
    Departamento dep1;

    // Datos de ejemplo para inicializar el Departamento
    int carreras[] = {101, 102, 103, 104}; // IDs de carreras
    int numCarreras = 4;

    // Crear el Departamento con los datos proporcionados
    crearDepartamento(dep1, 1, "Ciencias Exactas", "Dr. Perez", "Departamento dedicado a la investigación en ciencias exactas.", carreras, numCarreras);

    // Mostrar la información del Departamento
    cout << "Información del Departamento:" << endl;
    mostrarDepartamento(dep1, numCarreras);

    return 0;
}
