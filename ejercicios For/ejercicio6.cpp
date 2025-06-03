#include <iostream>

using namespace std;


int main(){
int num, suma;
cout<<"Welcome to the program for calculate N numbers pairs"<<endl;
cout<<"Can you write till wich number do you want to calculate"<<endl;
cin>> num;

for (int i = 1; i < num; i++)
{
    
    i=i+1;
    cout<<"The result is: "<<i<<endl;
    suma=(i+1)/2;

}
    
    cout<<"you have calculated till : "<<num<<" and the result of the numbers pairs is: "<<suma<<endl;


    return 0;
}