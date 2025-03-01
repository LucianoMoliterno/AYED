#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void mostrarLista(Lista lista){

    for ( int i = 0; i< obtenerTamanio(lista); i++){

        char info = * ((char *) obtenerDato(lista, i));

        printf("/ %c /", info );

    }

}



int main() {

    printf("------- LISTAS VOID --------\n");


    Lista listaEnteros = crearLista(sizeof(char));

    char x = 'h';
    insertarInicio(listaEnteros, &x);
    x = 'i';
    insertarFinal(listaEnteros, &x);
    x = 'K';
    insertarInicio(listaEnteros, &x);
    x = 'g';
    insertar(listaEnteros,&x, 2);

    ///11  10  -103  23


    mostrarLista(listaEnteros);



    return 0;
}
