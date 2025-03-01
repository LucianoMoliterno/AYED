#include <stdlib.h>
#include "Pila.h"



struct PilaE{
     PtrNodo primero;
};


struct NodoE {
    PtrDato dato; // dato almacenado
    struct NodoE *sgte; // puntero al siguiente
} ;


///PRIMITIVAS!!!!!!

PtrPila crearPila(){

    ///El constructor, lo de siempre :)
    PtrPila pila= malloc(sizeof(struct PilaE));

    pila->primero= NULL;


    return pila;
}

PtrPila destruirPila(PtrPila pila){

        while(!pilaVacia(pila)){

            PtrDato dato=NULL;
            PtrDato nodoEliminar=NULL;
            nodoEliminar=pila->primero;
            dato=getDato(nodoEliminar);
            pila->primero=pila->primero->sgte;
            destruirNodo(nodoEliminar);
        }
        free(pila);

       return NULL;
}

int pilaVacia(PtrPila pila){
    // Una lista está vacía cuando lista->Primero==NULL
    return (pila->primero==NULL);
}



PtrDato getUltimo(PtrPila pila){

    PtrDato datoADesapilar=NULL;

    if(pila->primero!=NULL){

            datoADesapilar=getDato(pila->primero);


    }
    return datoADesapilar;
}



PtrDato desapilar(PtrPila pila){

    PtrDato datoADesapilar=NULL;

    if(pila->primero!=NULL){

            datoADesapilar=getDato(pila->primero);



            PtrDato nodoEliminar=NULL;

            nodoEliminar=pila->primero;


            pila->primero=pila->primero->sgte;
            destruirNodo(nodoEliminar);



    }
    return datoADesapilar;
}





void apilar(PtrPila pila, PtrDato dato){
    // simplemente creamos el nodo, hacemos que el primero de la lista sea
    // su siguiente y lo ponemos como primero de la lista
    PtrNodo nuevoNodo=crearNodo(dato);
    setSiguiente(nuevoNodo,pila->primero);
    pila->primero=nuevoNodo;
}







///NODO

PtrNodo crearNodo(PtrDato dato){
    PtrNodo nodo=(PtrNodo)malloc(sizeof(struct NodoE));
    nodo->dato=dato;
    nodo->sgte=NULL;
    return nodo;
}


PtrNodo destruirNodo(PtrNodo nodo){
    // la destrucción del dato queda por cuenta del usuario
    free(nodo);
    return NULL;
}



void setDato(PtrNodo nodo, PtrDato dato){
    nodo->dato=dato;
}


PtrDato getDato(PtrNodo nodo){
    return nodo->dato;
}


void setSiguiente(PtrNodo esteNodo, PtrNodo siguienteNodo){
    esteNodo->sgte=siguienteNodo;
}


PtrNodo getSiguiente(PtrNodo nodo){
    return nodo->sgte;
}

