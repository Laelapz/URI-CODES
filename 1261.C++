/*Codigo numero: 1261
Em: C++
Com titulo: Pontos*/ 


#include <iostream>
#include <map>
using namespace std;

int main(int argc, char** argv)
{
    int N, M, val;
    long long cont=0;
    string cargo;
    map <string, int> mymap;
    map <string, int>::iterator it;
    
    cin>>N>>M;
    
    for(int i=0;i<N;i++){
        cin>>cargo>>val;
        mymap.insert(pair<string, int>(cargo, val));
    }
    
    while(cin>>cargo){
        if(M>1 && cargo=="."){
            cout<<cont<<endl;
            cont=0;
            M--;
        }
        else if(M==1 && cargo=="."){
            cout<<cont<<endl;
            break;
        }
         it = mymap.find(cargo);
         
         if(it!=mymap.end()){
             cont+=it->second;
         }
    }
    
    return 0;
}
