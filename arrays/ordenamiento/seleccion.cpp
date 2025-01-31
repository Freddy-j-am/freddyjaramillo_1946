#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void llenarVector(int v[], int n){
    srand(time(NULL));
    for (int i= 0;i<n;i++){
        //v[i]=rand()%20+1;
        cin >> v[i];
        }
  
    }
int ordenarVector(int v[], int n){
    int contar=0, aux;
    bool cambios=true;
    for(int i=0;i<n-1 && cambios;i++){
        cambios = false;
        for( int j= i+1;j<n;j++){
            contar++;
            if (v[i]>v[j]){
                aux = v[i];
                v[i]= v[j];
                v[j]= aux;
                cambios = true;
            }
        }
    }
    return contar;
}
void mostrarVector(int v[], int n){
    for(int i=0; i<n;i++){
        cout << v[i]<<" ";
    }
}
main(){
    int ne, comparaciones;
    cout <<"Ingrese el numero de elementos: ";
    cin>>ne;
    int vector[ne];
    llenarVector(vector,ne);
    cout << "Vector original: \n";
        mostrarVector(vector, ne);
    comparaciones = ordenarVector(vector, ne);
    cout<< "\nVector ordenado:\n";
    mostrarVector(vector, ne);
    cout << "\nEl nro de comparaciones = "<<comparaciones;
}