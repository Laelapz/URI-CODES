/*Codigo numero: 1116
Em: C++
Com titulo: Dividindo*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double X, Y, DIV;
int N, i;

cin>>N;

for(i=0;i<N;i++){
    cin>>X>>Y;
    if(Y==0){cout<<"divisao impossivel"<<endl;
    }else{
        DIV=X/Y;
        cout<<fixed<<setprecision(1)<<DIV<<endl;}

}
return 0;}


