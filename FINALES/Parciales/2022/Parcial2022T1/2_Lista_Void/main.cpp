#include <stdio.h>
#include <stdlib.h>

// Definición de Nodo y Lista
typedef struct Nodo {
    void* dato;
    struct Nodo* siguiente;
} Nodo;

typedef struct Lista {
    Nodo* cabeza;
} Lista;

// Funciones para Lista
Lista* crearLista();
Nodo* crearNodo(void* dato);
void insertarAlFinal(Lista* lista, void* dato);

int main() {
    Lista* lista = crearLista();

    int a = 10, b = 20, c = 30;
    insertarAlFinal(lista, &a);
    insertarAlFinal(lista, &b);
    insertarAlFinal(lista, &c);

    Nodo* actual = lista->cabeza;
    while (actual != NULL) {
        printf("Dato: %d\n", *(int*)actual->dato);
        actual = actual->siguiente;
    }

    return 0;
}

Lista* crearLista() {
    Lista* nuevaLista = (Lista*)malloc(sizeof(Lista));
    nuevaLista->cabeza = NULL;
    return nuevaLista;
}

Nodo* crearNodo(void* dato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
}

void insertarAlFinal(Lista* lista, void* dato) {
    Nodo* nuevo = crearNodo(dato);
    if (lista->cabeza == NULL) {
        lista->cabeza = nuevo;
    } else {
        Nodo* actual = lista->cabeza;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
}
