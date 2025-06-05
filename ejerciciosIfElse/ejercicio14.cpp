#include <iostream>

using namespace std;

int main(){

int velocidad;
double pagomulta, tasam1=50, tasam2=85;


cout<<"por favor ingrese la velocidad del vehiculo"<<endl;
cin>> velocidad;

if(velocidad>=60 && velocidad<80){
    cout<<"has excedido el maximo de 60 Km/h, tu velocidad fue de: "<<velocidad<<endl;
    cout<<"la multa es de; $"<<tasam1<<"ingresa tu pago"<<endl;
    cin>>pagomulta;
    pagomulta=pagomulta-tasam1;
    cout<<"tu cambio es de $"<<pagomulta<<endl;
    
} else if(velocidad>=80 ){
    cout<<"has excedido el maximo de 80 Km/h, tu velocidad fue de: "<<velocidad<<endl;
    cout<<"la multa es de; $"<<tasam2<<" ingresa tu pago"<<endl;
    cin>>pagomulta;
    pagomulta=pagomulta-tasam2;
    cout<<"tu cambio es de $"<<pagomulta<<endl;
    
}

    return 0;
}