/*Codigo numero: 1847
Em: C++
Com titulo: Bem-vindos*/ 


#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin>>a>>b>>c;
    
    if(a>b and c>=b){
        cout<<":)"<<endl;
    }
    else if(a>b and b-c<a-b){
        cout<<":)"<<endl;
    }
    else if(a>b and b-c>=a-b){
        cout<<":("<<endl;
    }
    else if(b>a and b>=c){
        cout<<":("<<endl;
    }
    else if(b>a and b-a>c-b){
        cout<<":("<<endl;
    }
    else if(b>a and b-a<=c-b){
        cout<<":)"<<endl;
    }
    else if(a==b and c>b){
        cout<<":)"<<endl;
    }
    else if(a==b and c<=b){
        cout<<":("<<endl;
    }
    
    
    return 0;
}
