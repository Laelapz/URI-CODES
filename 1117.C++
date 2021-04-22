/*Codigo numero: 1117
Em: C++
Com titulo: Validação*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int N;
double X, DIV;

N=0;

while(N<2){

    cin>>X;

    if(X>=0 and X<=10)
        {DIV=DIV+X; N++;}
    else
        {cout<<"nota invalida"<<endl;}

}
DIV=DIV/2;

cout<<"media = "<<fixed<<setprecision(2)<<DIV<<endl;
return 0;}


