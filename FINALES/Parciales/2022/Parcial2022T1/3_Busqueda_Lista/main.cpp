#include <stdio.h>
#include <stdlib.h>

// Definición de Nodo y Lista
typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

typedef struct Lista {
    Nodo* cabeza;
} Lista;

// Funciones de búsqueda
Nodo* crearNodo(int dato);
int buscar(Lista* lista, int valor);

int main() {
    Lista lista;
    lista.cabeza = NULL;

    // Crear lista
    lista.cabeza = crearNodo(10);
    lista.cabeza->siguiente = crearNodo(20);
    lista.cabeza->siguiente->siguiente = crearNodo(30);

    int valor = 20;
    if (buscar(&lista, valor)) {
        printf("Valor %d encontrado en la lista.\n", valor);
    } else {
        printf("Valor %d no encontrado en la lista.\n", valor);
    }

    return 0;
}

Nodo* crearNodo(int dato) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}

int buscar(Lista* lista, int valor) {
    Nodo* actual = lista->cabeza;
    while (actual != NULL) {
        if (actual->dato == valor) {
            return 1;
        }
        actual = actual->siguiente;
    }
    return 0;
}
