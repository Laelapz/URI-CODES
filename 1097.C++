/*Codigo numero: 1097
Em: C++
Com titulo: Sequencia*/ 


#include <iostream>
using namespace std;
int main(){
int I, J, K, L, cont;

I=1;
J=7;
K=1;
L=5;

for(cont=0;cont<15;cont++){

    cout<<"I="<<K<<" "<<"J="<<J<<endl;
    if(I%3==0){K=K+2;}
    if(J==L){J=J+5; L=L+2;}
    J--;I++;}


    return 0;
}

