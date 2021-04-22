/*Codigo numero: 1963
Em: C++
Com titulo: O*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    double A, B, div, sub, tot;
    cin>>A>>B;
    
    div=A/100;
    sub=B-A;
    tot=sub/div;
    cout<<setprecision(2)<<fixed;
    cout<<tot<<"%"<<endl;
    return 0;
}
