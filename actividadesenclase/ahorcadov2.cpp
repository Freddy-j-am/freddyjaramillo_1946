#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../librerias Freddy Jaramillo/ahorcado.h"

using namespace std;

string palabraAleatoria(string palabras[]) {
    srand(time(NULL));
    int numero = rand() % 5;
    return palabras[numero];
}

int opciones() {
    int op;
    cout << "1. Deportes" << endl;
    cout << "2. Animales" << endl;
    cout << "3. Frutas" << endl;
    cout << "4. GeneroMusical" <<endl;
    cin >> op;
    return op;
}

void mostrarAhorcado(int intentos) {
    string figuras[] = {
        "\n  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========\n",
        "\n  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========\n",
        "\n  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========\n",
        "\n  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========\n",
        "\n  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========\n",
        "\n  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========\n",
        "\n  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========\n"
    };
    cout << figuras[intentos] << endl;
}

void jugar(string palabra) {
    string oculta(palabra.length(), 'x');
    int intentos = 0;
    char letra;
    bool acierto;

    while (intentos < 7 && oculta != palabra) {
        cout << "Palabra: " << oculta << endl;
        cout << "Ingresa una letra: ";
        cin >> letra;
        
        acierto = false;
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
    }
    
    if (oculta == palabra) {
        cout << "Felicidades! Has adivinado la palabra: " << palabra << endl;
    } else {
        cout << "Perdiste! La palabra era: " << palabra << endl;
    }
}

int main() {
    string palabras[5], palabraSeleccionada;
    int op;
    cout << "Juego del Ahorcado" << endl;
    cout << "-------------------" << endl;
    cout << "Elige una categoria: " << endl;
    op = opciones();
    (op == 1) ? deportes(palabras) : (op == 2) ? animales(palabras) : (op == 3) ? frutas(palabras): generoMusical(palabras);
    
    palabraSeleccionada = palabraAleatoria(palabras);
    jugar(palabraSeleccionada);
    
    return 0;
}
