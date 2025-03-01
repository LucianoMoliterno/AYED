#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "vivienda.h"

struct Nodo {
    Vivienda* dato;
    Nodo* siguiente;
};

typedef Nodo* Lista;

Lista crearLista();
void insertarOrdenadoId(Lista& lista, Vivienda* v);
void mostrarLista(Lista lista);
Lista duplicarLista(Lista lista);
void ordenarListaPrecio(Lista& lista);
void liberarLista(Lista& lista);

#endif
