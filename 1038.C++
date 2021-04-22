/*Codigo numero: 1038
Em: C++
Com titulo: Lanche*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int x, y;
double x1, tot;
cin>>x;
cin>>y;

if(x==1){x1=4.00;}
if(x==2){x1=4.50;}
if(x==3){x1=5.00;}
if(x==4){x1=2.00;}
if(x==5){x1=1.50;}



tot=x1*y;
cout<<"Total: R$ "<<fixed << setprecision(2)<<tot<<endl;
}

