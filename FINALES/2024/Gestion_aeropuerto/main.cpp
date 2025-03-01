#include "Aeropuerto.h"
#include "Pasajero.h"
#include "Destino.h"
#include <iostream>

using namespace std;

int main() {
    // 1. Crear el Aeropuerto
    Aeropuerto aeropuerto("Ministro Pistarini", "Riccheri 33", "11-5480-61111");

    // 2. Agregar aviones al Aeropuerto
    aeropuerto.agregarAvion(Avion("Boeing 737", "1111", 10));
    aeropuerto.agregarAvion(Avion("Airbus A320", "2222", 5));
    aeropuerto.agregarAvion(Avion("Embraer E190", "3333", 5));

    // Obtener referencia a los aviones
    vector<Avion>& aviones = aeropuerto.getAviones();

    // 3. Agregar pasajeros a los aviones
    if (aviones.size() > 0) {
        aviones[0].agregarPasajero(Pasajero("Apellido1", 1, 'S'));
        aviones[0].agregarPasajero(Pasajero("Apellido2", 2, 'S'));
        aviones[0].agregarPasajero(Pasajero("Apellido3", 3, 'N'));
    }

    if (aviones.size() > 1) {
        aviones[1].agregarPasajero(Pasajero("Apellido4", 4, 'S'));
        aviones[1].agregarPasajero(Pasajero("Apellido5", 5, 'N'));
        aviones[1].agregarPasajero(Pasajero("Apellido6", 6, 'S'));
    }

    // 4. Mostrar el Aeropuerto (Aviones y Pasajeros)
    cout << "\nAeropuerto inicial:" << endl;
    aeropuerto.mostrarAeropuerto();

    // 5. Agregar los 6 pasajeros al avión 3333 y manejar el error por capacidad
    if (aviones.size() > 2) {
        aviones[2].agregarPasajero(Pasajero("Apellido1", 1, 'S'));
        aviones[2].agregarPasajero(Pasajero("Apellido2", 2, 'S'));
        aviones[2].agregarPasajero(Pasajero("Apellido3", 3, 'N'));
        aviones[2].agregarPasajero(Pasajero("Apellido4", 4, 'S'));
        aviones[2].agregarPasajero(Pasajero("Apellido5", 5, 'N'));
        aviones[2].agregarPasajero(Pasajero("Apellido6", 6, 'S')); // Esto debería fallar
    }

    cout << "\nAeropuerto despues de agregar pasajeros al avion 3333:" << endl;
    aeropuerto.mostrarAeropuerto();

    // 6. Eliminar a todos los pasajeros con ventanilla
    for (auto& avion : aviones) {
        avion.eliminarPasajerosVentanilla();
    }

    cout << "\nAeropuerto despues de eliminar pasajeros con ventanilla:" << endl;
    aeropuerto.mostrarAeropuerto();

    // 7. Agregar destinos al avión 3
    if (aviones.size() > 2) {
        aviones[2].agregarDestino(Destino("Buenos Aires", -34.6037, -58.3816));
        aviones[2].agregarDestino(Destino("Asuncion", -25.2637, -57.5759));
        aviones[2].agregarDestino(Destino("La Paz", -16.5000, -68.1500));
    }

    cout << "\nDestinos agregados al avion 3." << endl;

    // 8. Calcular distancia recorrida por el avión 3
    if (aviones.size() > 2) {
        float distancia = aviones[2].calcularDistanciaRecorrida();
        cout << "\nDistancia recorrida por el avion 3: " << distancia << " unidades." << endl;
    }

    return 0;
}
