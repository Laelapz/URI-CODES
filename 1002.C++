/*Codigo numero: 1002
Em: C++
Com titulo: Área*/ 


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double area,pi,raio;
    cin >> raio;
    pi = 3.14159;
    area = pi * (raio*raio);


cout <<"A="<<fixed << setprecision(4)<<area<<endl;
return 0;
}

