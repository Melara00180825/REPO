#include <iostream>

using namespace std;

int main() {
    int num;
    int a = 0, b = 1, c;

    cout << "Ingrese el numero limite de numeros para calcular Fibonacci:" << endl;
    cin >> num;

    cout << "Serie de Fibonacci:" << endl;

    for (int i = 1; i <= num; i++) {
       
        c = a + b;        // Calcular el siguiente número de Fibonacci
        a = b;            // Actualizar 'a' al siguiente número
        b = c;            // Actualizar 'b' al siguiente número


        
    cout << "Serie de Fibonacci:" <<c<< endl;
    cout << "Serie de Fibonacci:" <<a<< endl;
    cout << "Serie de Fibonacci:" <<b<< endl;


    }
    
    return 0;
}
