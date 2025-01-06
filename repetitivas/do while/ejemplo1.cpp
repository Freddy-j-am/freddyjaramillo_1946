#include <iostream>
using namespace std;
main(){
    int num=1, valor;
    do{
        cout << num <<endl;
        num++;
    }while (num<=10);
    //validar para ingresar valores entre 1 y 10
    do{
        cout << "Ingrese un valor"<<endl;
        cin >> valor;
        (valor<10 || valor >20)?cout << "Valor no valido, ingresa entre 10 y 20\n": cout<< "Exito"<<endl;
    }while (valor<10 || valor>20);
    cout << "Ingresaste el valor de: "<<valor<<endl;
}