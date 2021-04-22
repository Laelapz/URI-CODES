/*Codigo numero: 1858
Em: C++
Com titulo: A*/ 


#include <iostream>
using namespace std;

int main()
{
    int i, N, tot, resp;
    cin>>N;
    int vetor[N];
    tot=21;
    
    for(i=0;i<N;i++){
        cin>>vetor[i];
        
        if(vetor[i]<tot){
            resp=i+1;
            tot=vetor[i];
        }
    }
    
    cout<<resp<<endl;
    
    return 0;
}

