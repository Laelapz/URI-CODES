/*Codigo numero: 2542
Em: C++
Com titulo: Iu-Di-Oh!*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    while(cin>>N){
           int M, L, P1, P2, A;
           cin>>M>>L;
           int CM[M][N], CL[L][N];
           
           for(int i=0;i<M;i++){
               for(int j=0;j<N;j++){
                   cin>>CM[i][j];
               }
           }
           
           for(int i=0;i<L;i++){
               for(int j=0;j<N;j++){
                   cin>>CL[i][j];
               }
           }
           
           cin>>P1>>P2>>A;
           
           if(CM[P1-1][A-1]>CL[P2-1][A-1]){
               cout<<"Marcos"<<endl;
           }
           else if(CL[P2-1][A-1]>CM[P1-1][A-1]){
               cout<<"Leonardo"<<endl;
           }else{
               cout<<"Empate"<<endl;
           }            
    }
    
    return 0;
}
