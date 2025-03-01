#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

PtrLista crearLista() {
    PtrLista lista = (PtrLista)malloc(sizeof(Lista));
    lista->primero = NULL;
    return lista;
}

void insertarOrdenado(PtrLista lista, PtrDato dato, int (*comparar)(PtrDato, PtrDato)) {
    PtrNodo nuevoNodo = (PtrNodo)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;

    PtrNodo actual = lista->primero;
    PtrNodo anterior = NULL;

    while (actual != NULL && comparar(actual->dato, dato) < 0) {
        anterior = actual;
        actual = actual->sgte;
    }

    if (anterior == NULL) {
        nuevoNodo->sgte = lista->primero;
        lista->primero = nuevoNodo;
    } else {
        nuevoNodo->sgte = actual;
        anterior->sgte = nuevoNodo;
    }
}

void mostrarLista(PtrLista lista, void (*mostrarDato)(PtrDato dato)) {
    PtrNodo actual = lista->primero;

    while (actual != NULL) {
        mostrarDato(actual->dato);
        actual = actual->sgte;
    }
}

