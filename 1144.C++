/*Codigo numero: 1144
Em: C++
Com titulo: Sequência*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int A, B, C, B2, C2, Num, i;
    
    A=-3;
    B=-2;
    C=-1;
    
    cin>>Num;
    for(i=1;i<=Num;i++){
        A=i;
        B=A*A; B2=B+1;
        C=A*B; C2=C+1;
        cout<<A<<" "<<B<<" "<<C<<endl;
        cout<<A<<" "<<B2<<" "<<C2<<endl;    
    }
    
    return 0;
}
