#include "cola.h"
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Persona
typedef struct {
    char nombre[50];
    int edad;
} Persona;

// Funciones auxiliares
void mostrarPersona(PtrDato dato) {
    Persona* persona = (Persona*)dato;
    printf("Nombre: %s, Edad: %d\n", persona->nombre, persona->edad);
}

int compararPorEdad(PtrDato d1, PtrDato d2) {
    Persona* p1 = (Persona*)d1;
    Persona* p2 = (Persona*)d2;
    return p1->edad - p2->edad;
}

int main() {
    // Crear cola y lista
    PtrCola cola = crearCola();
    PtrLista lista = crearLista();

    // Crear personas
    Persona* p1 = (Persona*)malloc(sizeof(Persona));
    strcpy(p1->nombre, "Juan");
    p1->edad = 25;

    Persona* p2 = (Persona*)malloc(sizeof(Persona));
    strcpy(p2->nombre, "Ana");
    p2->edad = 30;

    Persona* p3 = (Persona*)malloc(sizeof(Persona));
    strcpy(p3->nombre, "Carlos");
    p3->edad = 20;

    // Encolar personas
    encolar(cola, p1);
    encolar(cola, p2);
    encolar(cola, p3);

    // Desencolar y agregar a la lista de forma ordenada
    while (!colaVacia(cola)) {
        PtrDato persona = desencolar(cola);
        insertarOrdenado(lista, persona, compararPorEdad);
    }

    // Mostrar lista ordenada
    printf("Personas en la lista ordenada:\n");
    mostrarLista(lista, mostrarPersona);

    return 0;
}

