/*Codigo numero: 1131
Em: C++
Com titulo: Grenais*/ 


#include <iostream>
using namespace std;

int main(){
    int I, G, E, J, resp, cont1, cont2;

    resp=1;
    cont1=0;
    cont2=0;
    E=0;

    while(resp==1){
        cin>>I>>G;
        if(I>G){cont1++;}
        else if(G>I){cont2++;}
        else if(I==G){E++;}

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>resp;}

        cout<<cont1+cont2<<" grenais"<<endl;
        cout<<"Inter:"<<cont1<<endl;;
        cout<<"Gremio:"<<cont2<<endl;;
        cout<<"Empates:"<<E<<endl;

        if(cont1>cont2)
            {cout<<"Inter venceu mais"<<endl;}
        else
            {cout<<"Gremio venceu mais"<<endl;}

        return 0;
}

