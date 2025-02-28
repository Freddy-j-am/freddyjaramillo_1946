//escritura de un archivo
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    // Crear un objeto de tipo ofstream para escribir en el archivo
    ofstream archivoSalida;
    // Abrir el archivo (si no existe, se creará)
    archivoSalida.open("ejemplo.txt");
    // Verificar si el archivo se abrió correctamente
    if(archivoSalida. is_open()){
        // Escribir texto en el archivo
        archivoSalida << "¡Hola, mundo!" << endl;
        archivoSalida << "Esto es un prueba." << endl;
        archivoSalida << "Linea 3."<< endl;
        // Cerrar el archivo
        archivoSalida.close();
        cout<< "Texto escrito en el archivo con exito. "<<endl;
    } else{
        cout << "No se pudo abrir el archivo."<<endl;
    }
    return 0;
}