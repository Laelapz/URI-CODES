/*Codigo numero: 1132
Em: C++
Com titulo: Múltiplos*/ 


#include <iostream>
using namespace std;

int main()
{
    int X, Y, val, i;
    cin>>X>>Y;
    val=0;
    if(X<Y){
        for(i=X;i<=Y;i++){
            if(i%13!=0){val=val+i;}
        }}
    if(Y<X){
        for(i=Y;i<=X;i++){
            if(i%13!=0){val=val+i;}
        }}

    cout<<val<<endl;
    
    return 0;
}
