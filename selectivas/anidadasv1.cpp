#include <iostream>
using namespace std;
main(){
int a,b,c;
cout << "Ingrese valor de a: "<<endl;
cin >> a;
cout << "Ingrese valor de b: "<<endl;
cin >> b;
cout << "Ingrese valor de c: "<<endl;
cin >> c;
if (a>b){
    if (a>c){
        cout << "El valor mayor es: "<<a<<endl;
    }else{
        cout << "El valor mayor es: "<<c<<endl;
    }
}
else{
    if(b>c){
        cout<< "El valor mayor es: "<<b<<endl;
    }
    else{
        if(c>a){
            cout<< "El valor mayor es: "<<c<<endl;
        }
        else{
            cout<< "Todos los valores son iguales"<<endl;
        }
    }
}
}

