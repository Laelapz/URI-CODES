/*Codigo numero: 1099
Em: C++
Com titulo: Soma*/ 


#include <iostream>
using namespace std;

int main(){
int N, X, Y, Z1, Z2, i, cont1, cont2;
cin>>N;



for(i=0;i<N;i++){
    cin>>X>>Y;

    cont1=0;
    cont2=0;

    Z1=X;
    Z2=Y;

    if(X<Y and X!=Y){

        while(X<Y){X++;
            if(X%2!=0 and X!=Z1 and X!=Y){cont1=cont1+X;}
        }
        cout<<cont1<<endl;
        }

    else if(Y<X and Y!=X){

        while(Y<X){Y++;
            if(Y%2!=0 and Y!=Z2 and Y!=X){cont2=cont2+Y;}
        }
        cout<<cont2<<endl;
        }
        else{cout<<0<<endl;}

}}


