#include <iostream>
using namespace std;
main(){
    int limite1, limite2, numero, total=0;
    while (true){
        cout << "Ingrese el limite inferior: "<<endl;
        cin >> limite1;
        cout << "Ingrese el limite superior: "<<endl;
        cin >> limite2;
        if (limite1 < limite2){
            break;
        }
    }
    while (true){
        cout << "Ingrese un valor: "<<endl;
        cin >> numero;
        if (numero != 0){
            cout << "Ingrese otro valor: "<<endl;
            cin>>numero;
            total = total + numero;
            break;          
            }
        }
        cout<< "La suma de los valores es: "<<total<<endl;
    }
}