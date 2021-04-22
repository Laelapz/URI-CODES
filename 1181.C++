/*Codigo numero: 1181
Em: C++
Com titulo: Linha*/ 


#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
    double vetor[12][12], vet1, vet2, tot;
    int i, j, L;
    string letra;
    
    vet1=0;
    vet2=0;
    
    cin>>L;
    cin>>letra;
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
        cin>>vetor[i][j];
        }
    }
        
    
    for(i=0;i<12;i++){
        tot=tot+vetor[L][i];
    }
    
    if(letra=="S"){
        cout<<fixed<<setprecision(1)<<tot<<endl;;
    }
    else{
        cout<<fixed<<setprecision(1)<<tot/12<<endl;
    }
    return 0;
}
