#include <iostream>
#include <conio.h>

using namespace std;

int main(){
int n;
int suma=0;
cout<<"ingrese un numero"<<endl;
cin>> n;

for (int i = 1; i <= n; i++)
{
    suma += i;
}
    cout<<"la suma de los numeros es"<<suma<<endl;

    return 0;
}