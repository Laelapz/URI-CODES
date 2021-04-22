/*Codigo numero: 2203
Em: C++
Com titulo: Tempestade*/ 


#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int Xf, Yf, Xi, Yi, Vi, R1, R2;
    while(cin>>Xf>>Yf>>Xi>>Yi>>Vi>>R1>>R2){
        double M;
        M=sqrt((pow((Xi-Xf),2)+pow((Yi-Yf),2)));;
        if(M+(Vi*1.5)<=R1+R2){
            cout<<"Y"<<endl;
        }else{
            cout<<"N"<<endl;;
        }
    }
}
