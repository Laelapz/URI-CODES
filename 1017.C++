/*Codigo numero: 1017
Em: C++
Com titulo: Gasto*/ 


#include <iostream>
using namespace std;
int main(){

int km;
double total, tempo;

cin>> tempo >> km;

total=(tempo*km)/12.0;

std::cout.precision(3);
std::cout << std::fixed << total<<endl;;

return 0;
}

