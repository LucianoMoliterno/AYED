#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

PtrLista crearLista() {
    PtrLista lista = (PtrLista)malloc(sizeof(ListaE));
    lista->primero = NULL;
    return lista;
}

PtrNodo crearNodo(PtrDato dato) {
    PtrNodo nuevoNodo = (PtrNodo)malloc(sizeof(NodoE));
    nuevoNodo->dato = dato;
    nuevoNodo->sgte = NULL;
    return nuevoNodo;
}

void insertarAlFinal(PtrLista lista, PtrDato dato) {
    PtrNodo nuevoNodo = crearNodo(dato);

    if (lista->primero == NULL) {
        lista->primero = nuevoNodo;
    } else {
        PtrNodo temp = lista->primero;
        while (temp->sgte != NULL) {
            temp = temp->sgte;
        }
        temp->sgte = nuevoNodo;
    }
}

PtrLista duplicarLista(PtrLista lista) {
    PtrLista nuevaLista = crearLista();

    PtrNodo actual = lista->primero;
    while (actual != NULL) {
        // Insertamos una copia del dato en la nueva lista
        PtrDato nuevoDato = actual->dato;  // Supongamos que el dato es directamente duplicable.
        insertarAlFinal(nuevaLista, nuevoDato);

        actual = actual->sgte;
    }

    return nuevaLista;
}

void mostrarLista(PtrLista lista, void (*mostrarDato)(PtrDato dato)) {
    PtrNodo actual = lista->primero;
    while (actual != NULL) {
        mostrarDato(actual->dato);
        actual = actual->sgte;
    }
}
