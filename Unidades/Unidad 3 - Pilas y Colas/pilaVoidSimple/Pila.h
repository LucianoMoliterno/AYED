#ifndef Pila_H_INCLUDED
#define Pila_H_INCLUDED




///Estructura y tipo de dato de la Pila
struct PilaE;
typedef struct PilaE* PtrPila;


typedef void* PtrDato;


///Estructura y tipo de dato del Nodo
struct NodoE;
typedef struct NodoE* PtrNodo;




PtrPila crearPila();
PtrPila destruirPila(PtrPila pila);
int pilaVacia(PtrPila pila);

PtrDato desapilar(PtrPila pila);
void apilar(PtrPila pila, PtrDato dato);


PtrDato getUltimo(PtrPila pila);


///NODO

PtrNodo crearNodo(PtrDato dato);
PtrNodo destruirNodo(PtrNodo nodo);
void setDato(PtrNodo nodo, PtrDato dato);
PtrDato getDato(PtrNodo nodo);
void setSiguiente(PtrNodo esteNodo, PtrNodo siguienteNodo);
PtrNodo getSiguiente(PtrNodo nodo);




#endif // Pila_H_INCLUDED
