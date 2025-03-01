#include "primitivas_lista_circular.h"

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

void cargar_dato(t_dato*);
void mostrar_dato(const t_dato*);

int main()
{

    printf("\n------------- LISTA CIRCULAR ------------- \n");

    t_lista lista;
    t_dato dato;

    crear_lista(&lista);

    printf("\nLa lista  está llena: %d \n",lista_llena(&lista));

    dato.numero = 11;
    poner_en_lista(&lista,&dato);
    dato.numero = -1;
    poner_en_lista(&lista,&dato);
    dato.numero = 3;
    poner_en_lista(&lista,&dato);
    dato.numero = 4;
    poner_en_lista(&lista,&dato);



    ver_primero_de_lista(&lista,&dato);
    printf("\n\n El primero de la lista es: %d \n",dato.numero);


    printf("\n\n Sacar todo de la lista \n");
    while(!lista_vacia(&lista))
    {
        sacar_de_lista(&lista,&dato);
        mostrar_dato(&dato);
    }


    printf("\n\n Se ha desalistado todo \n");


    dato.numero = 4;
    poner_en_lista(&lista,&dato);

    vaciar_lista(&lista);
    printf("\n La lista fue vaciada \n");


    getch();
    return 0;
}




void mostrar_dato(const t_dato *d)
{
    printf("\n\n DATO: %d \t",d->numero);
}
