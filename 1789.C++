/*Codigo numero: 1789
Em: C++
Com titulo: A*/ 


#include <iostream>
using namespace std;

int main()
{
    int N, veloz, i;
    veloz=0;
    
    while(cin>>N){
    
        veloz=0;
    int vetor[N];

    for(i=0;i<N;i++){
        cin>>vetor[i];
    }
    
    for(i=0;i<N;i++){
        if(vetor[i]>veloz){
               veloz=vetor[i];  
        }
    }
    
    if(veloz<10){
        cout<<"1"<<endl;
    }
    if(veloz>=10 and veloz<20){
        cout<<"2"<<endl;
    }
    if(veloz>=20){
        cout<<"3"<<endl;
    }
    }
    return 0;
}
