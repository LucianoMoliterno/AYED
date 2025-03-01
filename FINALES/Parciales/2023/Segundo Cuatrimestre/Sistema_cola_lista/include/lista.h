#ifndef LISTA_H
#define LISTA_H

#include "cola.h"

// Definición de la lista
typedef struct Lista {
    PtrNodo primero;
} Lista;
typedef struct Lista* PtrLista;

// Primitivas de la lista
PtrLista crearLista();
void insertarOrdenado(PtrLista lista, PtrDato dato, int (*comparar)(PtrDato, PtrDato));
void mostrarLista(PtrLista lista, void (*mostrarDato)(PtrDato dato));

#endif
