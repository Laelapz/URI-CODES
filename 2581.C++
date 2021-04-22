/*Codigo numero: 2581
Em: C++
Com titulo: I*/ 


#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    char frase[10000];
    cin>>N;
    for(int i=0;i<N;i++){
        fflush(stdin);
        fgets(frase, 10000, stdin);
        cout<<"I am Toorg!"<<endl;
    }
    return 0;
}
