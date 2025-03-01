#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED

typedef void* PtrDato;

struct Nodo {
    PtrDato dato;
    struct Nodo* sgte;
};
typedef struct Nodo* PtrNodo;

struct Cola {
    PtrNodo primero;
};
typedef struct Cola* PtrCola;

struct Lista {
    PtrNodo primero;
};
typedef struct Lista* PtrLista;

#endif
