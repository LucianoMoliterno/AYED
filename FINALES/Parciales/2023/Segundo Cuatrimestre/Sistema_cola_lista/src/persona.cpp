#include "persona.h"
#include <stdlib.h>
#include <string.h>

PtrPersona crearPersona(int id, const char* nombre, int edad) {
    PtrPersona persona = (PtrPersona)malloc(sizeof(struct Persona));
    persona->id = id;
    strcpy(persona->nombre, nombre);
    persona->edad = edad;
    return persona;
}

int getId(PtrPersona persona) {
    return persona->id;
}
