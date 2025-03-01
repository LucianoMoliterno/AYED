#include "Cine.h"
#include <iostream>
#include <fstream>

using namespace std;

// Constructor del cliente
Cliente::Cliente(string n) : nombre(n) {}

// Métodos del cine
void Cine::agregarCliente(string nombre) {
    Cliente nuevoCliente(nombre);
    colaClientes.push(nuevoCliente);
}

void Cine::agregarSnackAlCliente(string nombreSnack, double precio) {
    if (colaClientes.empty()) {
        cout << "No hay clientes en la cola." << endl;
        return;
    }
    Cliente& clienteActual = colaClientes.front();
    clienteActual.snacks.push(Snack(nombreSnack, precio));
}

void Cine::mostrarCola() {
    if (colaClientes.empty()) {
        cout << "No hay clientes en la cola." << endl;
        return;
    }
    queue<Cliente> copiaCola = colaClientes;
    while (!copiaCola.empty()) {
        Cliente cliente = copiaCola.front();
        copiaCola.pop();

        cout << "Cliente: " << cliente.nombre << endl;
        cout << "Snacks: ";
        stack<Snack> snacksCopia = cliente.snacks;

        if (snacksCopia.empty()) {
            cout << "Ninguno" << endl;
        } else {
            while (!snacksCopia.empty()) {
                Snack snack = snacksCopia.top();
                snacksCopia.pop();
                cout << snack.nombre << " ($" << snack.precio << "), ";
            }
            cout << endl;
        }
        cout << "-----------------" << endl;
    }
}

void Cine::procesarCliente() {
    if (colaClientes.empty()) {
        cout << "No hay clientes en la cola." << endl;
        return;
    }

    Cliente clienteActual = colaClientes.front();
    cout << "Procesando cliente: " << clienteActual.nombre << endl;
    colaClientes.pop();
}

void Cine::guardarEnArchivo(string nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (!archivo) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    queue<Cliente> copiaCola = colaClientes;
    while (!copiaCola.empty()) {
        Cliente cliente = copiaCola.front();
        copiaCola.pop();

        archivo << cliente.nombre << endl;
        stack<Snack> snacksCopia = cliente.snacks;
        while (!snacksCopia.empty()) {
            Snack snack = snacksCopia.top();
            snacksCopia.pop();
            archivo << snack.nombre << "," << snack.precio << endl;
        }
        archivo << "---" << endl;
    }

    archivo.close();
    cout << "Datos guardados en " << nombreArchivo << endl;
}
