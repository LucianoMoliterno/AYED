#include <stdio.h>
#include <stdlib.h>

#include "cola.h"

int main()
{
    printf("--------------Cola -------\n");

    Cola cola = crearCola();

    printf("\nEsta vacia: %d\n", estaVacia(cola));


    encolar(cola, 4);
    encolar(cola, -11);
    encolar(cola, 21);
    encolar(cola, 101);

    imprimir(cola);


    printf("\nEsta vacia: %d\n", estaVacia(cola));

    int resultado;



    desencolar(cola, &resultado);
    printf("\nResultado obtenido: %d\n", resultado);
    imprimir(cola);

    desencolar(cola, &resultado);
    printf("\nResultado obtenido: %d\n", resultado);
    imprimir(cola);



    obtenerTamanio(cola, &resultado);
    printf("\nResultado obtenido: %d\n", resultado);

    //Libero memoria y vacio la cola
    liberarCola(cola);
    printf("\nEsta vacia: %d\n", estaVacia(cola));



    return 0;
}
