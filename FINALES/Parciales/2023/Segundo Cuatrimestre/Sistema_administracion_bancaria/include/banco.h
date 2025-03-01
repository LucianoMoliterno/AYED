#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
#include "cliente.h"
#include <string>

struct Nodo {
    Cliente* dato;
    Nodo* siguiente;
};

class Banco {
private:
    std::string nombre;
    std::string direccion;
    Nodo* listaClientes;
    Nodo* pilaClientes;

public:
    Banco(std::string nom = "", std::string dir = "");
    void setNombre(std::string nom);
    void setDireccion(std::string dir);
    std::string getNombre();
    std::string getDireccion();
    void agregarCliente(Cliente* cli);
    void mostrarBanco();
    void ordenarPorHora();
    void copiarLista(Banco& destino);
    void mostrarClientesCajaAhorro();
    void apilarClientes();
    void mostrarPila();
};

#endif
