#include <stdio.h>
#include <stdlib.h>

// Estructura del nodo
typedef struct Nodo {
    int dato;
    struct Nodo *izq, *der;
} Nodo;

// Funciones del árbol
Nodo* crearNodo(int dato);
Nodo* insertar(Nodo* raiz, int dato);
void recorrerInOrder(Nodo* raiz);

int main() {
    Nodo* raiz = NULL;

    raiz = insertar(raiz, 10);
    raiz = insertar(raiz, 5);
    raiz = insertar(raiz, 15);

    printf("Recorrido InOrder: ");
    recorrerInOrder(raiz);
    printf("\n");

    return 0;
}

Nodo* crearNodo(int dato) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    return nuevo;
}

Nodo* insertar(Nodo* raiz, int dato) {
    if (raiz == NULL) {
        return crearNodo(dato);
    }
    if (dato < raiz->dato) {
        raiz->izq = insertar(raiz->izq, dato);
    } else {
        raiz->der = insertar(raiz->der, dato);
    }
    return raiz;
}

void recorrerInOrder(Nodo* raiz) {
    if (raiz != NULL) {
        recorrerInOrder(raiz->izq);
        printf("%d ", raiz->dato);
        recorrerInOrder(raiz->der);
    }
}
