#include<stdio.h>
#include<stdlib.h>

#include "cola.h"

struct NodoE{
  Persona item;
  No prox;
};



 struct ColaE {
  No inicio;
  int tam;
};



Cola crearCola() {
    Cola cola = malloc(sizeof(*cola));
    if (cola == NULL)
        return NULL;
    cola->inicio = NULL;
    cola->tam = 0;
    return cola;
}

int liberarCola(Cola cola) {
    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    // remove todos os elementos da cola
    while(!estaVacia(cola)){
        desencolar(cola, NULL);}

    free(cola);
    cola->inicio = NULL;



    return OK;
}

int estaVacia(Cola cola) {
    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    if (cola->inicio == NULL)
        return TRUE;
    return FALSE;
}

No crearNo(Persona item, No prox) {
	No  no = malloc(sizeof(*no));
	if (no == NULL)
        return NULL;
	no->item = item;
	no->prox = prox;
	return no;
}


int encolar(Cola cola, Persona item) {

    int pos = cola->tam;

    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (pos < 0 || pos > cola->tam)
        return INDICE_INVALIDO;

    No  novoNo;
    if (pos == 0) {


        if (cola == NULL)
            return ESTRUCTURA_NO_INICIALIZADA;

        No  novoNo = crearNo(item, cola->inicio);

        if (novoNo == NULL)
            return ESTRUCTURA_NO_INICIALIZADA;

        cola->inicio = novoNo;
        cola->tam++;
        return OK;




    } else {
        // prepara para inserir
        No  aux;
        aux = cola->inicio;
        for(int i = 0; i < pos - 1; i++) {
            aux = aux->prox;
        }

        // adiciona o n�
        novoNo = crearNo(item, aux->prox);
        if (novoNo == NULL)
            return ESTRUCTURA_NO_INICIALIZADA;
        aux->prox = novoNo;
    }
    cola->tam++;
    return OK;
}





int desencolar(Cola cola, Persona* item) {
    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(cola))
        return ESTRUCTURA_VACIA;
    No  aux = cola->inicio;
    if (item != NULL)
        *item = aux->item;
    cola->inicio = aux->prox;
    free(aux);
    aux = NULL;
    cola->tam--;
    return OK;

}


int obtenerElemento(Cola cola, Persona* item, int pos) {

    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    if (estaVacia(cola))
        return ESTRUCTURA_VACIA;

    if (pos < 0 || pos >= cola->tam)
        return INDICE_INVALIDO;


    if (item == NULL)
        return PARAMETRO_INVALIDO;

    No  aux;
    aux = cola->inicio;
    for(int i = 0; i < pos; i++) {
        aux = aux->prox;
    }
    *item = aux->item;

    return OK;
}

int obtenerTamanio(Cola cola, int* tam) {




    if (cola == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (tam == NULL)
        return PARAMETRO_INVALIDO;

    *tam = cola->tam;




    return OK;
}

void imprimir(Cola cola) {
    int qtdeElementos;
    obtenerTamanio(cola, &qtdeElementos);
    printf("[");
    for(int i = 0;i < qtdeElementos; i++) {
        Persona el;
        obtenerElemento(cola, &el, i);
        mostrarPersona(el);
    }
    printf("]\n");
}
