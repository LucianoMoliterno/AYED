#ifndef CARTON_H_INCLUDED
#define CARTON_H_INCLUDED
#define TAM_CARTON 8


struct CartonE;

typedef struct CartonE * Carton;


Carton crearCarton();


int * getVectorCarton(Carton c);



#endif // CARTON_H_INCLUDED
