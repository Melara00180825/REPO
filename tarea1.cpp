#include <iostream>
/*tarea opcional Fundamentos de programacion*/
using namespace std;

int main()
{
    /*principals menus*/
    int menu, menu2, menu3, menu5;
    /*activities menus*/
    int menu4, menu4_1, menu4_2, menu4_3;

    /* Homework of my outing with my friend   */

    /*my outing with my firend began choosing if we want to take a bus or uber because there was lot of trafic by the chorros stret*/

    cout << "Welcome to de program where you are going to know about to my day with my friend" << endl;

    cout << "choose a place where you want to go with your friend";

    cout << "menu" << endl;
    cout << "1. Plaza merliot " << endl;
    cout << "2. Multplaza" << endl;
    cout << "3. La Gran via" << endl;
    cout << "4. Santa tecla " << endl;

    cout << "Please write your option" << endl;
    cin >> menu;

    switch (menu)
    {
    case 1:
        cout << "you have decided to go to the plaza merliot" << endl;
        cout << "wath do tou want to take, bus or uber?" << endl;

        cout << "menu" << endl;
        cout << "1. Bus " << endl;
        cout << "2. Uber" << endl;

        cin >> menu2;

        switch (menu2)
        {
        case 1:
            cout << "you have take a bus" << endl;
            break;
        case 2:
            cout << "you have take a bus" << endl;
            break;
        default:
            cout << "please could you write numbers and not letters" << endl;
            break;
        }

        cout << "thats good and you have decided the option: " << menu;
        cout << " and also: " << menu2 << endl;
        cout << "so right now let me know what place do you want to enter to the plaza merliot" << endl;

        cout << "menu" << endl;
        cout << "1.principal door(chiltiupan)" << endl;
        cout << "2.Second door" << endl;
        cout << "3.third door" << endl;

        cin >> menu3;
        switch (menu3)
        {
        case 1:
            cout << "you have decided to  into in the principal door" << endl;
            break;
        case 2:
            cout << "you have decided to into to the second door" << endl;
            break;
        case 3:
            cout << "you have decided to  into in the third door" << endl;
            break;

        default:
            cout << "please could you write numbers and not letters" << endl;

            break;
        }

        cout << "thats good and you have decided to go in the: " << menu3;
        cout << " door" << endl;
        cout << "so can you tell me what do you want to do rigth know" << menu << endl;

        /*activities menus*/
        cout << "menu" << endl;
        cout << "1.You want to go at some store" << endl;
        cout << "2.You want to go to eat some" << endl;
        cout << "3.You want to play videogames" << endl;

        cin >> menu4;

        switch (menu4)
        {
        case 1:
            cout << "you have decided to go to the store" << menu << endl;
            break;

            cout << "tell me which store do you  want to buy" << endl;
            cout << "Store menu" << endl;
            cout << "1.Prismamoda" << endl;
            cout << "2.Zona digital" << endl;
            cout << "3.Dollar city" << endl;
            cin >> menu4_1;
            switch (menu4_1)
            {
            case 1:
                cout << "ok you have buy in Prismamoda" << endl;
                break;
            case 2:
                cout << "ok you have buy in Zona Digital" << endl;
                break;
            case 3:
                cout << "you have decided to go to the Dollar city" << endl;
                break;
            default:
                cout << "write numbers" << endl;
                break;
            }

        case 2:
            cout << "you have decided to go to eat some" << menu << endl;

            cout << "tell me which restaurant do you  want to eat" << endl;
            cout << "restaurant menu" << endl;
            cout << "1.Subway" << endl;
            cout << "2.Papa Jhon" << endl;
            cout << "3.Wendys" << endl;
            cin >> menu4_2;

            switch (menu4_2)
            {
            case 1:
                cout << "ok you have to eat in Subway" << endl;
                break;
            case 2:
                cout << "ok you have to eat in Papa jhon" << endl;
                break;
            case 3:
                cout << "you have decided to eat in Wendys" << endl;
                break;
            default:
                cout << "write numbers" << endl;
                break;
            }

            break;
        case 3:
            cout << "you have decided to go to to play videogames" << menu << endl;
            cout << "tell me which tipe of videogames do you  want to play" << endl;
            cout << "videogames menu" << endl;
            cout << "1.Arcade" << endl;
            cout << "2.Board games" << endl;

            cin >> menu4_3;

            switch (menu4_3)
            {
            case 1:
                cout << "ok you want to play Arcade videogames" << endl;
                break;
            case 2:
                cout << "ok you want to play Board games" << endl;
                break;
            default:
                cout << "write numbers" << endl;
                break;
            }

            break;

        default:
            cout << "please can you write numbers and dont write letters" << menu << endl;
            break;
        }

        break;
    case 2:

        cout << "its not a option because o so far";

        break;

    case 3:
        /*we didnt take this option because it was so far and also we just want to eat*/

        cout << "its not a option because Santa Tecla its a far place";

        break;
    case 4:
        /*Santa Tecla its a hot city and also there arent places to eat near*/
        cout << "its not a option because o so far adn also we dont want yo go to Santa Tecla because the weather it hot";

        break;
    default:
        cout << "please could you write numbers and not letters" << endl;

        break;
    }

    cout << "you have done all the activities that you choose and the last question is do you want to come back at your house in uber or bus" << endl;
    cout << "wath do tou want to take, bus or uber?" << endl;

    cout << "menu" << endl;
    cout << "1. Bus " << endl;
    cout << "2. Uber" << endl;

    cin >> menu5;

    switch (menu5)
    {
    case 1:
        cout << "you have take a bus" << endl;
        break;
    case 2:
        cout << "you have take a bus" << endl;
        break;
    default:
        cout << "please could you write numbers and not letters" << endl;
        break;
    }

    cout << "thank you to use this program have a good day papu" << endl;

    return 0;
}

/*Derechos de autor Diego Leonardo Melara Munguia 00180825*/