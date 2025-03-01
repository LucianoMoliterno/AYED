#include <stdlib.h>
#include "Lista.h"



struct ListaE{
     PtrNodo primero;
};


struct NodoE {
    PtrDato dato; // dato almacenado
    struct NodoE *sgte; // puntero al siguiente
} ;


///PRIMITIVAS!!!!!!

PtrLista crearLista(){

    ///El constructor, lo de siempre :)
    PtrLista lista= malloc(sizeof(struct ListaE));

    lista->primero= NULL;


    return lista;
}

PtrLista destruirLista(PtrLista lista){

        while(!listaVacia(lista)){
            removerDeLista(lista,0);
        }
        free(lista);

       return NULL;
}

int listaVacia(PtrLista lista){
    // Una lista está vacía cuando lista->Primero==NULL
    return (lista->primero==NULL);
}


PtrNodo getNodoLista(PtrLista lista, int posicion){
    PtrNodo nodo=lista->primero;

    int posicionActual=0;

    if(nodo!=NULL){

        while(posicionActual<posicion && nodo->sgte!=NULL){
            posicionActual++;
            nodo=nodo->sgte;
        }
    }
    return nodo;
}

PtrDato getDatoLista(PtrLista lista, int posicion){

    PtrDato dato=NULL;

    PtrNodo nodo=getNodoLista(lista,posicion);
    if(nodo!=NULL){
        dato=getDato(nodo);
    }
    return dato;
}

PtrDato getCabecera(PtrLista lista){
    PtrDato dato=NULL;
    if(lista->primero!=NULL){
        dato=getDato(lista->primero);
    }
    return dato;
}

PtrLista getResto(PtrLista lista){
    PtrLista resto=crearLista();
    if(lista->primero!=NULL){
        resto->primero=lista->primero->sgte;
    }
    return resto;
}

int longitudLista(PtrLista lista){
    // para obtener la longitud, debemos recorrer la lista.
    int longitud=0;
    PtrNodo nodo=lista->primero;
    while(nodo!=NULL){
        nodo=nodo->sgte;
        longitud++;
    }
    return longitud;
}

void agregarDatoLista(PtrLista lista, PtrDato dato){
    // simplemente creamos el nodo, hacemos que el primero de la lista sea
    // su siguiente y lo ponemos como primero de la lista
    PtrNodo nuevoNodo=crearNodo(dato);
    setSiguiente(nuevoNodo,lista->primero);
    lista->primero=nuevoNodo;
}

int insertarDatoLista(PtrLista lista, PtrDato dato, int posicion){
    // Como insertamos después de la posición, utilizamos getNodoLista
    PtrNodo nodo=getNodoLista(lista,posicion);
    int resultado=0;
    if (nodo!=NULL){ // insertamos
        PtrNodo nuevoNodo=crearNodo(dato);
        setSiguiente(nuevoNodo,nodo->sgte);
        setSiguiente(nodo,nuevoNodo);
        resultado=1;
    }
    return resultado;
}





PtrDato removerDeLista(PtrLista lista, int posicion){
    // si la posición es 0, solo hay que devolver el dato del primero y eliminarlo
    // en otro caso, hay que pararse en posicion-1 , sacar el dato del siguiente
    // y poner el siguiente del nodo en posicion-1  al sgte del sgte
    PtrDato dato=NULL;
    PtrDato nodoEliminar=NULL;
    if(lista->primero!=NULL){
        if (posicion==0){ // eliminamos la cabecera
            nodoEliminar=lista->primero;
            dato=getDato(nodoEliminar);
            lista->primero=lista->primero->sgte;
            destruirNodo(nodoEliminar);

        } else {

            PtrNodo nodo=getNodoLista(lista,posicion-1);
            if(nodo!=NULL){
                nodoEliminar=nodo->sgte;
                if(nodoEliminar!=NULL){
                    dato=getDato(nodoEliminar);
                    setSiguiente(nodo,getSiguiente(nodoEliminar));
                    destruirNodo(nodoEliminar);
                }
            }
        }
    }
    return dato;
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

