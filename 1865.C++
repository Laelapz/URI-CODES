/*Codigo numero: 1865
Em: C++
Com titulo: Mjölnir*/ 


#include <iostream>
using namespace std;

int main()
{
    int N, i, forca;
    string nome;
    cin>>N;
    
    for(i=0;i<N;i++){
        cin>>nome>>forca;
        if(nome=="Thor"){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
        
        
    return 0;
}
