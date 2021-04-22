/*Codigo numero: 1430
Em: C++
Com titulo: Composição*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    double cont1=0, cont2=0;
    char t, ant;
    cin>>t;
    while(t!='*'){
            cin>>t;
            if(t=='/'){
                if(cont1==1){
                    cont2++;
                    cont1=0;
                }
                cont1=0;
                if(ant=='/' && t=='/'){
                    cout<<cont2<<endl;
                    cont2=0;
                }
            }
            else if(t=='W'){
                cont1+=1;
            }
            else if(t=='H'){
                cont1+=1/2.0;
            }
            else if(t=='Q'){
                cont1+=1/4.0;
            }
            else if(t=='E'){
                cont1+=1/8.0;
            }
            else if(t=='S'){
                cont1+=1/16.0;
            }
            else if(t=='T'){
                cont1+=1/32.0;
            }
            else if(t=='X'){
                cont1+=1/64.0;
            }
            ant=t;
    }
    cout<<cont2<<endl;
    return 0;
}
