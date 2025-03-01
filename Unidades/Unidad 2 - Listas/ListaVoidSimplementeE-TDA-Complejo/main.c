#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "Lista.h"


void imprimirListaString(PtrLista lista);
void imprimirListaFloat(PtrLista lista);
void imprimirListaAnimal(PtrLista lista);


int main()
{

    PtrLista lista=crearLista();

    agregarDatoLista(lista,"Nico");
    agregarDatoLista(lista,"Pepe");
    agregarDatoLista(lista,"Lanus campeon");
    agregarDatoLista(lista,"UNLa");


    imprimirListaString(lista);



    PtrLista lista2=crearLista();

    float dato1 = 12.6f;
    float dato2 = 43.64f;
    float dato3 = 133.14f;
    float dato4 = 24.622f;

    agregarDatoLista(lista2,&dato1);
    agregarDatoLista(lista2,&dato2);
    agregarDatoLista(lista2,&dato3);
    agregarDatoLista(lista2,&dato4);


    imprimirListaFloat(lista2);


    Animal animal1 = crearAnimal("Ave", "Caniche", "Samanta", 22.3, 2, 'm');
    Animal animal2 = crearAnimal("Perro", "Dogo", "Ishikame", 31.1, 5, 'm');
    Animal animal3 = crearAnimal("Gato", "Siames", "Robertina", 8.3, 3, 'f');

    PtrLista lista3=crearLista();

    agregarDatoLista(lista3,animal1);
    agregarDatoLista(lista3,animal2);
    agregarDatoLista(lista3,animal3);


    imprimirListaAnimal(lista3);


    return 0;
}

void imprimirListaFloat(PtrLista lista){

    printf("\n\n------ Lista con %d datos: ------\n",longitudLista(lista) );

    int i=0;

    for(i=0;i<longitudLista(lista);i++){
        printf("%.2f  || ",*(float*)getDatoLista(lista,i));
    }

}

void imprimirListaString(PtrLista lista){

    printf("\n\n------ Lista con %d datos: ------\n",longitudLista(lista) );

    int i=0;

    for(i=0;i<longitudLista(lista);i++){
        printf("%s  || ",(char*)getDatoLista(lista,i));
    }

}


void imprimirListaAnimal(PtrLista lista){

    printf("\n\n------ Lista con %d datos: ------\n",longitudLista(lista) );

    int i=0;

    for(i=0;i<longitudLista(lista);i++){
        mostrarAnimal( (Animal)  getDatoLista(lista,i) );

    }

}




