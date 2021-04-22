/*Codigo numero: 2140
Em: C++
Com titulo: Duas*/ 


#include <iostream>
using namespace std;

int main(){
    int c, p, ok;
    int notas[6]{2,5,10,20,50,100};
    int notas2[6]{2,5,10,20,50,100};
    
    while(c!=0 and p!=0){
        cin>>c>>p;
        ok=0;
        p=p-c;
        
        if(c==0 and p==0){
            break;
        }
        
        for(int i=0;i<6;i++){
        
            for(int j=0;j<6;j++){
                if(p==notas[i]+notas2[j]){
                    cout<<"possible"<<endl;
                    ok=1;
                    break;
                }
            }
        
            if(ok==1){
                break;
            }
        }
    
        if(ok!=1){
            cout<<"impossible"<<endl;
        }
    }
    return 0;
}
