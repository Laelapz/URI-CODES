/*Codigo numero: 1072
Em: C++
Com titulo: Intervalo*/ 


#include <iostream>
using namespace std;
int main(){
int  N, i, cont1, cont2;
cin>>N;
int vet[N];
cont1=0;
cont2=0;

for(i=0;i<N;i++){
    cin>>vet[i];
    if(vet[i]>=10 and vet[i]<=20){cont1++;}
    else{cont2++;}
}
cout<<cont1<<" in"<<endl;
cout<<cont2<<" out"<<endl;

return 0;
}

