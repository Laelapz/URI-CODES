/*Codigo numero: 1015
Em: C++
Com titulo: Distância*/ 


#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){
double x1, x2, y1, y2, param;

cin>>x1>>y1>>x2>>y2;

param = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

    double result;

  result = sqrt (param);
  
  std::cout.precision(4);
    std::cout << std::fixed<<result<<endl;

return 0;
}

