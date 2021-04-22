/*Codigo numero: 2310
Em: C++
Com titulo: Voleibol*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N, i, j, S, B, A;
    cin>>N;
    string Nome;
    
    double Ds=0, Db=0, Da=0, ds=0, db=0, da=0;
    
    for(j=0;j<N*2;j++){
        
        if(j%2==0){
        cin>>Nome;
        }
        
        for(i=0;i<3;i++){
            if(i==0){
                cin>>S;
                if(j%2==0){
                    Ds=Ds+S;
                }else{
                    ds=ds+S;
                }
            }
            else if(i==1){
                cin>>B;
                if(j%2==0){
                    Db=Db+B;
                }else{
                    db=db+B;
                }
            }else{
                cin>>A;
                if(j%2==0){
                    Da=Da+A;
                }else{
                    da=da+A;
                }
            }
        }
    }
    
    cout<<"Pontos de Saque: "<<fixed<<setprecision(2)<<(ds/Ds)*100<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<(db/Db)*100<<" %."<<endl;
    cout<<"Pontos de Ataque: "<<(da/Da)*100<<" %."<<endl;
    
    
    return 0;
}
