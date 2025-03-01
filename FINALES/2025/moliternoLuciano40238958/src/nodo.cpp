#include "nodo.h"
#include <stdlib.h>

// Definición de la función
Nodo* crearNodo(void* data) {
    Nodo* nodo = (Nodo*)malloc(sizeof(Nodo));  // Asigna memoria para un nuevo nodo
    nodo->data = data;  // Asigna el dato al nodo
    nodo->siguiente = NULL;  // El siguiente nodo es NULL por defecto
    return nodo;  // Retorna el nuevo nodo
}
