/*Codigo numero: 1133
Em: C++
Com titulo: Resto*/ 


#include <iostream>
using namespace std;

int main()
{
    int X, Y, val, i;
    cin>>X>>Y;
    val=0;
    if(X<Y){
        for(i=X+1;i<Y;i++){
            if(i%5==2 or i%5==3){cout<<i<<endl;}
        }}
    if(Y<X){
        for(i=Y+1;i<X;i++){
            if(i%5==2 or i%5==3){cout<<i<<endl;}
        }}
    
    return 0;
}
