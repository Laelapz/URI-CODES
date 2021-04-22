/*Codigo numero: 1101
Em: C++
Com titulo: Sequência*/ 


#include <iostream>
using namespace std;

int main(){
int X, Y, i, j, cont1, cont2;

cont1=0;
cont2=0;

while(cin>>X>>Y and X>0 and Y>0){
    if(X<Y){

        for(i=X;i<=Y;i++){
            cont1=cont1+i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<cont1<<endl;

        cont1=0;
        cont2=0;
        }

    else if(Y<X){

        for(j=Y;j<=X;j++){
            cont2=cont2+j;
            cout<<j<<" ";
        }
        cout<<"Sum="<<cont2<<endl;

        cont1=0;
        cont2=0;
        }
    else{cout<<X<<" "<<"Sum="<<X<<endl;}

}
return 0;}


