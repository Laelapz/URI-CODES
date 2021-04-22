/*Codigo numero: 1153
Em: C++
Com titulo: Fatorial*/ 


#include <iostream>
using namespace std;

int main(){
    int N, i, num, tot;
    
    cin>>N;

    int fatorial[N];
    num=0;
     
        
    for(i=0;i<N;i++){
        fatorial[i]=N-num;
        num++;
    }
    
    tot=fatorial[0];
    
    for(i=1;i<N;i++){
        tot=tot*fatorial[i];
    }
    
    cout<<tot<<endl;
    
    return 0;
}
