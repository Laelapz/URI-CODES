/*Codigo numero: 1009
Em: C++
Com titulo: Salário*/ 


#include <iostream>
using namespace std;

int main(){
string nome;
double fixo, comissao, extra, total;

cin>>nome;
cin>>fixo;
cin>>comissao;

extra=(comissao/100)*15;
total=fixo+extra;

std::cout.precision(2);
std::cout << std::fixed << "TOTAL = R$ " << total << endl;


return 0;
}

