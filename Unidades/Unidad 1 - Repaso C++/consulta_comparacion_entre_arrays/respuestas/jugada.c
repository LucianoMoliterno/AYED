#include <stdio.h>
#include <stdlib.h>
#include "jugada.h"
#include <time.h>


struct JugadaE{

    int vectorJugada[TAM_JUGADA];

};



Jugada crearJugada(){

    Jugada j = malloc(sizeof(struct JugadaE));

    for (int i = 0 ; i< TAM_JUGADA; i++){

        j->vectorJugada[i] = rand()%100;

    }


    return j;

};

int * getVectorJugada(Jugada j){

    return j->vectorJugada;
}
