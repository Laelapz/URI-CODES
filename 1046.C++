/*Codigo numero: 1046
Em: C++
Com titulo: Tempo*/ 


#include <iostream>
using namespace std;

int main(){
int inicio,fim, i, h;
cin>>inicio>>fim;


h=0;
if(inicio==fim ){cout<<"O JOGO DUROU 24 HORA(S)"<<endl;} else{
for(i=0;inicio!=fim;i++){ inicio++;
    if(inicio==24){inicio=0;}
}

cout<<"O JOGO DUROU "<< i <<" HORA(S)"<<endl;}

return 0;
}

