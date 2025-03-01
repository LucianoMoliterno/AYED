#ifndef SNACK_H_INCLUDED
#define SNACK_H_INCLUDED

#include <string>
using namespace std;

struct Snack {
    string nombre;
    double precio;

    Snack(string n, double p);
};
#endif // SNACK_H_INCLUDED
