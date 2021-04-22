/*Codigo numero: 1962
Em: C++
Com titulo: Há*/ 


#include <iostream>
using namespace std;
int main(){
    int N, T, A, i;
    cin>>N;
    
    for(i=0;i<N;i++){
        cin>>T;
        A=2014-T;
        
        if(A<0)
        {
            cout<<A*(-1)<<" A.C."<<endl;
        }else
        {
            cout<<A+1<<" D.C."<<endl;   
        }
    }
}
