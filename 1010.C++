/*Codigo numero: 1010
Em: C++
Com titulo: Cálculo*/ 


#include <iostream>
using namespace std;

int main(){
int cod, quant;
double val,tot;

int cod2, quant2;
double val2,tot2,tot3;

cin>>cod;
cin>>quant;
cin>>val;
tot=quant*val;

cin>>cod2;
cin>>quant2;
cin>>val2;
tot2=quant2*val2;

tot3=tot+tot2;

std::cout.precision(2);
std::cout << std::fixed << "VALOR A PAGAR: R$ " << tot3 << endl;
}

