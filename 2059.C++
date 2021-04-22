/*Codigo numero: 2059
Em: C++
Com titulo: Ímpar,*/ 


#include <iostream>
using namespace std;
int main(){
    int p, j1, j2, r, a, w;
    cin>>p>>j1>>j2>>r>>a;
    
    if((j1+j2)%2==0 and p==1){
        w=1;
    }
    else if((j1+j2)%2!=0 and p==0){
        w=1;
    }else{
        w=2;
    }
    
    if(r==1 and a==0){
        w=1;
    }
    else if(r==1 and a==1){
        w=2;
    }
    else if(r==0 and a==1){
        w=1;
    }
    
    if(w==1){
        cout<<"Jogador 1 ganha!"<<endl;
    }else{
        cout<<"Jogador 2 ganha!"<<endl;
    }
    
    return 0;
}
