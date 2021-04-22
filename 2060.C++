/*Codigo numero: 2060
Em: C++
Com titulo: Desafio*/ 


#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    int N, num, dois, tres, quatro, cinco, i;
    cin>>N;
    dois=0; tres=0; quatro=0; cinco=0;
    
    for(i=0;i<N;i++){
        cin>>num;
        if(num%2==0){
            dois++;
        }
        if(num%3==0){
            tres++;
        }
        if(num%4==0){
            quatro++;
        }
        if(num%5==0){
            cinco++;
        }
    }
    cout<<dois<<" Multiplo(s) de 2"<<endl;
    cout<<tres<<" Multiplo(s) de 3"<<endl;
    cout<<quatro<<" Multiplo(s) de 4"<<endl;
    cout<<cinco<<" Multiplo(s) de 5"<<endl;
    
    return 0;
}
