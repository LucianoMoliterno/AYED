#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED




///Estructura y tipo de dato de la Lista
struct ListaE;
typedef struct ListaE* PtrLista;


typedef void* PtrDato;


///Estructura y tipo de dato del Nodo
struct NodoE;
typedef struct NodoE* PtrNodo;




PtrLista crearLista();


PtrLista destruirLista(PtrLista lista);



int listaVacia(PtrLista lista);


PtrDato getDatoLista(PtrLista lista, int posicion);


PtrDato getCabecera(PtrLista lista);


PtrLista getResto(PtrLista lista);


int longitudLista(PtrLista lista);


void agregarDatoLista(PtrLista lista, PtrDato dato);


int insertarDatoLista(PtrLista lista, PtrDato dato, int posicion);


PtrDato removerDeLista(PtrLista lista, int posicion);




///NODO

PtrNodo crearNodo(PtrDato dato);


PtrNodo destruirNodo(PtrNodo nodo);


void setDato(PtrNodo nodo, PtrDato dato);


PtrDato getDato(PtrNodo nodo);


void setSiguiente(PtrNodo esteNodo, PtrNodo siguienteNodo);



PtrNodo getSiguiente(PtrNodo nodo);




#endif // LISTA_H_INCLUDED
