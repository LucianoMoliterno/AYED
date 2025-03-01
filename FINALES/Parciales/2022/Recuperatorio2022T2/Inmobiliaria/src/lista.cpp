#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista* crearLista() {
    Lista* nuevaLista = (Lista*)malloc(sizeof(Lista));
    nuevaLista->cabeza = NULL;
    return nuevaLista;
}

void insertarInicio(Lista* lista, Vivienda* vivienda) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->vivienda = vivienda;
    nuevoNodo->siguiente = lista->cabeza;
    lista->cabeza = nuevoNodo;
}

void insertarFinal(Lista* lista, Vivienda* vivienda) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->vivienda = vivienda;
    nuevoNodo->siguiente = NULL;

    if (lista->cabeza == NULL) {
        lista->cabeza = nuevoNodo;
    } else {
        Nodo* temp = lista->cabeza;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

void insertarEnPosicion(Lista* lista, Vivienda* vivienda, int posicion) {
    if (posicion == 0) {
        insertarInicio(lista, vivienda);
        return;
    }

    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->vivienda = vivienda;

    Nodo* temp = lista->cabeza;
    for (int i = 0; i < posicion - 1 && temp != NULL; i++) {
        temp = temp->siguiente;
    }

    if (temp != NULL) {
        nuevoNodo->siguiente = temp->siguiente;
        temp->siguiente = nuevoNodo;
    }
}

void eliminarPorID(Lista* lista, int id) {
    Nodo* temp = lista->cabeza;
    Nodo* anterior = NULL;

    while (temp != NULL && temp->vivienda->id != id) {
        anterior = temp;
        temp = temp->siguiente;
    }

    if (temp != NULL) {
        if (anterior == NULL) {
            lista->cabeza = temp->siguiente;
        } else {
            anterior->siguiente = temp->siguiente;
        }
        free(temp->vivienda);
        free(temp);
    }
}

void mostrarLista(Lista* lista) {
    Nodo* temp = lista->cabeza;
    while (temp != NULL) {
        mostrarVivienda(temp->vivienda);
        temp = temp->siguiente;
    }
}
