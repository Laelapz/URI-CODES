/*Codigo numero: 2147
Em: C++
Com titulo: Galopeira*/ 


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
    int c, cont, cont2;
    vector <char> letras;
    char l, j;
    cin>>c;
    
    for(int i=0;i<c;i++){
        cin>>j>>j;
        cont=2;
        cont2=0;
        while(l!='a'){
             cin>>l;
             cont++;
             if(cont==100){
                 cont2++;
                 cont=0;
             }  
        }
        l='b';
        if(cont>9){
            cout<<cont2<<"."<<cont<<endl;
        }else{
            cout<<cont2<<".0"<<cont<<endl;
        }
    }
    return 0;
}
