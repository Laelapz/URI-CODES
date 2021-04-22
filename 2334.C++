/*Codigo numero: 2334
Em: C++
Com titulo: Patinhos*/ 


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
     unsigned long long int P;
    vector <unsigned long long int> t;
    
    while(cin>>P){
           if(P==-1){
               break;
           }
           else if(P==0){
               t.push_back(P);
           }else{
               t.push_back(P-1);
           }
    }
    
    for(vector <unsigned long long int>::iterator it=t.begin();it!=t.end();it++){
        cout<<*it<<endl;
    }
    
    return 0;
}
