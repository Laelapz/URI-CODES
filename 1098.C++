/*Codigo numero: 1098
Em: C++
Com titulo: Sequencia*/ 


#include <iostream>
using namespace std;
int main(){
double I, J, K, L, SM1, SM2;
int cont;

I=0;
J=0;
K=-0.2;
L=0.8;

for(cont=0;cont<33;cont++){
    L++;
    if(cont%3==0){J=J+0.2; I=I+0.2; L=0.8;}
    SM1=K+I; SM2=L+J;
    cout<<"I="<<SM1<<" "<<"J="<<SM2<<endl;
}

    return 0;
}

