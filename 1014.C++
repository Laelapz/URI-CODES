/*Codigo numero: 1014
Em: C++
Com titulo: Consumo*/ 


#include <iostream>
using namespace std;
int main(){
double x, y, tot;
cin>>x>>y;

tot=x/y;

std::cout.precision(3);
std::cout << std::fixed << tot << " km/l" << endl;

return 0;
}

