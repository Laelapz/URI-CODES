/*Codigo numero: 2510
Em: C++
Com titulo: Batmain*/ 


#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)
{   
    int N;
    cin>>N;
    char nome[26];
    for(int i=0;i<N;i++){
        fflush(stdin);
        fgets(nome, 26, stdin);
    }
        
    for(int i=0;i<N;i++){
        cout<<"Y"<<endl;
    }
    return 0;
}
