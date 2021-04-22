/*Codigo numero: 2235
Em: C++
Com titulo: Andando*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int A, B, C;
    cin>>A>>B>>C;
    
    if(A==B||A==C||B==C){
        cout<<"S"<<endl;
    }
    else if(A+B==C||A+C==B||B+C==A){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    
    return 0;
}
