/*Codigo numero: 1179
Em: C++
Com titulo: Preenchimento*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int num, fim, p, i, j, cont;
    int par[5];
    int impar[5];
    p=0;
    i=0;
    fim=0;
    cont=0;
    
    
    while(fim<15){
        
        cin>>num;
        
        if(num%2==0){
            par[p]=num;
            p++;
        }
        else{
            impar[i]=num;
            i++;
        }
        
        if(p==5){
            for(j=0;j<5;j++){
                cout<<"par["<<j<<"] = "<<par[j]<<endl;
                p=0;
            }
            cont=cont+5;
        }
        
        if(i==5){
            for(j=0;j<5;j++){
                cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
                i=0;
            }
            cont=cont+5;
        }
        
        fim++;
    }
    
    if(cont>=10 and cont<15){
        for(j=0;j<i;j++){
            cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
        }
    }
        
    
    if(cont>=10 and cont<15){
            for(j=0;j<p;j++){
                cout<<"par["<<j<<"] = "<<par[j]<<endl;
            }
        }
        
    return 0;
}
