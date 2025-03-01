#include "circulo.h"
#define PI 3.14159

/******************************************************************************/
/* Implementacion de Primitivas */

Circulo* crear(Circulo *circulo) {
	circulo = new Circulo();
	setRadio(circulo, 1);
	
	return circulo;
}

/*----------------------------------------------------------------------------*/

void setRadio(Circulo *circulo, float iRadio) {
     circulo->radio = iRadio;
}

/*----------------------------------------------------------------------------*/

float getRadio(Circulo *circulo) {
    return circulo->radio;
}

/*----------------------------------------------------------------------------*/

void eliminar(Circulo *circulo) {
	delete circulo;
}

/*----------------------------------------------------------------------------*/

float calcularSuperficie(Circulo *circulo) {
      return PI*circulo->radio*circulo->radio;
}

/*----------------------------------------------------------------------------*/

float calcularPerimetro(Circulo *circulo) {
      return 2*PI*circulo->radio;
}

/*----------------------------------------------------------------------------*/

float calcularDiametro(Circulo *circulo) {
      return circulo->radio*2;
}

/*----------------------------------------------------------------------------*/

float calcularLongitudArco(Circulo *circulo, float angulo) {
      return calcularPerimetro(circulo)*(angulo/360);
}