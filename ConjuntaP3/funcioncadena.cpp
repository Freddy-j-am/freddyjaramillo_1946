#include <iostream>
#include <string.h>
#include <string>
using namespace std;
string ordenarCadena(string &cadena){

        int palabras = 0;
    int longitudPalabra = 0;
    bool dentroDePalabra = false;

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != ' ') {
            longitudPalabra++;
            dentroDePalabra = true;
        } else {
            if (dentroDePalabra && longitudPalabra >= 2) {
                palabras++;
            }
            dentroDePalabra = false;
            longitudPalabra = 0;
        }
    }

    if (dentroDePalabra && longitudPalabra >= 2) {
        palabras++;
    }
    int mejora=1;
    bool cambio = true;
    int aux;
    for(int i=0;i<longitudPalabra  && cambio;i++){
        cambio = false;
        for(int j=0;j<longitudPalabra-mejora;j++){
            if( cadena[j]>cadena[j+1]){
                aux = cadena[j];
                cadena[j]=cadena[j+1];
                cadena[j+1]=aux;
                cambio = true;
            }
        }
        mejora++;
    }
    return cadena;
}
main(){
string cadena1;
cout << "Ingrese una cadena: "<<endl;
getline(cin, cadena1);
ordenarCadena(cadena1);
}
