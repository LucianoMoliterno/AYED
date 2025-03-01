#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include <string>

class Cliente {
private:
    std::string nombre;
    std::string turno;
    int hora;

public:
    Cliente(std::string nom = "", std::string tur = "", int hr = 0);
    void setNombre(std::string nom);
    void setTurno(std::string tur);
    void setHora(int hr);
    std::string getNombre();
    std::string getTurno();
    int getHora();
};

#endif
