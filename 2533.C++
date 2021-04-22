/*Codigo numero: 2533
Em: C++
Com titulo: Estágio*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    while(cin>>N){
        double val1=0, val2=0, tot, temp1[N], temp2[N];
        
        for(int i=0;i<N;i++){
            cin>>temp1[i]>>temp2[i];
            val1=val1+(temp1[i]*temp2[i]);
            val2=val2+temp2[i];
        }
        val2=val2*100;
        tot=val1/val2;
        
        cout<<fixed<<setprecision(4)<<tot<<endl;
    }
    return 0;
}
