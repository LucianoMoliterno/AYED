#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED


struct PersonaEstructura;

typedef struct PersonaEstructura * Persona;

Persona crearPersona(char  n[20], float p);

void mostrarPersona(Persona p);


#endif // PERSONA_H_INCLUDED
