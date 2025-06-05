#include <iostream>

using namespace std;

int main(){
    int n,suma;
    cin>>n;
for (int i = 1; i <= n; i++)
{
    

    suma=i*1;    
    if (suma%2)
    {
       suma=i*1;
    }
    else {
        suma=i*-1;
    }
    

       cout<<suma<<endl;


}

    return 0;
}