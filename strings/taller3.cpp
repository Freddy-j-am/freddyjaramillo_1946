#include <iostream>
using namespace std;

string remplazarCadena(string primeraCadena, string segundaCadena, string nuevaCadena) {
    string cadenaBase = primeraCadena;
    string objetivo = segundaCadena;
    int pos = cadenaBase.find(objetivo);
    if (pos != string::npos) {
        cadenaBase.replace(pos, objetivo.size(), nuevaCadena);
    }
    
    return cadenaBase;
}

int main() {
    string cadena, cadena2, cadena3;
    cout << "Ingrese una cadena"<<endl;
    getline(cin, cadena);
    cout << "Ingrese cadena objetivo: "<<endl;
    getline(cin, cadena2);
    cout << "Ingrese cadena para reemplazar: "<<endl;
    getline(cin, cadena3);
    string cadenaFinal = remplazarCadena(cadena, cadena2, cadena3);
    cout << "La cadena final es: " << cadenaFinal << endl;

    return 0;
}
