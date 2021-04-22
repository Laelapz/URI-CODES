/*Codigo numero: 1848
Em: C++
Com titulo: Corvo*/ 


#include <iostream>
using namespace std;
int main()
{
    string olhos;
    int cont, tot;
    tot=0;
    cont=0;
    
    while(cont<3){
        getline(cin,olhos);
        while(olhos!="caw caw"){
            if(olhos=="--*"){
                tot=tot+1;
            }
            else if(olhos=="-*-"){
                tot=tot+2;
            }
            else if(olhos=="-**"){
                tot=tot+3;
            }
            else if(olhos=="*--"){
                tot=tot+4;
            }
            else if(olhos=="*-*"){
                tot=tot+5;
            }
            else if(olhos=="**-"){
                tot=tot+6;
            }
            else if(olhos=="***"){
                tot=tot+7;
            }

            getline(cin,olhos);
            
        }
        cont++;
        cout<<tot<<endl;
        tot=0;  
        
    }
    return 0;
}
