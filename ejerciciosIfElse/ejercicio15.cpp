#include <iostream>

using namespace std;

int main()
{
    string user = "diego";
    int contra = 1234;
    string user1;
    int contra1;
/*primer intento*/
    cout << "ingrese su usuario" << endl;
    cin >> user1;
    cout << "ingrese su contra" << endl;
    cin >> contra1;

if (contra1==contra)
{
    cout<<"Bienvenido"<<endl;
} else{
/*segundo*/
    cout<<"Intentelo de nuevo"<<endl;
    cout << "ingrese su usuario" << endl;
    cin >> user1;
    cout << "ingrese su contra" << endl;
    cin >> contra1;
    if (contra1==contra)
{
    cout<<"Bienvenido"<<endl;
} else{
/*tercero*/
    cout<<"Intentelo de nuevo"<<endl;
    cout << "ingrese su usuario" << endl;
    cin >> user1;
    cout << "ingrese su contra" << endl;
    cin >> contra1;
    if (contra1==contra)
{
    cout<<"Bienvenido"<<endl;
} else{
    cout<<"Maximo de intentos permitidos"<<endl;
    
}
}
}

        
    

    return 0;
}