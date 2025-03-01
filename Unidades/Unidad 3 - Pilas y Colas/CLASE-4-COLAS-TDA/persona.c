
#include "persona.h"
#include <stdio.h>
#include <stdlib.h>


struct PersonaEstructura{

    char nombre[20];
    float peso;

};



Persona crearPersona(char  n[20], float p){

    Persona persona = malloc(sizeof(struct PersonaEstructura));

    strcpy(persona->nombre, n);
    persona->peso = p;

    return persona;


};

void mostrarPersona(Persona p){

    printf("\n----------------PERSONA--------------\n");
    printf("NOMBRE:  %s     PESO:  %f\n\n", p->nombre, p->peso);


};
