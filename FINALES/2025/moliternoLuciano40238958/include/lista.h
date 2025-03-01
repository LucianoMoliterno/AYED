#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"
#include <iostream>
#include <functional>

template <typename T>
class Lista {
private:
    Nodo<T>* cabeza; // Puntero al primer nodo de la lista

public:
    Lista() : cabeza(nullptr) {}

    // Verificar si la lista está vacía
    bool estaVacia() const {
        return cabeza == nullptr;
    }

    // Agregar un nuevo elemento al final de la lista
    void agregar(T dato) {
        Nodo<T>* nuevoNodo = new Nodo<T>(dato);
        if (estaVacia()) {
            cabeza = nuevoNodo;
        } else {
            Nodo<T>* temp = cabeza;
            while (temp->siguiente != nullptr) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevoNodo;
        }
    }

    // Mostrar la lista usando un callback
    void mostrar(std::function<void(T)> callback) const {
        Nodo<T>* temp = cabeza;
        while (temp != nullptr) {
            callback(temp->dato);
            temp = temp->siguiente;
        }
    }

    // Eliminar un docente específico (por ejemplo, por nombre)
    void eliminar(std::function<bool(T)> criterio) {
        Nodo<T>* temp = cabeza;
        Nodo<T>* prev = nullptr;

        while (temp != nullptr) {
            if (criterio(temp->dato)) {
                if (prev == nullptr) {
                    cabeza = temp->siguiente;  // Eliminar el primer nodo
                } else {
                    prev->siguiente = temp->siguiente;  // Eliminar nodo intermedio
                }
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->siguiente;
        }
    }

    // Destructor para liberar memoria
    ~Lista() {
        Nodo<T>* temp;
        while (cabeza != nullptr) {
            temp = cabeza;
            cabeza = cabeza->siguiente;
            delete temp;
        }
    }
};

#endif // LISTA_H
