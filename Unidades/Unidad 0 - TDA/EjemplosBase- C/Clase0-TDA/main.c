#include <stdio.h>
#include <stdlib.h>
#include "animal.h"

int main()
{
    printf("Repaso de TDA\n");


    Animal animal1 = crearAnimal("Vertebrado", "Anfibio", "Rana", 0.85, 1, 'm');
    mostrarAnimal(animal1);

    //Animal animal2 = crearAnimalTeclado();
    //mostrarAnimal(animal2);

    printf("\nAccedo solo al nombre: %s", getNombre(animal1));

    //modifico el sexo
    setSexo(animal1, 'f');
    mostrarAnimal(animal1);

    return 0;
}
