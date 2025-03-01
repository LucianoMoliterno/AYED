#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista *crear_lista() {
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    lista->inicio = NULL;
    return lista;
}

void agregar_a_lista(Lista *lista, void *dato) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->siguiente = lista->inicio;
    lista->inicio = nuevo;
}

void eliminar_mayor(Lista *lista, float (*obtener_salario)(void *)) {
    if (!lista->inicio) return;

    Nodo *actual = lista->inicio, *mayor = lista->inicio, *anterior = NULL, *anterior_mayor = NULL;

    while (actual) {
        if (obtener_salario(actual->dato) > obtener_salario(mayor->dato)) {
            mayor = actual;
            anterior_mayor = anterior;
        }
        anterior = actual;
        actual = actual->siguiente;
    }

    if (anterior_mayor)
        anterior_mayor->siguiente = mayor->siguiente;
    else
        lista->inicio = mayor->siguiente;

    free(mayor->dato);
    free(mayor);
}

void mostrar_lista(Lista *lista, void (*mostrar_dato)(void *)) {
    Nodo *actual = lista->inicio;
    while (actual) {
        mostrar_dato(actual->dato);
        actual = actual->siguiente;
    }
}

void *obtener_mas_cercano(Lista *lista, float promedio, float (*obtener_salario)(void *)) {
    if (!lista->inicio) return NULL;

    Nodo *actual = lista->inicio;
    void *mas_cercano = actual->dato;
    float min_diferencia = abs(obtener_salario(actual->dato) - promedio);

    while (actual) {
        float diferencia = abs(obtener_salario(actual->dato) - promedio);
        if (diferencia < min_diferencia) {
            min_diferencia = diferencia;
            mas_cercano = actual->dato;
        }
        actual = actual->siguiente;
    }

    return mas_cercano;
}

void liberar_lista(Lista *lista, void (*liberar_dato)(void *)) {
    Nodo *actual = lista->inicio;
    while (actual) {
        Nodo *siguiente = actual->siguiente;
        liberar_dato(actual->dato);
        free(actual);
        actual = siguiente;
    }
    free(lista);
}
