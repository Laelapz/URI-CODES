/*Codigo numero: 2139
Em: C++
Com titulo: Natal*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int dia, mes, ano;
    int sub[12]{31,29,31,30,31,30,31,31,30,31,30,31};
    
    while(cin>>mes>>dia){
    ano=366;
    
    for(int i=0;i<mes-1;i++){
        ano=ano-sub[i];
    }
    ano=ano-dia-6;
    
    if(ano>1){
        cout<<"Faltam "<<ano<<" dias para o natal!"<<endl;
    }
    else if(ano==1){
        cout<<"E vespera de natal!"<<endl;
    }
    else if(ano==0){
        cout<<"E natal!"<<endl;
    }else{
        cout<<"Ja passou!"<<endl;;
    }
    }
        
    return 0;
}
