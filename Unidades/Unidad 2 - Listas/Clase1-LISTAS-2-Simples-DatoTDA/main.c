#include <stdio.h>
#include <stdlib.h>
#include "dato.h"
#include "animal.h"

#include "lista.h"

int main()
{
    printf("--------------Lista simplemente enlazada - Puntero a un Dato-------\n");

    Animal animal1 = crearAnimal("Ave", "Caniche", "Samanta", 22.3, 2, 'm');
    Animal animal2 = crearAnimal("Perro", "Dogo", "Ishikame", 31.1, 5, 'm');
    Animal animal3 = crearAnimal("Gato", "Siames", "Robertina", 8.3, 3, 'f');




    ListaEnc lista = crearLista();


    insertarInicio(lista, crearDato(animal1) );


    insertarFin(lista, crearDato(animal2));

    insertarInicio(lista,crearDato(animal3) );



    imprimir(lista);



    return 0;
}
