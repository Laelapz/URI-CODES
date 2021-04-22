/*Codigo numero: 2152
Em: C++
Com titulo: Pepe,*/ 


#include <iostream>
using namespace std;
int main(){
    int n, h, m, t;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>h>>m>>t;
        if(h>9 and m>9){
            if(t==0){
                cout<<h<<":"<<m<<" - A porta fechou!"<<endl;
            }else{
                cout<<h<<":"<<m<<" - A porta abriu!"<<endl;
            }
        }
        
        else if(h<10 and m>9){
            if(t==0){
                cout<<"0"<<h<<":"<<m<<" - A porta fechou!"<<endl;
            }else{
                cout<<"0"<<h<<":"<<m<<" - A porta abriu!"<<endl;
            }
        }
        
        else if(h>9 and m<10){
            if(t==0){
                cout<<h<<":0"<<m<<" - A porta fechou!"<<endl;
            }else{
                cout<<h<<":0"<<m<<" - A porta abriu!"<<endl;
            }
        }
        
        else if(h<10 and m<10){
            if(t==0){
                cout<<"0"<<h<<":0"<<m<<" - A porta fechou!"<<endl;
            }else{
                cout<<"0"<<h<<":0"<<m<<" - A porta abriu!"<<endl;
            }
        }
    }
}
