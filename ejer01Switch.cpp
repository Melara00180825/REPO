#include <iostream>

using namespace std;

int main()
{
    /*declare the variable menu for switch*/
    int menu;
    cout << "MENU" << endl;
    cout << "'1' Monday" << endl;
    cout << "'2' Tuesday" << endl;
    cout << "'3' Wednesday" << endl;
    cout << "'4' thursday" << endl;
    cout << "'5' Friday" << endl;
    cout << "'6' Saturday" << endl;
    cout << "'7' Sunday" << endl;
    
    /*The user write a number acording wiht the menu*/
    cin>> menu;
    
    switch (menu)
    {
    /*code of the menu for each day*/
    case 1:
        cout << "Today its Monday " << endl;
        break;

    case 2:
        cout << "Today its Tuesday" << endl;
        break;

    case 3:
        cout << "Today its Wednesday" << endl;
        break;

    case 4:
        cout << "Today its Thursday" << endl;
        break;

    case 5:
        cout << "Today its Friday" << endl;
        break;

    case 6:
        cout << "Today its Saturday" << endl;
        break;

    case 7:
        cout << "Today its Sunday" << endl;
        break;
    /*We want just numbers so if the user doesnt write a number will appear a message*/
    default:
        cout << "Write numbers please " << endl;

        break;
    }
    return 0;
}