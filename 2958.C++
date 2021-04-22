/*Codigo numero: 2958
Em: C++
Com titulo: O*/ 


#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char** argv)
{
    int N, M, val;
    char S;
    priority_queue <int> mypqv;
    priority_queue <int> mypqd;
    
    cin>>N>>M;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>val>>S;
            
            if(S=='V'){
                mypqv.push(val);
            }else{
                mypqd.push(val);
            }
            
        }
    }
    
    while(!mypqv.empty()){
        cout<<mypqv.top()<<"V"<<endl;
        mypqv.pop();
    }
    
    while(!mypqd.empty()){
        cout<<mypqd.top()<<"D"<<endl;
        mypqd.pop();
    }
    
    return 0;
}

