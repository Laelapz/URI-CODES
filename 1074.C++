/*Codigo numero: 1074
Em: C++
Com titulo: Par*/ 


#include <iostream>
using namespace std;

int main(){
int N, X, i;
cin>>N;

for(i=0;i<N;i++){
    cin>>X;
        if(X==0){cout<<"NULL"<<endl;}
        if(X%2==0 and X!=0 and X>0){cout<<"EVEN POSITIVE"<<endl;}
        if(X%2==0 and X!=0 and X<0){cout<<"EVEN NEGATIVE"<<endl;}
        if(X%2!=0 and X>0){cout<<"ODD POSITIVE"<<endl;}
        if(X%2!=0 and X<0){cout<<"ODD NEGATIVE"<<endl;}
        }

        return 0;
}

