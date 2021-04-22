/*Codigo numero: 1177
Em: C++
Com titulo: Preenchimento*/ 


#include <iostream>
using namespace std;
int main(){
    
    int N;
    int num, i;
    N=0;
    
    cin>>num;
    
    for(i=0;i<1000;i++){
        cout<<"N["<<i<<"] = "<<N<<endl;
        N++;
        if(N==num){N=0;}
    }
    
    return 0;
}
