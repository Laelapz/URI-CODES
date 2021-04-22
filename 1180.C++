/*Codigo numero: 1180
Em: C++
Com titulo: Menor*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int N, i, x, total;
    cin>>N;
    int  vetor[N];
    
    total=1000000001;
    for(i=0;i<N;i++){
        cin>>x;
        vetor[i]=x;
    }
    for(i=0;i<N;i++){
        if(vetor[i]<total){
            total=vetor[i];
        }
    }
    for(i=0;i<N;i++){
        if(vetor[i]==total){
            cout<<"Menor valor: "<<total<<endl;
            cout<<"Posicao: "<<i<<endl;
        }
    }
    return 0;
}
