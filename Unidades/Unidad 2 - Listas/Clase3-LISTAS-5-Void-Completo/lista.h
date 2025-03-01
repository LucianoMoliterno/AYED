//Tomado de: https://github.com/Pacheco95/Lista-Encadeada-Generica

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <limits.h>
#include <stdbool.h>

typedef struct Nodo {
    void *data;
    struct Nodo *proximo;
} Nodo;

typedef struct {
    Nodo *primero;
    Nodo *ultimo;
    int size;
    int tamDelDatoEnBytes;
} Lista;

bool            listaInit         (Lista *list, int tamDelDatoEnBytes);
bool            listaIsEmpty      (const Lista *list);
int             listaGetSize      (const Lista *list);
void*           listaGet          (const Lista *list, int pos);
void*           listaGetFirst     (const Lista *list);
void*           listaGetLast      (const Lista *list);
bool            listaGetCopyOf    (const Lista *list, int pos, void *backup);
bool            listaInsert       (Lista *list, void *data, int pos);
bool            listaPushFront    (Lista *list, void *data);
bool            listaPushBack     (Lista *list, void *data);
bool            listaPopFront     (Lista *list, void *backup);
bool            listaPopBack      (Lista *list, void *backup);
bool            listaRemove       (Lista *list, int pos, void *backup);
bool            listaSwap         (Lista *list, int pos1, int pos2);
void            listaClear        (Lista *list);
void            listaCopy         (Lista *dest, Lista *orig);
Lista*     listaDuplicate    (const Lista *list);
Lista*     listaBubbleSort   (Lista *list, int (*canSwap) (void *data1, void *data2));
Lista* 	   listaQuickSort	(Lista *list, int beg, int end, int (*compare)(void *data1, void *data2));



#endif
