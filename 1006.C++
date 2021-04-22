/*Codigo numero: 1006
Em: C++
Com titulo: Média*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    float Const1, Const2, Const3, val1, val2, val3, tot;
    cin>>val1>>val2>>val3;
    
    Const1=2;
    Const2=3;
    Const3=5;
    
    tot=((Const1*val1)+(Const2*val2)+(Const3*val3))/10;
    cout<<fixed<<setprecision(1);
    cout<<"MEDIA = "<<tot<<endl;
    return 0;
}
