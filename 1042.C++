/*Codigo numero: 1042
Em: C++
Com titulo: Sort*/ 


#include <iostream>
using namespace std;

int main(){
int i;
double a, b, c;
cin>>a>>b>>c;

if(a<b and a<c){
    cout<<a<<endl;}

if(b<a and b<c){
    cout<<b<<endl;}

if(c<b and c<a){
    cout<<c<<endl;}

if(a<b and a>c or a>b and a<c){
    cout<<a<<endl;}

if(b<a and b>c or b>a and b<c){
    cout<<b<<endl;}

if(c<b and c>a or c>b and c<a){
    cout<<c<<endl;}

if(a>b and a>c){
    cout<<a<<endl;}

if(b>a and b>c){
    cout<<b<<endl;}

if(c>b and c>a){
    cout<<c<<endl;}

    cout<<""<<endl;

cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;

  return 0;
}

