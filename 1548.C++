/*Codigo numero: 1548
Em: C++
Com titulo: Fila*/ 


#include <iostream>
#include <queue>
using namespace std;

int main(){
    int N, T, val;
    cin>>N;
    while(N>0){
        int cont=0;
        priority_queue<int> mypq;
        
        cin>>T;
        
        int vet[T];
        
        for(int i=0;i<T;i++){
            cin>>val;
            vet[i]=val;
            mypq.push(val);
        }
        
        T=0;
        while(!mypq.empty()){
            if(mypq.top()==vet[cont]){
                T++;
            }
            mypq.pop();
            cont++;
        }

        cout<<T<<endl;  
        N--;
    }
    
    
    return 0;
}
