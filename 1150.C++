/*Codigo numero: 1150
Em: C++
Com titulo: Ultrapassando*/ 


#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    int X, Z, num, cont;
    
    cin>>X;
    cin>>Z;
    num=X;
    cont=1;
    
    while(Z<=X){
        cin>>Z;
    }
    
    while(num<=Z){
        cont++;
        X++;
        num=num+X;
    }
        
        cout<<cont<<endl;
    return 0;
}
    

