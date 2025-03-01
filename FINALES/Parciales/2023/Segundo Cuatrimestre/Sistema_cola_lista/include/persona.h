#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct Persona {
    int id;
    char nombre[50];
    int edad;
};

typedef struct Persona* PtrPersona;

PtrPersona crearPersona(int id, const char* nombre, int edad);
int getId(PtrPersona persona);

#endif
