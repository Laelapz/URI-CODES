/*Codigo numero: 1064
Em: C++
Com titulo: Positivos*/ 


#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int i, cont;
double  num, som;

cont=0;

for(i=0;i<6;i++){
cin>>num;
if(num>0){cont++;}
if(num>0){som=som+num;}
}
som=som/cont;
cout<<cont<<" valores positivos"<<endl;
cout<<fixed<<setprecision(1)<<som<<endl;
}

