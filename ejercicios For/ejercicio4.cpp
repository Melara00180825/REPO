#include <iostream>

using namespace std;
/*tabla de multiplicar*/
int main (){
int multi;
    cout<<"ingrese la tabla de multiplicar"<<endl;
    cin>> multi;

for (int i = 1; i <= 10; i++)
{
    /*para la tabla de multiplicar el i es el orden de los numeros para poder multiplicar con la variable multi*/
    cout<<"al multiplicar "<<i<<"*"<<multi<<"es= "<<multi*i<<endl;
}
 
    return 0;
}