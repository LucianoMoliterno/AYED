#include <stdio.h>
#include <stdlib.h>
#include "carton.h"


struct CartonE{

    int vectorCarton[TAM_CARTON];

};




Carton crearCarton(){

    Carton c = malloc(sizeof(struct CartonE));

    for (int i = 0; i<TAM_CARTON; i++){


        c->vectorCarton[i]= i;

    }

    return c;

};


int * getVectorCarton(Carton c){

    return c->vectorCarton;

};
