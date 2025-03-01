#include "sucursales.h"
#include <iostream>
using namespace std;

int main() {
    Sucursal sucursales[MAX_SUCURSALES];
    int numSucursales = 0;

    int opcion;
    do {
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Cargar datos de sucursales\n";
        cout << "2. Total de facturacion por zona\n";
        cout << "3. Sucursal con maxima y minima facturacion\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                numSucursales = cargarSucursales(sucursales, MAX_SUCURSALES);
                break;
            case 2:
                totalFacturacionPorZona(sucursales, numSucursales);
                break;
            case 3:
                maximoMinimoFacturacion(sucursales, numSucursales);
                break;
            case 4:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 4);

    return 0;
}
