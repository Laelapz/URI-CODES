/*Codigo numero: 2143
Em: C++
Com titulo: A*/ 


#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv)
{
    int t, n, cont, tot;
    ini:
    cin>>t;
    int pessoas[t];
    cont=-1;
    if(t==0){
        exit(0);
    }
    
    while(cont<t-1){
        cin>>n;
        cont++;
        pessoas[cont]=n;
    }
    
    for(int i=0;i<t;i++){
        if(pessoas[i]%2!=0){
            tot=(pessoas[i]-1)*2+1;
        }else{
            tot=(pessoas[i]-2)*2+2;
        }
        cout<<tot<<endl;
    }
    
    if(n!=0){
            goto ini;
        }
    
    return 0;
}
