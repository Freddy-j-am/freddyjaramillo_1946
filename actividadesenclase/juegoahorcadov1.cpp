#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarAhorcado(int intentos) {
    string figuras[8] = {
        "   \n   \n   \n   \n",
        "   \n   \n   \n  _\n",
        "   |\n   |\n   |\n  _\n",
        "   _______\n   |\n   |\n   |\n  _\n",
        "   _______\n   |     O\n   |    \n   |\n  _\n",
        "   _______\n   |     O\n   |     |\n   |    \n  _\n",
        "   _______\n   |     O\n   |    /|\\\n   |    \n  _\n",
        "   _______\n   |     O\n   |    /|\\\n   |    / \\\n  _\n"
    };
    cout << figuras[intentos] << endl;
}



int main() {
    srand(time(0));  

    // Lista de palabras y sus categorías
    string palabras[][2] = {
        {"futbol", "Deporte"},
        {"shakira", "Cantante"},
        {"tigre", "Animal"},
        {"pizza", "Comida"},
        {"espada", "Objeto"}
    };

    int totalPalabras = 5;
    int indice = rand() % totalPalabras;

    string palabra = palabras[indice][0];
    string categoria = palabras[indice][1];
    string oculta(palabra.length(), 'X');

    int intentos = 0;
    bool ganado = false;

    cout << "Categoria: " << categoria << endl;

    while (intentos < 7 && !ganado) {
        cout << "\nPalabra: " << oculta << endl;
        cout << "Intentos restantes: " << 7 - intentos << endl;
        cout << "Ingresa una letra: ";
        char letra;
        cin >> letra;

        bool acierto = false;
        for (size_t i = 0; i < palabra.length(); i++) {
            if (palabra[i] == letra) {
                oculta[i] = letra;
                acierto = true;
            }
        }

        if (!acierto) {
            intentos++;
        }

        mostrarAhorcado(intentos);

        if (oculta == palabra) {
            ganado = true;
        }
    }

    if (ganado) {
        cout << "¡Felicidades! Has adivinado la palabra: " << palabra << endl;
    } else {
        cout << "¡Perdiste! La palabra era: " << palabra << endl;
    }

    return 0;
}
