/*Codigo numero: 1073
Em: Python
Com titulo: Quadrado*/ 


n = int(input())

for i in range(n+1):
    if(i%2==0 and i!=0):
        print("{}^2 = {}".format(i, i*i))
        
