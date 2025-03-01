#ifndef LISTA_ENC_H
#define LISTA_ENC_H

#define TRUE 1
#define FALSE 0
#define OK 1
#define ESTRUCTURA_NO_INICIALIZADA -1
#define ESTRUCTURA_VACIA -2
#define INDICE_INVALIDO -3
#define PARAMETRO_INVALIDO -4

// Declaramos la estructura del nodo, prox es un puntero al siguiente nodo
struct NodoE;

typedef struct NodoE * No;

struct ColaE ;

typedef struct ColaE * Cola;




Cola crearCola();

int liberarCola(Cola cola);
int estaVacia(Cola cola);


int encolar(Cola cola, int item);

int desencolar(Cola cola, int* item);


int obtenerElemento(Cola cola, int* item, int pos);
int obtenerTamanio(Cola cola, int* tam);


void imprimir(Cola cola);

#endif


