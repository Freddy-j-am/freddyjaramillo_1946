#include <iostream>
using namespace std;
void llenaVector (int vector [], int tamano){
    for(int i= 0; i<tamano;i++){
        cout << "Introduce el tamano del elemento "<<i+1<<": ";
        cin >> vector [i];
    }
}
void verVector(int v[], int tamano){
        for ( int i= 0; i<tamano; i++){
            cout << "El elemento " <<i+1<< " del vector es: "<<v[i]<<endl;

        }
    }
main(){
    int ne;
    int vector[ne];
    cout<< "Ingrese la cantidad de numeros: "<<endl;
    cin >> ne;
    llenaVector(vector,ne);
    verVector(vector, ne);
}