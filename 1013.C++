/*Codigo numero: 1013
Em: C++
Com titulo: O*/ 


#include <iostream>
using namespace std;
int main(){

int i,tot;
int vet[3];
tot=0;

for(i=0;i<3;i++){
    cin>>vet[i];
    if(vet[i]>tot){tot=vet[i];}

}
cout<<tot<<" eh o maior"<<endl;

return 0;
}

