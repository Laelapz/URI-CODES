/*Codigo numero: 2523
Em: C++
Com titulo: A*/ 


#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
    char alfa[26];
    while(cin>>alfa[0]>>alfa[1]>>alfa[2]){
        if(alfa[0]=='E' && alfa[1]=='O' && alfa[2]=='F' || alfa[0]=='e' && alfa[1]=='o' && alfa[2]=='f'){
            break;
        }
        for(int i=3;i<26;i++){
            cin>>alfa[i];
        }
        
        int N, val;
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>val;
            cout<<alfa[val-1];
        }
        cout<<endl;
    }
    
    return 0;
}
