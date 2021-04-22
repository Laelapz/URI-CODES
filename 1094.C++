/*Codigo numero: 1094
Em: C++
Com titulo: Experiências*/ 


#include <iostream>
using namespace std;
int main(){
int N, V, i, tot;
double c, r, s, contc, contr, conts;
string nome;
cin>>N;

c=0;
r=0;
s=0;

for(i=0;i<N;i++){
cin>>V>>nome;
if(nome=="C"){c=c+V;}
if(nome=="R"){r=r+V;}
if(nome=="S"){s=s+V;}
}
tot=c+r+s;

contc=(c*100)/tot;
contr=(r*100)/tot;
conts=(s*100)/tot;

cout<<"Total: "<<tot<<" cobaias"<<endl;
cout<<"Total de coelhos: "<<c<<endl;
cout<<"Total de ratos: "<<r<<endl;
cout<<"Total de sapos: "<<s<<endl;

std::cout.precision(2);
std::cout << std::fixed <<"Percentual de coelhos: "<<contc<<" %"<<endl;
std::cout.precision(2);
std::cout << std::fixed <<"Percentual de ratos: "<<contr<<" %"<<endl;
std::cout.precision(2);
std::cout << std::fixed <<"Percentual de sapos: "<<conts<<" %"<<endl;

return 0;
}

