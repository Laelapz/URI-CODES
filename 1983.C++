/*Codigo numero: 1983
Em: C++
Com titulo: O*/ 


#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool sortbysec(const pair<int,double> &a,
              const pair<int,double> &b)
{
       return a.second<b.second;
}

int main(){
    int N, i;
    vector< pair <int, double> > num;
    cin>>N;
    int N1[N];
    double N2[N];
    
    for(i=0;i<N;i++){
        cin>>N1[i]>>N2[i];
        num.push_back( make_pair(N1[i], N2[i]));
    }
    sort(num.begin(), num.end(), sortbysec);
    
    if(num[N-1].second>=8){
        cout<<num[N-1].first<<endl;
    }else{
        cout<<"Minimum note not reached"<<endl;
    }
    
    return 0;
}
