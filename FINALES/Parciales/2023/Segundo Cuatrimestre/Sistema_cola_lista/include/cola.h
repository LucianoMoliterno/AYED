#ifndef COLA_H
#define COLA_H

#include <stdbool.h>

// Definición de tipos
typedef void* PtrDato;
typedef struct Nodo {
    PtrDato dato;
    struct Nodo* sgte;
} Nodo;
typedef struct Nodo* PtrNodo;

typedef struct Cola {
    PtrNodo primero;
    PtrNodo ultimo;
} Cola;
typedef struct Cola* PtrCola;

// Primitivas de la cola
PtrCola crearCola();
void encolar(PtrCola cola, PtrDato dato);
PtrDato desencolar(PtrCola cola);
bool colaVacia(PtrCola cola);

#endif

