/*Codigo numero: 2543
Em: C++
Com titulo: Jogatina*/ 


#include <iostream>
using namespace std;

int main(){
    int N, id;
    while(cin>>N){
        cin>>id;
        int val1, val2, cont=0;
        
        for(int i=0;i<N;i++){
            cin>>val1>>val2;
            
            if(val1==id && val2==0){
                cont++;
            }
        }
        
        cout<<cont<<endl;
    }
    
    return 0;
}
