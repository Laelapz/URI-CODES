/*Codigo numero: 1037
Em: C++
Com titulo: Intervalo*/ 


#include <iostream>
using namespace std;

int main(){
double val;
cin>>val;

if(val>=0 and val<=25){
cout<<"Intervalo [0,25]"<<endl;}

else if(val>25 and val<=50){
cout<<"Intervalo (25,50]"<<endl;}

else if(val>50 and val<=75){
cout<<"Intervalo (50,75]"<<endl;}

else if(val>75 and val<=100){
cout<<"Intervalo (75,100]"<<endl;}

else{cout<<"Fora de intervalo"<<endl;}


}

