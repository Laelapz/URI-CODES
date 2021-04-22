/*Codigo numero: 2344
Em: C++
Com titulo: Notas*/ 


#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    if(N==0){
        cout<<"E"<<endl;
    }
    else if(N>0 && N<36){
        cout<<"D"<<endl;
    }
    else if(N>35 && N<61){
        cout<<"C"<<endl;
    }
    else if(N>60 && N<86){
        cout<<"B"<<endl;
    }
    else if(N>85 && N<101){
        cout<<"A"<<endl;
    }
     
    return 0;
}
