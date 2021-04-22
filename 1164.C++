/*Codigo numero: 1164
Em: C++
Com titulo: Número*/ 


#include <iostream>
using namespace std;
int main(){
    int N, fim, i, X, som;
    cin>>N;
    
    fim=0;
    som=0;
    
    while(fim<N){
        
        cin>>X;
        
        for(i=1;i<X;i++){
            if(X%i==0)
                {som=som+i;}
        }
        if(som==X)
            {cout<<X<<" eh perfeito"<<endl;}
        else
            {cout<<X<<" nao eh perfeito"<<endl;}
        som=0;
        fim++;
    }
    return 0;
}
