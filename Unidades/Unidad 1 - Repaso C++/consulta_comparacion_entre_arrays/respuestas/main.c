#include <stdio.h>
#include <stdlib.h>
#include "jugada.h"
#include "carton.h"


int calcularAciertos(Carton c, Jugada j);

int main()
{
    srand(time(0));
    printf("Respuestas\n");

    Jugada j1 = crearJugada();
    Carton c1 = crearCarton();

    for ( int i = 0; i<TAM_JUGADA; i++){

        printf("POS: %d --------> %d\n", i,getVectorJugada(j1)[i] );

    }

    printf("\n------------------------------------\n");
    for ( int i = 0; i<TAM_CARTON; i++){

        printf("POS: %d --------> %d\n", i,getVectorCarton(c1)[i] );

    }

    printf("\n------------------------------------\n");

    printf("TOTAL: -------> %d", calcularAciertos(c1,j1));

    return 0;
}


int calcularAciertos(Carton c, Jugada j){

    int contador = 0;

    for (int i = 0 ; i<TAM_JUGADA; i++){

        for (int k = 0 ; k<TAM_CARTON; k++){

            if(getVectorCarton(c)[k] == getVectorJugada(j)[i]){

                contador = contador +1;
            }

        }
    }


    return contador;
}

