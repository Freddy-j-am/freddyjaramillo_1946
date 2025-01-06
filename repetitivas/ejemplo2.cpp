/*programa que lee datos y muestra su promedio y el numero de datos que estan por debajo y encima del promedio*/
#include <iostream>
using namespace std;
main()
{
    int valor, promedio=0, contador=0;
    char op;
    bool bandera=true;
    while (bandera){
        cout << "¿Deseas ingresar valores? <<S>> <<N>>"<<endl;
        op = getchar();
        if (op == 's' || op == 'S'){
            cout<< "Ingresa un valor: "<<endl;
            cin>>valor;
            contador++;
            promedio = promedio + valor;
        } else{
            bandera =false;
        }
        cin.ignore();
    }
    cout<< "El promedio de datos ingresados es "<<((float)promedio/contador)<<endl;
}