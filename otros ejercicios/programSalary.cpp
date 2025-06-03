#include <iostream>
 
using namespace std;


int main(){

double salary, isr, isss, afp, sbruto; 
int option;

cout<<"Welcome to the program to calculate your discounts"<<endl;
cout<<"please write your salary"<<endl;

cin>> salary;

cout<<"What do you want to calculate?"<<endl;
cout<<"1.ISSS"<<endl;
cout<<"2.AFP"<<endl;
cout<<"3.ISR"<<endl;


cin>> option;


switch(option) 
{
    case 1:
    if(salary<=1000){

        isss=salary*0.03;

        cout<<"your discount on the isss is:"<<isss<<endl;
     


    }  

    else {

           isss=30;

    }
    break;
    

    case 2:
    afp=salary*0.0725 ;
    cout<<"your discount on the afp is "<<afp<<endl;



sbruto=isss+afp;
salary=salary-sbruto;

    case 3:
    if (salary<=472.99){

cout<<"your discount is: 0"<<endl;

    }

    else if(salary>=473){

isr=(salary*0.10);

cout<<"your discount is:"<<isr<<endl;

    } 

    else if (salary>895.25){

isr=salary*0.20;
cout<<"your discount is:"<<isr<<endl;
    }

    else if (salary>2038.10){

        isr=salary*0.30;
        cout<<"your discount is:"<<isr<<endl;
            }




    break;

    


    default: 
    cout<<"favor ingresar numeros";
    
}












return 0;
}


/*Derechos de autor Diego Leonardo Melara Munguia 00180825*/