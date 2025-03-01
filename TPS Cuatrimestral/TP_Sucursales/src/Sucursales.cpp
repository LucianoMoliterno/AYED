#include "sucursales.h"
#include <iostream>
#include <limits>
using namespace std;

string obtenerNombreZona(Zona z) {
    switch (z) {
        case NORTE: return "Norte";
        case SUR: return "Sur";
        case ESTE: return "Este";
        case OESTE: return "Oeste";
        case CENTRO: return "Centro";
        default: return "Desconocido";
    }
}

Zona obtenerZonaDesdeInput() {
    int opcion;
    do {
        cout << "Seleccione la zona (0: Norte, 1: Sur, 2: Este, 3: Oeste, 4: Centro): ";
        cin >> opcion;
        if (opcion < 0 || opcion > 4) {
            cout << "Zona invalida. Intente nuevamente.\n";
        }
    } while (opcion < 0 || opcion > 4);
    return static_cast<Zona>(opcion);
}

int cargarSucursales(Sucursal sucursales[], int maxSucursales) {
    int count = 0;
    while (count < maxSucursales) {
        int id;
        cout << "Ingrese el ID de la sucursal (1000 para finalizar): ";
        cin >> id;

        if (id == 1000) break;
        if (id < 100 || id > 999) {
            cout << "ID fuera de rango (100-999). Intente nuevamente.\n";
            continue;
        }

        sucursales[count].id = id;

        cout << "Ingrese la direccion de la sucursal: ";
        cin.ignore();
        getline(cin, sucursales[count].direccion);

        sucursales[count].zona = obtenerZonaDesdeInput();

        cout << "Ingrese la facturacion: ";
        cin >> sucursales[count].facturacion;

        count++;
    }
    return count;
}

void totalFacturacionPorZona(const Sucursal sucursales[], int numSucursales) {
    double totales[5] = {0};

    for (int i = 0; i < numSucursales; i++) {
        totales[sucursales[i].zona] += sucursales[i].facturacion;
    }

    cout << "Total de facturacion por zona:\n";
    for (int i = 0; i < 5; i++) {
        cout << obtenerNombreZona(static_cast<Zona>(i)) << ": " << totales[i] << endl;
    }
}

void maximoMinimoFacturacion(const Sucursal sucursales[], int numSucursales) {
    if (numSucursales == 0) {
        cout << "No hay sucursales cargadas.\n";
        return;
    }

    int indiceMax = 0, indiceMin = 0;

    for (int i = 1; i < numSucursales; i++) {
        if (sucursales[i].facturacion > sucursales[indiceMax].facturacion) {
            indiceMax = i;
        }
        if (sucursales[i].facturacion < sucursales[indiceMin].facturacion) {
            indiceMin = i;
        }
    }

    cout << "Sucursal con máxima facturacion:\n";
    cout << "ID: " << sucursales[indiceMax].id << ", Direccion: " << sucursales[indiceMax].direccion
         << ", Zona: " << obtenerNombreZona(sucursales[indiceMax].zona)
         << ", Facturacion: " << sucursales[indiceMax].facturacion << endl;

    cout << "Sucursal con mínima facturacion:\n";
    cout << "ID: " << sucursales[indiceMin].id << ", Direccion: " << sucursales[indiceMin].direccion
         << ", Zona: " << obtenerNombreZona(sucursales[indiceMin].zona)
         << ", Facturacion: " << sucursales[indiceMin].facturacion << endl;
}
