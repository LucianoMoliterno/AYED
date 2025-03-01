#ifndef SUCURSALES_H
#define SUCURSALES_H

#include <string>
using namespace std;

const int MAX_SUCURSALES = 25;

// Enumeración para las zonas.
enum Zona { NORTE, SUR, ESTE, OESTE, CENTRO };

// Estructura para almacenar los datos de una sucursal.
struct Sucursal {
    int id;
    string direccion;
    Zona zona;
    double facturacion;
};

// Funciones auxiliares
string obtenerNombreZona(Zona z);
Zona obtenerZonaDesdeInput();

// Funciones principales
int cargarSucursales(Sucursal sucursales[], int maxSucursales);
void totalFacturacionPorZona(const Sucursal sucursales[], int numSucursales);
void maximoMinimoFacturacion(const Sucursal sucursales[], int numSucursales);

#endif
