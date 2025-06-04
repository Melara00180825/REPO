#include <iostream>

using namespace std;

int main(){

/*program which show two numbers and its show the more near*/

int numero1,numero2;

    cout<<"please coukd you write two numbers"<<endl;
    cin>>numero1>>numero2;

    if(numero1>numero2){
        cout<<"the number 1 its bigger than the number 2"<<endl;
    } else if (numero2>numero1){
        cout<<"the number 2 its bigger than the number 1"<<endl;
    }
    
    return 0;
}