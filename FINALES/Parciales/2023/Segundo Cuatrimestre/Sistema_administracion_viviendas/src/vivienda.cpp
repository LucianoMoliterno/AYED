#include "vivienda.h"
#include <iostream>
using namespace std;

Vivienda::Vivienda(int _id, float _precio, int _metros, string _dir) {
    id = _id;
    precio = _precio;
    metros = _metros;
    direccion = _dir;
}

int Vivienda::getId() const { return id; }
float Vivienda::getPrecio() const { return precio; }
int Vivienda::getMetros() const { return metros; }
string Vivienda::getDireccion() const { return direccion; }

void Vivienda::mostrar() const {
    cout << "||Vivienda #" << id << "-------" << endl;
    cout << "US$ " << precio << " ---- " << metros << " mt2" << endl;
    cout << "ubicada en: " << direccion << endl;
    cout << "------------------------" << endl;
}
