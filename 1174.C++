/*Codigo numero: 1174
Em: C++
Com titulo: Seleçao*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A[100];
    int i;
    
    for(i=0;i<100;i++){
        cin>>A[i];
    }
    for(i=0;i<100;i++){
        if(A[i]<=10){
            cout << "A[" << i << "] = " <<fixed<<setprecision(1)<< A[i] << endl;
        }
    }
    
    return 0;
}
