/*Codigo numero: 1142
Em: C++
Com titulo: PUM*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int A, B, C, Num, i;
    
    A=-3;
    B=-2;
    C=-1;
    
    cin>>Num;
    for(i=0;i<Num;i++){
        A=A+4;
        B=B+4;
        C=C+4;
        cout<<A<<" "<<B<<" "<<C<<" "<<"PUM"<<endl;  
    }
    
    return 0;
}
