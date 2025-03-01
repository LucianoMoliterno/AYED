#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructuras
typedef struct {
    char nombre[50];
    int promedio;
    int prioridad;
} Estudiante;

typedef struct NodoCola {
    Estudiante dato;
    struct NodoCola *siguiente;
} NodoCola;

typedef struct {
    NodoCola *frente;
    NodoCola *final;
} Cola;

typedef struct NodoLista {
    Estudiante dato;
    struct NodoLista *siguiente;
} NodoLista;

typedef struct {
    NodoLista *cabeza;
} Lista;

// Funciones de Cola
void inicializarCola(Cola *cola) {
    cola->frente = NULL;
    cola->final = NULL;
}

int colaVacia(Cola *cola) {
    return cola->frente == NULL;
}

void encolar(Cola *cola, Estudiante estudiante) {
    NodoCola *nuevoNodo = (NodoCola *)malloc(sizeof(NodoCola));
    nuevoNodo->dato = estudiante;
    nuevoNodo->siguiente = NULL;
    if (colaVacia(cola)) {
        cola->frente = nuevoNodo;
    } else {
        cola->final->siguiente = nuevoNodo;
    }
    cola->final = nuevoNodo;
}

Estudiante desencolar(Cola *cola) {
    if (colaVacia(cola)) {
        printf("La cola está vacía.\n");
        exit(1);
    }
    NodoCola *temp = cola->frente;
    Estudiante estudiante = temp->dato;
    cola->frente = cola->frente->siguiente;
    if (cola->frente == NULL) {
        cola->final = NULL;
    }
    free(temp);
    return estudiante;
}

// Funciones de Lista
void inicializarLista(Lista *lista) {
    lista->cabeza = NULL;
}

void insertarOrdenado(Lista *lista, Estudiante estudiante) {
    NodoLista *nuevoNodo = (NodoLista *)malloc(sizeof(NodoLista));
    nuevoNodo->dato = estudiante;
    nuevoNodo->siguiente = NULL;

    if (lista->cabeza == NULL || lista->cabeza->dato.prioridad > estudiante.prioridad) {
        nuevoNodo->siguiente = lista->cabeza;
        lista->cabeza = nuevoNodo;
    } else {
        NodoLista *actual = lista->cabeza;
        while (actual->siguiente != NULL && actual->siguiente->dato.prioridad <= estudiante.prioridad) {
            actual = actual->siguiente;
        }
        nuevoNodo->siguiente = actual->siguiente;
        actual->siguiente = nuevoNodo;
    }
}

// Función para asignar prioridades
void asignarPrioridades(Cola *cola) {
    NodoCola *actual = cola->frente;
    while (actual != NULL) {
        if (actual->dato.promedio >= 9) {
            actual->dato.prioridad = 1;
        } else if (actual->dato.promedio >= 8) {
            actual->dato.prioridad = 2;
        } else if (actual->dato.promedio >= 6) {
            actual->dato.prioridad = 3;
        } else {
            actual->dato.prioridad = 5;
        }
        actual = actual->siguiente;
    }
}

// Función para imprimir la lista
void imprimirLista(Lista *lista) {
    NodoLista *actual = lista->cabeza;
    while (actual != NULL) {
        printf("Nombre: %s, Promedio: %d, Prioridad: %d\n", actual->dato.nombre, actual->dato.promedio, actual->dato.prioridad);
        actual = actual->siguiente;
    }
}

int main() {
    Cola cola;
    Lista lista;

    inicializarCola(&cola);
    inicializarLista(&lista);

    // Ejemplo de estudiantes
    Estudiante e1 = {"Nico", 8, 0};
    Estudiante e2 = {"Brenda", 1, 0};
    Estudiante e3 = {"Walter", 8, 0};
    Estudiante e4 = {"Roberto", 9, 0};
    Estudiante e5 = {"Flor", 4, 0};

    // Encolar estudiantes
    encolar(&cola, e1);
    encolar(&cola, e2);
    encolar(&cola, e3);
    encolar(&cola, e4);
    encolar(&cola, e5);

    // Asignar prioridades
    asignarPrioridades(&cola);

    // Desencolar y agregar a la lista ordenada
    while (!colaVacia(&cola)) {
        Estudiante estudiante = desencolar(&cola);
        insertarOrdenado(&lista, estudiante);
    }

    // Imprimir lista final
    imprimirLista(&lista);

    return 0;
}
