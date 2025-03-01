#include "banco.h"
#include <iostream>
using namespace std;

Banco::Banco(string nom, string dir) {
    nombre = nom;
    direccion = dir;
    listaClientes = NULL;
    pilaClientes = NULL;
}

void Banco::setNombre(string nom) { nombre = nom; }
void Banco::setDireccion(string dir) { direccion = dir; }
string Banco::getNombre() { return nombre; }
string Banco::getDireccion() { return direccion; }

void Banco::agregarCliente(Cliente* cli) {
    Nodo* nuevo = new Nodo;
    nuevo->dato = cli;
    nuevo->siguiente = listaClientes;
    listaClientes = nuevo;
}

void Banco::mostrarBanco() {
    cout << "-----------BANCO-----------" << endl;
    cout << "NOMBRE: " << nombre << endl;
    cout << "DIRECCION: " << direccion << endl;

    Nodo* actual = listaClientes;
    while(actual != NULL) {
        cout << "-----------CLIENTE-------------" << endl;
        cout << "NOMBRE: " << actual->dato->getNombre() << endl;
        cout << "TURNO: " << actual->dato->getTurno() << endl;
        cout << "HORA: " << actual->dato->getHora() << endl;
        actual = actual->siguiente;
    }
}

void Banco::ordenarPorHora() {
    if(listaClientes == NULL || listaClientes->siguiente == NULL) return;

    Nodo *actual, *siguiente;
    Cliente* temp;
    bool huboIntercambio;

    do {
        huboIntercambio = false;
        actual = listaClientes;

        while(actual->siguiente != NULL) {
            siguiente = actual->siguiente;

            if(actual->dato->getHora() > siguiente->dato->getHora()) {
                temp = actual->dato;
                actual->dato = siguiente->dato;
                siguiente->dato = temp;
                huboIntercambio = true;
            }
            actual = actual->siguiente;
        }
    } while(huboIntercambio);
}

void Banco::copiarLista(Banco& destino) {
    Nodo* actual = listaClientes;
    while(actual != NULL) {
        Cliente* nuevoCliente = new Cliente(
            actual->dato->getNombre(),
            actual->dato->getTurno(),
            actual->dato->getHora()
        );
        destino.agregarCliente(nuevoCliente);
        actual = actual->siguiente;
    }
}

void Banco::mostrarClientesCajaAhorro() {
    cout << "-----------PUNTO 4: Buscar: caja de ahorro-----------" << endl;
    Nodo* actual = listaClientes;
    while(actual != NULL) {
        if(actual->dato->getTurno() == "Caja de ahorro") {
            cout << "-----------CLIENTE-------------" << endl;
            cout << "NOMBRE: " << actual->dato->getNombre() << endl;
            cout << "TURNO: " << actual->dato->getTurno() << endl;
            cout << "HORA: " << actual->dato->getHora() << endl;
        }
        actual = actual->siguiente;
    }
}

void Banco::apilarClientes() {
    Nodo* actual = listaClientes;
    while(actual != NULL) {
        Nodo* nuevo = new Nodo;
        nuevo->dato = new Cliente(
            actual->dato->getNombre(),
            actual->dato->getTurno(),
            actual->dato->getHora()
        );
        nuevo->siguiente = pilaClientes;
        pilaClientes = nuevo;
        actual = actual->siguiente;
    }
}

void Banco::mostrarPila() {
    cout << "-----------PUNTO 5: Apilar-----------" << endl;
    Nodo* actual = pilaClientes;
    while(actual != NULL) {
        cout << "APILADO:" << endl;
        cout << "-----------CLIENTE-------------" << endl;
        cout << "NOMBRE: " << actual->dato->getNombre() << endl;
        cout << "TURNO: " << actual->dato->getTurno() << endl;
        cout << "HORA: " << actual->dato->getHora() << endl;
        actual = actual->siguiente;
    }
}
