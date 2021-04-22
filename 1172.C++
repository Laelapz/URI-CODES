/*Codigo numero: 1172
Em: C++
Com titulo: Substituição*/ 


#include <iostream>
using namespace std;

int main(){
    int vetor[10];
    int i;
    
    for(i=0;i<10;i++){
        cin>>vetor[i];
        
        if(vetor[i]<1)
            {vetor[i]=1;}
    }
    
    for(i=0;i<10;i++){
        cout<<"X["<<i<<"] = "<<vetor[i]<<endl;
    }
    
    
    return 0;
}
