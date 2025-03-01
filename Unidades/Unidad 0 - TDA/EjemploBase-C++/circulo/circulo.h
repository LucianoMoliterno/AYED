#ifndef _CIRCULO_H_
#define _CIRCULO_H_
#include <iostream>

/**
    Definición del Tipo de Dato para manejo de Circulos.
    Atributos:
    * radio,
    * diámetro,
    * perímetro,
    * superficie.

    Axiomas:
    * radio > 0
    * diametro = 2*radio
    * perímetro = 2*pi*radio
    * superficie = pi*radio*radio
*/

/******************************************************************************/
/* Definiciones de Tipos de Datos */
/*--------------------------------*/

/* Tipo de Estructura del Circulo */
struct Circulo {
    float radio;
    std::string color;
};


/******************************************************************************/
/* Definicion de Primitivas */
/*--------------------------*/

/*
  PRE : El circulo no debe haber sido creado.
  POST: El circulo queda creado y preparado para ser usado.
  El radio queda setteado en 1.
*/
//[retorno de la funcion] [nombre de la funcion]([datos que necesita mi funcion])
  Circulo* crear(Circulo *circulo);

/*----------------------------------------------------------------------------*/
/*
  PRE : Circulo creado con crear().
  POST: El campo radio pasa a contener el dato ingresado.

  circulo: Instancia sobre la cual se invoca la primitiva.
  dato: dato a ingresarse.
*/

void setRadio(Circulo *circulo, float iRadio);

/*----------------------------------------------------------------------------*/
/*
  PRE : Circulo creado con crear().
  POST: Devuelve el dato contenido en el campo radio.

  circulo: Instancia sobre la cual se invoca la primitiva.
*/

float getRadio(Circulo *circulo);


/*----------------------------------------------------------------------------*/
/*
  PRE : Circulo creado con crear().
  POST : El circulo es eliminado.

  circulo : Instancia sobre la cual se invoca la primitiva.
*/

void eliminar(Circulo *circulo);


/*----------------------------------------------------------------------------*/
/*
  PRE : Circulo creado con crear().
  POST : Devuelve el dato que representa la superficie.

  circulo : Instancia sobre la cual se invoca la primitiva.
*/

float calcularSuperficie(Circulo *circulo);


/*----------------------------------------------------------------------------*/
/*
  PRE : Circulo creado con crear().
  POST : Devuelve el dato que representa el perimetro.

  circulo : Instancia sobre la cual se invoca la primitiva.
*/

float calcularPerimetro(Circulo *circulo);


/*----------------------------------------------------------------------------*/
/*
  PRE : Circulo creado con crear().
  POST : Devuelve el dato que representa el diametro.

  circulo : Instancia sobre la cual se invoca la primitiva.
*/

float calcularDiametro(Circulo *circulo);


/*----------------------------------------------------------------------------*/
/*
  PRE : Circulo creado con crear().
  POST : Devuelve el dato que representa la longitud del arco.

  circulo : Instancia sobre la cual se invoca la primitiva.
  agulo: Dato del angulo que se utilizara para calcular el arco.
*/

float calcularLongitudArco(Circulo *circulo, float angulo);

#endif /*_CIRCULO_H_*/