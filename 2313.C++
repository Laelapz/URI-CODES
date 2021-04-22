/*Codigo numero: 2313
Em: C++
Com titulo: Qual*/ 


#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int A, B, C;
    cin>>A>>B>>C;
    
    if(A+B<=C||A+C<=B||B+C<=A){
        cout<<"Invalido"<<endl;
    }
    else if(A>B && A-B>C||B>A && B-A>C||B>C && B-C>A||C>B && C-B>A){
        cout<<"Inválido"<<endl;
    }else{
        cout<<"Valido-";
        
        if(A==B && A!=C && B!=C||A==C && A!=B && C!=B||B==C && B!=A && C!=A){
            cout<<"Isoceles"<<endl;
        }
        else if(A!=B && A!=C && B!=C){
            cout<<"Escaleno"<<endl;
        }else{
            cout<<"Equilatero"<<endl;
        }
        
        if(A>B && A>C && A==sqrt(pow(B,2)+pow(C,2))){
            cout<<"Retangulo: S"<<endl;
        }
        else if(B>A && B>C && B==sqrt(pow(A,2)+pow(C,2))){
            cout<<"Retangulo: S"<<endl;
        }
        else if(C>A && C>B && C==sqrt(pow(A,2)+pow(B,2))){
            cout<<"Retangulo: S"<<endl;
        }else{
            cout<<"Retangulo: N"<<endl;
        }
    }
    
    return 0;
}
