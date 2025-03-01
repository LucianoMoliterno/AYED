

#include <iostream>
#include <cstring>
#include "persona.h"



struct PersonaEstructura{

    int edad;
    char nombre[20];

};




Persona crearPersona(int e, char n[20]){

    //En C
    //Persona p = malloc(sizeof(struct PersonaEstructura));
    //Destructor free(p)..... delete p

    Persona p = new PersonaEstructura;


    p->edad = e;

    strcpy(p->nombre, n);


    return p;

};

void mostrarPersona(Persona p){


    //cout  cin
    printf("PERSONA: %s -----  EDAD: %d", p->nombre, p->edad);


};
