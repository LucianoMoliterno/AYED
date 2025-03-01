#include "banco.h"
#include <iostream>
using namespace std;

int main() {
    Banco banco("Santander", "EVA PERON 1111");
    Banco copiaOriginal("Santander", "EVA PERON 1111");

    // Punto 1: Crear y enlistar clientes
    Cliente* c1 = new Cliente("Ruben Fernandez", "Caja de ahorro", 11);
    Cliente* c2 = new Cliente("Lucia Pascuale", "Inversiones", 9);
    Cliente* c3 = new Cliente("Brenda Benitez", "Moneda extranjera", 11);
    Cliente* c4 = new Cliente("Luana Szpyrka", "Caja de ahorro", 13);

    banco.agregarCliente(c4);
    banco.agregarCliente(c3);
    banco.agregarCliente(c2);
    banco.agregarCliente(c1);

    cout << "-----------PUNTO 1: Original-----------" << endl;
    banco.mostrarBanco();

    // Copiar lista original antes de ordenar
    banco.copiarLista(copiaOriginal);

    // Punto 2: Ordenar por hora
    cout << "-----------PUNTO 2: Ordenado-----------" << endl;
    banco.ordenarPorHora();
    banco.mostrarBanco();

    // Punto 3: Mostrar copia original
    cout << "-----------PUNTO 3: Copia-----------" << endl;
    copiaOriginal.mostrarBanco();

    // Punto 4: Mostrar clientes de Caja de Ahorro
    banco.mostrarClientesCajaAhorro();

    // Punto 5: Apilar clientes
    banco.apilarClientes();
    banco.mostrarPila();

    return 0;
}
