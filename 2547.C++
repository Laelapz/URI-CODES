/*Codigo numero: 2547
Em: C++
Com titulo: Montanha-Russa*/ 


#include <iostream>
using namespace std;

int main(){
    int N;
    
    while(cin>>N){
        int Amin, Amax, cont=0, val;
        cin>>Amin>>Amax;
        
        for(int i=0;i<N;i++){
            cin>>val;
            if(val>=Amin && val<=Amax){
                cont++;
            }
        }
        cout<<cont<<endl;
    }
}
