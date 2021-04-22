/*Codigo numero: 1115
Em: C++
Com titulo: Quadrante*/ 


#include <iostream>
using namespace std;

int main(){
int X, Y;

while(cin>>X>>Y and X!=0 and Y!=0){

    if(X>0 and Y>0){cout<<"primeiro"<<endl;}
    if(X<0 and Y>0){cout<<"segundo"<<endl;}
    if(X<0 and Y<0){cout<<"terceiro"<<endl;}
    if(X>0 and Y<0){cout<<"quarto"<<endl;}

    }
return 0;}


