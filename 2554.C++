/*Codigo numero: 2554
Em: C++
Com titulo: Pizza*/ 


#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int N;
    while(cin>>N){
        int D, t=-1, val, cont=0;
        cin>>D;
        int Datas[D][3];
        char any;
        
        for(int i=0;i<D;i++){
            for(int j=0;j<3;j++){
                cin>>Datas[i][j];
                if(j<2){
                    cin>>any;
                }
            }
            
            for(int k=0;k<N;k++){
                cin>>val;
                if(val==1){
                    cont++;
                }
                if(cont==N and t==-1){
                    t=i;
                    break;
                }
            }
            cont=0;
        }
        if(t!=-1){
            cout<<Datas[t][0]<<"/"<<Datas[t][1]<<"/"<<Datas[t][2]<<endl;
        }else{
            cout<<"Pizza antes de FdI"<<endl;
        }
    }
    return 0;
}
