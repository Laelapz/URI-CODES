/*Codigo numero: 2028
Em: C++
Com titulo: Sequência*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int N, i , cont, tot, j;
    cont=1;
    while(cin>>N){
        tot=0;
    
        for(i=0;i<=N;i++){
            tot=tot+i;
        }
        tot=tot+1;
        
        if(N==0){
            cout<<"Caso "<<cont<<": "<<tot<<" numero"<<endl;
            cout<<"0";
        }else{
            cout<<"Caso "<<cont<<": "<<tot<<" numeros"<<endl;
            cout<<"0 ";
        }
        
        for(i=0;i<=N;i++){
            for(j=0;j<i;j++){
                if(i==N and j==i-1){
                   cout<<i;
                }else{
                    cout<<i<<" ";
                }
            }
        }
        cout<<endl;
        cout<<endl;
        cont++;
    }
    return 0;
}
