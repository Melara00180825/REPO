#include <iostream>

using namespace std;

int main(){
int year;

    cout<<"ingrese un year"<<endl;
    cin>> year;


    if (year%4==0 ){

        cout<<year<<" es un year bisiesto"<<endl;


    } else {
        cout<<"el year no es bisiesto"<<endl;
    }
    
    return 0;
}