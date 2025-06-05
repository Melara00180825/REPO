#include <iostream>

using namespace std;

int main(){
 
int base=0, exponente=0,resultado=1;
cout<<"ingresa la base"<<endl;
cin>>base;
cout<<"ingresa el exponente"<<endl;
cin>>exponente;

for (int i = 1; i <= exponente; i++)
{

  resultado*=base;
  cout<<resultado<<endl;
}
cout<<"el resultado es "<<resultado;

    return 0;
}