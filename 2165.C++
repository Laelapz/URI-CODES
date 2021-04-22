/*Codigo numero: 2165
Em: C++
Com titulo: Tuitando*/ 


#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(int argc, char** argv)
{
    char frase[500];
    int tamanho;
    
    gets(frase);
    
    tamanho = strlen(frase);
    
    if(tamanho<141){
        cout<<"TWEET"<<endl;    
    }else{
        cout<<"MUTE"<<endl;
    }
    
    return 0;
}
