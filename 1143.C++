/*Codigo numero: 1143
Em: C++
Com titulo: Quadrado*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int A, B, C, Num, i;
    
    A=-3;
    B=-2;
    C=-1;
    
    cin>>Num;
    for(i=1;i<=Num;i++){
        A=i;
        B=A*A;
        C=A*B;
        cout<<A<<" "<<B<<" "<<C<<endl;  
    }
    
    return 0;
}
