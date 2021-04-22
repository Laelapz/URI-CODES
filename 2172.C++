/*Codigo numero: 2172
Em: C++
Com titulo: Evento*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int x, xp;
    while(cin>>x>>xp){
        int tot=x*xp;
        
        if(x==0 and xp==0){
            break;
        }
        
        cout<<tot<<endl;
    }
    return 0;
}
