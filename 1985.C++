/*Codigo numero: 1985
Em: C++
Com titulo: MacPRONALTS*/ 


#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    int N, i;
    string cod;
    double tot, vzs;
    tot=0;
    
    cin>>N;
    
    for(i=0;i<N;i++){
        cin>>cod>>vzs;  
        if(cod=="1001"){
            tot=tot+vzs*1.50;
        }
        else if(cod=="1002"){
            tot=tot+vzs*2.50;
        }
        else if(cod=="1003"){
            tot=tot+vzs*3.50;
        }
        else if(cod=="1004"){
            tot=tot+vzs*4.50;
        }
        else{
            tot=tot+vzs*5.50;
        }
    
    }
    
    cout<<fixed<<setprecision(2)<<tot<<endl;
    return 0;
}
