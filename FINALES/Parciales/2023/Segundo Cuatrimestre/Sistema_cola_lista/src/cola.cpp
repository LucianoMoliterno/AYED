#include "cola.h"
#include <stdlib.h>
#include <stdio.h>

PtrCola crearCola() {
    PtrCola cola = (PtrCola)malloc(sizeof(Cola));
    cola->primero = NULL;
    cola->ultimo = NULL;
    return cola;
}

void encolar(PtrCola cola, PtrDato dato) {
    PtrNodo nuevoNodo = (PtrNodo)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->sgte = NULL;

    if (cola->ultimo == NULL) {
        cola->primero = nuevoNodo;
    } else {
        cola->ultimo->sgte = nuevoNodo;
    }
    cola->ultimo = nuevoNodo;
}

PtrDato desencolar(PtrCola cola) {
    if (colaVacia(cola)) {
        return NULL;
    }

    PtrNodo nodoAEliminar = cola->primero;
    PtrDato dato = nodoAEliminar->dato;

    cola->primero = nodoAEliminar->sgte;
    if (cola->primero == NULL) {
        cola->ultimo = NULL;
    }

    free(nodoAEliminar);
    return dato;
}

bool colaVacia(PtrCola cola) {
    return cola->primero == NULL;
}
