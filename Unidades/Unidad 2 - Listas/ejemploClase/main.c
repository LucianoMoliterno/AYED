#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{
    printf("------ CLASE LISTAS ------- \n");


    ListaEnc lista = crearLista();

    printf("\nESTA VACIA:  %d\n\n", estaVacia(lista) );
    imprimir(lista);

    insertarInicio(lista, 51);
    insertarInicio(lista, 1);
    insertarInicio(lista, -63);
    insertarInicio(lista, 22);
    imprimir(lista);

    printf("\nESTA VACIA:  %d\n\n", estaVacia(lista) );

    int dato;
    removerInicio(lista, &dato );

    printf("\nEsto es lo que saque: %d", dato);



    return 0;
}
