#include <iostream>
#include "../librerias Freddy Jaramillo/adivinanza.h"
using namespace std;
using namespace adivinanza;



int main() {
    int ri, rs;
    cout << "Ingrese el rango inferior: ";
    cin >> ri;
    cout << "Ingrese el rango superior: ";
    cin >> rs;
    srand(time(NULL));
    int n = rs - ri + 1;
    int v[n];
    llenarVector(ri, rs, v, n);
    adivinarNumero(ri, rs);

    return 0;
}