#ifndef LISTA_H
#define LISTA_H

typedef struct Nodo {
    void *dato;
    struct Nodo *siguiente;
} Nodo;

typedef struct {
    Nodo *inicio;
} Lista;

// Funciones de la lista
Lista *crear_lista();
void agregar_a_lista(Lista *lista, void *dato);
void eliminar_mayor(Lista *lista, float (*obtener_salario)(void *));
void mostrar_lista(Lista *lista, void (*mostrar_dato)(void *));
void *obtener_mas_cercano(Lista *lista, float promedio, float (*obtener_salario)(void *));
void liberar_lista(Lista *lista, void (*liberar_dato)(void *));

#endif
