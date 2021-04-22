/*Codigo numero: 1961
Em: C++
Com titulo: Pula*/ 


#include <iostream>
using namespace std;
int main(){
    int P, N, i;
    cin>>P>>N;
    
    int num[N];
    
    for(i=0;i<N;i++){
        cin>>num[i];
    }
    
    for(i=0;i<N-1;i++){
        if(num[i+1]>num[i] and num[i]+P<num[i+1]){
            cout<<"GAME OVER"<<endl;
            break;
        }
        else if(num[i+1]<num[i] and num[i]-P>num[i+1]){
            cout<<"GAME OVER"<<endl;
            break;
        }
    }
    
    if(i==N-1){
        cout<<"YOU WIN"<<endl;
    }
    
    return 0;
}
