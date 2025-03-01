#include "lista.h"
#include "persona.h"
#include <stdio.h>
#include <stdlib.h>



int main() {


    //Inicia la lista
    Lista listaPersonas = crearLista(sizeof(Persona));


    Persona p = crearPersona("Nico", 2.11);
    insertarInicio(listaPersonas, &p);

    p = crearPersona("Brenda", 2.01);
    insertarInicio(listaPersonas, &p);

    p = crearPersona("Alejo", 1.70);
    insertarFinal(listaPersonas, &p);

    p = crearPersona("Walter", 1.66);
    insertar(listaPersonas, &p,2);

    p = crearPersona("Magali", 1.49);
    insertarFinal(listaPersonas, &p);



    mostrarListaPersonas(listaPersonas);



    ordenarListaPersonas(listaPersonas);

    mostrarListaPersonas(listaPersonas);


    return 0;
}
