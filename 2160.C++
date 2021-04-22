/*Codigo numero: 2160
Em: C++
Com titulo: Nome*/ 


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
    
    if(tamanho<=80){
        cout<<"YES"<<endl;  
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
