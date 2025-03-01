#ifndef DATO_H_INCLUDED
#define DATO_H_INCLUDED

#include "animal.h"


//Lo hice así para no poner los get y set
struct DatoEstructura{

    Animal animal;


};

typedef struct DatoEstructura * Dato;

Dato crearDato();



#endif // DATO_H_INCLUDED
