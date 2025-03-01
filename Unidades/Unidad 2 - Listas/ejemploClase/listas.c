#include <stdio.h>
#include <stdlib.h>
#include "listas.h"



struct NodoE{

    int  item; //3---1-1--21---333
    No prox; //es un puntero

};  //int(dato) , prox;



struct ListaEncE{

    int tam;
    No inicio;

};


ListaEnc crearLista(){

    ListaEnc lista = malloc(sizeof(struct ListaEncE));//new


    lista->tam = 0;
    lista->inicio = NULL;

    return lista;

};

No crearNo(int item,No prox){


    No nodo = malloc(sizeof(struct NodoE));

    nodo ->item = item;
    nodo ->prox = prox;



    return nodo;

};

//Insertar (pos- ini- fin)
int insertarInicio(ListaEnc lista, int item){

        //verifiquen algo en particular-- null?


        No nuevoNo = crearNo(item, lista->inicio);

        lista-> inicio = nuevoNo;
        lista -> tam++;

        return 1;
};

//Eliminar en la lista
int removerInicio(ListaEnc lista, int * item){

    //chequear NULL

    if ( estaVacia(lista)){

        return -1;
    }

    No aux = lista->inicio;

    ///if <---------------
    //parematro pase por referencia
    *item =  aux->item;

    free(aux);
    aux = NULL;


    lista->tam--;

    return 1;

};


int estaVacia(ListaEnc lista){

    //verificar algunas cosas ?¡?¡

    if (lista->inicio == NULL){

        return TRUE;
    }

    return FALSE;
};


int obtenerElemento(ListaEnc lista, int* item, int pos) {


    if (estaVacia(lista)){
        return -1;}

    if (pos < 0 || pos >= lista->tam){
        *item = -1;
        return -1;
    }

    if (item == NULL){
        return -1;}

    No  aux;
    aux = lista->inicio;

    for(int i = 0; i < pos; i++) {
        aux = aux->prox;
    }


    *item = aux->item;

    return 1;
}



int obtenerTamanio(ListaEnc lista, int* tam) {




    *tam = lista->tam;


    return 1;
}



void imprimir(ListaEnc lista) {


    int cantidad;

    obtenerTamanio(lista, &cantidad);


    printf("[");
    for(int i = 0;i < cantidad; i++) {

        int cadaElemento;
        obtenerElemento(lista, &cadaElemento, i);

        printf(" %d ", cadaElemento);
    }
    printf("]\n");
}



