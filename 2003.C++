/*Codigo numero: 2003
Em: C++
Com titulo: Domingo*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int horas, minutos, tot;
    char simbol;
    
    while(cin>>horas>>simbol>>minutos){
        horas=horas*60;
        tot=horas+minutos;
    
        if(tot<=420){
            cout<<"Atraso maximo: 0"<<endl;
        }else{
            tot=tot-480+60;
            cout<<"Atraso maximo: "<<tot<<endl;
        }
    }
        
    return 0;
}
