#include <iostream>

using namespace std;

int main()
{

    int year;

    cout << "write your number";
    cin >> year;

    if (year % 4 == 0)
    {

        cout << "el año es Bisiesto" << endl;
    }

    else
    {

        cout << "el año no es bisiesto" << endl;
    }

    return 0;
}