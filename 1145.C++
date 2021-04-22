/*Codigo numero: 1145
Em: C++
Com titulo: Sequência*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int X, Y, i;
    
    
    cin>>X>>Y;
    for(i=1;i<=Y;i++){
        if(i%X==0)
            {cout<<i<<endl;}
        if(i%X!=0)
        {
            cout<<i<<" ";
        }   
    }
    
    return 0;
}
