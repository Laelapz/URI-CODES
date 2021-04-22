/*Codigo numero: 2520
Em: C++
Com titulo: O*/ 


#include <iostream>
using namespace std;

int main(){
    int N, M, X1, Y1, X2, Y2, tot1, tot2, tot;
    while(cin>>N>>M){
    
        int mat[N][M];
    
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>mat[i][j];
                if(mat[i][j]==1){
                    X1=i;
                    Y1=j;
                }
                else if(mat[i][j]==2){
                    X2=i;
                    Y2=j;
                }
            }
        }
    
        if(X1>X2){
            tot1=(X1-X2);
        }else{
            tot1=(X2-X1);
        }
    
        if(Y1>Y2){
            tot2=(Y1-Y2);
        }else{
            tot2=(Y2-Y1);
        }
        tot=tot1+tot2;
    
        cout<<tot<<endl;
    }
    return 0;
}
