#include "../include/lista.h"
#include <iostream>

int main() {
    // Crear la lista de estadios
    Lista lista = crearLista();

    // Agregar estadios a la lista
    agregarEstadio(lista, crearEstadio("Khalifa", 40000, "Doha"));
    agregarEstadio(lista, crearEstadio("Al Bayt", 60000, "Al Kohr"));
    agregarEstadio(lista, crearEstadio("Al Janoub", 50000, "Al Wakrah"));
    agregarEstadio(lista, crearEstadio("Florencio Sola", 34000, "Banfield"));

    // Mostrar la lista original
    std::cout << "Lista Original:" << std::endl;
    mostrarLista(lista);

    // Crear una copia de la lista y mostrarla
    Lista copia = copiarLista(lista);
    std::cout << "\nCopia de la Lista:" << std::endl;
    mostrarLista(copia);

    // Ordenar la lista original por nombre y mostrarla
    ordenarListaPorNombre(lista);
    std::cout << "\nLista Ordenada por Nombre:" << std::endl;
    mostrarLista(lista);

    // Insertar un nuevo estadio en la copia de forma ordenada
    agregarEstadio(copia, crearEstadio("Nestor Diaz Perez", 47000, "Lanus"));
    ordenarListaPorNombre(copia);
    std::cout << "\nCopia con Nuevo Estadio Ordenada:" << std::endl;
    mostrarLista(copia);

    // Liberar memoria
    for (void* ptr : lista) delete static_cast<Estadio*>(ptr);
    for (void* ptr : copia) delete static_cast<Estadio*>(ptr);

    return 0;
}
