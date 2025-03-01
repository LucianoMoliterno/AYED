#include "lista.h"
#include "persona.h"
#include <stdio.h>
#include <stdlib.h>

void mostrarLista (Lista lista) {
    for ( int i = 0; i < obtenerTamanio(lista); ++i) {



        Persona p = *( (Persona*) obtenerDato(lista, i) );
		//printf("%d ", x);
		mostrarPersona(p);
    }
    printf("\n");
}



int main() {
    //Crea la lista
    printf("------- Creamos Lista de enteros--------\n");

    //Inicia la lista
    Lista listaPersonas = crearLista(sizeof(Persona));
    Lista listaEnteros = crearLista(sizeof(int));



    Persona p = crearPersona("Nico", 1.89);
    insertarInicio(listaPersonas, &p);

    p = crearPersona("Brenda", 2.01);
    insertarInicio(listaPersonas, &p);

    p = crearPersona("Alejo", 1.49);
    insertarFinal(listaPersonas, &p);

    p = crearPersona("Walter", 1.66);
    insertar(listaPersonas, &p,2);

    p = crearPersona("Magali", 1.49);
    insertarFinal(listaPersonas, &p);



    mostrarLista(listaPersonas);






    return 0;
}
