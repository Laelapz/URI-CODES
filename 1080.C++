/*Codigo numero: 1080
Em: C++
Com titulo: Maior*/ 


#include <iostream>
using namespace std;

int main(){
int V, i, tot, cont;
tot=0;
for(i=1;i<=100;i++){
cin>>V;
if(V>tot){tot=V;cont=i;}
}
cout<<tot<<endl;
cout<<cont<<endl;

return 0;
}

