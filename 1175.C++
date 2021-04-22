/*Codigo numero: 1175
Em: C++
Com titulo: Troca*/ 


#include <iostream>
using namespace std;

int main(){
    
    int vetor[20];
    int i, num;
    
    for(i=19;i>=0;i--){
        cin>>num;
        vetor[i]=num;
    }
    for(i=0;i<20;i++){
        cout<<"N["<<i<<"] = "<<vetor[i]<<endl;
    }
    
    return 0;
}
