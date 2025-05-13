#include <iostream>

using namespace std;


int main(){

    /*program which compare ther numbers*/

    int num1, num2;
    cout<<"please can you write the firts number"<<endl;
    cin>> num1;
    cout<<"please can you write the second number"<<endl;
    cin>> num2;

if(num1>num2){

    cout<<"-------------------------------------------"<<endl;
    cout<<"your firts number"<<endl;
    cout<< num1 <<endl;
    cout<<"its bigger than"<<endl;
    cout<< num2 <<endl;
    cout<<"-------------------------------------------"<<endl;

}
else if (num1<num2){

    cout<<"-------------------------------------------"<<endl;
    cout<<"your firts number"<<endl;
    cout<< num1 <<endl;
    cout<<"its more little than"<<endl;
    cout<< num2 <<endl;
    cout<<"-------------------------------------------"<<endl;


}
    return 0;
}