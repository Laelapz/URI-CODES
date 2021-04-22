/*Codigo numero: 1071
Em: C++
Com titulo: Soma*/ 


#include <iostream>
using namespace std;

int main(){
int x, y, med, i;

cin>>x>>y;
med=0;

if(x+1<y){
for(i=x;i<y;i++){
    if(i%2!=0){med=med+i;}
    }}else{
    for(i=y+1;i<x;i++){
    if(i%2!=0){med=med+i;}}}

    cout<<med<<endl;

    return 0;
}

