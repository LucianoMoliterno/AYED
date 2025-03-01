#include "lista.h"
#include <iostream>
using namespace std;

Lista crearLista() {
    return NULL;
}

void insertarOrdenadoId(Lista& lista, Vivienda* v) {
    Nodo* nuevo = new Nodo;
    nuevo->dato = v;
    nuevo->siguiente = NULL;

    if (lista == NULL || lista->dato->getId() > v->getId()) {
        nuevo->siguiente = lista;
        lista = nuevo;
    } else {
        Nodo* actual = lista;
        while (actual->siguiente != NULL && actual->siguiente->dato->getId() < v->getId()) {
            actual = actual->siguiente;
        }
        nuevo->siguiente = actual->siguiente;
        actual->siguiente = nuevo;
    }
}

void mostrarLista(Lista lista) {
    Nodo* actual = lista;
    while (actual != NULL) {
        actual->dato->mostrar();
        actual = actual->siguiente;
    }
}

Lista duplicarLista(Lista lista) {
    Lista duplicado = NULL;
    Nodo* actual = lista;

    while (actual != NULL) {
        Vivienda* nuevaVivienda = new Vivienda(
            actual->dato->getId(),
            actual->dato->getPrecio(),
            actual->dato->getMetros(),
            actual->dato->getDireccion()
        );

        insertarOrdenadoId(duplicado, nuevaVivienda);
        actual = actual->siguiente;
    }

    return duplicado;
}

void ordenarListaPrecio(Lista& lista) {
    if (lista == NULL || lista->siguiente == NULL) return;

    bool huboIntercambio;
    do {
        huboIntercambio = false;
        Nodo* actual = lista;

        while (actual->siguiente != NULL) {
            if (actual->dato->getPrecio() < actual->siguiente->dato->getPrecio()) {
                // Intercambiar solo los punteros a Vivienda
                Vivienda* temp = actual->dato;
                actual->dato = actual->siguiente->dato;
                actual->siguiente->dato = temp;
                huboIntercambio = true;
            }
            actual = actual->siguiente;
        }
    } while (huboIntercambio);
}
