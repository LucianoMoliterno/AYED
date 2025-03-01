#include "Departamento.h"
#include <iostream>
using namespace std;

// Función para inicializar el Departamento
void crearDepartamento(Departamento &dep, int id, string nombre, string director, string descripcion, int carreras[], int numCarreras) {
    if (id <= 0) {
        cout << "Error: El ID del departamento debe ser mayor a cero." << endl;
        return;
    }
    dep.idDepartamento = id;
    dep.nombre = nombre;
    dep.director = director;
    dep.descripcion = descripcion;

    // Copiamos los IDs de las carreras al arreglo
    for (int i = 0; i < numCarreras && i < 10; i++) {
        dep.carreras[i] = carreras[i];
    }
}

// Función para mostrar los datos del Departamento
void mostrarDepartamento(const Departamento &dep, int numCarreras) {
    cout << "ID Departamento: " << dep.idDepartamento << endl;
    cout << "Nombre: " << dep.nombre << endl;
    cout << "Director: " << dep.director << endl;
    cout << "Descripcion: " << dep.descripcion << endl;

    cout << "Carreras Asociadas: ";
    for (int i = 0; i < numCarreras && i < 10; i++) {
        cout << dep.carreras[i] << " ";
    }
    cout << endl;
}
