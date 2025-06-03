#include <iostream>
 
using namespace std;


int main(){

double salary, isr, isss, afp, sbruto; 
int menu;


cout<<"Welcome to the program to calculate your discounts"<<endl;
cout<<"please write your salary"<<endl;

cin>> salary;

if(salary<=1000){

    isss=salary*0.03;

 


}  

else {

       isss=30;

}

afp=salary*0.0725 ;



sbruto=isss+afp;
salary=salary-sbruto;

if (salary<=472.99){

    
    
        }
    
        else if(salary>=473){
    
    isr=(salary*0.10);
    
    
    
        } 
    
        else if (salary>895.25){
    
    isr=salary*0.20;
   
        }
    
        else if (salary>2038.10){
    
            isr=salary*0.30;
           
                }


return 0;


cout<<"Menu"<<endl;
cout<<"----------------------------------------------------------"<<endl;
cout<<"1.show current salary"<<endl;
cout<<"2.show the salary less the discounts"<<endl;


cin>> menu;


switch(menu) 
{
    case 1:

break;
}



}