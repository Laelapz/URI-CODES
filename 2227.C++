/*Codigo numero: 2227
Em: C++
Com titulo: Aeroporto*/ 


#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main()
{
    int A, V, x, y, m, cont=0;
    cin>>A>>V;
    
    
    while(A != 0 && V != 0){
        cont++;
        vector <int> v[A+1];
        m=0;
        
        for(int i=0;i<V;i++){
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        
        
        for(int i=1;i<=A;i++){
            if(v[i].size()>m){
                m=v[i].size();
            }
        }
        
        cout<<"Teste "<<cont<<endl;
        for(int i=1;i<=A;i++){
            if(v[i].size()==m){
                cout<<i<<" ";
                
            }
        }
        cout<<endl;
        cout<<endl;
    
        
        cin>>A>>V;
    }
    
    return 0;
}
