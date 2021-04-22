/*Codigo numero: 1960
Em: C++
Com titulo: Numeração*/ 


#include <iostream>
using namespace std;

int main(){
    int centenas, dezenas, unidades, val ;
    cin>>val;
    
    if(val>=100){
        centenas=val/100;
        val=val-(centenas*100);
        
        
    }
    
    if(val>=10){
        dezenas=val/10;
        val=val-(dezenas*10);
        
    }
    
    if(val>=1){
        unidades=val/1;
        val=val-(unidades*1);
        
    }

    
    if(centenas==1){
        cout<<"C";
    }
    else if(centenas==2){
        cout<<"CC";
    }
    else if(centenas==3){
        cout<<"CCC";
    }
    else if(centenas==4){
        cout<<"CD";
    }
    else if(centenas==5){
        cout<<"D";
    }
    else if(centenas==6){
        cout<<"DC";
    }
    else if(centenas==7){
        cout<<"DCC";
    }
    else if(centenas==8){
        cout<<"DCCC";
    }
    else if(centenas==9){
        cout<<"CM";
    }
    
    
    
    if(dezenas==1){
        cout<<"X";
    }
    else if(dezenas==2){
        cout<<"XX";
    }
    else if(dezenas==3){
        cout<<"XXX";
    }
    else if(dezenas==4){
        cout<<"XL";
    }
    else if(dezenas==5){
        cout<<"L";
    }
    else if(dezenas==6){
        cout<<"LX";
    }
    else if(dezenas==7){
        cout<<"LXX";
    }
    else if(dezenas==8){
        cout<<"LXXX";
    }
    else if(dezenas==9){
        cout<<"XC";
    }
    
    
    
    if(unidades==1){
        cout<<"I";
    }
    else if(unidades==2){
        cout<<"II";
    }
    else if(unidades==3){
        cout<<"III";
    }
    else if(unidades==4){
        cout<<"IV";
    }
    else if(unidades==5){
        cout<<"V";
    }
    else if(unidades==6){
        cout<<"VI";
    }
    else if(unidades==7){
        cout<<"VII";
    }
    else if(unidades==8){
        cout<<"VIII";
    }
    else if(unidades==9){
        cout<<"IX";
    }
    
    cout<<endl;
    return 0;
}
