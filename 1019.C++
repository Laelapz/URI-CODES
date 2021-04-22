/*Codigo numero: 1019
Em: C++
Com titulo: Conversão*/ 


#include <iostream>
using namespace std;
int main(){

int N, i, h, m, s;
cin>>N;

h=0;
m=0;
s=0;

for(i=0;i<N;i++){s++;
    if(s==60){m++; s=0;}
    if(m==60){h++; m=0;}}

    cout<<h<<":"<<m<<":"<<s<<endl;

return 0;
}

