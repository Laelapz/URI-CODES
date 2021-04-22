/*Codigo numero: 1060
Em: C++
Com titulo: Números*/ 


#include <iostream>
using namespace std;
int main(){
int i, cont;
double  num;

cont=0;

for(i=0;i<6;i++){
cin>>num;
if(num>0){cont++;}
}
cout<<cont<<" valores positivos"<<endl;

return 0;
}

