/*Codigo numero: 2502
Em: C++
Com titulo: Decifrando*/ 


#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
    int C, N, cont;
    while(cin>>C>>N){
        char palavra[C];
        char key[C];
    
        fgets(palavra, C+1, stdin);
        fgets(palavra, C+1, stdin);
        for(int i=0;i<C;i++){
            palavra[i]=tolower(palavra[i]);
        }
        
        fgets(key, C+1, stdin);
        fgets(key, C+1, stdin);
        for(int i=0;i<C;i++){
            key[i]=tolower(key[i]);
        }
        
        for(int i=0;i<N;i++){
            char cod[1000];
            int comp[1000];
            if(i==0){
                fgets(cod, 1000, stdin);
            }
            fgets(cod, 1000, stdin);
            cont=strlen(cod);
        
            for(int i=0;i<cont;i++){
                if(isupper(cod[i])){
                    comp[i]=i;
                }
                cod[i]=tolower(cod[i]);
                
                for(int j=0;j<C;j++){
                    if(cod[i]==palavra[j]){
                        cod[i]=key[j];
                    }
                    else if(cod[i]==key[j]){
                        cod[i]=palavra[j];
                    }
                    else if(cod[i]==' '){
                        cod[i]=' ';
                    }else{
                        cod[i]=cod[i];
                    }
                }
            }
        
            for(int i=0;i<cont;i++){
                if(i==comp[i]){
                    cod[i]=toupper(cod[i]);
                    cout<<cod[i];
                    comp[i]=-1;
                }else{
                    cout<<cod[i];
                }
            }
        }
        cout<<endl;
    }
    
    return 0;   
}
