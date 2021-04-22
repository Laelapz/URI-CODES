/*Codigo numero: 2311
Em: C++
Com titulo: Saltos*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    int N, i=0;
    double mult, T;
    cin>>N;
    
    string nome[N];
    double notas[N];
    
    while(i<N){
        double menor=11, maior=-1;
        cin>>nome[i];
        cin>>mult;
        
        for(int j=0;j<7;j++){
            if(j==0){
                notas[i]=0;
            }
            cin>>T;
            notas[i]=notas[i]+T;
            
            if(T>maior){
                maior=T;
            }
            if(T<menor){
                menor=T;
            }
        }
        notas[i]=(notas[i]-menor-maior)*mult;
        
        i++;
    }
    
    for(int j=0;j<N;j++){
        cout<<nome[j]<<" "<<fixed<<setprecision(2)<<notas[j]<<endl;
    }
    
    return 0;
}
