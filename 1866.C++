/*Codigo numero: 1866
Em: C++
Com titulo: Conta*/ 


#include <iostream>
using namespace std;

int main()
{
    int N, i, num;
    cin>>N;
    
    for(i=0;i<N;i++){
        cin>>num;
        if(num%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    
    return 0;
}
