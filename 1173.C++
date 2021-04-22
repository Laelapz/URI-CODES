/*Codigo numero: 1173
Em: C++
Com titulo: Preenchimento*/ 


#include <iostream>
using namespace std;

int main(){
    int i, tot;
    int vetor[10];
    
    cin>>tot;
    
    cout<<"N[0] = "<<tot<<endl;
    
    for(i=1;i<10;i++){
        tot=tot*2;
        vetor[i]=tot;
        cout<<"N["<<i<<"] = "<<vetor[i]<<endl;
    }
    
    return 0;
}
