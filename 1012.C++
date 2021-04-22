/*Codigo numero: 1012
Em: C++
Com titulo: Área*/ 


#include <iostream>
using namespace std;

int main(){
double A, B, C, PI;
double TRIANGULO, QUADRADO, TRAPEZIO, RETANGULO, CIRCULO;
cin>>A>>B>>C;

PI=3.14159;

TRIANGULO=(A*C)/2;
CIRCULO=PI*(C*C);
TRAPEZIO=((A+B)*C)/2;
QUADRADO=B*B;
RETANGULO=A*B;

std::cout.precision(3);
std::cout << std::fixed << "TRIANGULO: " << TRIANGULO << endl;

std::cout.precision(3);
std::cout << std::fixed << "CIRCULO: " << CIRCULO << endl;

std::cout.precision(3);
std::cout << std::fixed << "TRAPEZIO: " << TRAPEZIO << endl;

std::cout.precision(3);
std::cout << std::fixed << "QUADRADO: " << QUADRADO << endl;

std::cout.precision(3);
std::cout << std::fixed << "RETANGULO: " << RETANGULO << endl;

return 0;
}

