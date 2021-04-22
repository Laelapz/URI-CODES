/*Codigo numero: 2006
Em: C++
Com titulo: Identificando*/ 


#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    int T, num, cont, i;
    cin>>T;
    
    for(i=0;i<5;i++){
        cin>>num;
        if(num==T){
            cont++;
        }
    }
    
    cout<<cont<<endl;
    return 0;
}
