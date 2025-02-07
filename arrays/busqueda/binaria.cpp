#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../../librerias/arrays.h"
using namespace std;
using namespace vectorn;
bool isBusquedaBinaria(int v[], int n, int elemento)
{
    int Iabajo = 0, Iarriba = n - 1, Icentro;

    while (Iabajo <= Iarriba)
    {
        Icentro = (Iabajo + Iarriba) / 2;

        if (v[Icentro] == elemento)
        {
            return true; // Se encontró el elemento
        }
        else if (v[Icentro] < elemento)
        {
            Iabajo = Icentro + 1; // Buscar en la mitad derecha
        }
        else
        {
            Iarriba = Icentro - 1; // Buscar en la mitad izquierda
        }
    }
    return false; // No se encontró el elemento
}

main()
{
    int ne, dato, ri , rs;
    cout << "Nro de Elementos del Array: ";
    cin >> ne;
    int vector[ne];
    llenarVector(vector, ne, ri, rs);
    cout << "Vector original: ";
    verDatos(vector,ne);
    cout<<endl;
    ordenarBurbujav3(vector, ne);
    cout<< "Vector ordenado: ";
    verDatos(vector, ne);
    cout<<endl;
    cout << "Ingrese el dato a buscar: ";
    cin >> dato;

    (isBusquedaBinaria(vector, ne, dato)) ? cout << "Dato Encontrado" : cout << "Dato no encontrado";
}