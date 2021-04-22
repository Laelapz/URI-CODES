/*Codigo numero: 2518
Em: C++
Com titulo: Escada*/ 


#include <stdio.h>
#include <math.h>

int main(){
    double N,H,C,L;
    double pitagoras,base,base2,altura,altura2,largura,Area;
    
    while(scanf("%lf %lf %lf %lf",&N,&H,&C,&L)!=EOF){
        altura = N * H;
        base = C * N;
        altura2 = pow (altura,2);
        base2 =  pow (base,2);
        pitagoras = ((sqrt(altura2 + base2))/100);
        largura = L/100;
        Area = largura * pitagoras;
        
        printf("%.4lf\n", Area);
     }
        return 0;
    }
