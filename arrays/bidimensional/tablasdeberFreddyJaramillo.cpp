#include <iostream>
#include <stdlib.h>
#include <time.h> 
#define MAX 20
using namespace std;

// Función para llenar la matriz con números aleatorios
void llenaDatos(int tabla[][MAX], int f, int c) {
    srand(time(NULL));
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            tabla[i][j] = rand() % 11 + 10;
        }
    }
}

// Función para calcular la suma de la diagonal principal
int sumaDiagonalPrincipal(int tabla[][MAX], int f, int c) {
    int suma = 0;
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j) {
                suma += tabla[i][j];
            }
        }
    }
    return suma;
}

// Función para calcular la suma de la diagonal secundaria
int sumaDiagonalSecundaria(int tabla[][MAX], int f, int c) {
    int suma = 0;
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            if (i + j == c - 1) {
                suma += tabla[i][j];
            }
        }
    }
    return suma;
}

// Función para imprimir únicamente las diagonales de la matriz (forma de X)
void imprimeDiagonales(int tabla[][MAX], int f, int c) {
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j || i + j == c - 1) {
                cout << tabla[i][j] << "\t";
            } else {
                cout << "\t";
            }
        }
        cout << endl;
    }
}

// Función para determinar cuál diagonal tiene la mayor suma
void diagonalMayor(int tabla[][MAX], int f, int c) {
    int sumaPrincipal = sumaDiagonalPrincipal(tabla, f, c);
    int sumaSecundaria = sumaDiagonalSecundaria(tabla, f, c);
    if (sumaPrincipal == sumaSecundaria) {
        cout << "Las diagonales son iguales\n";
    } else if (sumaPrincipal > sumaSecundaria) {
        cout << "La diagonal principal es mayor\n";
    } else {
        cout << "La diagonal secundaria es mayor\n";
    }
}

int main() {
    int tabla[MAX][MAX], filas, columnas;
    cout << "Ingrese el número de filas y columnas de la tabla: ";
    cin >> filas >> columnas;

    llenaDatos(tabla, filas, columnas);

    imprimeDiagonales(tabla, filas, columnas);
    cout << "La suma de la diagonal principal es: " << sumaDiagonalPrincipal(tabla, filas, columnas) << endl;
    cout << "La suma de la diagonal secundaria es: " << sumaDiagonalSecundaria(tabla, filas, columnas) << endl;
    diagonalMayor(tabla, filas, columnas);

    return 0;
}