/*Codigo numero: 1158
Em: C++
Com titulo: Soma*/ 


#include <iostream>
using namespace std;
int main(){
    int X, Y, N, i, cont, som;
    cin>>N;
    som=0;
    
    for(i=0;i<N;i++){
        cont=0;
        cin>>X>>Y;
        while(cont<Y){
             if(X%2!=0)
                 {som=som+X;}
             else
                 {X++;
                  som=som+X;}
                  X++;
                  cont++;   
        } 
        cout<<som<<endl;
        som=0;
    }
    
    return 0;
}
