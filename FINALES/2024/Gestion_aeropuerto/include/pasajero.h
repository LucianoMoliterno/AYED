#ifndef PASAJERO_H
#define PASAJERO_H

#include <string>
using namespace std;

class Pasajero {
private:
    string apellido;
    int dni;
    char ventanilla; // 'S' para ventanilla, 'N' para no.

public:
    Pasajero(string apellido, int dni, char ventanilla);
    string getApellido() const;
    int getDNI() const;
    char getVentanilla() const;
};

#endif // PASAJERO_H
