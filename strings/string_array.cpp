#include <iostream>
using namespace std;
void cambiarString(string &nombres){
    nombres = "Sin nombre";
}
void cambiarArray(char apellido[]){
    /*apellido[0]= 'A';
    apellido[1]= 'B';
    apellido[2]= 'C';
    apellido[3]= '\0';*/
    cout<< "Ingrese el nuevo apellido: ";
    cin.getline(apellido,20);

}
main(){
string nombres, apodo;
string curso[5] = {"C++", "Java", "Python", "C#", "PHP"};
    char apellidos[20], apodo1[20];
    cout << "Ingrese sus nombres: ";
    getline(cin,nombres);
    cout << "Su nombre es: "<<nombres<<endl;
    cambiarString(nombres);
    cout<< "Su nombre despues de llamar a la funcion es: "<<nombres<<endl;

    cout << "Ingrese sus apellidos: ";
    cin.getline(apellidos,20);
    cout << "Su apellido es: "<<apellidos<<endl;
    cambiarArray(apellidos);
    cout<< "Sus apellidos luego de llamar a la funcion es: "<<apellidos<<endl;

    cout <<"Ingrese su apodo: ";
    getline(cin,apodo);
    cout << "Su nombre completo es: "<<nombres<<" "<<apellidos<<endl;
    
    cout << "Su apodo es: "<<apodo<<endl;

}
    