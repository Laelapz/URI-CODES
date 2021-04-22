/*Codigo numero: 1048
Em: C++
Com titulo: Aumento*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double salario, tot, div, por;

cin>>salario;

if(salario<=400){por=15;}
if(salario>400 and salario<=800){por=12;}
if(salario>800 and salario<=1200){por=10;}
if(salario>1200 and salario<=2000){por=7;}
if(salario>2000){por=4;}

div=(salario/100)*por;
tot=salario+div;

cout<<"Novo salario: "<<fixed<<setprecision(2)<<tot<<endl;
cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<div<<endl;
cout<<"Em percentual: "<<fixed<<setprecision(0)<<por<<" %"<<endl;

return 0;
}

