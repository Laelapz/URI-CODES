/*Codigo numero: 1008
Em: C++
Com titulo: Salário*/ 


#include <iostream>
using namespace std;

int main(){
int n,horas;
double pagamento,salario;

cin>>n;
cin>>horas;
cin>>pagamento;

salario = horas*pagamento;

cout<<"NUMBER = "<<n<<endl;
std::cout.precision(2);
std::cout << std::fixed << "SALARY = U$ " << salario << endl;


return 0;
}

