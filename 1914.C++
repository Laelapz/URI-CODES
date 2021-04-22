/*Codigo numero: 1914
Em: C++
Com titulo: De*/ 


#include <iostream>
using namespace std;

int main()
{
    int N, i, n1, n2, soma;
    string nome1, nome2, deci1, deci2;
    cin>>N;
    
    for(i=0;i<N;i++){
        cin>>nome1>>deci1>>nome2>>deci2;
        cin>>n1>>n2;
        soma=n1+n2;
        
        if(deci1=="PAR" and soma%2==0){
            cout<<nome1<<endl;
        }
        else if(deci1=="IMPAR" and soma%2!=0){
            cout<<nome1<<endl;
        }
        else{
            cout<<nome2<<endl;
        }
    }
        
    return 0;
}
