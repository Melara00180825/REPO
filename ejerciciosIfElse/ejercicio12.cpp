#include <iostream>

using namespace std;

int main(){

int lado1,lado2,lado3;
    cout<<"ingrese los tres lados del triangulo"<<endl;
    cin>>lado1>>lado2>>lado3;

if(lado1==lado2 && lado2==lado3){
    cout<<"tu triangulo es equilatero"<<endl;

}else if (lado1==lado2, lado1==lado3, lado2==lado3, lado1!=lado2, lado1!=lado3, lado2!=lado3 ){

    cout<<"tu triangulo es isoceles"<<endl;
} else if (lado1<lado2, lado2>lado3, lado1<lado3){

    cout<<"tu triangulo es escaleno"<<endl;
}
else {

    cout<<"por numeros y no caracteres"<<endl;
}


    return 0;
}