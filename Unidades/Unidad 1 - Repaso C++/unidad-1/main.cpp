#include <iostream>
#include <cstring>
#include "persona.h"


//Definiciones
void mostrarAlgo();



using namespace std;


int main()
{

    printf("------HOLA BIENVENIDOS-----\n");
    cout << "--------------" <<  "********" << endl;

    int entero;
    char caracteres;
    float flotantes;
    double real;
    char palabra[20];

    //Asignación estática
    entero = 3;
    caracteres = 'f';
    flotantes = 13.4;
    real = 33.56;
    strcpy(palabra , "NICO");

    //printf
    cout << "ENTERO: " << entero << "\nCARACTER: " << caracteres << endl;

    //Asignación
    //cout << "Ingresar un entero: \n" << endl;
    //scanf("%d", &entero);
    //cin >> entero; //Palabras tienen el problema del espacio ---> fflush(stdin); gets(palabras);

    //cout << "ENTERO: " << entero <<endl;

    //Bucles for
    for (int i = 0; i<3; i++){

        cout << "----> " << palabra[i] << "\n" <<endl;

    } //While, do While.... If



    //Llamada al procedimiento

    mostrarAlgo();


    Persona p1 = crearPersona(33, "Brenda");
    mostrarPersona(p1);


    return 0;
}


//Implementación
void mostrarAlgo(){


    printf("*********************\n");


};

