#include <iostream>
#include <ctime>

using namespace std;

// Constantes
const int TAM_PALABRA = 25;
const int PALABRAS_POR_NIVEL = 3;
const int TOTAL_NIVELES = 7;

// Palabras por nivel (más difíciles en cada nivel)
char niveles[TOTAL_NIVELES][PALABRAS_POR_NIVEL][TAM_PALABRA] = {
    { "sol", "luna", "mar" },                          // Nivel 1
    { "perro", "nieve", "flor" },                      // Nivel 2
    { "caminar", "ventana", "bosque" },                // Nivel 3
    { "elefante", "computar", "montanas" },            // Nivel 4
    { "laboratorio", "electricidad", "naturaleza" },   // Nivel 5
    { "universidad", "biblioteca", "microscopio" },    // Nivel 6
    { "astrofisica", "electromagnetismo", "neurociencia" } // Nivel 7
};

// Compara dos palabras manualmente
bool compararPalabras(const char palabra1[], const char palabra2[]) {
    for (int i = 0; palabra1[i] != '\0' || palabra2[i] != '\0'; i++) {
        if (palabra1[i] != palabra2[i]) {
            return false;
        }
    }
    return true;
}

// Ejecuta un nivel específico
int jugarNivel(int nivel) {
    char entrada[TAM_PALABRA];
    int puntos = 0;

    int tiempo_limite = 10 - nivel;  // Disminuye 1 segundo por nivel (mínimo 4s en nivel 7)

    if (tiempo_limite < 4) tiempo_limite = 4;

    cout << "\n== Nivel " << (nivel + 1) << " ==" << endl;
    cout << "Tienes " << tiempo_limite << " segundos para este nivel." << endl << endl;

    clock_t inicio = clock();

    for (int i = 0; i < PALABRAS_POR_NIVEL; i++) {
        clock_t actual = clock();
        double tiempo = double(actual - inicio) / CLOCKS_PER_SEC;

        if (tiempo >= tiempo_limite) {
            cout << " Tiempo agotado!\n";
            break;
        }

        cout << "Palabra: " << niveles[nivel][i] << endl;
        cout << "Escribe: ";
        cin >> entrada;

        actual = clock();
        tiempo = double(actual - inicio) / CLOCKS_PER_SEC;

        if (tiempo >= tiempo_limite) {
            cout << "\n⏱ Tiempo agotado justo después de escribir!\n";
            break;
        }

        if (compararPalabras(niveles[nivel][i], entrada)) {
            puntos++;
            cout << " Correcto!\n\n";
        } else {
            cout << " Incorrecto! Era: " << niveles[nivel][i] << "\n\n";
        }
    }

    cout << "Nivel " << (nivel + 1) << " terminado. Puntos: " << puntos << " / " << PALABRAS_POR_NIVEL << "\n";
    return puntos;
}

// Menú principal
void mostrarMenu() {
    cout << "=========================\n";
    cout << "  JUEGO DE MECANOGRAFIA\n";
    cout << "=========================\n";
    cout << "1. Jugar\n";
    cout << "2. Salir\n";
    cout << "Elige una opcion: ";
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        if (opcion == 1) {
            int totalPuntos = 0;

            for (int nivel = 0; nivel < TOTAL_NIVELES; nivel++) {
                totalPuntos += jugarNivel(nivel);
                cout << "\n--- Presiona ENTER para continuar al siguiente nivel ---\n";
                cin.ignore(); // limpiar buffer
                cin.get();    // esperar tecla
            }

            cout << "\n🎉 Juego terminado! Puntaje total: "
                 << totalPuntos << " / " << (TOTAL_NIVELES * PALABRAS_POR_NIVEL) << "\n\n";
        } else if (opcion != 2) {
            cout << "Opcion invalida. Intenta de nuevo.\n";
        }

    } while (opcion != 2);

    cout << "Gracias por jugar.\n";
    return 0;
}
