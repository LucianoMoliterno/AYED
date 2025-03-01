#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include "lista.h"
struct PersonaEstructura;

typedef struct PersonaEstructura * Persona;

Persona crearPersona(char  n[20], float p);

void mostrarPersona(Persona p);

void mostrarListaPersonas (Lista lista);

float getPeso(Persona p);


#endif // PERSONA_H_INCLUDED
