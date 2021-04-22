/*Codigo numero: 2630
Em: C++
Com titulo: Escala*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    double mult[3]={0.3, 0.59, 0.11};
    string txt;
    cin>>N;
    for(int i=0;i<N;i++){
        int min=256, max=-1, val[3], tot=0;
        cin>>txt;
        if(txt=="min"){
            for(int j=0;j<3;j++){
                cin>>val[j];
                if(val[j]<min){
                    min=val[j];
                }
            }
            cout<<"Caso #"<<i+1<<": "<<min<<endl;
        }
        else if(txt=="max"){
            for(int j=0;j<3;j++){
                cin>>val[j];
                if(val[j]>max){
                    max=val[j];
                }
            }
            cout<<"Caso #"<<i+1<<": "<<max<<endl;
        }
        else if(txt=="mean"){
            for(int j=0;j<3;j++){
                cin>>val[j];
                tot=tot+val[j];
            }
            tot=tot/3;
            cout<<"Caso #"<<i+1<<": "<<tot<<endl;
        }
        else if(txt=="eye"){
            for(int j=0;j<3;j++){
                cin>>val[j];
            }
            tot=(val[0]*mult[0])+(val[1]*mult[1])+(val[2]*mult[2]);
            cout<<"Caso #"<<i+1<<": "<<tot<<endl;
        }
    }   
    
    return 0;
}
