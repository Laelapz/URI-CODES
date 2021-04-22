/*Codigo numero: 1018
Em: C++
Com titulo: Cédulas*/ 


#include <iostream>
using namespace std;
int main(){
int notas,i,valor;
cin>>notas;
valor=0;

    cout<<notas<<endl;

for(i=0;valor<notas;i++){valor=valor+100;}
    if(valor>notas){valor=valor-100;i=i-1;}
        cout<<i<<" nota(s) de R$ 100,00"<<endl;

for(i=0;valor<notas;i++){valor=valor+50;}
    if(valor>notas){valor=valor-50;i=i-1;}
        cout<<i<<" nota(s) de R$ 50,00"<<endl;

for(i=0;valor<notas;i++){valor=valor+20;}
    if(valor>notas){valor=valor-20;i=i-1;}
        cout<<i<<" nota(s) de R$ 20,00"<<endl;

for(i=0;valor<notas;i++){valor=valor+10;}
    if(valor>notas){valor=valor-10;i=i-1;}
        cout<<i<<" nota(s) de R$ 10,00"<<endl;

for(i=0;valor<notas;i++){valor=valor+5;}
    if(valor>notas){valor=valor-5;i=i-1;}
        cout<<i<<" nota(s) de R$ 5,00"<<endl;

for(i=0;valor<notas;i++){valor=valor+2;}
    if(valor>notas){valor=valor-2;i=i-1;}
        cout<<i<<" nota(s) de R$ 2,00"<<endl;

for(i=0;valor<notas;i++){valor=valor+1;}
    if(valor>notas){valor=valor-1;i=i-1;}
        cout<<i<<" nota(s) de R$ 1,00"<<endl;
return 0;
}

