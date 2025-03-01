#include "lista_doblemente_enlazada.h"

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>


void mostrar_dato(const t_dato*);
int comparar_dato(const void*,const void*);
int comparar_clave(const void*,const void*);
void mostrar_nodo(const void*);



int main()
{

    printf("\n-----------  LISTA DOBLEMENTE ENLAZADA ---------------\n");

    t_lista lista;
    t_dato dato;

    crear_lista(&lista);


    printf("\n La lista esta vacia?? %d \n",lista_vacia(&lista));

    dato.numero = 7;
    insertar_en_lista_ordenada_sin_duplicado(&lista,&dato,comparar_dato);
    dato.numero = 3;
    insertar_en_lista_ordenada_sin_duplicado(&lista,&dato,comparar_dato);
    dato.numero = -11;
    insertar_en_lista_ordenada_sin_duplicado(&lista,&dato,comparar_dato);
    dato.numero = -98;
    insertar_en_lista_ordenada_sin_duplicado(&lista,&dato,comparar_dato);
    dato.numero = 101;
    insertar_en_lista_ordenada_sin_duplicado(&lista,&dato,comparar_dato);
    dato.numero = 3;
    insertar_en_lista_ordenada_sin_duplicado(&lista,&dato,comparar_dato);
    dato.numero = 5;
    insertar_en_lista_ordenada_sin_duplicado(&lista,&dato,comparar_dato);




    printf("\n Lista en orden ascendente \n");
    mostrar_lista_orden_ascendente(&lista,mostrar_nodo);


    if(eliminar_primero_de_lista(&lista,&dato))
    {
        printf("\n Nodo eliminado: \n");
        mostrar_dato(&dato);
    }

    printf("\n Eliminar el Ultimo de la lista \n");
    if(eliminar_ultimo_de_lista(&lista,&dato))
    {
        printf("\n Nodo eliminado: \n");
        mostrar_dato(&dato);
    }

    printf("\n\n Lista en orden descendente \n");
    mostrar_lista_orden_descendente(&lista,mostrar_nodo);

    printf("\n Eliminar un nodo \n");
    printf("\n Cargue una clave a eliminar: \n");

    int clave;
    printf("\n Ingrese clave (numero): \t");
    scanf("%d",&clave);

   eliminar_de_lista_ordenada_por_clave(&lista,&dato,(void*)&clave,comparar_clave);

   printf("\n Lista luego de eliminar: \n");
    mostrar_lista_orden_ascendente(&lista,mostrar_nodo);


    printf("\n Ver nodo actual de la lista \n");
    ver_nodo_actual_de_lista(&lista,&dato);
    mostrar_dato(&dato);



    printf("\n Ver primero de la lista \n");
    ver_primero_de_lista(&lista,&dato);
    mostrar_dato(&dato);

    printf("\n Ver Ultimo de la lista \n");
    ver_ultimo_de_lista(&lista,&dato);
    mostrar_dato(&dato);

    printf("\n Cantidad de nodos: \t %d \n",contar_nodos_de_lista(&lista));

    vaciar_lista(&lista);
    printf("\n La lista fue vaciada \n");


    return 0;
}





void mostrar_dato(const t_dato *d)
{
    printf("\n DATO: \t %d \n",d->numero);
}

int comparar_dato(const void *v1,const void *v2)
{
    int *e1=(int*)v1,*e2=(int*)v2;
    return *e1-*e2;
}

int comparar_clave(const void *v,const void *c)
{
    t_dato *e=(t_dato*)v;
    int *clave=(int*)c;
    return e->numero-*clave;
}

void mostrar_nodo(const void *v)
{
    t_dato *e=(t_dato*)v;
    printf("\n NODO: %d \n",e->numero);
}

