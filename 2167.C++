/*Codigo numero: 2167
Em: C++
Com titulo: Falha*/ 


#include <iostream>
using namespace std;

int main(){
    int n, cont;
    cin>>n;
    
    int vet[n];
    cont=0;
    
    for(int i=0;i<n;i++){
           cin>>vet[i]; 
    }
    
    for(int i=0;i<n-1;i++){
           if(vet[i]>vet[i+1]){
               cont=i+2;
               break;
           }    
    }
    
    cout<<cont<<endl;
    return 0;
}
