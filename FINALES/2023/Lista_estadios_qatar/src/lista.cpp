#include "../include/lista.h"
#include <iostream>
#include <algorithm>

// Crear una lista
Lista crearLista() {
    return Lista();
}

// Agregar un estadio a la lista
void agregarEstadio(Lista& lista, Estadio estadio) {
    Estadio* nuevo = new Estadio(estadio);
    lista.push_back(static_cast<void*>(nuevo));
}

// Mostrar la lista
void mostrarLista(const Lista& lista) {
    for (void* ptr : lista) {
        Estadio* estadio = static_cast<Estadio*>(ptr);
        mostrarEstadio(*estadio);
    }
}

// Copiar la lista
Lista copiarLista(const Lista& lista) {
    Lista copia;
    for (void* ptr : lista) {
        Estadio* estadio = static_cast<Estadio*>(ptr);
        agregarEstadio(copia, *estadio);
    }
    return copia;
}

// Ordenar la lista por nombre
void ordenarListaPorNombre(Lista& lista) {
    std::sort(lista.begin(), lista.end(), [](void* a, void* b) {
        Estadio* estadioA = static_cast<Estadio*>(a);
        Estadio* estadioB = static_cast<Estadio*>(b);
        return estadioA->nombre < estadioB->nombre;
    });
}
