#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void mostrarLista (Lista *list) {
    for ( int i = 0; i < listaGetSize(list); ++i) {
        int x = *( (int*) listaGet(list, i) );
		printf("%d ", x);
    }
    printf("\n");
}

void mostrarListaF (Lista *list) {
    for ( int i = 0; i < listaGetSize(list); ++i) {
        float x = *( (float*) listaGet(list, i) );
		printf("%f ", x);
    }
    printf("\n");
}

int DecSort (void *x, void *y) {
    int a = *((int*) x);
    int b = *((int*) y);

	if (a > b)
		return -1;
	else if (a < b)
		return 1;
	else
		return 0;
}

int PairSort (void *x, void *y) {
    int a = *((int*) x);
    int b = *((int*) y);

	if (a % 2 == 0 && b % 2 == 0) {
		return a - b;
	} else if (a % 2 == 0 && b % 2 != 0) {
		return -1;
	} else if (a % 2 != 0 && b % 2 == 0) {
		return 1;
	} else {
		return a - b;
	}
}

int main() {
    //Crea la lista
    printf("------- Creamos Lista de enteros--------\n");
    Lista list;
    //Inicia la lista
    listaInit(&list, sizeof(int));

    printf("Esta vacia la lista: %d\n", listaIsEmpty(&list));

    //10 para agregar
    int x = 10;
    listaPushBack(&list, &x);
    x= -1;
    listaPushBack(&list, &x);
    x= 11;
    listaPushBack(&list, &x);
    x= 31;
    listaPushBack(&list, &x);

    mostrarLista(&list);

    printf("Ya insertamos todos los elementos...\n");
    printf("El tamanio final es: %d\n", listaGetSize(&list));


    int *backup = (int*) malloc(sizeof (int));
    printf("Elemento a ser removido: %d\n", *(  (int*) listaGetLast(&list)  ));
    listaPopBack(&list, backup);

    printf("Quite el ultimo elemento que era: %d\n", *backup);
    mostrarLista(&list);



    printf("Orden  >...");
    listaBubbleSort(&list, DecSort);
    mostrarLista(&list);

	printf("Orden < primero los pares ...");
    listaQuickSort(&list, 0, listaGetSize(&list) - 1, PairSort);
    mostrarLista(&list);

    printf("Limpiamos la lista...");
    listaClear(&list);

    printf("Esta vacia la lista: %d\n", listaIsEmpty(&list));


    printf("------- Creamos Lista de float--------\n");
    //Lo mismo pero con lista de float
    //Crea la lista
    Lista listFloat;
    //Inicia la lista
    listaInit(&listFloat, sizeof(float));

    //10 para agregar
    float f = 112.44;
    listaPushBack(&listFloat, &f);
    f = -2.44;
    listaPushBack(&listFloat, &f);
    f = 23.142;
    listaPushBack(&listFloat, &f);
    mostrarListaF(&listFloat);


    return 0;
}
