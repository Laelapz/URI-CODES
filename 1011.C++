/*Codigo numero: 1011
Em: C++
Com titulo: Esfera*/ 


#include <iostream>
using namespace std;

int main(){
double pi, R, tot;
cin>>R;
pi=3.14159;
tot= (4/3.0) * pi * R*R*R;

std::cout.precision(3);
std::cout << std::fixed << "VOLUME = " << tot << endl;

return 0;
}



