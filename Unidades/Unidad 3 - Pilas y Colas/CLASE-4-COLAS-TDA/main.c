#include <stdio.h>
#include <stdlib.h>

#include "cola.h"

int main()
{
    printf("--------------Cola -------\n");

    Cola cola = crearCola();

    printf("\nEsta vacia: %d\n", estaVacia(cola));


    encolar(cola, crearPersona("Nico", 87.1));
    encolar(cola, crearPersona("Brenda", 62.1));
    encolar(cola, crearPersona("Alejandro", 93.37));

    printf("\n------La cola quedo: ------ \n");
    imprimir(cola);



    Persona resultado;


    printf("\n------He desencolado a: ------ \n");

    desencolar(cola, &resultado);

    mostrarPersona(resultado);

    printf("\n------La cola quedo: ------ \n");
    imprimir(cola);



    int valor;
    obtenerTamanio(cola, &valor);
    printf("\nResultado obtenido: %d\n", valor);





    return 0;
}
