#ifndef LISTA_H
#define LISTA_H

#include "vivienda.h"

typedef struct Nodo {
    Vivienda* vivienda;
    struct Nodo* siguiente;
} Nodo;

typedef struct {
    Nodo* cabeza;
} Lista;

Lista* crearLista();
void insertarInicio(Lista* lista, Vivienda* vivienda);
void insertarFinal(Lista* lista, Vivienda* vivienda);
void insertarEnPosicion(Lista* lista, Vivienda* vivienda, int posicion);
void eliminarPorID(Lista* lista, int id);
void mostrarLista(Lista* lista);

#endif
