/*Codigo numero: 1165
Em: C++
Com titulo: Número*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int N, X, i, fim, cont;
    cin>>N;
    fim=0;
    cont=0;
    
    while(fim<N){
        cin>>X;
        
        for(i=1;i<=X;i++){
            if(X%i==0)
                {cont++;}}
        
        if(cont==2)
            {cout<<X<<" eh primo"<<endl;}
        else
            {cout<<X<<" nao eh primo"<<endl;}   

        cont=0;
        fim++;
    }
    
    return 0;
}
