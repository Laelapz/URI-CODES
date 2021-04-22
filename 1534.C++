/*Codigo numero: 1534
Em: C++
Com titulo: Matriz*/ 


#include <iostream>
using namespace std;

int main(){
    int N, i, j, div;
    
    while(cin>>N){
    
    if(N%2==1){
        div=N/2;
    }
    else{
        div=0;
    }
    
    int vetor[N][N];
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i==j and div!=0){
                vetor[i][j]=1;
                vetor[div][div]=2;
            }
            else if(i==j and div==0){
                vetor[i][j]=1;
            }
            else if(j==N-i-1){
                vetor[i][j]=2;
            }
            else{
                vetor[i][j]=3;
            }
        }
    }
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(j!=N-1){
                cout<<vetor[i][j];
            }
            else{
                cout<<vetor[i][j]<<endl;
            }
        }
    }
    }
    return 0;
}
