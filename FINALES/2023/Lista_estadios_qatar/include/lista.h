#ifndef LISTA_H
#define LISTA_H

#include "estadio.h"
#include <vector>

// Definimos la lista como un vector de punteros void
typedef std::vector<void*> Lista;

// Prototipos de funciones
Lista crearLista();
void agregarEstadio(Lista& lista, Estadio estadio);
void mostrarLista(const Lista& lista);
Lista copiarLista(const Lista& lista);
void ordenarListaPorNombre(Lista& lista);

#endif
