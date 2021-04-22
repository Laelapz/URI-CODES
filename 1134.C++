/*Codigo numero: 1134
Em: C++
Com titulo: Tipo*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int Num, A, G, D;
    
    A=0;
    G=0;
    D=0;
    
    cin>>Num;
    while(Num!=4){
        if(Num==1){A++;}
        if(Num==2){G++;}
        if(Num==3){D++;}
            
        cin>>Num;
        }

     cout<<"MUITO OBRIGADO"<<endl;
     cout<<"Alcool: "<<A<<endl;
     cout<<"Gasolina: "<<G<<endl;
     cout<<"Diesel: "<<D<<endl;
    
    return 0;
}
