#include <iostream>

using namespace std;

int main(){

float pi,resultado;

cout<<"ingresa hasta que decimal quieres mostrar de pi"<<endl;
cin>> pi;

for (int i = 0; i < pi; i++)
{
    resultado=i/1+2;
    cout<<resultado<<endl;
}


    return 0;
}