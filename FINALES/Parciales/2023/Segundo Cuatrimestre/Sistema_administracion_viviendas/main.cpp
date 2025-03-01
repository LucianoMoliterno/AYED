#include "lista.h"
#include <iostream>
using namespace std;

int main() {
    printf("------- PARCIAL AYED -------\n");

    ///Crea las instancias de las 4 viviendas a insertar
    Vivienda *v1 = new Vivienda(12, 1100000, 45, "Peron 1500 4A");
    Vivienda *v2 = new Vivienda(121, 2100000, 90, "Alfonsin 178");
    Vivienda *v3 = new Vivienda(9006, 100000, 20, "Corrientes 1001");
    Vivienda *v4 = new Vivienda(3, 35100000, 145, "Alsina 11");

    ///Genera una lista void
    Lista lista = crearLista();

    ///Inserta las 4 viviendas una por una en orden (id)
    insertarOrdenadoId(lista, v1);  // Quitamos el operador &
    insertarOrdenadoId(lista, v2);  // Quitamos el operador &
    insertarOrdenadoId(lista, v3);  // Quitamos el operador &
    insertarOrdenadoId(lista, v4);  // Quitamos el operador &

    ///Muestra la lista original
    printf("------- Lista original -------\n");
    mostrarLista(lista);

    ///Se duplica la lista
    Lista duplicado = duplicarLista(lista);

    ///Se muestra la lista duplicada
    printf("------- Lista duplicada -------\n");
    mostrarLista(duplicado);

    ///Ordena el duplicado por precio
    ordenarListaPrecio(duplicado);
    printf("------- Luego de ordenar por precio\n -------\n");

    ///Muestra ambas listas para ver que solo se ordena el duplicado y no la original
    printf("------- Lista original -------\n");
    mostrarLista(lista);

    printf("------- Lista duplicada -------\n");
    mostrarLista(duplicado);

    return 0;
}
