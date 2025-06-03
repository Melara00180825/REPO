#include <iostream>
#include <chrono>
#include <thread>
#include <thread>
#include <thread>
#include <cstdlib> // Para limpiar la pantalla de forma multiplataforma

using namespace std;

const int altura = 10;
const int ancho = 30;
bool saltando = false;
int posicionDino = altura - 1;
int obstaculo = ancho - 1;

// Función para limpiar la pantalla de manera independiente del sistema operativo
void limpiarPantalla() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Función para dibujar el juego en la consola
void dibujarJuego() {
    limpiarPantalla();
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < ancho; j++) {
            if (i == posicionDino && j == 5) {
                cout << "D"; // Representación del dinosaurio
            } else if (i == altura - 1 && j == obstaculo) {
                cout << "#"; // Obstáculo
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Función para manejar el salto del dinosaurio
void manejarSalto() {
    if (!saltando) {
        saltando = true;
        posicionDino -= 2;
        this_thread::sleep_for(chrono::milliseconds(300));
        posicionDino += 2;
        saltando = false;
    }
}

// Función para esperar entrada del usuario sin detener el programa
char obtenerEntrada() {
    char entrada;
    cin >> entrada;
    return entrada;
}

int main() {
    cout << "Presiona 's' para saltar. ¡Evita los obstáculos!" << endl;

    while (true) {
        thread entradaThread([]() {
            char tecla = obtenerEntrada();
            if (tecla == 's') {
                manejarSalto();
            }
        });

        dibujarJuego();
        obstaculo--;
        if (obstaculo < 0) obstaculo = ancho - 1;

        if (posicionDino == altura - 1 && obstaculo == 5) {
            cout << "¡Game Over!" << endl;
            break;
        }

        this_thread::sleep_for(chrono::milliseconds(100));
        entradaThread.join();
    }

    return 0;
}
