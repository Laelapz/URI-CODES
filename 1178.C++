/*Codigo numero: 1178
Em: C++
Com titulo: Preenchimento*/ 


#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
    int i;
    double num;
    
    cin>>num;
    cout<<"N[0] = "<<fixed<<setprecision(4)<<num<<endl;
    for(i=1;i<100;i++){
        
        num=num/2;
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<num<<endl;
    }
    
    return 0;
}
