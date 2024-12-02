#include <iostream>
using namespace std;
main()
{
    int n1,n2;
    char operador;
    cout << "Ingresa n1"<<endl;
    cin >> n1;
    cout << "Ingrese n2"<<endl;
    cin >> n2;
    cout << "¿Que operacion desea realizar? (+,-,*,/)"<<endl;
    cin >> operador;
    switch (operador)
    {
    case '+':
        cout<< "La suma de "<<n1<<" con "<<n2<<" = " <<(n1+n2) <<endl;
        break;
    case '-':
        cout<< "La resta de "<<n1<<" con "<<n2<<" = " <<(n1-n2) <<endl;
        break;
    case '*':
        cout<< "La multiplicacion de "<<n1<<" con "<<n2<<" = " <<(n1*n2) <<endl;
        break;
    case '/':
        (n2==0)?cout << "No existe division entre cero": cout << "El cociente entre "<<n1<<" y "<<n2<<" = " <<(n1/n2) <<endl;
        break;
        default:
            cout<< "Operacion no valida";

    }

}