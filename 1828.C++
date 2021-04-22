/*Codigo numero: 1828
Em: C++
Com titulo: Bazinga!*/ 


#include <iostream>
using namespace std;

int main()
{
    int N, cont;
    string P1, P2;
    cont=0;
    
    cin>>N;
    
    while(N>cont){
        cin>>P1>>P2;
        
        if(P1=="papel" and P2=="pedra"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1=="papel" and P2=="Spock"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1=="pedra" and P2=="lagarto"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1=="pedra" and P2=="tesoura"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1=="tesoura" and P2=="lagarto"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1=="tesoura" and P2=="papel"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1=="lagarto" and P2=="Spock"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1=="lagarto" and P2=="papel"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1=="Spock" and P2=="pedra"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1=="Spock" and P2=="tesoura"){
            cout<<"Caso #"<<cont+1<<": Bazinga!"<<endl;
        }
        else if(P1==P2){
            cout<<"Caso #"<<cont+1<<": De novo!"<<endl;
        }
        else{
            cout<<"Caso #"<<cont+1<<": Raj trapaceou!"<<endl;
        }
        
        cont++;
    }
    
    
    
    return 0;
}
