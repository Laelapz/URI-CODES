/*Codigo numero: 1157
Em: C++
Com titulo: Divisores*/ 


#include <iostream>
using namespace std;

int main()
{
    int N, num, i;
    
    cin>>N;
    num=1;
    
    for(i=0;i<N;i++){
        if(N%num==0)
            {cout<<num<<endl;}
        num++;
    }
    return 0;
}
