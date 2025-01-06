#include <iostream>
using namespace std;
main()
{
    int numero;
    while (true){
        cout <<"Ingresa un numero: "<<endl;
        cin>> numero;
        if (numero >= 1 && numero <=5){
            break;
        }
    }
}