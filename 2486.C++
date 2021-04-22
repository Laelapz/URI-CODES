/*Codigo numero: 2486
Em: C++
Com titulo: C*/ 


#include <iostream>
using namespace std;

int main(){
    int T, mult;
    string comida, any;
    
    while(cin>>T){
        int tot=0;

        if(T==0){
            break;
        }
        
        for(int i=0;i<T;i++){
            cin>>mult>>comida;
            
            if(comida=="suco"){
                cin>>any>>any;
            }
            else if(comida=="morango"){
                cin>>any;
            }
            else if(comida=="goiaba"){
                cin>>any;
            }
            
            if(comida=="suco"){
                tot=tot+(mult*120);
            }
            else if(comida=="morango"){
                tot=tot+(mult*85);
            }
            else if(comida=="mamao"){
                tot=tot+(mult*85);
            }
            else if(comida=="goiaba"){
                tot=tot+(mult*70);
            }
            else if(comida=="manga"){
                tot=tot+(mult*56);
            }
            else if(comida=="laranja"){
                tot=tot+(mult*50);
            }
            else if(comida=="brocolis"){
                tot=tot+(mult*34);
            }
        }
        
        if(tot<110){
            cout<<"Mais "<<110-tot<<" mg"<<endl;
        }
        else if(tot>130){
            cout<<"Menos "<<tot-130<<" mg"<<endl;
        }else{
            cout<<tot<<" mg"<<endl;
        }
        
    }
    
    return 0;
}
