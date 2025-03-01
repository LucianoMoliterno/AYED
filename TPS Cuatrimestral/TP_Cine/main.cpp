#include <iostream>
#include "Cine.h"

using namespace std;

int main() {
    Cine cine;
    int opcion;
    string nombreCliente, nombreSnack, archivo;
    double precioSnack;

    do {
        cout << "===== Menu Cine =====" << endl;
        cout << "1. Agregar cliente" << endl;
        cout << "2. Añadir snack a cliente actual" << endl;
        cout << "3. Mostrar cola de clientes" << endl;
        cout << "4. Procesar cliente" << endl;
        cout << "5. Guardar datos en archivo" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre del cliente: ";
                cin >> nombreCliente;
                cine.agregarCliente(nombreCliente);
                break;
            case 2:
                cout << "Ingrese el nombre del snack: ";
                cin >> nombreSnack;
                cout << "Ingrese el precio del snack: ";
                cin >> precioSnack;
                cine.agregarSnackAlCliente(nombreSnack, precioSnack);
                break;
            case 3:
                cine.mostrarCola();
                break;
            case 4:
                cine.procesarCliente();
                break;
            case 5:
                cout << "Ingrese el nombre del archivo: ";
                cin >> archivo;
                cine.guardarEnArchivo(archivo);
                break;
            case 6:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 6);

    return 0;
}
