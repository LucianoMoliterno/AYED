#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "nodo.h"

Lista* crearLista() {
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->cabeza = NULL;
    lista->cola = NULL;
    return lista;
}

void agregarNodo(Lista* lista, Nodo* nodo) {
    if (lista->cola == NULL) {
        lista->cabeza = nodo;
        lista->cola = nodo;
    } else {
        lista->cola->siguiente = nodo;
        lista->cola = nodo;
    }
}

void recorrerLista(Lista* lista, void (*callback)(void*)) {
    Nodo* actual = lista->cabeza;
    while (actual != NULL) {
        callback(actual->data);
        actual = actual->siguiente;
    }
}

Nodo* crearNodo(void* data) {
    Nodo* nodo = (Nodo*)malloc(sizeof(Nodo));
    nodo->data = data;
    nodo->siguiente = NULL;
    return nodo;
}

void eliminarNodo(Lista* lista, void* data) {
    Nodo* actual = lista->cabeza;
    Nodo* anterior = NULL;

    while (actual != NULL) {
        if (actual->data == data) {
            if (anterior == NULL) {
                lista->cabeza = actual->siguiente;
            } else {
                anterior->siguiente = actual->siguiente;
            }
            free(actual);
            return;
        }
        anterior = actual;
        actual = actual->siguiente;
    }
}

int existeEnLista(Lista* lista, void* data) {
    Nodo* actual = lista->cabeza;
    while (actual != NULL) {
        if (actual->data == data) {  // Compara si los datos son iguales
            return 1;  // Devuelve 1 si el elemento existe
        }
        actual = actual->siguiente;
    }
    return 0;  // Devuelve 0 si no se encuentra el elemento
}

