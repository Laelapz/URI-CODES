/*Codigo numero: 1065
Em: C++
Com titulo: Pares*/ 


#include <iostream>
using namespace std;

int main(){
int i, val, cont;

cont=0;

for(i=0;i<5;i++){
cin>>val;
if(val%2==0){cont++;}
}

cout<<cont<<" valores pares"<<endl;
return 0;
}

