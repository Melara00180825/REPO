#include <iostream>

using namespace std;

int main (){
    double pago,pago2,vuelto,light;
    int option1;
    cout<<"welcome to DelSur"<<endl;
    cout<<"do you want to pay your bill?"<<endl;
    cout<<"1. yes"<<endl;
    cout<<"2. no"<<endl;
    cin>> option1;
    



    if (option1=1){
        cout<<"please enter your account of KWh that you used in your house"<<endl;
        cin>> light;
        /*firts rate*/
        if(light<100){
        cout<<"Your rate its low"<<endl;
        pago=(light*0.03)*light;
        cout<<"you have to pay $"<<pago<<endl;
        cout<<"enter your payment"<<endl;
        cin>>pago2;
        vuelto=pago2-pago;
        cout<<"tu vuelto es $"<<vuelto;
        }
        /*second rate*/
        else  if(light>=100 && light<=200){
        cout<<"Your rate its low"<<endl;
        pago=(light*0.07)*light;
        cout<<"you have to pay $"<<pago<<endl;
        cout<<"enter your payment"<<endl;
        cin>>pago2;
        vuelto=pago2-pago;
        cout<<"tu vuelto es $"<<vuelto;
        }
        /*thrid rate*/
       else  if(light>=200){
        cout<<"Your rate its low"<<endl;
        pago=(light*0.09)*light;
        cout<<"you have to pay $"<<pago<<endl;
        cout<<"enter your payment"<<endl;
        cin>>pago2;
        vuelto=pago2-pago;
        cout<<"tu vuelto es $"<<vuelto;
        }
        

    } else if(option1=2){
        cout<<"have a nice day"<<endl;
    }
    return 0;
}

