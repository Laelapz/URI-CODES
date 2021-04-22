/*Codigo numero: 2029
Em: C++
Com titulo: Reservatório*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double V, D, H, A;
    
    while(cin>>V>>D){
        A=3.14*(D/2)*(D/2);
        H=V/A;
        cout<<fixed<<setprecision(2)<<"ALTURA = "<<H<<endl;
        cout<<"AREA = "<<A<<endl;
    }
    
    return 0;
}
