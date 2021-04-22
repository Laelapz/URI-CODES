/*Codigo numero: 1078
Em: C++
Com titulo: Tabuada*/ 


#include <iostream>
using namespace std;
int main(){
int N, i, mult;
cin>>N;

for(i=1;i<=10;i++){
    mult=i*N;
    cout<<i<<" x "<<N<<" = "<<mult<<endl;
}
return 0;
}

