/*Codigo numero: 2061
Em: C++
Com titulo: As*/ 


#include <iostream>
using namespace std;
int main(){
    int N, M, i;
    string A;
    cin>>N>>M;
    
    for(i=0;i<M;i++){
        cin>>A;
        if(A=="fechou"){
            N++;
        }else{
            N--;
        }
    }
    cout<<N<<endl;
    
    return 0;
}
