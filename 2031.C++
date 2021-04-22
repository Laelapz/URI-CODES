/*Codigo numero: 2031
Em: C++
Com titulo: Pedra,*/ 


#include <iostream>
using namespace std;
int main(){
    int N, i;
    string P1, P2, P3;
    
    cin>>N;
    
    for(i=0;i<N;i++){
        cin>>P1>>P2;
        
        if(P1=="ataque" and P2=="pedra"){
            cout<<"Jogador 1 venceu"<<endl;
        }
        else if(P1=="pedra" and P2=="papel"){
            cout<<"Jogador 1 venceu"<<endl;
        }
        else if(P1=="ataque" and P2=="papel"){
            cout<<"Jogador 1 venceu"<<endl;
        }
        else if(P1=="papel" and P2=="papel"){
            cout<<"Ambos venceram"<<endl;
        }
        else if(P1=="pedra" and P2=="pedra"){
            cout<<"Sem ganhador"<<endl;
        }
        else if(P1=="ataque" and P2=="ataque"){
            cout<<"Aniquilacao mutua"<<endl;
        }
        else{
            cout<<"Jogador 2 venceu"<<endl;
        }
    }
    
    return 0;
}
