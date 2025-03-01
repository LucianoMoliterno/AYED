#ifndef CINE_H_INCLUDED
#define CINE_H_INCLUDED
#include <queue>
#include <stack>
#include <string>
#include "Snack.h"
using namespace std;

struct Cliente {
    string nombre;
    stack<Snack> snacks;

    Cliente(string n);
};

class Cine {
private:
    queue<Cliente> colaClientes;

public:
    void agregarCliente(string nombre);
    void agregarSnackAlCliente(string nombreSnack, double precio);
    void mostrarCola();
    void procesarCliente();
    void guardarEnArchivo(string nombreArchivo);
};
#endif // CINE_H_INCLUDED



