#ifndef JUGADA_H_INCLUDED
#define JUGADA_H_INCLUDED
#define TAM_JUGADA 20


struct JugadaE;

typedef struct JugadaE * Jugada;

Jugada crearJugada();

int * getVectorJugada(Jugada j);


#endif // JUGADA_H_INCLUDED
