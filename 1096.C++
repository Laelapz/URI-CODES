/*Codigo numero: 1096
Em: C++
Com titulo: Sequencia*/ 


#include <iostream>
using namespace std;
int main(){
int I, J, K, cont;

I=1;
J=7;
K=1;

for(cont=0;cont<15;cont++){

    cout<<"I="<<K<<" "<<"J="<<J<<endl;
    if(I%3==0){K=K+2;}
    if(J==5){J=8;}
    J--;I++;}


    return 0;
}

