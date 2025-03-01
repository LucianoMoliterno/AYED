#include <stdio.h>
#include <stdlib.h>
#include "dato.h"






Dato crearDato(Animal a){

    Dato d = malloc(sizeof(struct DatoEstructura));

    d->animal = a;


    return d;


};
