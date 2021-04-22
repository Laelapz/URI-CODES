/*Codigo numero: 1066
Em: C++
Com titulo: Pares,*/ 


#include <iostream>
using namespace std;

int main(){
int i, val, contpar, contimpar, contpositivo, contnegativo;

contpar=0;
contimpar=0;
contpositivo=0;
contnegativo=0;

for(i=0;i<5;i++){
cin>>val;
if(val%2==0){contpar++;}
if(val%2!=0){contimpar++;}
if(val>0){contpositivo++;}
if(val<0){contnegativo++;}
}

cout<<contpar<<" valor(es) par(es)"<<endl;
cout<<contimpar<<" valor(es) impar(es)"<<endl;
cout<<contpositivo<<" valor(es) positivo(s)"<<endl;
cout<<contnegativo<<" valor(es) negativo(s)"<<endl;
return 0;
}

