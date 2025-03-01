#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unordered_set>

using namespace std;

// Crear una matriz de n x m con números pares de 3 cifras no repetidos
int** crearMatriz(int n, int m) {
    int** matriz = new int*[n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[m];
    }

    unordered_set<int> usados;
    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int numero;
            do {
                numero = 100 + (rand() % 450) * 2; // Generar número par de 3 cifras
            } while (usados.find(numero) != usados.end());
            matriz[i][j] = numero;
            usados.insert(numero);
        }
    }

    return matriz;
}

// Crear la matriz transpuesta de m x n
int** transponerMatriz(int** matriz, int n, int m) {
    int** transpuesta = new int*[m];
    for (int i = 0; i < m; i++) {
        transpuesta[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    return transpuesta;
}

// Mostrar una matriz en consola
void mostrarMatriz(int** matriz, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

// Liberar la memoria dinámica de una matriz
void liberarMatriz(int** matriz, int n) {
    for (int i = 0; i < n; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

// Función principal
int main() {
    int n, m;

    // Leer las dimensiones de la matriz
    cout << "Ingrese el numero de filas (n): ";
    cin >> n;
    cout << "Ingrese el numero de columnas (m): ";
    cin >> m;

    // Crear la matriz original
    int** matriz = crearMatriz(n, m);
    cout << "\nMatriz original:" << endl;
    mostrarMatriz(matriz, n, m);

    // Crear la matriz transpuesta
    int** transpuesta = transponerMatriz(matriz, n, m);
    cout << "\nMatriz transpuesta:" << endl;
    mostrarMatriz(transpuesta, m, n);

    // Liberar memoria de ambas matrices
    liberarMatriz(matriz, n);
    liberarMatriz(transpuesta, m);

    return 0;
}
