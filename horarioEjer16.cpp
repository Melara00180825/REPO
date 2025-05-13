#include <iostream>

using namespace std;


int main(){
    int menu, option;
    cout<<"Welcome to the program wich you can to see the horary of University in the ciclo 01 2025"<<endl;

    cout<<"MENU"<<endl;
    cout<<"'1' Lunes"<<endl;
    cout<<"'2' Martes"<<endl;
    cout<<"'3' Miercoles"<<endl;
    cout<<"'4' Jueves"<<endl;
    cout<<"'5' Viernes"<<endl;


    cin>> menu;
switch (menu)
{
case 1:
    cout<<"Lunes"<<endl;
    cout<<"|7:00 | 9:00 |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"| Precalculo |"<<endl;
    cout<<"Your horary is"<<endl;
    cout<<"|9:00 | 11:00|"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|ElementosPCT|"<<endl;
    break;
case 2:
    cout<<"Martes"<<endl;
    cout<<"|9:00 | 11:00 |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"| Fundamentos |"<<endl;
    cout<<"Second hours"<<endl;
    cout<<"|11:00 | 1:00 |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|Mate Discreta|"<<endl;
    break;
case 3:
    cout<<"Miercoles"<<endl;
    cout<<"|7:00 | 9:00 |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"| Precalculo |"<<endl;
    cout<<"Your horary is"<<endl;
    cout<<"|9:00 | 11:00|"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|ElementosPCT|"<<endl;
    break;
case 4:
    cout<<"Jueves"<<endl;
    cout<<"|9:00 | 11:00 |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"| Fundamentos |"<<endl;
    cout<<"Second hours"<<endl;
    cout<<"|11:00 | 1:00 |"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|Mate Discreta|"<<endl;

    cout<<"Do you have Laborary its day "<<endl;


    cout<<"Options"<<endl;
    cout<<"1. Yes I have laboratory today "<<endl;
    cout<<"2. No i dont have laboratory today"<<endl;
    cin>> option;
    
if (option==1){

    cout<<"You have Laboratory today at 1:30"<<endl;
}
else if(option==2){
    cout<<"You dont have laboratory today have a nice day"<<endl;
}

    break;
case 5:
    cout<<"|------------- |"<<endl;
    cout<<"Viernes (Discusion)"<<endl;
    cout<<"|7:00 | 8:00   |"<<endl;
    cout<<"|------------- |"<<endl;
    cout<<"| Precalculo   |"<<endl;
    cout<<"|Your horary is|"<<endl;
    cout<<"|9:00 | 10:00  |"<<endl;
    cout<<"|------------- |"<<endl;
    cout<<"|Mate Driscret |"<<endl;
    cout<<"|------------- |"<<endl;
    break;


default:

    cout<<"please can you write one of the option in the menu"<<endl;
    cout<<"MENU"<<endl;
    cout<<"'1' Lunes"<<endl;
    cout<<"'2' Martes"<<endl;
    cout<<"'3' Miercoles"<<endl;
    cout<<"'4' Jueves"<<endl;
    cout<<"'5' Viernes"<<endl;
  
    cout<<"!NUMBERS"<<endl;

    
    break;
}




    return 0;
}