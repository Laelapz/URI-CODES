/*Codigo numero: 2534
Em: C++
Com titulo: Exame*/ 


#include <iostream>
using namespace std;


int main(){
    int N, M, val;
    while(cin>>N>>M){
        int v[N];
        
        for(int i=0;i<N;i++){
            cin>>v[i];
        }
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N-1;j++){
                if(v[j]<v[j+1]){
                    int temp=v[j+1];
                    v[j+1]=v[j];
                    v[j]=temp;
                }
            }
        }
        
        for(int i=0;i<M;i++){
            cin>>val;
            cout<<v[val-1]<<endl;
        }
        
        
    }
    
    return 0;
}
