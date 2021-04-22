/*Codigo numero: 2544
Em: C++
Com titulo: Kage*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    while(cin>>N){
        int cont=0;
        
        while(N>1){
            N=N/2;
            cont++;
        }
        
        cout<<cont<<endl;
    }   
    return 0;
}
