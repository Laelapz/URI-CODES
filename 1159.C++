/*Codigo numero: 1159
Em: C++
Com titulo: Soma*/ 


#include <iostream>
using namespace std;
int main(){
    int X, som, cont;
        cin>>X;
        som=0;
        while(X!=0){
            
            cont=0;
            
            while(cont<5){
                
                if(X%2==0)
                    {som=som+X;}
                else
                    {X++;
                     som=som+X;}
                    
                  X++;
                  cont++;
                  
            }
            
            cout<<som<<endl;
            som=0;
            cin>>X;
                
        } 
    
    
    return 0;
}
