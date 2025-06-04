#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingresa numeros (0 para terminar): ";
    cin >> numero;

    while (numero != 0) {
        suma += numero;
        cout << "Ingresa otro numero (0 para terminar): ";
        cin >> numero;
    }

    cout << "La suma de los numeros ingresados es: " << suma << endl;

    return 0;
}
