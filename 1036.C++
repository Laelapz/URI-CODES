/*Codigo numero: 1036
Em: C++
Com titulo: Fórmula*/ 


#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
double a, b, c, sub, som, div1, div2, raiz, form, d;

cin>>a>>b>>c;

form=b*b-4*a*c;
raiz=sqrt(form);

sub=(-b-raiz);
som=(-b+raiz);
d=2*a;
div1=sub/d;
div2=som/d;


if(form<0 or raiz<0 or d==0){cout << "Impossivel calcular" << endl;}
else{


std::cout.precision(5);
std::cout << std::fixed <<"R1 = "<<div2<<endl;

std::cout.precision(5);
std::cout << std::fixed <<"R2 = "<<div1<<endl;
}

return 0;
}

