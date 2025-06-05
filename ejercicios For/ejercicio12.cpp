#include <iostream>

using namespace std;

int main(){
int n,suma=0;
    cout<<"ingresa un hasta que numero quieres sumar"<<endl;
    cin>> n;
    
    for (int i = 0; i <= n; i++)
    {
        suma=suma+i;
    }
    cout<<"la suma de los numeros es"<<suma<<endl;
    return 0;
}