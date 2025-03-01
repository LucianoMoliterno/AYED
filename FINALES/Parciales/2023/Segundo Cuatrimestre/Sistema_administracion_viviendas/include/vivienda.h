#ifndef VIVIENDA_H_INCLUDED
#define VIVIENDA_H_INCLUDED
#include <string>

class Vivienda {
private:
    int id;
    float precio;
    int metros;
    std::string direccion;

public:
    Vivienda(int id = 0, float precio = 0, int metros = 0, std::string dir = "");
    int getId() const;
    float getPrecio() const;
    int getMetros() const;
    std::string getDireccion() const;
    void mostrar() const;
};

#endif
