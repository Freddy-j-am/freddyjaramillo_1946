//uso de operadores de incremento y decremento
#include <iostream>
using namespace std;
main(){
    int n1=10, n2=20, resultado1, resultado2;
    n1++;//n1 = n1 + 1
    ++n2;//n2 = n2 + 2
    cout << "n1 = " <<n1<<endl;
    cout << "n2 = " <<n2<<endl;
    //operaciones de preincremento
    resultado1 = ++n1;
    cout <<"resultado = " <<resultado1<<endl;
    resultado2 = n2++;
    cout<<"n2 ="<<n2<<endl;
    cout<<"resultado = "<<resultado2<<endl;

}