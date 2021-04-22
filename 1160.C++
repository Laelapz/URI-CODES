/*Codigo numero: 1160
Em: C++
Com titulo: Crescimento*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    int T, PA, PB,fin, C1, C2, cont;
    double G1, G2;
    fin=0;
    cont=0;
    cin>>T;
    
    while(fin<T){
        cin>>PA>>PB>>G1>>G2;
        while(PA<=PB)
        {
                
                C1=(PA*G1)/100;
                C2=(PB*G2)/100;
                PA=PA+C1;
                PB=PB+C2;
                cont++;
                if(cont>100)
                    {cout<<"Mais de 1 seculo."<<endl;
                     break;}
        }
        if(cont<101)
            {cout<<cont<<" anos."<<endl;}
        cont=0;
        fin++;
    }
    return 0;   
}
