#include <cstdlib>
#include <iostream>
#include "circulo/circulo.h"

using namespace std;

int main(int argc, char *argv[]) {
    // declaro e inicializo las variables.
    int opcion = 0;
    bool seguir = true;
    float grados = 0;
    float iRadio = 0;

    cout << "Ingrese el radio del circulo: ";
    cin >> iRadio;
	
	Circulo* circulo;
	circulo = crear(circulo);

    setRadio(circulo, iRadio);

    // Itero hasta que no quiera seguir.
    while (seguir) {
		cout << "::::::: ======================================== :::::::" << endl;
		cout << "::::::: Ingrese la opcion deseada:" << endl;
		cout << "::::::: 0.- Salir" << endl;
		cout << "::::::: 1.- Informar el radio del circulo" << endl;
		cout << "::::::: 2.- Informar el perimetro del circulo" << endl;
		cout << "::::::: 3.- Informar el diametro del circulo" << endl;
		cout << "::::::: 4.- Informar el area del circulo" << endl;
		cout << "::::::: 5.- Informar longitud de un arco" << endl;
		cin >> opcion;

    	switch (opcion) {
			case 0:
				cout << "Gracias por utilizar nuestro sistema" << endl;
				seguir = false;
			break;
			
			case 1:
				cout << "===>> El radio es: " << getRadio(circulo) << endl;
			break;
			
			case 2:
				cout << "===>> El perimetro es: " << calcularPerimetro(circulo) << endl;
			break;
			
			case 3:
				cout << "===>> El diametro es: " << calcularDiametro(circulo) << endl;
			break;
			
			case 4:
				cout << "===>> El area es: " << calcularSuperficie(circulo) << endl;
			break;
			
			case 5:
				cout << " - Ingrese los grados del arco: ";
				cin >> grados;
				cout << "===>> La longitud del arco es: " << calcularLongitudArco(circulo, grados) << endl;
			break;
			
			default:
				cout << "Opcion incorrecta, vuelva a intentar..." << endl;
			break;
        }
		
		cout << "\n" << endl;
    }

    eliminar(circulo);

    return EXIT_SUCCESS;
}