#include <iostream>

using namespace std;

int main(){

int entrada1=0, entrada2=5, entrada3=10;
string nombre;
int edad;

cout<<"ingresa tu nombre"<<endl;
cin>>nombre;
cout<<"ingresa tu edad para poder ingresar al parque "<<endl;
cin>>edad;

if (edad<=5){
    cout<<"tu tienes "<<edad<<" de edad "<<nombre<<" tienes que pagar $"<<entrada1<<endl;
} else if (edad>5 && edad<12){
    cout<<"tu tienes "<<edad<<" de edad "<<nombre<<" tienes que pagar $"<<entrada2<<endl;
} else if (edad>=12){
    cout<<"tu tienes "<<edad<<" de edad "<<nombre<<" tienes que pagar $"<<entrada3<<endl;
}
    return 0;
}