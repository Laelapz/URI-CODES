/*Codigo numero: 2136
Em: C++
Com titulo: Amigos*/ 


#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    map <string, string> lista;
    map<int, string> winner;
    map<string, string> maisuma;
    map<int, string>::iterator comp;
    map<string, string>::iterator it;
    string nome, Op;
    
    cin>>nome>>Op;
    
    while(nome!="FIM"){
        it = lista.find(nome);
        if(it==lista.end()){
            if(Op=="YES"){
                lista.insert(pair<string, string>(nome, Op));
                int tam = nome.size();
                winner.insert(pair<int, string>(tam, nome));
            }else{
                maisuma.insert(pair<string, string>(nome, Op));
            }
        }
         cin>>nome;
         if(nome=="FIM"){
             break;
         }
         cin>>Op;
    }
    
    for(it=lista.begin();it!=lista.end();it++){
        cout<<it->first<<endl;
    }
    
    for(it=maisuma.begin();it!=maisuma.end();it++){
        cout<<it->first<<endl;
    }
    
    cout<<endl;
    
    comp=winner.end();
    comp--;
    
    
    cout<<"Amigo do Habay:"<<endl;
    cout<<comp->second<<endl;
    return 0;
}
