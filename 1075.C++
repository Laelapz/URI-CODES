/*Codigo numero: 1075
Em: C++
Com titulo: Resto*/ 


#include <iostream>
using namespace std;
int main(){
int N, i;

cin>>N;

for(i=0;i<=10000;i++){
    if(i%N==2){cout<<i<<endl;}
}
return 0;
}

