/*Codigo numero: 1146
Em: C++
Com titulo: Sequências*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int X, i;
    
    cin>>X;
    
    while(X!=0){
        for(i=1;i<=X;i++){
            if(i==X){cout<<i<<endl;}
            if(i!=X){cout<<i<<" ";}
        }
    cin>>X;
    }
    
    
    return 0;
}
