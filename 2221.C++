/*Codigo numero: 2221
Em: C++
Com titulo: Batalha*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int N, B, Ad, Dd, Ld, Ag, Dg, Lg, tot1, tot2;
    cin>>N;
    
    while(N>0){
        cin>>B>>Ad>>Dd>>Ld>>Ag>>Dg>>Lg;
        
        tot1=(Ad+Dd)/2;
        
        if(Ld%2==0){
            tot1=tot1+B;
        }
        
        tot2=(Ag+Dg)/2;
        
        if(Lg%2==0){
            tot2=tot2+B;
        }
        
        if(tot1>tot2){
            cout<<"Dabriel"<<endl;
        }
        else if(tot1==tot2){
            cout<<"Empate"<<endl;
        }else{
            cout<<"Guarte"<<endl;
        }
        
        N--;
    }
    return 0;
}
