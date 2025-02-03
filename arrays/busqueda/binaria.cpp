#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../ordenamiento/seleccion.cpp"
using namespace std;
void llenaDatos(int v[], int n)
{
srand(time(NULL));
    for (int i= 0;i<n;i++){
        v[i]=rand()%20+1;
        //cin >> v[i];
        }    
}
void ordenarArray(int v[], int n)
{
    int aux;
    bool cambios=true;
    for(int i=0;i<n-1 && cambios;i++){
        cambios = false;
        for( int j= i+1;j<n;j++){
            if (v[i]>v[j]){
                aux = v[i];
                v[i]= v[j];
                v[j]= aux;
                cambios = true;
            }
        }
    }

}

void verDatos(int v[], int n)
{
for(int i=0; i<n;i++){
        cout << v[i]<<" ";
    }
}
bool isBusquedaBinaria(int v[], int n, int elemento)
{
    int Iabajo, Iarriba, Icentro;
    for( Iabajo = 0;  ){

    }
}
main()
{
    int ne, dato;
    cout << "Nro de Elementos del Array: ";
    cin >> ne;
    int vector[ne];
    llenaDatos(vector, ne);
    cout<< "Ingrese el dato a buscar: ";
    (isBusquedaBinaria(vector, ne,dato))?cout<<"Dato Encontrado ": cout<< "Dato no encontrado" ;
    cin >> dato;
}