/*Codigo numero: 1183
Em: C++
Com titulo: Acima*/ 


#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
    double vetor[12][12], tot;
    int i, j;
    string letra;
    tot=0;
    
    cin>>letra;
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin>>vetor[i][j];
        }
    }
        
    
    for(i=0;i<12;i++){
            for(j=0;j<12;j++){
                if(i==0 and j>0){ 
                       tot=tot+vetor[i][j];
                }
                if(i==1 and j>1){ 
                       tot=tot+vetor[i][j];
                }
                if(i==2 and j>2){ 
                       tot=tot+vetor[i][j];
                }
                if(i==3 and j>3){ 
                       tot=tot+vetor[i][j];
                }
                if(i==4 and j>4){ 
                       tot=tot+vetor[i][j];
                }
                if(i==5 and j>5){ 
                       tot=tot+vetor[i][j];
                }
                if(i==6 and j>6){ 
                       tot=tot+vetor[i][j];
                }
                if(i==7 and j>7){ 
                       tot=tot+vetor[i][j];
                }
                if(i==8 and j>8){ 
                       tot=tot+vetor[i][j];
                }
                if(i==9 and j>9){ 
                       tot=tot+vetor[i][j];
                }
                if(i==10 and j>10){ 
                       tot=tot+vetor[i][j];
                }
                if(i==11 and j>11){ 
                       tot=tot+vetor[i][j];
                }
            }
    }
    
    if(letra=="S"){
        cout<<fixed<<setprecision(1)<<tot<<endl;;
    }
    else{
        cout<<fixed<<setprecision(1)<<tot/66<<endl;
    }
    return 0;
}
