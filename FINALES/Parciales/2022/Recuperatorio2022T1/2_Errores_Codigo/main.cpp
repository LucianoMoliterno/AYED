#include <iostream>
using namespace std;
#include <cmath>
/******************************************************************************/
/* Definiciones de Tipos de Datos */
/*--------------------------------*/
/* Tipo de Estructura del Circulo */
typedef struct Circulo{
float radio;
} Circulo;
/******************************************************************************/
/* Primitivas */
void crear(Circulo &circulo) {
    circulo.radio = 0;
}

void setRadio(Circulo &circulo, float dato) {
    circulo.radio = dato;
}

float getRadio(Circulo &circulo) {
    return circulo.radio;
}

void eliminar(Circulo &circulo) {
    // Simulamos la eliminación del objeto
    circulo.radio = 0;
}

float calcularSuperficie(Circulo &circulo) {
    return 3.14 * circulo.radio * circulo.radio;
}

float calcularDiametro(Circulo &circulo) {
    return 2 * circulo.radio;
}

float calcularPerimetro(Circulo &circulo) {
    return 2 * 3.14 * circulo.radio;
}
float calcularLongitudArco(Circulo &circulo, float grados);
float calcularLongitudArco(Circulo &circulo, float grados) {
    if (grados <= 0 || grados > 360) {
        cout << "Error: El ángulo debe estar entre 0 y 360 grados." << endl;
        return 0;
    }
    return 2 * M_PI * circulo.radio * (grados / 360.0);
}

int main(int argc, char *argv[])
{
// declaro e inicializo las variables.
int opcion = 0;
bool seguir = true;
float grados = 0;
float radio = 0;
/******************************************************************************/
//Circulo circulo = new Circulo(); 1.Error en asignación de memoria
Circulo circulo;
/******************************************************************************/
cout << "Ingrese el radio del circulo: ";
cin >> radio;
circulo.radio = radio;
// Itero hasta que no quiera seguir.
while (seguir == true){
system("cls");
cout << "Ingrese la opcion deseada:" << endl;
cout << "0.- Salir" << endl;
cout << "1.- Informar el radio del circulo" << endl;
cout << "2.- Informar el perimetro del circulo" << endl;
cout << "3.- Informar el diametro del circulo" << endl;
cout << "4.- Informar el area del circulo" << endl;
cout << "5.- Informar longitud de un arco" << endl;
cin >> opcion;
switch (opcion){
case 0:
cout << "Gracias por utilizar nuestro sistema" << endl;
eliminar(circulo);
seguir = false;
break;
case 1:
/******************************************************************************/
//cout << "El radio es: " << circulo.getRadio() << endl; 2.Error en llamada a getRadio
cout << "El radio es: " << getRadio(circulo) << endl;
/******************************************************************************/
break;
case 2:
cout << "El perimetro es: " << calcularPerimetro(circulo) << endl;
break;
case 3:
cout << "El diametro es: " << calcularDiametro(circulo) << endl;
break;
case 4:
cout << "El area es: " << calcularSuperficie(circulo) << endl;
break;
case 5:
cout << "Ingrese los grados del arco: ";
cin >> grados;
cout << "La longitud del arco es: " << calcularLongitudArco(circulo, grados) << endl;
break;
default:
cout << "Opcion incorrecta, vuelva a intentar" << endl;
break;
}
system("PAUSE");
}
/******************************************************************************/
//eliminar(&circulo); 3.Error en llamada a eliminar
eliminar(circulo);
/******************************************************************************/
return EXIT_SUCCESS;
}
