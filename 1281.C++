/*Codigo numero: 1281
Em: C++
Com titulo: Ida*/ 


#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main(int argc, char** argv)
{
    int N, rot=0;
    double q, val;
    string tipo;
    map<string, double> produtos;
    map<string, double>::iterator temp;
    
    cin>>N;
    
    while(rot<N){
        double total=0;
        cin>>q;
        
        for(int i=0;i<q;i++){
            cin>>tipo>>val;
            produtos.insert({tipo,val});
        }
        
        cin>>q;
        for(int i=0;i<q;i++){
            cin>>tipo>>val;
            temp = produtos.find(tipo);
            total=total+(temp->second*val);
        }
        
        produtos.clear();
        rot++;
        cout<<"R$ "<<fixed<<setprecision(2)<<total<<endl;
    }
    
    return 0;
}
