#ifndef NODO_H
#define NODO_H

template <typename T>
class Nodo {
public:
    T dato;       // Dato almacenado en el nodo
    Nodo<T>* siguiente;  // Puntero al siguiente nodo

    Nodo(T d) : dato(d), siguiente(nullptr) {}
};

#endif // NODO_H
