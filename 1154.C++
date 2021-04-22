/*Codigo numero: 1154
Em: C++
Com titulo: Idades*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    double cont, soma, tot;
    
    num=0;
    soma=0;
    cont=0;
    cin>>num;
    while(num>=0){
        soma=soma+num;
        cont++;
        cin>>num;
    }
    
    tot=soma/cont;
    
    cout<<fixed<<setprecision(2)<<tot<<endl;;
    
    return 0;
}
