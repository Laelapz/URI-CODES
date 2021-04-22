/*Codigo numero: 1047
Em: C++
Com titulo: Tempo*/ 


#include <iostream>
using namespace std;

int main(){
int inicioh, iniciom, fimh, fimm, i, tot1, tot2, h;
cin>>inicioh>>iniciom>>fimh>>fimm;


h=0;
if(inicioh==fimh and iniciom==fimm){cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;} else{
tot1=inicioh*60+iniciom;
tot2=fimh*60+fimm;
for(i=0;tot1!=tot2;i++){ tot1++;
    if(tot1==1440){tot1=0;}
    if(i==60){i=0; h++;}
}

cout<<"O JOGO DUROU "<< h <<" HORA(S) E "<<i<<" MINUTO(S)"<<endl;}

return 0;
}

