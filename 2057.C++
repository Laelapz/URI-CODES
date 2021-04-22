/*Codigo numero: 2057
Em: C++
Com titulo: Fuso*/ 


#include <iostream>
using namespace std;
int main(){
    int S, T, F, tot;
    cin>>S>>T>>F;
     tot=S+T+F;
     
     if(tot>=24){
         tot=tot-24;
     }
     else if(tot<0){
         tot=tot+24;
     }
     
     cout<<tot<<endl;
     
     return 0;
}
