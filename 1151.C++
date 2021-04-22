/*Codigo numero: 1151
Em: C++
Com titulo: Fibonacci*/ 


#include <iostream>
using namespace std;

int main()
{
    int N, i, X, Y, som;
    X=0; 
    Y=1;
    cin>>N;
    cout<<"0"<<" "<<"1"<<" ";
    for(i=2;i<N;i++){
        som=X+Y;
        X=Y;
        Y=som;
        if(i!=N-1){
            cout<<som<<" ";
        }
        if(i==N-1){
            cout<<som<<endl;
        }
    }
    
    return 0;
}
