#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "Pila.h"


void imprimirPilaString(PtrPila Pila);



int main()
{

    PtrPila Pila=crearPila();

    apilar(Pila,"Nico");
    apilar(Pila,"Pepe");
    apilar(Pila,"Lanus campeon");
    apilar(Pila,"UNLa");


    imprimirPilaString(Pila);

    imprimirPilaString(Pila);



    return 0;
}



void imprimirPilaString(PtrPila Pila){

    printf("\n\n------ Es una pila, solo acceso al ultimo insertado\n");


        printf("%s  || ",(char*)getUltimo(Pila));


}






