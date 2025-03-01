
#include "persona.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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


void mostrarListaPersonas (Lista lista) {
    for ( int i = 0; i < obtenerTamanio(lista); ++i) {



        Persona p = *( (Persona*) obtenerDato(lista, i) );
		//printf("%d ", x);
		mostrarPersona(p);
    }
    printf("\n");
}


float getPeso(Persona p){

    return p->peso;


};
