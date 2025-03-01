#ifndef LISTA_ENC_H
#define LISTA_ENC_H

#include "dato.h"

enum estados {PARAMETRO_INVALIDO = -4, INDICE_INVALIDO, ESTRUCTURA_VACIA, ESTRUCTURA_NO_INICIALIZADA, FALSE, TRUE, OK=1};

// Declaramos la estructura del nodo, prox es un puntero al siguiente nodo
struct NodoE;

typedef struct NodoE * Nodo;

struct ListaEncE ;

typedef struct ListaEncE * ListaEnc;




ListaEnc crearLista();
Nodo crearNodo(Dato item, Nodo prox);

int liberarLista(ListaEnc lista);
int estaVacia(ListaEnc lista);

int insertarInicio(ListaEnc lista, Dato item);
int insertar(ListaEnc lista, Dato item, int pos);
int insertarFin(ListaEnc lista, Dato item);

int removerInicio(ListaEnc lista, Dato* item);
int remover(ListaEnc lista, Dato* item, int pos);
int removerFin(ListaEnc lista, Dato* item);

int obtenerElemento(ListaEnc lista, Dato* item, int pos);
int obtenerTamanio(ListaEnc lista, int* tam);


void imprimir(ListaEnc lista);

#endif


