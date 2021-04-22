/*Codigo numero: 1005
Em: C++
Com titulo: Média*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    float Const1, Const2, val1, val2, tot;
    cin>>val1>>val2;
    
    Const1=3.5;
    Const2=7.5;
    
    tot=((Const1*val1)+(Const2*val2))/11;
    cout<<fixed<<setprecision(5);
    cout<<"MEDIA = "<<tot<<endl;
    return 0;
}
