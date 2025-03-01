#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

// Función para mostrar un dato entero
void mostrarDato(PtrDato dato) {
    printf("%d -> ", *(int*)dato);
}

int main() {
    PtrLista listaOriginal = crearLista();

    // Insertamos algunos elementos
    int* dato1 = (int*)malloc(sizeof(int));
    *dato1 = 10;
    insertarAlFinal(listaOriginal, dato1);

    int* dato2 = (int*)malloc(sizeof(int));
    *dato2 = 20;
    insertarAlFinal(listaOriginal, dato2);

    int* dato3 = (int*)malloc(sizeof(int));
    *dato3 = 30;
    insertarAlFinal(listaOriginal, dato3);

    printf("Lista original: ");
    mostrarLista(listaOriginal, mostrarDato);
    printf("NULL\n");

    // Duplicamos la lista
    PtrLista listaDuplicada = duplicarLista(listaOriginal);

    printf("Lista duplicada: ");
    mostrarLista(listaDuplicada, mostrarDato);
    printf("NULL\n");

    return 0;
}

